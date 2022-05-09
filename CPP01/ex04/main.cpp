/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:35:50 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 23:44:41 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

std::string replace(std::string filename, std::string s1, std::string s2)
{
	
}

int main(int argc, char **argv)
{
	if (argc != 4 || argv[1] == NULL || argv[2] == NULL || argv[3] == NULL) 
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
    }
	
	return (0);
}
