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

//?4?, 10
	ft_solver(src);
	close(fd);
	return (0);
}





/*
int		ft_rec_solv(t_pos *beg, t_pos *pos, int size, int to)
{
	if (pos == NULL)
		return (1);
	while (is_map(pos, size))
	{
		if (ft_check_int(beg, to) == 0)
		{
			if (ft_rec_solv(beg, pos, size, to) == 0)
			{
				ft_x_right(pos);
				if (is_map(pos, size) == 0)
				{
					ft_mover(pos, 0);
					ft_y_down(pos);
					if (is_map(pos, size) == 0)
						ft_mover(pos, 1);
				}
			}
		}
		else
			return (1);
	}
	return (0);
}
*/








/*
int		ft_rec_solv(t_pos *beg, t_pos *pos, int size, int to)
{
	if (pos == NULL)
		return (1);
	while (is_map(pos, size))
	{
		if (ft_check_int(beg, to) == 0 || ft_rec_solv(beg, pos->next, size, to + 1) == 0)
		{
			ft_x_right(pos);
			if (is_map(pos, size) == 0)
			{
				ft_mover(pos, 0);
				ft_y_down(pos);
			}
		}
		else
			return (1);
	}
	return (0);
}













int		ft_rec_solv(t_pos *beg, t_pos *pos, int size, int to)
{
	if (pos == NULL)
		return (1);
printf("IS_MAP-%d\n", is_map(pos, size));
printf("ft_check_int-%d\n", ft_check_int(beg, to));

		while (is_map(pos, size) == 1 && (ft_check_int(beg, to) == 0 || ft_rec_solv(beg, pos->next, size, to + 1) == 0))
		{
			ft_x_right(pos);
			if (is_map(pos, size) == 0)
			{
				ft_mover(pos, 0);
				ft_y_down(pos);
			}
		}
		if (ft_check_int(beg, to) == 1 && to > 1)
			return (1);
	return (0);
}

*/