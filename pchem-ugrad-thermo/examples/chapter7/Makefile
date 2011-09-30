TARGET=ch7-examples

all: ${TARGET}

view: ${TARGET}
	evince ${TARGET}.pdf

${TARGET}: ${TARGET}.dvi
	dvipdf ${TARGET}.dvi

${TARGET}.dvi: *.tex
	latex ${TARGET}

clean:
	-rm -f *.dvi *.aux *.log *.out *.snm *.toc *.nav *.pdf *~ \#*\# *.backup
