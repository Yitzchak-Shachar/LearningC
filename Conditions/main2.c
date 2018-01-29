#include <stdio.h>
#include <stdbool.h>



int main(void)
{

	int NumA=3;
	int NumB,NumC=6;
	int Result=0;

    //_Bool A_bigger;
	bool A_biggest; 
	bool B_biggest;

	

	NumA=5;
	NumB=8;

    NumC = NumA-2;


	for (int indx=0 ; indx <10 ; indx++)
	{


		if (NumA>NumC)
		{
		   printf("NumA(%d) is bigger than NumC(%d)\n",NumA,NumC);
		}
		else
		{
	       printf("NumA(%d) is not bigger than NumC(%d)\n",NumA,NumC);
		}



	    A_biggest= NumA>NumB ? true : false;


		if (A_biggest)
			printf("NumA(%d) is the biggest \n",NumA);


        NumA++;

	}

}
