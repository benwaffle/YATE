int main(int f, char **v, int c){
	for(f = open(v[1], 02101, 0644); (c=getchar()) != EOF; write(f, &c, sizeof(c)));
}
