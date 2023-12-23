// Copyright (c) 2023 Jeong0806, All Rights Reserved.
// Author Jeong Seong In (0806jsi@gmail.com)

#include "math/utils.hpp"

#include <cmath>
#include <stdexcept>

namespace jeong0806::math {
auto Add(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("");
  }
  return lhs + rhs;
}
}  // namespace jeong0806::math
