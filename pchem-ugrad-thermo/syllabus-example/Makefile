TARGET=syllabus

all: $(TARGET).dvi $(TARGET).pdf

$(TARGET).dvi: *.tex
	latex $(TARGET).tex
	latex $(TARGET).tex

$(TARGET).pdf: $(TARGET).dvi
	dvipdf $(TARGET).dvi

view: $(TARGET).dvi $(TARGET).pdf
	evince $(TARGET).pdf

clean:
	-rm -f *.dvi *.aux *.log *.out *.snm *.toc *.nav $(TARGET).pdf *~ #*#
	-rm *.backup
