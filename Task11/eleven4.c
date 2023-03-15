#include <stdio.h>
#include <ctype.h> // For isalpha() and isspace() functions

int main() {
char *text;
int word_count = 0;

printf("Enter a string of text: ");
gets(text); // Input text using pointer

while (*text) { // Loop through text using pointer arithmetic
if (isalpha(*text)) { // If current character is a letter
word_count++; // Increment word count
while (isalpha(*text)) { // Skip to next non-letter character
text++;
}
} else {
text++; // Move to next character
}
}

printf("The number of words in the text is %d.\n", word_count);
return 0;
}

// When run with the input "This is a test", the program outputs:
// The number of words in the text is 4.