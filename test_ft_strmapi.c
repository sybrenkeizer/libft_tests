#include "test.h"
#include "libft.h"

static char	shifteven(unsigned int i, char c)
{
	char	shifted;
	if (i % 2 == 0)
		shifted = c >> 1;
	else
		shifted = c;
	return (shifted);
}

void	test_ft_strmapi(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strmapi ==================================================\n");
	printf("# =============================================================\n");


	// h	104		00000000	>> 1	52		4	00000000
	// a	97		00000000			97		a	00000000
	// v	118		00000000	>> 1	59		;	00000000
	// a	97		00000000			97		a	00000000 
	// n	110		00000000	>> 1	55		7	00000000 
	// a	97		00000000			97		a	00000000 

	// Test 1: Shift even bytes 1 bit to the right of string
	const char		str1[] = "havana";
	char			*shifted1 = ft_strmapi(str1, shifteven);
	char			correct1[] = "4a;a7a";
	assert(!memcmp(shifted1, correct1, sizeof(correct1)));
	printf("\nTest 1 passed: Shift even bytes 1 bit to the right of string\n");
	printf("s:	\"%s\"\nreturn:	\"%s\"\n", str1, shifted1);
	free(shifted1);
	
	// Test 2: Execute with empty string
	const char		str2[] = "";
	char			*shifted2 = ft_strmapi(str2, shifteven);
	char			correcr2[] = "";
	assert(!memcmp(shifted2, correcr2, sizeof(correcr2)));
	printf("\nTest 2 passed: Execute with empty string\n");
	printf("s:	\"%s\"\nreturn:	\"%s\"\n", str2, shifted2);
	free(shifted2);
}

