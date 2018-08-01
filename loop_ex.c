#include <stdio.h>

int while_loop(int a) {
	printf("This is while_loop\n");
	printf("Celcius to Farenheint:\n");
	while (a<100) {
	printf("%d => %d\n", a,a*9/5+32);
	a++;
	}
	return 0;
}

int main() {
        int a,b,c;
	printf("Farenheit to Celcius:\n");
        for(a=1; a<100;a++) {
                printf("%d => %d\n", a,(a-32)*5/9);
        };
        while_loop(54);
        return 0;
}
