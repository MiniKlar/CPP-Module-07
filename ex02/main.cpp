/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:19 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 22:33:17 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ) {
	try {
		//good array
		Array <char, size_t> a1(10);
		std::cout << a1.size()<< std::endl;
		for (size_t i = 0; i < a1.size(); i++) {
			a1[i] = i + 36;
		};
		for (size_t i = 0; i < a1.size(); i++) {
			std::cout << a1[i] << std::endl;
		}
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << "Index is out of bounds" << std::endl;
		return (1);
	}

	try {
		//good array
		Array <std::string, size_t> a1(10);
		std::string strArray[10] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
		std::cout << a1.size()<< std::endl;
		for (size_t i = 0; i < 10; i++) {
			a1[i] = strArray[i];
		};
		for (size_t i = 0; i < 10; i++) {
			std::cout << a1[i] << std::endl;
		}
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << "Index is out of bounds" << std::endl;
		return (2);
	}

	{
	std::cout << "Copy constructor test" << std::endl;

	Array<int, size_t> a1(10);
	for (size_t i = 0; i < a1.size(); i++) {
		a1[i] = i + 1;
	}

	Array<int, size_t> a2(a1);
	a2[5] = 67;
	std::cout << "Here is a1[5]= " << a1[5] << " and here is a2[5]= " << a2[5] << std::endl << std::endl;

	std::cout << std::endl << "Assignment operator test" << std::endl;

	Array<int, size_t> a3 = a2;
	a3[5] = 100;
	std::cout << "Here is a2[5]= " << a2[5] << " and here is a3[5]= " << a3[5] << std::endl << std::endl;
	}

	try {
		//bad array
		Array<int, size_t> a1(20);
		std::cout << a1.size() << std::endl;
		for (size_t i = 0; i < a1.size() + 1; i++)
			a1[i] = i + 1;
		for (size_t i = 0; i < a1.size(); i++)
			std::cout << a1[i] << std::endl;
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << "Index is out of bounds" << std::endl;
		return (3);
	}

	return (0);
}
