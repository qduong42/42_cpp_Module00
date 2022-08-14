/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:46:10 by qduong            #+#    #+#             */
/*   Updated: 2022/08/14 13:19:02 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
  
int main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 1;
		while (argv[i])
		{
			//can also declare a string using std::string str(argv[i]);
			for (size_t x = 0; x < strlen(argv[i]); x++)
				putchar(toupper(argv[i][x]));
			i ++;
		}
		std::cout << std::endl;
	}
	return 0;
}