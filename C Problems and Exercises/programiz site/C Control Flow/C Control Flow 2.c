#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("ID:2102064\n\n");
   char c;
   int lowercase_vowel, uppercase_vowel;
   printf("Enter an alphabet: ");
   scanf("%c", &c);

   lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
   uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

   if (!isalpha(c))
      printf("Error! Non-alphabetic character.");
   else if (lowercase_vowel || uppercase_vowel)
      printf("%c is a vowel.", c);
   else
      printf("%c is a consonant.", c);

   return 0;
}
