/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:23:27 by ybarbier          #+#    #+#             */
/*   Updated: 2014/12/12 14:52:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char    *line = NULL;
    int     fd = 0;
//    int     fd2 = 0;
    int     ret = 0;
/*
    if (ac > 1)
    {
        fd = open(av[1], O_RDONLY);
        fd2 = open(av[2], O_RDONLY);

        get_next_line(fd, &line);    
            puts(line);
        get_next_line(fd2, &line);
            puts(line);
        get_next_line(fd, &line);
            puts(line);
        get_next_line(fd2, &line);
            puts(line);
        get_next_line(fd, &line);
            puts(line); 
        get_next_line(fd2, &line);
            puts(line);
        get_next_line(fd, &line);
            puts(line);
        get_next_line(fd2, &line);
            puts(line);
        get_next_line(fd, &line);    
            puts(line);
        // get_next_line(fd2, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
        //     puts(line);
        // get_next_line(fd, &line);
            // puts(line);
        // get_next_line(fd2, &line);  
        // puts(line);
    }
    return (0);

    */
    if (ac > 1)
    {
        if ((fd = open(av[1], O_RDONLY)) > 0)
        {
            while ((ret = get_next_line(fd, &line)) > 0) {
                // ft_putnbr(ret);
                // ft_putstr(">");
                // ft_putstr(line);
                // ft_putstr("<");
                puts(line);
                // ft_putstr(line);
                free(line);
            }
            if (ret < 0){
                printf("/\e[1;31m!\e[0m\\ error reading '%s'\n", av[1]);
            }
            close(fd);
        }
        else {
            printf("/\e[1;31m!\e[0m\\ error opening '%s'\n", av[1]);
        }
    }
    else
        while ((ret = get_next_line(0, &line)) > 0){
            puts(line);
            free(line);
        }
        
    return (0);
}