CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Intern.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
	  PresidentialPardonForm.cpp Form.cpp Bureaucrat.cpp main.cpp
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
