/* MTFList class creates a linked list object that holds integers. You can
add elements, remove them, see if the list is empty, get the number of elements,
clear the list, or see if a certain integer is in the list. It also moves
the most recently accessed elmenet to the front of the list, so that
more frequently accessed elmenets are located near the front of the list. */
#include "MTFList.h"
using namespace std;

MTFList::MTFList() : LinkedList()
{
}

bool MTFList::contains(int anEntry)
{
   if (head == 0)
   {
      return false;
   }

   if (head->data == anEntry)
   {
      return true;
   }

   Node *curr = head->next;
   Node *prev = head;

   // traverse list if not first node
   while (curr != 0)
   {
      if (curr->data == anEntry)
      {
         moveToFront(prev, curr);
         return true;
      }
      traverseCount++;
      prev = curr;
      curr = curr->next;
   }
   return false;
}

void MTFList::moveToFront(Node *previousNode, Node *nodeAccessed)
{

   previousNode->next = nodeAccessed->next;
   nodeAccessed->next = head;
   head = nodeAccessed;
}
