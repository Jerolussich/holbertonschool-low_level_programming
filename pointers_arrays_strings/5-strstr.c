#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates first occurrence on the substring in string
 * @needle: pointer
 * @haystack: pointer
 * Return: pointer to byte in s
 **/

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int k = 0;
	int l = 0;
	
	if (needfle[i] == '\0')
	{
		return (haystack);
	}
	for (; needle[l] != '\0'; l++)
	{
	}

	for (; *haystack != '\0'; haystack++)
	{
		j = 0;

		for (; *haystack != needle[j] && needle[j] != '\0'; j++)
		{
		}
		if (*haystack == needle[j])
		{
			k++;
		}

		if (k == l)
		{
			return (haystack - l + 1);
		}
		if (*haystack != needle[j])
		{
			k = 0;
		}
	}
	return (0);

}
