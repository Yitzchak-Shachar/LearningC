#include <stdlib.h>

int board[8][8];


void ClearScreen(void){
 
   system("cls"); 

}

void ResetBoard(void){
	int size=8;
  for(int i=0;i<size;i++){
	 for(int j=0;j<size;j++){

			int value=0;// 0-empty 1-white 2-black

            if(i>4 && i<8)
			{value=2;}
			else
			{value=value;}

			value = (i==0 || i==1 || i==2) ? 1:value; //white
			value = (i>4 && i<8) ? 2 : value;//black
			
			value = ((i+j) % 2)  * value ;//  0,6=> 6/2=3|0  0*0/1/2  =>0


			board[i][j]= value;

/*
            board[0][0]=0;
			board[0][1]=1;
			board[7][6]=2;
*/

	 }
		
	}

}

void PrintBoard(int size){

  int WithGrid=1;
  for(int i=0;i<size;i++){ //rows
	 for(int j=0;j<size;j++){ //columns
			//int cc = ((j+i)%2) ? 176 :178;
			int cc = board[i][j]==0? ( ((j+i)%2) ? 176 :178) : 64+board[i][j];
			printf("%c",cc);
	 }
		if (WithGrid)
        printf("%d",i+1);
		printf("\n");	
}

          if (WithGrid)
           printf("ABCDEFGH\n\n");
}

int main(void)  {
   
	//printf("aaaa");
	ResetBoard();
	ClearScreen();
    PrintBoard(8);

}



