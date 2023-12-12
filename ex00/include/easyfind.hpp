//
// Created by k.t. on 2023/12/11.
//

#ifndef CONVERT_INCLUDE_EASYFIND_HPP_
#define CONVERT_INCLUDE_EASYFIND_HPP_

#include <algorithm>
#include <iterator>

template <typename T>
typename T::const_iterator Easyfind(T &container, int target) {
  typename T::const_iterator itr = container.begin();
  while (itr != container.end()) {
    if (*itr == target) {
      return itr;
    }
    itr++;
  }
  return itr;
}

#endif // CONVERT_INCLUDE_EASYFIND_HPP_
