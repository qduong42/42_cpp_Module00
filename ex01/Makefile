NAME = bakabook

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp contacts.cpp phonebook.cpp

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
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo ${Q}${NL} ${BLUE} run program with ./bakabook ${Q}
	@echo ${Q} ${GREEN} Hint: Uncomment line 35-45 and 52 in main.cpp to populate phonebook with given contacts${Q}

clean:
	$(RM) *.o
	rm -rf *.dSYM

fclean:
	$(RM) *.o
	$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re test