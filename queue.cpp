#include <cstddef>

struct Node {
  Node* next;
  int value;
};

struct Queue {
  Node* HEAD;
  Node* TAIL;
  Node* NIL;
  size_t size_ = 0; 

  public:
  Queue () {
    NIL = nullptr;
    HEAD = NIL;
    TAIL = NIL;
  }


  void pop() {
    if (HEAD != NIL) {
      if (HEAD == TAIL) {
        if (HEAD != nullptr){
        //delete TAIL;
        delete HEAD;
        HEAD = NIL;
        TAIL = NIL;}
      } 
      else if (HEAD != TAIL) {
        Node* head = HEAD;
        Node* tail = TAIL;
        if (head->next == TAIL) {
          TAIL = HEAD;
          TAIL->next = NIL;
          delete tail;
        }
        else {
          while(head->next != TAIL) {
            head = head->next;
          }
          TAIL = head;
          TAIL->next = NIL;
          delete tail;
        }
      }
      --size_;
    }
  }


 void push(int value) {
    Node* new_el = new Node;
    new_el -> value = value;
    if (HEAD == NIL) {
      new_el -> next = NIL;
      HEAD  = new_el;
      TAIL = new_el;
    }
    else {
     new_el -> next = HEAD ;
    HEAD = new_el;
    }
    ++size_;
    }

Node* front() {
  return HEAD;
}

Node*  back() {
  return TAIL;
}

size_t size() { return size_;}


bool empte() { return size_ == 0;}

};

