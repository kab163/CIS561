#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  if (argc != 2)
    printf("usage: <exe> <filename>");
  
  FILE *fp;
  
  fp = fopen(argv[1], "r");

  //float *pts = new float[2*numPoints];
  //for (int i = 0; i < numPoints; i++) {
  //    fscanf(fp, "%f %f", &pts[2*i], &pts[2*i+1]);
  //}
  return 0;
}
