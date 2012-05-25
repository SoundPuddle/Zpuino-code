CXXFLAGS=-O2 -Wall
LDFLAGS=-lm

all: genhsvtable genhannfile

genhsvtable: genhsvtable.o
	$(CXX) $(LDFLAGS) $+ -o genhsvtable
	
genhannfile: genhannfile.o
	$(CXX) $(LDFLAGS) $+ -o genhannfile
	
clean:
	rm -f *.o genhsvtable
