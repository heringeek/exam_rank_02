
#include <unistd.h>

char *rev_print(char *str){

	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (--i >= 0)
		write (1, &str[i], 1);
	return (str);
}