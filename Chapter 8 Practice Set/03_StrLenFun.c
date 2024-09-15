// Write your own version of strlen function from <string.h>
#include <stdio.h>

int slength(char str[]);

int slength(char str[]) {
    int count = 0;  // Initialize count
    for (int i = 0; str[i] != '\0'; i++)  // Loop until null terminator
    {
        count++;  // Increment count for each character
    }
    return count;  // Return the length of the string
}

int main() {
    char mystring[] = "VICTOR";
    printf("Length of the string: %d\n", slength(mystring));  // Should print 6
    return 0;
}
