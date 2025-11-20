#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
char* reverseVowels(char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        while (left < right && !isVowel(str[left])) 
		left++;
        while (left < right && !isVowel(str[right]))
		 right--;
       char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    return str;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Reversed vowel string: %s\n", reverseVowels(str));

    return 0;
}

