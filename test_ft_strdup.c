#include "test.h"
#include "libft.h"


void  test_ft_strdup(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strdup ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Duplicate full string 
	const char buf1[] = "duplicate me";
	char	*ptr1a = ft_strdup(buf1);
	char	*ptr1b = strdup(buf1);
	assert(!memcmp(ptr1a, ptr1b, sizeof(buf1)));
	printf("\nTest 1 passed: Duplicate full string\n");
	printf("ft_strdup - buffer:\"%s\" - return:\"%s\"\n", buf1, ptr1a);
	printf("   strdup - buffer:\"%s\" - return:\"%s\"\n", buf1, ptr1b);
	free(ptr1a);
	free(ptr1b);

	// Test 2:  Duplicate empty string 
	const char buf2[] = "";
	char	*ptr2a = ft_strdup(buf2);
	char	*ptr2b = strdup(buf2);
	assert(!memcmp(ptr2a, ptr2b, strlen(buf2)));
	printf("\nTest 2 passed: Duplicate empty string\n");
	printf("ft_strdup - buffer:\"%s\" - return:\"%s\"\n", buf2, ptr2a);
	printf("   strdup - buffer:\"%s\" - return:\"%s\"\n", buf2, ptr2b);
	free(ptr2a);
	free(ptr2b);

	// Test 3:  Duplicate NULL string 
	const char buf3[] = "*\0w\0\0\0a";
	char	*ptr3a = ft_strdup(buf3);
	char	*ptr3b = strdup(buf3);
	assert(!memcmp(ptr3a, ptr3b, strlen(buf3)));
	printf("\nTest 3 passed: Duplicate string with NULL-bytes\n");
	printf("ft_strdup - buffer:\"%s\" - return:\"%s\"\n", buf3, ptr3a);
	printf("   strdup - buffer:\"%s\" - return:\"%s\"\n", buf3, ptr3b);
	free(ptr3a);
	free(ptr3b);
}
