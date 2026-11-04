#include "test.h"
#include "libft.h"

void	test_ft_isdigit(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_isdigit ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check for negative boundary digits
	int	c1 = '0' - 1;
	assert(ft_isdigit(c1) == isdigit(c1) || !ft_isdigit(c1) == !isdigit(c1));
	printf("\nTest 1 passed: Check for negative boundary digits\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c1, ft_isdigit(c1));
	printf("   isdigit - c:\"%d\" - return:%i\n", c1, isdigit(c1));

	// Test 2: Check for negative boundary digits
	int	c2 = '9' + 1;
	assert(ft_isdigit(c2) == isdigit(c2) || !ft_isdigit(c2) == !isdigit(c2));
	printf("\nTest 2 passed: Check for negative boundary digits\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c2, ft_isdigit(c2));
	printf("   isdigit - c:\"%d\" - return:%i\n", c2, isdigit(c2));

	// Test 3: Check for positive boundary digits
	int	c3 = '0';
	assert(ft_isdigit(c3) == isdigit(c3) || !ft_isdigit(c3) == !isdigit(c3));
	printf("\nTest 3 passed: Check for positive boundary digits\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c3, ft_isdigit(c3));
	printf("   isdigit - c:\"%d\" - return:%i\n", c3, isdigit(c3));

	// Test 4: Check for positive boundary digits
	int	c4 = '9';
	assert(ft_isdigit(c4) == isdigit(c4) || !ft_isdigit(c4) == !isdigit(c4));
	printf("\nTest 4 passed: Check for positive boundary digits\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c4, ft_isdigit(c4));
	printf("   isdigit - c:\"%d\" - return:%i\n", c4, isdigit(c4));

	// Test 5: Check extreme positive
	int	c5 = 250;
	assert(ft_isdigit(c5) == isdigit(c5) || !ft_isdigit(c5) == !isdigit(c5));
	printf("\nTest 5 passed: Check extreme range positive\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c5, ft_isdigit(c5));
	printf("   isdigit - c:\"%d\" - return:%i\n", c5, isdigit(c5));

	// Test 6: Check extreme negative
	int	c6 = -100;
	assert(ft_isdigit(c6) == isdigit(c6) || !ft_isdigit(c6) == !isdigit(c6));
	printf("\nTest 6 passed: Check extreme range negative\n");
	printf("ft_isdigit - c:\"%d\" - return:%i\n", c6, ft_isdigit(c6));
	printf("   isdigit - c:\"%d\" - return:%i\n", c6, isdigit(c6));
}
