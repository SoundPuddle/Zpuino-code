unsigned int ledmapping[] = { 
	0x00000004, /* Controller 0, led 0, offset 4 */
	0x00010008, /* Controller 1, led 0, offset 8 */
	0x0002000c, /* Controller 2, led 0, offset 12 */
	0x00030010, /* Controller 3, led 0, offset 16 */
	0x00040014, /* Controller 4, led 0, offset 20 */
	0x00050018, /* Controller 5, led 0, offset 24 */
	0x0006001c, /* Controller 6, led 0, offset 28 */
	0x00070020, /* Controller 7, led 0, offset 32 */
	0x00080024, /* Controller 8, led 0, offset 36 */
	0x00090028, /* Controller 9, led 0, offset 40 */
	0x000a002c, /* Controller 10, led 0, offset 44 */
	0x000b0030, /* Controller 11, led 0, offset 48 */
	0x00000034, /* Controller 0, led 1, offset 52 */
	0x00010038, /* Controller 1, led 1, offset 56 */
	0x0002003c, /* Controller 2, led 1, offset 60 */
	0x00030040, /* Controller 3, led 1, offset 64 */
	0x00040044, /* Controller 4, led 1, offset 68 */
	0x00050048, /* Controller 5, led 1, offset 72 */
	0x0006004c, /* Controller 6, led 1, offset 76 */
	0x00070050, /* Controller 7, led 1, offset 80 */
	0x00080054, /* Controller 8, led 1, offset 84 */
	0x00090058, /* Controller 9, led 1, offset 88 */
	0x000a005c, /* Controller 10, led 1, offset 92 */
	0x000b0060, /* Controller 11, led 1, offset 96 */
	0x00000064, /* Controller 0, led 2, offset 100 */
	0x00010068, /* Controller 1, led 2, offset 104 */
	0x0002006c, /* Controller 2, led 2, offset 108 */
	0x00030070, /* Controller 3, led 2, offset 112 */
	0x00040074, /* Controller 4, led 2, offset 116 */
	0x00050078, /* Controller 5, led 2, offset 120 */
	0x0006007c, /* Controller 6, led 2, offset 124 */
	0x00070080, /* Controller 7, led 2, offset 128 */
	0x00080084, /* Controller 8, led 2, offset 132 */
	0x00090088, /* Controller 9, led 2, offset 136 */
	0x000a008c, /* Controller 10, led 2, offset 140 */
	0x000b0090, /* Controller 11, led 2, offset 144 */
	0x00000094, /* Controller 0, led 3, offset 148 */
	0x00010098, /* Controller 1, led 3, offset 152 */
	0x0002009c, /* Controller 2, led 3, offset 156 */
	0x000300a0, /* Controller 3, led 3, offset 160 */
	0x000400a4, /* Controller 4, led 3, offset 164 */
	0x000500a8, /* Controller 5, led 3, offset 168 */
	0x000600ac, /* Controller 6, led 3, offset 172 */
	0x000700b0, /* Controller 7, led 3, offset 176 */
	0x000800b4, /* Controller 8, led 3, offset 180 */
	0x000900b8, /* Controller 9, led 3, offset 184 */
	0x000a00bc, /* Controller 10, led 3, offset 188 */
	0x000b00c0, /* Controller 11, led 3, offset 192 */
	0x000000c4, /* Controller 0, led 4, offset 196 */
	0x000100c8, /* Controller 1, led 4, offset 200 */
	0x000200cc, /* Controller 2, led 4, offset 204 */
	0x000300d0, /* Controller 3, led 4, offset 208 */
	0x000400d4, /* Controller 4, led 4, offset 212 */
	0x000500d8, /* Controller 5, led 4, offset 216 */
	0x000600dc, /* Controller 6, led 4, offset 220 */
	0x000700e0, /* Controller 7, led 4, offset 224 */
	0x000800e4, /* Controller 8, led 4, offset 228 */
	0x000900e8, /* Controller 9, led 4, offset 232 */
	0x000a00ec, /* Controller 10, led 4, offset 236 */
	0x000b00f0, /* Controller 11, led 4, offset 240 */
	0x000000f4, /* Controller 0, led 5, offset 244 */
	0x000100f8, /* Controller 1, led 5, offset 248 */
	0x000200fc, /* Controller 2, led 5, offset 252 */
	0x00030100, /* Controller 3, led 5, offset 256 */
	0x00040104, /* Controller 4, led 5, offset 260 */
	0x00050108, /* Controller 5, led 5, offset 264 */
	0x0006010c, /* Controller 6, led 5, offset 268 */
	0x00070110, /* Controller 7, led 5, offset 272 */
	0x00080114, /* Controller 8, led 5, offset 276 */
	0x00090118, /* Controller 9, led 5, offset 280 */
	0x000a011c, /* Controller 10, led 5, offset 284 */
	0x000b0120, /* Controller 11, led 5, offset 288 */
	0x00000124, /* Controller 0, led 6, offset 292 */
	0x00010128, /* Controller 1, led 6, offset 296 */
	0x0002012c, /* Controller 2, led 6, offset 300 */
	0x00030130, /* Controller 3, led 6, offset 304 */
	0x00040134, /* Controller 4, led 6, offset 308 */
	0x00050138, /* Controller 5, led 6, offset 312 */
	0x0006013c, /* Controller 6, led 6, offset 316 */
	0x00070140, /* Controller 7, led 6, offset 320 */
	0x00080144, /* Controller 8, led 6, offset 324 */
	0x00090148, /* Controller 9, led 6, offset 328 */
	0x000a014c, /* Controller 10, led 6, offset 332 */
	0x000b0150, /* Controller 11, led 6, offset 336 */
	0x00000154, /* Controller 0, led 7, offset 340 */
	0x00010158, /* Controller 1, led 7, offset 344 */
	0x0002015c, /* Controller 2, led 7, offset 348 */
	0x00030160, /* Controller 3, led 7, offset 352 */
	0x00040164, /* Controller 4, led 7, offset 356 */
	0x00050168, /* Controller 5, led 7, offset 360 */
	0x0006016c, /* Controller 6, led 7, offset 364 */
	0x00070170, /* Controller 7, led 7, offset 368 */
	0x00080174, /* Controller 8, led 7, offset 372 */
	0x00090178, /* Controller 9, led 7, offset 376 */
	0x000a017c, /* Controller 10, led 7, offset 380 */
	0x000b0180, /* Controller 11, led 7, offset 384 */
	0x00000184, /* Controller 0, led 8, offset 388 */
	0x00010188, /* Controller 1, led 8, offset 392 */
	0x0002018c, /* Controller 2, led 8, offset 396 */
	0x00030190, /* Controller 3, led 8, offset 400 */
	0x00040194, /* Controller 4, led 8, offset 404 */
	0x00050198, /* Controller 5, led 8, offset 408 */
	0x0006019c, /* Controller 6, led 8, offset 412 */
	0x000701a0, /* Controller 7, led 8, offset 416 */
	0x000801a4, /* Controller 8, led 8, offset 420 */
	0x000901a8, /* Controller 9, led 8, offset 424 */
	0x000a01ac, /* Controller 10, led 8, offset 428 */
	0x000b01b0, /* Controller 11, led 8, offset 432 */
	0x000001b4, /* Controller 0, led 9, offset 436 */
	0x000101b8, /* Controller 1, led 9, offset 440 */
	0x000201bc, /* Controller 2, led 9, offset 444 */
	0x000301c0, /* Controller 3, led 9, offset 448 */
	0x000401c4, /* Controller 4, led 9, offset 452 */
	0x000501c8, /* Controller 5, led 9, offset 456 */
	0x000601cc, /* Controller 6, led 9, offset 460 */
	0x000701d0, /* Controller 7, led 9, offset 464 */
	0x000801d4, /* Controller 8, led 9, offset 468 */
	0x000901d8, /* Controller 9, led 9, offset 472 */
	0x000a01dc, /* Controller 10, led 9, offset 476 */
	0x000b01e0, /* Controller 11, led 9, offset 480 */
	0x000001e4, /* Controller 0, led 10, offset 484 */
	0x000101e8, /* Controller 1, led 10, offset 488 */
	0x000201ec, /* Controller 2, led 10, offset 492 */
	0x000301f0, /* Controller 3, led 10, offset 496 */
	0x000401f4, /* Controller 4, led 10, offset 500 */
	0x000501f8, /* Controller 5, led 10, offset 504 */
	0x000601fc, /* Controller 6, led 10, offset 508 */
	0x00070200, /* Controller 7, led 10, offset 512 */
	0x00080204, /* Controller 8, led 10, offset 516 */
	0x00090208, /* Controller 9, led 10, offset 520 */
	0x000a020c, /* Controller 10, led 10, offset 524 */
	0x000b0210, /* Controller 11, led 10, offset 528 */
	0x00000214, /* Controller 0, led 11, offset 532 */
	0x00010218, /* Controller 1, led 11, offset 536 */
	0x0002021c, /* Controller 2, led 11, offset 540 */
	0x00030220, /* Controller 3, led 11, offset 544 */
	0x00040224, /* Controller 4, led 11, offset 548 */
	0x00050228, /* Controller 5, led 11, offset 552 */
	0x0006022c, /* Controller 6, led 11, offset 556 */
	0x00070230, /* Controller 7, led 11, offset 560 */
	0x00080234, /* Controller 8, led 11, offset 564 */
	0x00090238, /* Controller 9, led 11, offset 568 */
	0x000a023c, /* Controller 10, led 11, offset 572 */
	0x000b0240, /* Controller 11, led 11, offset 576 */
	0x00000244, /* Controller 0, led 12, offset 580 */
	0x00010248, /* Controller 1, led 12, offset 584 */
	0x0002024c, /* Controller 2, led 12, offset 588 */
	0x00030250, /* Controller 3, led 12, offset 592 */
	0x00040254, /* Controller 4, led 12, offset 596 */
	0x00050258, /* Controller 5, led 12, offset 600 */
	0x0006025c, /* Controller 6, led 12, offset 604 */
	0x00070260, /* Controller 7, led 12, offset 608 */
	0x00080264, /* Controller 8, led 12, offset 612 */
	0x00090268, /* Controller 9, led 12, offset 616 */
	0x000a026c, /* Controller 10, led 12, offset 620 */
	0x000b0270, /* Controller 11, led 12, offset 624 */
	0x00000274, /* Controller 0, led 13, offset 628 */
	0x00010278, /* Controller 1, led 13, offset 632 */
	0x0002027c, /* Controller 2, led 13, offset 636 */
	0x00030280, /* Controller 3, led 13, offset 640 */
	0x00040284, /* Controller 4, led 13, offset 644 */
	0x00050288, /* Controller 5, led 13, offset 648 */
	0x0006028c, /* Controller 6, led 13, offset 652 */
	0x00070290, /* Controller 7, led 13, offset 656 */
	0x00080294, /* Controller 8, led 13, offset 660 */
	0x00090298, /* Controller 9, led 13, offset 664 */
	0x000a029c, /* Controller 10, led 13, offset 668 */
	0x000b02a0, /* Controller 11, led 13, offset 672 */
	0x000002a4, /* Controller 0, led 14, offset 676 */
	0x000102a8, /* Controller 1, led 14, offset 680 */
	0x000202ac, /* Controller 2, led 14, offset 684 */
	0x000302b0, /* Controller 3, led 14, offset 688 */
	0x000402b4, /* Controller 4, led 14, offset 692 */
	0x000502b8, /* Controller 5, led 14, offset 696 */
	0x000602bc, /* Controller 6, led 14, offset 700 */
	0x000702c0, /* Controller 7, led 14, offset 704 */
	0x000802c4, /* Controller 8, led 14, offset 708 */
	0x000902c8, /* Controller 9, led 14, offset 712 */
	0x000a02cc, /* Controller 10, led 14, offset 716 */
	0x000b02d0, /* Controller 11, led 14, offset 720 */
	0x000002d4, /* Controller 0, led 15, offset 724 */
	0x000102d8, /* Controller 1, led 15, offset 728 */
	0x000202dc, /* Controller 2, led 15, offset 732 */
	0x000302e0, /* Controller 3, led 15, offset 736 */
	0x000402e4, /* Controller 4, led 15, offset 740 */
	0x000502e8, /* Controller 5, led 15, offset 744 */
	0x000602ec, /* Controller 6, led 15, offset 748 */
	0x000702f0, /* Controller 7, led 15, offset 752 */
	0x000802f4, /* Controller 8, led 15, offset 756 */
	0x000902f8, /* Controller 9, led 15, offset 760 */
	0x000a02fc, /* Controller 10, led 15, offset 764 */
	0x000b0300, /* Controller 11, led 15, offset 768 */
	0x00000000, /* Controller 0, led 16, offset 0 */
	0x00010000, /* Controller 1, led 16, offset 0 */
	0x00020000, /* Controller 2, led 16, offset 0 */
	0x00030000, /* Controller 3, led 16, offset 0 */
	0x00040000, /* Controller 4, led 16, offset 0 */
	0x00050000, /* Controller 5, led 16, offset 0 */
	0x00060000, /* Controller 6, led 16, offset 0 */
	0x00070000, /* Controller 7, led 16, offset 0 */
	0x00080000, /* Controller 8, led 16, offset 0 */
	0x00090000, /* Controller 9, led 16, offset 0 */
	0x000a0000, /* Controller 10, led 16, offset 0 */
	0x000b0000, /* Controller 11, led 16, offset 0 */
	0x00000004, /* Controller 0, offset 4 (direct) */ 
	0x00000008, /* Controller 0, offset 8 (direct) */ 
	0x0000000c, /* Controller 0, offset 12 (direct) */ 
	0x00000010, /* Controller 0, offset 16 (direct) */ 
	0x00000014, /* Controller 0, offset 20 (direct) */ 
	0x00000018, /* Controller 0, offset 24 (direct) */ 
	0x0000001c, /* Controller 0, offset 28 (direct) */ 
	0x00000020, /* Controller 0, offset 32 (direct) */ 
	0x00000024, /* Controller 0, offset 36 (direct) */ 
	0x00000028, /* Controller 0, offset 40 (direct) */ 
	0x0000002c, /* Controller 0, offset 44 (direct) */ 
	0x00000030, /* Controller 0, offset 48 (direct) */ 
	0x00000034, /* Controller 0, offset 52 (direct) */ 
	0x00000038, /* Controller 0, offset 56 (direct) */ 
	0x0000003c, /* Controller 0, offset 60 (direct) */ 
	0x00000040, /* Controller 0, offset 64 (direct) */ 
	0x00000000, /* Controller 0, flush */ 
	0x00010004, /* Controller 1, offset 4 (direct) */ 
	0x00010008, /* Controller 1, offset 8 (direct) */ 
	0x0001000c, /* Controller 1, offset 12 (direct) */ 
	0x00010010, /* Controller 1, offset 16 (direct) */ 
	0x00010014, /* Controller 1, offset 20 (direct) */ 
	0x00010018, /* Controller 1, offset 24 (direct) */ 
	0x0001001c, /* Controller 1, offset 28 (direct) */ 
	0x00010020, /* Controller 1, offset 32 (direct) */ 
	0x00010024, /* Controller 1, offset 36 (direct) */ 
	0x00010028, /* Controller 1, offset 40 (direct) */ 
	0x0001002c, /* Controller 1, offset 44 (direct) */ 
	0x00010030, /* Controller 1, offset 48 (direct) */ 
	0x00010034, /* Controller 1, offset 52 (direct) */ 
	0x00010038, /* Controller 1, offset 56 (direct) */ 
	0x0001003c, /* Controller 1, offset 60 (direct) */ 
	0x00010040, /* Controller 1, offset 64 (direct) */ 
	0x00010000, /* Controller 1, flush */ 
	0x00020004, /* Controller 2, offset 4 (direct) */ 
	0x00020008, /* Controller 2, offset 8 (direct) */ 
	0x0002000c, /* Controller 2, offset 12 (direct) */ 
	0x00020010, /* Controller 2, offset 16 (direct) */ 
	0x00020014, /* Controller 2, offset 20 (direct) */ 
	0x00020018, /* Controller 2, offset 24 (direct) */ 
	0x0002001c, /* Controller 2, offset 28 (direct) */ 
	0x00020020, /* Controller 2, offset 32 (direct) */ 
	0x00020024, /* Controller 2, offset 36 (direct) */ 
	0x00020028, /* Controller 2, offset 40 (direct) */ 
	0x0002002c, /* Controller 2, offset 44 (direct) */ 
	0x00020030, /* Controller 2, offset 48 (direct) */ 
	0x00020034, /* Controller 2, offset 52 (direct) */ 
	0x00020038, /* Controller 2, offset 56 (direct) */ 
	0x0002003c, /* Controller 2, offset 60 (direct) */ 
	0x00020040, /* Controller 2, offset 64 (direct) */ 
	0x00020000, /* Controller 2, flush */ 
	0x00030004, /* Controller 3, offset 4 (direct) */ 
	0x00030008, /* Controller 3, offset 8 (direct) */ 
	0x0003000c, /* Controller 3, offset 12 (direct) */ 
	0x00030010, /* Controller 3, offset 16 (direct) */ 
	0x00030014, /* Controller 3, offset 20 (direct) */ 
	0x00030018, /* Controller 3, offset 24 (direct) */ 
	0x0003001c, /* Controller 3, offset 28 (direct) */ 
	0x00030020, /* Controller 3, offset 32 (direct) */ 
	0x00030024, /* Controller 3, offset 36 (direct) */ 
	0x00030028, /* Controller 3, offset 40 (direct) */ 
	0x0003002c, /* Controller 3, offset 44 (direct) */ 
	0x00030030, /* Controller 3, offset 48 (direct) */ 
	0x00030034, /* Controller 3, offset 52 (direct) */ 
	0x00030038, /* Controller 3, offset 56 (direct) */ 
	0x0003003c, /* Controller 3, offset 60 (direct) */ 
	0x00030040, /* Controller 3, offset 64 (direct) */ 
	0x00030000, /* Controller 3, flush */ 
	0x00040004, /* Controller 4, offset 4 (direct) */ 
	0x00040008, /* Controller 4, offset 8 (direct) */ 
	0x0004000c, /* Controller 4, offset 12 (direct) */ 
	0x00040010, /* Controller 4, offset 16 (direct) */ 
	0x00040014, /* Controller 4, offset 20 (direct) */ 
	0x00040018, /* Controller 4, offset 24 (direct) */ 
	0x0004001c, /* Controller 4, offset 28 (direct) */ 
	0x00040020, /* Controller 4, offset 32 (direct) */ 
	0x00040024, /* Controller 4, offset 36 (direct) */ 
	0x00040028, /* Controller 4, offset 40 (direct) */ 
	0x0004002c, /* Controller 4, offset 44 (direct) */ 
	0x00040030, /* Controller 4, offset 48 (direct) */ 
	0x00040034, /* Controller 4, offset 52 (direct) */ 
	0x00040038, /* Controller 4, offset 56 (direct) */ 
	0x0004003c, /* Controller 4, offset 60 (direct) */ 
	0x00040040, /* Controller 4, offset 64 (direct) */ 
	0x00040000, /* Controller 4, flush */ 
	0x00050004, /* Controller 5, offset 4 (direct) */ 
	0x00050008, /* Controller 5, offset 8 (direct) */ 
	0x0005000c, /* Controller 5, offset 12 (direct) */ 
	0x00050010, /* Controller 5, offset 16 (direct) */ 
	0x00050014, /* Controller 5, offset 20 (direct) */ 
	0x00050018, /* Controller 5, offset 24 (direct) */ 
	0x0005001c, /* Controller 5, offset 28 (direct) */ 
	0x00050020, /* Controller 5, offset 32 (direct) */ 
	0x00050024, /* Controller 5, offset 36 (direct) */ 
	0x00050028, /* Controller 5, offset 40 (direct) */ 
	0x0005002c, /* Controller 5, offset 44 (direct) */ 
	0x00050030, /* Controller 5, offset 48 (direct) */ 
	0x00050034, /* Controller 5, offset 52 (direct) */ 
	0x00050038, /* Controller 5, offset 56 (direct) */ 
	0x0005003c, /* Controller 5, offset 60 (direct) */ 
	0x00050040, /* Controller 5, offset 64 (direct) */ 
	0x00050000, /* Controller 5, flush */ 
	0x00060004, /* Controller 6, offset 4 (direct) */ 
	0x00060008, /* Controller 6, offset 8 (direct) */ 
	0x0006000c, /* Controller 6, offset 12 (direct) */ 
	0x00060010, /* Controller 6, offset 16 (direct) */ 
	0x00060014, /* Controller 6, offset 20 (direct) */ 
	0x00060018, /* Controller 6, offset 24 (direct) */ 
	0x0006001c, /* Controller 6, offset 28 (direct) */ 
	0x00060020, /* Controller 6, offset 32 (direct) */ 
	0x00060024, /* Controller 6, offset 36 (direct) */ 
	0x00060028, /* Controller 6, offset 40 (direct) */ 
	0x0006002c, /* Controller 6, offset 44 (direct) */ 
	0x00060030, /* Controller 6, offset 48 (direct) */ 
	0x00060034, /* Controller 6, offset 52 (direct) */ 
	0x00060038, /* Controller 6, offset 56 (direct) */ 
	0x0006003c, /* Controller 6, offset 60 (direct) */ 
	0x00060040, /* Controller 6, offset 64 (direct) */ 
	0x00060000, /* Controller 6, flush */ 
	0x00070004, /* Controller 7, offset 4 (direct) */ 
	0x00070008, /* Controller 7, offset 8 (direct) */ 
	0x0007000c, /* Controller 7, offset 12 (direct) */ 
	0x00070010, /* Controller 7, offset 16 (direct) */ 
	0x00070014, /* Controller 7, offset 20 (direct) */ 
	0x00070018, /* Controller 7, offset 24 (direct) */ 
	0x0007001c, /* Controller 7, offset 28 (direct) */ 
	0x00070020, /* Controller 7, offset 32 (direct) */ 
	0x00070024, /* Controller 7, offset 36 (direct) */ 
	0x00070028, /* Controller 7, offset 40 (direct) */ 
	0x0007002c, /* Controller 7, offset 44 (direct) */ 
	0x00070030, /* Controller 7, offset 48 (direct) */ 
	0x00070034, /* Controller 7, offset 52 (direct) */ 
	0x00070038, /* Controller 7, offset 56 (direct) */ 
	0x0007003c, /* Controller 7, offset 60 (direct) */ 
	0x00070040, /* Controller 7, offset 64 (direct) */ 
	0x00070000, /* Controller 7, flush */ 
	0x00080004, /* Controller 8, offset 4 (direct) */ 
	0x00080008, /* Controller 8, offset 8 (direct) */ 
	0x0008000c, /* Controller 8, offset 12 (direct) */ 
	0x00080010, /* Controller 8, offset 16 (direct) */ 
	0x00080014, /* Controller 8, offset 20 (direct) */ 
	0x00080018, /* Controller 8, offset 24 (direct) */ 
	0x0008001c, /* Controller 8, offset 28 (direct) */ 
	0x00080020, /* Controller 8, offset 32 (direct) */ 
	0x00080024, /* Controller 8, offset 36 (direct) */ 
	0x00080028, /* Controller 8, offset 40 (direct) */ 
	0x0008002c, /* Controller 8, offset 44 (direct) */ 
	0x00080030, /* Controller 8, offset 48 (direct) */ 
	0x00080034, /* Controller 8, offset 52 (direct) */ 
	0x00080038, /* Controller 8, offset 56 (direct) */ 
	0x0008003c, /* Controller 8, offset 60 (direct) */ 
	0x00080040, /* Controller 8, offset 64 (direct) */ 
	0x00080000, /* Controller 8, flush */ 
	0x00090004, /* Controller 9, offset 4 (direct) */ 
	0x00090008, /* Controller 9, offset 8 (direct) */ 
	0x0009000c, /* Controller 9, offset 12 (direct) */ 
	0x00090010, /* Controller 9, offset 16 (direct) */ 
	0x00090014, /* Controller 9, offset 20 (direct) */ 
	0x00090018, /* Controller 9, offset 24 (direct) */ 
	0x0009001c, /* Controller 9, offset 28 (direct) */ 
	0x00090020, /* Controller 9, offset 32 (direct) */ 
	0x00090024, /* Controller 9, offset 36 (direct) */ 
	0x00090028, /* Controller 9, offset 40 (direct) */ 
	0x0009002c, /* Controller 9, offset 44 (direct) */ 
	0x00090030, /* Controller 9, offset 48 (direct) */ 
	0x00090034, /* Controller 9, offset 52 (direct) */ 
	0x00090038, /* Controller 9, offset 56 (direct) */ 
	0x0009003c, /* Controller 9, offset 60 (direct) */ 
	0x00090040, /* Controller 9, offset 64 (direct) */ 
	0x00090000, /* Controller 9, flush */ 
	0x000a0004, /* Controller 10, offset 4 (direct) */ 
	0x000a0008, /* Controller 10, offset 8 (direct) */ 
	0x000a000c, /* Controller 10, offset 12 (direct) */ 
	0x000a0010, /* Controller 10, offset 16 (direct) */ 
	0x000a0014, /* Controller 10, offset 20 (direct) */ 
	0x000a0018, /* Controller 10, offset 24 (direct) */ 
	0x000a001c, /* Controller 10, offset 28 (direct) */ 
	0x000a0020, /* Controller 10, offset 32 (direct) */ 
	0x000a0024, /* Controller 10, offset 36 (direct) */ 
	0x000a0028, /* Controller 10, offset 40 (direct) */ 
	0x000a002c, /* Controller 10, offset 44 (direct) */ 
	0x000a0030, /* Controller 10, offset 48 (direct) */ 
	0x000a0034, /* Controller 10, offset 52 (direct) */ 
	0x000a0038, /* Controller 10, offset 56 (direct) */ 
	0x000a003c, /* Controller 10, offset 60 (direct) */ 
	0x000a0040, /* Controller 10, offset 64 (direct) */ 
	0x000a0000, /* Controller 10, flush */ 
	0x000b0004, /* Controller 11, offset 4 (direct) */ 
	0x000b0008, /* Controller 11, offset 8 (direct) */ 
	0x000b000c, /* Controller 11, offset 12 (direct) */ 
	0x000b0010, /* Controller 11, offset 16 (direct) */ 
	0x000b0014, /* Controller 11, offset 20 (direct) */ 
	0x000b0018, /* Controller 11, offset 24 (direct) */ 
	0x000b001c, /* Controller 11, offset 28 (direct) */ 
	0x000b0020, /* Controller 11, offset 32 (direct) */ 
	0x000b0024, /* Controller 11, offset 36 (direct) */ 
	0x000b0028, /* Controller 11, offset 40 (direct) */ 
	0x000b002c, /* Controller 11, offset 44 (direct) */ 
	0x000b0030, /* Controller 11, offset 48 (direct) */ 
	0x000b0034, /* Controller 11, offset 52 (direct) */ 
	0x000b0038, /* Controller 11, offset 56 (direct) */ 
	0x000b003c, /* Controller 11, offset 60 (direct) */ 
	0x000b0040, /* Controller 11, offset 64 (direct) */ 
	0x000b0000, /* Controller 11, flush */ 
	0x00000000,
	0x00010000,
	0x00020000,
	0x00030000,
	0x00040000,
	0x00050000,
	0x00060000,
	0x00070000,
	0x00080000,
	0x00090000,
	0x000a0000,
	0x000b0000
};
