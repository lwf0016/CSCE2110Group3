output main.o Privileges.o display_layout.o read_user.o
	g++ -c main.o Privileges.o display_layout.o read_user.o -o output
main.o main.cpp
	g++ -c main.cpp
Privileges.o Privileges.cpp Privileges.h
	g++ -c Privileges.cpp
display_layout.o display_layout.cpp display_layout.h
	g++ -c display_layout.cpp
read_user.o read_user.cpp
	g++ -c read_user.cpp
clean
	rm . output
