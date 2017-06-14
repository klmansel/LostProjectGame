/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Set this up as a queue or vector
*********************************************************************/
#ifndef BAGOSTUFF_HPP
#define BAGOSTUFF_HPP

class BagOStuff {
private:
  //items in bag 4-6 items in a Queue style
  struct BagNode {
      Creature* value;
      BagNode* next;
      BagNode(Creature* v, BagNode* n = nullptr){
        value = v;
        next = n;
      }
    };
  BagNode* front;
  BagNode* back;
public:
  BagOStuff();
  ~BagOStuff();
  bool bagIsEmpty();

};
#endif
