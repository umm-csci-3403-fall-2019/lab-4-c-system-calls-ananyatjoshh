#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "file_disemvowel.h"
#include <stdio.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      return true;
     }
    else {
      return false;
    
  }
}


 int copy_non_vowels( int num_chars, char* in_buf, char* out_buf) {
 int len;
 
 len = 0;

 for (int i = 0; i < num_chars; i++){
   if (is_vowel(in_buf[i]) == false ) {
       out_buf[len] = in_buf[i];
           len++;
     }
 }

 return len;
}

 void disemvowel(FILE* inputFile, FILE* outputFile) {
 char* out_buf = (char*)calloc(BUF_SIZE, sizeof(char*));
 char* in_buf = (char*)calloc(BUF_SIZE, sizeof(char*));
 int length = 0;

 while(fgets(in_buf, BUF_SIZE, inputFile) != NULL) {
		 length = copy_non_vowels(strlen(in_buf), in_buf, out_buf);
		 fwrite(out_buf, 1, length, outputFile);
		 }
 free(out_buf);
 free(in_buf);
}

 int main(int argc, char *argv[]) {
   FILE *inputFile;
   FILE *outputFile;

   if (argc == 1) {
     inputFile = stdin;
     outputFile = stdout;
   } else if (argc == 2){
	   inputFile = fopen(argv[1], "r");
	   outputFile = stdout;
   } else if (argc == 3){
	 inputFile = fopen(argv[1], "r");
	 outputFile = fopen(argv[2], "w");
   }

   disemvowel(inputFile, outputFile);
   fclose(inputFile);
   fclose(outputFile);

 }
