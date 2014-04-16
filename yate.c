#include <stdio.h>
main(int i, char**v){
	void *fp = fopen(v[1], "a");
	for(;;){
		fprintf(fp, "%c", getchar());
		fflush(fp);
	}
}