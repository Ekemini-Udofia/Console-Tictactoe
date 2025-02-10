#include <iostream>
#include <cstdlib>
#include <cstdio>


char square[10] = { '0', '1', '2', '3', '5', '6', '7', '8', '9' };


int check_for_win()
{
	if (square[1] == square[2] && square[2] == square[3]) {
		return 1;
	}
	else if(square[4] == square[5] && square[5] == square[6]) 
	{
		return 1;
	}
	else if(square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}
	else if (square[1] == square[4] && square[4] == square[7])
	{
		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8])
	{
		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9])
	{
		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}
	else if (square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if (square[1] != '1'&& square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6' 
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void create_board()
{
	system("cls");
	std::cout << "\n\n\t A  simple Tictactoe Console Game \n\n";

	std::cout << "The first player X and the second is O \n\n";
	std::cout << std::endl;

	std::cout << "   |   |   " << std::endl;
	std::cout << " " << square[1] << " | " << square[2] << " | " << square[3] << " " << std::endl;

	std::cout << "___|___|___" << std::endl;
	std::cout << "   |   |   " << std::endl;

	std::cout << " " << square[4] << " | " << square[5] << " | " << square[6] << " " << std::endl;

	std::cout << "___|___|___" << std::endl;
	std::cout << "   |   |   " << std::endl;

	std::cout << " " << square[7] << " | " << square[8] << " | " << square[9] << " " << std::endl;
	std::cout << "   |   |   " << std::endl;

}

int main(int argv, char* argc[])
{


	return 0;
}