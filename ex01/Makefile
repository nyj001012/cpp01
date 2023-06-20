NAME = zombie
SRCS = main.cpp \
	   ZombieHorde.cpp \
	   Zombie.cpp
OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
		@${CC} ${CFLAGS} -o ${NAME} ${OBJS}
		@echo "\033[40;35mExecutable ${NAME} created"

%.o: %.cpp
		@${CC} ${CFLAGS} -I . -c $< -o ${<:.cpp=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:
		${MAKE} fclean
		${MAKE} all