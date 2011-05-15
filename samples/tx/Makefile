LIBS = -lps 
LIB_DIR = -L../../lib

.PHONY: clean

all: echo

echo: echo.c pkt_buff.c
	gcc -O2 -g -Wall -o echo echo.c pkt_buff.c $(LIB_DIR) $(LIBS)

clean:
	rm -f echo
