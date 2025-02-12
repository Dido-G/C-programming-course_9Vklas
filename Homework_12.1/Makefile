
taskmanager.exe: taskmanager.o processes.o
	gcc taskmanager.o processes.o -o taskmanager.exe

taskmanager.o: taskmanager.c
	gcc -Wall -c taskmanager.c -o taskmanager.o

processes.o: processes.c
	gcc -Wall -c processes.c -o processes.o

clean:
	rm -f taskmanager.o processes.o taskmanager.exe
