NAME = account_test

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = tests.cpp Account.cpp

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
	@echo $(Q) $(BLUE) Compiling account_test $(NC)$(Q)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo $(Q) $(GREEN)Run with ./account_test$(NC)$(Q)

test:
	$(CPP) $(CPPFLAGS) main.cpp $(OBJS) -o test
	./test

clean:
	rm *.o

fclean:
	$(RM) *.o
	$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re test