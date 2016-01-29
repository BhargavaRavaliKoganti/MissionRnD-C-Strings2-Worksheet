/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	int j = 0;
	int i;
	int k;
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == ' '&& str[i + 1] != ' ' && str[i + 1] != '\0')
			j = i + 1;
	}
	while (1){
		if (str[i - 1] != ' '){
			k = i;
			break;
		}
		i--;
	}
	char *lastWord = (char*)malloc(sizeof(char)*(k-j));
	int val = j;
	int index;
	for (index = 0; index < k - val; index++, j++){
		*(lastWord + index) = *(str + j);
	}
	lastWord[index] = '\0';
	return lastWord;
}
