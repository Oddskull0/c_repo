#include <stdio.h>

void swap(char *str, int i, int j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}

void reverse_string(char* str, int len) {
    int n = len;
    int center = n / 2 ;
    for () {
        ...
    }
}

int main(int argc, char** args) {
    char reverse_me[] = "dlroW olleH";
    reverse_string(reverse_me,11);
    printf("%s\n", reverse_me);
    return 0;
}


