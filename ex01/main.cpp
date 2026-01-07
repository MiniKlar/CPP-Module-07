/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:39:06 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 22:57:49 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void f(std::string & str) {
// 	std::cout << "str function called: " << str << std::endl;
// }

// void f(const std::string & str) {
// 	std::cout << "Const str function called: " << str << std::endl;
// }

// void ff(const size_t & i) {
// 	std:: cout << "const i function called : " << i << std::endl;
// }

// void ff(size_t & i) {
// 	std:: cout << "i function called : " << i << std::endl;
// }

int	main( void )
{
	std::string		array[5] = {"One", "Two", "Three", "Four", "Five"};
	::iter(array, 5, static_cast<void(*) (std::string &)> (f));

	const size_t	arrayS[5] = {1, 2, 3, 4, 5};
	::iter(arrayS, 5, static_cast<void(*) (const size_t &)> (f));

	return (0);
}
