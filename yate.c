int main(FILE *f, char **v, int c){
	for(f = fopen(v[1], "a"), setvbuf(f, NULL, _IONBF, 0); (c=getchar()) != EOF; fprintf(f, "%c", c));
}
