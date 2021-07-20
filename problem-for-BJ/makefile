SRC=PJ/problem.md TG/problem.md
TARGET=$(patsubst %.md,%.pdf,$(SRC))
all: ${TARGET}
	@echo done

% : 
	pandoc \
	--pdf-engine=xelatex \
	-V CJKmainfont="WenQuanYi Zen Hei Sharp" \
	--from markdown \
	--template $shell_path/template/eisvogel \
	--listings \
	--no-highlight \
	--markdown-headings=atx \
	--markdown-headings=setext \
	$(patsubst %.pdf,%.md,$@) \
	-o $@

.PHONY: clean
clean:
	rm ${TARGET}
