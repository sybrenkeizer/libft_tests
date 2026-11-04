#include "test.h"
#include "libft.h"

void	test_ft_memmove(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_memmove ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Copy full source including NULL-byte
	const char	src1[] = "shiny hunters";
	char	dst1a[20] = "XXXXXXXXXXXXXXXXXXX";
	char	dst1b[20] = "XXXXXXXXXXXXXXXXXXX";
	size_t	l1 = sizeof(src1);
  	void *ptr1a = ft_memmove(dst1a, src1, l1);
	void *ptr1b = memmove(dst1b, src1, l1);
	assert(!(memcmp(ptr1a, ptr1b, l1)));
	printf("\nTest 1 passed: Copy full source including NULL-byte\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src1, l1, (char *)ptr1a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src1, l1, (char *)ptr1b);

	// Test 2: Copy full source without NULL-byte
	const char	src2[] = "shiny hunters";
	char dst2a[20] = "XXXXXXXXXXXXXXXXXXX";
	char dst2b[20] = "XXXXXXXXXXXXXXXXXXX";
	size_t	l2 = sizeof(src1) - 1;
	void *ptr2a = ft_memmove(dst2a, src2, l2);
	void *ptr2b = memmove(dst2b, src2, l2);
	assert(!(memcmp(ptr2a, ptr2b, l2)));
	printf("\nTest 2 passed: Copy full source without NULL-byte\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src2, l2, (char *)ptr2a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src2, l2, (char *)ptr2b);

	// Test 3: Copy only first index
	const char	src3[] = "shiny hunters";
	char dst3a[20] = "XXXXXXXXXXXXXXXXXXX";
	char dst3b[20] = "XXXXXXXXXXXXXXXXXXX";
	size_t	l3 = 1;
	void *ptr3a = ft_memmove(dst3a, src3, l3);
	void *ptr3b = memmove(dst3b, src3, l3);
	assert(!(memcmp(ptr3a, ptr3b, l3)));
	printf("\nTest 3 passed: Copy only first index\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src3, l3, (char *)ptr3a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src3, l3, (char *)ptr3b);

	// Test 4: Copy nothing, len = 0
	const char	src4[] = "shiny hunters";
	char dst4a[20] = "XXXXXXXXXXXXXXXXX";
	char dst4b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l4 = 0;
	void *ptr4a = ft_memmove(dst4a, src4, l4);
	void *ptr4b = memmove(dst4b, src4, l4);
	assert(!(memcmp(ptr4a, ptr4b, l4)));
	printf("\nTest 4 passed: Copy nothing, len = 0\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src4, l4, (char *)ptr4a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src4, l4, (char *)ptr4b);

	// Test 5: Copy past NULL-byte
	const char	src5[] = "shiny\0hunters";
	char dst5a[20] = "XXXXXXXXXXXXXXXXX";
	char dst5b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l5 = 10;
	void *ptr5a = ft_memmove(dst5a, src5, l5);
	void *ptr5b = memmove(dst5b, src5, l5);
	assert(!(memcmp(ptr5a, ptr5b, l5)));
	printf("\nTest 5 passed: Copy past NULL-byte\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src5, l5, (char *)ptr5a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src5, l5, (char *)ptr5b);

	// Test 6: Compare returned pointer with dst
	const char	src6[] = "shiny hunters";
	char dst6a[20] = "XXXXXXXXXXXXXXXXX";
	char dst6b[20] = "XXXXXXXXXXXXXXXXX";
	size_t	l6 = sizeof(src6);
	void *ptr6a = ft_memmove(dst6a, src6, l6);
	void *ptr6b = memmove(dst6b, src6, l6);
	assert(dst6a == ptr6a && dst6b == ptr6b);
	printf("\nTest 6 passed: Compare returned pointer with dst\n");
	printf("ft_memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src6, l6, (char *)ptr6a);
	printf("   memmove - src:\"%s\" - l:%zu - dst:\"%s\"\n", src6, l6, (char *)ptr6b);

	// Test 7: Copy with a backward overlap (dst > src)
	char buf1a[] = "shiny hunters";
	char buf1b[] = "shiny hunters";
	char buf1c[] = "shiny hunters";
	size_t	l7 = 10;
	ft_memmove(buf1a + 3, buf1a, l7);
	memmove(buf1b + 3, buf1b, l7);
	ft_memcpy(buf1c + 3, buf1c, l7);
	assert(!(memcmp(buf1a, buf1b, l7)));
	printf("\nTest 7 passed: Copy with a backward overlap (dst > src)\n");
	printf("ft_memmove - src:\"%s\" - l:%zu\n", buf1a, l7);
	printf("   memmove - src:\"%s\" - l:%zu\n", buf1b, l7);
	printf(">ft_memcpy - src:\"%s\" - l:%zu\n", buf1c, l7);

	// Test 8: Copy with a forward overlap (src > dst)
	char buf2a[] = "shiny hunters";
	char buf2b[] = "shiny hunters";
	char buf2c[] = "shiny hunters";
	size_t	l8 = 10; 
	ft_memmove(buf2a, buf2a + 3, l8);
	memmove(buf2b, buf2b + 3, l8);
	ft_memcpy(buf2c, buf2c + 3, l8);
	assert(!(memcmp(buf2a, buf2b, l8)));
	printf("\nTest 8 passed: Copy with a forward overlap (src > dst)\n");
	printf("ft_memmove - src:\"%s\" - l:%zu\n", buf2a, l8);
	printf("   memmove - src:\"%s\" - l:%zu\n", buf2b, l8);
	printf(">ft_memcpy - src:\"%s\" - l:%zu\n", buf2c, l8);

	// Test 9: Copy integer array << Should check passed signed capacity values
	const int src9[] = {1, 2, 3, 4, 9};
	int dst9a[5] = {0};
	int dst9b[5] = {0};
	size_t	l9 = sizeof(src9);
	void *ptr9a = ft_memmove(dst9a, src9, l9);
	void *ptr9b = memmove(dst9b, src9, l9);
	assert((dst9a[0] == 1 && dst9a[4] == 9) && (dst9b[0] == 1 && dst9b[4] == 9));
	printf("\nTest 9 passed: Copy integer array\n");
	printf("ft_memmove - src9[0]:%i - l:%zu - dst9a[0]:%i\n", src9[0], l9, ((int *)ptr9a)[0]);
	printf("   memmove - src9[0]:%i - l:%zu - dst9b[0]:%i\n", src9[0], l9, ((int *)ptr9b)[0]);
	printf("ft_memmove - src9[4]:%i - l:%zu - dst9a[4]:%i\n", src9[4], l9, ((int *)ptr9a)[4]);
	printf("   memmove - src9[4]:%i - l:%zu - dst9b[4]:%i\n", src9[4], l9, ((int *)ptr9b)[4]);
}
