FLAGS=-Wall -Wextra -Werror
DEPS=check.h page.h types.h dict.h general.h
NAME=rush-02
CFILES=main.c check.c page.c dict.c general.c
make : $(NAME)

$(NAME) : $(DEPS)
	gcc $(FLAGS) -o $(NAME) $(CFILES)
#-g3 -fsanitize=address
fclean :
	rm -f rush-02 *.o
