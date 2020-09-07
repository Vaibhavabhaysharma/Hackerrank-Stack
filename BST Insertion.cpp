#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

    Node * insert(Node * root, int value) {
        if (root == NULL) {
            root = new Node(value);
            
            root->data = value;
            root->left = root->right = NULL;
            return root;
        }
        if (value > root->data){
            root->right = insert(root->right, value);
        }
        if (value < root->data) {
            root->left = insert(root->left, value);
        }

        return root;
    }

};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}
