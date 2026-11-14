#include "test.h"
#include "libft.h"

void	test_ft_strtrim(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strtrim ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Trim set characters only at edges 
	const char		str1[] = "- . -/ .. hello -./ 42 - . ";
	const char		set1[] = " ./-. - ";
	char			*ptrimmed1 = ft_strtrim(str1, set1);
	char			correct1[] = "hello -./ 42";
	assert(!memcmp(ptrimmed1, correct1, sizeof(correct1)));
	printf("\nTest 1 passed: Trim set characters only at edges\n");
	printf("s1:	\"%s\"\nset:	\"%s\"\nreturn:	\"%s\"\n", str1, set1, ptrimmed1);
	free(ptrimmed1);

	// Test 2: Nothing to be trimmed
	const char		str2[] = " . -/ .. hello -./ 42 - . ";
	char const		set2[] = "";
	char			*ptrimmed2 = ft_strtrim(str2, set2);
	char			correct2[] = " . -/ .. hello -./ 42 - . ";
	assert(!memcmp(ptrimmed2, correct2, sizeof(correct2)));
	printf("\nTest 2 passed: Nothing to be trimmed\n");
	printf("s2:	\"%s\"\nset:	\"%s\"\nreturn:	\"%s\"\n", str2, set2, ptrimmed2);
	free(ptrimmed2);

	// Test 3: No string 
	const char		str3[] = "";
	const char		set3[] = " ./-. - ";
	char			*ptrimmed3 = ft_strtrim(str3, set3);
	char			*check1 = "";
	assert(!memcmp(ptrimmed3, check1, 1));
	printf("\nTest 3 passed: No string to trim\n");
	printf("s3:	\"%s\"\nset:	\"%s\"\nreturn:	\"%s\"\n", str3, set3, ptrimmed3);
	free(ptrimmed3);

	// Test 4: only delimiters 
	const char		str4[] = "          ";
	const char		set4[] = " ";
	char			*ptrimmed4 = ft_strtrim(str4, set4);
	char			*check2 = "";
	assert(!memcmp(ptrimmed4, check2, 1));
	printf("\nTest 4 passed: String with only delimiters\n");
	printf("s4:	\"%s\"\nset:	\"%s\"\nreturn:	\"%s\"\n", str4, set4, ptrimmed4);
	free(ptrimmed4);
}
