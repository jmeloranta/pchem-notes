TARGET=exp3

all: ${TARGET}.pdf

view: ${TARGET}.pdf
	evince ${TARGET}.pdf

${TARGET}.dvi: ${TARGET}.tex ../references.bib
	latex ${TARGET}
	bibtex ${TARGET}
	latex ${TARGET}
	latex ${TARGET}

${TARGET}.pdf: ${TARGET}.dvi
	dvipdf ${TARGET}.dvi

clean:
	-rm -f *.dvi *.aux *.log *.out *.snm *.toc *.nav $(TARGET).pdf *~ #*#
	-rm -f *.bbl *.blg



