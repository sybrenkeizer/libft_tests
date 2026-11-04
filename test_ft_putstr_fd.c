#include "test.h"
#include "libft.h"

void	test_ft_putstr_fd(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_putstr_fd ================================================\n");
	printf("# =============================================================\n");

	char	str[] = "put string";
	int		fd = 1;
	printf("fd:%i - str:%s - ft_putstr_fd:", fd, str);
	fflush(stdout);
	ft_putstr_fd(str, fd);
	ft_putstr_fd("\n", 1);
}
