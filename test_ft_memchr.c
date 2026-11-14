#include "test.h"
#include "libft.h"

void	test_ft_memchr(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_memchr ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Match first index
	char	*buf1 = "123456789";
	char	c1 = '1';
	size_t	n1 = sizeof(buf1);
	assert(ft_memchr(buf1, c1, n1) == memchr(buf1, c1, n1));
	printf("\nTest 1: Match first index\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf1, c1, n1, (void *)buf1, ft_memchr(buf1, c1, n1));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf1, c1, n1, (void *)buf1, memchr(buf1, c1, n1));

	// Test 2: Full buffer without match
	char	*buf2 = "123456789";
	char	c2 = 'x';
	size_t	n2 = sizeof(buf2);
	assert(ft_memchr(buf2, c2, n2) == memchr(buf2, c2, n2));
	printf("\nTest 2: Comparison without match is succesful\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf2, c2, n2, (void *)buf2, ft_memchr(buf2, c2, n2));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf2, c2, n2, (void *)buf2, memchr(buf2, c2, n2));
	
	// Test 3: Comparison with empty array
	char	*buf3 = "";
	char	c3 = 'x';
	size_t	n3 = 1;
	assert(ft_memchr(buf3, c3, n3) == memchr(buf3, c3, n3));
	printf("\nTest 3: Comparison with empty array is succesful\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf3, c3, n3, (void *)buf3, ft_memchr(buf3, c3, n3));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf3, c3, n3, (void *)buf3, memchr(buf3, c3, n3));
 
	// Test 4: Comparison with match and limited bytes (n)
	char	*buf4 = "Amsterdam";
	char	c4 = 's';
	size_t	n4 = 3;
	assert(ft_memchr(buf4, c4, n4) == memchr(buf4, c4, n4));
	printf("\nTest 4: Comparison with limited bytes (n) is succesful\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf4, c4, n4, (void *)buf4, ft_memchr(buf4, c4, n4));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf4, c4, n4, (void *)buf4, memchr(buf4, c4, n4));

	// Test 5: Comparison without match due to n
	char	*buf5 = "Amsterdam";
	char	c5 = 's';
	size_t	n5 = 2;
	assert(ft_memchr(buf5, c5, n5) == memchr(buf5, c5, n5));
	printf("\nTest 5: Comparison with limited bytes (n) is succesful\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf5, c5, n5, (void *)buf5, ft_memchr(buf5, c5, n5));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf5, c5, n5, (void *)buf5, memchr(buf5, c5, n5));

	// Test 6: Match beyond NULL-byte
	char	*buf6 = "Amster\0dam";
	char	c6 = 'd';
	size_t	n6 = sizeof(buf6);
	assert(ft_memchr(buf6, c6, n6) == memchr(buf6, c6, n6));
	printf("\nTest 6: Match beyond NULL-byte\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf6, c6, n6, (void *)buf6, ft_memchr(buf6, c6, n6));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf6, c6, n6, (void *)buf6, memchr(buf6, c6, n6));

	// Test 7: Match last index
	char	*buf7 = "123456789";
	char	c7 = '9';
	size_t	n7 = sizeof(buf7);
	assert(ft_memchr(buf7, c7, n7) == memchr(buf7, c7, n7));
	printf("\nTest 7: Match last index\n");
	printf("ft_memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf7, c7, n7, (void *)buf7, ft_memchr(buf7, c7, n7));
	printf("   memchr - s:\"%s\" - c:\"%c\" - n:%zu - p before:%p - p after:%p\n", buf7, c7, n7, (void *)buf7, memchr(buf7, c7, n7));

	// Test 8: Match NULL-byte
	char	*buf8 = "Amster\0dam";
	char	c8 = '\0';
	size_t	n8 = sizeof(buf8);
	assert(ft_memchr(buf8, c8, n8) == memchr(buf8, c8, n8));
	printf("\nTest 8: Match NULL-byte\n");
	printf("ft_memchr - s:\"%s\" - c:\"%i\" - n:%zu - p before:%p - p after:%p\n", buf8, c8, n8, (void *)buf8, ft_memchr(buf8, c8, n8));
	printf("   memchr - s:\"%s\" - c:\"%i\" - n:%zu - p before:%p - p after:%p\n", buf8, c8, n8, (void *)buf8, memchr(buf8, c8, n8));
}
