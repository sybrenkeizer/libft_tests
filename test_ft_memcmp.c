#include "test.h"
#include "libft.h"

void	test_ft_memcmp(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_memcmp ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Comparison with equal arrays over their full length
	const char	buf1a[] = "2342";
	const char	buf1b[] = "2342";
	size_t	n1 = sizeof(buf1a);
	assert(ft_memcmp(buf1a, buf1b, n1) == memcmp(buf1a, buf1b, n1));
	printf("\nTest 1 passed: Comparison with equal arrays over their full length\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf1a, buf1b, n1, ft_memcmp(buf1a, buf1b, n1));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf1a, buf1b, n1, memcmp(buf1a, buf1b, n1));

	// Test 2: Comparison with unequal arrays
	const char	buf2a[] = "2342";
	const char	buf2b[] = "2348";
	size_t	n2 = 4;
	assert(ft_memcmp(buf2a, buf2b, n2) == memcmp(buf2a, buf2b, n2));
	printf("\nTest 2 passed: Comparison with unequal arrays\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf2a, buf2b, n2, ft_memcmp(buf2a, buf2b, n2));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf2a, buf2b, n2, memcmp(buf2a, buf2b, n2));

	// Test 3: Unequal arrays reading limited bytes (n)
	const char	buf3a[] = "2342";
	const char	buf3b[] = "2348";
	size_t	n3 = 3;
	assert(ft_memcmp(buf3a, buf3b, n3) == memcmp(buf3a, buf3b, n3));
	printf("\nTest 3 passed: Comparison with unequal arrays reading limited bytes (n)\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf3a, buf3b, n3, ft_memcmp(buf3a, buf3b, n3));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf3a, buf3b, n3, memcmp(buf3a, buf3b, n3));

	// Test 4: Unequal array lengths
	const char	buf4a[] = "abcd";
	const char	buf4b[] = "abcd9";
	size_t	n4 = strlen(buf4b);
	assert(ft_memcmp(buf4a, buf4b, n4) == memcmp(buf4a, buf4b, n4));
	printf("\nTest 4 passed: Comparison with unequal array lengths (read NULL-byte)\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf4a, buf4b, n4, ft_memcmp(buf4a, buf4b, n4));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf4a, buf4b, n4, memcmp(buf4a, buf4b, n4));

	// Test 5: Read past NULL-byte
	const char	buf5a[] = "ab\0cd1";
	const char	buf5b[] = "ab\0cd2";
	size_t	n5 = sizeof(buf5a) - 1;
	assert(ft_memcmp(buf5a, buf5b, n5) == memcmp(buf5a, buf5b, n5));
	printf("\nTest 5 passed: Read past NULL-byte\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf5a, buf5b, n5, ft_memcmp(buf5a, buf5b, n5));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf5a, buf5b, n5, memcmp(buf5a, buf5b, n5));

	// Test 6: Zero copy length
	const char	buf6a[] = "abcd1";
	const char	buf6b[] = "abcd2";
	size_t	n6 = 0;
	assert(ft_memcmp(buf6a, buf6b, n6) == memcmp(buf6a, buf6b, n6));
	printf("\nTest 6 passed: Zero copy length\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf6a, buf6b, n6, ft_memcmp(buf6a, buf6b, n6));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf6a, buf6b, n6, memcmp(buf6a, buf6b, n6));

	// Test 7: Check data type is unsigned, reading > 127
	const unsigned char	buf7a[] = { 0xFF, 0x00 };
	const unsigned char	buf7b[] = { 0x7F, 0x00 };
	size_t	n7 = sizeof(buf7a);
	assert((ft_memcmp(buf7a, buf7b, n7)  > 0) == (memcmp(buf7a, buf7b, n7) > 0));
	printf("\nTest 7 passed: Check data type processed is unsigned, reading > 127\n");
	printf("ft_memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf7a, buf7b, n7, ft_memcmp(buf7a, buf7b, n7));
	printf("   memcmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%d\n", buf7a, buf7b, n7, memcmp(buf7a, buf7b, n7));
}
