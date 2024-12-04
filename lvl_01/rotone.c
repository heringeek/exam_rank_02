/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:48:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2024/11/24 11:34:58 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *text){
    
    int index;

    index = 0;
    while (text[index] != '\0'){
        if (text[index] == 'z' || text[index] == 'Z')
            text[index] += -25;
        else if (text[index] != 32)
            text[index] += 1;
        write (1, &text[index], 1);
        index++;
    }
}

int main (int argc, char **argv){
    
    char    text;

    if (argc > 1)
        rotone(argv[1]);
    else
        write (1, "\n", 1);
    return (0);
}