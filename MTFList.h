/* MTFList class creates a linked list object that holds integers. You can
add elements, remove them, see if the list is empty, get the number of elements,
clear the list, or see if a certain integer is in the list. It also moves
the most recently accessed elmenet to the front of the list, so that
more frequently accessed elmenets are located near the front of the list. */

#ifndef MTFLIST_
#define MTFLIST_
#include "LinkedList.h"

class MTFList : public LinkedList
{

public:
   /** Constructor that initializes a MTF list and sets travsereCount to 0,
    * head to 0, and itemCount to 0. */
   MTFList();

   /** Tests whether this list contains a given entry and if it does,
    * move the node that contains the entry to the front of the list.
    @param anEntry  The entry to locate.
    @return  True if list contains anEntry, or false otherwise. */
   bool contains(int anEntry);

   /** Moves the node that was found to contain the integer in contains
    * method and moves it to the front of the list.
    * PRE: previousNode and nodeAccessed must be pointers to a node that are
    * within the list.
    * POST: the nodeAccessed will be moved to the front of the list.
   @param *previousNode: the node previous to the one that will be moved to
   the fron of the list. *nodeAccessed the node to be moved to the front
   */
   void moveToFront(Node *previousNode, Node *nodeAccessed);

}; // end MTFList
#include "MTFList.cpp"
#endif