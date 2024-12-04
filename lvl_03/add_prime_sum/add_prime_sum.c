#include <unistd.h>

int ft_atoi(char *str){
	int num = 0;
	while (*str)
		num *= 10 + *str++ - 48;
	return (num);
}

int ft_is_prime(int num){
	int i = 2;
	if (num <= 0)
		return (0);
	while (i*i <= num){
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_put_num(int num){
	char digit;
	if (num >= 10)
		ft_put_num(num / 10);
	digit = num % 10 + '0';
	write (1, &digit, 1);
}

int main (int argc, char **argv){
	if (argc == 2){
		int num = 0;
		int sum = 0;
		num = ft_atoi(argv[1]);
		while (num > 0){
			if (ft_is_prime(num))
				sum+= num;
			nbr--;
		}
		ft_put_num(sum);
	}
	if (argc != 2)
		ft_put_num(0);
	write (1, "\n", 1);
	return (0);
}
