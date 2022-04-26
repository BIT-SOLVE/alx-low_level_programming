#include "main"

_strchr - locate character in string
@s: source string
@c: character to find
Return: the string from character found
*_strchr(char *s, char c)
	int a = 0, b;
	while (s[a])
{
	a++;
}
for (b = 0; b <= a; b++)
{
	if (c == s[b])
	{
		s += b;
		return (s);
	}
}
return ('\0');
