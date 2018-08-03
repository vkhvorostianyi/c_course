
int loops(int a, int b) {
	printf("This is 'for' loop\n");
	printf("Farenheit to Celcius\n");
	for(a; a<100;a++) {
        	printf("%d => %d\n", a,(a-32)*5/9);
		}
	printf("This is 'while' loop\n");
	printf("Celcius to Farenheint:\n");
	while (b<100) {
		printf("%d => %d\n", b,b*9/5+32);
		b++;
	}
	return 0;
}
