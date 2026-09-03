#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/**
 * @brief Multiplies two numbers.
 * @param a First number
 * @param b Second number
 * @return The product of a and b
 */
int multiply(int a, int b);

/**
 * @brief Intentionally returns an incorrect sum of two numbers.
 * @param a First number
 * @param b Second number
 * @return An incorrect sum
 */
int bad_add(int a, int b);

#endif // LAB_H