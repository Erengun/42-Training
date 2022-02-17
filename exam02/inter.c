/*
Assignment name : inter
Expected files : inter.c
Allowed functions: write

Write a program that takes two strings and displays, without doubles, the characters that appear in both strings, 
in the order they appear in the first one.

The display will be followed by a \n (new line).

Example
1st String - "pasquale"

2nd String - "pasquale"

Output - pasquale
*/

#include <unistd.h>

int is_in(char c, char *s, int i)
{
	int d  =0;
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
		i = 0;
		while (s1[i])
		{
			if (is_in(s1[i], s1, i + 1) && is_in(s1[i], s2, strl(s2)))
				write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}