#include "test.h"
#include "libft.h"

void	test_ft_isascii(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_isascii ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check for positive boundry ascii
	int	c1 = 0;
	assert(ft_isascii(c1) == isascii(c1) || !ft_isascii(c1) == !isascii(c1));
	printf("\nTest 1 passed: Check for positive boundry ascii\n");
	printf("ft_isascii - c:\"%d\" - return:%i\n", c1, ft_isascii(c1));
	printf("   isascii - c:\"%d\" - return:%i\n", c1, isascii(c1));

	// Test 2: Check for positive boundry ascii
	int	c2 = 127;
	assert(ft_isascii(c2) == isascii(c2) || !ft_isascii(c2) == !isascii(c2));
	printf("\nTest 2 passed: Check for positive boundry ascii\n");
	printf("ft_isascii - c:\"%d\" - return:%i\n", c2, ft_isascii(c2));
	printf("   isascii - c:\"%d\" - return:%i\n", c2, isascii(c2));

	// Test 3: Check for negative boundry ascii 
	int	c3 = -1;
	assert(ft_isascii(c3) == isascii(c3) || !ft_isascii(c3) == !isascii(c3));
	printf("\nTest 3 passed: Check for negative boundry ascii\n");
	printf("ft_isascii - c:\"%d\" - return:%i\n", c3, ft_isascii(c3));
	printf("   isascii - c:\"%d\" - return:%i\n", c3, isascii(c3));

	// Test 4: Check for negative boundry ascii 
	int	c4 = 128;
	assert(ft_isascii(c4) == isascii(c4) || !ft_isascii(c4) == !isascii(c4));
	printf("\nTest 4 passed: Check for negative boundry ascii\n");
	printf("ft_isascii - c:\"%d\" - return:%i\n", c4, ft_isascii(c4));
	printf("   isascii - c:\"%d\" - return:%i\n", c4, isascii(c4));
}
