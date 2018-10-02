#include <stdlib.h>
//#include <malloc.h>
#include <stdio.h>
#include <string.h>

const int MAXSTRING = 25;

int main (int argc, char *argv[]) {
  if (argc != 2)
    printf("usage: <exe> <filename>\n\n");
  char* s = (char*)malloc(MAXSTRING);  
  memset(s, '\0', MAXSTRING);
  int num = 0;
  FILE *fp;
  
  fp = fopen(argv[1], "r");
  if(fp == 0) return 1;

  while (!feof(fp)) {
    fscanf(fp, "%s", s); 
    for (int i = 0; i < MAXSTRING; i++) {
      if(s[i] != '\0')
        if(s[i] == 34 || s[i] == 39 || s[i] == 44 || s[i] == 94)
          printf("[%c] ", s[i]);
        
    }
  }
  printf("\n");
 
  return 0;
}
