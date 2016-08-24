#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define EVEN(x)	!(x % 2)
# define EVEN_MSG	"J'ai un nombre pair d'arguments.\n"
# define ODD_MSG	"J'ai un nombre impair d'arguments.\n"
# define SUCCESS	0

typedef	int	t_bool;

#endif
