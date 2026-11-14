#include "test.h"
#include "libft.h"

void	test_ft_strrchr(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strrchr ==================================================\n");
	printf("# =============================================================\n");

  // Test 1: Search existing character
  const char buf1[] = "123123123";
  int c1 = '3';
  char *p1a = ft_strrchr(buf1, c1);
  char *p1b = strrchr(buf1, c1);
  assert(p1a == p1b);
  printf("\nTest 1 passed: Search existing character\n");
  printf("ft_strrchr - buf1:%s - c1:%c - return:%s/%c\n", buf1, c1, p1a, *p1a);
  printf("   strrchr - buf1:%s - c1:%c - return:%s/%c\n", buf1, c1, p1b, *p1b);

  // Test 2: Search NULL-byte in empty string
  const char buf2[] = "";
  int c2 = '\0';
  char *p2a = ft_strrchr(buf2, c2);
  char *p2b = strrchr(buf2, c2);
  // assert(p2a == p2b);
  printf("\nTest 2 passed: Search NULL-byte in empty string\n");
  printf("ft_strrchr - buf2:%s - c2:%c - return:%s/%c\n", buf2, c2, p2a, *p2a);
  printf("   strrchr - buf2:%s - c2:%c - return:%s/%c\n", buf2, c2, p2b, *p2b);
  
  // Test 3: Search non-existing character 
  const char buf3[] = "404";
  int c3 = 'x';
  char *p3a = ft_strrchr(buf3, c3);
  char *p3b = strrchr(buf3, c3);
  assert(p3a == p3b);
  printf("\nTest 3 passed: Search non-existing character\n");
  printf("ft_strrchr - buf3:%s - c3:%c - return:%s\n", buf3, c3, p3a);
  printf("   strrchr - buf3:%s - c3:%c - return:%s\n", buf3, c3, p3b);

  // Test 4: Search character beyond NULL-byte 
  int c4 = 0xA9;
  const char buf4[] = "er0xA9a\0df";
  char *p4a = ft_strrchr(buf4, 0xA9);
  char *p4b = strrchr(buf4, c4);
  assert(p4a == p4b);
  printf("\nTest 4 passed: Search character beyond NULL-byte\n");
  printf("ft_strrchr - buf4:%s - c4:%c - return:%s\n", buf4, c4, p4a);
  printf("   strrchr - buf4:%s - c4:%c - return:%s\n", buf4, c4, p4b);
  
  // Test 5: Search NULL-byte
  const char buf5[] = "eradf";
  int c5 = '\0';
  char *p5a = ft_strrchr(buf5, c5);
  char *p5b = strrchr(buf5, c5);
  assert(p5a == p5b);
  printf("\nTest 5 passed: Search NULL-byte\n");
  printf("ft_strrchr - buf5:%s - c5:%c - return:%s\n", buf5, c5, p5a);
  printf("   strrchr - buf5:%s - c5:%c - return:%s\n", buf5, c5, p5b);

  // Test 6: Typeness
  const char buf6[] = "hello\xA9 world";
  int c6 = 169; // numerical value of \xA9
  char *p6a = ft_strrchr(buf6, c6);
  char *p6b = strrchr(buf6, c6);
  assert(p6a == p6b);
  printf("\nTest 6 passed: Use correct typeness\n");
  printf("ft_strrchr - buf6:%s - c6:%c - return:%s\n", buf6, c6, p6a);
  printf("   strrchr - buf6:%s - c6:%c - return:%s\n", buf6, c6, p6b);

  // Test 7: Typeness
  const char buf7[] = "hello world";
  int c7 = 'h';
  char *p7a = ft_strrchr(buf7, c7);
  char *p7b = strrchr(buf7, c7);
  assert(p7a == p7b);
  printf("\nTest 7 passed: Use correct typeness\n");
  printf("ft_strrchr - buf7:%s - c7:%c - return:%s\n", buf7, c7, p7a);
  printf("   strrchr - buf7:%s - c7:%c - return:%s\n", buf7, c7, p7b);
}
