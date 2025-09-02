/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        int i=0;
        
        while (i < lists.length){
        ListNode list = lists[i];
        while(list!=null){
            minHeap.add(list.val);
            list = list.next;
        }i++;
        }
        ListNode dummy = new ListNode(0);
        ListNode merge = dummy;
        while(!minHeap.isEmpty()){
            merge.next = new ListNode(minHeap.remove());
            merge = merge.next;
        }
        return dummy.next;
    }
}