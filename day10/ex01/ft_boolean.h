#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef enum a_bool{
	true = 0,
	false = 1,
}	t_bool;

#define TRUE true
#define FALSE false
#define EVEN(number) (number % 2 == 0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments\n"
#define SUCCESS 0

#endif
