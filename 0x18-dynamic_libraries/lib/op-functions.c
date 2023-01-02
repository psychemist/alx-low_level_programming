#include "calc.h"
/**
 * add - adds two numbers, a and b
 * @a: first operand
 * @b: second operand
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts one number, b, from another number, a
 * @a: first operand
 * @b: second operand
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers, a and b
 * @a: multiplicand
 * @b: multiplier
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides one number, a, by another number, b
 * @a: dividend
 * @b: divisor
 * Return: quotient
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod -  mods one number, a, by another number, b
 * @a: numerator
 * @b: denominator
 * Return: remainder
 */
int mod(int a, int b)
{
	return (a % b);
}
