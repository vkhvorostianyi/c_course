#include <stdio.h>

int file_open() {
 FILE *f;
 char s[1000];
 
 f=fopen("infile","r");
 if (!f)
  return 1;
 while (fgets(s,1000,f)!=NULL)
  printf("%s",s);
  fclose(f);
  return 0;
}

int main() {
 file_open();
 return 0;
}
