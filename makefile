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
	@$(CC) $(OBJ) -o libft
	@./libft
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(LIBFILES)
	@$(CC) $(FLAGS) -c $(LIBFILES)

test: 
	@$(CC) $(FLAGS) $(TEST_FILES) $(FT_FILES) -o $(TEST)
	@./$(TEST)

dev: norminette $(NAME) test fclean

norminette:
	@echo "Norminette:\n"
	@norminette lib/
	@echo $(Valider)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re test