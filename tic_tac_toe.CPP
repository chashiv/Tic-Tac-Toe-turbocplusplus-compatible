#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<process.h>

void win_layout();
void game_layout();
void game_exe(int [3][3]);
void check(int [3][3],char p1[],char p2[],int);
int main();
///////////////////	WINDOW LAYOUT    ///////////////////////

void win_layout(int d)
{
int i;
//      (i,1) [1 to 2]
//       1    2               (column,row)
//       3    4

	for(i=1;i<=79;i++)
	{
	textcolor(WHITE);
	delay(d);
	gotoxy(i,1);
	cprintf("");
	}

//     (79,i)  [2 to 4]
	for(i=1;i<=24;i++)
	{
	textcolor(BLUE);
	delay(d);
	gotoxy(79,i);
	cprintf("|");
	}


//     (i,24)  [4 to 3]
	for(i=78;i>=1;i--)
	{
	textcolor(WHITE);
	delay(d);
	gotoxy(i,24);
	cprintf("");
	}


//     (1,i)  [3 to 1]
	for(i=24;i>=1;i--)
	{
	textcolor(BLUE);
	delay(d);
	gotoxy(1,i);
	cprintf("|");
	}
}
///////////////////	WINDOW LAYOUT    ///////////////////////



/////////////////////	GAME LAYOUT  ///////////////////////////
void game_layout()
{
getch();
clrscr();
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";

cout<<"\n\t-------------------------------------------------------------";

cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";

cout<<"\n\t-------------------------------------------------------------";

cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
cout<<"\n\t\t         |			|	";
//
textcolor(RED);

gotoxy(18,6);
cprintf("1");

gotoxy(38,6);
cprintf("2");

gotoxy(58,6);
cprintf("3");
//
//
gotoxy(18,13);
cprintf("4");

gotoxy(38,13);
cprintf("5");

gotoxy(58,13);
cprintf("6");
//
//
gotoxy(18,21);
cprintf("7");

gotoxy(38,21);
cprintf("8");

gotoxy(58,21);
cprintf("9");
//

}
/////////////////////	GAME LAYOUT  ///////////////////////////


