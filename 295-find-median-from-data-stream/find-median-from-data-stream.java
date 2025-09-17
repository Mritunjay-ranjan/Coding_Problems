class MedianFinder {
    private PriorityQueue<Integer> lo = new PriorityQueue<>((a,b)->b-a); //max heap
    private PriorityQueue<Integer> hi = new PriorityQueue<>();

    public MedianFinder() {
        
    }
    
    //add a number into a datastructure
    public void addNum(int num) {
        lo.offer(num); //add to max heap
        hi.offer(lo.poll()); //add to min heap
        if(lo.size()<hi.size()){  //maintain size property
            lo.offer(hi.poll());
        }
    }
    
    public double findMedian() {
        return lo.size()>hi.size()? lo.peek(): (lo.peek()+hi.peek())/2.0;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */