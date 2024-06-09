OUT_FILE = ${wildcard *.out}
ERR_FILE = ${wildcard *.err}


All: HelloWorld
	g++ HelloWorld.cpp -o HelloWorld

clean: 
	@-rm -rf HelloWorld	

clean_log:
	@-rm -rf ${OUT_FILE}
	@-rm -rf ${ERR_FILE}
