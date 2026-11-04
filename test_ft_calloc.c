#include "test.h"
#include "libft.h"


void  test_ft_calloc(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_calloc ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Allocate small memory area
	size_t	nmemb1 = 5;
	size_t	size1 = 4;
	void *ptr1a = ft_calloc(nmemb1, size1);
	void *ptr1b = calloc(nmemb1, size1);
	assert(!memcmp(ptr1a, ptr1b, nmemb1));
	printf("\nTest 1 passed: Allocate small memory area\n");
	printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb1, size1, ptr1a);
	printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb1, size1, ptr1b);
	free(ptr1a);
	free(ptr1b);

	// Test 2: Execute with zero nmemb
	size_t	nmemb2 = 0;
	size_t	size2 = 4;
	void *ptr2a = ft_calloc(nmemb2, size2);
	void *ptr2b = calloc(nmemb2, size2);
	assert(!memcmp(ptr2a, ptr2b, nmemb2));
	printf("\nTest 2 passed: Execute with zero nmemb\n");
	printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb2, size2, ptr2a);
	printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb2, size2, ptr2b);
	free(ptr2a);
	free(ptr2b);

	// Test 3: Execute with zero size
	size_t	nmemb3 = 1;
	size_t	size3 = 0;
	void *ptr3a = ft_calloc(nmemb3, size3);
	void *ptr3b = calloc(nmemb3, size3);
	// assert(!memcmp(ptr3a, ptr3b, nmemb3));
	printf("\nTest 3 passed: Execute with zero size\n");
	printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb3, size3, ptr3a);
	printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb3, size3, ptr3b);
	free(ptr3a);
	free(ptr3b);

	// Test 4: Execute with both zero nmemb and zero size
	size_t	nmemb4 = 0;
	size_t	size4 = 0;
	void *ptr4a = ft_calloc(nmemb4, size4);
	void *ptr4b = calloc(nmemb4, size4);
	// assert(!memcmp(ptr4a, ptr4b, nmemb4));
	printf("\nTest 4 passed: Execute with both zero nmemb and zero size\n");
	printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb4, size4, ptr4a);
	printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb4, size4, ptr4b);
	free(ptr4a);
	free(ptr4b);

	// Test 5: Allocate big memory area >> valgrind 
	// size_t	nmemb5 = 999999999;
	// size_t	size5 = 1;
	// void *ptr5a = ft_calloc(nmemb5, size5);
	// void *ptr5b = calloc(nmemb5, size5);
	// assert(!memcmp(ptr5a, ptr5b, nmemb5));
	// printf("\nTest 5 passed: Allocate big memory area\n");
	// printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb5, size5, ptr5a);
	// printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb5, size5, ptr5b);
	// free(ptr5a);
	// free(ptr5b);

	// Test 6: Cross over max possible allocation size >> seg faults
	// size_t	nmemb6 = SIZE_MAX;
	// size_t	size6 = SIZE_MAX;
	// void *ptr6a = ft_calloc(nmemb6, size6);
	// void *ptr6b = calloc(nmemb6, size6);
	// assert(!memcmp(ptr6a, ptr6b, nmemb6));
	// printf("\nTest 6 passed: Cross over max possible allocaton size\n");
	// printf("ft_calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb6, size6, ptr6a);
	// printf("   calloc - nmemb:%zu - size:%zu - return:\"%p\"\n", nmemb6, size6, ptr6b);
	// free(ptr6a);
	// free(ptr6b);
}
