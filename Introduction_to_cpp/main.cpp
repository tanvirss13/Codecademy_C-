#include <stdio.h>
#include <iostream>
#include <algorithm>

#include<iostream>
#include"ttt_functions.hpp"

int main()
{
	char user1 = 'x';
	char user2 = 'o';
	int pos;


	std::cout << "Please select User\n" << "User1=x\n" << "User2=o\n";
	
	
	resetGrid();
	

	for (int i = 0; i < 4; i++)
	{
			std::cout << "Please select position\n";
			gridPosition();
			std::cin >> pos;
			userInput(chk(pos), user1);
			
			if (chkwin() == true)
			{
				break;
			}
			

			std::cout << "Please select position\n";
			gridPosition();
			std::cin >> pos;
			userInput(chk(pos), user2);
			
			if (chkwin() == true)
			{
				break;
			}

			if (i == 3)
			{
				std::cout << "Please select position\n";
				gridPosition();
				std::cin >> pos;
				userInput(chk(pos), user1);
				
				if (chkwin() == true)
				{
					break;
				}
        else
				{
					std::cout << "Match tie\n";
				}
			}
	}
	
	
}
