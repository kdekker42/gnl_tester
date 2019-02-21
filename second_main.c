#include "get_next_line.h"
//remove
#include <stdio.h>

#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	char	*line;


	(void)argc;
	(void)argv;
	fd1 = open("testfile", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	fd3 = open("testfile3", O_RDONLY);
	fd4 = open("testfile4", O_RDONLY);
	fd5 = open("megafile", O_RDONLY);

	while (get_next_line(fd1, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	while (get_next_line(fd2, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	while (get_next_line(fd3, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	while (get_next_line(fd4, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	while (get_next_line(fd5, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);


	fd1 = open("testfile", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	fd3 = open("testfile3", O_RDONLY);
	fd4 = open("testfile4", O_RDONLY);
	fd5 = open("megafile", O_RDONLY);


	get_next_line(fd1, &line);
	ft_putendl(line);
	get_next_line(fd3, &line);
	ft_putendl(line);
	get_next_line(fd5, &line);
	ft_putendl(line);
	get_next_line(fd3, &line);
	ft_putendl(line);
	get_next_line(fd2, &line);
	ft_putendl(line);
	get_next_line(fd5, &line);
	ft_putendl(line);
	get_next_line(fd4, &line);
	ft_putendl(line);
	get_next_line(fd2, &line);
	ft_putendl(line);
	get_next_line(fd3, &line);
	ft_putendl(line);
	get_next_line(fd1, &line);
	ft_putendl(line);

}
