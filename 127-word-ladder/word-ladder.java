class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        //since all words are of the same length
        int L = beginWord.length();

        //Dictionary to hold the combination of words that can be formed, 
        //from any word. By changing one letter at a time.
        Map<String, List<String>> allComboDict = new HashMap<>();

        wordList.forEach(word->{
            for(int i=0;i<L;i++){
                //key is the generic word
                //value is the list of words which have the same intermediate generic word.
                String newWord = word.substring(0,i)+'*'+word.substring(i+1, L);
                List<String> transformations = allComboDict.getOrDefault(newWord, new ArrayList<>());
                transformations.add(word);
                allComboDict.put(newWord, transformations);
            }
        });
        //Queue for BFS
        Queue<Pair<String,Integer>> Q = new LinkedList<>();
        Q.add(new Pair(beginWord, 1));

        //Visisted to make sure we don't repeat processing the same word.
        Map<String, Boolean>visited = new HashMap<>();
        visited.put(beginWord, true);

        while(!Q.isEmpty()){
            Pair<String, Integer> node = Q.remove();
            String word = node.getKey();
            int level = node.getValue() ;
            for(int i=0;i<L;i++){
                //Intermediate words for the current word
                String newWord = word.substring(0,i)+'*'+word.substring(i+1, L);

                //Next states are all the words which share the same intermediate state.
                for(String adjacentWord: allComboDict.getOrDefault(newWord, new ArrayList<>())){
                    //If at any point we find what we are looking for
                    //i.e the endWord - we can return with the answer
                    if(adjacentWord.equals(endWord)){
                        return level+1;
                    }
                    //otherwise add it to the BFS queue and also mark it as visited
                    if(!visited.containsKey(adjacentWord)){
                        visited.put(adjacentWord, true);
                        Q.add(new Pair(adjacentWord, level+1));
                    }
                }
            }
        }
        return 0;
    }
}