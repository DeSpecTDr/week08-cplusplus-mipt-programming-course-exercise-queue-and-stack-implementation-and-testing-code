#include "stack.cpp"
#include <iostream>

template <class T>
void print(T s) {
  std::cout << s << std::endl;
}

// TODO: make more tests
int main() {
  auto st = Stack();
  st.push(1);
  print(st.top()->value);
  st.push(2);
  print(st.top()->value);
  st.pop();
  print(st.top()->value);
  st.pop();
  st.pop();
  print(st.size());
}
