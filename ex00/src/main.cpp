//
// Created by k.t. on 2023/12/06.
//

#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

template <typename T, typename U>
void Test(T lst, U target, bool expected) {
  typename T::const_iterator itr = Easyfind(lst, target);
  bool was_found = (itr != lst.end() && *itr == target);

  std::cout << target << " should " << (expected ? "" : "not ") << "be found"
            << std::endl;

  if (was_found == expected) {
    std::cout << "ok" << std::endl;
  } else {
    std::cout << "ng" << std::endl;
  }
}

int main() {
  {
    std::cout << "----------------list----------------" << std::endl;
    std::list<int> lst;
    for (int i = 0; i < 100; i += 2) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      Test(lst, target, false);
    }
    {
      int target = 100;
      Test(lst, target, false);
    }
    {
      int target = 0;
      Test(lst, target, true);
    }
  }
  {
    std::cout << "----------------vector----------------" << std::endl;
    std::vector<int> lst;
    for (int i = 0; i < 100; i += 2) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      Test(lst, target, false);
    }
    {
      int target = 100;
      Test(lst, target, false);
    }
    {
      int target = 0;
      Test(lst, target, true);
    }
  }
  {
    std::cout << "----------------vector----------------" << std::endl;
    std::vector<int> lst;
    for (int i = 0; i < 100; i += 2) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      Test(lst, target, false);
    }
    {
      int target = 100;
      Test(lst, target, false);
    }
    {
      int target = 0;
      Test(lst, target, true);
    }
  }
  {
    std::cout << "----------------empty----------------" << std::endl;
    std::vector<int> lst;
    {
      int target = 5;
      Test(lst, target, false);
    }
    {
      int target = 100;
      Test(lst, target, false);
    }
    {
      int target = 0;
      Test(lst, target, false);
    }
  }
  {
    std::cout << "----------------reverse order----------------" << std::endl;
    std::vector<int> lst;
    for (int i = 100; i >= 0; i -= 2) {
      std::cout << i << " ";
      lst.push_back(i);
    }
    std::cout << std::endl;
    {
      int target = 5;
      Test(lst, target, false);
    }
    {
      int target = 100;
      Test(lst, target, true);
    }
    {
      int target = 0;
      Test(lst, target, true);
    }
  }
  return 0;
}