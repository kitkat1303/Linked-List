/* LinkedList class creates a linked list object that holds integers. You can
add elements, remove them, see if the list is empty, get the number of elements,
clear the list, or see if a certain integer is in the list. */

#include "LinkedList.h"
#include "Node.h"

// constructor
LinkedList::LinkedList() : IList(), head(0), itemCount(0)
{
}

// destructor
LinkedList::~LinkedList()
{
   clear();
}

int LinkedList::getCurrentSize() const
{
   return itemCount;
}

bool LinkedList::isEmpty() const
{
   return head == 0;
}

bool LinkedList::add(int newEntry)
{

   Node *n = new Node; // create a new node
   n->data = newEntry; // add the newEntry to data
   n->next = head;     // have the new node point to what head points to
   head = n;           // have head point to new node
   itemCount++;        // increment the itemCount by one

   return true;
}

bool LinkedList::remove(int anEntry)
{
   if (head == 0)
   {
      return false; // no node to remove
   }
   // if the first node that heads pointing to contains anEntry
   if (head->data == anEntry)
   {
      Node *temp = head; // create a temp pointer that points to first node
      head = head->next; // move head pointer to next head
      delete temp;       // delete the node that temp pointer is poiting to
      itemCount--;       // decrease itemCount by one
      return true;       // return true that it has been deleted
   }
   // if node to delete is not the first
   Node *curr = head; // create a curr pointer to first element
   while (curr->next != 0)
   {
      if (curr->next->data == anEntry)
      {
         Node *temp = curr->next;
         curr->next = curr->next->next;
         delete temp;
         itemCount--; // decrease itemCount by one
         return true;
      }
   }
   return false;
}

void LinkedList::clear()
{
   Node *curr = head; // create pointer curr that points to same node as head
   while (head != 0)
   {                     // while head does not point to 0
      head = head->next; // move head to point to the next node
      delete curr;       // delete the node that curr is pointing to
      curr = head;       // set curr to point to same as head
   }
}

bool LinkedList::contains(int anEntry)
{

   if (head == 0)
   {
      return false;
   }

   Node *curr = head;

   // traverse list if not first node
   while (curr != 0)
   {
      if (curr->data == anEntry)
      {
         return true;
      }
      traverseCount++;
      curr = curr->next;
   }
   return false;
}
