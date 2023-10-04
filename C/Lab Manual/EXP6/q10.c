#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[]="My name is Rudra";
    char* word = strtok(sentence, " ");

    while (word != NULL) {
        int len = strlen(word);
        int start = 0;
        int end = len - 1;

        while (start < end) {
            char temp = word[start];
            word[start] = word[end];
            word[end] = temp;

            start++;
            end--;
        }

        printf("%s ", word);  

        word = strtok(NULL, " ");
    }
    return 0;
}