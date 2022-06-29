/* Node struct creates a node that holds an integer and points to
another node. */
#ifndef NODE_
#define NODE_

struct Node
{
public:
   int data;   // data item
   Node *next; // pointer to next node

   /** Constructor that initializes a node
    * that has no data and next points to nullptr */
   Node() : next(0) {}

}; // end of Node struct
#endif