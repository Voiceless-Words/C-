CPPC = clang++

CFLAGS =  -Wall -Wextra -Werror

TARGET = megaphone

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CPPC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	rm $(TARGET)
