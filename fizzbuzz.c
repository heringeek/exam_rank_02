/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 00:41:00 by rafaelherin       #+#    #+#             */
/*   Updated: 2024/11/23 18:20:34 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_number(int n)
{
    char    str[10] = "0123456789";

    if (n > 9)
        ft_print_number(n / 10);
    write (1, &str[n % 10], 1);
}

int main ()
{
    int     n;

    n = 1;
    while (n <= 100)
    {
        if (n % 15 == 0)
            write (1, "fizzbuzz", 8);
        else if (n % 3 == 0)
            write (1, "fizz", 4);
        else if (n % 5 == 0)
            write (1, "buzz", 4);
        else {
            ft_print_number(n);
        }
        write (1, "\n", 1);
        n++;
    }
}