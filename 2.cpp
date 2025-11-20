#include <stdio.h>
#include <string.h>
int pal(char word[]) {
    int i = 0, j = strlen(word) - 1;
    while(i < j) {
        if(word[i] != word[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
char* firstPalindrome(char word[][100], int n) {
    for(int i = 0; i < n; i++) {
        if(pal(word[i])) return word[i];
    }
    return (char*)"";
}

int main() {
    char w[5][100] = {
        "abc",
        "racecar",
        "ada",
        "deed",
        "cool"
    };
   int n = 5;
  printf("%s\n", firstPalindrome(w, n));

    return 0;
}

