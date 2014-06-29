#include <stdio.h>
main(int i, char**v){
	void *fp = fopen(v[1], "a+");
	int c=0;
	while ((c = getc(fp)) != EOF)
        	putchar(c);	
	for(;;){
		fprintf(fp, "%c", getchar());
		fflush(fp);
	}
}
