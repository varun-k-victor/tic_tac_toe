#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
int result_matrix[3][3]={1,2,3,4,5,6,7,8,9};
char man_computer;
int counter=0;

int grid();
int random(int,int);
int assign();
int toggle();
int player();
int man_select();
int computer_select();
int win();

int main()
{
	int result;
	assign();
	while(1)
	{
		player();
		system("cls");
		result=win();
		if(result==111)
		{
			std::cout<<"X WINS!";
			break;
		}
		else if(result==222)
		{
			std::cout<<"O WINS!";
			break;
		}
		else if(counter==9)
		{
			std::cout<<"MATCH DRAW";
			break;
		}
		else
		{
			toggle();
		}
	}
	return 0;
}

int grid()
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			std::cout<<matrix[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	return 0;
}

int random(int upper,int lower)
{
	int random_number;
	srand(time(NULL));
	random_number=(rand()%(upper-lower+1))+lower;
	return random_number;
}

int assign()
{
	int var;
	var=random(1,0);
	if(var==1)
	{
		man_computer='X';
	}
	else
	{
		man_computer='O';
	}
	return 0;
}

int toggle()
{
	if(man_computer=='O')
	{
		man_computer='X';
	}
	else
	{
		man_computer='O';
	}
	return 0;
}
		
int player()
{
	if(man_computer=='X')
	{
		man_select();
	}
	else
	{
		computer_select();
	}
	return 0;
}

int man_select()
{
	int choice;
	std::cout<<"X's turn"<<std::endl<<std::endl;
	grid();
	std::cout<<"Enter the number where you want to put X"<<std::endl;
	std::cin>>choice;
	std::cout<<std::endl;
	switch(choice)
	{
		case 1:
			if(matrix[0][0]=='X' || matrix[0][0]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[0][0]='X';
				result_matrix[0][0]=111;
				counter++;
			}
			break;
		case 2:
			if(matrix[0][1]=='X' || matrix[0][1]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[0][1]='X';
				result_matrix[0][1]=111;
				counter++;
			}
			break;
		case 3:
			if(matrix[0][2]=='X' || matrix[0][2]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[0][2]='X';
				result_matrix[0][2]=111;
				counter++;
			}
			break;
		case 4:
			if(matrix[1][0]=='X' || matrix[1][0]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[1][0]='X';
				result_matrix[1][0]=111;
				counter++;
			}
			break;
		case 5:
			if(matrix[1][1]=='X' || matrix[1][1]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[1][1]='X';
				result_matrix[1][1]=111;
				counter++;
			}
			break;
		case 6:
			if(matrix[1][2]=='X' || matrix[1][2]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[1][2]='X';
				result_matrix[1][2]=111;
				counter++;
			}
			break;
		case 7:
			if(matrix[2][0]=='X' || matrix[2][0]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[2][0]='X';
				result_matrix[2][0]=111;
				counter++;
			}
			break;
		case 8:
			if(matrix[2][1]=='X' || matrix[2][1]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[2][1]='X';
				result_matrix[2][1]=111;
				counter++;
			}
			break;
		case 9:
			if(matrix[2][2]=='X' || matrix[2][2]=='O')
			{
				system("cls");
				std::cout<<"Invalid input"<<std::endl<<std::endl;
				man_select();
			}
			else
			{
				matrix[2][2]='X';
				result_matrix[2][2]=111;
				counter++;
			}
			break;
		default:
			system("cls");
			std::cout<<"Invalid input"<<std::endl<<std::endl;
			man_select();
			break;
	}
	return 0;
}

int computer_select()
{
	int val;
	val=random(9,1);
	system("cls");
	std::cout<<"O's turn"<<std::endl<<std::endl;
	grid();
	std::cout<<"Enter the number where you want to put O"<<std::endl;
	std::cout<<"(CPU thinking.......)"<<std::endl;
	switch(val)
	{
		case 1:
			if(matrix[0][0]=='X' || matrix[0][0]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[0][0]='O';
				result_matrix[0][0]=222;
				counter++;
			}
			break;
		case 2:
			if(matrix[0][1]=='X' || matrix[0][1]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[0][1]='O';
				result_matrix[0][1]=222;
				counter++;
			}
			break;
		case 3:
			if(matrix[0][2]=='X' || matrix[0][2]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[0][2]='O';
				result_matrix[0][2]=222;
				counter++;
			}
			break;
		case 4:
			if(matrix[1][0]=='X' || matrix[1][0]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[1][0]='O';
				result_matrix[1][0]=222;
				counter++;
			}
			break;
		case 5:
			if(matrix[1][1]=='X' || matrix[1][1]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[1][1]='O';
				result_matrix[1][1]=222;
				counter++;
			}
			break;
		case 6:
			if(matrix[1][2]=='X' || matrix[1][2]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[1][2]='O';
				result_matrix[1][2]=222;
				counter++;
			}
			break;
		case 7:
			if(matrix[2][0]=='X' || matrix[2][0]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[2][0]='O';
				result_matrix[2][0]=222;
				counter++;
			}
			break;
		case 8:
			if(matrix[2][1]=='X' || matrix[2][1]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[2][1]='O';
				result_matrix[2][1]=222;
				counter++;
			}
			break;
		case 9:
			if(matrix[2][2]=='X' || matrix[2][2]=='O')
			{
				Sleep(2000);
				computer_select();
			}
			else
			{
				Sleep(5000);
				std::cout<<val;
				Sleep(2000);
				matrix[2][2]='O';
				result_matrix[2][2]=222;
				counter++;
			}
			break;
	}
}

int win()
{
	if((result_matrix[0][0]==111 && result_matrix[0][1]==111 && result_matrix[0][2]==111) || (result_matrix[1][0]==111 && result_matrix[1][1]==111 && result_matrix[1][2]==111) || (result_matrix[2][0]==111 && result_matrix[2][1]==111 && result_matrix[2][2]==111) || (result_matrix[0][0]==111 && result_matrix[1][0]==111 && result_matrix[2][0]==111) || (result_matrix[0][1]==111 && result_matrix[1][1]==111 && result_matrix[2][1]==111) || (result_matrix[0][2]==111 && result_matrix[1][2]==111 && result_matrix[2][2]==111) || (result_matrix[0][0]==111 && result_matrix[1][1]==111 && result_matrix[2][2]==111) || (result_matrix[0][2]==111 && result_matrix[1][1]==111 && result_matrix[2][0]==111))
	{
		return 111;
	}
	else if((result_matrix[0][0]==222 && result_matrix[0][1]==222 && result_matrix[0][2]==222) || (result_matrix[1][0]==222 && result_matrix[1][1]==222 && result_matrix[1][2]==222) || (result_matrix[2][0]==222 && result_matrix[2][1]==222 && result_matrix[2][2]==222) || (result_matrix[0][0]==222 && result_matrix[1][0]==222 && result_matrix[2][0]==222) || (result_matrix[0][1]==222 && result_matrix[1][1]==222 && result_matrix[2][1]==222) || (result_matrix[0][2]==222 && result_matrix[1][2]==222 && result_matrix[2][2]==222) || (result_matrix[0][0]==222 && result_matrix[1][1]==222 && result_matrix[2][2]==222) || (result_matrix[0][2]==222 && result_matrix[1][1]==222 && result_matrix[2][0]==222))
	{
		return 222;
	}
	else
	{
		return 0;
	}
}
