#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

};

// Create Fibonacci tree
Node* createFiboTree(int val)
{
    Node* node = new Node;
    if (val >= 2) {
        node->left = createFiboTree(val - 1);
        node->right = createFiboTree(val - 2);
        node->val = node->left->val + node->right->val;
    }
    if (val < 2){
        node->val = 1;
        node->left = nullptr;
        node->right = nullptr;
    }
    return node;
}

// Print the Fibonacci tree
void Print(const Node* root)
{
    if (root == nullptr) return;
    cout << root->val << " ";
    Print(root->left);
    Print(root->right);
}

// Cleanup function to free memory
void FreeTree(Node* root)
{
    if (root == nullptr) return;
    FreeTree(root->left);
    FreeTree(root->right);
    delete root;
}

int countNodes(const Node* root)
{
    if (root == nullptr) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
};

int depth(const Node* root)
{
    if (root == nullptr) return 0;
    return 1 + max(depth(root->left), depth(root->right));
}

int countLeafs(const Node* root)
{
    if (root->left == nullptr && root->right == nullptr) return 1;
    return countLeafs(root->left) + countLeafs(root->right);
}



// Wrapper function
void F()
{
    int val;
    cin >> val;
    Node* root = createFiboTree(val);
    cout << "Call tree in pre-order: "; 
    Print(root);
    cout << endl;
    cout << "Call tree size: " << countNodes(root) << endl;
    cout << "Call tree depth: " << depth(root) << endl;
    cout << "Call tree leafs: " << countLeafs(root) << endl;

    FreeTree(root); // Clean up memory
}

int main()
{
    F();
    return 0;
}