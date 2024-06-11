NAME = libft
TEST = assert
FLAGS = -Wall -Wextra -Werror

all: norminette $(NAME) test fclean 

norminette:
	norminette

$(NAME): lib/*.c lib/*.h
	gcc -o $(NAME) lib/lib.c $(FLAGS)
	./$(NAME)

test: test/*.c test/*.h
	gcc -o $(TEST) test/test.c $(FLAGS)
	./$(TEST)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean reclean norminette test execution fclean re $(NAME)