/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:10:08 by rafaelherin       #+#    #+#             */
/*   Updated: 2024/11/23 19:39:36 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str){
   
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}


int main (){

    char name[100] = "hello world";
    int x;

    x = ft_strlen(name);
    printf("%d\n" ,x);
}