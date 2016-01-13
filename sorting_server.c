#include "sorting.h"
#include <stdio.h>
#include <stdlib.h> 
#include <signal.h>
#include <sys/time.h>

hrtime_t start, end; //variables for time

int comp(const int *a,const int *b)
{
	return (*a-*b);
}

Array *sort_1(Array *input,CLIENT *c)
{     
        start = gethrtime(); //time before execute sort
        qsort(input->num,input->size,sizeof(int),comp); //library function
        end = gethrtime(); //time after execute sort
        int time1 = (end - start)/100; //execution time
        input->time1=time1; //parse time value to Array
      
        printf("%d\n", time1); //print execution time on server side
	
        return input; //return sorted array
}
	
Array *sort_1_svc(Array *input,struct svc_req *svc)
{
	CLIENT *c;
	return (sort_1(input,c));
}


