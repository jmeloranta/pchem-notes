TARGET=quantum2

all: $(TARGET).dvi $(TARGET).pdf

$(TARGET).dvi: *.tex figs/*.eps maxima/*.mac
	latex $(TARGET).tex
	latex $(TARGET).tex

$(TARGET).pdf: $(TARGET).dvi
	dvipdf $(TARGET).dvi
	pdfnup --paper letterpaper --nup 1x2 $(TARGET).pdf --outfile $(TARGET)-handout.pdf

view: $(TARGET).dvi $(TARGET).pdf
	evince $(TARGET).pdf

clean:
	-rm -f *.dvi *.aux *.log *.out *.snm *.toc *.nav $(TARGET).pdf *~ #*#
	-rm -f $(TARGET)-handout.pdf

