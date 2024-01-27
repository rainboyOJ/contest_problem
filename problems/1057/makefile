CXX=g++
CFLAGS=

SRC=$(wildcard *.cpp)
TARGET= gen_data std
NAME=game

all: $(TARGET)
	@echo $(TARGET)
	@rm -rf data
	@mkdir -p data
	./gen_data 5 10 > data/$(NAME)1.in
	./gen_data 10 30 > data/$(NAME)2.in
	./gen_data 10 50 > data/$(NAME)3.in
	./gen_data 500 500 > data/$(NAME)4.in
	./gen_data 100 500 > data/$(NAME)5.in
	./gen_data 100 500 > data/$(NAME)6.in
	./gen_data 100 4500 > data/$(NAME)7.in
	./gen_data 100 4500 > data/$(NAME)8.in
	./gen_data 100 4500 > data/$(NAME)9.in
	./gen_data 100 4500 > data/$(NAME)10.in
	@for var in "./data/"$(NAME){1..10}".in"; do \
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
