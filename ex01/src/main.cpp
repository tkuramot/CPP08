//
// Created by k.t. on 2023/12/10.
//

#include "iter.hpp"

template <typename T>
void Add_one(T &value) {
  ++value;
}

template <typename T>
void Print(T *arr) {
  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  {
    std::cout << "-----------------INT-----------------" << std::endl;
    int *int_arr = new int[10];
    for (int i = 0; i < 10; ++i) {
      int_arr[i] = 0;
    }
    iter(int_arr, 10, Add_one<int>);
    Print(int_arr);
    delete[] int_arr;
  }
  {
    std::cout << "-----------------CHAR-----------------" << std::endl;
    char *char_arr = new char[10];
    for (int i = 0; i < 10; ++i) {
      char_arr[i] = 'a';
    }
    iter(char_arr, 10, Add_one<char>);
    Print(char_arr);
    delete[] char_arr;
  }
  {
    std::cout << "-----------------LONG-----------------" << std::endl;
    long *long_arr = new long[10];
    for (int i = 0; i < 10; ++i) {
      long_arr[i] = 100;
    }
    iter(long_arr, 10, Add_one<long>);
    Print(long_arr);
    delete[] long_arr;
  }
  return 0;
}