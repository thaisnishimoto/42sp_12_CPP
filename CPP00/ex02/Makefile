#================================FLAGS=========================================#

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
MAKE_NO_PRINT = $(MAKE) --no-print-directory 
INCLUDE = -I $(HEADER_PATH)

#================================PATHS=========================================#

SRC_PATH = ./src
HEADER_PATH = ./include

#================================FILES=========================================#

NAME = account_tester
TEST_LOG = test_log.log
SRC = $(wildcard $(SRC_PATH)/*.cpp)
OBJ = $(SRC:.cpp=.o)
HEADER = $(wildcard $(HEADER_PATH)/*.hpp)

#================================RULES=========================================#

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(SRC_PATH)/%.o: $(SRC_PATH)/%.cpp $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

run: all
	./$(NAME) > $(TEST_LOG)

compare: run
	awk '{print $$2}' src/19920104_091532.log > temp_expected_log
	awk '{print $$2}' $(TEST_LOG) > temp_output_log
	diff -s temp_expected_log temp_output_log
	rm temp_expected_log temp_output_log

#================================CLEAN=========================================#

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_LOG)

re: fclean all

.PHONY: all clean fclean re run compare
