#include "sorting.h"
#include <stdio.h>
#include <stdlib.h> /* getenv, exit */

void prog_sort_1(char *host,Array *input)
{
	CLIENT *c;
	int i;
	
	c=clnt_create(host,PROG_SORT,VER_SORT,"tcp"); //create tcp connection
	if(c==NULL)
	      exit(1);
	
	input=sort_1(input,c);
	clnt_destroy(c);
	
	printf("Sorted array using quick sort:");
	for(i=0;i<input->size;i++) //print sorted array
	      printf("\t %d ", input->num[i]);
        printf("\n");

        printf("Time is: %d\n", input->time1); //print execution time
	
}


int main(int argc,char *argv[])
{
	int i=0;
	char *host=argv[1];
	Array input;
        int nu;

        FILE *file = fopen("inputfileC1.txt", "r"); //read input file
        
        while(fscanf(file, "%d", &nu) == 1)
        {
              input.num[i] = nu; //read number in input file to array
              i++;
        }
        input.size=i;
 
	prog_sort_1(host,&input); //sort array
        fclose(file); //close input file
	return 0;
}
