CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = 	phonebook

SRC = 	main.cpp contact.cpp phonebook.cpp
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS)  $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all