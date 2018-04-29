# tiny_aes
Compact Implementation of AES-128 in C and x86 assembly

# yasm -felf32 ax.asm -oax.o
		text	   data	    bss	    dec	    hex	filename
		 205	      0	      0	    205	     cd	ax.o

# X64
		text	   data	    bss	    dec	    hex	filename
		 481	      0	      0	    481	    1e1	aes.o

# ARM
# gcc -Os -c aes.c
		text	   data	    bss	    dec	    hex	filename
		 468	      0	      0	    468	    1d4	aes.o

# ARM
# gcc -DCTR -Os -c aes.c
		text	   data	    bss	    dec	    hex	filename
		 668	      0	      0	    668	    29c	aes.o
