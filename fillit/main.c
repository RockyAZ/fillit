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
	int		ret;
	char	buf[TETRA_SIZE];
	t_pos	*beg;

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
		ft_mover(cp, 0);
		ft_mover(cp, 1);
		cp = cp->next;
	}
	ft_solver(src);
	close(fd);
	return (0);
}
