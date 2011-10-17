all:
	(cd experiment1; make)
	(cd experiment2; make)
	(cd experiment3; make)
	(cd experiment4; make)
	(cd experiment5; make)
	pdfjoin --outfile quantum-experiments.pdf experiment?/exp?.pdf

clean:
	(cd experiment1; make clean)
	(cd experiment2; make clean)
	(cd experiment3; make clean)
	(cd experiment4; make clean)
	(cd experiment5; make clean)
	-rm -f *~ \#*\# *.pdf
