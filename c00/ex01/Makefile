NAME = bakabook

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp contacts.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)


all:$(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -g $(SRCS) -o $(NAME)

clean:
	rm *.o

fclean:
	$(RM) *.o
	$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re test