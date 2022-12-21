PREFIX = /usr/local
CXX = g++ --std=c++11
CFILES = $(wildcard src/*.cpp)
EXECUTABLE = femboy
CXXFLAGS = -O2
#LDFLAGS = 

.PHONY: install run clean

femboy:
	$(CXX) $(CFILES) -o $(EXECUTABLE) $(LDFLAGS) $(CFLAGS)

femboy_debug:
	$(CXX) $(CFILES) -o $(EXECUTABLE)_debug $(LDFLAGS) $(CFLAGS) -g

valgrind: $(EXECUTABLE)_debug
	valgrind --leak-check=yes ./$(EXECUTABLE)_debug

install: $(EXECUTABLE)
	cp $(EXECUTABLE) $(PREFIX)/bin/

clean:
	rm $(EXECUTABLE) *.out *.a *.o || true

run: clean $(EXECUTABLE)
	./$(EXECUTABLE)
