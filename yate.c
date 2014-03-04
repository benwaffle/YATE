#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

FILE *fp;

void end(int signal){
	fclose(fp);
	exit(0);
}

int main(int argc, char *argv[]){
	if (argc != 2){
		fprintf(stderr, "Usage: %s <file name>\n", argv[0]);
		return 1;
	}

	if ((fp = fopen(argv[1], "a")) == NULL){
		fprintf(stderr, "Error: can't open %s for writing\n", argv[1]);
		return 1;
	}
	
	signal(SIGINT, end);	
	printf("ANYTHING YOU TYPE WILL BE WRITTEN TO THE FILE\n^C TO SAVE AND EXIT\n\n");

	while(1)
		fprintf(fp, "%c", getchar());
}

