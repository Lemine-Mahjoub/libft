NAME = libft
TEST = assert
FLAGS = -Wall -Wextra -Werror
Valider='\033[0;32m'"============Valider============\n"'\033[0;37m' 

all: norminette $(NAME) 

norminette:
	@echo "Norminette:\n"
	@norminette
	@echo $(Valider)

$(NAME): lib/*.c lib/*.h
	@echo "Compilation:\n"
	@gcc -o $(NAME) lib/*.c $(FLAGS)
	./$(NAME)
	@echo $(Valider)

test: test/*.c test/*.h
	@echo "Test:\n"
	@gcc -o $(TEST) lib/ft_*.c  test/*.c $(FLAGS)
	./$(TEST)
	@echo $(Valider)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean reclean norminette test execution fclean re $(NAME)