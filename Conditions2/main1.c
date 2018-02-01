#include <stdio.h>
#include <stdbool.h>

//#include <conio.h>

int main(void)
{
	int input;
    printf("Press any key:\n");		
	for(int i =0 ; i<50 /*&& input!='\r'*/;i++){
	//input=	_getche();
		input = _getch();
        //printf("you pressed %c , its ASCII code is %d\n",input,input);
        for(int n =0 ; n<input-96;n++){
	    	printf("*");
	     } 
	printf("\n");
	}

}
