#include "test.h"
#include "libft.h"

void	test_ft_memcpy(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_memcpy ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Copy full source including ending NULL-byte
	const char	src1[] = "shiny hunters";
	char dst1a[20] = "XXXXXXXXXXXXXXXXX";
	char dst1b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l1 = sizeof(src1);
	void *ptr1a = ft_memcpy(dst1a, src1, l1);
	void *ptr1b = memcpy(dst1b, src1, l1);
	assert(!(memcmp(ptr1a, ptr1b, l1)));
	printf("\nTest 1 passed: Copy full source including ending NULL-byte\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src1, l1, (char *)ptr1a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src1, l1, (char *)ptr1b);

	// Test 2: Copy full source excluding end NULL-byte
	const char	src2[] = "shiny hunters";
	char dst2a[20] = "XXXXXXXXXXXXXXXXX";
	char dst2b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l2 = sizeof(src1) - 1;
	void *ptr2a = ft_memcpy(dst2a, src2, l2);
	void *ptr2b = memcpy(dst2b, src2, l2);
	assert(!(memcmp(ptr2a, ptr2b, l2)));
	printf("\nTest 2 passed: Copy full source excluding ending NULL-byte\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src2, l2, (char *)ptr2a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src2, l2, (char *)ptr2b);

	// Test 3: Copy only first index
	const char	src3[] = "shiny hunters";
	char dst3a[20] = "XXXXXXXXXXXXXXXXX";
	char dst3b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l3 = 1;
	void *ptr3a = ft_memcpy(dst3a, src3, l3);
	void *ptr3b = memcpy(dst3b, src3, l3);
	assert(!(memcmp(ptr3a, ptr3b, l3)));
	printf("\nTest 3 passed: Copy only first index\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src3, l3, (char *)ptr3a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src3, l3, (char *)ptr3b);

	// Test 4: Copy nothing, len = 0
	const char	src4[] = "shiny hunters";
	char dst4a[20] = "XXXXXXXXXXXXXXXXX";
	char dst4b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l4 = 0;
	void *ptr4a = ft_memcpy(dst4a, src4, l4);
	void *ptr4b = memcpy(dst4b, src4, l4);
	assert(!(memcmp(ptr4a, ptr4b, l4)));
	printf("\nTest 4 passed: Copy nothing, len = 0\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src4, l4, (char *)ptr4a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src4, l4, (char *)ptr4b);

	// Test 5: Copy past NULL-byte
	const char	src5[] = "shiny\0hunters";
	char dst5a[20] = "XXXXXXXXXXXXXXXXX";
	char dst5b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l5 = 10;
	void *ptr5a = ft_memcpy(dst5a, src5, l5);
	void *ptr5b = memcpy(dst5b, src5, l5);
	assert(!(memcmp(ptr5a, ptr5b, l5)));
	printf("\nTest 5 passed: Copy past null byte\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src5, l5, (char *)ptr5a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src5, l5, (char *)ptr5b);

	// Test 6: Compare returned pointer with dst
	const char	src6[] = "shiny hunters";
	char dst6a[20] = "XXXXXXXXXXXXXXXXX";
	char dst6b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l6 = sizeof(src6);
	void *ptr6a = ft_memcpy(dst6a, src6, l6);
	void *ptr6b = memcpy(dst6b, src6, l6);
	assert(dst6a == ptr6a && dst6b == ptr6b);
	printf("\nTest 6 passed: Compare returned pointer with dst\n");
	printf("ft_memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src6, l6, (char *)ptr6a);
	printf("   memcpy - src:\"%s\" - l:%zu - dst:\"%s\"\n", src6, l6, (char *)ptr6b);

	// Test 7: Copy integer array << Should check passed signed capacity values
	const int src7[] = {1, 2, 3, 4, 9};
	int dst7a[5] = {0};
	int dst7b[5] = {0};
	size_t	l7 = sizeof(src7);
	void *ptr7a = ft_memcpy(dst7a, src7, l7);
	void *ptr7b = memcpy(dst7b, src7, l7);
	assert((dst7a[0] == 1 && dst7a[4] == 9) && (dst7b[0] == 1 && dst7b[4] == 9));
	printf("\nTest 7 passed: Copy integer array\n");
	printf("ft_memcpy - src7[0]:%i - l:%zu - dst7a[0]:%i\n", src7[0], l7, ((int *)ptr7a)[0]);
	printf("   memcpy - src7[0]:%i - l:%zu - dst7b[0]:%i\n", src7[0], l7, ((int *)ptr7b)[0]);
	printf("ft_memcpy - src7[4]:%i - l:%zu - dst7a[4]:%i\n", src7[4], l7, ((int *)ptr7a)[4]);
	printf("   memcpy - src7[4]:%i - l:%zu - dst7b[4]:%i\n", src7[4], l7, ((int *)ptr7b)[4]);
}
