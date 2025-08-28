/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    HashMap<Node, Node> visitedNode = new HashMap<>();
    public Node copyRandomList(Node head) {
        if(head==null){
            return null;
        }
        if(visitedNode.containsKey(head)){
            return visitedNode.get(head);
        }
        Node node = new Node(head.val, null, null);
        visitedNode.put(head, node);
        node.random = copyRandomList(head.random);
        node.next = copyRandomList(head.next);
        return node;
    }
}