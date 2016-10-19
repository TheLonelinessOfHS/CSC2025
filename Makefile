CC = cc
CFLAGS = -O2 -Wfatal-errors -Werror
BINARIES= factorial.out getchar.out

main : $(BINARIES)

%.out : %.c
	$(CC) $(CFLAGS) -o $@ $<
	

.PHONY : clean

clean :
	rm *.o *.out
