#include <stdio.h>
#include <string.h>

// this fuction will swap the character of the string at 
// position i with character at position j.
void swap(char *str, int i, int j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
// this function will use two pointers to traverse the string, 
// pointer (i) will increase and the pointer(j) will decrease. 
// both pointers will stop in the middle of the string. 
void reverse_string(char *str) {
    int end = strlen(str);
    int middle = end / 2 ;
    // homework finished
    for (int i = 0, j = end - 1; i < middle ; i++, j--){
        swap(str, i, j);  
    }
}
// this function will uses the reverse string function and 
// the swap function to reverse a string. 
int main(int argc, char** args) {
    FILE* fp_reader = fopen("reverse_me.txt", "r");
    FILE* fp_writer = fopen("reversed.txt", "w");

    if (!fp_reader) {
        printf("Error reading file.\n");
        return 1;
    }

    char buffer[100];
    char NULL_CHARACTER = '\0';
    while (fgets(buffer,100,fp_reader)) {        
        // find out where in the buffer is the newline character 
        size_t new_line_pos = strcspn(buffer, "\n");
        // put a NULL character where the newline was
        buffer[new_line_pos] = NULL_CHARACTER;
        //reverse it
        reverse_string(buffer);
        //write it (and add newline)
        fprintf(fp_writer, "%s\n", buffer);
    }

    fclose(fp_reader);

    // in case there are some characters that weren't written
    // flush them out
    fflush(fp_writer);

    // close the file pointer handle so other programs can open the file
    fclose(fp_writer);
    return 0;
}