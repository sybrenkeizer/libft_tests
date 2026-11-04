#include "test.h"
#include "libft.h"

void	test_ft_isalpha(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_isalpha ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check for negative boundary uppercase
	int	c1 = 'A' - 1;
	assert(ft_isalpha(c1) == isalpha(c1) || !ft_isalpha(c1) == !isalpha(c1));
	printf("\nTest 1 passed: Check for negative boundary uppercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c1, ft_isalpha(c1));
	printf("   isalpha - c:\"%d\" - return:%i\n", c1, isalpha(c1));

	// Test 2: Check for negative boundary uppercase
	int	c2 = 'Z' + 1;
	assert(ft_isalpha(c2) == isalpha(c2) || !ft_isalpha(c2) == !isalpha(c2));
	printf("\nTest 2 passed: Check for negative boundary uppercase \n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c2, ft_isalpha(c2));
	printf("   isalpha - c:\"%d\" - return:%i\n", c2, isalpha(c2));

	// Test 3: Check for negative boundary lowercase 
	int	c3 = 'a' - 1;
	assert(ft_isalpha(c3) == isalpha(c3) || !ft_isalpha(c3) == !isalpha(c3));
	printf("\nTest 3 passed: Check for negative boundary lowercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c3, ft_isalpha(c3));
	printf("   isalpha - c:\"%d\" - return:%i\n", c3, isalpha(c3));

	// Test 4: Check for negative boundary lowercase 
	int	c4 = 'z' + 1;
	assert(ft_isalpha(c4) == isalpha(c4) || !ft_isalpha(c4) == !isalpha(c4));
	printf("\nTest 4 passed: Check for negative boundary lowercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c4, ft_isalpha(c4));
	printf("   isalpha - c:\"%d\" - return:%i\n", c4, isalpha(c4));

	// Test 5: Check for positive boundary uppercase
	int	c5 = 'A';
	assert(ft_isalpha(c5) == isalpha(c5) || !ft_isalpha(c5) == !isalpha(c5));
	printf("\nTest 5 passed: Check for positive boundary uppercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c5, ft_isalpha(c5));
	printf("   isalpha - c:\"%d\" - return:%i\n", c5, isalpha(c5));

	// Test 6: Check for positive boundary uppercase
	int	c6 = 'Z';
	assert(ft_isalpha(c6) == isalpha(c6) || !ft_isalpha(c6) == !isalpha(c6));
	printf("\nTest 6 passed: Check for positive boundary uppercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c6, ft_isalpha(c6));
	printf("   isalpha - c:\"%d\" - return:%i\n", c6, isalpha(c6));

	// Test 7: Check for positive boundary lowercase 
	int	c7 = 'a';
	assert(ft_isalpha(c7) == isalpha(c7) || !ft_isalpha(c7) == !isalpha(c7));
	printf("\nTest 7 passed: Check for positive boundary lowercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c7, ft_isalpha(c7));
	printf("   isalpha - c:\"%d\" - return:%i\n", c7, isalpha(c7));

	// Test 8: Check for positive boundary lowercase 
	int	c8 = 'z';
	assert(ft_isalpha(c8) == isalpha(c8) || !ft_isalpha(c8) == !isalpha(c8));
	printf("\nTest 8 passed: Check for positive boundary lowercase\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c8, ft_isalpha(c8));
	printf("   isalpha - c:\"%d\" - return:%i\n", c8, isalpha(c8));

	// Test 9: Check extreme range positive
	int	c9 = 128;
	assert(ft_isalpha(c9) == isalpha(c9) || !ft_isalpha(c9) == !isalpha(c9));
	printf("\nTest 9 passed: Check extreme range positivej\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c9, ft_isalpha(c9));
	printf("   isalpha - c:\"%d\" - return:%i\n", c9, isalpha(c9));

	// Test 10: Check extreme range negative
	int	c10 = -10;
	assert(ft_isalpha(c10) == isalpha(c10) || !ft_isalpha(c10) == !isalpha(c10));
	printf("\nTest 10 passed: Check extreme range negative\n");
	printf("ft_isalpha - c:\"%d\" - return:%i\n", c10, ft_isalpha(c10));
	printf("   isalpha - c:\"%d\" - return:%i\n", c10, isalpha(c10));
}
