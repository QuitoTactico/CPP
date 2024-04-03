#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>

using namespace std;

// Definición de la estructura de nodo para el árbol
struct Node {
    char character;
    int frequency;
    Node *left, *right;
};

// Función para crear un nuevo nodo
Node* getNode(char character, int frequency, Node* left, Node* right) {
    Node* node = new Node();
    node->character = character;
    node->frequency = frequency;
    node->left = left;
    node->right = right;
    return node;
}

// Comparador para ordenar la cola de prioridad
struct Comp {
    bool operator()(Node* l, Node* r) {
        // El nodo con menor frecuencia tiene mayor prioridad
        return l->frequency > r->frequency;
    }
};

// Construye el árbol de Huffman y guarda los códigos en un mapa
void encode(Node *root, string str, unordered_map<char, string> &huffmanCode) {
    if (root == nullptr) return;
    if (!root->left && !root->right) {
        huffmanCode[root->character] = str;
    }
    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

// Función para decodificar un string usando el árbol de Huffman
void decode(Node *root, int &index, string str) {
    if (root == nullptr) {
        return;
    }
    if (!root->left && !root->right) {
        cout << root->character;
        return;
    }
    index++;
    if (str[index] == '0')
        decode(root->left, index, str);
    else    
        decode(root->right, index, str);
}

// Construye el árbol de Huffman y realiza la codificación/decodificación
void buildHuffmanTree(string text) {
    // Cuenta la frecuencia de aparición de cada carácter
    unordered_map<char, int> freq;
    for (char character : text) {
        freq[character]++;
    }

    // Crea una cola de prioridad para almacenar nodos del árbol
    priority_queue<Node*, vector<Node*>, Comp> pq;

    // Crea un nodo hoja para cada carácter y lo agrega a la cola de prioridad
    for (auto pair : freq) {
        pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
    }

    // Itera hasta que haya un solo nodo en la cola
    while (pq.size() != 1) {
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        int sum = left->frequency + right->frequency;
        pq.push(getNode('\0', sum, left, right));
    }

    // Raíz del árbol de Huffman
    Node *root = pq.top();

    // Codifica los caracteres y los almacena en un mapa
    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    cout << "\nLos codigos Huffman son: \n";
    for (auto pair : huffmanCode) {
        cout << pair.first << " " << pair.second << "\n";
    }

    cout << "\nEl mensaje original era: \n" << text << "\n";
    string str = "";
    for (char character : text) {
        str += huffmanCode[character];
    }
    cout << "\nEl texto codificado es: \n" << str << "\n";
    int index = -1;
    cout << "\nEl texto decodificado es: \n";
    while (index < (int)str.size() - 2) {
        decode(root, index, str);
    }
    cout << "\n\n";
}

int main() {
    string text;
    cout << "Ingrese el texto que desea comprimir: ";
    getline(cin, text);
    buildHuffmanTree(text); 
    return 0;
}
