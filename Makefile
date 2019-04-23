
.PHONY: build
FILES = $(patsubst %.c,%.exe,$(shell find -type f -name '*.c'))

build: $(FILES)
clean:
	rm $(FILES)
%.exe: %.c
	gcc -o $@ $<

