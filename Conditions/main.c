#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int NumA=3;
	int NumB,NumC=6;
	int Result=0;

    //_Bool A_bigger;
	bool A_biggest; // 0,1  false,true
	bool B_biggest;

	char MyChar;

	char MyString[10]= {'H','e','l','l','o','!','\n','\0'};
    // 8bit=char 0:255  8*10bits

	printf(MyString);

	NumA=5;
	NumB=8;
    
    // variable constant

    NumC = NumA-2;

    const float Pi =3.14;

    const int MAX_NUMBER_OF_PUPILS = 40; // hbhhbkbkbkbb

	if (NumA>NumC)
	{
	   printf("NumA(%d) is bigger than NumC(%d)\n",NumA,NumC);
		//
		//
		//

	}
	else
	{
       printf("NumA(%d) is not bigger than NumC(%d)\n",NumA,NumC);
	}


    A_biggest= NumA>NumB ? true : false; // trinary conditional sent.
    NumC = NumA>NumB ? 2 : 9; // trinary conditional sent.

	i=i+1;
	I++;
    if (A_biggest==true)  // if(A_is_Biggest!=true) , if(A_is_Biggest!=false)
		printf("NumA(%d) is the biggest \n",NumA);


	int a;
	printf("i am %s %02d %x %X\n", a ? "big" : "small");

	int MyHight;



	if (MyHight>1.8 &&  MyHight <2.0)  //    A  Func  B
		

}
