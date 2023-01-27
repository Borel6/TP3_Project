# Makefile with dependencies management (Q4)

CXX        = clang++
CXXFLAGS   = -Wall  -std=c++20
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = Clientt.cpp Commandee.cpp Magasinn.cpp main.cpp Produitt.cpp 
OBJS       = $(SRCS:.cpp=.o)
TARGET     = a.out
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)