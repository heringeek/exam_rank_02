
#include <unistd.h>

int main (int argc, char **argv){
	
	int	i;
	int index;

	if(argc == 2){
		while(argv[1][index]){
			i = argv[1][index] - 96;
			while (i-- > 0)
				write (1, &argv[1][index], 1);
			index++;
		}
	}
	write (1, "\n", 1);
}