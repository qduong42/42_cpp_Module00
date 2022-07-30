NAME = bakabook

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

OPT_FLAGS = -std=c++98

SRCS = bakabk.cpp

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