#include "test.h"
#include "libft.h"

void	test_ft_putchar_fd(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_putchar_fd ===============================================\n");
	printf("# =============================================================\n");

	char	c = 'e';
	int		fd = 1;
	printf("fd:%i - c:%c - ft_putchar_fd:", fd, c);
	fflush(stdout);
	ft_putchar_fd(c, fd);
	ft_putchar_fd('\n', fd);
}
