#include <stdio.h>

int main() {
	int a[5];

	a[0] = 2;
	a[1] = 4;
	a[2] = 5;
	a[3] = 1;
	a[4] = 6;

	for (int i=0;i<5-1;i++) {
		for (int j=0;j<5-i-1;j++) {
			if (a[j] > a[j+1]) {
				int t = a[j];
				a[j] = a[j+1] ;
				a[j+1] = t;
				printf("a[i]=%d,a[j]=%d,a[j+1]=%d,t=%d\n", a[i],a[j], a[j+1], t);
			};
		};
	};
	for (int i=0;i<5;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
