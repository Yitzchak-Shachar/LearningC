#include <stdio.h>
#include <stdbool.h>



int main(void)
{

	int NumOfLetters=0,NumOfWords=0,NumOfSent=0;
	 

    //_Bool A_bigger;
	bool TaskCompleted=0;

	char MyChar;

	//char MyString[100]= {'H','e','l','l','o','!',' ','M','y',' ','F','r','i','e','n','d','\n','G','o','o','d','b','y','e','\n','\0'};
   char MyString[100]= {'H','e','l','l','o','!',' ','M','y',' ','F','r','i','e','n','d','\n', '\0'}; 
	printf(MyString);

	int index = 0;
    
	printf("#Lettars=%d\t\t#Words=%d\t\t#Sentences=%d\n",NumOfLetters,NumOfWords,NumOfSent);

	while (!TaskCompleted)
	{
		NumOfLetters++;
		if (MyString[index]==' ')
			NumOfWords++;
		/*else if (MyString[index]=='\n')
		{
			NumOfWords++;
		    NumOfSent++;
        }*/
		TaskCompleted = MyString[index]=='\n';
		index++;
	}
	



	printf("#Lettars=%d\t\t#Words=%d\t\t#Sentences=%d\n",NumOfLetters,NumOfWords,NumOfSent);

}
