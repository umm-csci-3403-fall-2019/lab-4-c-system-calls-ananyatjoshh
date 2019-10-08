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
 char* out_buf;
 char* in_buf;
 int length = 0;
 
 while(){
 
 }


}
 int main(int argc, char *argv[]) {
   FILE *inputFile;
   FILE *outputFile;

   if (argc == 1) {
     inputFile = stdin;
     outputFile = stdout;
   } else if (argc == 2){
	   inputfile = fopen(argv[1], "r");
	   outputFile = stdout;
   } else if (arc == 3){
	 inputfile = fopen(argv[1], "r");
	 outputfile = fopen(argv[2], "w");
   }

   disemvowel(inputFile, outputFile);
   

 }
