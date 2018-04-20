
#define AX_SIZE 205

char AX[] = {
  /* 0000 */ "\x60"                 /* pushad               */
  /* 0001 */ "\x31\xc9"             /* xor ecx, ecx         */
  /* 0003 */ "\xf7\xe1"             /* mul ecx              */
  /* 0005 */ "\x40"                 /* inc eax              */
  /* 0006 */ "\xb1\x04"             /* mov cl, 0x4          */
  /* 0008 */ "\x60"                 /* pushad               */
  /* 0009 */ "\x8b\x74\x24\x44"     /* mov esi, [esp+0x44]  */
  /* 000D */ "\x89\xe7"             /* mov edi, esp         */
  /* 000F */ "\x60"                 /* pushad               */
  /* 0010 */ "\x01\xc9"             /* add ecx, ecx         */
  /* 0012 */ "\xf3\xa5"             /* rep movsd            */
  /* 0014 */ "\x61"                 /* popad                */
  
  /* 0015 */ "\xe8\x10\x00\x00\x00" /* call 0x2a            */
  /* 001A */ "\x51"                 /* push ecx             */
  /* 001B */ "\xb1\x04"             /* mov cl, 0x4          */
  /* 001D */ "\x00\xc0"             /* add al, al           */
  /* 001F */ "\x73\x02"             /* jae 0x23             */
  /* 0021 */ "\x34\x1b"             /* xor al, 0x1b         */
  /* 0023 */ "\xc1\xc8\x08"         /* ror eax, 0x8         */
  /* 0026 */ "\xe2\xf5"             /* loop 0x1d            */
  /* 0028 */ "\x59"                 /* pop ecx              */
  /* 0029 */ "\xc3"                 /* ret                  */
  /* 002A */ "\x5d"                 /* pop ebp              */
  
  /* 002B */ "\x60"                 /* pushad               */
  /* 002C */ "\x92"                 /* xchg edx, eax        */
  /* 002D */ "\x87\xfe"             /* xchg esi, edi        */
  /* 002F */ "\x8b\x46\x1c"         /* mov eax, [esi+0x1c]  */
  /* 0032 */ "\xc1\xc8\x08"         /* ror eax, 0x8         */
  /* 0035 */ "\x8b\x5e\x10"         /* mov ebx, [esi+0x10]  */
  /* 0038 */ "\x31\x1e"             /* xor [esi], ebx       */
  /* 003A */ "\xa5"                 /* movsd                */
  /* 003B */ "\xe8\x5e\x00\x00\x00" /* call 0x9e            */
  /* 0040 */ "\xc1\xc8\x08"         /* ror eax, 0x8         */
  /* 0043 */ "\xe2\xf0"             /* loop 0x35            */
  /* 0045 */ "\x31\xd0"             /* xor eax, edx         */
  /* 0047 */ "\xb1\x04"             /* mov cl, 0x4          */
  /* 0049 */ "\x31\x06"             /* xor [esi], eax       */
  /* 004B */ "\xad"                 /* lodsd                */
  /* 004C */ "\xe2\xfb"             /* loop 0x49            */
  /* 004E */ "\x61"                 /* popad                */
  
  /* 004F */ "\x3c\x6c"             /* cmp al, 0x6c         */
  /* 0051 */ "\x75\x03"             /* jnz 0x56             */
  
  /* 0053 */ "\x61"                 /* popad                */
  /* 0054 */ "\x61"                 /* popad                */
  /* 0055 */ "\xc3"                 /* ret                  */
  
  /* 0056 */ "\xff\xd5"             /* call ebp             */
  
  /* 0058 */ "\x60"                 /* pushad               */
  /* 0059 */ "\xb1\x10"             /* mov cl, 0x10         */
  /* 005B */ "\xac"                 /* lodsb                */
  /* 005C */ "\xe8\x3d\x00\x00\x00" /* call 0x9e            */
  /* 0061 */ "\x52"                 /* push edx             */
  /* 0062 */ "\x89\xd3"             /* mov ebx, edx         */
  /* 0064 */ "\x83\xe3\x03"         /* and ebx, 0x3         */
  /* 0067 */ "\xc1\xea\x02"         /* shr edx, 0x2         */
  /* 006A */ "\x29\xda"             /* sub edx, ebx         */
  /* 006C */ "\x83\xe2\x03"         /* and edx, 0x3         */
  /* 006F */ "\x8d\x1c\x93"         /* lea ebx, [ebx+edx*4] */
  /* 0072 */ "\x88\x04\x1f"         /* mov [edi+ebx], al    */
  /* 0075 */ "\x5a"                 /* pop edx              */
  /* 0076 */ "\x42"                 /* inc edx              */
  /* 0077 */ "\xe2\xe2"             /* loop 0x5b            */
  /* 0079 */ "\x61"                 /* popad                */
  
  /* 007A */ "\x3c\x6c"             /* cmp al, 0x6c         */
  /* 007C */ "\x74\xad"             /* jz 0x2b              */
  
  /* 007E */ "\x60"                 /* pushad               */
  /* 007F */ "\x8b\x07"             /* mov eax, [edi]       */
  /* 0081 */ "\x89\xc3"             /* mov ebx, eax         */
  /* 0083 */ "\xc1\xc8\x08"         /* ror eax, 0x8         */
  /* 0086 */ "\x89\xc2"             /* mov edx, eax         */
  /* 0088 */ "\x31\xd8"             /* xor eax, ebx         */
  /* 008A */ "\xff\xd5"             /* call ebp             */
  /* 008C */ "\x31\xd0"             /* xor eax, edx         */
  /* 008E */ "\xc1\xcb\x10"         /* ror ebx, 0x10        */
  /* 0091 */ "\x31\xd8"             /* xor eax, ebx         */
  /* 0093 */ "\xc1\xcb\x08"         /* ror ebx, 0x8         */
  /* 0096 */ "\x31\xd8"             /* xor eax, ebx         */
  /* 0098 */ "\xab"                 /* stosd                */
  /* 0099 */ "\xe2\xe4"             /* loop 0x7f            */
  /* 009B */ "\x61"                 /* popad                */
  /* 009C */ "\xeb\x8d"             /* jmp 0x2b             */
  
  /* 009E */ "\x60"                 /* pushad               */
  /* 009F */ "\x84\xc0"             /* test al, al          */
  /* 00A1 */ "\x74\x22"             /* jz 0xc5              */
  /* 00A3 */ "\x92"                 /* xchg edx, eax        */
  /* 00A4 */ "\xb1\xff"             /* mov cl, 0xff         */
  /* 00A6 */ "\xb0\x01"             /* mov al, 0x1          */
  /* 00A8 */ "\x84\xe4"             /* test ah, ah          */
  /* 00AA */ "\x75\x07"             /* jnz 0xb3             */
  /* 00AC */ "\x38\xd0"             /* cmp al, dl           */
  /* 00AE */ "\x0f\x94\xd4"         /* setz ah              */
  /* 00B1 */ "\x74\xf3"             /* jz 0xa6              */
  /* 00B3 */ "\x88\xc6"             /* mov dh, al           */
  /* 00B5 */ "\xff\xd5"             /* call ebp             */
  /* 00B7 */ "\x30\xf0"             /* xor al, dh           */
  /* 00B9 */ "\xe2\xed"             /* loop 0xa8            */
  /* 00BB */ "\x88\xc2"             /* mov dl, al           */
  /* 00BD */ "\xb1\x04"             /* mov cl, 0x4          */
  /* 00BF */ "\xd0\xc2"             /* rol dl, 1            */
  /* 00C1 */ "\x30\xd0"             /* xor al, dl           */
  /* 00C3 */ "\xe2\xfa"             /* loop 0xbf            */
  /* 00C5 */ "\x34\x63"             /* xor al, 0x63         */
  /* 00C7 */ "\x88\x44\x24\x1c"     /* mov [esp+0x1c], al   */
  /* 00CB */ "\x61"                 /* popad                */
  /* 00CC */ "\xc3"                 /* ret                  */
};