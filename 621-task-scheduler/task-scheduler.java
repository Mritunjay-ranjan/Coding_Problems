class Solution {
    public int leastInterval(char[] tasks, int n) {
        //count the frequency of each task
        Map<Character, Integer> freqMap = new HashMap<>();
        for(char task: tasks){
            freqMap.put(task,freqMap.getOrDefault(task, 0)+1);
        }

        //Build a max heap based on frequency
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a,b)->b-a);
        maxHeap.addAll(freqMap.values());

        //process tasks
        int time = 0;
        while(!maxHeap.isEmpty()){
            List<Integer> temp = new ArrayList<>();
            for(int i=0;i<n+1;i++){
                if(!maxHeap.isEmpty()){
                    temp.add(maxHeap.poll());
                }
            }
            for(int freq: temp){
                if(--freq>0){
                    maxHeap.add(freq);
                }
            }
            //update time
            time+=maxHeap.isEmpty()? temp.size(): n+1;
        }
        return time;
    }
}