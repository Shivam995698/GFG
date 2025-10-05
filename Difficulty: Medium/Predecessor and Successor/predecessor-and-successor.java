/* BST Node
class Node {
    int data;
    Node left, right;
    Node(int x) {
        data = x;
        left = right = null;
    }
} */

class Solution {
    public ArrayList<Node> findPreSuc(Node root, int key) {
        ArrayList<Node>ans = new ArrayList<>();
        Node predecessor = null;
        Node curr = root;
        while(curr!=null)
        {
            if(curr.data >= key){
                curr = curr.left;
            }
            else{
                predecessor = curr;
                curr = curr.right;
            }
        }
        Node sucessor = null;
         curr = root;
        while(curr!=null)
        {
            if(curr.data <= key){
                curr = curr.right;
            }
            else{
                sucessor = curr;
                curr = curr.left;
            }
        }
        ans.add(predecessor);
        ans.add(sucessor);
        return ans;
        
    }
}