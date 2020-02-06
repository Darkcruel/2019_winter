#include <stdio.h>

int main() 
{
    char word[101];
    scanf("%s", word);

    int i;
    int answer = 0;
    for (i = 0;; i++) {
        char let = word[i];
        if (let == '\0')
            break;

        if (let == 'n' || let == 'l') {
            if (word[i + 1] == 'j') continue;
        }
        else if (let == 'c' || let == 's' || let == 'z') {
            if (word[i + 1] == '=' || word[i + 1] == '-') continue;
        }
        else if (let == 'd') {
            if (word[i + 1] == '-') continue;
            if (word[i + 1] == 'z' && word[i + 2] == '=') continue;
        }

        answer++;
    }
    printf("%d", answer);
}