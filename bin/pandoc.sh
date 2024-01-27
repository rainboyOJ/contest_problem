#!/bin/bash
shell_path=$(cd `dirname $0`; pwd)
pandoc \
--pdf-engine=xelatex \
-V CJKmainfont="WenQuanYi Zen Hei Sharp" \
--from markdown \
--template "$shell_path"/../template/eisvogel \
--listings \
--no-highlight \
--markdown-headings=atx \
--markdown-headings=setext \
__contest.md -o __contest.pdf
