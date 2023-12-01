#include <stdio.h>
#include <string.h>

// this fuction will swap the character of the string at postion i with character at postion j.
void swap(char *str, int i, int j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
// this function will use two pointers to traverse the string, pointer (i) will increase and the pointer(j) will decrease. both pointers will stop in the middle of the string. 
void reverse_string(char *str) {
    int end = strlen(str);
    int middle = end / 2 ;
    // homw work finished
    for (int i = 0, j = end - 1; i < middle ; i++, j--){
        swap(str, i, j);  
    }
}
//this function will uses the reverse string function and the swap function to reverse a string. 
int main(int argc, char** args) {
    char reverse_me[] = "dlroW olleH";
    reverse_string(reverse_me);
    printf("%s\n", reverse_me);
    return 0;
}