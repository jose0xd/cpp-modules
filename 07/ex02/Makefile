CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = main

all: $(NAME)

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

test: main2.o
	$(CXX) main2.o -o test

clean:
	rm -f $(OBJ) main2.o

fclean: clean
	rm -f $(NAME) test

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
