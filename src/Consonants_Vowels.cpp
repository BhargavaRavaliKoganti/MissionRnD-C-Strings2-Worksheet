/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	*consonants = 0;
	*vowels = 0;
	if (str == NULL || str == ""){
		return;
	}
	for (int index = 0; str[index] != '\0'; index++){
		if ((str[index] - 'a' >= 0 && str[index] - 'a' <= 25) || (str[index] - 'A' >= 0 && str[index] - 'A' <= 25)){
			if ((str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u') || (str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U')){
				*(vowels+1);
			}
			else{
				*(consonants + 1);
			}
		}
	}
	return;
}
