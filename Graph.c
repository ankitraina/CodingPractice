/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>


    //structure to represent an adjacency list node
    
    struct AdjListNode{
        int dest;
        struct AdjListNode * next;
        
    };
    
    // a structure to represent an adjacency list
    
    struct AdjList{
        
        struct AdjListNode * head;
    };

//a graph is an array of adjacency list

struct Graph{
    int V ;
    struct AdjList * array;
};

//utility function to create  new adjacency list

struct AdjListNode* newAdjListNode(int dest){
    
    struct AdjListNode * newNode =  (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

//function to create graph of V vertices

struct Graph* createGraph(int V){
    
    struct Graph * graph = (struct Graph *) malloc(sizeof(struct Graph));
    graph->V = V;
    
    //create an array of adjacency list. Size Of array will be V
    graph->array = (struct AdjList*) malloc(V * sizeof( struct AdjList));
    
    //initialize each adjacency list as empty by making head as NULL
    
    int i;
     for ( int i =0 ; i < V; ++i)
         graph->array[i].head = NULL;
         
         return graph;
    }
    
    //add an edge to an undirected graph
    
    void addEdge(struct Graph* graph, int src,  int dest){
        
        //add an edge from src to dest
        // a new node is added to the adjacency list of src int the beginning
        
        struct AdjListNode * newNode = newAdjListNode(dest);
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
        
        //as undirected graph, so add an edge from dest to src AdjListNode
        
        newNode = newAdjListNode(src);
        newNode->next= graph->array[dest].head;
        graph->array[dest].head =newNode;
        
    }

//function to print adjacency list representation of graph


void printGraph(struct Graph * graph){
    
    int v;
    for(v=0; v< graph->V; ++v){
        struct AdjListNode* pCrawl = graph -> array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl) {
        printf("->%d",pCrawl->dest);
        pCrawl = pCrawl->next;
    }
    printf("\n");
   }
}


//main function to test above functions

int main()
{
    //create graph
    
    int V =5;
    struct Graph* graph  = createGraph(V);
    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    
    //print graph
    
    printGraph(graph);
    
    return 0;
    
}














