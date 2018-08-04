#include <stdio.h>

try_two_p();
typedef struct  {
	char name[21];
	char city[21];
	char phone[21];
	char *comment;
} Addr;

Addr *s;
char comm[100];

int main() {
	s = (Addr *)malloc(sizeof(Addr));
	gets(s->name,20);
	gets(s->city, 20);
	gets(s->phone, 20);
	gets(comm, 100);

	s->comment = (char *)malloc(sizeof(char[strlen(comm)+1]));
	strcpy(s->comment, comm);
	try_two_p();
	free(s);
	return 0;
};

int try_two_p() {
	int **p;
	int *q;
	p = (int **)malloc(sizeof(int *));
	*p = (int *)malloc(sizeof(int));
	**p = 12;
	q = *p;
	printf("%d %d\n", *q, **p);
	free(q);
	free(p);
	return 0;
};
