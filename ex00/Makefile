NAME = zombie
SRCS = main.cpp \
	   newZombie.cpp \
	   randomChump.cpp \
	   Zombie.cpp
OBJS = ${SRCS:.cpp=.o}

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp
		${CC} ${CFLAGS} -I . -c $< -o ${<:.cpp=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
