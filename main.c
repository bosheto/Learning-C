
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cleanup_pointer(void **p);

void check_pointer(void *p);

int main(void){
    FILE *infile;
    FILE *outfile;

    char *ifile = "test.txt";
    char *ofile = "output.txt";

    infile = fopen(ifile, "r");
    
    if (infile == NULL){
        printf("Error opening file %s\n", ifile);
        exit(1);
    }

    outfile = fopen(ofile, "w");

    if (outfile == NULL){
        printf("Error opening file %s\n", ofile);
        exit(1);
    }

    int ch;
    while (1)
    {
        ch = getc(infile);
        if(ch == EOF){
            break;
        }
        putc(ch, outfile);
    }

    

    fclose(infile);
    fclose(outfile);

    return 0;
} 

void cleanup_pointer(void **p){
    free(*p);
    *p = NULL;
}

void check_pointer(void *p){
	if(p == NULL){
		printf("Pointer is NULL!\n");
		exit(1);
	}
}