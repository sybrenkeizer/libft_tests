#include "test.h"
#include "libft.h"

void	test_ft_putnbr_fd(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_putnbr_fd ================================================\n");
	printf("# =============================================================\n");

	int	i = 0;
	int test_values[] = {0, 42, 2, 2147483647, -2147483648, -210, 9999};
	int num_tests = sizeof(test_values) / sizeof(test_values[0]);
	while (i < num_tests)
	{
	    printf("Test %d -> ft_putnbr_fd: ", test_values[i]);
	    fflush(stdout);
	    ft_putnbr_fd(test_values[i], 1);
	    write(1, "\n", 1);
		i++;
	}
}
