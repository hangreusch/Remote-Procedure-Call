const MAXSIZE=10; 
struct Array
{
	int num[MAXSIZE];
	int size;
        int time1;
};
	
typedef struct Array Array;
	
program PROG_SORT{
	version VER_SORT{
	     Array SORT(Array)=1;
	}=1;
}=0x23451111;
