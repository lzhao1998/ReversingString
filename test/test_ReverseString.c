#include "unity.h"
#include "ReverseString.h"
#include <stdio.h>
#include <stdlib.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_ReverseString_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ReverseString");
}

void test_forfun(void)
{
  char c;
  char *ptr = &c;
  char **ptrPtr = &ptr;
  printf("c is at addr: %p\n",&c);
  printf("ptr is at addr: %p\n",&ptr);
  printf("ptr points to addr: %p\n",ptr);
  printf("ptrPtr is at addr: %p\n",&ptrPtr);
  printf("ptrPtr points to addr: %p\n",ptrPtr);
  printf("ptrPtr points to another pointer at addr: %p\n",*ptrPtr);

  printf("Size of an integer %d\n",sizeof(int));
  printf("Size of an float %d\n",sizeof(float));
  printf("Size of an double %d\n",sizeof(double));
}

void test_getStringLength_given_a_NULL_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,getStringLength(NULL));
}

void test_getStringLength_given_a_0_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,getStringLength(""));
}

void test_getStringLength_given_a_wow_expect_0(void)
{
  TEST_ASSERT_EQUAL(3,getStringLength("wow"));
}

void test_getStringLength_given_a_string_expect_11(void)
{
  TEST_ASSERT_EQUAL(11,getStringLength("combo-wombo"));
}

void test_ReverseString_given_framework_expect_korwemarf(void)
{
  char *str = ReverseString("framework");
  TEST_ASSERT_EQUAL_STRING("krowemarf", str);
  free(str);
}

void test_ReverseString_given_hello_expect_olleh(void)
{
  char *str = ReverseString("hello");
  TEST_ASSERT_EQUAL_STRING("olleh", str);
  free(str);
}

void test_ReverseString_given_har_nani_expect_inan_rah(void)
{
  char *str = ReverseString("har nani");
  TEST_ASSERT_EQUAL_STRING("inan rah", str);
  free(str);
}

void test_ReverseString_given_damnDaniel_expect_leinaDnmad(void)
{
  char *str = ReverseString("damnDaniel");
  TEST_ASSERT_EQUAL_STRING("leinaDnmad", str);
  free(str);
}

void test_ReverseString_given_wow_expect_wow(void)
{
  char *str = ReverseString("wow");
  TEST_ASSERT_EQUAL_STRING("wow", str);
  free(str);
}
