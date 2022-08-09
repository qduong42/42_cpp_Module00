NAME = megaphone

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

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

test:	$(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all bonus clean fclean re test