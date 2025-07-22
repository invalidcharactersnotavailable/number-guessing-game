target := main
src := $(wildcard ./src/*.cpp)
flags := -Wall -O3

all: $(target)

$(target): $(src)
	$(CXX) $(flags) -o $@ $^

clean:
	rm -f $(target)
