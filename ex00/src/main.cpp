//
// Created by k.t. on 2023/12/06.
//

#include "whatever.hpp"
#include <iostream>

int main() {
  {
    std::cout << "================SWAP================" << std::endl;
    {
      std::cout << "----------------INT----------------" << std::endl;
      int a = 10;
      int b = 20;
      std::cout << "before a: " << a << std::endl;
      std::cout << "before b: " << b << std::endl;
      ::swap(a, b);
      std::cout << "after a: " << a << std::endl;
      std::cout << "after b: " << b << std::endl;
    }
    {
      std::cout << "----------------CHAR----------------" << std::endl;
      char a = 'a';
      char b = 'b';
      std::cout << "before a: " << a << std::endl;
      std::cout << "before b: " << b << std::endl;
      ::swap(a, b);
      std::cout << "after a: " << a << std::endl;
      std::cout << "after b: " << b << std::endl;
    }
    {
      std::cout << "----------------BOOL----------------" << std::endl;
      bool a = true;
      bool b = false;
      std::cout << "before a: " << a << std::endl;
      std::cout << "before b: " << b << std::endl;
      ::swap(a, b);
      std::cout << "after a: " << a << std::endl;
      std::cout << "after b: " << b << std::endl;
    }
  }
  {
    std::cout << "================MIN================" << std::endl;
    {
      std::cout << "----------------INT----------------" << std::endl;
      int a = 10;
      int b = 20;
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    }
    {
      std::cout << "----------------CHAR----------------" << std::endl;
      char a = 'a';
      char b = 'b';
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    }
    {
      std::cout << "----------------BOOL----------------" << std::endl;
      bool a = true;
      bool b = false;
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    }
  }
  {
    std::cout << "================MAX================" << std::endl;
    {
      std::cout << "----------------INT----------------" << std::endl;
      int a = 10;
      int b = 20;
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    }
    {
      std::cout << "----------------CHAR----------------" << std::endl;
      char a = 'a';
      char b = 'b';
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    }
    {
      std::cout << "----------------BOOL----------------" << std::endl;
      bool a = true;
      bool b = false;
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    }
  }
  return 0;
}