#include "test.h"
#include "libft.h"

void	test_ft_putendl_fd(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_putendl_fd ================================================\n");
	printf("# =============================================================\n");

	char	str[] = "put string";
	int		fd = 1;
	printf("fd:%i - str:%s - ft_putendl_fd:", fd, str);
	fflush(stdout);
	ft_putendl_fd(str, fd);
}
