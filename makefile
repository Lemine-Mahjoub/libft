CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
TEST = assert
FT_FILES = lib/ft_*.c
LIBFILES = lib/*.c
TEST_FILES = test/*.c
OBJ = *.o
Valider= '\n\033[0;32m'"============Valider============\n"'\033[0;37m' 

all: $(NAME) 

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(FT_FILES)
	@$(CC) $(FLAGS) -c $(FT_FILES)
	@mv *.o lib/

test: 
	@$(CC) $(FLAGS) $(TEST_FILES) $(FT_FILES) -o $(TEST)
	@$(CC) $(FLAGS) $(LIBFILES) -o lib
	@./lib
	@./$(TEST)

dev: norminette $(NAME) test fclean

norminette:
	@echo "Norminette:\n"
	@norminette lib/
	@echo $(Valider)

clean: 
	rm -f *.o lib/*.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re test