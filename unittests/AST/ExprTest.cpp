// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#include "catch.hpp"
#include "soll/AST/AST.h"

TEST_CASE("Expr", "[ast][stmt][expr]") {
  soll::BooleanLiteral literal(true);
  REQUIRE(literal.isRValue());

  SECTION("getValue") { CHECK(literal.getValue()); }

  SECTION("setValue") {
    literal.setValue(false);
    CHECK_FALSE(literal.getValue());
  }
}
