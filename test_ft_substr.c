#include "test.h"
#include "libft.h"

void	test_ft_substr(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_substr ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: Search existing substring in string
	const char		buf1[] = "String the substring from the string";
	char const		substrcheck1[] = "sub";
	unsigned int	start1 = 11;
	size_t			len1 = 3;
	char			*psubstr1 = ft_substr(buf1, start1, len1);
	assert(!memcmp(substrcheck1, psubstr1, sizeof(substrcheck1)));
	printf("\nTest 1 passed: Search existing substring in string\n");
	printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf1, start1, len1, psubstr1);
	free(psubstr1);

	// Test 2: Search existing substring in string from first index
	const char		buf2[] = "String the substring from the string";
	char const		substrcheck2[] = "String";
	unsigned int	start2 = 0;
	size_t			len2 = 6;
	char			*psubstr2 = ft_substr(buf2, start2, len2);
	assert(!memcmp(substrcheck2, psubstr2, sizeof(substrcheck2)));
	printf("\nTest 2 passed: Search existing substring in string from first index\n");
	printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf2, start2, len2, psubstr2);
	free(psubstr2);

	// Test 3: Search existing substring in string including last index
	const char		buf3[] = "String the substring from the string";
	char const		substrcheck3[] = "string";
	unsigned int	start3 = 30;
	size_t			len3 = 6;
	char			*psubstr3 = ft_substr(buf3, start3, len3);
	assert(!memcmp(substrcheck3, psubstr3, sizeof(substrcheck3)));
	printf("\nTest 3 passed: Search existing substring in string including last index\n");
	printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf3, start3, len3, psubstr3);
	free(psubstr3);

	// Test 4: Start is beyond full string
	const char		buf4[] = "sub";
	unsigned int	start4 = 4;
	size_t			len4 = 6;
	char			*psubstr4 = ft_substr(buf4, start4, len4);
	char			*check = strdup("");
	assert(!memcmp(psubstr4, check, 1));
	printf("\nTest 4 passed: Start is beyond full string\n");
	printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf4, start4, len4, psubstr4);
	free(psubstr4);
	free(check);

	// Test 5: Search substring while string is empty 
	// const char		buf5[] = "";
	// unsigned int	start5 = 5;
	// size_t			len5 = 6;
	// char			*psubstr5 = ft_substr(buf5, start5, len5);
	// assert(psubstr5 == NULL);
	// printf("\nTest 5 passed: Search substring while string is empty\n");
	// printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf5, start5, len5, psubstr5);
	// free(psubstr5);

	// Test 6: len asks for more than is available in string 
	const char		buf6[] = "substri";
	unsigned int	start6 = 3;
	size_t			len6 = 6;
	char			*psubstr6 = ft_substr(buf6, start6, len6);
	assert(!(memcmp(psubstr6, (buf6 + strlen(buf6) - start6 - 1), (strlen(buf6) - start6))));
	printf("\nTest 6 passed: Search substring while full substring is not allowed to be searched within string\n");
	printf("string:\"%s\" - start:%u - len:%zu - return:\"%s\"\n", buf6, start6, len6, psubstr6);
	free(psubstr6);
}
