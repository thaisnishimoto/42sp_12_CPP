#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
MAKE_NO_PRINT = $(MAKE) --no-print-directory 

#================================FILES=========================================#

NAME = megaphone
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
