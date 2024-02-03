//
// Created by k.t. on 2023/12/06.
//

#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

template <typename T, typename U>
void test(T lst, U target, bool can_be_found) {
  typename T::const_iterator itr = Easyfind(lst, target);
  bool was_found = itr != lst.end();
  std::cout << target << " should " << (can_be_found ? "" : "not ")
            << "be found" << std::endl;
  if (was_found == can_be_found) {
    std::cout << "ok" << std::endl;
  } else {
    std::cout << "test failed" << std::endl;
  }
}

int main() {
  {
    std::cout << "----------------list----------------" << std::endl;
    std::list<int> lst;
    for (int i = 0; i < 10; ++i) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      test(lst, target, true);
    }
    {
      int target = 100;
      test(lst, target, false);
    }
    {
      int target = 9;
      test(lst, target, true);
    }
  }
  {
    std::cout << "----------------vector----------------" << std::endl;
    std::vector<int> lst;
    for (int i = 0; i < 10; ++i) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      test(lst, target, true);
    }
    {
      int target = 100;
      test(lst, target, false);
    }
    {
      int target = 9;
      test(lst, target, true);
    }
  }
  {
    std::cout << "----------------vector----------------" << std::endl;
    std::vector<int> lst;
    for (int i = 0; i < 10; ++i) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      test(lst, target, true);
    }
    {
      int target = 100;
      test(lst, target, false);
    }
    {
      int target = 9;
      test(lst, target, true);
    }
  }
  return 0;
}