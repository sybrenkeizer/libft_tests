#include "test.h"
#include "libft.h"

void	test_ft_isalnum(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_isalnum ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check for negative boundary uppercase
	int	c1 = 'A' - 1;
	assert(ft_isalnum(c1) == isalnum(c1) || !ft_isalnum(c1) == !isalnum(c1));
	printf("\nTest 1 passed: Check for negative boundary uppercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c1, ft_isalnum(c1));
	printf("   isalnum - c:\"%d\" - return:%i\n", c1, isalnum(c1));

	// Test 2: Check for negative boundary uppercase
	int	c2 = 'Z' + 1;
	assert(ft_isalnum(c2) == isalnum(c2) || !ft_isalnum(c2) == !isalnum(c2));
	printf("\nTest 2 passed: Check for negative boundary uppercase \n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c2, ft_isalnum(c2));
	printf("   isalnum - c:\"%d\" - return:%i\n", c2, isalnum(c2));

	// Test 3: Check for negative boundary lowercase 
	int	c3 = 'a' - 1;
	assert(ft_isalnum(c3) == isalnum(c3) || !ft_isalnum(c3) == !isalnum(c3));
	printf("\nTest 3 passed: Check for negative boundary lowercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c3, ft_isalnum(c3));
	printf("   isalnum - c:\"%d\" - return:%i\n", c3, isalnum(c3));

	// Test 4: Check for negative boundary lowercase 
	int	c4 = 'z' + 1;
	assert(ft_isalnum(c4) == isalnum(c4) || !ft_isalnum(c4) == !isalnum(c4));
	printf("\nTest 4 passed: Check for negative boundary lowercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c4, ft_isalnum(c4));
	printf("   isalnum - c:\"%d\" - return:%i\n", c4, isalnum(c4));

	// Test 5: Check for positive boundary uppercase
	int	c5 = 'A';
	assert(ft_isalnum(c5) == isalnum(c5) || !ft_isalnum(c5) == !isalnum(c5));
	printf("\nTest 5 passed: Check for positive boundary uppercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c5, ft_isalnum(c5));
	printf("   isalnum - c:\"%d\" - return:%i\n", c5, isalnum(c5));

	// Test 6: Check for positive boundary uppercase
	int	c6 = 'Z';
	assert(ft_isalnum(c6) == isalnum(c6) || !ft_isalnum(c6) == !isalnum(c6));
	printf("\nTest 6 passed: Check for positive boundary uppercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c6, ft_isalnum(c6));
	printf("   isalnum - c:\"%d\" - return:%i\n", c6, isalnum(c6));

	// Test 7: Check for positive boundary lowercase 
	int	c7 = 'a';
	assert(ft_isalnum(c7) == isalnum(c7) || !ft_isalnum(c7) == !isalnum(c7));
	printf("\nTest 7 passed: Check for positive boundary lowercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c7, ft_isalnum(c7));
	printf("   isalnum - c:\"%d\" - return:%i\n", c7, isalnum(c7));

	// Test 8: Check for positive boundary lowercase 
	int	c8 = 'z';
	assert(ft_isalnum(c8) == isalnum(c8) || !ft_isalnum(c8) == !isalnum(c8));
	printf("\nTest 8 passed: Check for positive boundary lowercase\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c8, ft_isalnum(c8));
	printf("   isalnum - c:\"%d\" - return:%i\n", c8, isalnum(c8));

	// Test 9: Check for negative boundary digits
	int	c9 = '0' - 1;
	assert(ft_isalnum(c9) == isalnum(c9) || !ft_isalnum(c9) == !isalnum(c9));
	printf("\nTest 9 passed: Check for negative boundary digits\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c9, ft_isalnum(c9));
	printf("   isalnum - c:\"%d\" - return:%i\n", c9, isalnum(c9));

	// Test 10: Check for negative boundary digits
	int	c10 = '9' + 1;
	assert(ft_isalnum(c10) == isalnum(c10) || !ft_isalnum(c10) == !isalnum(c10));
	printf("\nTest 10 passed: Check for negative boundary digits\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c10, ft_isalnum(c10));
	printf("   isalnum - c:\"%d\" - return:%i\n", c10, isalnum(c10));

	// Test 11: Check for positive boundary digits
	int	c11 = '0';
	assert(ft_isalnum(c11) == isalnum(c11) || !ft_isalnum(c11) == !isalnum(c11));
	printf("\nTest 11 passed: Check for positive boundary digits\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c11, ft_isalnum(c11));
	printf("   isalnum - c:\"%d\" - return:%i\n", c11, isalnum(c11));

	// Test 12: Check for positive boundary digits
	int	c12 = '9';
	assert(ft_isalnum(c12) == isalnum(c12) || !ft_isalnum(c12) == !isalnum(c12));
	printf("\nTest 12 passed: Check for positive boundary digits\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c12, ft_isalnum(c12));
	printf("   isalnum - c:\"%d\" - return:%i\n", c12, isalnum(c12));

	// Test 13: Check extreme range positive
	int	c13 = 128;
	assert(ft_isalnum(c13) == isalnum(c13) || !ft_isalnum(c13) == !isalnum(c13));
	printf("\nTest 13 passed: Check extreme range positive\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c13, ft_isalnum(c13));
	printf("   isalnum - c:\"%d\" - return:%i\n", c13, isalnum(c13));

	// Test 14: Check extreme range negative
	int	c14 = -10;
	assert(ft_isalnum(c14) == isalnum(c14) || !ft_isalnum(c14) == !isalnum(c14));
	printf("\nTest 14 passed: Check extreme range negative\n");
	printf("ft_isalnum - c:\"%d\" - return:%i\n", c14, ft_isalnum(c14));
	printf("   isalnum - c:\"%d\" - return:%i\n", c14, isalnum(c14));
}
