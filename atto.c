#include <stdio.h>
main(int i, char**v){
	void *f = fopen(v[1], "a+");
	int c=0;
	while ((c = getc(f)) != EOF) putchar(c);
	for(;;){
		fprintf(f, "%c", getchar());
		fflush(f);
	}
}
