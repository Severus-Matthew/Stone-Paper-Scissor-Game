#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int WithComputer();
int WithPartner();

int main () {
   int i, n1,n,z=1, z2=1;
   time_t t;
   
   srand((unsigned) time(&t));
   n1 =rand() % 3;
   
   
   
   printf("\t\tWELCOME TO THE GAME OF STONE PAPER SCISSOR !!!\n\n");
   printf("********************************************************************************************************************************************\n\n");
   
   printf("The game is available in two forms - Game with Computer & Two Player Game\n");
   
   printf("To Play with computer, Press 1 \n To Play with a partner, Press 2\n");
   scanf("%d", &n);
   if(n==1){
   	while(z!=0){
	    z = WithComputer();
	    
   	 }
   	 printf("THE END!!");
   	
   }
   else if(n==2){
   	while(z2!=0){
	    z2 = WithPartner();
	    
   	 }
   	 printf("THE END!!");
   	
   }
   
   else{
   	printf("Wrong Input !! Please run again to start a new game !!");
   }
   
   
   
   
   return 0;
}

int WithComputer(){
	int m,z,z2,n;
	int e;
	char ch2,p2,temp;
	time_t t1;
   
   srand((unsigned) time(&t1));
   n =rand() % 3;
	printf("so you want to play with Computer!!\n");
	
	printf("Let's start!!\n Enter 1 for Scissor\t||\tEnter 2 for Stone \t||\t Enter 3 for paper\n");
	ch2 = getch();
	p2 =ch2;
	ch2='*';
	printf("%c\n", ch2);
	temp=getch();
	m = p2 - '0';
	if(m<=0|| m>3){
		printf("wrong input by Player1 !!\n");
		goto next;
	}
	if(n==0){
		if(m==1){
			printf("COMPUTER- Scissor | PLAYER -scissor\n" );
			printf("Game Draw!!\n\n");
		}
		else if(m==2){
			printf("COMPUTER- Scissor | PLAYER -stone\n" );
			printf("Player Wins!!\n\n");
		}
		else if(m==3){
			printf("COMPUTER- Scissor | PLAYER -Paper\n" );
			printf("Computer Wins!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!\n\n");
		}
	}
	else if(n==1){
		if(m==1){
			printf("COMPUTER- Stone | PLAYER -scissor\n" );
			printf("Computer Wins!!\n\n");
		}
		else if(m==2){
			printf("COMPUTER- Stone | PLAYER -stone\n" );
			printf("Game Draw!!\n\n");
		}
		else if(m==3){
			printf("COMPUTER- Stone | PLAYER -Paper\n" );
			printf("Player Wins!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!\n\n");
		}
	}
	else{
			if(m==1){
			printf("COMPUTER- Paper | PLAYER -scissor\n" );
			printf("Palyer Wins!!\n\n");
		}
		else if(m==2){
			printf("COMPUTER- Paper | PLAYER -stone\n" );
			printf("Computer Wins!!\n\n");
		}
		else if(m==3){
			printf("COMPUTER- Paper | PLAYER -Paper\n" );
			printf("Game Draw!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!\n\n");
		}
	}
	
	printf("press 1 to exit else press any key to continue!!\n");
	scanf("%d",&e);

	if(e==1){
		 z=0;
	}
	else {
	   z=1;
	}
	return z;
	next:
	   printf("press 1 to exit else press 0 to restart!!\n");
	   scanf("%d",&e);

	   if(e==1){
		   z2=0;
	   }
	   else {
	      z2=1;
	   }
	return z2;
}



int WithPartner(){
	int z2,m,b;
	char ch,p1,ch2,p2,temp;
	int e;
	printf("so you want to play a Two Player Game!!\n");
	
	printf("Let's start!!\n Enter 1 for Scissor\t||\t Enter 2 for Stone \t||\t Enter 3 for paper\n");
	printf("Player1 Enter - \n");
	ch = getch();
	
	p1 =ch;
	ch='*';
	printf("%c\n", ch);
	temp=getch();
	b = p1 - '0';
	if(b<=0|| b>3){
		printf("wrong input by Player1 !!\n");
		goto next;
	}
	printf("Player2 Enter -\n");
	ch2 = getch();
	p2 =ch2;
	ch2='*';
	printf("%c\n", ch2);
	temp=getch();
	m = p2 - '0';
	if(m<=0 || m>3){
		printf("wrong input by Player2 !!\n");
		goto next;
	}
	if(b==1){
		if(m==1){
			printf("PLAYER1- Scissor | PLAYER2 -scissor\n" );
			printf("Game Draw!!\n\n");
		}
		else if(m==2){
			printf("PLAYER1- Scissor | PLAYER2 -stone\n" );
			printf("Player2 Wins!!\n\n");
		}
		else if(m==3){
			printf("PLAYER1- Scissor | PLAYER2 -Paper\n" );
			printf("PLAYER1 Wins!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n \n");
		}
	}
	else if(b==2){
		if(m==1){
			printf("PLAYER1- Stone | PLAYER2 -scissor\n" );
			printf("PLAYER1 Wins!!\n\n");
		}
		else if(m==2){
			printf("PLAYER1- Stone | PLAYER2 -stone\n" );
			printf("Game Draw!!\n\n");
		}
		else if(m==3){
			printf("PLAYER1- Stone | PLAYER2 -Paper\n" );
			printf("Player2 Wins!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n\n");
		}
	}
	else{
			if(m==1){
			printf("PLAYER1- Paper | PLAYER2 -scissor\n" );
			printf("Palyer2 Wins!!\n\n");
		}
		else if(m==2){
			printf("PLAYER1- Paper | PLAYER2 -stone\n" );
			printf("PLAYER1 Wins!!\n\n");
		}
		else if(m==3){
			printf("PLAYER1- Paper | PLAYER2 -Paper\n" );
			printf("Game Draw!!\n\n");
		}
		else{
			printf("Wrong Input By player !!\n \n");
		}
	}
	
	printf("press 1 to exit else press 0 to continue!!\n");
	   scanf("%d",&e);

	   if(e==1){
		   z2=0;
	   }
	   else {
	      z2=1;
	   }
	 
	 return z2;
	   
	next:
	   printf("press 1 to exit else press 0 to restart!!\n");
	   scanf("%d",&e);

	   if(e==1){
		   z2=0;
	   }
	   else {
	      z2=1;
	   }
	return z2;
}
