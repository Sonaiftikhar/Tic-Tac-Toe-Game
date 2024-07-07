#include <iostream>
using namespace std;
int c,p;
char t,x='X',o='O';
char a[9]={'1','2','3','4','5','6','7','8','9'};
void menu ()
{
	cout<<"Are you ready to play the TIC TAC TOE (Y/N)"<<endl;
	cin>>t;
	if(t=='Y'||t=='y')
	{
		cout<<"1.Single player"<<endl;
		cout<<"2.Double player"<<endl;
		cin>>c;
	}
	else
	{
		cout<<"OK SEE YOU LATER DUDE"<<endl;
	}
}
void opt ()
{
	switch (c)
	{
		case 1:
			{
				cout<<"Enter your preference for SINGLE PLAYER"<<endl;
				cout<<"1. X"<<endl;
				cout<<"2. O"<<endl;
				cin>>p;
				if (p==1)
				{
					cout<<"Player 1 = X"<<endl;
					cout<<"Player 2 = O"<<endl;
				}
				else
				{
					cout<<"Player 1 = O"<<endl;
					cout<<"Player 2 = X"<<endl;
				}
			}
		case 2:
			{
				cout<<"Enter your preference for DOUBLE PLAYER"<<endl;
				cout<<"1. X"<<endl;
				cout<<"2. O"<<endl;
				cin>>p;
				if (p==1)
				{
					cout<<"Player 1 = X"<<endl;
					cout<<"Player 2 = O"<<endl;
				}
				else
				{
					cout<<"Player 1 = O"<<endl;
					cout<<"Player 2 = X"<<endl;
					}	
			}	
	}
}
void game()
{
	cout<<"   |     |     |    \n";
	cout<<"   |     |     |    \n";
    cout<<"___|_____|_____|____\n";
	cout<<"   |     |     |    \n";
	cout<<"   |     |     |    \n";	
    cout<<"___|_____|_____|____\n";
    cout<<"   |     |     |    \n";
	cout<<"   |     |     |    \n";
}

