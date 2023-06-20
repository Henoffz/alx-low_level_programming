#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: The string
 *
 * Return: The converted integer
 */

int _atoi(char *s)
{
int i, val, sign;
char c;

i = 0;
val = 0;
sign = -1;
while (s[i] != '\0')
{
c = s[i];
if (c == '-')
sign *= -1;
else if (c >= '0' && c <= '9')
{
if (val < 0)
val = val * 10 - (c - '0');
else
val = (c - '0') * -1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
i++;
}
if (sign < 0)
val *= -1;

return (val);
}
