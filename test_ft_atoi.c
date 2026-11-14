
#include "test.h"
#include "libft.h"


void  test_ft_atoi(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_atoi =====================================================\n");
	printf("# =============================================================\n");

	// Test 1: Positive string conversion
	const char buf1[] = "1234321";
	int res1a = ft_atoi(buf1);
	int res1b = atoi(buf1);
	assert(res1a == res1b); 
	printf("\nTest 1 passed: basic string converted\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf1, res1a);
	printf("   atoi: buf:%s - return:%i\n", buf1, res1b);

	// Test 2: Negative number conversion
	const char buf2[] = "-1234321";
	int res2a = ft_atoi(buf2);
	int res2b = atoi(buf2);
	assert(res2a == res2b); 
	printf("\nTest 2 passed: Negative number\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf2, res2a);
	printf("   atoi: buf:%s - return:%i\n", buf2, res2b);

	// Test 3: string with spaces 
	const char buf3[] = "   \t  \r \n \v \f 12343 21";
	int res3a = ft_atoi(buf3);
	int res3b = atoi(buf3);
	assert(res3a == res3b); 
	printf("\nTest 3 passed: String with spaces\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf3, res3a);
	printf("   atoi: buf:%s - return:%i\n", buf3, res3b);

	// Test 4: string with spaces 
	const char buf4[] = "   ---1234321";
	int res4a = ft_atoi(buf4);
	int res4b = atoi(buf4);
	assert(res4a == res4b); 
	printf("\nTest 4 passed: String with spaces\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf4, res4a);
	printf("   atoi: buf:%s - return:%i\n", buf4, res4b);

	// Test 5: string prepended with '+' 
	const char buf5[] = " +123r45321";
	int res5a = ft_atoi(buf5);
	int res5b = atoi(buf5);
	assert(res5a == res5b); 
	printf("\nTest 5 passed: String prepended with '+'\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf5, res5a);
	printf("   atoi: buf:%s - return:%i\n", buf5, res5b);

	// Test 6: String prepended with '+' and '-' 
	const char buf6[] = " -+1234321";
	int res6a = ft_atoi(buf6);
	int res6b = atoi(buf6);
	assert(res6a == res6b); 
	printf("\nTest 6 passed: String prepended with '+' and '-'\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf6, res6b);
	printf("   atoi: buf:%s - return:%i\n", buf6, res6b);

	// Test 7: String with other then numerical characters
	const char buf7[] = "123*4(3)21";
	int res7a = ft_atoi(buf7);
	int res7b = atoi(buf7);
	assert(res7a == res7b); 
	printf("\nTest 7 passed: String with other then numerical characters\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf7, res7b);
	printf("   atoi: buf:%s - return:%i\n", buf7, res7b);

	// Test 8: String with '-' and '+' in between digits;
	const char buf8[] = "-12343-2+1";
	int res8a = ft_atoi(buf8);
	int res8b = atoi(buf8);
	assert(res8a == res8b); 
	printf("\nTest 8 passed: String with '-' and '+' in between digits\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf8, res8a);
	printf("   atoi: buf:%s - return:%i\n", buf8, res8b);

	// Test 9: INT_MIN;
	const char buf9[] = "-2147483648";
	int res9a = ft_atoi(buf9);
	int res9b = atoi(buf9);
	assert(res9a == res9b); 
	printf("\nTest 9 passed: INT_MIN\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf9, res9a);
	printf("   atoi: buf:%s - return:%i\n", buf9, res9b);

	// Test 10: < INT_MIN;
	const char buf10[] = "-3247483648";
	int res10a = ft_atoi(buf10);
	int res10b = atoi(buf10);
	assert(res10a == res10b); 
	printf("\nTest 10 passed: < INT_MIN\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf10, res10b);
	printf("   atoi: buf:%s - return:%i\n", buf10, res10b);

	// Test 11: INT_MAX;
	const char buf11[] = "2147483647";
	int res11a = ft_atoi(buf11);
	int res11b = atoi(buf11);
	assert(res11a == res11b); 
	printf("\nTest 11 passed: INT_MAX\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf11, res11a);
	printf("   atoi: buf:%s - return:%i\n", buf11, res11b);

	// Test 12: > INT_MAX;
	const char buf12[] = "-3247483648";
	int res12a = ft_atoi(buf12);
	int res12b = atoi(buf12);
	assert(res12a == res12b); 
	printf("\nTest 12 passed: > INT_MAX\n");
	printf("ft_atoi: buf:%s - return:%i\n", buf12, res12a);
	printf("   atoi: buf:%s - return:%i\n", buf12, res12b);

	// Test 13: Empty string;
	const char buf13[] = "";
	int res13a = ft_atoi(buf13);
	int res13b = atoi(buf13);
	assert(res13a == res13b); 
	printf("\nTest 13 passed: Empty string\n");
	printf("ft_atoi: buf:\"%s\" - return:%i\n", buf13, res13a);
	printf("   atoi: buf:\"%s\" - return:%i\n", buf13, res13b);
}
