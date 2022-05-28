CXX = c++
#CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wimplicit-fallthrough=0
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = harlFilter

all: $(NAME)

%.o: %.cpp
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
