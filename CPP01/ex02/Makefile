#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
MAKE_NO_PRINT = $(MAKE) --no-print-directory 

#================================FILES=========================================#

NAME = where_is_brain
SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

leak: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re leak
