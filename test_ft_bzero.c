#include "test.h"
#include "libft.h"

void	test_ft_bzero(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_bzero ====================================================\n");
	printf("# =============================================================\n");

	// Test 1: Erease full character array
	char buf1[] = "explicit content";
	char buf2[] = "explicit content";
	size_t	len1 = sizeof(buf1);
	ft_bzero(buf1, len1);
	bzero(buf2, len1);
	assert(!memcmp(buf1, buf2, sizeof(buf1)));
	printf("\nTest 1 passed: Erease full character array\n");
	printf("ft_bzero - b:\"%s\" - len:%zu\n", buf1, len1);
	printf("   bzero - b:\"%s\" - len:%zu\n", buf2, len1);

	// Test 2: Erease end part of array
	char buf3[] = "explicit content";
	char buf4[] = "explicit content";
	size_t	len2 = sizeof(buf3) - 8;
	ft_bzero(buf3 + 8 , len2);
	bzero(buf4 + 8, len2);
	assert(!memcmp(buf3, buf4, sizeof(buf3)));
	printf("\nTest 2 passed: Erease end part of memory area\n");
	printf("ft_bzero - b:\"%s\" - len:%zu\n", buf3, len2);
	printf("   bzero - b:\"%s\" - len:%zu\n", buf3, len2);
	
	// Test 3: No erease 
	char buf5[] = "explicit content";
	char buf6[] = "explicit content";
	size_t	len3 = 0;
	ft_bzero(buf5 , len3);
	bzero(buf6, len3);
	assert(!memcmp(buf5, buf6, sizeof(buf5)));
	printf("\nTest 3 passed: No erease\n");
	printf("ft_bzero - b:\"%s\" - len:%zu\n", buf5, len3);
	printf("   bzero - b:\"%s\" - len:%zu\n", buf6, len3);

	// Test 4: Erease integer array starting from index 1
	int buf7[] = { 200, 200, 200, 100 };
	int buf8[] = { 200, 200, 200, 100 };
	size_t	len4 = sizeof(buf7) - 4;
	ft_bzero(buf7 + 1, len4);
	bzero(buf8 + 1, len4);
	assert(!memcmp(buf7, buf8, sizeof(buf7)));
	printf("\nTest 4 passed: Erease integer array starting from index 1\n");

	size_t i = 0;
	printf("ft_bzero - b:\"");
	while (i < sizeof(buf7) / sizeof(int))
	  printf("%d", buf7[i++]);
	printf("\" - len:%zu\n", len4);
	i = 0;
	printf("   bzero - b:\"");
	while (i < sizeof(buf7) / sizeof(int))
	  printf("%d", buf8[i++]);
	printf("\" - len:%zu\n", len4);
}
