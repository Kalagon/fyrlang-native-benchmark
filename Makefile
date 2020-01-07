all: transpiled/tp/bin/tp

transpiled/tp/bin/tp: src/tp/main.fyr
	./transpile.sh src/tp
	./compile.sh transpiled/tp
