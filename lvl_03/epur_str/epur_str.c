#include <unistd.h>

int main (int argc, char **argv){
	if (argc == 2){
		int i = 0;
		int flag = 0;
		//search for the first spaces and tabs
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		//search for spaces and tabs between words
		while (argv[1][i]){
			if (argv[1][i] == 32 || argv[1][i] == '\t')
				flag = 1;
			if (!(argv[1][i] == 32 || argv[1][i] == '\t')){
				if (flag == 1)
					write(1, " ", 1);
				flag = 0;
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
