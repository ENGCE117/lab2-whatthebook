#include <stdio.h>
#include <string.h>

char* reverse(char str1[]); // Prototype of reverse function

int main() {
    char text[50];   // Array to store the input string
    char *output;    // Pointer to store the reversed string

    // Prompt user for input
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin); // Read input from the user, including spaces
    text[strcspn(text, "\n")] = 0;   // Remove trailing newline character if exists

    // Call the reverse function
    output = reverse(text);

    // Print the reversed string from the main function
    printf("MAIN : %s\n", output);
    return 0;
}

// Function to reverse the string and print it
char* reverse(char str1[]) {
    int length = strlen(str1); // Find the length of the string
    int start = 0, end = length - 1;

    // Reverse the string by swapping characters
    while (start < end) {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }

    // Print the reversed string within the reverse function
    printf("REVERSE FUNCTION : %s\n", str1);

    // Return the reversed string (which is now in the same array)
    return str1;
}
