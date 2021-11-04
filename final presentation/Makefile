all:
	pdflatex presentation.tex

clean:
	rm -f *.aux *.log *.nav *.toc *.snm *.out *.vrb

cleanall: clean
	rm -f *.pdf

handout:
	pdflatex -jobname=presentation.handout '\PassOptionsToClass{handout}{beamer} \input{presentation}'