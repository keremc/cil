// PARAM: --set ana.activated[+] "'file'" --enable  ana.file.optimistic

#include <stdio.h>

int main (){
	FILE *fp;
	fp = fopen("test.txt", "w");

	if(fp!=NULL){
		fprintf(fp, "Testing...");
		fclose(fp);
	}
}

// All ok!
