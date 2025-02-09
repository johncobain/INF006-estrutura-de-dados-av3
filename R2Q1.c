#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_C 1000

typedef struct no{
  int val;
  int height;
  struct no *left;
  struct no *right;
  struct no *parent;
} No;