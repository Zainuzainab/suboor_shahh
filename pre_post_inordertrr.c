#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;

} Node;

struct Node* createNode(int data){
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode->data =data;
    newNode->left =newNode->right =NULL;
    return newNode;
}
struct Node* insert(struct Node* root,int data){
    if(root==NULL) return createNode (data);
    if(data<root->data)
    root->left = insert(root->left,data);
    else
    root->right = insert(root->right,data);
    return root;
}
void preordertraversal(struct Node* root){
    if (root!= NULL){
        printf("%d ",root->data);
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
}
void inordertraversal(struct Node* root){
    if (root!= NULL){
        inordertraversal(root->left);
        printf("%d ",root->data);
        inordertraversal(root->right);
    }
}
void postordertraversal(struct Node* root){
    if (root!= NULL){
        postordertraversal(root->left);
        postordertraversal(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct Node* root=NULL;
    int values[]={5,3,7,2,4,6,8};
    int n=sizeof(values)/sizeof (values[0]);
    for (int i=0; i<n; i++){
        root=insert(root,values[i]);
    }
    printf("preorder traversal ");
    preordertraversal(root);
    printf("\n");
    printf("inorder traversal ");
    inordertraversal(root);
    printf("\n");
    printf("postorder traversal ");
    postordertraversal(root);
    printf("\n");
    return 0;
}