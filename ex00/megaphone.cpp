/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:15:34 by mrafik            #+#    #+#             */
/*   Updated: 2022/12/22 16:40:26 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<cstring>

int main(int argc, char **argv)
{
	   if(argc  == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (--argc)
	{
		argv++;
		for(size_t i=0 ;  i < strlen(*argv); i++ )
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv << " ";
	}
	std::cout << std::endl;
	return(0);
}