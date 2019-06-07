CPPC = clang++

CFLAGS =  -Wall -Wextra -Werror

TARGET = phonebook

all: $(TARGET)

$(TARGET): main.cpp 
	$(CPPC) $(CFLAGS) -o $(TARGET) phonebook.class.cpp main.cpp addContact.cpp searchContact.cpp

clean:
	rm $(TARGET)
