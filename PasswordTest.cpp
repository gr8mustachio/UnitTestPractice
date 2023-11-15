/**
 * Unit Tests for Password class
**/
#include <cctype>
#include <gtest/gtest.h>
#include "Password.h"
#include <regex>
#include <string>
using namespace std;
class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //conmy_passworductor runs before each test
		virtual ~PasswordTest(){} //demy_passworductor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after conmy_passworductor)
		virtual void TearDown(){} //clean up after each test, (before demy_passworductor)
};

TEST(PasswordTest, single_letter_password)

{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}

TEST(PasswordTest, double_letter_password) {
  // set state
  // invoke unit to be tested
  // assert expected outcome
  Password my_password;
  int actual = my_password.count_leading_characters("BB");
  ASSERT_EQ(2,actual);

 }

TEST(PasswordTest, trip_letter_password) {
  // set state
  // invoke unit to be tested
  // assert expected outcome
  Password my_password;
  int actual = my_password.count_leading_characters("BBB");
  ASSERT_EQ(3,actual);

 }
TEST(PasswordTest, quad_letter_password) {
  // set state
  // invoke unit to be tested
  // assert expected outcome
  Password my_password;
  int actual = my_password.count_leading_characters("BBBB");
  ASSERT_EQ(4,actual);

 }
TEST(PasswordTest, quin_letter_password) {
  // set state
  // invoke unit to be tested
  // assert expected outcome
  Password my_password;
  int actual = my_password.count_leading_characters("BBBBB");
  ASSERT_EQ(5,actual);

 }

TEST(PasswordTest, testMixed) {
  // set state
  // invoke unit to be tested
  // assert expected outcome
  Password my_password;
  int actual = my_password.count_leading_characters("BBBBB");
  ASSERT_EQ(5,actual);

 }

TEST(PasswordTest, empty_password) {
    Password my_password;
    bool actual = my_password.has_mixed_case("");
    ASSERT_EQ(0,actual);
}

// TEST(PasswordTest, test_set) {
//   Password my_password;
//   my_password.set("Mcboss1020!!!");
//   my_password.set("ChicoCA-95929");
//   bool actual = my_password.authenticate("ChicoCA-95929");
//   ASSERT_EQ(false, actual);
// }
//jwefohwbweo



/*
bool has_mixed_case(string mystring) {
  int upper = 0;
  int lower = 0;
  for(int i = 0; i < mystring.length(); i++) {
    if(isupper(mystring[i]))
        upper+=1;
    else if(islower(string[i]))
        lower+=1;
  }
  if(upper >= 1 && lower >= 1)
    return true;
  else
    return false;
}
*/
