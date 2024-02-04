#include <iostream>

#include "MutantStack.hpp"

template <typename T>
void test() {
  {
    std::cout << "<-- default constructor" << std::endl;
    MutantStack<T> ms;
    std::cout << "ok" << std::endl;
  }
  {
    std::cout << "<-- copy constructor & copy assignment" << std::endl;
    MutantStack<T> ms;
    for (int i = 0; i < 10; i++) {
      ms.push(i);
    }
    MutantStack<T> ms2(ms);
    MutantStack<T> ms3 = ms;
    if (ms.size() == ms2.size() && ms.size() == ms3.size()) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
  {
    std::cout << "<-- push & pop" << std::endl;
    MutantStack<T> ms;
    for (int i = 0; i < 10; i++) {
      ms.push(i);
      std::cout << "push " << i << ", top " << ms.top() << std::endl;
    }
    for (int i = 0; i < 10; i++) {
      std::cout << "top " << ms.top() << std::endl;
      ms.pop();
    }
    if (ms.empty()) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
  {
    std::cout << "<-- iterator" << std::endl;
    MutantStack<T> ms;
    for (int i = 0; i < 10; i++) {
      ms.push(i);
    }
    for (typename MutantStack<T>::iterator it = ms.begin(); it != ms.end();
         it++) {
      std::cout << *it << ' ';
    }
    std::cout << std::endl;
  }
  {
    std::cout << "<-- reverse iterator" << std::endl;
    MutantStack<T> ms;
    for (int i = 0; i < 10; i++) {
      ms.push(i);
    }
    for (typename MutantStack<T>::reverse_iterator it = ms.rbegin();
         it != ms.rend(); it++) {
      std::cout << *it << ' ';
    }
    std::cout << std::endl;
  }
}

int main() {
  std::cout << "==================== int ====================" << std::endl;
  test<int>();
  std::cout << "==================== long ====================" << std::endl;
  test<long>();
  return 0;
}
