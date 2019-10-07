#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "file_disemvowel.h"
#include <stdio.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
  char *result = c;
  int a = strlen(c);

  for (int i = 0; i < a; i++){
    if (result[i] == 'a' || result[i] == 'e' || result[i] == 'i' || result[i] == 'o' || result[i] == 'u' || result[i] == 'A' || result[i] == 'E' || result[i] == 'I' || result[i] == 'O' || result[i] == 'U') {
      return true;
     }
    else {
      return false;
    
  }
}


 int copy_non_vowels( int num_chars, char* in_buf, char* out_buf) {
 int len;
 char *result;
 int a;

 a = strlen(str1);
 len = 0;
 result = str1;

 for (int i = 0; i < a; i++){
   if (is_vowel(in_buf[i] == false ) {
       out_buf[len] = in_buf[i];
           len++;
     }
 }

 return len;
}

 char *disemvowel(FILE* inputFile, FILE* outputFile) {
   
}
