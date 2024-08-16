#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
MAKE_NO_PRINT = $(MAKE) --no-print-directory 
INCLUDE = -I $(HEADER_PATH)

#================================PATHS=========================================#

SRC_PATH = ./src
HEADER_PATH = ./include

#================================FILES=========================================#

NAME = harl
SRC = $(wildcard $(SRC_PATH)/*.cpp)
OBJ = $(SRC:.cpp=.o)
HEADER = $(wildcard $(HEADER_PATH)/*.hpp)

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(SRC_PATH)/%.o: $(SRC_PATH)/%.cpp $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

run: 
	./$(NAME)

leak: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run leak
