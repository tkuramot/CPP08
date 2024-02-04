#include <algorithm>

#include "easyfind.hpp"

template <typename T>
typename T::const_iterator Easyfind(T &container, int target) {
  return std::find(container.begin(), container.end(), target);
}
