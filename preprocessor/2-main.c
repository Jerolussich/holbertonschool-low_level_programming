#include <stdio.h>
int main(__ attribute__((unused)) int argc, char argv)
{
	printf("%s", *argv[0]);
	return (0);
}
