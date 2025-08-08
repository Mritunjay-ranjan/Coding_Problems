class Solution {
    public String minWindow(String s, String t) {
        int l = 0;
        int r = 0;
        
        Map<Character, Integer>tMap = new HashMap<>();
        Map<Character, Integer>substrMap = new HashMap<>();

        for(int i=0;i<t.length();i++){
            tMap.put(t.charAt(i), tMap.getOrDefault(t.charAt(i), 0)+1);
        }
        int tUnique = tMap.size();
        int substrUnique = 0;
        int[] ans = {-1, 0, 0};
        while(r<s.length()){
            char c = s.charAt(r);
            substrMap.put(c, substrMap.getOrDefault(c, 0) + 1);
            if(tMap.containsKey(c) && tMap.get(c).intValue()==substrMap.get(c).intValue()){
                substrUnique++;
            }
            while(l<=r && tUnique == substrUnique){
                if(ans[0]==-1 || ans[0]>=r-l+1){
                    ans[0]=r-l+1;
                    ans[1]=l;
                    ans[2]=r;
                }
                substrMap.put(s.charAt(l), substrMap.getOrDefault(s.charAt(l),0)-1);
                if (tMap.containsKey(s.charAt(l)) && substrMap.get(s.charAt(l)).intValue() < tMap.get(s.charAt(l)).intValue()) {
                    substrUnique--;
                }
                l++;
            }
            r++;
        }
        if(t.length()>s.length() || ans[0]==-1){
            return "";
        }
        return s.substring(ans[1], ans[2]+1);
    }
}