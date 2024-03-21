#include <cstddef>

struct Node {
  Node* prev;
  Node* next;
  int value;
};

class Stack {
  Node* head;
  Node* tail;
  Node* nil;
  size_t size_ = 0;

 public:
  Stack() {
    nil = nullptr;
    head = nil;
    tail = nil;
  }

  void pop() {
    if (head != nil) {
      auto pop = head;
      head = pop->prev;
      if (head == nil) {
        tail = nil;
      }
      size_--;
      delete pop;
    }
  }

  Node* bottom() { return tail; }
  Node* top() { return head; }

  void push(int value) {
    auto node = new Node();
    node->value = value;
    node->next = nil;
    node->prev = head;
    if (head == nil) {
      tail = node;
    } else {
      head->next = node;
    }
    head = node;
    size_++;
  }

  size_t size() { return size_; }

  bool empty() { return size_ == 0; }
};

