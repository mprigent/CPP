/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:35:50 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/10 18:45:34 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

// open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2

std::string replace_file(std::string file, std::string s1, std::string s2)
{
	for (int i = 0; file[i]; i++)
	{
		if (file[i] == s1[0])
		{
			if (file.substr(i, s1.size()) == s1)
			{
				file.erase(i, s1.size());
				file.insert(i, s2);
				i += s2.size() - 1;
			}
		}
	}
	return(file);
}

int main(int argc, char **argv)
{
	std::string file;
	std::fstream s1;
    std::fstream s2;
	
	if (argc != 4 || argv[1] == NULL || argv[2] == NULL || argv[3] == NULL) 
	{
		std::cout << "\033[1m\033[33mUsage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
    }
	s1.open(argv[1], std::ios::in);
    if (!s1)
	{
		std::cout << "\033[1m\033[31mError: file " << argv[1] << " not found" << std::endl;
        return (1);
	}
    s2.open(argv[1] + std::string(".replace"), std::ios::out);
    if (!s2)
	{
        std::cout << "\033[1m\033[31mError: file " << argv[1] << ".replace" << "can't be create" << std::endl;
        return (1);
	}
    while (!s1.eof())
    {
        getline(s1, file);
        s2 << replace_file(file, argv[2], argv[3]) << std::endl;
    }
    std::cout << argv[1] << "\033[1m\033[32m has been replaced !" << std::endl;
    s1.close();
    s2.close();
	return (0);
}
