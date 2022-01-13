#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));

   return (0);
}

#include <unistd.h>
main()
{
   char buf[80];
   getcwd(buf, sizeof(buf));
   printf("current working directory : %s\n", buf);
}

int main()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while (token != NULL)
   {
      printf(" %s\n", token);

      token = strtok(NULL, s);
   }

   return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
   // Define a pointer of type char, a string and the substring to be found
   char *ptr;
   char s1[] = "Aticleworld.com";
   char s2[] = ".com";
   // Find memory address where s2 ",com" is found in s1
   ptr = strstr(s1, s2);
   // Print out the character at this memory address, i.e. '.'
   printf("%c\n", *ptr);
   // Print out return string"
   printf("%s\n", ptr);
   return 0;
}

// Some important points related to strstr function:
// 1.) We must include string.h header file before using the strstr function in C.
// 2.) The strstr function returns a null pointer if the string is not found. Let’s see an example code,

#include <stdio.h>
#include <string.h>
int main()
{
   // Define a pointer of type char, a string and the substring to be found
   char *ptr;
   char s1[] = "Aticleworld.com";
   char s2[] = "ABC";

   // Find memory address where s2 "ABC" is found in s1
   ptr = strstr(s1, s2);
   if (ptr == NULL)
   {
      // Sub string not found
      printf("Sub string not found");
   }
   else
   {
      // Print out return string"
      printf("%s\n", ptr);
   }

   return 0;
}

// 3.) If s2 points to a string with zero length, the function returns s1.

#include <stdio.h>
#include <string.h>
int main()
{
   // Define a pointer of type char, a string and the substring to be found
   char *ptr;
   char s1[] = "Aticleworld.com";
   char s2[] = "";
   // Find memory address where s2 "ABC" is found in s1
   ptr = strstr(s1, s2);
   if (ptr == NULL)
   {
      // Sub string not found
      printf("Sub string not found");
   }
   else
   {
      // Print out return string"
      printf("%s\n", ptr);
   }
   return 0;
}
