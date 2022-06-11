#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void filling (char words[][30], int N);
void selection (char words[][30], int N);

int main () {
    int N;
    printf("How many words do you want to enter: ");
    scanf("%d", &N);
    char words[N][30];
    filling (words, N);
    printf("\n");
    selection(words, N);
    for (int i = 0; i < N; i++) {
        printf("%s\n", words[i]);
    }
}

void filling (char words[][30], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }
}

void selection (char words[][30], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = N - 1; j > i; j--) {
            if (strcmp (words[j], words[j - 1]) < 0) {
                char temp[30];
                strcpy (temp, words[j]);
                strcpy (words[j], words[j - 1]);
                strcpy (words[j - 1], temp);
            }
        }
    }
}