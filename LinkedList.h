/* LinkedList class creates a linked list object that holds integers. You can
add elements, remove them, see if the list is empty, get the number of elements,
clear the list, or see if a certain integer is in the list. */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "IList.h"
#include "Node.h"

class LinkedList : public IList
{

protected:
   Node *head;    // head that points to first node/element in the list
   int itemCount; // how many elements are in the list

public:
   /** Constructor that initializes a linked list
    * and sets head to point to nullptr. */
   LinkedList();

   /** Destroys object and frees memory allocated by object. */
   ~LinkedList();

   /** Gets the current number of entries in this list.
    @return The integer number of entries currently in the list. */
   int getCurrentSize() const;

   /** Sees whether this list is empty.
    @return True if the list is empty, or false if not. */
   bool isEmpty() const;

   /** Adds a new entry to this list.
    @post  If successful, newEntry is stored in the list and
       the count of items in the list has increased by 1.
    @param newEntry  The object to be added as a new entry.
    @return  True if addition was successful, or false if not. */
   bool add(int newEntry);

   /** Removes one occurrence of a given entry from this list,
       if possible.
    @post  If successful, anEntry has been removed from the list
       and the count of items in the list has decreased by 1.
    @param anEntry  The entry to be removed.
    @return  True if removal was successful, or false if not. */
   bool remove(int anEntry);

   /** Removes all entries from this list.
    @post  List contains no items, and the count of items is 0. */
   void clear();

   /** Tests whether this list contains a given entry.
    @param anEntry  The entry to locate.
    @return  True if list contains anEntry, or false otherwise. */
   bool contains(int anEntry);

}; // end LinkedList

#include "LinkedList.cpp"
#endif
