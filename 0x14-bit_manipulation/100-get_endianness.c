#include "main.h"

/**
 * get_endianness - checks the endian format used to store multi-byte data
 * Return: 0 (big endian) or 1 (little endian)
 */

int get_endianness(void)
{
	/* have a 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian would stores least significant byte, 00 in largest location */
	/* little would store most significant byte, 01, in largest location*/

	int n = 0x00000001;
	char *c = (char *) &n;

	return (c[0]);
}
