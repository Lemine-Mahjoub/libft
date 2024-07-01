NAME = libft.a
TEST = assert.a
FLAGS = -Wall -Wextra -Werror 
Valider= '\n\033[0;32m'"============Valider============\n"'\033[0;37m' 

all: $(NAME) 

norminette:
	@echo "Norminette:\n"
	@norminette
	@echo $(Valider)

$(NAME): lib/*.c lib/*.h
	@echo "Compilation:\n"
	@gcc -c lib/*.c $(FLAGS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@echo $(Valider)

$(TEST): test/*.c test/*.h
	@echo "Test:\n"
	@gcc -c lib/ft_*.c test/*.c $(FLAGS)
	@ar rc $(TEST) *.o
	@ranlib $(TEST)
	@echo $(Valider)

dev: norminette $(NAME) $(TEST)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean reclean norminette fclean re $(NAME) $(TEST)