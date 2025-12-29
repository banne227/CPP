name = animals
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongDog.cpp \

OBJS = $(SRCS:.cpp=.o)
RM = rm -f
EXEC = animals
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

clean:
	$(RM) $(OBJS)

c:
	$(RM) $(OBJS)
	clear

fclean: clean
	$(RM) $(EXEC)

re: fclean all

r: fclean all c

.PHONY: all clean fclean re