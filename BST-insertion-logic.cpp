/*

node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
   if(root==NULL)
   {
       node* newNode = new node();
       newNode->data = value;
       newNode->left = newNode->right = NULL;
       root = newNode;
   }
   else if(value <= root->data)
   {
       root->left = insert(root->left, value);
   }
   else
   {
       root->right = insert(root->right, value);
   }
   return root;
}

