//
// Created by k.t. on 2023/12/10.
//

#include <iostream>

#include "Span.hpp"

template <typename T>
void test() {
  {
    std::cout << "<-- default constructor" << std::endl;
    Span<T> s;
    std::cout << "ok" << std::endl;
  }
  {
    std::cout << "<-- copy constructor && copy assignment operator"
              << std::endl;
    Span<T> s1(3);
    s1.AddNumber(0);
    s1.AddNumber(10);
    s1.AddNumber(20);
    Span<T> s2(s1);
    Span<T> s3;
    s3 = s1;
    if (s1.ShortestSpan() == s2.ShortestSpan() &&
        s2.ShortestSpan() == s3.ShortestSpan()) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
  {
    std::cout << "<-- add number normal" << std::endl;
    Span<T> s1(3);
    s1.AddNumber(0);
    s1.AddNumber(10);
    s1.AddNumber(20);
    std::cout << "ok" << std::endl;
  }
  {
    std::cout << "<-- add number exception" << std::endl;
    Span<T> s1(3);
    s1.AddNumber(0);
    s1.AddNumber(10);
    s1.AddNumber(20);
    try {
      s1.AddNumber(21);
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
  }
  {
    std::cout << "<-- add number range normal" << std::endl;
    Span<T> s1(3);
    std::vector<T> vec;
    for (T i = 0; i < 3; ++i) {
      vec.push_back(i);
    }
    s1.AddNumberRange(vec.begin(), vec.end());
    std::cout << "ok" << std::endl;
  }
  {
    std::cout << "<-- add number range exception" << std::endl;
    Span<T> s1(3);
    std::vector<T> vec;
    for (T i = 0; i < 4; ++i) {
      vec.push_back(i);
    }
    try {
      s1.AddNumberRange(vec.begin(), vec.end());
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
  }
  {
    std::cout << "<-- shortest span normal" << std::endl;
    Span<T> s1(3);
    s1.AddNumber(0);
    s1.AddNumber(1);
    s1.AddNumber(10);
    if (s1.ShortestSpan() == 1) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
  {
    std::cout << "<-- shortest span exception" << std::endl;
    Span<T> s1(3);
    try {
      s1.ShortestSpan();
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
    s1.AddNumber(0);
    try {
      s1.ShortestSpan();
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
  }
  {
    std::cout << "<-- longest span normal" << std::endl;
    Span<T> s1(3);
    s1.AddNumber(0);
    s1.AddNumber(1);
    s1.AddNumber(10);
    if (s1.LongestSpan() == 10) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
  {
    std::cout << "<-- longest span exception" << std::endl;
    Span<T> s1(3);
    try {
      s1.LongestSpan();
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
    s1.AddNumber(0);
    try {
      s1.LongestSpan();
    } catch (std::runtime_error &e) {
      std::cout << e.what() << std::endl;
      std::cout << "ok" << std::endl;
    }
  }
  {
    std::cout << "<-- more than 10000 elements" << std::endl;
    Span<T> s(10000);
    for (T i = 0; i < 10000; ++i) {
      s.AddNumber(0);
    }
    if (s.ShortestSpan() == 0 && s.LongestSpan() == 0) {
      std::cout << "ok" << std::endl;
    } else {
      std::cout << "ng" << std::endl;
    }
  }
}

int main() {
  std::cout << "==============INT===============" << std::endl;
  test<int>();
  std::cout << "==============LONG INT===============" << std::endl;
  test<long int>();
  std::cout << "==============UNSIGNED INT===============" << std::endl;
  test<unsigned int>();
  std::cout << "==============SIZE_T===============" << std::endl;
  test<size_t>();
  return 0;
}