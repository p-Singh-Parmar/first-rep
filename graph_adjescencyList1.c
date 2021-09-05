#include<stdio.h>

//A structure to represnt the adjecency list node
struct AdjListNode {
    int dest;
    struct AdjListNode *next;
};

//A structure to represent an adjecency list
struct AdjListNode{
    struct AdjListNode *head;
};

struct graph{
    int v;
    struct AdjList* array;
};

//a utility fucntion to create a new adjecency list node
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newnode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newnode->next = NULL;
    return newnode;
}

//a utility fucntion that creates a graph of V vertices
struct graph* createGraph(int v)
{
    struct graph* newgraph = (struct graph*) malloc(sizeof(struct graph));
    newgraph->v = v;

    //creates an array of adjecency lists.  Size of array will be v
    newgraph->array = (struct AdjList*) malloc(sizeof(struct AdjList));

    //Initializes each adjecency list as empty by making head as null
    int i;
    for(i=0;i<v;i++)
        graph->array[i].head = NULL;

    return newgraph;
}