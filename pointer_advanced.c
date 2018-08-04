#include <stdio.h>

typedef struct {
	char name[45];
	char city[50];
	char state[10];
} Rec;

typedef Rec *RecPointer;

int main() {
 RecPointer r;
 r = (RecPointer)malloc(sizeof(Rec));

 strcpy((*r).name, "Slava");
 strcpy((*r).city, "Kyiv");
 strcpy(r->state, "K");
 printf("%s %s\n", (*r).city,r->name);
 free(r);
 return 0;
}
