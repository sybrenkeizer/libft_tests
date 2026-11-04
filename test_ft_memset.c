#include "test.h"
#include "libft.h"

void	test_ft_memset(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_memset ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Fill full buffer with printable character;
	char	c1 = '-';
	char	buf1a[] = "XXXXXXXXXXXXXXXXXXX";
	char	buf1b[] = "XXXXXXXXXXXXXXXXXXX";
	size_t	len1 = sizeof(buf1a) - 1;
	ft_memset(buf1a, c1, len1);
	memset(buf1b, c1, len1);
	assert(!(memcmp(buf1a, buf1b, len1)));
	printf("\nTest 1 passed: Fill full buffer with printable character\n");
	printf("ft_memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf1a, c1, len1);
	printf("   memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf1b, c1, len1);

	// Test 2: Fill full buffer with NULL-byte;
	char	c2 = '\0';
	char	buf2a[] = "XXXXXXXXXXXXXXXXXXX";
	char	buf2b[] = "XXXXXXXXXXXXXXXXXXX";
	size_t	len2 = sizeof(buf2a) - 1;
	ft_memset(buf2a, c2, len2);
	memset(buf2b, c2, len2);
	assert(!(memcmp(buf2a, buf2b, len2)));
	printf("\nTest 2 passed: Fill full buffer with NULL-byte\n");
	printf("ft_memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf2a, c2, len2);
	printf("   memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf2b, c2, len2);

	// Test 3: Fill zero bytes, len = 0;
	char	c3 = 'Y';
	char	buf3a[] = "XXXXXXXXXXXXXXXXXXX";
	char	buf3b[] = "XXXXXXXXXXXXXXXXXXX";
	size_t	len3 = 0;
	ft_memset(buf3a, c3, len3);
	memset(buf3b, c3, len3);
	assert(!(memcmp(buf3a, buf3b, len3)));
	printf("\nTest 3 passed: Fill zero bytes, len = 0\n");
	printf("ft_memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf3a, c3, len3);
	printf("   memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf3b, c3, len3);

	// Test 4: Fill to a later start address;
	char	c4 = '.';
	char	buf4a[] = "XXXXXXXXXXXXXXXXXXX";
	char	buf4b[] = "XXXXXXXXXXXXXXXXXXX";
	size_t	len4 = 5;
	ft_memset(buf4a + 5, c4, len4);
	memset(buf4b + 5, c4, len4);
	assert(!(memcmp(buf4a, buf4b, len4)));
	printf("\nTest 4 passed: Fill to a later start address\n");
	printf("ft_memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf4a, c4, len4);
	printf("   memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf4b, c4, len4);

	// Test 5: integer array
	int	c5 = 0;
	int buf5a[] = {200, 201, 202};
	int buf5b[] = {200, 201, 202};
	size_t	len5 = sizeof(buf5a);
	ft_memset(buf5a, c5, len5);
	memset(buf5b, c5, len5);
	assert(!(memcmp(buf5a, buf5b, len5)));
	printf("\nTest 5 passed: Fill to integer array\n");
	printf("ft_memset - src:%i %i %i - c:\"%i\" - len:%zu\n", buf5a[0], buf5a[1], buf5a[2], c5, len5);
	printf("   memset - src:%i %i %i - c:\"%i\" - len:%zu\n", buf5b[0], buf5b[1], buf5b[2], c5, len5);

	// Test 6: Check unsigned char with octal notation going past ascii;
	char	c6 = '\200';
	char	buf6a[] = "XXXXXXXXXXXXXXXXXXX";
	char	buf6b[] = "XXXXXXXXXXXXXXXXXXX";
	size_t	len6 = 5;
	ft_memset(buf6a + 5, c6, len6);
	memset(buf6b + 5, c6, len6);
	assert(!(memcmp(buf6a, buf6b, len6)));
	printf("\nTest 6 passed: Handle unsigned char value past ascii\n");
	printf("ft_memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf6a, c6, len6);
	printf("   memset - src:\"%s\" - c:\"%c\" - len:%zu\n", buf6b, c6, len6);
}
