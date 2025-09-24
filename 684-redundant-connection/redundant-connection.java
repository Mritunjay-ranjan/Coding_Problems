class Solution {
    public int[] findRedundantConnection(int[][] edges) {
        //Initialize the parent array where parent[i] represents parent of node i
        int[] parent = new int[edges.length+1];
        for(int i=0;i<=edges.length;i++){
            parent[i]=i; //initially each node is it's own parent
        }

        //Iterate through the edges to find the redundant one
        for(int[] edge: edges){
            int node1 = edge[0];
            int node2 = edge[1];
            //find the roots of node1 and node2
            int root1 = find(node1, parent);
            int root2 = find(node2, parent);

            //if the roots are the same, a cycle is detected, return the current edge
            if(root1==root2){
                return edge;
            }

            //union the sets by making root1 the parent of root2
            parent[root2]=root1;
        }
        //if no cycle is found
        return new int[0];
    }

    //helper function to find the root of a node
    private static int find(int node, int[] parent){
        while(node!=parent[node]){
            parent[node]=parent[parent[node]];
            node = parent[node];
        }
        return node;
    }
}