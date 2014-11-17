#include <stdio.h>
main(int c, char **v){
	FILE *f = fopen(v[1], "a");
	for(setvbuf(f, NULL, _IONBF, 0); (c=getchar()) != EOF; fprintf(f, "%c", c));
}
