//Basic logic of the TicTacToe game

#include<stdio.h>
#include<string.h>
main()
{
	int turn=1;
	int pos;
	
	char game[9]={'_','_','_','_','_','_','_','_','_'};
	
	while(turn<=9)
	{
	if(turn%2==0)
	{
		printf("\nPlayer 2 enter position=> ");
		scanf("%d",&pos);
		game[pos-1]='X';
	}
	else
	{
		printf("\nPlayer 1 enter position=> ");
		scanf("%d",&pos);
		game[pos-1]='O';
	}
	printf("\nAfter turn %d",turn);
	printf("\n%c\t%c\t%c",game[0],game[1],game[2]); //{\t} means 5 spaces
    printf("\n%c\t%c\t%c",game[3],game[4],game[5]);
    printf("\n%c\t%c\t%c\n",game[6],game[7],game[8]);	
	
	if(game[0]==game[1] && game[1]==game[2])
	{
		if(game[0]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[0]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[3]==game[4] && game[4]==game[5])
	{
		if(game[3]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[3]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[6]==game[7] && game[7]==game[8])
	{
		if(game[6]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[6]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[0]==game[3] && game[3]==game[5])
	{
		if(game[0]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[0]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[1]==game[4] && game[4]==game[7])
	{
		if(game[1]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[1]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[2]==game[5] && game[5]==game[8])
	{
		if(game[2]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[2]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[0]==game[4] && game[4]==game[8])
	{
		if(game[0]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[0]=='O')
	    {
	    	printf("\n!!!Player 1 is the Winner!!!");
	    	turn=11;
		}
	}
		if(game[2]==game[4] && game[4]==game[6])
	{
		if(game[2]=='X')
		{
		printf("\n!!!Player 2 is the Winner!!!");
		turn=11;
	    }
	    else if(game[2]=='O')
	    {
	    	printf("\n!!! Player 1 is the Winner !!!");
	    	turn=11;
		}
	}
	
	turn++;
	}
	if(turn==10)
	{
		printf("!!!Tie!!!");
	}
	printf("\nTurn=>%d",turn);
}
