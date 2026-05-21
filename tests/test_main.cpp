#include <gtest/gtest.h>
#include "test_config.h"
#include "../src/binary_info.h"
#include "../src/version.h"
TEST(BinaryInfo, NameNotEmpty)    { EXPECT_GT(std::string(BINARY_NAME).size(), 0u); }
TEST(BinaryInfo, VersionNotEmpty) { EXPECT_GT(std::string(get_version()).size(), 0u); }
TEST(BinaryInfo, FlagTest)        { EXPECT_EQ(TEST_SHOULD_FAIL, 0); }
int main(int argc, char** argv) { ::testing::InitGoogleTest(&argc, argv); return RUN_ALL_TESTS(); }
