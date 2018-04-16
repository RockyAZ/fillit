/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomelian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:35:56 by aomelian          #+#    #+#             */
/*   Updated: 2018/04/16 18:45:51 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	raise_err(void)
{
	ft_putstr("error\n");
	exit(1);
}

void	read_file(int fd, t_list **src)
{
	int ret;
	char buf[TETRA_SIZE];
	t_list *beg;

	beg = *src;
	while ((ret = read(fd, buf, TETRA_SIZE)))
	{
		buf[ret] = '\0';
		ft_list_push_back(&beg, buf, sizeof(buf));
	}
	*src = beg;
}

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*src;
	t_list	*cp;

	cp = NULL;
	src = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);	
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		raise_err();
	read_file(fd, &src);
	cp = src;

	while (cp != NULL)
	{
		ft_pos_recorder(cp);
		cp = cp->next;
	}
	cp = src;
/*
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
			write(1, "\n", 1);
			write(1, "\n", 1);
			i++;
		}
		printf("----------------------------\n");
		i = 0;
		src = src->next;
	}
	src = cp;
*/
	ft_solver(&src);
	close(fd);
	return (0);
}