////////////////////	GAME EXECUTION /////////////////////////
void game_exe(int arr[3][3],char p1[],char p2[])
{

char move;
int ctr=0;


player1:	    /////////////// initialisation value 1////////////////

if(ctr>=5)
{
check(arr,p1,p2,ctr);
}

textcolor(LIGHTGRAY);
gotoxy(66,2);
cprintf("PLAYER TURN: 1");

move=getch();
//////////////////////////////1 row ///////////////////////////////
	if(move=='1'&& arr[0][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");
	arr[0][0]=1;
	textcolor(LIGHTGRAY);
	gotoxy(18,6);
	cprintf("*");
	ctr++;
	goto player2;
	}


	if(move=='2'&& arr[0][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");
	arr[0][1]=1;
	textcolor(LIGHTGRAY);
	gotoxy(38,6);
	cprintf("*");
	ctr++;
	goto player2;

	}

	if(move=='3'&& arr[0][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[0][2]=1;
	textcolor(LIGHTGRAY);
	gotoxy(58,6);
	cprintf("*");
	ctr++;
	goto player2;

	}

//////////////////////////////2 row ///////////////////////////////
	if(move=='4'&& arr[1][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][0]=1;
	textcolor(LIGHTGRAY);
	gotoxy(18,13);
	cprintf("*");
	ctr++;
	goto player2;

	}


	if(move=='5'&& arr[1][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][1]=1;
	textcolor(LIGHTGRAY);
	gotoxy(38,13);
	cprintf("*");
	ctr++;
	goto player2;

	}

	if(move=='6'&& arr[1][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][2]=1;
	textcolor(LIGHTGRAY);
	gotoxy(58,13);
	cprintf("*");
	ctr++;
	goto player2;

	}

//////////////////////////////3 row ///////////////////////////////
	if(move=='7'&& arr[2][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][0]=1;
	textcolor(LIGHTGRAY);
	gotoxy(18,21);
	cprintf("*");
	ctr++;
	goto player2;

	}


	if(move=='8'&& arr[2][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][1]=1;
	textcolor(LIGHTGRAY);
	gotoxy(38,21);
	cprintf("*");
	ctr++;
	goto player2;

	}

	if(move=='9'&& arr[2][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][2]=1;
	textcolor(LIGHTGRAY);
	gotoxy(58,21);
	cprintf("*");
	ctr++;
	goto player2;

	}
	else
	{
	gotoxy(63,4);
	cprintf("INVALID MOVE,RETRY");
	goto player1;
	}




player2:       /////////////// initialisation value 0////////////////

if(ctr>=5)
{
check(arr,p1,p2,ctr);
}


textcolor(BLUE);
gotoxy(66,2);
cprintf("PLAYER TURN: 2");

move=getch();
//////////////////////////////1 row ///////////////////////////////
	if(move=='1'&& arr[0][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[0][0]=0;
	textcolor(BLUE);
	gotoxy(18,6);
	cprintf("0");
	ctr++;
	goto player1;
	}


	if(move=='2'&& arr[0][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[0][1]=0;
	textcolor(BLUE);
	gotoxy(38,6);
	cprintf("0");
	ctr++;
	goto player1;

	}

	if(move=='3'&& arr[0][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[0][2]=0;
	textcolor(BLUE);
	gotoxy(58,6);
	cprintf("0");
	ctr++;
	goto player1;

	}

//////////////////////////////2 row ///////////////////////////////
	if(move=='4'&& arr[1][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][0]=0;
	textcolor(BLUE);
	gotoxy(18,13);
	cprintf("0");
	ctr++;
	goto player1;

	}


	if(move=='5'&& arr[1][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][1]=0;
	textcolor(BLUE);
	gotoxy(38,13);
	cprintf("0");
	ctr++;
	goto player1;

	}

	if(move=='6'&& arr[1][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[1][2]=0;
	textcolor(BLUE);
	gotoxy(58,13);
	cprintf("0");
	ctr++;
	goto player1;

	}

//////////////////////////////3 row ///////////////////////////////
	if(move=='7'&& arr[2][0]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][0]=0;
	textcolor(BLUE);
	gotoxy(18,21);
	cprintf("0");
	ctr++;
	goto player1;

	}


	if(move=='8'&& arr[2][1]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][1]=0;
	textcolor(BLUE);
	gotoxy(38,21);
	cprintf("0");
	ctr++;
	goto player1;

	}

	if(move=='9'&& arr[2][2]==3)
	{
	gotoxy(63,4);
	cprintf("                  ");

	arr[2][2]=0;
	textcolor(BLUE);
	gotoxy(58,21);
	cprintf("0");
	ctr++;
	goto player1;

	}
	else
	{
	gotoxy(63,4);
	cprintf("INVALID MOVE,RETRY");
	goto player2;
	}

}
////////////////////	GAME EXECUTION /////////////////////////
///////////////////	CHECK 			////////////////
void check(int arr[3][3],char p1[],char p2[],int ctr)
{
	if(arr[0][0]==1 && arr[0][1]==1 && arr[0][2]==1 ||
	   arr[1][0]==1 && arr[1][1]==1 && arr[1][2]==1 ||
	   arr[2][0]==1 && arr[2][1]==1 && arr[2][2]==1 ||

	   arr[0][0]==1 && arr[1][1]==1 && arr[2][2]==1 ||
	   arr[0][2]==1 && arr[1][1]==1 && arr[2][0]==1 ||

	   arr[0][0]==1 && arr[1][0]==1 && arr[2][0]==1 ||
	   arr[0][1]==1 && arr[1][1]==1 && arr[2][1]==1 ||
	   arr[0][2]==1 && arr[1][2]==1 && arr[2][2]==1)
	{
	gotoxy(60,2);
	cprintf("WAIT !!! CHECKING...");
	getch();
	clrscr();
	win_layout(0);
	gotoxy(35,12);
	cprintf(p1);
	cprintf(" WINS");
	getch();
	clrscr();
	main();
	}

	if(arr[0][0]==0 && arr[0][1]==0 && arr[0][2]==0 ||
	   arr[1][0]==0 && arr[1][1]==0 && arr[1][2]==0 ||
	   arr[2][0]==0 && arr[2][1]==0 && arr[2][2]==0 ||

	   arr[0][0]==0 && arr[1][1]==0 && arr[2][2]==0 ||
	   arr[0][2]==0 && arr[1][1]==0 && arr[2][0]==0 ||

	   arr[0][0]==0 && arr[1][0]==0 && arr[2][0]==0 ||
	   arr[0][1]==0 && arr[1][1]==0 && arr[2][1]==0 ||
	   arr[0][2]==0 && arr[1][2]==0 && arr[2][2]==0)
	{

	gotoxy(60,2);
	cprintf("WAIT !!! CHECKING...");
	getch();
	clrscr();
	win_layout(0);
	gotoxy(35,12);
	cprintf(p2);
	cprintf(" WINS");
	getch();
	clrscr();
	main();
	}
	else if(ctr>=9)
	{

	gotoxy(60,2);
	cprintf("WAIT !!! CHECKING...");
	getch();
	clrscr();
	win_layout(0);
	gotoxy(35,12);
	cprintf("THERE'S A DRAW!!");
	getch();
	clrscr();
	main();
	}



}


///////////////////	CHECK 			////////////////



////////////////////////  MAIN STARTS HERE ////////////////////////
int main()
{
clrscr();
	int arr[3][3],i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		arr[i][j]='\0';
		arr[i][j]=3;
		}
	}



/////////////////	MENU		//////////////////
win_layout(25);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		arr[i][j]='\0';
		arr[i][j]=3;
		}
	}


gotoxy(35,5);
textcolor(LIGHTBLUE);
cprintf("TIC TAC TOE");

gotoxy(35,6);
cprintf("-----------");

gotoxy(37,8);
textcolor(LIGHTGRAY);
cprintf("1.PLAY");

gotoxy(37,9);
cprintf("------");

gotoxy(37,10);
cprintf("2.EXIT");

char ch,p1[20],p2[20];
gotoxy(33,15);
textcolor(WHITE);
cprintf("ENTER YOUR CHOICE:");

ch=getch();
	if(ch=='1')
	{
	clrscr();
	win_layout(0);
	char p1[20],p2[20];
	gotoxy(28,5);
	textcolor(LIGHTGRAY);
	cprintf("<PLAYERS INITIALS>");

	gotoxy(28,8);
	cprintf("PLAYER 1 NAME ::");
	gets(p1);

	textcolor(BLUE);
	gotoxy(28,10);
	cprintf("PLAYER 2 NAME ::");
	gets(p2);

	textcolor(LIGHTGRAY);
	gotoxy(28,14);
	cprintf("HIT ENTER TO SET A WAR!");
	game_layout();

	game_exe(arr,p1,p2);

	}
	if(ch=='2')
	{
	exit(0);
	}


getch();
return 0;
}
