all:
	(cd ch1;make)
	(cd ch2;make)
	(cd ch3;make)
	(cd ch4;make)
	(cd ch5;make)
#	pdfjoin --outfile quantum-examples.pdf ch?/ch?-examples.pdf
	pdfjam --nup 2x1 --landscape --outfile quantum-examples.pdf ch?/ch?-examples.pdf

clean:
	(cd ch1; make clean)
	(cd ch2; make clean)
	(cd ch3; make clean)
	(cd ch4; make clean)
	(cd ch5; make clean)
	-rm -f *~ \#*\# *.pdf
