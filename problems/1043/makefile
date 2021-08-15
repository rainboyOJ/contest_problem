CXX=g++
CFLAGS=

SRC=$(wildcard *.cpp)
TARGET= gen_data std
NAME=flandre

all: $(TARGET)
	@echo $(TARGET)
	@rm -r data
	@mkdir -p data
	./gen_data 5 5 > data/$(NAME)1.in
	./gen_data 10 6 > data/$(NAME)2.in
	./gen_data 1000 7 > data/$(NAME)3.in
	./gen_data 2000 500 > data/$(NAME)4.in
	./gen_data 10000 1000 > data/$(NAME)5.in
	./gen_data 10000 10000 > data/$(NAME)6.in
	./gen_data 10000 100000 > data/$(NAME)7.in
	./gen_data 100000 10000000 > data/$(NAME)8.in
	./gen_data 100000 1000000000 > data/$(NAME)8.in
	./gen_data 1000000 1000000000 > data/$(NAME)9.in
	./gen_data 1000000 1000000000 > data/$(NAME)10.in
	@for var in $(shell find ./data -name "*.in"); do \
        echo $$var; \
        ./std < $$var > $${var/%in/out}; \
		#input="$$var"; \
        #echo $$input; \
        #echo $${var/%in/out}; \
    done
	@echo done


% : %.cpp
	$(CXX) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(TARGET)
