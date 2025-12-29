/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            pair<Node*,int>p1 = q.front();
            q.pop();
            Node* first = p1.first;
            int hd = p1.second;
            if(mp.find(hd)==mp.end())
            {
                mp[hd] = first->data;
            }
            if(first->left != NULL)
            {
                q.push({first->left,hd-1});
            }
            if(first->right != NULL)
            {
                q.push({first->right,hd+1});
            }
        }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
};