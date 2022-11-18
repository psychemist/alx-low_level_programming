#include "3-calc.h"
/**
 * op_add - adds two numbers, a and b
 * @a: first operand
 * @b: second operand
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one number, b, from another number, a
 * @a: first operand
 * @b: second operand
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers, a and b
 * @a: multiplicand
 * @b: multiplier
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number, a, by another number, b
 * @a: dividend
 * @b: divisor
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  mods one number, a, by another number, b
 * @a: numerator
 * @b: denominator
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
