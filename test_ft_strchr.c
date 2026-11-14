#include "test.h"
#include "libft.h"

void	test_ft_strchr(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strchr ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Search existing character
	const char buf1[] = "123123123";
	int c1 = '3';
	char *p1a = ft_strchr(buf1, c1);
	char *p1b = strchr(buf1, c1);
	assert(p1a == p1b);
	printf("\nTest 1 passed: Search existing character\n");
	printf("ft_strchr - buf1:%s - c1:%c - return:%s/%c\n", buf1, c1, p1a, *p1a);
	printf("   strchr - buf1:%s - c1:%c - return:%s/%c\n", buf1, c1, p1b, *p1b);	
	// Test 2: Search NULL-byte in empty string
	const char buf2[] = "";
	int c2 = '\0';
	char *p2a = ft_strchr(buf2, c2);
	char *p2b = strchr(buf2, c2);
	assert(p2a == p2b);
	printf("\nTest 2 passed: Search NULL-byte in empty string\n");
	printf("ft_strchr - buf2:%s - c2:%c - return:%s/%c\n", buf2, c2, p2a, *p2a);
	printf("   strchr - buf2:%s - c2:%c - return:%s/%c\n", buf2, c2, p2b, *p2b);
	 
	// Test 3: Search non-existing character 
	const char buf3[] = "404";
	int c3 = 'x';
	char *p3a = ft_strchr(buf3, c3);
	char *p3b = strchr(buf3, c3);
	assert(p3a == p3b);
	printf("\nTest 3 passed: Search non-existing character\n");
	printf("ft_strchr - buf3:%s - c3:%c - return:%s\n", buf3, c3, p3a);
	printf("   strchr - buf3:%s - c3:%c - return:%s\n", buf3, c3, p3b);	
	// Test 4: Search character beyonf NULL-byte 
	int c4 = 'd';
	const char buf4[] = "era\0df";
	char *p4a = ft_strchr(buf4, c4);
	char *p4b = strchr(buf4, c4);
	assert(p4a == p4b);
	printf("\nTest 4 passed: Search character beyond NULL-byte\n");
	printf("ft_strchr - buf4:%s - c4:%c - return:%s\n", buf4, c4, p4a);
	printf("   strchr - buf4:%s - c4:%c - return:%s\n", buf4, c4, p4b);
	 
	// Test 5: Search NULL-byte
	const char buf5[] = "eradf";
	int c5 = '\0';
	char *p5a = ft_strchr(buf5, c5);
	char *p5b = strchr(buf5, c5);
	assert(p5a == p5b);
	printf("\nTest 5 passed: Search NULL-byte\n");
	printf("ft_strchr - buf5:%s - c5:%c - return:\"%s\"\n", buf5, c5, p5a);
	printf("   strchr - buf5:%s - c5:%c - return:\"%s\"\n", buf5, c5, p5b);	

	// Test 6: Typeness
	const char buf6[] = "hello\xA9 world";
	int c6 = 169; // numerical value of \xA9
	char *p6a = ft_strrchr(buf6, c6);
	char *p6b = strrchr(buf6, c6);
	assert(p6a == p6b);
	printf("\nTest 6 passed: Use correct typeness\n");
	printf("ft_strchr - buf6:%s - c6:%c - return:%s\n", buf6, c6, p6a);
	printf("   strchr - buf6:%s - c6:%c - return:%s\n", buf6, c6, p6b);
}
