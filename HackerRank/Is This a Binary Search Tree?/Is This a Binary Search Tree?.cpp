/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
vector<int> q;

void inorder(Node*root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    q.push_back(root->data);
    inorder(root->right);       
    }
}

bool checkBST(Node* root)
{ 

    if(root==NULL)
        return true;
    inorder(root);
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i]>=q[i+1])
            return false;
    }
    return true;
}
    
