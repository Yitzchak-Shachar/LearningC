#include <stdio.h>
//#include <stdbool.h>

//#include <conio.h>

int main(void)
{
	int  Num; // 32bit= 4Byte[?2,147,483,647, +2,147,483,647] 
	char Tav; // 1Byte [0:255]
    int Grades[10] = {0,0,0,0,0,0,0,0,0,0}; // Array of 10 integers , index starts from 0
	char Text[7] = {'H','e','l','l','o','!','\0'};
	
    int NumOfStudents = 6;

	Grades[0] = 80;
	Grades[1] = 99;
	Grades[2] = 0;
	Grades[3] = 95;
    Grades[4] = 60;
    Grades[5] = 80;
	int sum=0,avg=0,NumOfSumed=0;

//	printf("Hello , your grade is:%d\n",Grades[0]);
	// x= y||5 +1;
	for( int index =0 ; (index <= (NumOfStudents-1) ) && Grades[index]!=0  ; index=index+1 ,NumOfSumed++ ) {
        printf("index=%d Grade=%d old_sum=%d ",index,Grades[index],sum);
		sum = sum + Grades[index];//NumOfSumed++;
        printf("new_sum=%d\n",sum);

	}
	printf("NumOfSumed %d\n",NumOfSumed);
 	avg=sum / NumOfSumed;
	printf("Average %d\n",avg);
}
