#include <stdlib.h>

/**
 * count_words - Helper function to count the number of words in a string,
 * handling multiple spaces between words.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *s)
{
	int in_word_flag, char_index, word_count;

	in_word_flag = 0;
	word_count = 0;

	for (char_index = 0; s[char_index] != '\0'; char_index++)
	{
		if (s[char_index] == ' ')
			in_word_flag = 0;
		else if (in_word_flag == 0)
		{
			in_word_flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * extract_words - Helper function to extract words from a string.
 * @matrix: The array of strings to populate.
 * @str: The string to extract words from.
 */
static void extract_words(char **matrix, char *str)
{
	int i, j, k = 0, len = 0, c = 0, start, end;
	char *tmp;

	while (str[len])
		len++;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					for (j = 0; j < k; j++)
						free(matrix[j]);
					free(matrix);
					return;
				}
				start = i - c;
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
}


/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **matrix;
	int len = 0, words;

	/* Calculate the length of the input string */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	/* Allocate memory for the array of pointers to strings */
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	extract_words(matrix, str);

	return (matrix);
}
