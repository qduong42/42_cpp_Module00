NAME = megaphone

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NL		:= \n
Q		:= "
NC		:= \033[0m
RED 	:= \033[1;31m
GREEN 	:= \033[1;32m
BLUE 	:= \033[1;34m
PURPLE	:= \033[35;1m

all:$(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -g $(SRCS) -o $(NAME)
	@echo ${Q}${NL}${BLUE} run make test to execute PDF test ${NC}${Q}

clean:
	$(RM) *.o
	rm -rf *.dSYM

fclean:
	$(RM) *.o
	$(RM) $(NAME)

re:	fclean all

test:	$(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all bonus clean fclean re test