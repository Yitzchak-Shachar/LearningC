#include <stdlib.h>

void Print7Boom(int stopOn);
void PrintXBoom(int x,int stopOn);


int main(void)  {

	//Print7Boom(100);
	PrintXBoom(8,20);
}



void Print7Boom(int stopOn){

	if (stopOn <1)
		return;
 
	for (int index=1 ; index <=stopOn; index++) {

		if ( (index % 7) == 0)
			printf(" BOOM "); 
		else	
			printf("%3d",index); 
	}

	printf("\n"); 

}

void PrintXBoom(int x,int stopOn){
 
	for (int index=1 ; index <=stopOn; index++) {

		if ( (index % x) == 0)
			printf(" BOOM "); 
		else	
			printf("%3d",index); 
	}

	printf("\n"); 

}

