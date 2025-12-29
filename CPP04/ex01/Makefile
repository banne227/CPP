name = animals
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f
EXEC = animals
all: $(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(EXEC)
re: fclean all
.PHONY: all clean fclean re