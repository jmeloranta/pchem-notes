all:
	(cd chapter1;make)
	(cd chapter2;make)
	(cd chapter3;make)
	(cd chapter4;make)
	(cd chapter5;make)
	pdfjoin --outfile thermo-examples.pdf chapter?/ch?-examples.pdf

clean:
	(cd chapter1; make clean)
	(cd chapter2; make clean)
	(cd chapter3; make clean)
	(cd chapter4; make clean)
	(cd chapter5; make clean)
	(cd chapter6; make clean)
	-rm -f *~ \#*\# *.pdf
