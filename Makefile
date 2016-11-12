all:
	g++ -c main.cpp Server.cpp Handler.cpp 
	g++ main.o Server.o Handler.o -o project
