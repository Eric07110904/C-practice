CC = gcc 

OBJS = a.o b.o main.o 

out: $(OBJS)
	$(CC) -o out $(OBJS)

%.o: %.c 
	$(CC) -c $^ -o $@ 

clean: 
	rm -rf ./*.exe ./*.o 