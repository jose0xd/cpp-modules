CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp \
	  Brain.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = main

all: $(NAME)

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
