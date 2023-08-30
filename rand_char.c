#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int randomLetter = rand() % 26;
	return letters[randomLetter];
}