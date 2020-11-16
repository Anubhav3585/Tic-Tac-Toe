//this game is made by anubhav gupta
//date is 16-11-2020

#include <stdio.h>

int flag=0;
char y[6][11]={{'1',' ',' ','|',' ','2',' ','|',' ','3',' '},
               {'_','_','_','|','_','_','_','|','_','_','_'},
               {'4',' ',' ','|',' ','5',' ','|',' ','6',' '},
               {'_','_','_','|','_','_','_','|','_','_','_'},
               {'7',' ',' ','|',' ','8',' ','|',' ','9',' '},
               {' ',' ',' ','|',' ',' ',' ','|',' ',' ',' '}};

//for drawing board for the first time
void drawboard(void);

//for player one
void drawboardp1(void);

//for player two
void drawboardp2(void);

//winning condition
int win(void);

//wining output
void winresult(void);

int main()
{
    printf("This is a Tic Tac Toe game \n");
    printf("\nIn this game player 1 has (X) and player 2 has (O) symbol\n");

    drawboard();

for(int q=0;q<5;++q)
{
drawboardp1();
    flag = win();

    if(flag==1)
         break;

    else if(flag==2)
         break;

    if(q==4)
         break;

drawboardp2();

   if(flag==1)
        break;
   else if(flag==2)
        break;

   if(q==4)
        break;
}
    return 0;
}

void winresult(void)
{
    if(flag==1)
printf("\n\nplayer 1 have won the game\n\n");

else if(flag==2)
printf("\n\nplayer 2 have won the game\n\n");

else
printf("\n\nThe game has been drawn");
}

int win(void)
{
 if((y[0][0]=='X' && y[0][5]=='X' && y[0][9]=='X') || (y[0][0]=='X' && y[2][5]=='X' && y[4][9]=='X') || (y[0][0]=='X' && y[2][0]=='X' && y[4][0]=='X') || (y[2][0]=='X' && y[2][5]=='X' && y[2][9]=='X') ||(y[4][0]=='X' && y[4][5]=='X' && y[4][9]=='X') ||(y[0][5]=='X' && y[2][5]=='X' && y[4][5]=='X') || (y[0][9]=='X' && y[2][9]=='X' && y[4][9]=='X') || (y[4][0]=='X' && y[2][5]=='X' && y[0][9]=='X'))
  {
      return 1;
  }

  if((y[0][0]=='O' && y[0][5]=='O' && y[0][9]=='O') || (y[0][0]=='O' && y[2][5]=='O' && y[4][9]=='O') || (y[0][0]=='O' && y[2][0]=='O' && y[4][0]=='O') || (y[2][0]=='O' && y[2][5]=='O' && y[2][9]=='O') ||(y[4][0]=='O' && y[4][5]=='O' && y[4][9]=='O') ||(y[0][5]=='O' && y[2][5]=='O' && y[4][5]=='O') || (y[0][9]=='O' && y[2][9]=='O' && y[4][9]=='O') || (y[4][0]=='O' && y[2][5]=='O' && y[0][9]=='O'))
 {
     return 2;
 }
 return 0;
}

void drawboardp2(void)
{

    int num;
    label1:
    printf("\n\nPlayer 2 please choose a number::");
    scanf("%d",&num);

if(num>=1 && num<=9)
{
    switch(num)
    {
    case 1:
        if(y[0][0]=='O' || y[0][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[0][0]='X';
        break;

    case 2:
         if(y[0][5]=='O' || y[0][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[0][5]='X';
        break;

    case 3:
         if(y[0][9]=='O' || y[0][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[0][9]='X';
        break;

    case 4:
         if(y[2][0]=='O' || y[2][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[2][0]='X';
        break;

    case 5:
         if(y[2][5]=='O' || y[2][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[2][5]='X';
        break;

    case 6:
         if(y[2][9]=='O' || y[2][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[2][9]='X';
        break;

    case 7:
         if(y[4][0]=='O' || y[4][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[4][0]='X';
        break;

    case 8:
         if(y[4][5]=='O' || y[4][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[4][5]='X';
        break;

    case 9:
         if(y[4][9]=='O' || y[4][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label1;
        }
        y[4][9]='X';
        break;
    }
}
    else
        {
            printf("\nHey you have entered a invalid number");
            goto label1 ;
        }


    for(int m=0;m<6;++m)
      {
          for(int o=0;o<11;++o)
          {
          printf("%c",y[m][o]);
          }
          printf("\n");
      }
}

void drawboardp1(void)
{


    int num;
    label:
    printf("\n\nPlayer 1 please choose a number::");
    scanf("%d",&num);

if(num>=1 && num<=9)
{
    switch(num)
    {
    case 1:
        if(y[0][0]=='O' || y[0][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[0][0]='O';
        break;

    case 2:
         if(y[0][5]=='O' || y[0][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[0][5]='O';
        break;

    case 3:
         if(y[0][9]=='O' || y[0][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[0][9]='O';
        break;

    case 4:
         if(y[2][0]=='O' || y[2][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[2][0]='O';
        break;

    case 5:
         if(y[2][5]=='O' || y[2][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[2][5]='O';
        break;

    case 6:
         if(y[2][9]=='O' || y[2][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[2][9]='O';
        break;

    case 7:
         if(y[4][0]=='O' || y[4][0]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[4][0]='O';
        break;

    case 8:
         if(y[4][5]=='O' || y[4][5]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[4][5]='O';
        break;

    case 9:
         if(y[4][9]=='O' || y[4][9]=='X')
        {
            printf("\nYou have entered a invalid number,try again");
            goto label;
        }
        y[4][9]='O';
        break;
    }
}
    else
        {printf("\nHey you have entered a invalid number try again");
            goto label ;
        }


    for(int m=0;m<6;++m)
      {
          for(int o=0;o<11;++o)
          {
          printf("%c",y[m][o]);
          }
          printf("\n");
      }
}

 void drawboard(void)
{
    for(int m=0;m<6;++m)
      {
          for(int o=0;o<11;++o)
          {
          printf("%c",y[m][o]);
          }
          printf("\n");
      }
}

