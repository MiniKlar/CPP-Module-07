/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:19 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 00:05:13 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ) {
	try {
		//good array
		Array <char, int> t1(10);
		std::cout << t1.size()<< std::endl;
		for (size_t i = 0; i < 10; i++) {
			t1[i] = i + 36;
		};
		for (size_t i = 0; i < 10; i++) {
			std::cout << t1[i] << std::endl;
		}

		//bad array
		Array<int, int> t2(20);
		t2[5] = 67;
		Array<int, int> t3;
		std::cout << t3.size() << std::endl;
		t3 = t2;
		t3[5] = 100;
		std::cout << "Here is t2[5]= " << t2[5] << " and here is t3[5]= " << t3[5] << std::endl;
	} catch (std::exception & e) {
		std::cout << "Index is out of bounds" << std::endl;
		return (1);
	}
	return (0);
}
