class Solution {
    public List<Integer> partitionLabels(String s) {
        //Store the last occurance of each character
        int[] lastOccurance = new int[26];
        for(int i=0;i<s.length();i++){
            lastOccurance[s.charAt(i)-'a']=i;
        }

        //Iterate through the string to determine partitions
        List<Integer> result = new ArrayList<>();
        int partitionEnd = 0;
        int partitionStart = 0;

        for(int i=0;i<s.length();i++){
            partitionEnd = Math.max(partitionEnd, lastOccurance[s.charAt(i)-'a']);

            if(i==partitionEnd){
                result.add(partitionEnd - partitionStart + 1);
                partitionStart = partitionEnd + 1;
            }
        }
        return result;
    }
}