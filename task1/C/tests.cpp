#include "main.h"
#include <gtest/gtest.h>

TEST(ATest, CheckFirst) {
    ASSERT_EQ(health(), 0);
}

TEST(LibTest, CheckSecond) {
    System system;

    ASSERT_EQ(system.health(), 0);
}
