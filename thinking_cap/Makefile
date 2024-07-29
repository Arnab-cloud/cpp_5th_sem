#compiler
CXX = g++

#compiler flags
CSSFLAGS = -Wall -Wextra -std=c++17

#source files
SRCS = main.cpp thinker.cpp

#object files
OBJS = $(SRCS:.cpp=.o)

#executable name
target = main

all: $(target)

#Link objfiles to create executable
$(target): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(target) $(OBJS)

#Complie source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(target)

.PHONY: all clean


