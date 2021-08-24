#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include "libft.h"
#include <limits.h>

int		main(int argc, const char *argv[])
{
	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
    int size = 10;
	
	char *p =memchr(src, '\200', size);
	char *k =ft_memchr(src, '\200', size);

	printf("%s == %s\n", p, k);
	printf("%d\n", k  == p);
}
