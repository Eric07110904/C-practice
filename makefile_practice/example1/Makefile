CC = gcc 
output: main.c bar.o 
	$(CC) -I ./class -o out main.c bar.o 

bar.o: bar.c 
	$(CC) -c bar.c 

clean: 
	rm -rf ./*.exe ./*.o