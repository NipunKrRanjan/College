#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SYMBOL {
    char alpha;
    int freq;
};

struct Node {
    char alpha;
    int freq;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* newNode(char alpha, int freq) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->alpha = alpha;
    node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

// Inorder traversal of the Huffman tree
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("Char: %c, Freq: %d\n", root->alpha, root->freq);
        inorderTraversal(root->right);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    struct SYMBOL s1[n];
    for (int i = 0; i < n; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &s1[i].alpha);  
        printf("Enter frequency of %c: ", s1[i].alpha);
        scanf("%d", &s1[i].freq);
    }
    struct Node* root = newNode(' ', 0);
    root->left = newNode(s1[0].alpha, s1[0].freq);
    root->right = newNode(' ', 0);
    ((struct Node*)root->right)->left = newNode(s1[1].alpha, s1[1].freq);
    ((struct Node*)root->right)->right = newNode(s1[2].alpha, s1[2].freq);

    printf("\nInorder Traversal of Huffman Tree:\n");
    inorderTraversal(root);

    return 0;
}
