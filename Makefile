win:
		yasm -fwin32 -DCTR ax.asm -oax.obj
		yasm -fbin -DBIN ax.asm -oax.bin
		yasm -fbin -DBIN -DCTR ax.asm -oax_ctr.bin
		cl /nologo /O2 /Os test.c ax.obj	 
nix:
		yasm -fwin32 -DCTR ax.asm -oax.o
		yasm -fbin -DBIN ax.asm -oax.bin
		yasm -fbin -DBIN -DCTR ax.asm -oax_ctr.bin
		gcc -Wall -O2 -Os test.c ax.o -otest				