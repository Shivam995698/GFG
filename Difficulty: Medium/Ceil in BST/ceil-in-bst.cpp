class Solution {
  public:
    int findCeil(Node* root, int x) {
        if(root==NULL)
        {
            return -1;
        }
        Node* temp = root;
        int ans = -1;
        while(temp)
        {
            if(temp->data == x)
            {
                return temp->data;
            }
            else if(temp->data<x)
            {
                temp = temp->right;
            }
            else{
                ans = temp->data;
                temp = temp->left;
            }
        }
        return ans;
    }
};
