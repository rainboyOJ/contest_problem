shell_path=$(cd `dirname $0`; pwd)
pandoc \
--pdf-engine=xelatex \
-V CJKmainfont="WenQuanYi Zen Hei Sharp" \
--from markdown \
--template $shell_path/template/eisvogel \
--listings \
--no-highlight \
--markdown-headings=atx \
--markdown-headings=setext \
problem.md -o problem.pdf
