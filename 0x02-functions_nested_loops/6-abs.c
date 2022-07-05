#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer
 *
 *@a: the integer
 *Auth: Lourdes Mboya
 *Return: 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
		return (a);
}
