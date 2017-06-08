/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Set this up as a queue
*********************************************************************/
#ifndef BAGOSTUFF_HPP
#define BAGOSTUFF_HPP

class BagOStuff {
private:
  //items in bag 4-6 items in a Queue style
  struct QueueNode {
      Creature* value;
      QueueNode* next;
      QueueNode(Creature* v, QueueNode* n = nullptr){//may not need 2 and 3 args
        value = v;
        next = n;
      }
    };
  QueueNode* front;
  QueueNode* back;
public:
  BagOStuff();
  ~BagOStuff();
  bool bagIsEmpty();

};
#endif
