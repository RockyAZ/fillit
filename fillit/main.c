/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomelian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:35:56 by aomelian          #+#    #+#             */
/*   Updated: 2018/04/19 18:19:41 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	raise_err(void)
{
	ft_putstr("error\n");
	exit(1);
}

void	read_file(int fd, t_pos **src, char c)
{
	int ret;
	char buf[TETRA_SIZE];
	t_pos *beg;

	beg = *src;
	while ((ret = read(fd, buf, TETRA_SIZE)))
	{
		buf[ret] = '\0';
		ft_list_push_back(&beg, buf, sizeof(buf), c++);
	}
	*src = beg;
}

int		main(int argc, char **argv)
{
	int		fd;
	t_pos	*src;
	t_pos	*cp;
	char	c;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);	
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		raise_err();
		c = 'A';
	read_file(fd, &src, c);
	cp = src;

	while (cp != NULL)
	{
		ft_pos_recorder(cp);
		ft_rewrite(cp, cp);
		cp = cp->next;
	}
/*
	cp = src;
	int i = 0;
	while (src != NULL)
	{
		printf("str:\n%s\n", src->content);
		while (i < 4)
		{
			ft_putstr("POS_x- ");
			ft_putnbr(src->x[i]);
			write(1, "\n", 1);
			ft_putstr("POS_y- ");
			ft_putnbr(src->y[i]);
			write(1, "\n\n", 2);
			i++;
		}
		printf("----------------------------\n");
		i = 0;
		src = src->next;
	}
	src = cp;
*/


//		printf("main-2-%d\n", ft_check_all(&cp));

	ft_solver(src);
	close(fd);
	return (0);
}