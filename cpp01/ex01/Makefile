NAME = ZombieHorde
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all
