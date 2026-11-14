#include "test.h"
#include "libft.h"

static void	shifteven(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c >>= 1;
}

void	test_ft_striteri(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_striteri =================================================\n");
	printf("# =============================================================\n");

	// h	104		00000000	>> 1	52		4	00000000
	// a	97		00000000			97		a	00000000
	// v	118		00000000	>> 1	59		;	00000000
	// a	97		00000000			97		a	00000000 
	// n	110		00000000	>> 1	55		7	00000000 
	// a	97		00000000			97		a	00000000 

	// Test 1: Mutate string with right shift 1 bit 
	char		str1a[] = "havana";
	char		str1b[] = "havana";
	char		correct1[] = "4a;a7a";
	ft_striteri(str1b, shifteven);
	assert(!memcmp(str1b, correct1, sizeof(correct1)));
	printf("\nTest 1 passed: Mutate string with right shift 1 bit\n");
	printf("Before:	\"%s\"\nAfter:	\"%s\"\nreturn:	\"%s\"\n", str1a, str1b, correct1);	

	// Test 2: Attempt with empty string
	char		str2a[] = "";
	char		str2b[] = "";
	char		correct2[] = "";
	ft_striteri(str2b, shifteven);
	assert(!memcmp(str2b, correct2, sizeof(correct2)));
	printf("\nTest 2 passed: Attempt with empty string\n");
	printf("Before:	\"%s\"\nAfter:	\"%s\"\nreturn:	\"%s\"\n", str2a, str2b, correct2);
}

