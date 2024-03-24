#include "queue.cpp"
#include <iostream>
#include <string> 

int main() {
    auto q = Queue();
    if (q.back() != q.NIL) {
        std::cout << "BACK ERROR" << std::endl;
    }
    if (q.empty() != 1) {
        std::cout<< "EMPTY ERROR" << std::endl;
    }
    if (q.size() != 0) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    q.push(1);
    if (q.size() != 1) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.front()->value != 1) {
        std::cout << "PUSH OR FRONT ERROR" << std::endl;
    }
    if (q.back()->value != 1) {
        std::cout << "BACK ERROR" << std::endl;
    }
    q.push(2);
    if (q.size() != 2) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.front()->value != 2) {
        std::cout << "PUSH OR FRONT ERROR" << std::endl;
    }
    if (q.back()->value != 1) {
        std::cout << "BACK ERROR" << std::endl;
    }
    q.push(3);
    if (q.size() != 3) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.front()->value != 3) {
        std::cout << "PUSH OR FRONT ERROR" << std::endl;
    }
if (q.back()->value != 1) {
        std::cout << "BACK ERROR" << std::endl;
    }

    q.pop();
    if (q.size() != 2) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.back()->value != 2) {
        std::cout << "POP OR BACK ERROR" << std::endl;
    }
    if (q.back()->value != 2) {
        std::cout << "BACK ERROR" << std::endl;
    }
    q.pop();
    if (q.size() != 1) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.back()->value != 3) {
        std::cout << "POP OR BACK ERROR" << std::endl;
    }
    if (q.back()->value != 3) {
        std::cout << "BACK ERROR" << std::endl;
    }
    q.pop();
    if (q.size() != 0) {
        std::cout << "SIZE ERROR" << std::endl;
    }
    if (q.front() != q.NIL) {
        std::cout << "POP OR BACK ERROR" << std::endl;
    }
if (q.empty() != 1) {
        std::cout<< "EMPTY ERROR" << std::endl;
    }
if (q.back() != q.NIL) {
        std::cout << "BACK ERROR" << std::endl;
    }
    return 0;
}