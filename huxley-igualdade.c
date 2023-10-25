#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 51

int main() {
  char str1[MAX_LENGTH], str2[MAX_LENGTH];
  
  fgets(str1, MAX_LENGTH, stdin);
  fgets(str2, MAX_LENGTH, stdin);
  
  str1[strcspn(str1, "\n")] = '\0';
  str2[strcspn(str2, "\n")] = '\0';
  
  if (strcmp(str1, str2) == 0) {
    printf("IGUAIS\n");
  } else {
    printf("DIFERENTES\n");
  }
  
  return 0;
}