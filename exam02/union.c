/*
Assignment name : union
Expected files : union.c
Allowed functions: write

Write a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, followed by a \n (new line).

Example
1st String - "pas"

2nd String - "pasquale"

Output - pasquale
*/

#include <unistd.h>
#include <stdio.h>

int is_in(char c, char *s, int i)
{
	int d = 0;
	while (d < i)	
	{
		if (c == s[d])
			return 1;
		d++;
	}
	return 0;
}

int strl(char *s)
{

	int i = 0;
	while (s && s[i])
		i++;
	return i;
}

int	main(int argc, char **argv)
{
	if (argc  == 3 )
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		int i= 0;
		while (s1[i])
		{
			if (!is_in(s1[i], s1, i))
				write(1, &s1[i], 1);
			i++;
		}
		i = 0;
		while (s2[i])
		{
			if (!is_in(s2[i], s2, i) && (!is_in(s2[i], s1, strl(s1))))
				write(1, &s2[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
