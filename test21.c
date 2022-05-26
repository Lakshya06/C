#include <stdio.h>
#include <string.h>

void secondMostFrequent(char *text)
{
	int n = strlen(text);
	if (n == 0)
	{
		return;
	}
	int first = 0;
	int second = -1;
	int record[256];
	
	// Set initial count of character record
	for (int i = 0; i < 256; ++i)
	{
		record[i] = 0;
	}
	
	// Count frequency of character element
	for (int i = 0; i < n; ++i)
	{
		record[text[i]] = record[text[i]] + 1;
	}
	
	// Find second most occurring character
	for (int i = 0; i < n; ++i)
	{
		if (record[text[i]] > record[text[first]])
		{
			second = first;
			first = i;
		}
		else if (record[text[i]] < record[text[first]])
		{
			if (second == -1 || record[text[second]] < record[text[i]])
			{
				second = i;
			}
		}
	}
	printf("\n Given Text : %s", text);
	if (second == -1)
	{
		printf("\n Second most frequent element not exist");
	}
	else
	{
		printf("\n Second most frequent element is : %c", text[second]);
	}
}
int main(int argc, char
	const *argv[])
{
	char *text1 = "xyoxoxx";

	secondMostFrequent(text1);
	return 0;
}
