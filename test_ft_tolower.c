#include "test.h"
#include "libft.h"

void	test_ft_tolower(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_tolower ==================================================\n");
	printf("# =============================================================\n\n");

  // Test 1: Compare return value of conversion (value character)
  char *buf1a = "az09[]{}@`AZ";
  char *buf1b = "az09[]{}@`AZ";
  int res1a, res1b;
  while (*buf1a)
  {
    res1a = ft_tolower(*(buf1a++));
    res1b = tolower(*(buf1b++));
    printf("ft_tolower %c - %c tolower\n", res1a, res1b);
    assert(res1a == res1b);
  }
  printf("\nTest 1 passed: Compare string\n");
}
