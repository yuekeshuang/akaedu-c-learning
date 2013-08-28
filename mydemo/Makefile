MYPWD = `pwd`
MYDATE = `date`
MYPRJ = $(notdir $(PWD))
SRC = $(wilecard *.c)
HEAD = $(wildcard *.h) 
OBJ = $(SRC:.c = .o)

all: $(MYPRJ)
	@echo OK, finished!

$(MYPRJ): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c -g $< -o $@
c clean:
	-rm $(OBJ)
	-rm $(MYPRJ)
test:
	@echo current dir is $(MYPWD)
	@echo time is $(MYDATE)
	@echo project is $(MYPRJ)
	@echo source .c file is $(SRC)
	@echo source .h file is $(HEAD)
	@echo obj .o file is $(OBJ)
