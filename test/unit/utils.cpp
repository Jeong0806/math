// Copyright (c) 2023 Jeong0806, All Rights Reserved.
// Author Jeong Seong In (0806jsi@gmail.com)

#include "math/utils.hpp"

#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <limits>
#include <stdexcept>

#include "gtest/gtest.h"

namespace {
constexpr uint32_t kTestCount = 1000U;
}

namespace jeong0806::math {
TEST(MathUtils, Add) {
  EXPECT_THROW(Add(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),
                   std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Add(1.0 / 0.0, 1.0), std::invalid_argument);

  for (uint32_t i = 0; i < kTestCount; ++i) {
    const auto KSourceX = static_cast<double>(std::rand());
    const auto KSourceY = static_cast<double>(std::rand());

    EXPECT_EQ(Add(KSourceX, KSourceY), KSourceX + KSourceY);
    EXPECT_NE(Add(KSourceX, KSourceY), KSourceX + KSourceY + 1.0);
  }
}

TEST(MathUtils, Subtract) {
  EXPECT_THROW(Subtract(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Subtract(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Subtract(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Subtract(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(),
                        std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Subtract(1.0 / 0.0, 1.0), std::invalid_argument);

  for (uint32_t i = 0; i < kTestCount; ++i) {
    const auto KSourceX = static_cast<double>(std::rand());
    const auto KSourceY = static_cast<double>(std::rand());

    EXPECT_EQ(Subtract(KSourceX, KSourceY), KSourceX - KSourceY);
    EXPECT_NE(Subtract(KSourceX, KSourceY), KSourceX - KSourceY + 1.0);
  }
}

TEST(MathUtils, Multiply){
  EXPECT_THROW(Multiply(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Multiply(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Multiply(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Multiply(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Multiply(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Multiply(std::numeric_limits<double>::infinity(),
                        std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Multiply(1.0 / 0.0, 1.0), std::invalid_argument);
}
}  // namespace jeong0806::math
