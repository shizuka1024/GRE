#include <stdio.h>

void concat(char str1[100], char str2[100], char out[100]){
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        out[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0') {
        out[j] = str2[i];
        i++;
        j++;
    }
    out[j] = '\0';
} 

int main()
{
    char out[100];
    concat("foo","bar",out);
    printf("%s",out);

    return 0;
}
