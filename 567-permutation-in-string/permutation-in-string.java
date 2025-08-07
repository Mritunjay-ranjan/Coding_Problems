class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length()>s2.length()) return false;
        int[] mapS1 = new int[26];
        int[] mapS2 = new int[26];
        for(int i=0;i<s1.length();i++){
            mapS1[s1.charAt(i)-'a']++;
            mapS2[s2.charAt(i)-'a']++;
        }
        for(int i=0;i<=s2.length()-s1.length();i++){
            if(match(mapS1, mapS2)){
                return true;
            }
            mapS2[s2.charAt(i)-'a']--;
            if(i+s1.length()<s2.length())
            mapS2[s2.charAt(i+s1.length())-'a']++;
        }
        return false;
    }
    public boolean match(int[] mapS1, int[] mapS2){
        for(int i=0;i<26;i++){
            if(mapS1[i]!=mapS2[i]){
                return false;
            }
        }
        return true;
    }
}