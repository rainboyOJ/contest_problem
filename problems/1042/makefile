CXX=g++
CFLAGS=

SRC=$(wildcard *.cpp)
TARGET= gen_data std
NAME=choose

all: $(TARGET)
	@echo $(TARGET)
	rm -r data
	mkdir -p data
	./gen_data 5 1 5 > data/$(NAME)1.in
	./gen_data 10 1 10 > data/$(NAME)2.in
	./gen_data 20 100 500 > data/$(NAME)3.in
	./gen_data 100 500 1000 > data/$(NAME)4.in
	./gen_data 50 500 10000 > data/$(NAME)5.in
	./gen_data 100 5000 1000000 > data/$(NAME)6.in
	./gen_data 100 5000 1000000 > data/$(NAME)7.in
	./gen_data 100 5000 1000000 > data/$(NAME)8.in
	./gen_data 100 5000 1000000 > data/$(NAME)9.in
	./gen_data 100 5000 1000000 > data/$(NAME)10.in
	@for var in $(shell find ./data -name "*.in"); do \
        ./std < $$var > $${var/%in/out}; \
		#input="$$var"; \
        #echo $$var; \
        #echo $$input; \
        #echo $${var/%in/out}; \
    done
	@echo done


% : %.cpp
	$(CXX) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(TARGET)
