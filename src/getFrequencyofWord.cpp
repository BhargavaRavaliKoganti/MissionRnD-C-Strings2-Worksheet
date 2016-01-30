/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/
#include<stdio.h>
#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int i = 0;
	int j = 0;
	int k;
	int wordCount = 0;
	for (k = 0; word[k] != '\0'; k++);
	while (str[i] != '\0'){
		if (str[i] == word[j]){
			j++;
			if (word[j] == '\0'){
				j = 0;
				wordCount++;
				i = i - k + 1;
			}
		}
		else {
			j = 0;
		}
		i++;
	}
	return wordCount;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

