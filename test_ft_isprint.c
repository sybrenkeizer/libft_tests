#include "test.h"
#include "libft.h"

void	test_ft_isprint(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_isprint ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check for negative boundary printables
	int	c1 = ' ' - 1;
	assert(ft_isprint(c1) == isprint(c1) || !ft_isprint(c1) == !isprint(c1));
	printf("\nTest 1 passed: Check for negative boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c1, ft_isprint(c1));
	printf("   isprint - c:\"%c\" - return:%i\n", c1, isprint(c1));

	// Test 2: Check for negative boundary printables
	int	c2 = '~' + 1;
	assert(ft_isprint(c2) == isprint(c2) || !ft_isprint(c2) == !isprint(c2));
	printf("\nTest 2 passed: Check for negative boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c2, ft_isprint(c2));
	printf("   isprint - c:\"%c\" - return:%i\n", c2, isprint(c2));

	// Test 3: Check for positive boundary printables
	int	c3 = ' ';
	assert(ft_isprint(c3) == isprint(c3) || !ft_isprint(c3) == !isprint(c3));
	printf("\nTest 3 passed: Check for positive boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c3, ft_isprint(c3));
	printf("   isprint - c:\"%c\" - return:%i\n", c3, isprint(c3));

	// Test 4: Check for positive boundary printables
	int	c4 = '~';
	assert(ft_isprint(c4) == isprint(c4) || !ft_isprint(c4) == !isprint(c4));
	printf("\nTest 4 passed: Check for positive boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c4, ft_isprint(c4));
	printf("   isprint - c:\"%c\" - return:%i\n", c4, isprint(c4));

	// Test 5: Check for extreme negative value 
	int	c5 = -100; 
	assert(ft_isprint(c5) == isprint(c5) || !ft_isprint(c5) == !isprint(c5));
	printf("\nTest 5 passed: Check for positive boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c5, ft_isprint(c5));
	printf("   isprint - c:\"%c\" - return:%i\n", c5, isprint(c5));

	// Test 6: Check for extreme positive value 
	int	c6 = 250; 
	assert(ft_isprint(c6) == isprint(c6) || !ft_isprint(c6) == !isprint(c6));
	printf("\nTest 6 passed: Check for positive boundary printables\n");
	printf("ft_isprint - c:\"%c\" - return:%i\n", c6, ft_isprint(c6));
	printf("   isprint - c:\"%c\" - return:%i\n", c6, isprint(c6));
}
