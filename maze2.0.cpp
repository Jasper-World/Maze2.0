#include <iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int n;
	cout<<"choose map 1 or 2"<<endl; 
	cin>>n;
	char map[6][6]=
	{
		{'#','#','#','#','#','#'},
		{'#','o',' ','#',' ',' '},
		{'#',' ','#','#',' ','#'},
		{'#',' ',' ','#',' ','#'},
		{'#','#',' ',' ',' ','#'},
		{'#','#','#','#','#','#'},
	};
	if(n==1)
	{
		cout<<'w'<<' '<<"up"<<' '<<'a'<<' '<<"left"<<' '<<'d'<<' '<<"right"<<' '<<'s'<<' '<<"down"<<endl;
		for(int i=0;i<=5;i++)
		{
			for(int j=0;j<=5;j++)
			{
				cout<<map[j][i]; 
			}
			cout<<endl;
		}
	}
	if(n==2)
	{
		cout<<'w'<<' '<<"right"<<' '<<'a'<<' '<<"up"<<' '<<'d'<<' '<<"down"<<' '<<'s'<<' '<<"left"<<endl;
		for(int i=0;i<=5;i++)
		{
			for(int j=0;j<=5;j++)
			{
				cout<<map[i][j]; 
			}
			cout<<endl;
		}
	}
	int x,y;
	x=1;
	y=1;
	while(1)
	{
		char ch;
		cin>>ch;
		if(ch=='d'&&map[x+1][y] !='#')
		{
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='o';
		}
		if(ch=='a'&&map[x-1][y] !='#')
		{
			system("cls");
			map[x][y]=' ';
			x--;
			map[x][y]='o';
		}
		if(ch=='w'&&map[x][y-1] !='#')
		{
			system("cls");
			map[x][y]=' ';
			y--;
			map[x][y]='o';
		}
		if(ch=='s'&&map[x][y+1] !='#')
		{
			system("cls");
			map[x][y]=' ';
			y++;
			map[x][y]='o';
		}
	if(n==1)
	{
		cout<<'w'<<' '<<"up"<<' '<<'a'<<' '<<"left"<<' '<<'d'<<' '<<"right"<<' '<<'s'<<' '<<"down"<<endl;
		for(int i=0;i<=5;i++)
		{
			for(int j=0;j<=5;j++)
			{
				cout<<map[j][i]; 
			}
			cout<<endl;
		}
	}
	if(n==2)
	{
		cout<<'w'<<' '<<"right"<<' '<<'a'<<' '<<"up"<<' '<<'d'<<' '<<"down"<<' '<<'s'<<' '<<"left"<<endl;
		for(int i=0;i<=5;i++)
		{
			for(int j=0;j<=5;j++)
			{
				cout<<map[i][j]; 
			}
			cout<<endl;
		}
	}
		if(x==1&&y==5)
		{
			cout<<"you win";
			break;
		}
	}
	return 0;
}
