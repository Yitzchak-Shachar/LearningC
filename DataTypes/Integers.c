/****************************************************************************
 *                                                                          *
 * Filename: Integers.c                                                     *
 *                                                                          *
 * Purpose : Introduction to C data types.                                  *
 *                                                                          *
 * Creator : YSH                                                            * 
 *                                                                          *
 * History : Date      Reason                                               *
 *           24-12-17  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main(void)
{
   // int x;
	// int NumberOfRounds,loop_index    , numbers ,_numbers ,    JobCount  ; //CamelCase
  
	int MyNum; //definition , decleration
    MyNum = 20; //assignment , initialization

      MyNum=MyNum+1; //assinment
   //  (2)       (1)        <--
	MyNum++;  // c -> cpp
	MyNum--;


   // printf("Hello, world!\n"); // escaped chars  - \n \r \t 

    printf("My variable MyNum decimal value is %d \n",MyNum+1); 
	printf("My variable MyNum decimal value is %d \n",MyNum); 
	
	
	//printf("My variable MyNum hexadecimal value is %x \n",MyNum); 
	//printf("My variable MyNum octal value is %o \n",MyNum); 
	//printf("My variable MyNum decimal value is %d \n",MyNum); 
	//printf(string,param_list);
  
  return 0;
}
/*
states
	line# MyNum
	------------
	22     20
	24     21
	26     22
	27     21
	32     22*
	33     21
*/






/* Function declation\definition:
 
 return_value_type  FunctionName (parameters)
  {
       
         body
 
 }

  int AddNumbers (int num1, int num2)
  {
      return num1+num2;
  }

   void ShowCurrentTime( void)
   {	
       printf("the time is: 123");
   }




*/  
