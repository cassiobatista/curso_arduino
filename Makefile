source=slide

all:
	latex $(source).tex
	latex $(source).tex
	dvipdf $(source).dvi
	make clean

clean:
	rm -f *.dvi *.log *.nav *.out *.snm *.toc *.aux *.vrb
