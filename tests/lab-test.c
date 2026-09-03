#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL_INT(20, multiply(4, 5));
    TEST_ASSERT_EQUAL_INT(-15, multiply(3, -5));
    TEST_ASSERT_EQUAL_INT(0, multiply(10, 0));
}

void test_bad_add(void) {
    // We expect a + b + 1 based on the logic we put in lab.c
    TEST_ASSERT_EQUAL_INT(6, bad_add(2, 3)); 
    TEST_ASSERT_EQUAL_INT(1, bad_add(0, 0)); 
}

int main(void) {
  UNITY_BEGIN();
  
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_multiply);
  RUN_TEST(test_bad_add);
  
  return UNITY_END();
}