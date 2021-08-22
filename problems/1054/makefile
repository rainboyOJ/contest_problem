CXX=g++
CFLAGS=

SRC=$(wildcard *.cpp)
TARGET= gen_data std
NAME=singer

all: $(TARGET)
	@echo $(TARGET)
	@rm -rf data
	@mkdir -p data
	./gen_data 5 1 10 > data/$(NAME)1.in
	./gen_data 10 1 100 > data/$(NAME)2.in
	./gen_data 100 1 1000 > data/$(NAME)3.in
	./gen_data 500 1 500 > data/$(NAME)4.in
	./gen_data 1000 1 500 > data/$(NAME)5.in
	./gen_data 1000 1 10000 > data/$(NAME)6.in
	./gen_data 100000 100 1000 > data/$(NAME)7.in
	./gen_data 100000 100 1000 > data/$(NAME)8.in
	./gen_data 100000 100 1000 > data/$(NAME)9.in
	./gen_data 100000 100 1000 > data/$(NAME)10.in
	@for var in "./data/"$(NAME){1..10}".in"; do \
        echo $$var; \
        ./std < $$var > $${var/%in/out}; \
    done
	@echo done


% : %.cpp
	$(CXX) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(TARGET)
