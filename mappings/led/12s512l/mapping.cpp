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
	0x00000304, /* Controller 0, led 16, offset 772 */
	0x00010308, /* Controller 1, led 16, offset 776 */
	0x0002030c, /* Controller 2, led 16, offset 780 */
	0x00030310, /* Controller 3, led 16, offset 784 */
	0x00040314, /* Controller 4, led 16, offset 788 */
	0x00050318, /* Controller 5, led 16, offset 792 */
	0x0006031c, /* Controller 6, led 16, offset 796 */
	0x00070320, /* Controller 7, led 16, offset 800 */
	0x00080324, /* Controller 8, led 16, offset 804 */
	0x00090328, /* Controller 9, led 16, offset 808 */
	0x000a032c, /* Controller 10, led 16, offset 812 */
	0x000b0330, /* Controller 11, led 16, offset 816 */
	0x00000334, /* Controller 0, led 17, offset 820 */
	0x00010338, /* Controller 1, led 17, offset 824 */
	0x0002033c, /* Controller 2, led 17, offset 828 */
	0x00030340, /* Controller 3, led 17, offset 832 */
	0x00040344, /* Controller 4, led 17, offset 836 */
	0x00050348, /* Controller 5, led 17, offset 840 */
	0x0006034c, /* Controller 6, led 17, offset 844 */
	0x00070350, /* Controller 7, led 17, offset 848 */
	0x00080354, /* Controller 8, led 17, offset 852 */
	0x00090358, /* Controller 9, led 17, offset 856 */
	0x000a035c, /* Controller 10, led 17, offset 860 */
	0x000b0360, /* Controller 11, led 17, offset 864 */
	0x00000364, /* Controller 0, led 18, offset 868 */
	0x00010368, /* Controller 1, led 18, offset 872 */
	0x0002036c, /* Controller 2, led 18, offset 876 */
	0x00030370, /* Controller 3, led 18, offset 880 */
	0x00040374, /* Controller 4, led 18, offset 884 */
	0x00050378, /* Controller 5, led 18, offset 888 */
	0x0006037c, /* Controller 6, led 18, offset 892 */
	0x00070380, /* Controller 7, led 18, offset 896 */
	0x00080384, /* Controller 8, led 18, offset 900 */
	0x00090388, /* Controller 9, led 18, offset 904 */
	0x000a038c, /* Controller 10, led 18, offset 908 */
	0x000b0390, /* Controller 11, led 18, offset 912 */
	0x00000394, /* Controller 0, led 19, offset 916 */
	0x00010398, /* Controller 1, led 19, offset 920 */
	0x0002039c, /* Controller 2, led 19, offset 924 */
	0x000303a0, /* Controller 3, led 19, offset 928 */
	0x000403a4, /* Controller 4, led 19, offset 932 */
	0x000503a8, /* Controller 5, led 19, offset 936 */
	0x000603ac, /* Controller 6, led 19, offset 940 */
	0x000703b0, /* Controller 7, led 19, offset 944 */
	0x000803b4, /* Controller 8, led 19, offset 948 */
	0x000903b8, /* Controller 9, led 19, offset 952 */
	0x000a03bc, /* Controller 10, led 19, offset 956 */
	0x000b03c0, /* Controller 11, led 19, offset 960 */
	0x000003c4, /* Controller 0, led 20, offset 964 */
	0x000103c8, /* Controller 1, led 20, offset 968 */
	0x000203cc, /* Controller 2, led 20, offset 972 */
	0x000303d0, /* Controller 3, led 20, offset 976 */
	0x000403d4, /* Controller 4, led 20, offset 980 */
	0x000503d8, /* Controller 5, led 20, offset 984 */
	0x000603dc, /* Controller 6, led 20, offset 988 */
	0x000703e0, /* Controller 7, led 20, offset 992 */
	0x000803e4, /* Controller 8, led 20, offset 996 */
	0x000903e8, /* Controller 9, led 20, offset 1000 */
	0x000a03ec, /* Controller 10, led 20, offset 1004 */
	0x000b03f0, /* Controller 11, led 20, offset 1008 */
	0x000003f4, /* Controller 0, led 21, offset 1012 */
	0x000103f8, /* Controller 1, led 21, offset 1016 */
	0x000203fc, /* Controller 2, led 21, offset 1020 */
	0x00030400, /* Controller 3, led 21, offset 1024 */
	0x00040404, /* Controller 4, led 21, offset 1028 */
	0x00050408, /* Controller 5, led 21, offset 1032 */
	0x0006040c, /* Controller 6, led 21, offset 1036 */
	0x00070410, /* Controller 7, led 21, offset 1040 */
	0x00080414, /* Controller 8, led 21, offset 1044 */
	0x00090418, /* Controller 9, led 21, offset 1048 */
	0x000a041c, /* Controller 10, led 21, offset 1052 */
	0x000b0420, /* Controller 11, led 21, offset 1056 */
	0x00000424, /* Controller 0, led 22, offset 1060 */
	0x00010428, /* Controller 1, led 22, offset 1064 */
	0x0002042c, /* Controller 2, led 22, offset 1068 */
	0x00030430, /* Controller 3, led 22, offset 1072 */
	0x00040434, /* Controller 4, led 22, offset 1076 */
	0x00050438, /* Controller 5, led 22, offset 1080 */
	0x0006043c, /* Controller 6, led 22, offset 1084 */
	0x00070440, /* Controller 7, led 22, offset 1088 */
	0x00080444, /* Controller 8, led 22, offset 1092 */
	0x00090448, /* Controller 9, led 22, offset 1096 */
	0x000a044c, /* Controller 10, led 22, offset 1100 */
	0x000b0450, /* Controller 11, led 22, offset 1104 */
	0x00000454, /* Controller 0, led 23, offset 1108 */
	0x00010458, /* Controller 1, led 23, offset 1112 */
	0x0002045c, /* Controller 2, led 23, offset 1116 */
	0x00030460, /* Controller 3, led 23, offset 1120 */
	0x00040464, /* Controller 4, led 23, offset 1124 */
	0x00050468, /* Controller 5, led 23, offset 1128 */
	0x0006046c, /* Controller 6, led 23, offset 1132 */
	0x00070470, /* Controller 7, led 23, offset 1136 */
	0x00080474, /* Controller 8, led 23, offset 1140 */
	0x00090478, /* Controller 9, led 23, offset 1144 */
	0x000a047c, /* Controller 10, led 23, offset 1148 */
	0x000b0480, /* Controller 11, led 23, offset 1152 */
	0x00000484, /* Controller 0, led 24, offset 1156 */
	0x00010488, /* Controller 1, led 24, offset 1160 */
	0x0002048c, /* Controller 2, led 24, offset 1164 */
	0x00030490, /* Controller 3, led 24, offset 1168 */
	0x00040494, /* Controller 4, led 24, offset 1172 */
	0x00050498, /* Controller 5, led 24, offset 1176 */
	0x0006049c, /* Controller 6, led 24, offset 1180 */
	0x000704a0, /* Controller 7, led 24, offset 1184 */
	0x000804a4, /* Controller 8, led 24, offset 1188 */
	0x000904a8, /* Controller 9, led 24, offset 1192 */
	0x000a04ac, /* Controller 10, led 24, offset 1196 */
	0x000b04b0, /* Controller 11, led 24, offset 1200 */
	0x000004b4, /* Controller 0, led 25, offset 1204 */
	0x000104b8, /* Controller 1, led 25, offset 1208 */
	0x000204bc, /* Controller 2, led 25, offset 1212 */
	0x000304c0, /* Controller 3, led 25, offset 1216 */
	0x000404c4, /* Controller 4, led 25, offset 1220 */
	0x000504c8, /* Controller 5, led 25, offset 1224 */
	0x000604cc, /* Controller 6, led 25, offset 1228 */
	0x000704d0, /* Controller 7, led 25, offset 1232 */
	0x000804d4, /* Controller 8, led 25, offset 1236 */
	0x000904d8, /* Controller 9, led 25, offset 1240 */
	0x000a04dc, /* Controller 10, led 25, offset 1244 */
	0x000b04e0, /* Controller 11, led 25, offset 1248 */
	0x000004e4, /* Controller 0, led 26, offset 1252 */
	0x000104e8, /* Controller 1, led 26, offset 1256 */
	0x000204ec, /* Controller 2, led 26, offset 1260 */
	0x000304f0, /* Controller 3, led 26, offset 1264 */
	0x000404f4, /* Controller 4, led 26, offset 1268 */
	0x000504f8, /* Controller 5, led 26, offset 1272 */
	0x000604fc, /* Controller 6, led 26, offset 1276 */
	0x00070500, /* Controller 7, led 26, offset 1280 */
	0x00080504, /* Controller 8, led 26, offset 1284 */
	0x00090508, /* Controller 9, led 26, offset 1288 */
	0x000a050c, /* Controller 10, led 26, offset 1292 */
	0x000b0510, /* Controller 11, led 26, offset 1296 */
	0x00000514, /* Controller 0, led 27, offset 1300 */
	0x00010518, /* Controller 1, led 27, offset 1304 */
	0x0002051c, /* Controller 2, led 27, offset 1308 */
	0x00030520, /* Controller 3, led 27, offset 1312 */
	0x00040524, /* Controller 4, led 27, offset 1316 */
	0x00050528, /* Controller 5, led 27, offset 1320 */
	0x0006052c, /* Controller 6, led 27, offset 1324 */
	0x00070530, /* Controller 7, led 27, offset 1328 */
	0x00080534, /* Controller 8, led 27, offset 1332 */
	0x00090538, /* Controller 9, led 27, offset 1336 */
	0x000a053c, /* Controller 10, led 27, offset 1340 */
	0x000b0540, /* Controller 11, led 27, offset 1344 */
	0x00000544, /* Controller 0, led 28, offset 1348 */
	0x00010548, /* Controller 1, led 28, offset 1352 */
	0x0002054c, /* Controller 2, led 28, offset 1356 */
	0x00030550, /* Controller 3, led 28, offset 1360 */
	0x00040554, /* Controller 4, led 28, offset 1364 */
	0x00050558, /* Controller 5, led 28, offset 1368 */
	0x0006055c, /* Controller 6, led 28, offset 1372 */
	0x00070560, /* Controller 7, led 28, offset 1376 */
	0x00080564, /* Controller 8, led 28, offset 1380 */
	0x00090568, /* Controller 9, led 28, offset 1384 */
	0x000a056c, /* Controller 10, led 28, offset 1388 */
	0x000b0570, /* Controller 11, led 28, offset 1392 */
	0x00000574, /* Controller 0, led 29, offset 1396 */
	0x00010578, /* Controller 1, led 29, offset 1400 */
	0x0002057c, /* Controller 2, led 29, offset 1404 */
	0x00030580, /* Controller 3, led 29, offset 1408 */
	0x00040584, /* Controller 4, led 29, offset 1412 */
	0x00050588, /* Controller 5, led 29, offset 1416 */
	0x0006058c, /* Controller 6, led 29, offset 1420 */
	0x00070590, /* Controller 7, led 29, offset 1424 */
	0x00080594, /* Controller 8, led 29, offset 1428 */
	0x00090598, /* Controller 9, led 29, offset 1432 */
	0x000a059c, /* Controller 10, led 29, offset 1436 */
	0x000b05a0, /* Controller 11, led 29, offset 1440 */
	0x000005a4, /* Controller 0, led 30, offset 1444 */
	0x000105a8, /* Controller 1, led 30, offset 1448 */
	0x000205ac, /* Controller 2, led 30, offset 1452 */
	0x000305b0, /* Controller 3, led 30, offset 1456 */
	0x000405b4, /* Controller 4, led 30, offset 1460 */
	0x000505b8, /* Controller 5, led 30, offset 1464 */
	0x000605bc, /* Controller 6, led 30, offset 1468 */
	0x000705c0, /* Controller 7, led 30, offset 1472 */
	0x000805c4, /* Controller 8, led 30, offset 1476 */
	0x000905c8, /* Controller 9, led 30, offset 1480 */
	0x000a05cc, /* Controller 10, led 30, offset 1484 */
	0x000b05d0, /* Controller 11, led 30, offset 1488 */
	0x000005d4, /* Controller 0, led 31, offset 1492 */
	0x000105d8, /* Controller 1, led 31, offset 1496 */
	0x000205dc, /* Controller 2, led 31, offset 1500 */
	0x000305e0, /* Controller 3, led 31, offset 1504 */
	0x000405e4, /* Controller 4, led 31, offset 1508 */
	0x000505e8, /* Controller 5, led 31, offset 1512 */
	0x000605ec, /* Controller 6, led 31, offset 1516 */
	0x000705f0, /* Controller 7, led 31, offset 1520 */
	0x000805f4, /* Controller 8, led 31, offset 1524 */
	0x000905f8, /* Controller 9, led 31, offset 1528 */
	0x000a05fc, /* Controller 10, led 31, offset 1532 */
	0x000b0600, /* Controller 11, led 31, offset 1536 */
	0x00000604, /* Controller 0, led 32, offset 1540 */
	0x00010608, /* Controller 1, led 32, offset 1544 */
	0x0002060c, /* Controller 2, led 32, offset 1548 */
	0x00030610, /* Controller 3, led 32, offset 1552 */
	0x00040614, /* Controller 4, led 32, offset 1556 */
	0x00050618, /* Controller 5, led 32, offset 1560 */
	0x0006061c, /* Controller 6, led 32, offset 1564 */
	0x00070620, /* Controller 7, led 32, offset 1568 */
	0x00080624, /* Controller 8, led 32, offset 1572 */
	0x00090628, /* Controller 9, led 32, offset 1576 */
	0x000a062c, /* Controller 10, led 32, offset 1580 */
	0x000b0630, /* Controller 11, led 32, offset 1584 */
	0x00000634, /* Controller 0, led 33, offset 1588 */
	0x00010638, /* Controller 1, led 33, offset 1592 */
	0x0002063c, /* Controller 2, led 33, offset 1596 */
	0x00030640, /* Controller 3, led 33, offset 1600 */
	0x00040644, /* Controller 4, led 33, offset 1604 */
	0x00050648, /* Controller 5, led 33, offset 1608 */
	0x0006064c, /* Controller 6, led 33, offset 1612 */
	0x00070650, /* Controller 7, led 33, offset 1616 */
	0x00080654, /* Controller 8, led 33, offset 1620 */
	0x00090658, /* Controller 9, led 33, offset 1624 */
	0x000a065c, /* Controller 10, led 33, offset 1628 */
	0x000b0660, /* Controller 11, led 33, offset 1632 */
	0x00000664, /* Controller 0, led 34, offset 1636 */
	0x00010668, /* Controller 1, led 34, offset 1640 */
	0x0002066c, /* Controller 2, led 34, offset 1644 */
	0x00030670, /* Controller 3, led 34, offset 1648 */
	0x00040674, /* Controller 4, led 34, offset 1652 */
	0x00050678, /* Controller 5, led 34, offset 1656 */
	0x0006067c, /* Controller 6, led 34, offset 1660 */
	0x00070680, /* Controller 7, led 34, offset 1664 */
	0x00080684, /* Controller 8, led 34, offset 1668 */
	0x00090688, /* Controller 9, led 34, offset 1672 */
	0x000a068c, /* Controller 10, led 34, offset 1676 */
	0x000b0690, /* Controller 11, led 34, offset 1680 */
	0x00000694, /* Controller 0, led 35, offset 1684 */
	0x00010698, /* Controller 1, led 35, offset 1688 */
	0x0002069c, /* Controller 2, led 35, offset 1692 */
	0x000306a0, /* Controller 3, led 35, offset 1696 */
	0x000406a4, /* Controller 4, led 35, offset 1700 */
	0x000506a8, /* Controller 5, led 35, offset 1704 */
	0x000606ac, /* Controller 6, led 35, offset 1708 */
	0x000706b0, /* Controller 7, led 35, offset 1712 */
	0x000806b4, /* Controller 8, led 35, offset 1716 */
	0x000906b8, /* Controller 9, led 35, offset 1720 */
	0x000a06bc, /* Controller 10, led 35, offset 1724 */
	0x000b06c0, /* Controller 11, led 35, offset 1728 */
	0x000006c4, /* Controller 0, led 36, offset 1732 */
	0x000106c8, /* Controller 1, led 36, offset 1736 */
	0x000206cc, /* Controller 2, led 36, offset 1740 */
	0x000306d0, /* Controller 3, led 36, offset 1744 */
	0x000406d4, /* Controller 4, led 36, offset 1748 */
	0x000506d8, /* Controller 5, led 36, offset 1752 */
	0x000606dc, /* Controller 6, led 36, offset 1756 */
	0x000706e0, /* Controller 7, led 36, offset 1760 */
	0x000806e4, /* Controller 8, led 36, offset 1764 */
	0x000906e8, /* Controller 9, led 36, offset 1768 */
	0x000a06ec, /* Controller 10, led 36, offset 1772 */
	0x000b06f0, /* Controller 11, led 36, offset 1776 */
	0x000006f4, /* Controller 0, led 37, offset 1780 */
	0x000106f8, /* Controller 1, led 37, offset 1784 */
	0x000206fc, /* Controller 2, led 37, offset 1788 */
	0x00030700, /* Controller 3, led 37, offset 1792 */
	0x00040704, /* Controller 4, led 37, offset 1796 */
	0x00050708, /* Controller 5, led 37, offset 1800 */
	0x0006070c, /* Controller 6, led 37, offset 1804 */
	0x00070710, /* Controller 7, led 37, offset 1808 */
	0x00080714, /* Controller 8, led 37, offset 1812 */
	0x00090718, /* Controller 9, led 37, offset 1816 */
	0x000a071c, /* Controller 10, led 37, offset 1820 */
	0x000b0720, /* Controller 11, led 37, offset 1824 */
	0x00000724, /* Controller 0, led 38, offset 1828 */
	0x00010728, /* Controller 1, led 38, offset 1832 */
	0x0002072c, /* Controller 2, led 38, offset 1836 */
	0x00030730, /* Controller 3, led 38, offset 1840 */
	0x00040734, /* Controller 4, led 38, offset 1844 */
	0x00050738, /* Controller 5, led 38, offset 1848 */
	0x0006073c, /* Controller 6, led 38, offset 1852 */
	0x00070740, /* Controller 7, led 38, offset 1856 */
	0x00080744, /* Controller 8, led 38, offset 1860 */
	0x00090748, /* Controller 9, led 38, offset 1864 */
	0x000a074c, /* Controller 10, led 38, offset 1868 */
	0x000b0750, /* Controller 11, led 38, offset 1872 */
	0x00000754, /* Controller 0, led 39, offset 1876 */
	0x00010758, /* Controller 1, led 39, offset 1880 */
	0x0002075c, /* Controller 2, led 39, offset 1884 */
	0x00030760, /* Controller 3, led 39, offset 1888 */
	0x00040764, /* Controller 4, led 39, offset 1892 */
	0x00050768, /* Controller 5, led 39, offset 1896 */
	0x0006076c, /* Controller 6, led 39, offset 1900 */
	0x00070770, /* Controller 7, led 39, offset 1904 */
	0x00080774, /* Controller 8, led 39, offset 1908 */
	0x00090778, /* Controller 9, led 39, offset 1912 */
	0x000a077c, /* Controller 10, led 39, offset 1916 */
	0x000b0780, /* Controller 11, led 39, offset 1920 */
	0x00000784, /* Controller 0, led 40, offset 1924 */
	0x00010788, /* Controller 1, led 40, offset 1928 */
	0x0002078c, /* Controller 2, led 40, offset 1932 */
	0x00030790, /* Controller 3, led 40, offset 1936 */
	0x00040794, /* Controller 4, led 40, offset 1940 */
	0x00050798, /* Controller 5, led 40, offset 1944 */
	0x0006079c, /* Controller 6, led 40, offset 1948 */
	0x000707a0, /* Controller 7, led 40, offset 1952 */
	0x000807a4, /* Controller 8, led 40, offset 1956 */
	0x000907a8, /* Controller 9, led 40, offset 1960 */
	0x000a07ac, /* Controller 10, led 40, offset 1964 */
	0x000b07b0, /* Controller 11, led 40, offset 1968 */
	0x000007b4, /* Controller 0, led 41, offset 1972 */
	0x000107b8, /* Controller 1, led 41, offset 1976 */
	0x000207bc, /* Controller 2, led 41, offset 1980 */
	0x000307c0, /* Controller 3, led 41, offset 1984 */
	0x000407c4, /* Controller 4, led 41, offset 1988 */
	0x000507c8, /* Controller 5, led 41, offset 1992 */
	0x000607cc, /* Controller 6, led 41, offset 1996 */
	0x000707d0, /* Controller 7, led 41, offset 2000 */
	0x000807d4, /* Controller 8, led 41, offset 2004 */
	0x000907d8, /* Controller 9, led 41, offset 2008 */
	0x000a07dc, /* Controller 10, led 41, offset 2012 */
	0x000b07e0, /* Controller 11, led 41, offset 2016 */
	0x000007e4, /* Controller 0, led 42, offset 2020 */
	0x000107e8, /* Controller 1, led 42, offset 2024 */
	0x000207ec, /* Controller 2, led 42, offset 2028 */
	0x000307f0, /* Controller 3, led 42, offset 2032 */
	0x000407f4, /* Controller 4, led 42, offset 2036 */
	0x000507f8, /* Controller 5, led 42, offset 2040 */
	0x000607fc, /* Controller 6, led 42, offset 2044 */
	0x00070800, /* Controller 7, led 42, offset 2048 */
	0x00080804, /* Controller 8, led 42, offset 2052 */
	0x00090808, /* Controller 9, led 42, offset 2056 */
	0x000a080c, /* Controller 10, led 42, offset 2060 */
	0x000b0810, /* Controller 11, led 42, offset 2064 */
	0x00000814, /* Controller 0, led 43, offset 2068 */
	0x00010818, /* Controller 1, led 43, offset 2072 */
	0x0002081c, /* Controller 2, led 43, offset 2076 */
	0x00030820, /* Controller 3, led 43, offset 2080 */
	0x00040824, /* Controller 4, led 43, offset 2084 */
	0x00050828, /* Controller 5, led 43, offset 2088 */
	0x0006082c, /* Controller 6, led 43, offset 2092 */
	0x00070830, /* Controller 7, led 43, offset 2096 */
	0x00080834, /* Controller 8, led 43, offset 2100 */
	0x00090838, /* Controller 9, led 43, offset 2104 */
	0x000a083c, /* Controller 10, led 43, offset 2108 */
	0x000b0840, /* Controller 11, led 43, offset 2112 */
	0x00000844, /* Controller 0, led 44, offset 2116 */
	0x00010848, /* Controller 1, led 44, offset 2120 */
	0x0002084c, /* Controller 2, led 44, offset 2124 */
	0x00030850, /* Controller 3, led 44, offset 2128 */
	0x00040854, /* Controller 4, led 44, offset 2132 */
	0x00050858, /* Controller 5, led 44, offset 2136 */
	0x0006085c, /* Controller 6, led 44, offset 2140 */
	0x00070860, /* Controller 7, led 44, offset 2144 */
	0x00080864, /* Controller 8, led 44, offset 2148 */
	0x00090868, /* Controller 9, led 44, offset 2152 */
	0x000a086c, /* Controller 10, led 44, offset 2156 */
	0x000b0870, /* Controller 11, led 44, offset 2160 */
	0x00000874, /* Controller 0, led 45, offset 2164 */
	0x00010878, /* Controller 1, led 45, offset 2168 */
	0x0002087c, /* Controller 2, led 45, offset 2172 */
	0x00030880, /* Controller 3, led 45, offset 2176 */
	0x00040884, /* Controller 4, led 45, offset 2180 */
	0x00050888, /* Controller 5, led 45, offset 2184 */
	0x0006088c, /* Controller 6, led 45, offset 2188 */
	0x00070890, /* Controller 7, led 45, offset 2192 */
	0x00080894, /* Controller 8, led 45, offset 2196 */
	0x00090898, /* Controller 9, led 45, offset 2200 */
	0x000a089c, /* Controller 10, led 45, offset 2204 */
	0x000b08a0, /* Controller 11, led 45, offset 2208 */
	0x000008a4, /* Controller 0, led 46, offset 2212 */
	0x000108a8, /* Controller 1, led 46, offset 2216 */
	0x000208ac, /* Controller 2, led 46, offset 2220 */
	0x000308b0, /* Controller 3, led 46, offset 2224 */
	0x000408b4, /* Controller 4, led 46, offset 2228 */
	0x000508b8, /* Controller 5, led 46, offset 2232 */
	0x000608bc, /* Controller 6, led 46, offset 2236 */
	0x000708c0, /* Controller 7, led 46, offset 2240 */
	0x000808c4, /* Controller 8, led 46, offset 2244 */
	0x000908c8, /* Controller 9, led 46, offset 2248 */
	0x000a08cc, /* Controller 10, led 46, offset 2252 */
	0x000b08d0, /* Controller 11, led 46, offset 2256 */
	0x000008d4, /* Controller 0, led 47, offset 2260 */
	0x000108d8, /* Controller 1, led 47, offset 2264 */
	0x000208dc, /* Controller 2, led 47, offset 2268 */
	0x000308e0, /* Controller 3, led 47, offset 2272 */
	0x000408e4, /* Controller 4, led 47, offset 2276 */
	0x000508e8, /* Controller 5, led 47, offset 2280 */
	0x000608ec, /* Controller 6, led 47, offset 2284 */
	0x000708f0, /* Controller 7, led 47, offset 2288 */
	0x000808f4, /* Controller 8, led 47, offset 2292 */
	0x000908f8, /* Controller 9, led 47, offset 2296 */
	0x000a08fc, /* Controller 10, led 47, offset 2300 */
	0x000b0900, /* Controller 11, led 47, offset 2304 */
	0x00000904, /* Controller 0, led 48, offset 2308 */
	0x00010908, /* Controller 1, led 48, offset 2312 */
	0x0002090c, /* Controller 2, led 48, offset 2316 */
	0x00030910, /* Controller 3, led 48, offset 2320 */
	0x00040914, /* Controller 4, led 48, offset 2324 */
	0x00050918, /* Controller 5, led 48, offset 2328 */
	0x0006091c, /* Controller 6, led 48, offset 2332 */
	0x00070920, /* Controller 7, led 48, offset 2336 */
	0x00080924, /* Controller 8, led 48, offset 2340 */
	0x00090928, /* Controller 9, led 48, offset 2344 */
	0x000a092c, /* Controller 10, led 48, offset 2348 */
	0x000b0930, /* Controller 11, led 48, offset 2352 */
	0x00000934, /* Controller 0, led 49, offset 2356 */
	0x00010938, /* Controller 1, led 49, offset 2360 */
	0x0002093c, /* Controller 2, led 49, offset 2364 */
	0x00030940, /* Controller 3, led 49, offset 2368 */
	0x00040944, /* Controller 4, led 49, offset 2372 */
	0x00050948, /* Controller 5, led 49, offset 2376 */
	0x0006094c, /* Controller 6, led 49, offset 2380 */
	0x00070950, /* Controller 7, led 49, offset 2384 */
	0x00080954, /* Controller 8, led 49, offset 2388 */
	0x00090958, /* Controller 9, led 49, offset 2392 */
	0x000a095c, /* Controller 10, led 49, offset 2396 */
	0x000b0960, /* Controller 11, led 49, offset 2400 */
	0x00000964, /* Controller 0, led 50, offset 2404 */
	0x00010968, /* Controller 1, led 50, offset 2408 */
	0x0002096c, /* Controller 2, led 50, offset 2412 */
	0x00030970, /* Controller 3, led 50, offset 2416 */
	0x00040974, /* Controller 4, led 50, offset 2420 */
	0x00050978, /* Controller 5, led 50, offset 2424 */
	0x0006097c, /* Controller 6, led 50, offset 2428 */
	0x00070980, /* Controller 7, led 50, offset 2432 */
	0x00080984, /* Controller 8, led 50, offset 2436 */
	0x00090988, /* Controller 9, led 50, offset 2440 */
	0x000a098c, /* Controller 10, led 50, offset 2444 */
	0x000b0990, /* Controller 11, led 50, offset 2448 */
	0x00000994, /* Controller 0, led 51, offset 2452 */
	0x00010998, /* Controller 1, led 51, offset 2456 */
	0x0002099c, /* Controller 2, led 51, offset 2460 */
	0x000309a0, /* Controller 3, led 51, offset 2464 */
	0x000409a4, /* Controller 4, led 51, offset 2468 */
	0x000509a8, /* Controller 5, led 51, offset 2472 */
	0x000609ac, /* Controller 6, led 51, offset 2476 */
	0x000709b0, /* Controller 7, led 51, offset 2480 */
	0x000809b4, /* Controller 8, led 51, offset 2484 */
	0x000909b8, /* Controller 9, led 51, offset 2488 */
	0x000a09bc, /* Controller 10, led 51, offset 2492 */
	0x000b09c0, /* Controller 11, led 51, offset 2496 */
	0x000009c4, /* Controller 0, led 52, offset 2500 */
	0x000109c8, /* Controller 1, led 52, offset 2504 */
	0x000209cc, /* Controller 2, led 52, offset 2508 */
	0x000309d0, /* Controller 3, led 52, offset 2512 */
	0x000409d4, /* Controller 4, led 52, offset 2516 */
	0x000509d8, /* Controller 5, led 52, offset 2520 */
	0x000609dc, /* Controller 6, led 52, offset 2524 */
	0x000709e0, /* Controller 7, led 52, offset 2528 */
	0x000809e4, /* Controller 8, led 52, offset 2532 */
	0x000909e8, /* Controller 9, led 52, offset 2536 */
	0x000a09ec, /* Controller 10, led 52, offset 2540 */
	0x000b09f0, /* Controller 11, led 52, offset 2544 */
	0x000009f4, /* Controller 0, led 53, offset 2548 */
	0x000109f8, /* Controller 1, led 53, offset 2552 */
	0x000209fc, /* Controller 2, led 53, offset 2556 */
	0x00030a00, /* Controller 3, led 53, offset 2560 */
	0x00040a04, /* Controller 4, led 53, offset 2564 */
	0x00050a08, /* Controller 5, led 53, offset 2568 */
	0x00060a0c, /* Controller 6, led 53, offset 2572 */
	0x00070a10, /* Controller 7, led 53, offset 2576 */
	0x00080a14, /* Controller 8, led 53, offset 2580 */
	0x00090a18, /* Controller 9, led 53, offset 2584 */
	0x000a0a1c, /* Controller 10, led 53, offset 2588 */
	0x000b0a20, /* Controller 11, led 53, offset 2592 */
	0x00000a24, /* Controller 0, led 54, offset 2596 */
	0x00010a28, /* Controller 1, led 54, offset 2600 */
	0x00020a2c, /* Controller 2, led 54, offset 2604 */
	0x00030a30, /* Controller 3, led 54, offset 2608 */
	0x00040a34, /* Controller 4, led 54, offset 2612 */
	0x00050a38, /* Controller 5, led 54, offset 2616 */
	0x00060a3c, /* Controller 6, led 54, offset 2620 */
	0x00070a40, /* Controller 7, led 54, offset 2624 */
	0x00080a44, /* Controller 8, led 54, offset 2628 */
	0x00090a48, /* Controller 9, led 54, offset 2632 */
	0x000a0a4c, /* Controller 10, led 54, offset 2636 */
	0x000b0a50, /* Controller 11, led 54, offset 2640 */
	0x00000a54, /* Controller 0, led 55, offset 2644 */
	0x00010a58, /* Controller 1, led 55, offset 2648 */
	0x00020a5c, /* Controller 2, led 55, offset 2652 */
	0x00030a60, /* Controller 3, led 55, offset 2656 */
	0x00040a64, /* Controller 4, led 55, offset 2660 */
	0x00050a68, /* Controller 5, led 55, offset 2664 */
	0x00060a6c, /* Controller 6, led 55, offset 2668 */
	0x00070a70, /* Controller 7, led 55, offset 2672 */
	0x00080a74, /* Controller 8, led 55, offset 2676 */
	0x00090a78, /* Controller 9, led 55, offset 2680 */
	0x000a0a7c, /* Controller 10, led 55, offset 2684 */
	0x000b0a80, /* Controller 11, led 55, offset 2688 */
	0x00000a84, /* Controller 0, led 56, offset 2692 */
	0x00010a88, /* Controller 1, led 56, offset 2696 */
	0x00020a8c, /* Controller 2, led 56, offset 2700 */
	0x00030a90, /* Controller 3, led 56, offset 2704 */
	0x00040a94, /* Controller 4, led 56, offset 2708 */
	0x00050a98, /* Controller 5, led 56, offset 2712 */
	0x00060a9c, /* Controller 6, led 56, offset 2716 */
	0x00070aa0, /* Controller 7, led 56, offset 2720 */
	0x00080aa4, /* Controller 8, led 56, offset 2724 */
	0x00090aa8, /* Controller 9, led 56, offset 2728 */
	0x000a0aac, /* Controller 10, led 56, offset 2732 */
	0x000b0ab0, /* Controller 11, led 56, offset 2736 */
	0x00000ab4, /* Controller 0, led 57, offset 2740 */
	0x00010ab8, /* Controller 1, led 57, offset 2744 */
	0x00020abc, /* Controller 2, led 57, offset 2748 */
	0x00030ac0, /* Controller 3, led 57, offset 2752 */
	0x00040ac4, /* Controller 4, led 57, offset 2756 */
	0x00050ac8, /* Controller 5, led 57, offset 2760 */
	0x00060acc, /* Controller 6, led 57, offset 2764 */
	0x00070ad0, /* Controller 7, led 57, offset 2768 */
	0x00080ad4, /* Controller 8, led 57, offset 2772 */
	0x00090ad8, /* Controller 9, led 57, offset 2776 */
	0x000a0adc, /* Controller 10, led 57, offset 2780 */
	0x000b0ae0, /* Controller 11, led 57, offset 2784 */
	0x00000ae4, /* Controller 0, led 58, offset 2788 */
	0x00010ae8, /* Controller 1, led 58, offset 2792 */
	0x00020aec, /* Controller 2, led 58, offset 2796 */
	0x00030af0, /* Controller 3, led 58, offset 2800 */
	0x00040af4, /* Controller 4, led 58, offset 2804 */
	0x00050af8, /* Controller 5, led 58, offset 2808 */
	0x00060afc, /* Controller 6, led 58, offset 2812 */
	0x00070b00, /* Controller 7, led 58, offset 2816 */
	0x00080b04, /* Controller 8, led 58, offset 2820 */
	0x00090b08, /* Controller 9, led 58, offset 2824 */
	0x000a0b0c, /* Controller 10, led 58, offset 2828 */
	0x000b0b10, /* Controller 11, led 58, offset 2832 */
	0x00000b14, /* Controller 0, led 59, offset 2836 */
	0x00010b18, /* Controller 1, led 59, offset 2840 */
	0x00020b1c, /* Controller 2, led 59, offset 2844 */
	0x00030b20, /* Controller 3, led 59, offset 2848 */
	0x00040b24, /* Controller 4, led 59, offset 2852 */
	0x00050b28, /* Controller 5, led 59, offset 2856 */
	0x00060b2c, /* Controller 6, led 59, offset 2860 */
	0x00070b30, /* Controller 7, led 59, offset 2864 */
	0x00080b34, /* Controller 8, led 59, offset 2868 */
	0x00090b38, /* Controller 9, led 59, offset 2872 */
	0x000a0b3c, /* Controller 10, led 59, offset 2876 */
	0x000b0b40, /* Controller 11, led 59, offset 2880 */
	0x00000b44, /* Controller 0, led 60, offset 2884 */
	0x00010b48, /* Controller 1, led 60, offset 2888 */
	0x00020b4c, /* Controller 2, led 60, offset 2892 */
	0x00030b50, /* Controller 3, led 60, offset 2896 */
	0x00040b54, /* Controller 4, led 60, offset 2900 */
	0x00050b58, /* Controller 5, led 60, offset 2904 */
	0x00060b5c, /* Controller 6, led 60, offset 2908 */
	0x00070b60, /* Controller 7, led 60, offset 2912 */
	0x00080b64, /* Controller 8, led 60, offset 2916 */
	0x00090b68, /* Controller 9, led 60, offset 2920 */
	0x000a0b6c, /* Controller 10, led 60, offset 2924 */
	0x000b0b70, /* Controller 11, led 60, offset 2928 */
	0x00000b74, /* Controller 0, led 61, offset 2932 */
	0x00010b78, /* Controller 1, led 61, offset 2936 */
	0x00020b7c, /* Controller 2, led 61, offset 2940 */
	0x00030b80, /* Controller 3, led 61, offset 2944 */
	0x00040b84, /* Controller 4, led 61, offset 2948 */
	0x00050b88, /* Controller 5, led 61, offset 2952 */
	0x00060b8c, /* Controller 6, led 61, offset 2956 */
	0x00070b90, /* Controller 7, led 61, offset 2960 */
	0x00080b94, /* Controller 8, led 61, offset 2964 */
	0x00090b98, /* Controller 9, led 61, offset 2968 */
	0x000a0b9c, /* Controller 10, led 61, offset 2972 */
	0x000b0ba0, /* Controller 11, led 61, offset 2976 */
	0x00000ba4, /* Controller 0, led 62, offset 2980 */
	0x00010ba8, /* Controller 1, led 62, offset 2984 */
	0x00020bac, /* Controller 2, led 62, offset 2988 */
	0x00030bb0, /* Controller 3, led 62, offset 2992 */
	0x00040bb4, /* Controller 4, led 62, offset 2996 */
	0x00050bb8, /* Controller 5, led 62, offset 3000 */
	0x00060bbc, /* Controller 6, led 62, offset 3004 */
	0x00070bc0, /* Controller 7, led 62, offset 3008 */
	0x00080bc4, /* Controller 8, led 62, offset 3012 */
	0x00090bc8, /* Controller 9, led 62, offset 3016 */
	0x000a0bcc, /* Controller 10, led 62, offset 3020 */
	0x000b0bd0, /* Controller 11, led 62, offset 3024 */
	0x00000bd4, /* Controller 0, led 63, offset 3028 */
	0x00010bd8, /* Controller 1, led 63, offset 3032 */
	0x00020bdc, /* Controller 2, led 63, offset 3036 */
	0x00030be0, /* Controller 3, led 63, offset 3040 */
	0x00040be4, /* Controller 4, led 63, offset 3044 */
	0x00050be8, /* Controller 5, led 63, offset 3048 */
	0x00060bec, /* Controller 6, led 63, offset 3052 */
	0x00070bf0, /* Controller 7, led 63, offset 3056 */
	0x00080bf4, /* Controller 8, led 63, offset 3060 */
	0x00090bf8, /* Controller 9, led 63, offset 3064 */
	0x000a0bfc, /* Controller 10, led 63, offset 3068 */
	0x000b0c00, /* Controller 11, led 63, offset 3072 */
	0x00000c04, /* Controller 0, led 64, offset 3076 */
	0x00010c08, /* Controller 1, led 64, offset 3080 */
	0x00020c0c, /* Controller 2, led 64, offset 3084 */
	0x00030c10, /* Controller 3, led 64, offset 3088 */
	0x00040c14, /* Controller 4, led 64, offset 3092 */
	0x00050c18, /* Controller 5, led 64, offset 3096 */
	0x00060c1c, /* Controller 6, led 64, offset 3100 */
	0x00070c20, /* Controller 7, led 64, offset 3104 */
	0x00080c24, /* Controller 8, led 64, offset 3108 */
	0x00090c28, /* Controller 9, led 64, offset 3112 */
	0x000a0c2c, /* Controller 10, led 64, offset 3116 */
	0x000b0c30, /* Controller 11, led 64, offset 3120 */
	0x00000c34, /* Controller 0, led 65, offset 3124 */
	0x00010c38, /* Controller 1, led 65, offset 3128 */
	0x00020c3c, /* Controller 2, led 65, offset 3132 */
	0x00030c40, /* Controller 3, led 65, offset 3136 */
	0x00040c44, /* Controller 4, led 65, offset 3140 */
	0x00050c48, /* Controller 5, led 65, offset 3144 */
	0x00060c4c, /* Controller 6, led 65, offset 3148 */
	0x00070c50, /* Controller 7, led 65, offset 3152 */
	0x00080c54, /* Controller 8, led 65, offset 3156 */
	0x00090c58, /* Controller 9, led 65, offset 3160 */
	0x000a0c5c, /* Controller 10, led 65, offset 3164 */
	0x000b0c60, /* Controller 11, led 65, offset 3168 */
	0x00000c64, /* Controller 0, led 66, offset 3172 */
	0x00010c68, /* Controller 1, led 66, offset 3176 */
	0x00020c6c, /* Controller 2, led 66, offset 3180 */
	0x00030c70, /* Controller 3, led 66, offset 3184 */
	0x00040c74, /* Controller 4, led 66, offset 3188 */
	0x00050c78, /* Controller 5, led 66, offset 3192 */
	0x00060c7c, /* Controller 6, led 66, offset 3196 */
	0x00070c80, /* Controller 7, led 66, offset 3200 */
	0x00080c84, /* Controller 8, led 66, offset 3204 */
	0x00090c88, /* Controller 9, led 66, offset 3208 */
	0x000a0c8c, /* Controller 10, led 66, offset 3212 */
	0x000b0c90, /* Controller 11, led 66, offset 3216 */
	0x00000c94, /* Controller 0, led 67, offset 3220 */
	0x00010c98, /* Controller 1, led 67, offset 3224 */
	0x00020c9c, /* Controller 2, led 67, offset 3228 */
	0x00030ca0, /* Controller 3, led 67, offset 3232 */
	0x00040ca4, /* Controller 4, led 67, offset 3236 */
	0x00050ca8, /* Controller 5, led 67, offset 3240 */
	0x00060cac, /* Controller 6, led 67, offset 3244 */
	0x00070cb0, /* Controller 7, led 67, offset 3248 */
	0x00080cb4, /* Controller 8, led 67, offset 3252 */
	0x00090cb8, /* Controller 9, led 67, offset 3256 */
	0x000a0cbc, /* Controller 10, led 67, offset 3260 */
	0x000b0cc0, /* Controller 11, led 67, offset 3264 */
	0x00000cc4, /* Controller 0, led 68, offset 3268 */
	0x00010cc8, /* Controller 1, led 68, offset 3272 */
	0x00020ccc, /* Controller 2, led 68, offset 3276 */
	0x00030cd0, /* Controller 3, led 68, offset 3280 */
	0x00040cd4, /* Controller 4, led 68, offset 3284 */
	0x00050cd8, /* Controller 5, led 68, offset 3288 */
	0x00060cdc, /* Controller 6, led 68, offset 3292 */
	0x00070ce0, /* Controller 7, led 68, offset 3296 */
	0x00080ce4, /* Controller 8, led 68, offset 3300 */
	0x00090ce8, /* Controller 9, led 68, offset 3304 */
	0x000a0cec, /* Controller 10, led 68, offset 3308 */
	0x000b0cf0, /* Controller 11, led 68, offset 3312 */
	0x00000cf4, /* Controller 0, led 69, offset 3316 */
	0x00010cf8, /* Controller 1, led 69, offset 3320 */
	0x00020cfc, /* Controller 2, led 69, offset 3324 */
	0x00030d00, /* Controller 3, led 69, offset 3328 */
	0x00040d04, /* Controller 4, led 69, offset 3332 */
	0x00050d08, /* Controller 5, led 69, offset 3336 */
	0x00060d0c, /* Controller 6, led 69, offset 3340 */
	0x00070d10, /* Controller 7, led 69, offset 3344 */
	0x00080d14, /* Controller 8, led 69, offset 3348 */
	0x00090d18, /* Controller 9, led 69, offset 3352 */
	0x000a0d1c, /* Controller 10, led 69, offset 3356 */
	0x000b0d20, /* Controller 11, led 69, offset 3360 */
	0x00000d24, /* Controller 0, led 70, offset 3364 */
	0x00010d28, /* Controller 1, led 70, offset 3368 */
	0x00020d2c, /* Controller 2, led 70, offset 3372 */
	0x00030d30, /* Controller 3, led 70, offset 3376 */
	0x00040d34, /* Controller 4, led 70, offset 3380 */
	0x00050d38, /* Controller 5, led 70, offset 3384 */
	0x00060d3c, /* Controller 6, led 70, offset 3388 */
	0x00070d40, /* Controller 7, led 70, offset 3392 */
	0x00080d44, /* Controller 8, led 70, offset 3396 */
	0x00090d48, /* Controller 9, led 70, offset 3400 */
	0x000a0d4c, /* Controller 10, led 70, offset 3404 */
	0x000b0d50, /* Controller 11, led 70, offset 3408 */
	0x00000d54, /* Controller 0, led 71, offset 3412 */
	0x00010d58, /* Controller 1, led 71, offset 3416 */
	0x00020d5c, /* Controller 2, led 71, offset 3420 */
	0x00030d60, /* Controller 3, led 71, offset 3424 */
	0x00040d64, /* Controller 4, led 71, offset 3428 */
	0x00050d68, /* Controller 5, led 71, offset 3432 */
	0x00060d6c, /* Controller 6, led 71, offset 3436 */
	0x00070d70, /* Controller 7, led 71, offset 3440 */
	0x00080d74, /* Controller 8, led 71, offset 3444 */
	0x00090d78, /* Controller 9, led 71, offset 3448 */
	0x000a0d7c, /* Controller 10, led 71, offset 3452 */
	0x000b0d80, /* Controller 11, led 71, offset 3456 */
	0x00000d84, /* Controller 0, led 72, offset 3460 */
	0x00010d88, /* Controller 1, led 72, offset 3464 */
	0x00020d8c, /* Controller 2, led 72, offset 3468 */
	0x00030d90, /* Controller 3, led 72, offset 3472 */
	0x00040d94, /* Controller 4, led 72, offset 3476 */
	0x00050d98, /* Controller 5, led 72, offset 3480 */
	0x00060d9c, /* Controller 6, led 72, offset 3484 */
	0x00070da0, /* Controller 7, led 72, offset 3488 */
	0x00080da4, /* Controller 8, led 72, offset 3492 */
	0x00090da8, /* Controller 9, led 72, offset 3496 */
	0x000a0dac, /* Controller 10, led 72, offset 3500 */
	0x000b0db0, /* Controller 11, led 72, offset 3504 */
	0x00000db4, /* Controller 0, led 73, offset 3508 */
	0x00010db8, /* Controller 1, led 73, offset 3512 */
	0x00020dbc, /* Controller 2, led 73, offset 3516 */
	0x00030dc0, /* Controller 3, led 73, offset 3520 */
	0x00040dc4, /* Controller 4, led 73, offset 3524 */
	0x00050dc8, /* Controller 5, led 73, offset 3528 */
	0x00060dcc, /* Controller 6, led 73, offset 3532 */
	0x00070dd0, /* Controller 7, led 73, offset 3536 */
	0x00080dd4, /* Controller 8, led 73, offset 3540 */
	0x00090dd8, /* Controller 9, led 73, offset 3544 */
	0x000a0ddc, /* Controller 10, led 73, offset 3548 */
	0x000b0de0, /* Controller 11, led 73, offset 3552 */
	0x00000de4, /* Controller 0, led 74, offset 3556 */
	0x00010de8, /* Controller 1, led 74, offset 3560 */
	0x00020dec, /* Controller 2, led 74, offset 3564 */
	0x00030df0, /* Controller 3, led 74, offset 3568 */
	0x00040df4, /* Controller 4, led 74, offset 3572 */
	0x00050df8, /* Controller 5, led 74, offset 3576 */
	0x00060dfc, /* Controller 6, led 74, offset 3580 */
	0x00070e00, /* Controller 7, led 74, offset 3584 */
	0x00080e04, /* Controller 8, led 74, offset 3588 */
	0x00090e08, /* Controller 9, led 74, offset 3592 */
	0x000a0e0c, /* Controller 10, led 74, offset 3596 */
	0x000b0e10, /* Controller 11, led 74, offset 3600 */
	0x00000e14, /* Controller 0, led 75, offset 3604 */
	0x00010e18, /* Controller 1, led 75, offset 3608 */
	0x00020e1c, /* Controller 2, led 75, offset 3612 */
	0x00030e20, /* Controller 3, led 75, offset 3616 */
	0x00040e24, /* Controller 4, led 75, offset 3620 */
	0x00050e28, /* Controller 5, led 75, offset 3624 */
	0x00060e2c, /* Controller 6, led 75, offset 3628 */
	0x00070e30, /* Controller 7, led 75, offset 3632 */
	0x00080e34, /* Controller 8, led 75, offset 3636 */
	0x00090e38, /* Controller 9, led 75, offset 3640 */
	0x000a0e3c, /* Controller 10, led 75, offset 3644 */
	0x000b0e40, /* Controller 11, led 75, offset 3648 */
	0x00000e44, /* Controller 0, led 76, offset 3652 */
	0x00010e48, /* Controller 1, led 76, offset 3656 */
	0x00020e4c, /* Controller 2, led 76, offset 3660 */
	0x00030e50, /* Controller 3, led 76, offset 3664 */
	0x00040e54, /* Controller 4, led 76, offset 3668 */
	0x00050e58, /* Controller 5, led 76, offset 3672 */
	0x00060e5c, /* Controller 6, led 76, offset 3676 */
	0x00070e60, /* Controller 7, led 76, offset 3680 */
	0x00080e64, /* Controller 8, led 76, offset 3684 */
	0x00090e68, /* Controller 9, led 76, offset 3688 */
	0x000a0e6c, /* Controller 10, led 76, offset 3692 */
	0x000b0e70, /* Controller 11, led 76, offset 3696 */
	0x00000e74, /* Controller 0, led 77, offset 3700 */
	0x00010e78, /* Controller 1, led 77, offset 3704 */
	0x00020e7c, /* Controller 2, led 77, offset 3708 */
	0x00030e80, /* Controller 3, led 77, offset 3712 */
	0x00040e84, /* Controller 4, led 77, offset 3716 */
	0x00050e88, /* Controller 5, led 77, offset 3720 */
	0x00060e8c, /* Controller 6, led 77, offset 3724 */
	0x00070e90, /* Controller 7, led 77, offset 3728 */
	0x00080e94, /* Controller 8, led 77, offset 3732 */
	0x00090e98, /* Controller 9, led 77, offset 3736 */
	0x000a0e9c, /* Controller 10, led 77, offset 3740 */
	0x000b0ea0, /* Controller 11, led 77, offset 3744 */
	0x00000ea4, /* Controller 0, led 78, offset 3748 */
	0x00010ea8, /* Controller 1, led 78, offset 3752 */
	0x00020eac, /* Controller 2, led 78, offset 3756 */
	0x00030eb0, /* Controller 3, led 78, offset 3760 */
	0x00040eb4, /* Controller 4, led 78, offset 3764 */
	0x00050eb8, /* Controller 5, led 78, offset 3768 */
	0x00060ebc, /* Controller 6, led 78, offset 3772 */
	0x00070ec0, /* Controller 7, led 78, offset 3776 */
	0x00080ec4, /* Controller 8, led 78, offset 3780 */
	0x00090ec8, /* Controller 9, led 78, offset 3784 */
	0x000a0ecc, /* Controller 10, led 78, offset 3788 */
	0x000b0ed0, /* Controller 11, led 78, offset 3792 */
	0x00000ed4, /* Controller 0, led 79, offset 3796 */
	0x00010ed8, /* Controller 1, led 79, offset 3800 */
	0x00020edc, /* Controller 2, led 79, offset 3804 */
	0x00030ee0, /* Controller 3, led 79, offset 3808 */
	0x00040ee4, /* Controller 4, led 79, offset 3812 */
	0x00050ee8, /* Controller 5, led 79, offset 3816 */
	0x00060eec, /* Controller 6, led 79, offset 3820 */
	0x00070ef0, /* Controller 7, led 79, offset 3824 */
	0x00080ef4, /* Controller 8, led 79, offset 3828 */
	0x00090ef8, /* Controller 9, led 79, offset 3832 */
	0x000a0efc, /* Controller 10, led 79, offset 3836 */
	0x000b0f00, /* Controller 11, led 79, offset 3840 */
	0x00000f04, /* Controller 0, led 80, offset 3844 */
	0x00010f08, /* Controller 1, led 80, offset 3848 */
	0x00020f0c, /* Controller 2, led 80, offset 3852 */
	0x00030f10, /* Controller 3, led 80, offset 3856 */
	0x00040f14, /* Controller 4, led 80, offset 3860 */
	0x00050f18, /* Controller 5, led 80, offset 3864 */
	0x00060f1c, /* Controller 6, led 80, offset 3868 */
	0x00070f20, /* Controller 7, led 80, offset 3872 */
	0x00080f24, /* Controller 8, led 80, offset 3876 */
	0x00090f28, /* Controller 9, led 80, offset 3880 */
	0x000a0f2c, /* Controller 10, led 80, offset 3884 */
	0x000b0f30, /* Controller 11, led 80, offset 3888 */
	0x00000f34, /* Controller 0, led 81, offset 3892 */
	0x00010f38, /* Controller 1, led 81, offset 3896 */
	0x00020f3c, /* Controller 2, led 81, offset 3900 */
	0x00030f40, /* Controller 3, led 81, offset 3904 */
	0x00040f44, /* Controller 4, led 81, offset 3908 */
	0x00050f48, /* Controller 5, led 81, offset 3912 */
	0x00060f4c, /* Controller 6, led 81, offset 3916 */
	0x00070f50, /* Controller 7, led 81, offset 3920 */
	0x00080f54, /* Controller 8, led 81, offset 3924 */
	0x00090f58, /* Controller 9, led 81, offset 3928 */
	0x000a0f5c, /* Controller 10, led 81, offset 3932 */
	0x000b0f60, /* Controller 11, led 81, offset 3936 */
	0x00000f64, /* Controller 0, led 82, offset 3940 */
	0x00010f68, /* Controller 1, led 82, offset 3944 */
	0x00020f6c, /* Controller 2, led 82, offset 3948 */
	0x00030f70, /* Controller 3, led 82, offset 3952 */
	0x00040f74, /* Controller 4, led 82, offset 3956 */
	0x00050f78, /* Controller 5, led 82, offset 3960 */
	0x00060f7c, /* Controller 6, led 82, offset 3964 */
	0x00070f80, /* Controller 7, led 82, offset 3968 */
	0x00080f84, /* Controller 8, led 82, offset 3972 */
	0x00090f88, /* Controller 9, led 82, offset 3976 */
	0x000a0f8c, /* Controller 10, led 82, offset 3980 */
	0x000b0f90, /* Controller 11, led 82, offset 3984 */
	0x00000f94, /* Controller 0, led 83, offset 3988 */
	0x00010f98, /* Controller 1, led 83, offset 3992 */
	0x00020f9c, /* Controller 2, led 83, offset 3996 */
	0x00030fa0, /* Controller 3, led 83, offset 4000 */
	0x00040fa4, /* Controller 4, led 83, offset 4004 */
	0x00050fa8, /* Controller 5, led 83, offset 4008 */
	0x00060fac, /* Controller 6, led 83, offset 4012 */
	0x00070fb0, /* Controller 7, led 83, offset 4016 */
	0x00080fb4, /* Controller 8, led 83, offset 4020 */
	0x00090fb8, /* Controller 9, led 83, offset 4024 */
	0x000a0fbc, /* Controller 10, led 83, offset 4028 */
	0x000b0fc0, /* Controller 11, led 83, offset 4032 */
	0x00000fc4, /* Controller 0, led 84, offset 4036 */
	0x00010fc8, /* Controller 1, led 84, offset 4040 */
	0x00020fcc, /* Controller 2, led 84, offset 4044 */
	0x00030fd0, /* Controller 3, led 84, offset 4048 */
	0x00040fd4, /* Controller 4, led 84, offset 4052 */
	0x00050fd8, /* Controller 5, led 84, offset 4056 */
	0x00060fdc, /* Controller 6, led 84, offset 4060 */
	0x00070fe0, /* Controller 7, led 84, offset 4064 */
	0x00080fe4, /* Controller 8, led 84, offset 4068 */
	0x00090fe8, /* Controller 9, led 84, offset 4072 */
	0x000a0fec, /* Controller 10, led 84, offset 4076 */
	0x000b0ff0, /* Controller 11, led 84, offset 4080 */
	0x00000ff4, /* Controller 0, led 85, offset 4084 */
	0x00010ff8, /* Controller 1, led 85, offset 4088 */
	0x00020ffc, /* Controller 2, led 85, offset 4092 */
	0x00031000, /* Controller 3, led 85, offset 4096 */
	0x00041004, /* Controller 4, led 85, offset 4100 */
	0x00051008, /* Controller 5, led 85, offset 4104 */
	0x0006100c, /* Controller 6, led 85, offset 4108 */
	0x00071010, /* Controller 7, led 85, offset 4112 */
	0x00081014, /* Controller 8, led 85, offset 4116 */
	0x00091018, /* Controller 9, led 85, offset 4120 */
	0x000a101c, /* Controller 10, led 85, offset 4124 */
	0x000b1020, /* Controller 11, led 85, offset 4128 */
	0x00001024, /* Controller 0, led 86, offset 4132 */
	0x00011028, /* Controller 1, led 86, offset 4136 */
	0x0002102c, /* Controller 2, led 86, offset 4140 */
	0x00031030, /* Controller 3, led 86, offset 4144 */
	0x00041034, /* Controller 4, led 86, offset 4148 */
	0x00051038, /* Controller 5, led 86, offset 4152 */
	0x0006103c, /* Controller 6, led 86, offset 4156 */
	0x00071040, /* Controller 7, led 86, offset 4160 */
	0x00081044, /* Controller 8, led 86, offset 4164 */
	0x00091048, /* Controller 9, led 86, offset 4168 */
	0x000a104c, /* Controller 10, led 86, offset 4172 */
	0x000b1050, /* Controller 11, led 86, offset 4176 */
	0x00001054, /* Controller 0, led 87, offset 4180 */
	0x00011058, /* Controller 1, led 87, offset 4184 */
	0x0002105c, /* Controller 2, led 87, offset 4188 */
	0x00031060, /* Controller 3, led 87, offset 4192 */
	0x00041064, /* Controller 4, led 87, offset 4196 */
	0x00051068, /* Controller 5, led 87, offset 4200 */
	0x0006106c, /* Controller 6, led 87, offset 4204 */
	0x00071070, /* Controller 7, led 87, offset 4208 */
	0x00081074, /* Controller 8, led 87, offset 4212 */
	0x00091078, /* Controller 9, led 87, offset 4216 */
	0x000a107c, /* Controller 10, led 87, offset 4220 */
	0x000b1080, /* Controller 11, led 87, offset 4224 */
	0x00001084, /* Controller 0, led 88, offset 4228 */
	0x00011088, /* Controller 1, led 88, offset 4232 */
	0x0002108c, /* Controller 2, led 88, offset 4236 */
	0x00031090, /* Controller 3, led 88, offset 4240 */
	0x00041094, /* Controller 4, led 88, offset 4244 */
	0x00051098, /* Controller 5, led 88, offset 4248 */
	0x0006109c, /* Controller 6, led 88, offset 4252 */
	0x000710a0, /* Controller 7, led 88, offset 4256 */
	0x000810a4, /* Controller 8, led 88, offset 4260 */
	0x000910a8, /* Controller 9, led 88, offset 4264 */
	0x000a10ac, /* Controller 10, led 88, offset 4268 */
	0x000b10b0, /* Controller 11, led 88, offset 4272 */
	0x000010b4, /* Controller 0, led 89, offset 4276 */
	0x000110b8, /* Controller 1, led 89, offset 4280 */
	0x000210bc, /* Controller 2, led 89, offset 4284 */
	0x000310c0, /* Controller 3, led 89, offset 4288 */
	0x000410c4, /* Controller 4, led 89, offset 4292 */
	0x000510c8, /* Controller 5, led 89, offset 4296 */
	0x000610cc, /* Controller 6, led 89, offset 4300 */
	0x000710d0, /* Controller 7, led 89, offset 4304 */
	0x000810d4, /* Controller 8, led 89, offset 4308 */
	0x000910d8, /* Controller 9, led 89, offset 4312 */
	0x000a10dc, /* Controller 10, led 89, offset 4316 */
	0x000b10e0, /* Controller 11, led 89, offset 4320 */
	0x000010e4, /* Controller 0, led 90, offset 4324 */
	0x000110e8, /* Controller 1, led 90, offset 4328 */
	0x000210ec, /* Controller 2, led 90, offset 4332 */
	0x000310f0, /* Controller 3, led 90, offset 4336 */
	0x000410f4, /* Controller 4, led 90, offset 4340 */
	0x000510f8, /* Controller 5, led 90, offset 4344 */
	0x000610fc, /* Controller 6, led 90, offset 4348 */
	0x00071100, /* Controller 7, led 90, offset 4352 */
	0x00081104, /* Controller 8, led 90, offset 4356 */
	0x00091108, /* Controller 9, led 90, offset 4360 */
	0x000a110c, /* Controller 10, led 90, offset 4364 */
	0x000b1110, /* Controller 11, led 90, offset 4368 */
	0x00001114, /* Controller 0, led 91, offset 4372 */
	0x00011118, /* Controller 1, led 91, offset 4376 */
	0x0002111c, /* Controller 2, led 91, offset 4380 */
	0x00031120, /* Controller 3, led 91, offset 4384 */
	0x00041124, /* Controller 4, led 91, offset 4388 */
	0x00051128, /* Controller 5, led 91, offset 4392 */
	0x0006112c, /* Controller 6, led 91, offset 4396 */
	0x00071130, /* Controller 7, led 91, offset 4400 */
	0x00081134, /* Controller 8, led 91, offset 4404 */
	0x00091138, /* Controller 9, led 91, offset 4408 */
	0x000a113c, /* Controller 10, led 91, offset 4412 */
	0x000b1140, /* Controller 11, led 91, offset 4416 */
	0x00001144, /* Controller 0, led 92, offset 4420 */
	0x00011148, /* Controller 1, led 92, offset 4424 */
	0x0002114c, /* Controller 2, led 92, offset 4428 */
	0x00031150, /* Controller 3, led 92, offset 4432 */
	0x00041154, /* Controller 4, led 92, offset 4436 */
	0x00051158, /* Controller 5, led 92, offset 4440 */
	0x0006115c, /* Controller 6, led 92, offset 4444 */
	0x00071160, /* Controller 7, led 92, offset 4448 */
	0x00081164, /* Controller 8, led 92, offset 4452 */
	0x00091168, /* Controller 9, led 92, offset 4456 */
	0x000a116c, /* Controller 10, led 92, offset 4460 */
	0x000b1170, /* Controller 11, led 92, offset 4464 */
	0x00001174, /* Controller 0, led 93, offset 4468 */
	0x00011178, /* Controller 1, led 93, offset 4472 */
	0x0002117c, /* Controller 2, led 93, offset 4476 */
	0x00031180, /* Controller 3, led 93, offset 4480 */
	0x00041184, /* Controller 4, led 93, offset 4484 */
	0x00051188, /* Controller 5, led 93, offset 4488 */
	0x0006118c, /* Controller 6, led 93, offset 4492 */
	0x00071190, /* Controller 7, led 93, offset 4496 */
	0x00081194, /* Controller 8, led 93, offset 4500 */
	0x00091198, /* Controller 9, led 93, offset 4504 */
	0x000a119c, /* Controller 10, led 93, offset 4508 */
	0x000b11a0, /* Controller 11, led 93, offset 4512 */
	0x000011a4, /* Controller 0, led 94, offset 4516 */
	0x000111a8, /* Controller 1, led 94, offset 4520 */
	0x000211ac, /* Controller 2, led 94, offset 4524 */
	0x000311b0, /* Controller 3, led 94, offset 4528 */
	0x000411b4, /* Controller 4, led 94, offset 4532 */
	0x000511b8, /* Controller 5, led 94, offset 4536 */
	0x000611bc, /* Controller 6, led 94, offset 4540 */
	0x000711c0, /* Controller 7, led 94, offset 4544 */
	0x000811c4, /* Controller 8, led 94, offset 4548 */
	0x000911c8, /* Controller 9, led 94, offset 4552 */
	0x000a11cc, /* Controller 10, led 94, offset 4556 */
	0x000b11d0, /* Controller 11, led 94, offset 4560 */
	0x000011d4, /* Controller 0, led 95, offset 4564 */
	0x000111d8, /* Controller 1, led 95, offset 4568 */
	0x000211dc, /* Controller 2, led 95, offset 4572 */
	0x000311e0, /* Controller 3, led 95, offset 4576 */
	0x000411e4, /* Controller 4, led 95, offset 4580 */
	0x000511e8, /* Controller 5, led 95, offset 4584 */
	0x000611ec, /* Controller 6, led 95, offset 4588 */
	0x000711f0, /* Controller 7, led 95, offset 4592 */
	0x000811f4, /* Controller 8, led 95, offset 4596 */
	0x000911f8, /* Controller 9, led 95, offset 4600 */
	0x000a11fc, /* Controller 10, led 95, offset 4604 */
	0x000b1200, /* Controller 11, led 95, offset 4608 */
	0x00001204, /* Controller 0, led 96, offset 4612 */
	0x00011208, /* Controller 1, led 96, offset 4616 */
	0x0002120c, /* Controller 2, led 96, offset 4620 */
	0x00031210, /* Controller 3, led 96, offset 4624 */
	0x00041214, /* Controller 4, led 96, offset 4628 */
	0x00051218, /* Controller 5, led 96, offset 4632 */
	0x0006121c, /* Controller 6, led 96, offset 4636 */
	0x00071220, /* Controller 7, led 96, offset 4640 */
	0x00081224, /* Controller 8, led 96, offset 4644 */
	0x00091228, /* Controller 9, led 96, offset 4648 */
	0x000a122c, /* Controller 10, led 96, offset 4652 */
	0x000b1230, /* Controller 11, led 96, offset 4656 */
	0x00001234, /* Controller 0, led 97, offset 4660 */
	0x00011238, /* Controller 1, led 97, offset 4664 */
	0x0002123c, /* Controller 2, led 97, offset 4668 */
	0x00031240, /* Controller 3, led 97, offset 4672 */
	0x00041244, /* Controller 4, led 97, offset 4676 */
	0x00051248, /* Controller 5, led 97, offset 4680 */
	0x0006124c, /* Controller 6, led 97, offset 4684 */
	0x00071250, /* Controller 7, led 97, offset 4688 */
	0x00081254, /* Controller 8, led 97, offset 4692 */
	0x00091258, /* Controller 9, led 97, offset 4696 */
	0x000a125c, /* Controller 10, led 97, offset 4700 */
	0x000b1260, /* Controller 11, led 97, offset 4704 */
	0x00001264, /* Controller 0, led 98, offset 4708 */
	0x00011268, /* Controller 1, led 98, offset 4712 */
	0x0002126c, /* Controller 2, led 98, offset 4716 */
	0x00031270, /* Controller 3, led 98, offset 4720 */
	0x00041274, /* Controller 4, led 98, offset 4724 */
	0x00051278, /* Controller 5, led 98, offset 4728 */
	0x0006127c, /* Controller 6, led 98, offset 4732 */
	0x00071280, /* Controller 7, led 98, offset 4736 */
	0x00081284, /* Controller 8, led 98, offset 4740 */
	0x00091288, /* Controller 9, led 98, offset 4744 */
	0x000a128c, /* Controller 10, led 98, offset 4748 */
	0x000b1290, /* Controller 11, led 98, offset 4752 */
	0x00001294, /* Controller 0, led 99, offset 4756 */
	0x00011298, /* Controller 1, led 99, offset 4760 */
	0x0002129c, /* Controller 2, led 99, offset 4764 */
	0x000312a0, /* Controller 3, led 99, offset 4768 */
	0x000412a4, /* Controller 4, led 99, offset 4772 */
	0x000512a8, /* Controller 5, led 99, offset 4776 */
	0x000612ac, /* Controller 6, led 99, offset 4780 */
	0x000712b0, /* Controller 7, led 99, offset 4784 */
	0x000812b4, /* Controller 8, led 99, offset 4788 */
	0x000912b8, /* Controller 9, led 99, offset 4792 */
	0x000a12bc, /* Controller 10, led 99, offset 4796 */
	0x000b12c0, /* Controller 11, led 99, offset 4800 */
	0x000012c4, /* Controller 0, led 100, offset 4804 */
	0x000112c8, /* Controller 1, led 100, offset 4808 */
	0x000212cc, /* Controller 2, led 100, offset 4812 */
	0x000312d0, /* Controller 3, led 100, offset 4816 */
	0x000412d4, /* Controller 4, led 100, offset 4820 */
	0x000512d8, /* Controller 5, led 100, offset 4824 */
	0x000612dc, /* Controller 6, led 100, offset 4828 */
	0x000712e0, /* Controller 7, led 100, offset 4832 */
	0x000812e4, /* Controller 8, led 100, offset 4836 */
	0x000912e8, /* Controller 9, led 100, offset 4840 */
	0x000a12ec, /* Controller 10, led 100, offset 4844 */
	0x000b12f0, /* Controller 11, led 100, offset 4848 */
	0x000012f4, /* Controller 0, led 101, offset 4852 */
	0x000112f8, /* Controller 1, led 101, offset 4856 */
	0x000212fc, /* Controller 2, led 101, offset 4860 */
	0x00031300, /* Controller 3, led 101, offset 4864 */
	0x00041304, /* Controller 4, led 101, offset 4868 */
	0x00051308, /* Controller 5, led 101, offset 4872 */
	0x0006130c, /* Controller 6, led 101, offset 4876 */
	0x00071310, /* Controller 7, led 101, offset 4880 */
	0x00081314, /* Controller 8, led 101, offset 4884 */
	0x00091318, /* Controller 9, led 101, offset 4888 */
	0x000a131c, /* Controller 10, led 101, offset 4892 */
	0x000b1320, /* Controller 11, led 101, offset 4896 */
	0x00001324, /* Controller 0, led 102, offset 4900 */
	0x00011328, /* Controller 1, led 102, offset 4904 */
	0x0002132c, /* Controller 2, led 102, offset 4908 */
	0x00031330, /* Controller 3, led 102, offset 4912 */
	0x00041334, /* Controller 4, led 102, offset 4916 */
	0x00051338, /* Controller 5, led 102, offset 4920 */
	0x0006133c, /* Controller 6, led 102, offset 4924 */
	0x00071340, /* Controller 7, led 102, offset 4928 */
	0x00081344, /* Controller 8, led 102, offset 4932 */
	0x00091348, /* Controller 9, led 102, offset 4936 */
	0x000a134c, /* Controller 10, led 102, offset 4940 */
	0x000b1350, /* Controller 11, led 102, offset 4944 */
	0x00001354, /* Controller 0, led 103, offset 4948 */
	0x00011358, /* Controller 1, led 103, offset 4952 */
	0x0002135c, /* Controller 2, led 103, offset 4956 */
	0x00031360, /* Controller 3, led 103, offset 4960 */
	0x00041364, /* Controller 4, led 103, offset 4964 */
	0x00051368, /* Controller 5, led 103, offset 4968 */
	0x0006136c, /* Controller 6, led 103, offset 4972 */
	0x00071370, /* Controller 7, led 103, offset 4976 */
	0x00081374, /* Controller 8, led 103, offset 4980 */
	0x00091378, /* Controller 9, led 103, offset 4984 */
	0x000a137c, /* Controller 10, led 103, offset 4988 */
	0x000b1380, /* Controller 11, led 103, offset 4992 */
	0x00001384, /* Controller 0, led 104, offset 4996 */
	0x00011388, /* Controller 1, led 104, offset 5000 */
	0x0002138c, /* Controller 2, led 104, offset 5004 */
	0x00031390, /* Controller 3, led 104, offset 5008 */
	0x00041394, /* Controller 4, led 104, offset 5012 */
	0x00051398, /* Controller 5, led 104, offset 5016 */
	0x0006139c, /* Controller 6, led 104, offset 5020 */
	0x000713a0, /* Controller 7, led 104, offset 5024 */
	0x000813a4, /* Controller 8, led 104, offset 5028 */
	0x000913a8, /* Controller 9, led 104, offset 5032 */
	0x000a13ac, /* Controller 10, led 104, offset 5036 */
	0x000b13b0, /* Controller 11, led 104, offset 5040 */
	0x000013b4, /* Controller 0, led 105, offset 5044 */
	0x000113b8, /* Controller 1, led 105, offset 5048 */
	0x000213bc, /* Controller 2, led 105, offset 5052 */
	0x000313c0, /* Controller 3, led 105, offset 5056 */
	0x000413c4, /* Controller 4, led 105, offset 5060 */
	0x000513c8, /* Controller 5, led 105, offset 5064 */
	0x000613cc, /* Controller 6, led 105, offset 5068 */
	0x000713d0, /* Controller 7, led 105, offset 5072 */
	0x000813d4, /* Controller 8, led 105, offset 5076 */
	0x000913d8, /* Controller 9, led 105, offset 5080 */
	0x000a13dc, /* Controller 10, led 105, offset 5084 */
	0x000b13e0, /* Controller 11, led 105, offset 5088 */
	0x000013e4, /* Controller 0, led 106, offset 5092 */
	0x000113e8, /* Controller 1, led 106, offset 5096 */
	0x000213ec, /* Controller 2, led 106, offset 5100 */
	0x000313f0, /* Controller 3, led 106, offset 5104 */
	0x000413f4, /* Controller 4, led 106, offset 5108 */
	0x000513f8, /* Controller 5, led 106, offset 5112 */
	0x000613fc, /* Controller 6, led 106, offset 5116 */
	0x00071400, /* Controller 7, led 106, offset 5120 */
	0x00081404, /* Controller 8, led 106, offset 5124 */
	0x00091408, /* Controller 9, led 106, offset 5128 */
	0x000a140c, /* Controller 10, led 106, offset 5132 */
	0x000b1410, /* Controller 11, led 106, offset 5136 */
	0x00001414, /* Controller 0, led 107, offset 5140 */
	0x00011418, /* Controller 1, led 107, offset 5144 */
	0x0002141c, /* Controller 2, led 107, offset 5148 */
	0x00031420, /* Controller 3, led 107, offset 5152 */
	0x00041424, /* Controller 4, led 107, offset 5156 */
	0x00051428, /* Controller 5, led 107, offset 5160 */
	0x0006142c, /* Controller 6, led 107, offset 5164 */
	0x00071430, /* Controller 7, led 107, offset 5168 */
	0x00081434, /* Controller 8, led 107, offset 5172 */
	0x00091438, /* Controller 9, led 107, offset 5176 */
	0x000a143c, /* Controller 10, led 107, offset 5180 */
	0x000b1440, /* Controller 11, led 107, offset 5184 */
	0x00001444, /* Controller 0, led 108, offset 5188 */
	0x00011448, /* Controller 1, led 108, offset 5192 */
	0x0002144c, /* Controller 2, led 108, offset 5196 */
	0x00031450, /* Controller 3, led 108, offset 5200 */
	0x00041454, /* Controller 4, led 108, offset 5204 */
	0x00051458, /* Controller 5, led 108, offset 5208 */
	0x0006145c, /* Controller 6, led 108, offset 5212 */
	0x00071460, /* Controller 7, led 108, offset 5216 */
	0x00081464, /* Controller 8, led 108, offset 5220 */
	0x00091468, /* Controller 9, led 108, offset 5224 */
	0x000a146c, /* Controller 10, led 108, offset 5228 */
	0x000b1470, /* Controller 11, led 108, offset 5232 */
	0x00001474, /* Controller 0, led 109, offset 5236 */
	0x00011478, /* Controller 1, led 109, offset 5240 */
	0x0002147c, /* Controller 2, led 109, offset 5244 */
	0x00031480, /* Controller 3, led 109, offset 5248 */
	0x00041484, /* Controller 4, led 109, offset 5252 */
	0x00051488, /* Controller 5, led 109, offset 5256 */
	0x0006148c, /* Controller 6, led 109, offset 5260 */
	0x00071490, /* Controller 7, led 109, offset 5264 */
	0x00081494, /* Controller 8, led 109, offset 5268 */
	0x00091498, /* Controller 9, led 109, offset 5272 */
	0x000a149c, /* Controller 10, led 109, offset 5276 */
	0x000b14a0, /* Controller 11, led 109, offset 5280 */
	0x000014a4, /* Controller 0, led 110, offset 5284 */
	0x000114a8, /* Controller 1, led 110, offset 5288 */
	0x000214ac, /* Controller 2, led 110, offset 5292 */
	0x000314b0, /* Controller 3, led 110, offset 5296 */
	0x000414b4, /* Controller 4, led 110, offset 5300 */
	0x000514b8, /* Controller 5, led 110, offset 5304 */
	0x000614bc, /* Controller 6, led 110, offset 5308 */
	0x000714c0, /* Controller 7, led 110, offset 5312 */
	0x000814c4, /* Controller 8, led 110, offset 5316 */
	0x000914c8, /* Controller 9, led 110, offset 5320 */
	0x000a14cc, /* Controller 10, led 110, offset 5324 */
	0x000b14d0, /* Controller 11, led 110, offset 5328 */
	0x000014d4, /* Controller 0, led 111, offset 5332 */
	0x000114d8, /* Controller 1, led 111, offset 5336 */
	0x000214dc, /* Controller 2, led 111, offset 5340 */
	0x000314e0, /* Controller 3, led 111, offset 5344 */
	0x000414e4, /* Controller 4, led 111, offset 5348 */
	0x000514e8, /* Controller 5, led 111, offset 5352 */
	0x000614ec, /* Controller 6, led 111, offset 5356 */
	0x000714f0, /* Controller 7, led 111, offset 5360 */
	0x000814f4, /* Controller 8, led 111, offset 5364 */
	0x000914f8, /* Controller 9, led 111, offset 5368 */
	0x000a14fc, /* Controller 10, led 111, offset 5372 */
	0x000b1500, /* Controller 11, led 111, offset 5376 */
	0x00001504, /* Controller 0, led 112, offset 5380 */
	0x00011508, /* Controller 1, led 112, offset 5384 */
	0x0002150c, /* Controller 2, led 112, offset 5388 */
	0x00031510, /* Controller 3, led 112, offset 5392 */
	0x00041514, /* Controller 4, led 112, offset 5396 */
	0x00051518, /* Controller 5, led 112, offset 5400 */
	0x0006151c, /* Controller 6, led 112, offset 5404 */
	0x00071520, /* Controller 7, led 112, offset 5408 */
	0x00081524, /* Controller 8, led 112, offset 5412 */
	0x00091528, /* Controller 9, led 112, offset 5416 */
	0x000a152c, /* Controller 10, led 112, offset 5420 */
	0x000b1530, /* Controller 11, led 112, offset 5424 */
	0x00001534, /* Controller 0, led 113, offset 5428 */
	0x00011538, /* Controller 1, led 113, offset 5432 */
	0x0002153c, /* Controller 2, led 113, offset 5436 */
	0x00031540, /* Controller 3, led 113, offset 5440 */
	0x00041544, /* Controller 4, led 113, offset 5444 */
	0x00051548, /* Controller 5, led 113, offset 5448 */
	0x0006154c, /* Controller 6, led 113, offset 5452 */
	0x00071550, /* Controller 7, led 113, offset 5456 */
	0x00081554, /* Controller 8, led 113, offset 5460 */
	0x00091558, /* Controller 9, led 113, offset 5464 */
	0x000a155c, /* Controller 10, led 113, offset 5468 */
	0x000b1560, /* Controller 11, led 113, offset 5472 */
	0x00001564, /* Controller 0, led 114, offset 5476 */
	0x00011568, /* Controller 1, led 114, offset 5480 */
	0x0002156c, /* Controller 2, led 114, offset 5484 */
	0x00031570, /* Controller 3, led 114, offset 5488 */
	0x00041574, /* Controller 4, led 114, offset 5492 */
	0x00051578, /* Controller 5, led 114, offset 5496 */
	0x0006157c, /* Controller 6, led 114, offset 5500 */
	0x00071580, /* Controller 7, led 114, offset 5504 */
	0x00081584, /* Controller 8, led 114, offset 5508 */
	0x00091588, /* Controller 9, led 114, offset 5512 */
	0x000a158c, /* Controller 10, led 114, offset 5516 */
	0x000b1590, /* Controller 11, led 114, offset 5520 */
	0x00001594, /* Controller 0, led 115, offset 5524 */
	0x00011598, /* Controller 1, led 115, offset 5528 */
	0x0002159c, /* Controller 2, led 115, offset 5532 */
	0x000315a0, /* Controller 3, led 115, offset 5536 */
	0x000415a4, /* Controller 4, led 115, offset 5540 */
	0x000515a8, /* Controller 5, led 115, offset 5544 */
	0x000615ac, /* Controller 6, led 115, offset 5548 */
	0x000715b0, /* Controller 7, led 115, offset 5552 */
	0x000815b4, /* Controller 8, led 115, offset 5556 */
	0x000915b8, /* Controller 9, led 115, offset 5560 */
	0x000a15bc, /* Controller 10, led 115, offset 5564 */
	0x000b15c0, /* Controller 11, led 115, offset 5568 */
	0x000015c4, /* Controller 0, led 116, offset 5572 */
	0x000115c8, /* Controller 1, led 116, offset 5576 */
	0x000215cc, /* Controller 2, led 116, offset 5580 */
	0x000315d0, /* Controller 3, led 116, offset 5584 */
	0x000415d4, /* Controller 4, led 116, offset 5588 */
	0x000515d8, /* Controller 5, led 116, offset 5592 */
	0x000615dc, /* Controller 6, led 116, offset 5596 */
	0x000715e0, /* Controller 7, led 116, offset 5600 */
	0x000815e4, /* Controller 8, led 116, offset 5604 */
	0x000915e8, /* Controller 9, led 116, offset 5608 */
	0x000a15ec, /* Controller 10, led 116, offset 5612 */
	0x000b15f0, /* Controller 11, led 116, offset 5616 */
	0x000015f4, /* Controller 0, led 117, offset 5620 */
	0x000115f8, /* Controller 1, led 117, offset 5624 */
	0x000215fc, /* Controller 2, led 117, offset 5628 */
	0x00031600, /* Controller 3, led 117, offset 5632 */
	0x00041604, /* Controller 4, led 117, offset 5636 */
	0x00051608, /* Controller 5, led 117, offset 5640 */
	0x0006160c, /* Controller 6, led 117, offset 5644 */
	0x00071610, /* Controller 7, led 117, offset 5648 */
	0x00081614, /* Controller 8, led 117, offset 5652 */
	0x00091618, /* Controller 9, led 117, offset 5656 */
	0x000a161c, /* Controller 10, led 117, offset 5660 */
	0x000b1620, /* Controller 11, led 117, offset 5664 */
	0x00001624, /* Controller 0, led 118, offset 5668 */
	0x00011628, /* Controller 1, led 118, offset 5672 */
	0x0002162c, /* Controller 2, led 118, offset 5676 */
	0x00031630, /* Controller 3, led 118, offset 5680 */
	0x00041634, /* Controller 4, led 118, offset 5684 */
	0x00051638, /* Controller 5, led 118, offset 5688 */
	0x0006163c, /* Controller 6, led 118, offset 5692 */
	0x00071640, /* Controller 7, led 118, offset 5696 */
	0x00081644, /* Controller 8, led 118, offset 5700 */
	0x00091648, /* Controller 9, led 118, offset 5704 */
	0x000a164c, /* Controller 10, led 118, offset 5708 */
	0x000b1650, /* Controller 11, led 118, offset 5712 */
	0x00001654, /* Controller 0, led 119, offset 5716 */
	0x00011658, /* Controller 1, led 119, offset 5720 */
	0x0002165c, /* Controller 2, led 119, offset 5724 */
	0x00031660, /* Controller 3, led 119, offset 5728 */
	0x00041664, /* Controller 4, led 119, offset 5732 */
	0x00051668, /* Controller 5, led 119, offset 5736 */
	0x0006166c, /* Controller 6, led 119, offset 5740 */
	0x00071670, /* Controller 7, led 119, offset 5744 */
	0x00081674, /* Controller 8, led 119, offset 5748 */
	0x00091678, /* Controller 9, led 119, offset 5752 */
	0x000a167c, /* Controller 10, led 119, offset 5756 */
	0x000b1680, /* Controller 11, led 119, offset 5760 */
	0x00001684, /* Controller 0, led 120, offset 5764 */
	0x00011688, /* Controller 1, led 120, offset 5768 */
	0x0002168c, /* Controller 2, led 120, offset 5772 */
	0x00031690, /* Controller 3, led 120, offset 5776 */
	0x00041694, /* Controller 4, led 120, offset 5780 */
	0x00051698, /* Controller 5, led 120, offset 5784 */
	0x0006169c, /* Controller 6, led 120, offset 5788 */
	0x000716a0, /* Controller 7, led 120, offset 5792 */
	0x000816a4, /* Controller 8, led 120, offset 5796 */
	0x000916a8, /* Controller 9, led 120, offset 5800 */
	0x000a16ac, /* Controller 10, led 120, offset 5804 */
	0x000b16b0, /* Controller 11, led 120, offset 5808 */
	0x000016b4, /* Controller 0, led 121, offset 5812 */
	0x000116b8, /* Controller 1, led 121, offset 5816 */
	0x000216bc, /* Controller 2, led 121, offset 5820 */
	0x000316c0, /* Controller 3, led 121, offset 5824 */
	0x000416c4, /* Controller 4, led 121, offset 5828 */
	0x000516c8, /* Controller 5, led 121, offset 5832 */
	0x000616cc, /* Controller 6, led 121, offset 5836 */
	0x000716d0, /* Controller 7, led 121, offset 5840 */
	0x000816d4, /* Controller 8, led 121, offset 5844 */
	0x000916d8, /* Controller 9, led 121, offset 5848 */
	0x000a16dc, /* Controller 10, led 121, offset 5852 */
	0x000b16e0, /* Controller 11, led 121, offset 5856 */
	0x000016e4, /* Controller 0, led 122, offset 5860 */
	0x000116e8, /* Controller 1, led 122, offset 5864 */
	0x000216ec, /* Controller 2, led 122, offset 5868 */
	0x000316f0, /* Controller 3, led 122, offset 5872 */
	0x000416f4, /* Controller 4, led 122, offset 5876 */
	0x000516f8, /* Controller 5, led 122, offset 5880 */
	0x000616fc, /* Controller 6, led 122, offset 5884 */
	0x00071700, /* Controller 7, led 122, offset 5888 */
	0x00081704, /* Controller 8, led 122, offset 5892 */
	0x00091708, /* Controller 9, led 122, offset 5896 */
	0x000a170c, /* Controller 10, led 122, offset 5900 */
	0x000b1710, /* Controller 11, led 122, offset 5904 */
	0x00001714, /* Controller 0, led 123, offset 5908 */
	0x00011718, /* Controller 1, led 123, offset 5912 */
	0x0002171c, /* Controller 2, led 123, offset 5916 */
	0x00031720, /* Controller 3, led 123, offset 5920 */
	0x00041724, /* Controller 4, led 123, offset 5924 */
	0x00051728, /* Controller 5, led 123, offset 5928 */
	0x0006172c, /* Controller 6, led 123, offset 5932 */
	0x00071730, /* Controller 7, led 123, offset 5936 */
	0x00081734, /* Controller 8, led 123, offset 5940 */
	0x00091738, /* Controller 9, led 123, offset 5944 */
	0x000a173c, /* Controller 10, led 123, offset 5948 */
	0x000b1740, /* Controller 11, led 123, offset 5952 */
	0x00001744, /* Controller 0, led 124, offset 5956 */
	0x00011748, /* Controller 1, led 124, offset 5960 */
	0x0002174c, /* Controller 2, led 124, offset 5964 */
	0x00031750, /* Controller 3, led 124, offset 5968 */
	0x00041754, /* Controller 4, led 124, offset 5972 */
	0x00051758, /* Controller 5, led 124, offset 5976 */
	0x0006175c, /* Controller 6, led 124, offset 5980 */
	0x00071760, /* Controller 7, led 124, offset 5984 */
	0x00081764, /* Controller 8, led 124, offset 5988 */
	0x00091768, /* Controller 9, led 124, offset 5992 */
	0x000a176c, /* Controller 10, led 124, offset 5996 */
	0x000b1770, /* Controller 11, led 124, offset 6000 */
	0x00001774, /* Controller 0, led 125, offset 6004 */
	0x00011778, /* Controller 1, led 125, offset 6008 */
	0x0002177c, /* Controller 2, led 125, offset 6012 */
	0x00031780, /* Controller 3, led 125, offset 6016 */
	0x00041784, /* Controller 4, led 125, offset 6020 */
	0x00051788, /* Controller 5, led 125, offset 6024 */
	0x0006178c, /* Controller 6, led 125, offset 6028 */
	0x00071790, /* Controller 7, led 125, offset 6032 */
	0x00081794, /* Controller 8, led 125, offset 6036 */
	0x00091798, /* Controller 9, led 125, offset 6040 */
	0x000a179c, /* Controller 10, led 125, offset 6044 */
	0x000b17a0, /* Controller 11, led 125, offset 6048 */
	0x000017a4, /* Controller 0, led 126, offset 6052 */
	0x000117a8, /* Controller 1, led 126, offset 6056 */
	0x000217ac, /* Controller 2, led 126, offset 6060 */
	0x000317b0, /* Controller 3, led 126, offset 6064 */
	0x000417b4, /* Controller 4, led 126, offset 6068 */
	0x000517b8, /* Controller 5, led 126, offset 6072 */
	0x000617bc, /* Controller 6, led 126, offset 6076 */
	0x000717c0, /* Controller 7, led 126, offset 6080 */
	0x000817c4, /* Controller 8, led 126, offset 6084 */
	0x000917c8, /* Controller 9, led 126, offset 6088 */
	0x000a17cc, /* Controller 10, led 126, offset 6092 */
	0x000b17d0, /* Controller 11, led 126, offset 6096 */
	0x000017d4, /* Controller 0, led 127, offset 6100 */
	0x000117d8, /* Controller 1, led 127, offset 6104 */
	0x000217dc, /* Controller 2, led 127, offset 6108 */
	0x000317e0, /* Controller 3, led 127, offset 6112 */
	0x000417e4, /* Controller 4, led 127, offset 6116 */
	0x000517e8, /* Controller 5, led 127, offset 6120 */
	0x000617ec, /* Controller 6, led 127, offset 6124 */
	0x000717f0, /* Controller 7, led 127, offset 6128 */
	0x000817f4, /* Controller 8, led 127, offset 6132 */
	0x000917f8, /* Controller 9, led 127, offset 6136 */
	0x000a17fc, /* Controller 10, led 127, offset 6140 */
	0x000b1800, /* Controller 11, led 127, offset 6144 */
	0x00001804, /* Controller 0, led 128, offset 6148 */
	0x00011808, /* Controller 1, led 128, offset 6152 */
	0x0002180c, /* Controller 2, led 128, offset 6156 */
	0x00031810, /* Controller 3, led 128, offset 6160 */
	0x00041814, /* Controller 4, led 128, offset 6164 */
	0x00051818, /* Controller 5, led 128, offset 6168 */
	0x0006181c, /* Controller 6, led 128, offset 6172 */
	0x00071820, /* Controller 7, led 128, offset 6176 */
	0x00081824, /* Controller 8, led 128, offset 6180 */
	0x00091828, /* Controller 9, led 128, offset 6184 */
	0x000a182c, /* Controller 10, led 128, offset 6188 */
	0x000b1830, /* Controller 11, led 128, offset 6192 */
	0x00001834, /* Controller 0, led 129, offset 6196 */
	0x00011838, /* Controller 1, led 129, offset 6200 */
	0x0002183c, /* Controller 2, led 129, offset 6204 */
	0x00031840, /* Controller 3, led 129, offset 6208 */
	0x00041844, /* Controller 4, led 129, offset 6212 */
	0x00051848, /* Controller 5, led 129, offset 6216 */
	0x0006184c, /* Controller 6, led 129, offset 6220 */
	0x00071850, /* Controller 7, led 129, offset 6224 */
	0x00081854, /* Controller 8, led 129, offset 6228 */
	0x00091858, /* Controller 9, led 129, offset 6232 */
	0x000a185c, /* Controller 10, led 129, offset 6236 */
	0x000b1860, /* Controller 11, led 129, offset 6240 */
	0x00001864, /* Controller 0, led 130, offset 6244 */
	0x00011868, /* Controller 1, led 130, offset 6248 */
	0x0002186c, /* Controller 2, led 130, offset 6252 */
	0x00031870, /* Controller 3, led 130, offset 6256 */
	0x00041874, /* Controller 4, led 130, offset 6260 */
	0x00051878, /* Controller 5, led 130, offset 6264 */
	0x0006187c, /* Controller 6, led 130, offset 6268 */
	0x00071880, /* Controller 7, led 130, offset 6272 */
	0x00081884, /* Controller 8, led 130, offset 6276 */
	0x00091888, /* Controller 9, led 130, offset 6280 */
	0x000a188c, /* Controller 10, led 130, offset 6284 */
	0x000b1890, /* Controller 11, led 130, offset 6288 */
	0x00001894, /* Controller 0, led 131, offset 6292 */
	0x00011898, /* Controller 1, led 131, offset 6296 */
	0x0002189c, /* Controller 2, led 131, offset 6300 */
	0x000318a0, /* Controller 3, led 131, offset 6304 */
	0x000418a4, /* Controller 4, led 131, offset 6308 */
	0x000518a8, /* Controller 5, led 131, offset 6312 */
	0x000618ac, /* Controller 6, led 131, offset 6316 */
	0x000718b0, /* Controller 7, led 131, offset 6320 */
	0x000818b4, /* Controller 8, led 131, offset 6324 */
	0x000918b8, /* Controller 9, led 131, offset 6328 */
	0x000a18bc, /* Controller 10, led 131, offset 6332 */
	0x000b18c0, /* Controller 11, led 131, offset 6336 */
	0x000018c4, /* Controller 0, led 132, offset 6340 */
	0x000118c8, /* Controller 1, led 132, offset 6344 */
	0x000218cc, /* Controller 2, led 132, offset 6348 */
	0x000318d0, /* Controller 3, led 132, offset 6352 */
	0x000418d4, /* Controller 4, led 132, offset 6356 */
	0x000518d8, /* Controller 5, led 132, offset 6360 */
	0x000618dc, /* Controller 6, led 132, offset 6364 */
	0x000718e0, /* Controller 7, led 132, offset 6368 */
	0x000818e4, /* Controller 8, led 132, offset 6372 */
	0x000918e8, /* Controller 9, led 132, offset 6376 */
	0x000a18ec, /* Controller 10, led 132, offset 6380 */
	0x000b18f0, /* Controller 11, led 132, offset 6384 */
	0x000018f4, /* Controller 0, led 133, offset 6388 */
	0x000118f8, /* Controller 1, led 133, offset 6392 */
	0x000218fc, /* Controller 2, led 133, offset 6396 */
	0x00031900, /* Controller 3, led 133, offset 6400 */
	0x00041904, /* Controller 4, led 133, offset 6404 */
	0x00051908, /* Controller 5, led 133, offset 6408 */
	0x0006190c, /* Controller 6, led 133, offset 6412 */
	0x00071910, /* Controller 7, led 133, offset 6416 */
	0x00081914, /* Controller 8, led 133, offset 6420 */
	0x00091918, /* Controller 9, led 133, offset 6424 */
	0x000a191c, /* Controller 10, led 133, offset 6428 */
	0x000b1920, /* Controller 11, led 133, offset 6432 */
	0x00001924, /* Controller 0, led 134, offset 6436 */
	0x00011928, /* Controller 1, led 134, offset 6440 */
	0x0002192c, /* Controller 2, led 134, offset 6444 */
	0x00031930, /* Controller 3, led 134, offset 6448 */
	0x00041934, /* Controller 4, led 134, offset 6452 */
	0x00051938, /* Controller 5, led 134, offset 6456 */
	0x0006193c, /* Controller 6, led 134, offset 6460 */
	0x00071940, /* Controller 7, led 134, offset 6464 */
	0x00081944, /* Controller 8, led 134, offset 6468 */
	0x00091948, /* Controller 9, led 134, offset 6472 */
	0x000a194c, /* Controller 10, led 134, offset 6476 */
	0x000b1950, /* Controller 11, led 134, offset 6480 */
	0x00001954, /* Controller 0, led 135, offset 6484 */
	0x00011958, /* Controller 1, led 135, offset 6488 */
	0x0002195c, /* Controller 2, led 135, offset 6492 */
	0x00031960, /* Controller 3, led 135, offset 6496 */
	0x00041964, /* Controller 4, led 135, offset 6500 */
	0x00051968, /* Controller 5, led 135, offset 6504 */
	0x0006196c, /* Controller 6, led 135, offset 6508 */
	0x00071970, /* Controller 7, led 135, offset 6512 */
	0x00081974, /* Controller 8, led 135, offset 6516 */
	0x00091978, /* Controller 9, led 135, offset 6520 */
	0x000a197c, /* Controller 10, led 135, offset 6524 */
	0x000b1980, /* Controller 11, led 135, offset 6528 */
	0x00001984, /* Controller 0, led 136, offset 6532 */
	0x00011988, /* Controller 1, led 136, offset 6536 */
	0x0002198c, /* Controller 2, led 136, offset 6540 */
	0x00031990, /* Controller 3, led 136, offset 6544 */
	0x00041994, /* Controller 4, led 136, offset 6548 */
	0x00051998, /* Controller 5, led 136, offset 6552 */
	0x0006199c, /* Controller 6, led 136, offset 6556 */
	0x000719a0, /* Controller 7, led 136, offset 6560 */
	0x000819a4, /* Controller 8, led 136, offset 6564 */
	0x000919a8, /* Controller 9, led 136, offset 6568 */
	0x000a19ac, /* Controller 10, led 136, offset 6572 */
	0x000b19b0, /* Controller 11, led 136, offset 6576 */
	0x000019b4, /* Controller 0, led 137, offset 6580 */
	0x000119b8, /* Controller 1, led 137, offset 6584 */
	0x000219bc, /* Controller 2, led 137, offset 6588 */
	0x000319c0, /* Controller 3, led 137, offset 6592 */
	0x000419c4, /* Controller 4, led 137, offset 6596 */
	0x000519c8, /* Controller 5, led 137, offset 6600 */
	0x000619cc, /* Controller 6, led 137, offset 6604 */
	0x000719d0, /* Controller 7, led 137, offset 6608 */
	0x000819d4, /* Controller 8, led 137, offset 6612 */
	0x000919d8, /* Controller 9, led 137, offset 6616 */
	0x000a19dc, /* Controller 10, led 137, offset 6620 */
	0x000b19e0, /* Controller 11, led 137, offset 6624 */
	0x000019e4, /* Controller 0, led 138, offset 6628 */
	0x000119e8, /* Controller 1, led 138, offset 6632 */
	0x000219ec, /* Controller 2, led 138, offset 6636 */
	0x000319f0, /* Controller 3, led 138, offset 6640 */
	0x000419f4, /* Controller 4, led 138, offset 6644 */
	0x000519f8, /* Controller 5, led 138, offset 6648 */
	0x000619fc, /* Controller 6, led 138, offset 6652 */
	0x00071a00, /* Controller 7, led 138, offset 6656 */
	0x00081a04, /* Controller 8, led 138, offset 6660 */
	0x00091a08, /* Controller 9, led 138, offset 6664 */
	0x000a1a0c, /* Controller 10, led 138, offset 6668 */
	0x000b1a10, /* Controller 11, led 138, offset 6672 */
	0x00001a14, /* Controller 0, led 139, offset 6676 */
	0x00011a18, /* Controller 1, led 139, offset 6680 */
	0x00021a1c, /* Controller 2, led 139, offset 6684 */
	0x00031a20, /* Controller 3, led 139, offset 6688 */
	0x00041a24, /* Controller 4, led 139, offset 6692 */
	0x00051a28, /* Controller 5, led 139, offset 6696 */
	0x00061a2c, /* Controller 6, led 139, offset 6700 */
	0x00071a30, /* Controller 7, led 139, offset 6704 */
	0x00081a34, /* Controller 8, led 139, offset 6708 */
	0x00091a38, /* Controller 9, led 139, offset 6712 */
	0x000a1a3c, /* Controller 10, led 139, offset 6716 */
	0x000b1a40, /* Controller 11, led 139, offset 6720 */
	0x00001a44, /* Controller 0, led 140, offset 6724 */
	0x00011a48, /* Controller 1, led 140, offset 6728 */
	0x00021a4c, /* Controller 2, led 140, offset 6732 */
	0x00031a50, /* Controller 3, led 140, offset 6736 */
	0x00041a54, /* Controller 4, led 140, offset 6740 */
	0x00051a58, /* Controller 5, led 140, offset 6744 */
	0x00061a5c, /* Controller 6, led 140, offset 6748 */
	0x00071a60, /* Controller 7, led 140, offset 6752 */
	0x00081a64, /* Controller 8, led 140, offset 6756 */
	0x00091a68, /* Controller 9, led 140, offset 6760 */
	0x000a1a6c, /* Controller 10, led 140, offset 6764 */
	0x000b1a70, /* Controller 11, led 140, offset 6768 */
	0x00001a74, /* Controller 0, led 141, offset 6772 */
	0x00011a78, /* Controller 1, led 141, offset 6776 */
	0x00021a7c, /* Controller 2, led 141, offset 6780 */
	0x00031a80, /* Controller 3, led 141, offset 6784 */
	0x00041a84, /* Controller 4, led 141, offset 6788 */
	0x00051a88, /* Controller 5, led 141, offset 6792 */
	0x00061a8c, /* Controller 6, led 141, offset 6796 */
	0x00071a90, /* Controller 7, led 141, offset 6800 */
	0x00081a94, /* Controller 8, led 141, offset 6804 */
	0x00091a98, /* Controller 9, led 141, offset 6808 */
	0x000a1a9c, /* Controller 10, led 141, offset 6812 */
	0x000b1aa0, /* Controller 11, led 141, offset 6816 */
	0x00001aa4, /* Controller 0, led 142, offset 6820 */
	0x00011aa8, /* Controller 1, led 142, offset 6824 */
	0x00021aac, /* Controller 2, led 142, offset 6828 */
	0x00031ab0, /* Controller 3, led 142, offset 6832 */
	0x00041ab4, /* Controller 4, led 142, offset 6836 */
	0x00051ab8, /* Controller 5, led 142, offset 6840 */
	0x00061abc, /* Controller 6, led 142, offset 6844 */
	0x00071ac0, /* Controller 7, led 142, offset 6848 */
	0x00081ac4, /* Controller 8, led 142, offset 6852 */
	0x00091ac8, /* Controller 9, led 142, offset 6856 */
	0x000a1acc, /* Controller 10, led 142, offset 6860 */
	0x000b1ad0, /* Controller 11, led 142, offset 6864 */
	0x00001ad4, /* Controller 0, led 143, offset 6868 */
	0x00011ad8, /* Controller 1, led 143, offset 6872 */
	0x00021adc, /* Controller 2, led 143, offset 6876 */
	0x00031ae0, /* Controller 3, led 143, offset 6880 */
	0x00041ae4, /* Controller 4, led 143, offset 6884 */
	0x00051ae8, /* Controller 5, led 143, offset 6888 */
	0x00061aec, /* Controller 6, led 143, offset 6892 */
	0x00071af0, /* Controller 7, led 143, offset 6896 */
	0x00081af4, /* Controller 8, led 143, offset 6900 */
	0x00091af8, /* Controller 9, led 143, offset 6904 */
	0x000a1afc, /* Controller 10, led 143, offset 6908 */
	0x000b1b00, /* Controller 11, led 143, offset 6912 */
	0x00001b04, /* Controller 0, led 144, offset 6916 */
	0x00011b08, /* Controller 1, led 144, offset 6920 */
	0x00021b0c, /* Controller 2, led 144, offset 6924 */
	0x00031b10, /* Controller 3, led 144, offset 6928 */
	0x00041b14, /* Controller 4, led 144, offset 6932 */
	0x00051b18, /* Controller 5, led 144, offset 6936 */
	0x00061b1c, /* Controller 6, led 144, offset 6940 */
	0x00071b20, /* Controller 7, led 144, offset 6944 */
	0x00081b24, /* Controller 8, led 144, offset 6948 */
	0x00091b28, /* Controller 9, led 144, offset 6952 */
	0x000a1b2c, /* Controller 10, led 144, offset 6956 */
	0x000b1b30, /* Controller 11, led 144, offset 6960 */
	0x00001b34, /* Controller 0, led 145, offset 6964 */
	0x00011b38, /* Controller 1, led 145, offset 6968 */
	0x00021b3c, /* Controller 2, led 145, offset 6972 */
	0x00031b40, /* Controller 3, led 145, offset 6976 */
	0x00041b44, /* Controller 4, led 145, offset 6980 */
	0x00051b48, /* Controller 5, led 145, offset 6984 */
	0x00061b4c, /* Controller 6, led 145, offset 6988 */
	0x00071b50, /* Controller 7, led 145, offset 6992 */
	0x00081b54, /* Controller 8, led 145, offset 6996 */
	0x00091b58, /* Controller 9, led 145, offset 7000 */
	0x000a1b5c, /* Controller 10, led 145, offset 7004 */
	0x000b1b60, /* Controller 11, led 145, offset 7008 */
	0x00001b64, /* Controller 0, led 146, offset 7012 */
	0x00011b68, /* Controller 1, led 146, offset 7016 */
	0x00021b6c, /* Controller 2, led 146, offset 7020 */
	0x00031b70, /* Controller 3, led 146, offset 7024 */
	0x00041b74, /* Controller 4, led 146, offset 7028 */
	0x00051b78, /* Controller 5, led 146, offset 7032 */
	0x00061b7c, /* Controller 6, led 146, offset 7036 */
	0x00071b80, /* Controller 7, led 146, offset 7040 */
	0x00081b84, /* Controller 8, led 146, offset 7044 */
	0x00091b88, /* Controller 9, led 146, offset 7048 */
	0x000a1b8c, /* Controller 10, led 146, offset 7052 */
	0x000b1b90, /* Controller 11, led 146, offset 7056 */
	0x00001b94, /* Controller 0, led 147, offset 7060 */
	0x00011b98, /* Controller 1, led 147, offset 7064 */
	0x00021b9c, /* Controller 2, led 147, offset 7068 */
	0x00031ba0, /* Controller 3, led 147, offset 7072 */
	0x00041ba4, /* Controller 4, led 147, offset 7076 */
	0x00051ba8, /* Controller 5, led 147, offset 7080 */
	0x00061bac, /* Controller 6, led 147, offset 7084 */
	0x00071bb0, /* Controller 7, led 147, offset 7088 */
	0x00081bb4, /* Controller 8, led 147, offset 7092 */
	0x00091bb8, /* Controller 9, led 147, offset 7096 */
	0x000a1bbc, /* Controller 10, led 147, offset 7100 */
	0x000b1bc0, /* Controller 11, led 147, offset 7104 */
	0x00001bc4, /* Controller 0, led 148, offset 7108 */
	0x00011bc8, /* Controller 1, led 148, offset 7112 */
	0x00021bcc, /* Controller 2, led 148, offset 7116 */
	0x00031bd0, /* Controller 3, led 148, offset 7120 */
	0x00041bd4, /* Controller 4, led 148, offset 7124 */
	0x00051bd8, /* Controller 5, led 148, offset 7128 */
	0x00061bdc, /* Controller 6, led 148, offset 7132 */
	0x00071be0, /* Controller 7, led 148, offset 7136 */
	0x00081be4, /* Controller 8, led 148, offset 7140 */
	0x00091be8, /* Controller 9, led 148, offset 7144 */
	0x000a1bec, /* Controller 10, led 148, offset 7148 */
	0x000b1bf0, /* Controller 11, led 148, offset 7152 */
	0x00001bf4, /* Controller 0, led 149, offset 7156 */
	0x00011bf8, /* Controller 1, led 149, offset 7160 */
	0x00021bfc, /* Controller 2, led 149, offset 7164 */
	0x00031c00, /* Controller 3, led 149, offset 7168 */
	0x00041c04, /* Controller 4, led 149, offset 7172 */
	0x00051c08, /* Controller 5, led 149, offset 7176 */
	0x00061c0c, /* Controller 6, led 149, offset 7180 */
	0x00071c10, /* Controller 7, led 149, offset 7184 */
	0x00081c14, /* Controller 8, led 149, offset 7188 */
	0x00091c18, /* Controller 9, led 149, offset 7192 */
	0x000a1c1c, /* Controller 10, led 149, offset 7196 */
	0x000b1c20, /* Controller 11, led 149, offset 7200 */
	0x00001c24, /* Controller 0, led 150, offset 7204 */
	0x00011c28, /* Controller 1, led 150, offset 7208 */
	0x00021c2c, /* Controller 2, led 150, offset 7212 */
	0x00031c30, /* Controller 3, led 150, offset 7216 */
	0x00041c34, /* Controller 4, led 150, offset 7220 */
	0x00051c38, /* Controller 5, led 150, offset 7224 */
	0x00061c3c, /* Controller 6, led 150, offset 7228 */
	0x00071c40, /* Controller 7, led 150, offset 7232 */
	0x00081c44, /* Controller 8, led 150, offset 7236 */
	0x00091c48, /* Controller 9, led 150, offset 7240 */
	0x000a1c4c, /* Controller 10, led 150, offset 7244 */
	0x000b1c50, /* Controller 11, led 150, offset 7248 */
	0x00001c54, /* Controller 0, led 151, offset 7252 */
	0x00011c58, /* Controller 1, led 151, offset 7256 */
	0x00021c5c, /* Controller 2, led 151, offset 7260 */
	0x00031c60, /* Controller 3, led 151, offset 7264 */
	0x00041c64, /* Controller 4, led 151, offset 7268 */
	0x00051c68, /* Controller 5, led 151, offset 7272 */
	0x00061c6c, /* Controller 6, led 151, offset 7276 */
	0x00071c70, /* Controller 7, led 151, offset 7280 */
	0x00081c74, /* Controller 8, led 151, offset 7284 */
	0x00091c78, /* Controller 9, led 151, offset 7288 */
	0x000a1c7c, /* Controller 10, led 151, offset 7292 */
	0x000b1c80, /* Controller 11, led 151, offset 7296 */
	0x00001c84, /* Controller 0, led 152, offset 7300 */
	0x00011c88, /* Controller 1, led 152, offset 7304 */
	0x00021c8c, /* Controller 2, led 152, offset 7308 */
	0x00031c90, /* Controller 3, led 152, offset 7312 */
	0x00041c94, /* Controller 4, led 152, offset 7316 */
	0x00051c98, /* Controller 5, led 152, offset 7320 */
	0x00061c9c, /* Controller 6, led 152, offset 7324 */
	0x00071ca0, /* Controller 7, led 152, offset 7328 */
	0x00081ca4, /* Controller 8, led 152, offset 7332 */
	0x00091ca8, /* Controller 9, led 152, offset 7336 */
	0x000a1cac, /* Controller 10, led 152, offset 7340 */
	0x000b1cb0, /* Controller 11, led 152, offset 7344 */
	0x00001cb4, /* Controller 0, led 153, offset 7348 */
	0x00011cb8, /* Controller 1, led 153, offset 7352 */
	0x00021cbc, /* Controller 2, led 153, offset 7356 */
	0x00031cc0, /* Controller 3, led 153, offset 7360 */
	0x00041cc4, /* Controller 4, led 153, offset 7364 */
	0x00051cc8, /* Controller 5, led 153, offset 7368 */
	0x00061ccc, /* Controller 6, led 153, offset 7372 */
	0x00071cd0, /* Controller 7, led 153, offset 7376 */
	0x00081cd4, /* Controller 8, led 153, offset 7380 */
	0x00091cd8, /* Controller 9, led 153, offset 7384 */
	0x000a1cdc, /* Controller 10, led 153, offset 7388 */
	0x000b1ce0, /* Controller 11, led 153, offset 7392 */
	0x00001ce4, /* Controller 0, led 154, offset 7396 */
	0x00011ce8, /* Controller 1, led 154, offset 7400 */
	0x00021cec, /* Controller 2, led 154, offset 7404 */
	0x00031cf0, /* Controller 3, led 154, offset 7408 */
	0x00041cf4, /* Controller 4, led 154, offset 7412 */
	0x00051cf8, /* Controller 5, led 154, offset 7416 */
	0x00061cfc, /* Controller 6, led 154, offset 7420 */
	0x00071d00, /* Controller 7, led 154, offset 7424 */
	0x00081d04, /* Controller 8, led 154, offset 7428 */
	0x00091d08, /* Controller 9, led 154, offset 7432 */
	0x000a1d0c, /* Controller 10, led 154, offset 7436 */
	0x000b1d10, /* Controller 11, led 154, offset 7440 */
	0x00001d14, /* Controller 0, led 155, offset 7444 */
	0x00011d18, /* Controller 1, led 155, offset 7448 */
	0x00021d1c, /* Controller 2, led 155, offset 7452 */
	0x00031d20, /* Controller 3, led 155, offset 7456 */
	0x00041d24, /* Controller 4, led 155, offset 7460 */
	0x00051d28, /* Controller 5, led 155, offset 7464 */
	0x00061d2c, /* Controller 6, led 155, offset 7468 */
	0x00071d30, /* Controller 7, led 155, offset 7472 */
	0x00081d34, /* Controller 8, led 155, offset 7476 */
	0x00091d38, /* Controller 9, led 155, offset 7480 */
	0x000a1d3c, /* Controller 10, led 155, offset 7484 */
	0x000b1d40, /* Controller 11, led 155, offset 7488 */
	0x00001d44, /* Controller 0, led 156, offset 7492 */
	0x00011d48, /* Controller 1, led 156, offset 7496 */
	0x00021d4c, /* Controller 2, led 156, offset 7500 */
	0x00031d50, /* Controller 3, led 156, offset 7504 */
	0x00041d54, /* Controller 4, led 156, offset 7508 */
	0x00051d58, /* Controller 5, led 156, offset 7512 */
	0x00061d5c, /* Controller 6, led 156, offset 7516 */
	0x00071d60, /* Controller 7, led 156, offset 7520 */
	0x00081d64, /* Controller 8, led 156, offset 7524 */
	0x00091d68, /* Controller 9, led 156, offset 7528 */
	0x000a1d6c, /* Controller 10, led 156, offset 7532 */
	0x000b1d70, /* Controller 11, led 156, offset 7536 */
	0x00001d74, /* Controller 0, led 157, offset 7540 */
	0x00011d78, /* Controller 1, led 157, offset 7544 */
	0x00021d7c, /* Controller 2, led 157, offset 7548 */
	0x00031d80, /* Controller 3, led 157, offset 7552 */
	0x00041d84, /* Controller 4, led 157, offset 7556 */
	0x00051d88, /* Controller 5, led 157, offset 7560 */
	0x00061d8c, /* Controller 6, led 157, offset 7564 */
	0x00071d90, /* Controller 7, led 157, offset 7568 */
	0x00081d94, /* Controller 8, led 157, offset 7572 */
	0x00091d98, /* Controller 9, led 157, offset 7576 */
	0x000a1d9c, /* Controller 10, led 157, offset 7580 */
	0x000b1da0, /* Controller 11, led 157, offset 7584 */
	0x00001da4, /* Controller 0, led 158, offset 7588 */
	0x00011da8, /* Controller 1, led 158, offset 7592 */
	0x00021dac, /* Controller 2, led 158, offset 7596 */
	0x00031db0, /* Controller 3, led 158, offset 7600 */
	0x00041db4, /* Controller 4, led 158, offset 7604 */
	0x00051db8, /* Controller 5, led 158, offset 7608 */
	0x00061dbc, /* Controller 6, led 158, offset 7612 */
	0x00071dc0, /* Controller 7, led 158, offset 7616 */
	0x00081dc4, /* Controller 8, led 158, offset 7620 */
	0x00091dc8, /* Controller 9, led 158, offset 7624 */
	0x000a1dcc, /* Controller 10, led 158, offset 7628 */
	0x000b1dd0, /* Controller 11, led 158, offset 7632 */
	0x00001dd4, /* Controller 0, led 159, offset 7636 */
	0x00011dd8, /* Controller 1, led 159, offset 7640 */
	0x00021ddc, /* Controller 2, led 159, offset 7644 */
	0x00031de0, /* Controller 3, led 159, offset 7648 */
	0x00041de4, /* Controller 4, led 159, offset 7652 */
	0x00051de8, /* Controller 5, led 159, offset 7656 */
	0x00061dec, /* Controller 6, led 159, offset 7660 */
	0x00071df0, /* Controller 7, led 159, offset 7664 */
	0x00081df4, /* Controller 8, led 159, offset 7668 */
	0x00091df8, /* Controller 9, led 159, offset 7672 */
	0x000a1dfc, /* Controller 10, led 159, offset 7676 */
	0x000b1e00, /* Controller 11, led 159, offset 7680 */
	0x00001e04, /* Controller 0, led 160, offset 7684 */
	0x00011e08, /* Controller 1, led 160, offset 7688 */
	0x00021e0c, /* Controller 2, led 160, offset 7692 */
	0x00031e10, /* Controller 3, led 160, offset 7696 */
	0x00041e14, /* Controller 4, led 160, offset 7700 */
	0x00051e18, /* Controller 5, led 160, offset 7704 */
	0x00061e1c, /* Controller 6, led 160, offset 7708 */
	0x00071e20, /* Controller 7, led 160, offset 7712 */
	0x00081e24, /* Controller 8, led 160, offset 7716 */
	0x00091e28, /* Controller 9, led 160, offset 7720 */
	0x000a1e2c, /* Controller 10, led 160, offset 7724 */
	0x000b1e30, /* Controller 11, led 160, offset 7728 */
	0x00001e34, /* Controller 0, led 161, offset 7732 */
	0x00011e38, /* Controller 1, led 161, offset 7736 */
	0x00021e3c, /* Controller 2, led 161, offset 7740 */
	0x00031e40, /* Controller 3, led 161, offset 7744 */
	0x00041e44, /* Controller 4, led 161, offset 7748 */
	0x00051e48, /* Controller 5, led 161, offset 7752 */
	0x00061e4c, /* Controller 6, led 161, offset 7756 */
	0x00071e50, /* Controller 7, led 161, offset 7760 */
	0x00081e54, /* Controller 8, led 161, offset 7764 */
	0x00091e58, /* Controller 9, led 161, offset 7768 */
	0x000a1e5c, /* Controller 10, led 161, offset 7772 */
	0x000b1e60, /* Controller 11, led 161, offset 7776 */
	0x00001e64, /* Controller 0, led 162, offset 7780 */
	0x00011e68, /* Controller 1, led 162, offset 7784 */
	0x00021e6c, /* Controller 2, led 162, offset 7788 */
	0x00031e70, /* Controller 3, led 162, offset 7792 */
	0x00041e74, /* Controller 4, led 162, offset 7796 */
	0x00051e78, /* Controller 5, led 162, offset 7800 */
	0x00061e7c, /* Controller 6, led 162, offset 7804 */
	0x00071e80, /* Controller 7, led 162, offset 7808 */
	0x00081e84, /* Controller 8, led 162, offset 7812 */
	0x00091e88, /* Controller 9, led 162, offset 7816 */
	0x000a1e8c, /* Controller 10, led 162, offset 7820 */
	0x000b1e90, /* Controller 11, led 162, offset 7824 */
	0x00001e94, /* Controller 0, led 163, offset 7828 */
	0x00011e98, /* Controller 1, led 163, offset 7832 */
	0x00021e9c, /* Controller 2, led 163, offset 7836 */
	0x00031ea0, /* Controller 3, led 163, offset 7840 */
	0x00041ea4, /* Controller 4, led 163, offset 7844 */
	0x00051ea8, /* Controller 5, led 163, offset 7848 */
	0x00061eac, /* Controller 6, led 163, offset 7852 */
	0x00071eb0, /* Controller 7, led 163, offset 7856 */
	0x00081eb4, /* Controller 8, led 163, offset 7860 */
	0x00091eb8, /* Controller 9, led 163, offset 7864 */
	0x000a1ebc, /* Controller 10, led 163, offset 7868 */
	0x000b1ec0, /* Controller 11, led 163, offset 7872 */
	0x00001ec4, /* Controller 0, led 164, offset 7876 */
	0x00011ec8, /* Controller 1, led 164, offset 7880 */
	0x00021ecc, /* Controller 2, led 164, offset 7884 */
	0x00031ed0, /* Controller 3, led 164, offset 7888 */
	0x00041ed4, /* Controller 4, led 164, offset 7892 */
	0x00051ed8, /* Controller 5, led 164, offset 7896 */
	0x00061edc, /* Controller 6, led 164, offset 7900 */
	0x00071ee0, /* Controller 7, led 164, offset 7904 */
	0x00081ee4, /* Controller 8, led 164, offset 7908 */
	0x00091ee8, /* Controller 9, led 164, offset 7912 */
	0x000a1eec, /* Controller 10, led 164, offset 7916 */
	0x000b1ef0, /* Controller 11, led 164, offset 7920 */
	0x00001ef4, /* Controller 0, led 165, offset 7924 */
	0x00011ef8, /* Controller 1, led 165, offset 7928 */
	0x00021efc, /* Controller 2, led 165, offset 7932 */
	0x00031f00, /* Controller 3, led 165, offset 7936 */
	0x00041f04, /* Controller 4, led 165, offset 7940 */
	0x00051f08, /* Controller 5, led 165, offset 7944 */
	0x00061f0c, /* Controller 6, led 165, offset 7948 */
	0x00071f10, /* Controller 7, led 165, offset 7952 */
	0x00081f14, /* Controller 8, led 165, offset 7956 */
	0x00091f18, /* Controller 9, led 165, offset 7960 */
	0x000a1f1c, /* Controller 10, led 165, offset 7964 */
	0x000b1f20, /* Controller 11, led 165, offset 7968 */
	0x00001f24, /* Controller 0, led 166, offset 7972 */
	0x00011f28, /* Controller 1, led 166, offset 7976 */
	0x00021f2c, /* Controller 2, led 166, offset 7980 */
	0x00031f30, /* Controller 3, led 166, offset 7984 */
	0x00041f34, /* Controller 4, led 166, offset 7988 */
	0x00051f38, /* Controller 5, led 166, offset 7992 */
	0x00061f3c, /* Controller 6, led 166, offset 7996 */
	0x00071f40, /* Controller 7, led 166, offset 8000 */
	0x00081f44, /* Controller 8, led 166, offset 8004 */
	0x00091f48, /* Controller 9, led 166, offset 8008 */
	0x000a1f4c, /* Controller 10, led 166, offset 8012 */
	0x000b1f50, /* Controller 11, led 166, offset 8016 */
	0x00001f54, /* Controller 0, led 167, offset 8020 */
	0x00011f58, /* Controller 1, led 167, offset 8024 */
	0x00021f5c, /* Controller 2, led 167, offset 8028 */
	0x00031f60, /* Controller 3, led 167, offset 8032 */
	0x00041f64, /* Controller 4, led 167, offset 8036 */
	0x00051f68, /* Controller 5, led 167, offset 8040 */
	0x00061f6c, /* Controller 6, led 167, offset 8044 */
	0x00071f70, /* Controller 7, led 167, offset 8048 */
	0x00081f74, /* Controller 8, led 167, offset 8052 */
	0x00091f78, /* Controller 9, led 167, offset 8056 */
	0x000a1f7c, /* Controller 10, led 167, offset 8060 */
	0x000b1f80, /* Controller 11, led 167, offset 8064 */
	0x00001f84, /* Controller 0, led 168, offset 8068 */
	0x00011f88, /* Controller 1, led 168, offset 8072 */
	0x00021f8c, /* Controller 2, led 168, offset 8076 */
	0x00031f90, /* Controller 3, led 168, offset 8080 */
	0x00041f94, /* Controller 4, led 168, offset 8084 */
	0x00051f98, /* Controller 5, led 168, offset 8088 */
	0x00061f9c, /* Controller 6, led 168, offset 8092 */
	0x00071fa0, /* Controller 7, led 168, offset 8096 */
	0x00081fa4, /* Controller 8, led 168, offset 8100 */
	0x00091fa8, /* Controller 9, led 168, offset 8104 */
	0x000a1fac, /* Controller 10, led 168, offset 8108 */
	0x000b1fb0, /* Controller 11, led 168, offset 8112 */
	0x00001fb4, /* Controller 0, led 169, offset 8116 */
	0x00011fb8, /* Controller 1, led 169, offset 8120 */
	0x00021fbc, /* Controller 2, led 169, offset 8124 */
	0x00031fc0, /* Controller 3, led 169, offset 8128 */
	0x00041fc4, /* Controller 4, led 169, offset 8132 */
	0x00051fc8, /* Controller 5, led 169, offset 8136 */
	0x00061fcc, /* Controller 6, led 169, offset 8140 */
	0x00071fd0, /* Controller 7, led 169, offset 8144 */
	0x00081fd4, /* Controller 8, led 169, offset 8148 */
	0x00091fd8, /* Controller 9, led 169, offset 8152 */
	0x000a1fdc, /* Controller 10, led 169, offset 8156 */
	0x000b1fe0, /* Controller 11, led 169, offset 8160 */
	0x00001fe4, /* Controller 0, led 170, offset 8164 */
	0x00011fe8, /* Controller 1, led 170, offset 8168 */
	0x00021fec, /* Controller 2, led 170, offset 8172 */
	0x00031ff0, /* Controller 3, led 170, offset 8176 */
	0x00041ff4, /* Controller 4, led 170, offset 8180 */
	0x00051ff8, /* Controller 5, led 170, offset 8184 */
	0x00061ffc, /* Controller 6, led 170, offset 8188 */
	0x00072000, /* Controller 7, led 170, offset 8192 */
	0x00082004, /* Controller 8, led 170, offset 8196 */
	0x00092008, /* Controller 9, led 170, offset 8200 */
	0x000a200c, /* Controller 10, led 170, offset 8204 */
	0x000b2010, /* Controller 11, led 170, offset 8208 */
	0x00002014, /* Controller 0, led 171, offset 8212 */
	0x00012018, /* Controller 1, led 171, offset 8216 */
	0x0002201c, /* Controller 2, led 171, offset 8220 */
	0x00032020, /* Controller 3, led 171, offset 8224 */
	0x00042024, /* Controller 4, led 171, offset 8228 */
	0x00052028, /* Controller 5, led 171, offset 8232 */
	0x0006202c, /* Controller 6, led 171, offset 8236 */
	0x00072030, /* Controller 7, led 171, offset 8240 */
	0x00082034, /* Controller 8, led 171, offset 8244 */
	0x00092038, /* Controller 9, led 171, offset 8248 */
	0x000a203c, /* Controller 10, led 171, offset 8252 */
	0x000b2040, /* Controller 11, led 171, offset 8256 */
	0x00002044, /* Controller 0, led 172, offset 8260 */
	0x00012048, /* Controller 1, led 172, offset 8264 */
	0x0002204c, /* Controller 2, led 172, offset 8268 */
	0x00032050, /* Controller 3, led 172, offset 8272 */
	0x00042054, /* Controller 4, led 172, offset 8276 */
	0x00052058, /* Controller 5, led 172, offset 8280 */
	0x0006205c, /* Controller 6, led 172, offset 8284 */
	0x00072060, /* Controller 7, led 172, offset 8288 */
	0x00082064, /* Controller 8, led 172, offset 8292 */
	0x00092068, /* Controller 9, led 172, offset 8296 */
	0x000a206c, /* Controller 10, led 172, offset 8300 */
	0x000b2070, /* Controller 11, led 172, offset 8304 */
	0x00002074, /* Controller 0, led 173, offset 8308 */
	0x00012078, /* Controller 1, led 173, offset 8312 */
	0x0002207c, /* Controller 2, led 173, offset 8316 */
	0x00032080, /* Controller 3, led 173, offset 8320 */
	0x00042084, /* Controller 4, led 173, offset 8324 */
	0x00052088, /* Controller 5, led 173, offset 8328 */
	0x0006208c, /* Controller 6, led 173, offset 8332 */
	0x00072090, /* Controller 7, led 173, offset 8336 */
	0x00082094, /* Controller 8, led 173, offset 8340 */
	0x00092098, /* Controller 9, led 173, offset 8344 */
	0x000a209c, /* Controller 10, led 173, offset 8348 */
	0x000b20a0, /* Controller 11, led 173, offset 8352 */
	0x000020a4, /* Controller 0, led 174, offset 8356 */
	0x000120a8, /* Controller 1, led 174, offset 8360 */
	0x000220ac, /* Controller 2, led 174, offset 8364 */
	0x000320b0, /* Controller 3, led 174, offset 8368 */
	0x000420b4, /* Controller 4, led 174, offset 8372 */
	0x000520b8, /* Controller 5, led 174, offset 8376 */
	0x000620bc, /* Controller 6, led 174, offset 8380 */
	0x000720c0, /* Controller 7, led 174, offset 8384 */
	0x000820c4, /* Controller 8, led 174, offset 8388 */
	0x000920c8, /* Controller 9, led 174, offset 8392 */
	0x000a20cc, /* Controller 10, led 174, offset 8396 */
	0x000b20d0, /* Controller 11, led 174, offset 8400 */
	0x000020d4, /* Controller 0, led 175, offset 8404 */
	0x000120d8, /* Controller 1, led 175, offset 8408 */
	0x000220dc, /* Controller 2, led 175, offset 8412 */
	0x000320e0, /* Controller 3, led 175, offset 8416 */
	0x000420e4, /* Controller 4, led 175, offset 8420 */
	0x000520e8, /* Controller 5, led 175, offset 8424 */
	0x000620ec, /* Controller 6, led 175, offset 8428 */
	0x000720f0, /* Controller 7, led 175, offset 8432 */
	0x000820f4, /* Controller 8, led 175, offset 8436 */
	0x000920f8, /* Controller 9, led 175, offset 8440 */
	0x000a20fc, /* Controller 10, led 175, offset 8444 */
	0x000b2100, /* Controller 11, led 175, offset 8448 */
	0x00002104, /* Controller 0, led 176, offset 8452 */
	0x00012108, /* Controller 1, led 176, offset 8456 */
	0x0002210c, /* Controller 2, led 176, offset 8460 */
	0x00032110, /* Controller 3, led 176, offset 8464 */
	0x00042114, /* Controller 4, led 176, offset 8468 */
	0x00052118, /* Controller 5, led 176, offset 8472 */
	0x0006211c, /* Controller 6, led 176, offset 8476 */
	0x00072120, /* Controller 7, led 176, offset 8480 */
	0x00082124, /* Controller 8, led 176, offset 8484 */
	0x00092128, /* Controller 9, led 176, offset 8488 */
	0x000a212c, /* Controller 10, led 176, offset 8492 */
	0x000b2130, /* Controller 11, led 176, offset 8496 */
	0x00002134, /* Controller 0, led 177, offset 8500 */
	0x00012138, /* Controller 1, led 177, offset 8504 */
	0x0002213c, /* Controller 2, led 177, offset 8508 */
	0x00032140, /* Controller 3, led 177, offset 8512 */
	0x00042144, /* Controller 4, led 177, offset 8516 */
	0x00052148, /* Controller 5, led 177, offset 8520 */
	0x0006214c, /* Controller 6, led 177, offset 8524 */
	0x00072150, /* Controller 7, led 177, offset 8528 */
	0x00082154, /* Controller 8, led 177, offset 8532 */
	0x00092158, /* Controller 9, led 177, offset 8536 */
	0x000a215c, /* Controller 10, led 177, offset 8540 */
	0x000b2160, /* Controller 11, led 177, offset 8544 */
	0x00002164, /* Controller 0, led 178, offset 8548 */
	0x00012168, /* Controller 1, led 178, offset 8552 */
	0x0002216c, /* Controller 2, led 178, offset 8556 */
	0x00032170, /* Controller 3, led 178, offset 8560 */
	0x00042174, /* Controller 4, led 178, offset 8564 */
	0x00052178, /* Controller 5, led 178, offset 8568 */
	0x0006217c, /* Controller 6, led 178, offset 8572 */
	0x00072180, /* Controller 7, led 178, offset 8576 */
	0x00082184, /* Controller 8, led 178, offset 8580 */
	0x00092188, /* Controller 9, led 178, offset 8584 */
	0x000a218c, /* Controller 10, led 178, offset 8588 */
	0x000b2190, /* Controller 11, led 178, offset 8592 */
	0x00002194, /* Controller 0, led 179, offset 8596 */
	0x00012198, /* Controller 1, led 179, offset 8600 */
	0x0002219c, /* Controller 2, led 179, offset 8604 */
	0x000321a0, /* Controller 3, led 179, offset 8608 */
	0x000421a4, /* Controller 4, led 179, offset 8612 */
	0x000521a8, /* Controller 5, led 179, offset 8616 */
	0x000621ac, /* Controller 6, led 179, offset 8620 */
	0x000721b0, /* Controller 7, led 179, offset 8624 */
	0x000821b4, /* Controller 8, led 179, offset 8628 */
	0x000921b8, /* Controller 9, led 179, offset 8632 */
	0x000a21bc, /* Controller 10, led 179, offset 8636 */
	0x000b21c0, /* Controller 11, led 179, offset 8640 */
	0x000021c4, /* Controller 0, led 180, offset 8644 */
	0x000121c8, /* Controller 1, led 180, offset 8648 */
	0x000221cc, /* Controller 2, led 180, offset 8652 */
	0x000321d0, /* Controller 3, led 180, offset 8656 */
	0x000421d4, /* Controller 4, led 180, offset 8660 */
	0x000521d8, /* Controller 5, led 180, offset 8664 */
	0x000621dc, /* Controller 6, led 180, offset 8668 */
	0x000721e0, /* Controller 7, led 180, offset 8672 */
	0x000821e4, /* Controller 8, led 180, offset 8676 */
	0x000921e8, /* Controller 9, led 180, offset 8680 */
	0x000a21ec, /* Controller 10, led 180, offset 8684 */
	0x000b21f0, /* Controller 11, led 180, offset 8688 */
	0x000021f4, /* Controller 0, led 181, offset 8692 */
	0x000121f8, /* Controller 1, led 181, offset 8696 */
	0x000221fc, /* Controller 2, led 181, offset 8700 */
	0x00032200, /* Controller 3, led 181, offset 8704 */
	0x00042204, /* Controller 4, led 181, offset 8708 */
	0x00052208, /* Controller 5, led 181, offset 8712 */
	0x0006220c, /* Controller 6, led 181, offset 8716 */
	0x00072210, /* Controller 7, led 181, offset 8720 */
	0x00082214, /* Controller 8, led 181, offset 8724 */
	0x00092218, /* Controller 9, led 181, offset 8728 */
	0x000a221c, /* Controller 10, led 181, offset 8732 */
	0x000b2220, /* Controller 11, led 181, offset 8736 */
	0x00002224, /* Controller 0, led 182, offset 8740 */
	0x00012228, /* Controller 1, led 182, offset 8744 */
	0x0002222c, /* Controller 2, led 182, offset 8748 */
	0x00032230, /* Controller 3, led 182, offset 8752 */
	0x00042234, /* Controller 4, led 182, offset 8756 */
	0x00052238, /* Controller 5, led 182, offset 8760 */
	0x0006223c, /* Controller 6, led 182, offset 8764 */
	0x00072240, /* Controller 7, led 182, offset 8768 */
	0x00082244, /* Controller 8, led 182, offset 8772 */
	0x00092248, /* Controller 9, led 182, offset 8776 */
	0x000a224c, /* Controller 10, led 182, offset 8780 */
	0x000b2250, /* Controller 11, led 182, offset 8784 */
	0x00002254, /* Controller 0, led 183, offset 8788 */
	0x00012258, /* Controller 1, led 183, offset 8792 */
	0x0002225c, /* Controller 2, led 183, offset 8796 */
	0x00032260, /* Controller 3, led 183, offset 8800 */
	0x00042264, /* Controller 4, led 183, offset 8804 */
	0x00052268, /* Controller 5, led 183, offset 8808 */
	0x0006226c, /* Controller 6, led 183, offset 8812 */
	0x00072270, /* Controller 7, led 183, offset 8816 */
	0x00082274, /* Controller 8, led 183, offset 8820 */
	0x00092278, /* Controller 9, led 183, offset 8824 */
	0x000a227c, /* Controller 10, led 183, offset 8828 */
	0x000b2280, /* Controller 11, led 183, offset 8832 */
	0x00002284, /* Controller 0, led 184, offset 8836 */
	0x00012288, /* Controller 1, led 184, offset 8840 */
	0x0002228c, /* Controller 2, led 184, offset 8844 */
	0x00032290, /* Controller 3, led 184, offset 8848 */
	0x00042294, /* Controller 4, led 184, offset 8852 */
	0x00052298, /* Controller 5, led 184, offset 8856 */
	0x0006229c, /* Controller 6, led 184, offset 8860 */
	0x000722a0, /* Controller 7, led 184, offset 8864 */
	0x000822a4, /* Controller 8, led 184, offset 8868 */
	0x000922a8, /* Controller 9, led 184, offset 8872 */
	0x000a22ac, /* Controller 10, led 184, offset 8876 */
	0x000b22b0, /* Controller 11, led 184, offset 8880 */
	0x000022b4, /* Controller 0, led 185, offset 8884 */
	0x000122b8, /* Controller 1, led 185, offset 8888 */
	0x000222bc, /* Controller 2, led 185, offset 8892 */
	0x000322c0, /* Controller 3, led 185, offset 8896 */
	0x000422c4, /* Controller 4, led 185, offset 8900 */
	0x000522c8, /* Controller 5, led 185, offset 8904 */
	0x000622cc, /* Controller 6, led 185, offset 8908 */
	0x000722d0, /* Controller 7, led 185, offset 8912 */
	0x000822d4, /* Controller 8, led 185, offset 8916 */
	0x000922d8, /* Controller 9, led 185, offset 8920 */
	0x000a22dc, /* Controller 10, led 185, offset 8924 */
	0x000b22e0, /* Controller 11, led 185, offset 8928 */
	0x000022e4, /* Controller 0, led 186, offset 8932 */
	0x000122e8, /* Controller 1, led 186, offset 8936 */
	0x000222ec, /* Controller 2, led 186, offset 8940 */
	0x000322f0, /* Controller 3, led 186, offset 8944 */
	0x000422f4, /* Controller 4, led 186, offset 8948 */
	0x000522f8, /* Controller 5, led 186, offset 8952 */
	0x000622fc, /* Controller 6, led 186, offset 8956 */
	0x00072300, /* Controller 7, led 186, offset 8960 */
	0x00082304, /* Controller 8, led 186, offset 8964 */
	0x00092308, /* Controller 9, led 186, offset 8968 */
	0x000a230c, /* Controller 10, led 186, offset 8972 */
	0x000b2310, /* Controller 11, led 186, offset 8976 */
	0x00002314, /* Controller 0, led 187, offset 8980 */
	0x00012318, /* Controller 1, led 187, offset 8984 */
	0x0002231c, /* Controller 2, led 187, offset 8988 */
	0x00032320, /* Controller 3, led 187, offset 8992 */
	0x00042324, /* Controller 4, led 187, offset 8996 */
	0x00052328, /* Controller 5, led 187, offset 9000 */
	0x0006232c, /* Controller 6, led 187, offset 9004 */
	0x00072330, /* Controller 7, led 187, offset 9008 */
	0x00082334, /* Controller 8, led 187, offset 9012 */
	0x00092338, /* Controller 9, led 187, offset 9016 */
	0x000a233c, /* Controller 10, led 187, offset 9020 */
	0x000b2340, /* Controller 11, led 187, offset 9024 */
	0x00002344, /* Controller 0, led 188, offset 9028 */
	0x00012348, /* Controller 1, led 188, offset 9032 */
	0x0002234c, /* Controller 2, led 188, offset 9036 */
	0x00032350, /* Controller 3, led 188, offset 9040 */
	0x00042354, /* Controller 4, led 188, offset 9044 */
	0x00052358, /* Controller 5, led 188, offset 9048 */
	0x0006235c, /* Controller 6, led 188, offset 9052 */
	0x00072360, /* Controller 7, led 188, offset 9056 */
	0x00082364, /* Controller 8, led 188, offset 9060 */
	0x00092368, /* Controller 9, led 188, offset 9064 */
	0x000a236c, /* Controller 10, led 188, offset 9068 */
	0x000b2370, /* Controller 11, led 188, offset 9072 */
	0x00002374, /* Controller 0, led 189, offset 9076 */
	0x00012378, /* Controller 1, led 189, offset 9080 */
	0x0002237c, /* Controller 2, led 189, offset 9084 */
	0x00032380, /* Controller 3, led 189, offset 9088 */
	0x00042384, /* Controller 4, led 189, offset 9092 */
	0x00052388, /* Controller 5, led 189, offset 9096 */
	0x0006238c, /* Controller 6, led 189, offset 9100 */
	0x00072390, /* Controller 7, led 189, offset 9104 */
	0x00082394, /* Controller 8, led 189, offset 9108 */
	0x00092398, /* Controller 9, led 189, offset 9112 */
	0x000a239c, /* Controller 10, led 189, offset 9116 */
	0x000b23a0, /* Controller 11, led 189, offset 9120 */
	0x000023a4, /* Controller 0, led 190, offset 9124 */
	0x000123a8, /* Controller 1, led 190, offset 9128 */
	0x000223ac, /* Controller 2, led 190, offset 9132 */
	0x000323b0, /* Controller 3, led 190, offset 9136 */
	0x000423b4, /* Controller 4, led 190, offset 9140 */
	0x000523b8, /* Controller 5, led 190, offset 9144 */
	0x000623bc, /* Controller 6, led 190, offset 9148 */
	0x000723c0, /* Controller 7, led 190, offset 9152 */
	0x000823c4, /* Controller 8, led 190, offset 9156 */
	0x000923c8, /* Controller 9, led 190, offset 9160 */
	0x000a23cc, /* Controller 10, led 190, offset 9164 */
	0x000b23d0, /* Controller 11, led 190, offset 9168 */
	0x000023d4, /* Controller 0, led 191, offset 9172 */
	0x000123d8, /* Controller 1, led 191, offset 9176 */
	0x000223dc, /* Controller 2, led 191, offset 9180 */
	0x000323e0, /* Controller 3, led 191, offset 9184 */
	0x000423e4, /* Controller 4, led 191, offset 9188 */
	0x000523e8, /* Controller 5, led 191, offset 9192 */
	0x000623ec, /* Controller 6, led 191, offset 9196 */
	0x000723f0, /* Controller 7, led 191, offset 9200 */
	0x000823f4, /* Controller 8, led 191, offset 9204 */
	0x000923f8, /* Controller 9, led 191, offset 9208 */
	0x000a23fc, /* Controller 10, led 191, offset 9212 */
	0x000b2400, /* Controller 11, led 191, offset 9216 */
	0x00002404, /* Controller 0, led 192, offset 9220 */
	0x00012408, /* Controller 1, led 192, offset 9224 */
	0x0002240c, /* Controller 2, led 192, offset 9228 */
	0x00032410, /* Controller 3, led 192, offset 9232 */
	0x00042414, /* Controller 4, led 192, offset 9236 */
	0x00052418, /* Controller 5, led 192, offset 9240 */
	0x0006241c, /* Controller 6, led 192, offset 9244 */
	0x00072420, /* Controller 7, led 192, offset 9248 */
	0x00082424, /* Controller 8, led 192, offset 9252 */
	0x00092428, /* Controller 9, led 192, offset 9256 */
	0x000a242c, /* Controller 10, led 192, offset 9260 */
	0x000b2430, /* Controller 11, led 192, offset 9264 */
	0x00002434, /* Controller 0, led 193, offset 9268 */
	0x00012438, /* Controller 1, led 193, offset 9272 */
	0x0002243c, /* Controller 2, led 193, offset 9276 */
	0x00032440, /* Controller 3, led 193, offset 9280 */
	0x00042444, /* Controller 4, led 193, offset 9284 */
	0x00052448, /* Controller 5, led 193, offset 9288 */
	0x0006244c, /* Controller 6, led 193, offset 9292 */
	0x00072450, /* Controller 7, led 193, offset 9296 */
	0x00082454, /* Controller 8, led 193, offset 9300 */
	0x00092458, /* Controller 9, led 193, offset 9304 */
	0x000a245c, /* Controller 10, led 193, offset 9308 */
	0x000b2460, /* Controller 11, led 193, offset 9312 */
	0x00002464, /* Controller 0, led 194, offset 9316 */
	0x00012468, /* Controller 1, led 194, offset 9320 */
	0x0002246c, /* Controller 2, led 194, offset 9324 */
	0x00032470, /* Controller 3, led 194, offset 9328 */
	0x00042474, /* Controller 4, led 194, offset 9332 */
	0x00052478, /* Controller 5, led 194, offset 9336 */
	0x0006247c, /* Controller 6, led 194, offset 9340 */
	0x00072480, /* Controller 7, led 194, offset 9344 */
	0x00082484, /* Controller 8, led 194, offset 9348 */
	0x00092488, /* Controller 9, led 194, offset 9352 */
	0x000a248c, /* Controller 10, led 194, offset 9356 */
	0x000b2490, /* Controller 11, led 194, offset 9360 */
	0x00002494, /* Controller 0, led 195, offset 9364 */
	0x00012498, /* Controller 1, led 195, offset 9368 */
	0x0002249c, /* Controller 2, led 195, offset 9372 */
	0x000324a0, /* Controller 3, led 195, offset 9376 */
	0x000424a4, /* Controller 4, led 195, offset 9380 */
	0x000524a8, /* Controller 5, led 195, offset 9384 */
	0x000624ac, /* Controller 6, led 195, offset 9388 */
	0x000724b0, /* Controller 7, led 195, offset 9392 */
	0x000824b4, /* Controller 8, led 195, offset 9396 */
	0x000924b8, /* Controller 9, led 195, offset 9400 */
	0x000a24bc, /* Controller 10, led 195, offset 9404 */
	0x000b24c0, /* Controller 11, led 195, offset 9408 */
	0x000024c4, /* Controller 0, led 196, offset 9412 */
	0x000124c8, /* Controller 1, led 196, offset 9416 */
	0x000224cc, /* Controller 2, led 196, offset 9420 */
	0x000324d0, /* Controller 3, led 196, offset 9424 */
	0x000424d4, /* Controller 4, led 196, offset 9428 */
	0x000524d8, /* Controller 5, led 196, offset 9432 */
	0x000624dc, /* Controller 6, led 196, offset 9436 */
	0x000724e0, /* Controller 7, led 196, offset 9440 */
	0x000824e4, /* Controller 8, led 196, offset 9444 */
	0x000924e8, /* Controller 9, led 196, offset 9448 */
	0x000a24ec, /* Controller 10, led 196, offset 9452 */
	0x000b24f0, /* Controller 11, led 196, offset 9456 */
	0x000024f4, /* Controller 0, led 197, offset 9460 */
	0x000124f8, /* Controller 1, led 197, offset 9464 */
	0x000224fc, /* Controller 2, led 197, offset 9468 */
	0x00032500, /* Controller 3, led 197, offset 9472 */
	0x00042504, /* Controller 4, led 197, offset 9476 */
	0x00052508, /* Controller 5, led 197, offset 9480 */
	0x0006250c, /* Controller 6, led 197, offset 9484 */
	0x00072510, /* Controller 7, led 197, offset 9488 */
	0x00082514, /* Controller 8, led 197, offset 9492 */
	0x00092518, /* Controller 9, led 197, offset 9496 */
	0x000a251c, /* Controller 10, led 197, offset 9500 */
	0x000b2520, /* Controller 11, led 197, offset 9504 */
	0x00002524, /* Controller 0, led 198, offset 9508 */
	0x00012528, /* Controller 1, led 198, offset 9512 */
	0x0002252c, /* Controller 2, led 198, offset 9516 */
	0x00032530, /* Controller 3, led 198, offset 9520 */
	0x00042534, /* Controller 4, led 198, offset 9524 */
	0x00052538, /* Controller 5, led 198, offset 9528 */
	0x0006253c, /* Controller 6, led 198, offset 9532 */
	0x00072540, /* Controller 7, led 198, offset 9536 */
	0x00082544, /* Controller 8, led 198, offset 9540 */
	0x00092548, /* Controller 9, led 198, offset 9544 */
	0x000a254c, /* Controller 10, led 198, offset 9548 */
	0x000b2550, /* Controller 11, led 198, offset 9552 */
	0x00002554, /* Controller 0, led 199, offset 9556 */
	0x00012558, /* Controller 1, led 199, offset 9560 */
	0x0002255c, /* Controller 2, led 199, offset 9564 */
	0x00032560, /* Controller 3, led 199, offset 9568 */
	0x00042564, /* Controller 4, led 199, offset 9572 */
	0x00052568, /* Controller 5, led 199, offset 9576 */
	0x0006256c, /* Controller 6, led 199, offset 9580 */
	0x00072570, /* Controller 7, led 199, offset 9584 */
	0x00082574, /* Controller 8, led 199, offset 9588 */
	0x00092578, /* Controller 9, led 199, offset 9592 */
	0x000a257c, /* Controller 10, led 199, offset 9596 */
	0x000b2580, /* Controller 11, led 199, offset 9600 */
	0x00002584, /* Controller 0, led 200, offset 9604 */
	0x00012588, /* Controller 1, led 200, offset 9608 */
	0x0002258c, /* Controller 2, led 200, offset 9612 */
	0x00032590, /* Controller 3, led 200, offset 9616 */
	0x00042594, /* Controller 4, led 200, offset 9620 */
	0x00052598, /* Controller 5, led 200, offset 9624 */
	0x0006259c, /* Controller 6, led 200, offset 9628 */
	0x000725a0, /* Controller 7, led 200, offset 9632 */
	0x000825a4, /* Controller 8, led 200, offset 9636 */
	0x000925a8, /* Controller 9, led 200, offset 9640 */
	0x000a25ac, /* Controller 10, led 200, offset 9644 */
	0x000b25b0, /* Controller 11, led 200, offset 9648 */
	0x000025b4, /* Controller 0, led 201, offset 9652 */
	0x000125b8, /* Controller 1, led 201, offset 9656 */
	0x000225bc, /* Controller 2, led 201, offset 9660 */
	0x000325c0, /* Controller 3, led 201, offset 9664 */
	0x000425c4, /* Controller 4, led 201, offset 9668 */
	0x000525c8, /* Controller 5, led 201, offset 9672 */
	0x000625cc, /* Controller 6, led 201, offset 9676 */
	0x000725d0, /* Controller 7, led 201, offset 9680 */
	0x000825d4, /* Controller 8, led 201, offset 9684 */
	0x000925d8, /* Controller 9, led 201, offset 9688 */
	0x000a25dc, /* Controller 10, led 201, offset 9692 */
	0x000b25e0, /* Controller 11, led 201, offset 9696 */
	0x000025e4, /* Controller 0, led 202, offset 9700 */
	0x000125e8, /* Controller 1, led 202, offset 9704 */
	0x000225ec, /* Controller 2, led 202, offset 9708 */
	0x000325f0, /* Controller 3, led 202, offset 9712 */
	0x000425f4, /* Controller 4, led 202, offset 9716 */
	0x000525f8, /* Controller 5, led 202, offset 9720 */
	0x000625fc, /* Controller 6, led 202, offset 9724 */
	0x00072600, /* Controller 7, led 202, offset 9728 */
	0x00082604, /* Controller 8, led 202, offset 9732 */
	0x00092608, /* Controller 9, led 202, offset 9736 */
	0x000a260c, /* Controller 10, led 202, offset 9740 */
	0x000b2610, /* Controller 11, led 202, offset 9744 */
	0x00002614, /* Controller 0, led 203, offset 9748 */
	0x00012618, /* Controller 1, led 203, offset 9752 */
	0x0002261c, /* Controller 2, led 203, offset 9756 */
	0x00032620, /* Controller 3, led 203, offset 9760 */
	0x00042624, /* Controller 4, led 203, offset 9764 */
	0x00052628, /* Controller 5, led 203, offset 9768 */
	0x0006262c, /* Controller 6, led 203, offset 9772 */
	0x00072630, /* Controller 7, led 203, offset 9776 */
	0x00082634, /* Controller 8, led 203, offset 9780 */
	0x00092638, /* Controller 9, led 203, offset 9784 */
	0x000a263c, /* Controller 10, led 203, offset 9788 */
	0x000b2640, /* Controller 11, led 203, offset 9792 */
	0x00002644, /* Controller 0, led 204, offset 9796 */
	0x00012648, /* Controller 1, led 204, offset 9800 */
	0x0002264c, /* Controller 2, led 204, offset 9804 */
	0x00032650, /* Controller 3, led 204, offset 9808 */
	0x00042654, /* Controller 4, led 204, offset 9812 */
	0x00052658, /* Controller 5, led 204, offset 9816 */
	0x0006265c, /* Controller 6, led 204, offset 9820 */
	0x00072660, /* Controller 7, led 204, offset 9824 */
	0x00082664, /* Controller 8, led 204, offset 9828 */
	0x00092668, /* Controller 9, led 204, offset 9832 */
	0x000a266c, /* Controller 10, led 204, offset 9836 */
	0x000b2670, /* Controller 11, led 204, offset 9840 */
	0x00002674, /* Controller 0, led 205, offset 9844 */
	0x00012678, /* Controller 1, led 205, offset 9848 */
	0x0002267c, /* Controller 2, led 205, offset 9852 */
	0x00032680, /* Controller 3, led 205, offset 9856 */
	0x00042684, /* Controller 4, led 205, offset 9860 */
	0x00052688, /* Controller 5, led 205, offset 9864 */
	0x0006268c, /* Controller 6, led 205, offset 9868 */
	0x00072690, /* Controller 7, led 205, offset 9872 */
	0x00082694, /* Controller 8, led 205, offset 9876 */
	0x00092698, /* Controller 9, led 205, offset 9880 */
	0x000a269c, /* Controller 10, led 205, offset 9884 */
	0x000b26a0, /* Controller 11, led 205, offset 9888 */
	0x000026a4, /* Controller 0, led 206, offset 9892 */
	0x000126a8, /* Controller 1, led 206, offset 9896 */
	0x000226ac, /* Controller 2, led 206, offset 9900 */
	0x000326b0, /* Controller 3, led 206, offset 9904 */
	0x000426b4, /* Controller 4, led 206, offset 9908 */
	0x000526b8, /* Controller 5, led 206, offset 9912 */
	0x000626bc, /* Controller 6, led 206, offset 9916 */
	0x000726c0, /* Controller 7, led 206, offset 9920 */
	0x000826c4, /* Controller 8, led 206, offset 9924 */
	0x000926c8, /* Controller 9, led 206, offset 9928 */
	0x000a26cc, /* Controller 10, led 206, offset 9932 */
	0x000b26d0, /* Controller 11, led 206, offset 9936 */
	0x000026d4, /* Controller 0, led 207, offset 9940 */
	0x000126d8, /* Controller 1, led 207, offset 9944 */
	0x000226dc, /* Controller 2, led 207, offset 9948 */
	0x000326e0, /* Controller 3, led 207, offset 9952 */
	0x000426e4, /* Controller 4, led 207, offset 9956 */
	0x000526e8, /* Controller 5, led 207, offset 9960 */
	0x000626ec, /* Controller 6, led 207, offset 9964 */
	0x000726f0, /* Controller 7, led 207, offset 9968 */
	0x000826f4, /* Controller 8, led 207, offset 9972 */
	0x000926f8, /* Controller 9, led 207, offset 9976 */
	0x000a26fc, /* Controller 10, led 207, offset 9980 */
	0x000b2700, /* Controller 11, led 207, offset 9984 */
	0x00002704, /* Controller 0, led 208, offset 9988 */
	0x00012708, /* Controller 1, led 208, offset 9992 */
	0x0002270c, /* Controller 2, led 208, offset 9996 */
	0x00032710, /* Controller 3, led 208, offset 10000 */
	0x00042714, /* Controller 4, led 208, offset 10004 */
	0x00052718, /* Controller 5, led 208, offset 10008 */
	0x0006271c, /* Controller 6, led 208, offset 10012 */
	0x00072720, /* Controller 7, led 208, offset 10016 */
	0x00082724, /* Controller 8, led 208, offset 10020 */
	0x00092728, /* Controller 9, led 208, offset 10024 */
	0x000a272c, /* Controller 10, led 208, offset 10028 */
	0x000b2730, /* Controller 11, led 208, offset 10032 */
	0x00002734, /* Controller 0, led 209, offset 10036 */
	0x00012738, /* Controller 1, led 209, offset 10040 */
	0x0002273c, /* Controller 2, led 209, offset 10044 */
	0x00032740, /* Controller 3, led 209, offset 10048 */
	0x00042744, /* Controller 4, led 209, offset 10052 */
	0x00052748, /* Controller 5, led 209, offset 10056 */
	0x0006274c, /* Controller 6, led 209, offset 10060 */
	0x00072750, /* Controller 7, led 209, offset 10064 */
	0x00082754, /* Controller 8, led 209, offset 10068 */
	0x00092758, /* Controller 9, led 209, offset 10072 */
	0x000a275c, /* Controller 10, led 209, offset 10076 */
	0x000b2760, /* Controller 11, led 209, offset 10080 */
	0x00002764, /* Controller 0, led 210, offset 10084 */
	0x00012768, /* Controller 1, led 210, offset 10088 */
	0x0002276c, /* Controller 2, led 210, offset 10092 */
	0x00032770, /* Controller 3, led 210, offset 10096 */
	0x00042774, /* Controller 4, led 210, offset 10100 */
	0x00052778, /* Controller 5, led 210, offset 10104 */
	0x0006277c, /* Controller 6, led 210, offset 10108 */
	0x00072780, /* Controller 7, led 210, offset 10112 */
	0x00082784, /* Controller 8, led 210, offset 10116 */
	0x00092788, /* Controller 9, led 210, offset 10120 */
	0x000a278c, /* Controller 10, led 210, offset 10124 */
	0x000b2790, /* Controller 11, led 210, offset 10128 */
	0x00002794, /* Controller 0, led 211, offset 10132 */
	0x00012798, /* Controller 1, led 211, offset 10136 */
	0x0002279c, /* Controller 2, led 211, offset 10140 */
	0x000327a0, /* Controller 3, led 211, offset 10144 */
	0x000427a4, /* Controller 4, led 211, offset 10148 */
	0x000527a8, /* Controller 5, led 211, offset 10152 */
	0x000627ac, /* Controller 6, led 211, offset 10156 */
	0x000727b0, /* Controller 7, led 211, offset 10160 */
	0x000827b4, /* Controller 8, led 211, offset 10164 */
	0x000927b8, /* Controller 9, led 211, offset 10168 */
	0x000a27bc, /* Controller 10, led 211, offset 10172 */
	0x000b27c0, /* Controller 11, led 211, offset 10176 */
	0x000027c4, /* Controller 0, led 212, offset 10180 */
	0x000127c8, /* Controller 1, led 212, offset 10184 */
	0x000227cc, /* Controller 2, led 212, offset 10188 */
	0x000327d0, /* Controller 3, led 212, offset 10192 */
	0x000427d4, /* Controller 4, led 212, offset 10196 */
	0x000527d8, /* Controller 5, led 212, offset 10200 */
	0x000627dc, /* Controller 6, led 212, offset 10204 */
	0x000727e0, /* Controller 7, led 212, offset 10208 */
	0x000827e4, /* Controller 8, led 212, offset 10212 */
	0x000927e8, /* Controller 9, led 212, offset 10216 */
	0x000a27ec, /* Controller 10, led 212, offset 10220 */
	0x000b27f0, /* Controller 11, led 212, offset 10224 */
	0x000027f4, /* Controller 0, led 213, offset 10228 */
	0x000127f8, /* Controller 1, led 213, offset 10232 */
	0x000227fc, /* Controller 2, led 213, offset 10236 */
	0x00032800, /* Controller 3, led 213, offset 10240 */
	0x00042804, /* Controller 4, led 213, offset 10244 */
	0x00052808, /* Controller 5, led 213, offset 10248 */
	0x0006280c, /* Controller 6, led 213, offset 10252 */
	0x00072810, /* Controller 7, led 213, offset 10256 */
	0x00082814, /* Controller 8, led 213, offset 10260 */
	0x00092818, /* Controller 9, led 213, offset 10264 */
	0x000a281c, /* Controller 10, led 213, offset 10268 */
	0x000b2820, /* Controller 11, led 213, offset 10272 */
	0x00002824, /* Controller 0, led 214, offset 10276 */
	0x00012828, /* Controller 1, led 214, offset 10280 */
	0x0002282c, /* Controller 2, led 214, offset 10284 */
	0x00032830, /* Controller 3, led 214, offset 10288 */
	0x00042834, /* Controller 4, led 214, offset 10292 */
	0x00052838, /* Controller 5, led 214, offset 10296 */
	0x0006283c, /* Controller 6, led 214, offset 10300 */
	0x00072840, /* Controller 7, led 214, offset 10304 */
	0x00082844, /* Controller 8, led 214, offset 10308 */
	0x00092848, /* Controller 9, led 214, offset 10312 */
	0x000a284c, /* Controller 10, led 214, offset 10316 */
	0x000b2850, /* Controller 11, led 214, offset 10320 */
	0x00002854, /* Controller 0, led 215, offset 10324 */
	0x00012858, /* Controller 1, led 215, offset 10328 */
	0x0002285c, /* Controller 2, led 215, offset 10332 */
	0x00032860, /* Controller 3, led 215, offset 10336 */
	0x00042864, /* Controller 4, led 215, offset 10340 */
	0x00052868, /* Controller 5, led 215, offset 10344 */
	0x0006286c, /* Controller 6, led 215, offset 10348 */
	0x00072870, /* Controller 7, led 215, offset 10352 */
	0x00082874, /* Controller 8, led 215, offset 10356 */
	0x00092878, /* Controller 9, led 215, offset 10360 */
	0x000a287c, /* Controller 10, led 215, offset 10364 */
	0x000b2880, /* Controller 11, led 215, offset 10368 */
	0x00002884, /* Controller 0, led 216, offset 10372 */
	0x00012888, /* Controller 1, led 216, offset 10376 */
	0x0002288c, /* Controller 2, led 216, offset 10380 */
	0x00032890, /* Controller 3, led 216, offset 10384 */
	0x00042894, /* Controller 4, led 216, offset 10388 */
	0x00052898, /* Controller 5, led 216, offset 10392 */
	0x0006289c, /* Controller 6, led 216, offset 10396 */
	0x000728a0, /* Controller 7, led 216, offset 10400 */
	0x000828a4, /* Controller 8, led 216, offset 10404 */
	0x000928a8, /* Controller 9, led 216, offset 10408 */
	0x000a28ac, /* Controller 10, led 216, offset 10412 */
	0x000b28b0, /* Controller 11, led 216, offset 10416 */
	0x000028b4, /* Controller 0, led 217, offset 10420 */
	0x000128b8, /* Controller 1, led 217, offset 10424 */
	0x000228bc, /* Controller 2, led 217, offset 10428 */
	0x000328c0, /* Controller 3, led 217, offset 10432 */
	0x000428c4, /* Controller 4, led 217, offset 10436 */
	0x000528c8, /* Controller 5, led 217, offset 10440 */
	0x000628cc, /* Controller 6, led 217, offset 10444 */
	0x000728d0, /* Controller 7, led 217, offset 10448 */
	0x000828d4, /* Controller 8, led 217, offset 10452 */
	0x000928d8, /* Controller 9, led 217, offset 10456 */
	0x000a28dc, /* Controller 10, led 217, offset 10460 */
	0x000b28e0, /* Controller 11, led 217, offset 10464 */
	0x000028e4, /* Controller 0, led 218, offset 10468 */
	0x000128e8, /* Controller 1, led 218, offset 10472 */
	0x000228ec, /* Controller 2, led 218, offset 10476 */
	0x000328f0, /* Controller 3, led 218, offset 10480 */
	0x000428f4, /* Controller 4, led 218, offset 10484 */
	0x000528f8, /* Controller 5, led 218, offset 10488 */
	0x000628fc, /* Controller 6, led 218, offset 10492 */
	0x00072900, /* Controller 7, led 218, offset 10496 */
	0x00082904, /* Controller 8, led 218, offset 10500 */
	0x00092908, /* Controller 9, led 218, offset 10504 */
	0x000a290c, /* Controller 10, led 218, offset 10508 */
	0x000b2910, /* Controller 11, led 218, offset 10512 */
	0x00002914, /* Controller 0, led 219, offset 10516 */
	0x00012918, /* Controller 1, led 219, offset 10520 */
	0x0002291c, /* Controller 2, led 219, offset 10524 */
	0x00032920, /* Controller 3, led 219, offset 10528 */
	0x00042924, /* Controller 4, led 219, offset 10532 */
	0x00052928, /* Controller 5, led 219, offset 10536 */
	0x0006292c, /* Controller 6, led 219, offset 10540 */
	0x00072930, /* Controller 7, led 219, offset 10544 */
	0x00082934, /* Controller 8, led 219, offset 10548 */
	0x00092938, /* Controller 9, led 219, offset 10552 */
	0x000a293c, /* Controller 10, led 219, offset 10556 */
	0x000b2940, /* Controller 11, led 219, offset 10560 */
	0x00002944, /* Controller 0, led 220, offset 10564 */
	0x00012948, /* Controller 1, led 220, offset 10568 */
	0x0002294c, /* Controller 2, led 220, offset 10572 */
	0x00032950, /* Controller 3, led 220, offset 10576 */
	0x00042954, /* Controller 4, led 220, offset 10580 */
	0x00052958, /* Controller 5, led 220, offset 10584 */
	0x0006295c, /* Controller 6, led 220, offset 10588 */
	0x00072960, /* Controller 7, led 220, offset 10592 */
	0x00082964, /* Controller 8, led 220, offset 10596 */
	0x00092968, /* Controller 9, led 220, offset 10600 */
	0x000a296c, /* Controller 10, led 220, offset 10604 */
	0x000b2970, /* Controller 11, led 220, offset 10608 */
	0x00002974, /* Controller 0, led 221, offset 10612 */
	0x00012978, /* Controller 1, led 221, offset 10616 */
	0x0002297c, /* Controller 2, led 221, offset 10620 */
	0x00032980, /* Controller 3, led 221, offset 10624 */
	0x00042984, /* Controller 4, led 221, offset 10628 */
	0x00052988, /* Controller 5, led 221, offset 10632 */
	0x0006298c, /* Controller 6, led 221, offset 10636 */
	0x00072990, /* Controller 7, led 221, offset 10640 */
	0x00082994, /* Controller 8, led 221, offset 10644 */
	0x00092998, /* Controller 9, led 221, offset 10648 */
	0x000a299c, /* Controller 10, led 221, offset 10652 */
	0x000b29a0, /* Controller 11, led 221, offset 10656 */
	0x000029a4, /* Controller 0, led 222, offset 10660 */
	0x000129a8, /* Controller 1, led 222, offset 10664 */
	0x000229ac, /* Controller 2, led 222, offset 10668 */
	0x000329b0, /* Controller 3, led 222, offset 10672 */
	0x000429b4, /* Controller 4, led 222, offset 10676 */
	0x000529b8, /* Controller 5, led 222, offset 10680 */
	0x000629bc, /* Controller 6, led 222, offset 10684 */
	0x000729c0, /* Controller 7, led 222, offset 10688 */
	0x000829c4, /* Controller 8, led 222, offset 10692 */
	0x000929c8, /* Controller 9, led 222, offset 10696 */
	0x000a29cc, /* Controller 10, led 222, offset 10700 */
	0x000b29d0, /* Controller 11, led 222, offset 10704 */
	0x000029d4, /* Controller 0, led 223, offset 10708 */
	0x000129d8, /* Controller 1, led 223, offset 10712 */
	0x000229dc, /* Controller 2, led 223, offset 10716 */
	0x000329e0, /* Controller 3, led 223, offset 10720 */
	0x000429e4, /* Controller 4, led 223, offset 10724 */
	0x000529e8, /* Controller 5, led 223, offset 10728 */
	0x000629ec, /* Controller 6, led 223, offset 10732 */
	0x000729f0, /* Controller 7, led 223, offset 10736 */
	0x000829f4, /* Controller 8, led 223, offset 10740 */
	0x000929f8, /* Controller 9, led 223, offset 10744 */
	0x000a29fc, /* Controller 10, led 223, offset 10748 */
	0x000b2a00, /* Controller 11, led 223, offset 10752 */
	0x00002a04, /* Controller 0, led 224, offset 10756 */
	0x00012a08, /* Controller 1, led 224, offset 10760 */
	0x00022a0c, /* Controller 2, led 224, offset 10764 */
	0x00032a10, /* Controller 3, led 224, offset 10768 */
	0x00042a14, /* Controller 4, led 224, offset 10772 */
	0x00052a18, /* Controller 5, led 224, offset 10776 */
	0x00062a1c, /* Controller 6, led 224, offset 10780 */
	0x00072a20, /* Controller 7, led 224, offset 10784 */
	0x00082a24, /* Controller 8, led 224, offset 10788 */
	0x00092a28, /* Controller 9, led 224, offset 10792 */
	0x000a2a2c, /* Controller 10, led 224, offset 10796 */
	0x000b2a30, /* Controller 11, led 224, offset 10800 */
	0x00002a34, /* Controller 0, led 225, offset 10804 */
	0x00012a38, /* Controller 1, led 225, offset 10808 */
	0x00022a3c, /* Controller 2, led 225, offset 10812 */
	0x00032a40, /* Controller 3, led 225, offset 10816 */
	0x00042a44, /* Controller 4, led 225, offset 10820 */
	0x00052a48, /* Controller 5, led 225, offset 10824 */
	0x00062a4c, /* Controller 6, led 225, offset 10828 */
	0x00072a50, /* Controller 7, led 225, offset 10832 */
	0x00082a54, /* Controller 8, led 225, offset 10836 */
	0x00092a58, /* Controller 9, led 225, offset 10840 */
	0x000a2a5c, /* Controller 10, led 225, offset 10844 */
	0x000b2a60, /* Controller 11, led 225, offset 10848 */
	0x00002a64, /* Controller 0, led 226, offset 10852 */
	0x00012a68, /* Controller 1, led 226, offset 10856 */
	0x00022a6c, /* Controller 2, led 226, offset 10860 */
	0x00032a70, /* Controller 3, led 226, offset 10864 */
	0x00042a74, /* Controller 4, led 226, offset 10868 */
	0x00052a78, /* Controller 5, led 226, offset 10872 */
	0x00062a7c, /* Controller 6, led 226, offset 10876 */
	0x00072a80, /* Controller 7, led 226, offset 10880 */
	0x00082a84, /* Controller 8, led 226, offset 10884 */
	0x00092a88, /* Controller 9, led 226, offset 10888 */
	0x000a2a8c, /* Controller 10, led 226, offset 10892 */
	0x000b2a90, /* Controller 11, led 226, offset 10896 */
	0x00002a94, /* Controller 0, led 227, offset 10900 */
	0x00012a98, /* Controller 1, led 227, offset 10904 */
	0x00022a9c, /* Controller 2, led 227, offset 10908 */
	0x00032aa0, /* Controller 3, led 227, offset 10912 */
	0x00042aa4, /* Controller 4, led 227, offset 10916 */
	0x00052aa8, /* Controller 5, led 227, offset 10920 */
	0x00062aac, /* Controller 6, led 227, offset 10924 */
	0x00072ab0, /* Controller 7, led 227, offset 10928 */
	0x00082ab4, /* Controller 8, led 227, offset 10932 */
	0x00092ab8, /* Controller 9, led 227, offset 10936 */
	0x000a2abc, /* Controller 10, led 227, offset 10940 */
	0x000b2ac0, /* Controller 11, led 227, offset 10944 */
	0x00002ac4, /* Controller 0, led 228, offset 10948 */
	0x00012ac8, /* Controller 1, led 228, offset 10952 */
	0x00022acc, /* Controller 2, led 228, offset 10956 */
	0x00032ad0, /* Controller 3, led 228, offset 10960 */
	0x00042ad4, /* Controller 4, led 228, offset 10964 */
	0x00052ad8, /* Controller 5, led 228, offset 10968 */
	0x00062adc, /* Controller 6, led 228, offset 10972 */
	0x00072ae0, /* Controller 7, led 228, offset 10976 */
	0x00082ae4, /* Controller 8, led 228, offset 10980 */
	0x00092ae8, /* Controller 9, led 228, offset 10984 */
	0x000a2aec, /* Controller 10, led 228, offset 10988 */
	0x000b2af0, /* Controller 11, led 228, offset 10992 */
	0x00002af4, /* Controller 0, led 229, offset 10996 */
	0x00012af8, /* Controller 1, led 229, offset 11000 */
	0x00022afc, /* Controller 2, led 229, offset 11004 */
	0x00032b00, /* Controller 3, led 229, offset 11008 */
	0x00042b04, /* Controller 4, led 229, offset 11012 */
	0x00052b08, /* Controller 5, led 229, offset 11016 */
	0x00062b0c, /* Controller 6, led 229, offset 11020 */
	0x00072b10, /* Controller 7, led 229, offset 11024 */
	0x00082b14, /* Controller 8, led 229, offset 11028 */
	0x00092b18, /* Controller 9, led 229, offset 11032 */
	0x000a2b1c, /* Controller 10, led 229, offset 11036 */
	0x000b2b20, /* Controller 11, led 229, offset 11040 */
	0x00002b24, /* Controller 0, led 230, offset 11044 */
	0x00012b28, /* Controller 1, led 230, offset 11048 */
	0x00022b2c, /* Controller 2, led 230, offset 11052 */
	0x00032b30, /* Controller 3, led 230, offset 11056 */
	0x00042b34, /* Controller 4, led 230, offset 11060 */
	0x00052b38, /* Controller 5, led 230, offset 11064 */
	0x00062b3c, /* Controller 6, led 230, offset 11068 */
	0x00072b40, /* Controller 7, led 230, offset 11072 */
	0x00082b44, /* Controller 8, led 230, offset 11076 */
	0x00092b48, /* Controller 9, led 230, offset 11080 */
	0x000a2b4c, /* Controller 10, led 230, offset 11084 */
	0x000b2b50, /* Controller 11, led 230, offset 11088 */
	0x00002b54, /* Controller 0, led 231, offset 11092 */
	0x00012b58, /* Controller 1, led 231, offset 11096 */
	0x00022b5c, /* Controller 2, led 231, offset 11100 */
	0x00032b60, /* Controller 3, led 231, offset 11104 */
	0x00042b64, /* Controller 4, led 231, offset 11108 */
	0x00052b68, /* Controller 5, led 231, offset 11112 */
	0x00062b6c, /* Controller 6, led 231, offset 11116 */
	0x00072b70, /* Controller 7, led 231, offset 11120 */
	0x00082b74, /* Controller 8, led 231, offset 11124 */
	0x00092b78, /* Controller 9, led 231, offset 11128 */
	0x000a2b7c, /* Controller 10, led 231, offset 11132 */
	0x000b2b80, /* Controller 11, led 231, offset 11136 */
	0x00002b84, /* Controller 0, led 232, offset 11140 */
	0x00012b88, /* Controller 1, led 232, offset 11144 */
	0x00022b8c, /* Controller 2, led 232, offset 11148 */
	0x00032b90, /* Controller 3, led 232, offset 11152 */
	0x00042b94, /* Controller 4, led 232, offset 11156 */
	0x00052b98, /* Controller 5, led 232, offset 11160 */
	0x00062b9c, /* Controller 6, led 232, offset 11164 */
	0x00072ba0, /* Controller 7, led 232, offset 11168 */
	0x00082ba4, /* Controller 8, led 232, offset 11172 */
	0x00092ba8, /* Controller 9, led 232, offset 11176 */
	0x000a2bac, /* Controller 10, led 232, offset 11180 */
	0x000b2bb0, /* Controller 11, led 232, offset 11184 */
	0x00002bb4, /* Controller 0, led 233, offset 11188 */
	0x00012bb8, /* Controller 1, led 233, offset 11192 */
	0x00022bbc, /* Controller 2, led 233, offset 11196 */
	0x00032bc0, /* Controller 3, led 233, offset 11200 */
	0x00042bc4, /* Controller 4, led 233, offset 11204 */
	0x00052bc8, /* Controller 5, led 233, offset 11208 */
	0x00062bcc, /* Controller 6, led 233, offset 11212 */
	0x00072bd0, /* Controller 7, led 233, offset 11216 */
	0x00082bd4, /* Controller 8, led 233, offset 11220 */
	0x00092bd8, /* Controller 9, led 233, offset 11224 */
	0x000a2bdc, /* Controller 10, led 233, offset 11228 */
	0x000b2be0, /* Controller 11, led 233, offset 11232 */
	0x00002be4, /* Controller 0, led 234, offset 11236 */
	0x00012be8, /* Controller 1, led 234, offset 11240 */
	0x00022bec, /* Controller 2, led 234, offset 11244 */
	0x00032bf0, /* Controller 3, led 234, offset 11248 */
	0x00042bf4, /* Controller 4, led 234, offset 11252 */
	0x00052bf8, /* Controller 5, led 234, offset 11256 */
	0x00062bfc, /* Controller 6, led 234, offset 11260 */
	0x00072c00, /* Controller 7, led 234, offset 11264 */
	0x00082c04, /* Controller 8, led 234, offset 11268 */
	0x00092c08, /* Controller 9, led 234, offset 11272 */
	0x000a2c0c, /* Controller 10, led 234, offset 11276 */
	0x000b2c10, /* Controller 11, led 234, offset 11280 */
	0x00002c14, /* Controller 0, led 235, offset 11284 */
	0x00012c18, /* Controller 1, led 235, offset 11288 */
	0x00022c1c, /* Controller 2, led 235, offset 11292 */
	0x00032c20, /* Controller 3, led 235, offset 11296 */
	0x00042c24, /* Controller 4, led 235, offset 11300 */
	0x00052c28, /* Controller 5, led 235, offset 11304 */
	0x00062c2c, /* Controller 6, led 235, offset 11308 */
	0x00072c30, /* Controller 7, led 235, offset 11312 */
	0x00082c34, /* Controller 8, led 235, offset 11316 */
	0x00092c38, /* Controller 9, led 235, offset 11320 */
	0x000a2c3c, /* Controller 10, led 235, offset 11324 */
	0x000b2c40, /* Controller 11, led 235, offset 11328 */
	0x00002c44, /* Controller 0, led 236, offset 11332 */
	0x00012c48, /* Controller 1, led 236, offset 11336 */
	0x00022c4c, /* Controller 2, led 236, offset 11340 */
	0x00032c50, /* Controller 3, led 236, offset 11344 */
	0x00042c54, /* Controller 4, led 236, offset 11348 */
	0x00052c58, /* Controller 5, led 236, offset 11352 */
	0x00062c5c, /* Controller 6, led 236, offset 11356 */
	0x00072c60, /* Controller 7, led 236, offset 11360 */
	0x00082c64, /* Controller 8, led 236, offset 11364 */
	0x00092c68, /* Controller 9, led 236, offset 11368 */
	0x000a2c6c, /* Controller 10, led 236, offset 11372 */
	0x000b2c70, /* Controller 11, led 236, offset 11376 */
	0x00002c74, /* Controller 0, led 237, offset 11380 */
	0x00012c78, /* Controller 1, led 237, offset 11384 */
	0x00022c7c, /* Controller 2, led 237, offset 11388 */
	0x00032c80, /* Controller 3, led 237, offset 11392 */
	0x00042c84, /* Controller 4, led 237, offset 11396 */
	0x00052c88, /* Controller 5, led 237, offset 11400 */
	0x00062c8c, /* Controller 6, led 237, offset 11404 */
	0x00072c90, /* Controller 7, led 237, offset 11408 */
	0x00082c94, /* Controller 8, led 237, offset 11412 */
	0x00092c98, /* Controller 9, led 237, offset 11416 */
	0x000a2c9c, /* Controller 10, led 237, offset 11420 */
	0x000b2ca0, /* Controller 11, led 237, offset 11424 */
	0x00002ca4, /* Controller 0, led 238, offset 11428 */
	0x00012ca8, /* Controller 1, led 238, offset 11432 */
	0x00022cac, /* Controller 2, led 238, offset 11436 */
	0x00032cb0, /* Controller 3, led 238, offset 11440 */
	0x00042cb4, /* Controller 4, led 238, offset 11444 */
	0x00052cb8, /* Controller 5, led 238, offset 11448 */
	0x00062cbc, /* Controller 6, led 238, offset 11452 */
	0x00072cc0, /* Controller 7, led 238, offset 11456 */
	0x00082cc4, /* Controller 8, led 238, offset 11460 */
	0x00092cc8, /* Controller 9, led 238, offset 11464 */
	0x000a2ccc, /* Controller 10, led 238, offset 11468 */
	0x000b2cd0, /* Controller 11, led 238, offset 11472 */
	0x00002cd4, /* Controller 0, led 239, offset 11476 */
	0x00012cd8, /* Controller 1, led 239, offset 11480 */
	0x00022cdc, /* Controller 2, led 239, offset 11484 */
	0x00032ce0, /* Controller 3, led 239, offset 11488 */
	0x00042ce4, /* Controller 4, led 239, offset 11492 */
	0x00052ce8, /* Controller 5, led 239, offset 11496 */
	0x00062cec, /* Controller 6, led 239, offset 11500 */
	0x00072cf0, /* Controller 7, led 239, offset 11504 */
	0x00082cf4, /* Controller 8, led 239, offset 11508 */
	0x00092cf8, /* Controller 9, led 239, offset 11512 */
	0x000a2cfc, /* Controller 10, led 239, offset 11516 */
	0x000b2d00, /* Controller 11, led 239, offset 11520 */
	0x00002d04, /* Controller 0, led 240, offset 11524 */
	0x00012d08, /* Controller 1, led 240, offset 11528 */
	0x00022d0c, /* Controller 2, led 240, offset 11532 */
	0x00032d10, /* Controller 3, led 240, offset 11536 */
	0x00042d14, /* Controller 4, led 240, offset 11540 */
	0x00052d18, /* Controller 5, led 240, offset 11544 */
	0x00062d1c, /* Controller 6, led 240, offset 11548 */
	0x00072d20, /* Controller 7, led 240, offset 11552 */
	0x00082d24, /* Controller 8, led 240, offset 11556 */
	0x00092d28, /* Controller 9, led 240, offset 11560 */
	0x000a2d2c, /* Controller 10, led 240, offset 11564 */
	0x000b2d30, /* Controller 11, led 240, offset 11568 */
	0x00002d34, /* Controller 0, led 241, offset 11572 */
	0x00012d38, /* Controller 1, led 241, offset 11576 */
	0x00022d3c, /* Controller 2, led 241, offset 11580 */
	0x00032d40, /* Controller 3, led 241, offset 11584 */
	0x00042d44, /* Controller 4, led 241, offset 11588 */
	0x00052d48, /* Controller 5, led 241, offset 11592 */
	0x00062d4c, /* Controller 6, led 241, offset 11596 */
	0x00072d50, /* Controller 7, led 241, offset 11600 */
	0x00082d54, /* Controller 8, led 241, offset 11604 */
	0x00092d58, /* Controller 9, led 241, offset 11608 */
	0x000a2d5c, /* Controller 10, led 241, offset 11612 */
	0x000b2d60, /* Controller 11, led 241, offset 11616 */
	0x00002d64, /* Controller 0, led 242, offset 11620 */
	0x00012d68, /* Controller 1, led 242, offset 11624 */
	0x00022d6c, /* Controller 2, led 242, offset 11628 */
	0x00032d70, /* Controller 3, led 242, offset 11632 */
	0x00042d74, /* Controller 4, led 242, offset 11636 */
	0x00052d78, /* Controller 5, led 242, offset 11640 */
	0x00062d7c, /* Controller 6, led 242, offset 11644 */
	0x00072d80, /* Controller 7, led 242, offset 11648 */
	0x00082d84, /* Controller 8, led 242, offset 11652 */
	0x00092d88, /* Controller 9, led 242, offset 11656 */
	0x000a2d8c, /* Controller 10, led 242, offset 11660 */
	0x000b2d90, /* Controller 11, led 242, offset 11664 */
	0x00002d94, /* Controller 0, led 243, offset 11668 */
	0x00012d98, /* Controller 1, led 243, offset 11672 */
	0x00022d9c, /* Controller 2, led 243, offset 11676 */
	0x00032da0, /* Controller 3, led 243, offset 11680 */
	0x00042da4, /* Controller 4, led 243, offset 11684 */
	0x00052da8, /* Controller 5, led 243, offset 11688 */
	0x00062dac, /* Controller 6, led 243, offset 11692 */
	0x00072db0, /* Controller 7, led 243, offset 11696 */
	0x00082db4, /* Controller 8, led 243, offset 11700 */
	0x00092db8, /* Controller 9, led 243, offset 11704 */
	0x000a2dbc, /* Controller 10, led 243, offset 11708 */
	0x000b2dc0, /* Controller 11, led 243, offset 11712 */
	0x00002dc4, /* Controller 0, led 244, offset 11716 */
	0x00012dc8, /* Controller 1, led 244, offset 11720 */
	0x00022dcc, /* Controller 2, led 244, offset 11724 */
	0x00032dd0, /* Controller 3, led 244, offset 11728 */
	0x00042dd4, /* Controller 4, led 244, offset 11732 */
	0x00052dd8, /* Controller 5, led 244, offset 11736 */
	0x00062ddc, /* Controller 6, led 244, offset 11740 */
	0x00072de0, /* Controller 7, led 244, offset 11744 */
	0x00082de4, /* Controller 8, led 244, offset 11748 */
	0x00092de8, /* Controller 9, led 244, offset 11752 */
	0x000a2dec, /* Controller 10, led 244, offset 11756 */
	0x000b2df0, /* Controller 11, led 244, offset 11760 */
	0x00002df4, /* Controller 0, led 245, offset 11764 */
	0x00012df8, /* Controller 1, led 245, offset 11768 */
	0x00022dfc, /* Controller 2, led 245, offset 11772 */
	0x00032e00, /* Controller 3, led 245, offset 11776 */
	0x00042e04, /* Controller 4, led 245, offset 11780 */
	0x00052e08, /* Controller 5, led 245, offset 11784 */
	0x00062e0c, /* Controller 6, led 245, offset 11788 */
	0x00072e10, /* Controller 7, led 245, offset 11792 */
	0x00082e14, /* Controller 8, led 245, offset 11796 */
	0x00092e18, /* Controller 9, led 245, offset 11800 */
	0x000a2e1c, /* Controller 10, led 245, offset 11804 */
	0x000b2e20, /* Controller 11, led 245, offset 11808 */
	0x00002e24, /* Controller 0, led 246, offset 11812 */
	0x00012e28, /* Controller 1, led 246, offset 11816 */
	0x00022e2c, /* Controller 2, led 246, offset 11820 */
	0x00032e30, /* Controller 3, led 246, offset 11824 */
	0x00042e34, /* Controller 4, led 246, offset 11828 */
	0x00052e38, /* Controller 5, led 246, offset 11832 */
	0x00062e3c, /* Controller 6, led 246, offset 11836 */
	0x00072e40, /* Controller 7, led 246, offset 11840 */
	0x00082e44, /* Controller 8, led 246, offset 11844 */
	0x00092e48, /* Controller 9, led 246, offset 11848 */
	0x000a2e4c, /* Controller 10, led 246, offset 11852 */
	0x000b2e50, /* Controller 11, led 246, offset 11856 */
	0x00002e54, /* Controller 0, led 247, offset 11860 */
	0x00012e58, /* Controller 1, led 247, offset 11864 */
	0x00022e5c, /* Controller 2, led 247, offset 11868 */
	0x00032e60, /* Controller 3, led 247, offset 11872 */
	0x00042e64, /* Controller 4, led 247, offset 11876 */
	0x00052e68, /* Controller 5, led 247, offset 11880 */
	0x00062e6c, /* Controller 6, led 247, offset 11884 */
	0x00072e70, /* Controller 7, led 247, offset 11888 */
	0x00082e74, /* Controller 8, led 247, offset 11892 */
	0x00092e78, /* Controller 9, led 247, offset 11896 */
	0x000a2e7c, /* Controller 10, led 247, offset 11900 */
	0x000b2e80, /* Controller 11, led 247, offset 11904 */
	0x00002e84, /* Controller 0, led 248, offset 11908 */
	0x00012e88, /* Controller 1, led 248, offset 11912 */
	0x00022e8c, /* Controller 2, led 248, offset 11916 */
	0x00032e90, /* Controller 3, led 248, offset 11920 */
	0x00042e94, /* Controller 4, led 248, offset 11924 */
	0x00052e98, /* Controller 5, led 248, offset 11928 */
	0x00062e9c, /* Controller 6, led 248, offset 11932 */
	0x00072ea0, /* Controller 7, led 248, offset 11936 */
	0x00082ea4, /* Controller 8, led 248, offset 11940 */
	0x00092ea8, /* Controller 9, led 248, offset 11944 */
	0x000a2eac, /* Controller 10, led 248, offset 11948 */
	0x000b2eb0, /* Controller 11, led 248, offset 11952 */
	0x00002eb4, /* Controller 0, led 249, offset 11956 */
	0x00012eb8, /* Controller 1, led 249, offset 11960 */
	0x00022ebc, /* Controller 2, led 249, offset 11964 */
	0x00032ec0, /* Controller 3, led 249, offset 11968 */
	0x00042ec4, /* Controller 4, led 249, offset 11972 */
	0x00052ec8, /* Controller 5, led 249, offset 11976 */
	0x00062ecc, /* Controller 6, led 249, offset 11980 */
	0x00072ed0, /* Controller 7, led 249, offset 11984 */
	0x00082ed4, /* Controller 8, led 249, offset 11988 */
	0x00092ed8, /* Controller 9, led 249, offset 11992 */
	0x000a2edc, /* Controller 10, led 249, offset 11996 */
	0x000b2ee0, /* Controller 11, led 249, offset 12000 */
	0x00002ee4, /* Controller 0, led 250, offset 12004 */
	0x00012ee8, /* Controller 1, led 250, offset 12008 */
	0x00022eec, /* Controller 2, led 250, offset 12012 */
	0x00032ef0, /* Controller 3, led 250, offset 12016 */
	0x00042ef4, /* Controller 4, led 250, offset 12020 */
	0x00052ef8, /* Controller 5, led 250, offset 12024 */
	0x00062efc, /* Controller 6, led 250, offset 12028 */
	0x00072f00, /* Controller 7, led 250, offset 12032 */
	0x00082f04, /* Controller 8, led 250, offset 12036 */
	0x00092f08, /* Controller 9, led 250, offset 12040 */
	0x000a2f0c, /* Controller 10, led 250, offset 12044 */
	0x000b2f10, /* Controller 11, led 250, offset 12048 */
	0x00002f14, /* Controller 0, led 251, offset 12052 */
	0x00012f18, /* Controller 1, led 251, offset 12056 */
	0x00022f1c, /* Controller 2, led 251, offset 12060 */
	0x00032f20, /* Controller 3, led 251, offset 12064 */
	0x00042f24, /* Controller 4, led 251, offset 12068 */
	0x00052f28, /* Controller 5, led 251, offset 12072 */
	0x00062f2c, /* Controller 6, led 251, offset 12076 */
	0x00072f30, /* Controller 7, led 251, offset 12080 */
	0x00082f34, /* Controller 8, led 251, offset 12084 */
	0x00092f38, /* Controller 9, led 251, offset 12088 */
	0x000a2f3c, /* Controller 10, led 251, offset 12092 */
	0x000b2f40, /* Controller 11, led 251, offset 12096 */
	0x00002f44, /* Controller 0, led 252, offset 12100 */
	0x00012f48, /* Controller 1, led 252, offset 12104 */
	0x00022f4c, /* Controller 2, led 252, offset 12108 */
	0x00032f50, /* Controller 3, led 252, offset 12112 */
	0x00042f54, /* Controller 4, led 252, offset 12116 */
	0x00052f58, /* Controller 5, led 252, offset 12120 */
	0x00062f5c, /* Controller 6, led 252, offset 12124 */
	0x00072f60, /* Controller 7, led 252, offset 12128 */
	0x00082f64, /* Controller 8, led 252, offset 12132 */
	0x00092f68, /* Controller 9, led 252, offset 12136 */
	0x000a2f6c, /* Controller 10, led 252, offset 12140 */
	0x000b2f70, /* Controller 11, led 252, offset 12144 */
	0x00002f74, /* Controller 0, led 253, offset 12148 */
	0x00012f78, /* Controller 1, led 253, offset 12152 */
	0x00022f7c, /* Controller 2, led 253, offset 12156 */
	0x00032f80, /* Controller 3, led 253, offset 12160 */
	0x00042f84, /* Controller 4, led 253, offset 12164 */
	0x00052f88, /* Controller 5, led 253, offset 12168 */
	0x00062f8c, /* Controller 6, led 253, offset 12172 */
	0x00072f90, /* Controller 7, led 253, offset 12176 */
	0x00082f94, /* Controller 8, led 253, offset 12180 */
	0x00092f98, /* Controller 9, led 253, offset 12184 */
	0x000a2f9c, /* Controller 10, led 253, offset 12188 */
	0x000b2fa0, /* Controller 11, led 253, offset 12192 */
	0x00002fa4, /* Controller 0, led 254, offset 12196 */
	0x00012fa8, /* Controller 1, led 254, offset 12200 */
	0x00022fac, /* Controller 2, led 254, offset 12204 */
	0x00032fb0, /* Controller 3, led 254, offset 12208 */
	0x00042fb4, /* Controller 4, led 254, offset 12212 */
	0x00052fb8, /* Controller 5, led 254, offset 12216 */
	0x00062fbc, /* Controller 6, led 254, offset 12220 */
	0x00072fc0, /* Controller 7, led 254, offset 12224 */
	0x00082fc4, /* Controller 8, led 254, offset 12228 */
	0x00092fc8, /* Controller 9, led 254, offset 12232 */
	0x000a2fcc, /* Controller 10, led 254, offset 12236 */
	0x000b2fd0, /* Controller 11, led 254, offset 12240 */
	0x00002fd4, /* Controller 0, led 255, offset 12244 */
	0x00012fd8, /* Controller 1, led 255, offset 12248 */
	0x00022fdc, /* Controller 2, led 255, offset 12252 */
	0x00032fe0, /* Controller 3, led 255, offset 12256 */
	0x00042fe4, /* Controller 4, led 255, offset 12260 */
	0x00052fe8, /* Controller 5, led 255, offset 12264 */
	0x00062fec, /* Controller 6, led 255, offset 12268 */
	0x00072ff0, /* Controller 7, led 255, offset 12272 */
	0x00082ff4, /* Controller 8, led 255, offset 12276 */
	0x00092ff8, /* Controller 9, led 255, offset 12280 */
	0x000a2ffc, /* Controller 10, led 255, offset 12284 */
	0x000b3000, /* Controller 11, led 255, offset 12288 */
	0x00003004, /* Controller 0, led 256, offset 12292 */
	0x00013008, /* Controller 1, led 256, offset 12296 */
	0x0002300c, /* Controller 2, led 256, offset 12300 */
	0x00033010, /* Controller 3, led 256, offset 12304 */
	0x00043014, /* Controller 4, led 256, offset 12308 */
	0x00053018, /* Controller 5, led 256, offset 12312 */
	0x0006301c, /* Controller 6, led 256, offset 12316 */
	0x00073020, /* Controller 7, led 256, offset 12320 */
	0x00083024, /* Controller 8, led 256, offset 12324 */
	0x00093028, /* Controller 9, led 256, offset 12328 */
	0x000a302c, /* Controller 10, led 256, offset 12332 */
	0x000b3030, /* Controller 11, led 256, offset 12336 */
	0x00003034, /* Controller 0, led 257, offset 12340 */
	0x00013038, /* Controller 1, led 257, offset 12344 */
	0x0002303c, /* Controller 2, led 257, offset 12348 */
	0x00033040, /* Controller 3, led 257, offset 12352 */
	0x00043044, /* Controller 4, led 257, offset 12356 */
	0x00053048, /* Controller 5, led 257, offset 12360 */
	0x0006304c, /* Controller 6, led 257, offset 12364 */
	0x00073050, /* Controller 7, led 257, offset 12368 */
	0x00083054, /* Controller 8, led 257, offset 12372 */
	0x00093058, /* Controller 9, led 257, offset 12376 */
	0x000a305c, /* Controller 10, led 257, offset 12380 */
	0x000b3060, /* Controller 11, led 257, offset 12384 */
	0x00003064, /* Controller 0, led 258, offset 12388 */
	0x00013068, /* Controller 1, led 258, offset 12392 */
	0x0002306c, /* Controller 2, led 258, offset 12396 */
	0x00033070, /* Controller 3, led 258, offset 12400 */
	0x00043074, /* Controller 4, led 258, offset 12404 */
	0x00053078, /* Controller 5, led 258, offset 12408 */
	0x0006307c, /* Controller 6, led 258, offset 12412 */
	0x00073080, /* Controller 7, led 258, offset 12416 */
	0x00083084, /* Controller 8, led 258, offset 12420 */
	0x00093088, /* Controller 9, led 258, offset 12424 */
	0x000a308c, /* Controller 10, led 258, offset 12428 */
	0x000b3090, /* Controller 11, led 258, offset 12432 */
	0x00003094, /* Controller 0, led 259, offset 12436 */
	0x00013098, /* Controller 1, led 259, offset 12440 */
	0x0002309c, /* Controller 2, led 259, offset 12444 */
	0x000330a0, /* Controller 3, led 259, offset 12448 */
	0x000430a4, /* Controller 4, led 259, offset 12452 */
	0x000530a8, /* Controller 5, led 259, offset 12456 */
	0x000630ac, /* Controller 6, led 259, offset 12460 */
	0x000730b0, /* Controller 7, led 259, offset 12464 */
	0x000830b4, /* Controller 8, led 259, offset 12468 */
	0x000930b8, /* Controller 9, led 259, offset 12472 */
	0x000a30bc, /* Controller 10, led 259, offset 12476 */
	0x000b30c0, /* Controller 11, led 259, offset 12480 */
	0x000030c4, /* Controller 0, led 260, offset 12484 */
	0x000130c8, /* Controller 1, led 260, offset 12488 */
	0x000230cc, /* Controller 2, led 260, offset 12492 */
	0x000330d0, /* Controller 3, led 260, offset 12496 */
	0x000430d4, /* Controller 4, led 260, offset 12500 */
	0x000530d8, /* Controller 5, led 260, offset 12504 */
	0x000630dc, /* Controller 6, led 260, offset 12508 */
	0x000730e0, /* Controller 7, led 260, offset 12512 */
	0x000830e4, /* Controller 8, led 260, offset 12516 */
	0x000930e8, /* Controller 9, led 260, offset 12520 */
	0x000a30ec, /* Controller 10, led 260, offset 12524 */
	0x000b30f0, /* Controller 11, led 260, offset 12528 */
	0x000030f4, /* Controller 0, led 261, offset 12532 */
	0x000130f8, /* Controller 1, led 261, offset 12536 */
	0x000230fc, /* Controller 2, led 261, offset 12540 */
	0x00033100, /* Controller 3, led 261, offset 12544 */
	0x00043104, /* Controller 4, led 261, offset 12548 */
	0x00053108, /* Controller 5, led 261, offset 12552 */
	0x0006310c, /* Controller 6, led 261, offset 12556 */
	0x00073110, /* Controller 7, led 261, offset 12560 */
	0x00083114, /* Controller 8, led 261, offset 12564 */
	0x00093118, /* Controller 9, led 261, offset 12568 */
	0x000a311c, /* Controller 10, led 261, offset 12572 */
	0x000b3120, /* Controller 11, led 261, offset 12576 */
	0x00003124, /* Controller 0, led 262, offset 12580 */
	0x00013128, /* Controller 1, led 262, offset 12584 */
	0x0002312c, /* Controller 2, led 262, offset 12588 */
	0x00033130, /* Controller 3, led 262, offset 12592 */
	0x00043134, /* Controller 4, led 262, offset 12596 */
	0x00053138, /* Controller 5, led 262, offset 12600 */
	0x0006313c, /* Controller 6, led 262, offset 12604 */
	0x00073140, /* Controller 7, led 262, offset 12608 */
	0x00083144, /* Controller 8, led 262, offset 12612 */
	0x00093148, /* Controller 9, led 262, offset 12616 */
	0x000a314c, /* Controller 10, led 262, offset 12620 */
	0x000b3150, /* Controller 11, led 262, offset 12624 */
	0x00003154, /* Controller 0, led 263, offset 12628 */
	0x00013158, /* Controller 1, led 263, offset 12632 */
	0x0002315c, /* Controller 2, led 263, offset 12636 */
	0x00033160, /* Controller 3, led 263, offset 12640 */
	0x00043164, /* Controller 4, led 263, offset 12644 */
	0x00053168, /* Controller 5, led 263, offset 12648 */
	0x0006316c, /* Controller 6, led 263, offset 12652 */
	0x00073170, /* Controller 7, led 263, offset 12656 */
	0x00083174, /* Controller 8, led 263, offset 12660 */
	0x00093178, /* Controller 9, led 263, offset 12664 */
	0x000a317c, /* Controller 10, led 263, offset 12668 */
	0x000b3180, /* Controller 11, led 263, offset 12672 */
	0x00003184, /* Controller 0, led 264, offset 12676 */
	0x00013188, /* Controller 1, led 264, offset 12680 */
	0x0002318c, /* Controller 2, led 264, offset 12684 */
	0x00033190, /* Controller 3, led 264, offset 12688 */
	0x00043194, /* Controller 4, led 264, offset 12692 */
	0x00053198, /* Controller 5, led 264, offset 12696 */
	0x0006319c, /* Controller 6, led 264, offset 12700 */
	0x000731a0, /* Controller 7, led 264, offset 12704 */
	0x000831a4, /* Controller 8, led 264, offset 12708 */
	0x000931a8, /* Controller 9, led 264, offset 12712 */
	0x000a31ac, /* Controller 10, led 264, offset 12716 */
	0x000b31b0, /* Controller 11, led 264, offset 12720 */
	0x000031b4, /* Controller 0, led 265, offset 12724 */
	0x000131b8, /* Controller 1, led 265, offset 12728 */
	0x000231bc, /* Controller 2, led 265, offset 12732 */
	0x000331c0, /* Controller 3, led 265, offset 12736 */
	0x000431c4, /* Controller 4, led 265, offset 12740 */
	0x000531c8, /* Controller 5, led 265, offset 12744 */
	0x000631cc, /* Controller 6, led 265, offset 12748 */
	0x000731d0, /* Controller 7, led 265, offset 12752 */
	0x000831d4, /* Controller 8, led 265, offset 12756 */
	0x000931d8, /* Controller 9, led 265, offset 12760 */
	0x000a31dc, /* Controller 10, led 265, offset 12764 */
	0x000b31e0, /* Controller 11, led 265, offset 12768 */
	0x000031e4, /* Controller 0, led 266, offset 12772 */
	0x000131e8, /* Controller 1, led 266, offset 12776 */
	0x000231ec, /* Controller 2, led 266, offset 12780 */
	0x000331f0, /* Controller 3, led 266, offset 12784 */
	0x000431f4, /* Controller 4, led 266, offset 12788 */
	0x000531f8, /* Controller 5, led 266, offset 12792 */
	0x000631fc, /* Controller 6, led 266, offset 12796 */
	0x00073200, /* Controller 7, led 266, offset 12800 */
	0x00083204, /* Controller 8, led 266, offset 12804 */
	0x00093208, /* Controller 9, led 266, offset 12808 */
	0x000a320c, /* Controller 10, led 266, offset 12812 */
	0x000b3210, /* Controller 11, led 266, offset 12816 */
	0x00003214, /* Controller 0, led 267, offset 12820 */
	0x00013218, /* Controller 1, led 267, offset 12824 */
	0x0002321c, /* Controller 2, led 267, offset 12828 */
	0x00033220, /* Controller 3, led 267, offset 12832 */
	0x00043224, /* Controller 4, led 267, offset 12836 */
	0x00053228, /* Controller 5, led 267, offset 12840 */
	0x0006322c, /* Controller 6, led 267, offset 12844 */
	0x00073230, /* Controller 7, led 267, offset 12848 */
	0x00083234, /* Controller 8, led 267, offset 12852 */
	0x00093238, /* Controller 9, led 267, offset 12856 */
	0x000a323c, /* Controller 10, led 267, offset 12860 */
	0x000b3240, /* Controller 11, led 267, offset 12864 */
	0x00003244, /* Controller 0, led 268, offset 12868 */
	0x00013248, /* Controller 1, led 268, offset 12872 */
	0x0002324c, /* Controller 2, led 268, offset 12876 */
	0x00033250, /* Controller 3, led 268, offset 12880 */
	0x00043254, /* Controller 4, led 268, offset 12884 */
	0x00053258, /* Controller 5, led 268, offset 12888 */
	0x0006325c, /* Controller 6, led 268, offset 12892 */
	0x00073260, /* Controller 7, led 268, offset 12896 */
	0x00083264, /* Controller 8, led 268, offset 12900 */
	0x00093268, /* Controller 9, led 268, offset 12904 */
	0x000a326c, /* Controller 10, led 268, offset 12908 */
	0x000b3270, /* Controller 11, led 268, offset 12912 */
	0x00003274, /* Controller 0, led 269, offset 12916 */
	0x00013278, /* Controller 1, led 269, offset 12920 */
	0x0002327c, /* Controller 2, led 269, offset 12924 */
	0x00033280, /* Controller 3, led 269, offset 12928 */
	0x00043284, /* Controller 4, led 269, offset 12932 */
	0x00053288, /* Controller 5, led 269, offset 12936 */
	0x0006328c, /* Controller 6, led 269, offset 12940 */
	0x00073290, /* Controller 7, led 269, offset 12944 */
	0x00083294, /* Controller 8, led 269, offset 12948 */
	0x00093298, /* Controller 9, led 269, offset 12952 */
	0x000a329c, /* Controller 10, led 269, offset 12956 */
	0x000b32a0, /* Controller 11, led 269, offset 12960 */
	0x000032a4, /* Controller 0, led 270, offset 12964 */
	0x000132a8, /* Controller 1, led 270, offset 12968 */
	0x000232ac, /* Controller 2, led 270, offset 12972 */
	0x000332b0, /* Controller 3, led 270, offset 12976 */
	0x000432b4, /* Controller 4, led 270, offset 12980 */
	0x000532b8, /* Controller 5, led 270, offset 12984 */
	0x000632bc, /* Controller 6, led 270, offset 12988 */
	0x000732c0, /* Controller 7, led 270, offset 12992 */
	0x000832c4, /* Controller 8, led 270, offset 12996 */
	0x000932c8, /* Controller 9, led 270, offset 13000 */
	0x000a32cc, /* Controller 10, led 270, offset 13004 */
	0x000b32d0, /* Controller 11, led 270, offset 13008 */
	0x000032d4, /* Controller 0, led 271, offset 13012 */
	0x000132d8, /* Controller 1, led 271, offset 13016 */
	0x000232dc, /* Controller 2, led 271, offset 13020 */
	0x000332e0, /* Controller 3, led 271, offset 13024 */
	0x000432e4, /* Controller 4, led 271, offset 13028 */
	0x000532e8, /* Controller 5, led 271, offset 13032 */
	0x000632ec, /* Controller 6, led 271, offset 13036 */
	0x000732f0, /* Controller 7, led 271, offset 13040 */
	0x000832f4, /* Controller 8, led 271, offset 13044 */
	0x000932f8, /* Controller 9, led 271, offset 13048 */
	0x000a32fc, /* Controller 10, led 271, offset 13052 */
	0x000b3300, /* Controller 11, led 271, offset 13056 */
	0x00003304, /* Controller 0, led 272, offset 13060 */
	0x00013308, /* Controller 1, led 272, offset 13064 */
	0x0002330c, /* Controller 2, led 272, offset 13068 */
	0x00033310, /* Controller 3, led 272, offset 13072 */
	0x00043314, /* Controller 4, led 272, offset 13076 */
	0x00053318, /* Controller 5, led 272, offset 13080 */
	0x0006331c, /* Controller 6, led 272, offset 13084 */
	0x00073320, /* Controller 7, led 272, offset 13088 */
	0x00083324, /* Controller 8, led 272, offset 13092 */
	0x00093328, /* Controller 9, led 272, offset 13096 */
	0x000a332c, /* Controller 10, led 272, offset 13100 */
	0x000b3330, /* Controller 11, led 272, offset 13104 */
	0x00003334, /* Controller 0, led 273, offset 13108 */
	0x00013338, /* Controller 1, led 273, offset 13112 */
	0x0002333c, /* Controller 2, led 273, offset 13116 */
	0x00033340, /* Controller 3, led 273, offset 13120 */
	0x00043344, /* Controller 4, led 273, offset 13124 */
	0x00053348, /* Controller 5, led 273, offset 13128 */
	0x0006334c, /* Controller 6, led 273, offset 13132 */
	0x00073350, /* Controller 7, led 273, offset 13136 */
	0x00083354, /* Controller 8, led 273, offset 13140 */
	0x00093358, /* Controller 9, led 273, offset 13144 */
	0x000a335c, /* Controller 10, led 273, offset 13148 */
	0x000b3360, /* Controller 11, led 273, offset 13152 */
	0x00003364, /* Controller 0, led 274, offset 13156 */
	0x00013368, /* Controller 1, led 274, offset 13160 */
	0x0002336c, /* Controller 2, led 274, offset 13164 */
	0x00033370, /* Controller 3, led 274, offset 13168 */
	0x00043374, /* Controller 4, led 274, offset 13172 */
	0x00053378, /* Controller 5, led 274, offset 13176 */
	0x0006337c, /* Controller 6, led 274, offset 13180 */
	0x00073380, /* Controller 7, led 274, offset 13184 */
	0x00083384, /* Controller 8, led 274, offset 13188 */
	0x00093388, /* Controller 9, led 274, offset 13192 */
	0x000a338c, /* Controller 10, led 274, offset 13196 */
	0x000b3390, /* Controller 11, led 274, offset 13200 */
	0x00003394, /* Controller 0, led 275, offset 13204 */
	0x00013398, /* Controller 1, led 275, offset 13208 */
	0x0002339c, /* Controller 2, led 275, offset 13212 */
	0x000333a0, /* Controller 3, led 275, offset 13216 */
	0x000433a4, /* Controller 4, led 275, offset 13220 */
	0x000533a8, /* Controller 5, led 275, offset 13224 */
	0x000633ac, /* Controller 6, led 275, offset 13228 */
	0x000733b0, /* Controller 7, led 275, offset 13232 */
	0x000833b4, /* Controller 8, led 275, offset 13236 */
	0x000933b8, /* Controller 9, led 275, offset 13240 */
	0x000a33bc, /* Controller 10, led 275, offset 13244 */
	0x000b33c0, /* Controller 11, led 275, offset 13248 */
	0x000033c4, /* Controller 0, led 276, offset 13252 */
	0x000133c8, /* Controller 1, led 276, offset 13256 */
	0x000233cc, /* Controller 2, led 276, offset 13260 */
	0x000333d0, /* Controller 3, led 276, offset 13264 */
	0x000433d4, /* Controller 4, led 276, offset 13268 */
	0x000533d8, /* Controller 5, led 276, offset 13272 */
	0x000633dc, /* Controller 6, led 276, offset 13276 */
	0x000733e0, /* Controller 7, led 276, offset 13280 */
	0x000833e4, /* Controller 8, led 276, offset 13284 */
	0x000933e8, /* Controller 9, led 276, offset 13288 */
	0x000a33ec, /* Controller 10, led 276, offset 13292 */
	0x000b33f0, /* Controller 11, led 276, offset 13296 */
	0x000033f4, /* Controller 0, led 277, offset 13300 */
	0x000133f8, /* Controller 1, led 277, offset 13304 */
	0x000233fc, /* Controller 2, led 277, offset 13308 */
	0x00033400, /* Controller 3, led 277, offset 13312 */
	0x00043404, /* Controller 4, led 277, offset 13316 */
	0x00053408, /* Controller 5, led 277, offset 13320 */
	0x0006340c, /* Controller 6, led 277, offset 13324 */
	0x00073410, /* Controller 7, led 277, offset 13328 */
	0x00083414, /* Controller 8, led 277, offset 13332 */
	0x00093418, /* Controller 9, led 277, offset 13336 */
	0x000a341c, /* Controller 10, led 277, offset 13340 */
	0x000b3420, /* Controller 11, led 277, offset 13344 */
	0x00003424, /* Controller 0, led 278, offset 13348 */
	0x00013428, /* Controller 1, led 278, offset 13352 */
	0x0002342c, /* Controller 2, led 278, offset 13356 */
	0x00033430, /* Controller 3, led 278, offset 13360 */
	0x00043434, /* Controller 4, led 278, offset 13364 */
	0x00053438, /* Controller 5, led 278, offset 13368 */
	0x0006343c, /* Controller 6, led 278, offset 13372 */
	0x00073440, /* Controller 7, led 278, offset 13376 */
	0x00083444, /* Controller 8, led 278, offset 13380 */
	0x00093448, /* Controller 9, led 278, offset 13384 */
	0x000a344c, /* Controller 10, led 278, offset 13388 */
	0x000b3450, /* Controller 11, led 278, offset 13392 */
	0x00003454, /* Controller 0, led 279, offset 13396 */
	0x00013458, /* Controller 1, led 279, offset 13400 */
	0x0002345c, /* Controller 2, led 279, offset 13404 */
	0x00033460, /* Controller 3, led 279, offset 13408 */
	0x00043464, /* Controller 4, led 279, offset 13412 */
	0x00053468, /* Controller 5, led 279, offset 13416 */
	0x0006346c, /* Controller 6, led 279, offset 13420 */
	0x00073470, /* Controller 7, led 279, offset 13424 */
	0x00083474, /* Controller 8, led 279, offset 13428 */
	0x00093478, /* Controller 9, led 279, offset 13432 */
	0x000a347c, /* Controller 10, led 279, offset 13436 */
	0x000b3480, /* Controller 11, led 279, offset 13440 */
	0x00003484, /* Controller 0, led 280, offset 13444 */
	0x00013488, /* Controller 1, led 280, offset 13448 */
	0x0002348c, /* Controller 2, led 280, offset 13452 */
	0x00033490, /* Controller 3, led 280, offset 13456 */
	0x00043494, /* Controller 4, led 280, offset 13460 */
	0x00053498, /* Controller 5, led 280, offset 13464 */
	0x0006349c, /* Controller 6, led 280, offset 13468 */
	0x000734a0, /* Controller 7, led 280, offset 13472 */
	0x000834a4, /* Controller 8, led 280, offset 13476 */
	0x000934a8, /* Controller 9, led 280, offset 13480 */
	0x000a34ac, /* Controller 10, led 280, offset 13484 */
	0x000b34b0, /* Controller 11, led 280, offset 13488 */
	0x000034b4, /* Controller 0, led 281, offset 13492 */
	0x000134b8, /* Controller 1, led 281, offset 13496 */
	0x000234bc, /* Controller 2, led 281, offset 13500 */
	0x000334c0, /* Controller 3, led 281, offset 13504 */
	0x000434c4, /* Controller 4, led 281, offset 13508 */
	0x000534c8, /* Controller 5, led 281, offset 13512 */
	0x000634cc, /* Controller 6, led 281, offset 13516 */
	0x000734d0, /* Controller 7, led 281, offset 13520 */
	0x000834d4, /* Controller 8, led 281, offset 13524 */
	0x000934d8, /* Controller 9, led 281, offset 13528 */
	0x000a34dc, /* Controller 10, led 281, offset 13532 */
	0x000b34e0, /* Controller 11, led 281, offset 13536 */
	0x000034e4, /* Controller 0, led 282, offset 13540 */
	0x000134e8, /* Controller 1, led 282, offset 13544 */
	0x000234ec, /* Controller 2, led 282, offset 13548 */
	0x000334f0, /* Controller 3, led 282, offset 13552 */
	0x000434f4, /* Controller 4, led 282, offset 13556 */
	0x000534f8, /* Controller 5, led 282, offset 13560 */
	0x000634fc, /* Controller 6, led 282, offset 13564 */
	0x00073500, /* Controller 7, led 282, offset 13568 */
	0x00083504, /* Controller 8, led 282, offset 13572 */
	0x00093508, /* Controller 9, led 282, offset 13576 */
	0x000a350c, /* Controller 10, led 282, offset 13580 */
	0x000b3510, /* Controller 11, led 282, offset 13584 */
	0x00003514, /* Controller 0, led 283, offset 13588 */
	0x00013518, /* Controller 1, led 283, offset 13592 */
	0x0002351c, /* Controller 2, led 283, offset 13596 */
	0x00033520, /* Controller 3, led 283, offset 13600 */
	0x00043524, /* Controller 4, led 283, offset 13604 */
	0x00053528, /* Controller 5, led 283, offset 13608 */
	0x0006352c, /* Controller 6, led 283, offset 13612 */
	0x00073530, /* Controller 7, led 283, offset 13616 */
	0x00083534, /* Controller 8, led 283, offset 13620 */
	0x00093538, /* Controller 9, led 283, offset 13624 */
	0x000a353c, /* Controller 10, led 283, offset 13628 */
	0x000b3540, /* Controller 11, led 283, offset 13632 */
	0x00003544, /* Controller 0, led 284, offset 13636 */
	0x00013548, /* Controller 1, led 284, offset 13640 */
	0x0002354c, /* Controller 2, led 284, offset 13644 */
	0x00033550, /* Controller 3, led 284, offset 13648 */
	0x00043554, /* Controller 4, led 284, offset 13652 */
	0x00053558, /* Controller 5, led 284, offset 13656 */
	0x0006355c, /* Controller 6, led 284, offset 13660 */
	0x00073560, /* Controller 7, led 284, offset 13664 */
	0x00083564, /* Controller 8, led 284, offset 13668 */
	0x00093568, /* Controller 9, led 284, offset 13672 */
	0x000a356c, /* Controller 10, led 284, offset 13676 */
	0x000b3570, /* Controller 11, led 284, offset 13680 */
	0x00003574, /* Controller 0, led 285, offset 13684 */
	0x00013578, /* Controller 1, led 285, offset 13688 */
	0x0002357c, /* Controller 2, led 285, offset 13692 */
	0x00033580, /* Controller 3, led 285, offset 13696 */
	0x00043584, /* Controller 4, led 285, offset 13700 */
	0x00053588, /* Controller 5, led 285, offset 13704 */
	0x0006358c, /* Controller 6, led 285, offset 13708 */
	0x00073590, /* Controller 7, led 285, offset 13712 */
	0x00083594, /* Controller 8, led 285, offset 13716 */
	0x00093598, /* Controller 9, led 285, offset 13720 */
	0x000a359c, /* Controller 10, led 285, offset 13724 */
	0x000b35a0, /* Controller 11, led 285, offset 13728 */
	0x000035a4, /* Controller 0, led 286, offset 13732 */
	0x000135a8, /* Controller 1, led 286, offset 13736 */
	0x000235ac, /* Controller 2, led 286, offset 13740 */
	0x000335b0, /* Controller 3, led 286, offset 13744 */
	0x000435b4, /* Controller 4, led 286, offset 13748 */
	0x000535b8, /* Controller 5, led 286, offset 13752 */
	0x000635bc, /* Controller 6, led 286, offset 13756 */
	0x000735c0, /* Controller 7, led 286, offset 13760 */
	0x000835c4, /* Controller 8, led 286, offset 13764 */
	0x000935c8, /* Controller 9, led 286, offset 13768 */
	0x000a35cc, /* Controller 10, led 286, offset 13772 */
	0x000b35d0, /* Controller 11, led 286, offset 13776 */
	0x000035d4, /* Controller 0, led 287, offset 13780 */
	0x000135d8, /* Controller 1, led 287, offset 13784 */
	0x000235dc, /* Controller 2, led 287, offset 13788 */
	0x000335e0, /* Controller 3, led 287, offset 13792 */
	0x000435e4, /* Controller 4, led 287, offset 13796 */
	0x000535e8, /* Controller 5, led 287, offset 13800 */
	0x000635ec, /* Controller 6, led 287, offset 13804 */
	0x000735f0, /* Controller 7, led 287, offset 13808 */
	0x000835f4, /* Controller 8, led 287, offset 13812 */
	0x000935f8, /* Controller 9, led 287, offset 13816 */
	0x000a35fc, /* Controller 10, led 287, offset 13820 */
	0x000b3600, /* Controller 11, led 287, offset 13824 */
	0x00003604, /* Controller 0, led 288, offset 13828 */
	0x00013608, /* Controller 1, led 288, offset 13832 */
	0x0002360c, /* Controller 2, led 288, offset 13836 */
	0x00033610, /* Controller 3, led 288, offset 13840 */
	0x00043614, /* Controller 4, led 288, offset 13844 */
	0x00053618, /* Controller 5, led 288, offset 13848 */
	0x0006361c, /* Controller 6, led 288, offset 13852 */
	0x00073620, /* Controller 7, led 288, offset 13856 */
	0x00083624, /* Controller 8, led 288, offset 13860 */
	0x00093628, /* Controller 9, led 288, offset 13864 */
	0x000a362c, /* Controller 10, led 288, offset 13868 */
	0x000b3630, /* Controller 11, led 288, offset 13872 */
	0x00003634, /* Controller 0, led 289, offset 13876 */
	0x00013638, /* Controller 1, led 289, offset 13880 */
	0x0002363c, /* Controller 2, led 289, offset 13884 */
	0x00033640, /* Controller 3, led 289, offset 13888 */
	0x00043644, /* Controller 4, led 289, offset 13892 */
	0x00053648, /* Controller 5, led 289, offset 13896 */
	0x0006364c, /* Controller 6, led 289, offset 13900 */
	0x00073650, /* Controller 7, led 289, offset 13904 */
	0x00083654, /* Controller 8, led 289, offset 13908 */
	0x00093658, /* Controller 9, led 289, offset 13912 */
	0x000a365c, /* Controller 10, led 289, offset 13916 */
	0x000b3660, /* Controller 11, led 289, offset 13920 */
	0x00003664, /* Controller 0, led 290, offset 13924 */
	0x00013668, /* Controller 1, led 290, offset 13928 */
	0x0002366c, /* Controller 2, led 290, offset 13932 */
	0x00033670, /* Controller 3, led 290, offset 13936 */
	0x00043674, /* Controller 4, led 290, offset 13940 */
	0x00053678, /* Controller 5, led 290, offset 13944 */
	0x0006367c, /* Controller 6, led 290, offset 13948 */
	0x00073680, /* Controller 7, led 290, offset 13952 */
	0x00083684, /* Controller 8, led 290, offset 13956 */
	0x00093688, /* Controller 9, led 290, offset 13960 */
	0x000a368c, /* Controller 10, led 290, offset 13964 */
	0x000b3690, /* Controller 11, led 290, offset 13968 */
	0x00003694, /* Controller 0, led 291, offset 13972 */
	0x00013698, /* Controller 1, led 291, offset 13976 */
	0x0002369c, /* Controller 2, led 291, offset 13980 */
	0x000336a0, /* Controller 3, led 291, offset 13984 */
	0x000436a4, /* Controller 4, led 291, offset 13988 */
	0x000536a8, /* Controller 5, led 291, offset 13992 */
	0x000636ac, /* Controller 6, led 291, offset 13996 */
	0x000736b0, /* Controller 7, led 291, offset 14000 */
	0x000836b4, /* Controller 8, led 291, offset 14004 */
	0x000936b8, /* Controller 9, led 291, offset 14008 */
	0x000a36bc, /* Controller 10, led 291, offset 14012 */
	0x000b36c0, /* Controller 11, led 291, offset 14016 */
	0x000036c4, /* Controller 0, led 292, offset 14020 */
	0x000136c8, /* Controller 1, led 292, offset 14024 */
	0x000236cc, /* Controller 2, led 292, offset 14028 */
	0x000336d0, /* Controller 3, led 292, offset 14032 */
	0x000436d4, /* Controller 4, led 292, offset 14036 */
	0x000536d8, /* Controller 5, led 292, offset 14040 */
	0x000636dc, /* Controller 6, led 292, offset 14044 */
	0x000736e0, /* Controller 7, led 292, offset 14048 */
	0x000836e4, /* Controller 8, led 292, offset 14052 */
	0x000936e8, /* Controller 9, led 292, offset 14056 */
	0x000a36ec, /* Controller 10, led 292, offset 14060 */
	0x000b36f0, /* Controller 11, led 292, offset 14064 */
	0x000036f4, /* Controller 0, led 293, offset 14068 */
	0x000136f8, /* Controller 1, led 293, offset 14072 */
	0x000236fc, /* Controller 2, led 293, offset 14076 */
	0x00033700, /* Controller 3, led 293, offset 14080 */
	0x00043704, /* Controller 4, led 293, offset 14084 */
	0x00053708, /* Controller 5, led 293, offset 14088 */
	0x0006370c, /* Controller 6, led 293, offset 14092 */
	0x00073710, /* Controller 7, led 293, offset 14096 */
	0x00083714, /* Controller 8, led 293, offset 14100 */
	0x00093718, /* Controller 9, led 293, offset 14104 */
	0x000a371c, /* Controller 10, led 293, offset 14108 */
	0x000b3720, /* Controller 11, led 293, offset 14112 */
	0x00003724, /* Controller 0, led 294, offset 14116 */
	0x00013728, /* Controller 1, led 294, offset 14120 */
	0x0002372c, /* Controller 2, led 294, offset 14124 */
	0x00033730, /* Controller 3, led 294, offset 14128 */
	0x00043734, /* Controller 4, led 294, offset 14132 */
	0x00053738, /* Controller 5, led 294, offset 14136 */
	0x0006373c, /* Controller 6, led 294, offset 14140 */
	0x00073740, /* Controller 7, led 294, offset 14144 */
	0x00083744, /* Controller 8, led 294, offset 14148 */
	0x00093748, /* Controller 9, led 294, offset 14152 */
	0x000a374c, /* Controller 10, led 294, offset 14156 */
	0x000b3750, /* Controller 11, led 294, offset 14160 */
	0x00003754, /* Controller 0, led 295, offset 14164 */
	0x00013758, /* Controller 1, led 295, offset 14168 */
	0x0002375c, /* Controller 2, led 295, offset 14172 */
	0x00033760, /* Controller 3, led 295, offset 14176 */
	0x00043764, /* Controller 4, led 295, offset 14180 */
	0x00053768, /* Controller 5, led 295, offset 14184 */
	0x0006376c, /* Controller 6, led 295, offset 14188 */
	0x00073770, /* Controller 7, led 295, offset 14192 */
	0x00083774, /* Controller 8, led 295, offset 14196 */
	0x00093778, /* Controller 9, led 295, offset 14200 */
	0x000a377c, /* Controller 10, led 295, offset 14204 */
	0x000b3780, /* Controller 11, led 295, offset 14208 */
	0x00003784, /* Controller 0, led 296, offset 14212 */
	0x00013788, /* Controller 1, led 296, offset 14216 */
	0x0002378c, /* Controller 2, led 296, offset 14220 */
	0x00033790, /* Controller 3, led 296, offset 14224 */
	0x00043794, /* Controller 4, led 296, offset 14228 */
	0x00053798, /* Controller 5, led 296, offset 14232 */
	0x0006379c, /* Controller 6, led 296, offset 14236 */
	0x000737a0, /* Controller 7, led 296, offset 14240 */
	0x000837a4, /* Controller 8, led 296, offset 14244 */
	0x000937a8, /* Controller 9, led 296, offset 14248 */
	0x000a37ac, /* Controller 10, led 296, offset 14252 */
	0x000b37b0, /* Controller 11, led 296, offset 14256 */
	0x000037b4, /* Controller 0, led 297, offset 14260 */
	0x000137b8, /* Controller 1, led 297, offset 14264 */
	0x000237bc, /* Controller 2, led 297, offset 14268 */
	0x000337c0, /* Controller 3, led 297, offset 14272 */
	0x000437c4, /* Controller 4, led 297, offset 14276 */
	0x000537c8, /* Controller 5, led 297, offset 14280 */
	0x000637cc, /* Controller 6, led 297, offset 14284 */
	0x000737d0, /* Controller 7, led 297, offset 14288 */
	0x000837d4, /* Controller 8, led 297, offset 14292 */
	0x000937d8, /* Controller 9, led 297, offset 14296 */
	0x000a37dc, /* Controller 10, led 297, offset 14300 */
	0x000b37e0, /* Controller 11, led 297, offset 14304 */
	0x000037e4, /* Controller 0, led 298, offset 14308 */
	0x000137e8, /* Controller 1, led 298, offset 14312 */
	0x000237ec, /* Controller 2, led 298, offset 14316 */
	0x000337f0, /* Controller 3, led 298, offset 14320 */
	0x000437f4, /* Controller 4, led 298, offset 14324 */
	0x000537f8, /* Controller 5, led 298, offset 14328 */
	0x000637fc, /* Controller 6, led 298, offset 14332 */
	0x00073800, /* Controller 7, led 298, offset 14336 */
	0x00083804, /* Controller 8, led 298, offset 14340 */
	0x00093808, /* Controller 9, led 298, offset 14344 */
	0x000a380c, /* Controller 10, led 298, offset 14348 */
	0x000b3810, /* Controller 11, led 298, offset 14352 */
	0x00003814, /* Controller 0, led 299, offset 14356 */
	0x00013818, /* Controller 1, led 299, offset 14360 */
	0x0002381c, /* Controller 2, led 299, offset 14364 */
	0x00033820, /* Controller 3, led 299, offset 14368 */
	0x00043824, /* Controller 4, led 299, offset 14372 */
	0x00053828, /* Controller 5, led 299, offset 14376 */
	0x0006382c, /* Controller 6, led 299, offset 14380 */
	0x00073830, /* Controller 7, led 299, offset 14384 */
	0x00083834, /* Controller 8, led 299, offset 14388 */
	0x00093838, /* Controller 9, led 299, offset 14392 */
	0x000a383c, /* Controller 10, led 299, offset 14396 */
	0x000b3840, /* Controller 11, led 299, offset 14400 */
	0x00003844, /* Controller 0, led 300, offset 14404 */
	0x00013848, /* Controller 1, led 300, offset 14408 */
	0x0002384c, /* Controller 2, led 300, offset 14412 */
	0x00033850, /* Controller 3, led 300, offset 14416 */
	0x00043854, /* Controller 4, led 300, offset 14420 */
	0x00053858, /* Controller 5, led 300, offset 14424 */
	0x0006385c, /* Controller 6, led 300, offset 14428 */
	0x00073860, /* Controller 7, led 300, offset 14432 */
	0x00083864, /* Controller 8, led 300, offset 14436 */
	0x00093868, /* Controller 9, led 300, offset 14440 */
	0x000a386c, /* Controller 10, led 300, offset 14444 */
	0x000b3870, /* Controller 11, led 300, offset 14448 */
	0x00003874, /* Controller 0, led 301, offset 14452 */
	0x00013878, /* Controller 1, led 301, offset 14456 */
	0x0002387c, /* Controller 2, led 301, offset 14460 */
	0x00033880, /* Controller 3, led 301, offset 14464 */
	0x00043884, /* Controller 4, led 301, offset 14468 */
	0x00053888, /* Controller 5, led 301, offset 14472 */
	0x0006388c, /* Controller 6, led 301, offset 14476 */
	0x00073890, /* Controller 7, led 301, offset 14480 */
	0x00083894, /* Controller 8, led 301, offset 14484 */
	0x00093898, /* Controller 9, led 301, offset 14488 */
	0x000a389c, /* Controller 10, led 301, offset 14492 */
	0x000b38a0, /* Controller 11, led 301, offset 14496 */
	0x000038a4, /* Controller 0, led 302, offset 14500 */
	0x000138a8, /* Controller 1, led 302, offset 14504 */
	0x000238ac, /* Controller 2, led 302, offset 14508 */
	0x000338b0, /* Controller 3, led 302, offset 14512 */
	0x000438b4, /* Controller 4, led 302, offset 14516 */
	0x000538b8, /* Controller 5, led 302, offset 14520 */
	0x000638bc, /* Controller 6, led 302, offset 14524 */
	0x000738c0, /* Controller 7, led 302, offset 14528 */
	0x000838c4, /* Controller 8, led 302, offset 14532 */
	0x000938c8, /* Controller 9, led 302, offset 14536 */
	0x000a38cc, /* Controller 10, led 302, offset 14540 */
	0x000b38d0, /* Controller 11, led 302, offset 14544 */
	0x000038d4, /* Controller 0, led 303, offset 14548 */
	0x000138d8, /* Controller 1, led 303, offset 14552 */
	0x000238dc, /* Controller 2, led 303, offset 14556 */
	0x000338e0, /* Controller 3, led 303, offset 14560 */
	0x000438e4, /* Controller 4, led 303, offset 14564 */
	0x000538e8, /* Controller 5, led 303, offset 14568 */
	0x000638ec, /* Controller 6, led 303, offset 14572 */
	0x000738f0, /* Controller 7, led 303, offset 14576 */
	0x000838f4, /* Controller 8, led 303, offset 14580 */
	0x000938f8, /* Controller 9, led 303, offset 14584 */
	0x000a38fc, /* Controller 10, led 303, offset 14588 */
	0x000b3900, /* Controller 11, led 303, offset 14592 */
	0x00003904, /* Controller 0, led 304, offset 14596 */
	0x00013908, /* Controller 1, led 304, offset 14600 */
	0x0002390c, /* Controller 2, led 304, offset 14604 */
	0x00033910, /* Controller 3, led 304, offset 14608 */
	0x00043914, /* Controller 4, led 304, offset 14612 */
	0x00053918, /* Controller 5, led 304, offset 14616 */
	0x0006391c, /* Controller 6, led 304, offset 14620 */
	0x00073920, /* Controller 7, led 304, offset 14624 */
	0x00083924, /* Controller 8, led 304, offset 14628 */
	0x00093928, /* Controller 9, led 304, offset 14632 */
	0x000a392c, /* Controller 10, led 304, offset 14636 */
	0x000b3930, /* Controller 11, led 304, offset 14640 */
	0x00003934, /* Controller 0, led 305, offset 14644 */
	0x00013938, /* Controller 1, led 305, offset 14648 */
	0x0002393c, /* Controller 2, led 305, offset 14652 */
	0x00033940, /* Controller 3, led 305, offset 14656 */
	0x00043944, /* Controller 4, led 305, offset 14660 */
	0x00053948, /* Controller 5, led 305, offset 14664 */
	0x0006394c, /* Controller 6, led 305, offset 14668 */
	0x00073950, /* Controller 7, led 305, offset 14672 */
	0x00083954, /* Controller 8, led 305, offset 14676 */
	0x00093958, /* Controller 9, led 305, offset 14680 */
	0x000a395c, /* Controller 10, led 305, offset 14684 */
	0x000b3960, /* Controller 11, led 305, offset 14688 */
	0x00003964, /* Controller 0, led 306, offset 14692 */
	0x00013968, /* Controller 1, led 306, offset 14696 */
	0x0002396c, /* Controller 2, led 306, offset 14700 */
	0x00033970, /* Controller 3, led 306, offset 14704 */
	0x00043974, /* Controller 4, led 306, offset 14708 */
	0x00053978, /* Controller 5, led 306, offset 14712 */
	0x0006397c, /* Controller 6, led 306, offset 14716 */
	0x00073980, /* Controller 7, led 306, offset 14720 */
	0x00083984, /* Controller 8, led 306, offset 14724 */
	0x00093988, /* Controller 9, led 306, offset 14728 */
	0x000a398c, /* Controller 10, led 306, offset 14732 */
	0x000b3990, /* Controller 11, led 306, offset 14736 */
	0x00003994, /* Controller 0, led 307, offset 14740 */
	0x00013998, /* Controller 1, led 307, offset 14744 */
	0x0002399c, /* Controller 2, led 307, offset 14748 */
	0x000339a0, /* Controller 3, led 307, offset 14752 */
	0x000439a4, /* Controller 4, led 307, offset 14756 */
	0x000539a8, /* Controller 5, led 307, offset 14760 */
	0x000639ac, /* Controller 6, led 307, offset 14764 */
	0x000739b0, /* Controller 7, led 307, offset 14768 */
	0x000839b4, /* Controller 8, led 307, offset 14772 */
	0x000939b8, /* Controller 9, led 307, offset 14776 */
	0x000a39bc, /* Controller 10, led 307, offset 14780 */
	0x000b39c0, /* Controller 11, led 307, offset 14784 */
	0x000039c4, /* Controller 0, led 308, offset 14788 */
	0x000139c8, /* Controller 1, led 308, offset 14792 */
	0x000239cc, /* Controller 2, led 308, offset 14796 */
	0x000339d0, /* Controller 3, led 308, offset 14800 */
	0x000439d4, /* Controller 4, led 308, offset 14804 */
	0x000539d8, /* Controller 5, led 308, offset 14808 */
	0x000639dc, /* Controller 6, led 308, offset 14812 */
	0x000739e0, /* Controller 7, led 308, offset 14816 */
	0x000839e4, /* Controller 8, led 308, offset 14820 */
	0x000939e8, /* Controller 9, led 308, offset 14824 */
	0x000a39ec, /* Controller 10, led 308, offset 14828 */
	0x000b39f0, /* Controller 11, led 308, offset 14832 */
	0x000039f4, /* Controller 0, led 309, offset 14836 */
	0x000139f8, /* Controller 1, led 309, offset 14840 */
	0x000239fc, /* Controller 2, led 309, offset 14844 */
	0x00033a00, /* Controller 3, led 309, offset 14848 */
	0x00043a04, /* Controller 4, led 309, offset 14852 */
	0x00053a08, /* Controller 5, led 309, offset 14856 */
	0x00063a0c, /* Controller 6, led 309, offset 14860 */
	0x00073a10, /* Controller 7, led 309, offset 14864 */
	0x00083a14, /* Controller 8, led 309, offset 14868 */
	0x00093a18, /* Controller 9, led 309, offset 14872 */
	0x000a3a1c, /* Controller 10, led 309, offset 14876 */
	0x000b3a20, /* Controller 11, led 309, offset 14880 */
	0x00003a24, /* Controller 0, led 310, offset 14884 */
	0x00013a28, /* Controller 1, led 310, offset 14888 */
	0x00023a2c, /* Controller 2, led 310, offset 14892 */
	0x00033a30, /* Controller 3, led 310, offset 14896 */
	0x00043a34, /* Controller 4, led 310, offset 14900 */
	0x00053a38, /* Controller 5, led 310, offset 14904 */
	0x00063a3c, /* Controller 6, led 310, offset 14908 */
	0x00073a40, /* Controller 7, led 310, offset 14912 */
	0x00083a44, /* Controller 8, led 310, offset 14916 */
	0x00093a48, /* Controller 9, led 310, offset 14920 */
	0x000a3a4c, /* Controller 10, led 310, offset 14924 */
	0x000b3a50, /* Controller 11, led 310, offset 14928 */
	0x00003a54, /* Controller 0, led 311, offset 14932 */
	0x00013a58, /* Controller 1, led 311, offset 14936 */
	0x00023a5c, /* Controller 2, led 311, offset 14940 */
	0x00033a60, /* Controller 3, led 311, offset 14944 */
	0x00043a64, /* Controller 4, led 311, offset 14948 */
	0x00053a68, /* Controller 5, led 311, offset 14952 */
	0x00063a6c, /* Controller 6, led 311, offset 14956 */
	0x00073a70, /* Controller 7, led 311, offset 14960 */
	0x00083a74, /* Controller 8, led 311, offset 14964 */
	0x00093a78, /* Controller 9, led 311, offset 14968 */
	0x000a3a7c, /* Controller 10, led 311, offset 14972 */
	0x000b3a80, /* Controller 11, led 311, offset 14976 */
	0x00003a84, /* Controller 0, led 312, offset 14980 */
	0x00013a88, /* Controller 1, led 312, offset 14984 */
	0x00023a8c, /* Controller 2, led 312, offset 14988 */
	0x00033a90, /* Controller 3, led 312, offset 14992 */
	0x00043a94, /* Controller 4, led 312, offset 14996 */
	0x00053a98, /* Controller 5, led 312, offset 15000 */
	0x00063a9c, /* Controller 6, led 312, offset 15004 */
	0x00073aa0, /* Controller 7, led 312, offset 15008 */
	0x00083aa4, /* Controller 8, led 312, offset 15012 */
	0x00093aa8, /* Controller 9, led 312, offset 15016 */
	0x000a3aac, /* Controller 10, led 312, offset 15020 */
	0x000b3ab0, /* Controller 11, led 312, offset 15024 */
	0x00003ab4, /* Controller 0, led 313, offset 15028 */
	0x00013ab8, /* Controller 1, led 313, offset 15032 */
	0x00023abc, /* Controller 2, led 313, offset 15036 */
	0x00033ac0, /* Controller 3, led 313, offset 15040 */
	0x00043ac4, /* Controller 4, led 313, offset 15044 */
	0x00053ac8, /* Controller 5, led 313, offset 15048 */
	0x00063acc, /* Controller 6, led 313, offset 15052 */
	0x00073ad0, /* Controller 7, led 313, offset 15056 */
	0x00083ad4, /* Controller 8, led 313, offset 15060 */
	0x00093ad8, /* Controller 9, led 313, offset 15064 */
	0x000a3adc, /* Controller 10, led 313, offset 15068 */
	0x000b3ae0, /* Controller 11, led 313, offset 15072 */
	0x00003ae4, /* Controller 0, led 314, offset 15076 */
	0x00013ae8, /* Controller 1, led 314, offset 15080 */
	0x00023aec, /* Controller 2, led 314, offset 15084 */
	0x00033af0, /* Controller 3, led 314, offset 15088 */
	0x00043af4, /* Controller 4, led 314, offset 15092 */
	0x00053af8, /* Controller 5, led 314, offset 15096 */
	0x00063afc, /* Controller 6, led 314, offset 15100 */
	0x00073b00, /* Controller 7, led 314, offset 15104 */
	0x00083b04, /* Controller 8, led 314, offset 15108 */
	0x00093b08, /* Controller 9, led 314, offset 15112 */
	0x000a3b0c, /* Controller 10, led 314, offset 15116 */
	0x000b3b10, /* Controller 11, led 314, offset 15120 */
	0x00003b14, /* Controller 0, led 315, offset 15124 */
	0x00013b18, /* Controller 1, led 315, offset 15128 */
	0x00023b1c, /* Controller 2, led 315, offset 15132 */
	0x00033b20, /* Controller 3, led 315, offset 15136 */
	0x00043b24, /* Controller 4, led 315, offset 15140 */
	0x00053b28, /* Controller 5, led 315, offset 15144 */
	0x00063b2c, /* Controller 6, led 315, offset 15148 */
	0x00073b30, /* Controller 7, led 315, offset 15152 */
	0x00083b34, /* Controller 8, led 315, offset 15156 */
	0x00093b38, /* Controller 9, led 315, offset 15160 */
	0x000a3b3c, /* Controller 10, led 315, offset 15164 */
	0x000b3b40, /* Controller 11, led 315, offset 15168 */
	0x00003b44, /* Controller 0, led 316, offset 15172 */
	0x00013b48, /* Controller 1, led 316, offset 15176 */
	0x00023b4c, /* Controller 2, led 316, offset 15180 */
	0x00033b50, /* Controller 3, led 316, offset 15184 */
	0x00043b54, /* Controller 4, led 316, offset 15188 */
	0x00053b58, /* Controller 5, led 316, offset 15192 */
	0x00063b5c, /* Controller 6, led 316, offset 15196 */
	0x00073b60, /* Controller 7, led 316, offset 15200 */
	0x00083b64, /* Controller 8, led 316, offset 15204 */
	0x00093b68, /* Controller 9, led 316, offset 15208 */
	0x000a3b6c, /* Controller 10, led 316, offset 15212 */
	0x000b3b70, /* Controller 11, led 316, offset 15216 */
	0x00003b74, /* Controller 0, led 317, offset 15220 */
	0x00013b78, /* Controller 1, led 317, offset 15224 */
	0x00023b7c, /* Controller 2, led 317, offset 15228 */
	0x00033b80, /* Controller 3, led 317, offset 15232 */
	0x00043b84, /* Controller 4, led 317, offset 15236 */
	0x00053b88, /* Controller 5, led 317, offset 15240 */
	0x00063b8c, /* Controller 6, led 317, offset 15244 */
	0x00073b90, /* Controller 7, led 317, offset 15248 */
	0x00083b94, /* Controller 8, led 317, offset 15252 */
	0x00093b98, /* Controller 9, led 317, offset 15256 */
	0x000a3b9c, /* Controller 10, led 317, offset 15260 */
	0x000b3ba0, /* Controller 11, led 317, offset 15264 */
	0x00003ba4, /* Controller 0, led 318, offset 15268 */
	0x00013ba8, /* Controller 1, led 318, offset 15272 */
	0x00023bac, /* Controller 2, led 318, offset 15276 */
	0x00033bb0, /* Controller 3, led 318, offset 15280 */
	0x00043bb4, /* Controller 4, led 318, offset 15284 */
	0x00053bb8, /* Controller 5, led 318, offset 15288 */
	0x00063bbc, /* Controller 6, led 318, offset 15292 */
	0x00073bc0, /* Controller 7, led 318, offset 15296 */
	0x00083bc4, /* Controller 8, led 318, offset 15300 */
	0x00093bc8, /* Controller 9, led 318, offset 15304 */
	0x000a3bcc, /* Controller 10, led 318, offset 15308 */
	0x000b3bd0, /* Controller 11, led 318, offset 15312 */
	0x00003bd4, /* Controller 0, led 319, offset 15316 */
	0x00013bd8, /* Controller 1, led 319, offset 15320 */
	0x00023bdc, /* Controller 2, led 319, offset 15324 */
	0x00033be0, /* Controller 3, led 319, offset 15328 */
	0x00043be4, /* Controller 4, led 319, offset 15332 */
	0x00053be8, /* Controller 5, led 319, offset 15336 */
	0x00063bec, /* Controller 6, led 319, offset 15340 */
	0x00073bf0, /* Controller 7, led 319, offset 15344 */
	0x00083bf4, /* Controller 8, led 319, offset 15348 */
	0x00093bf8, /* Controller 9, led 319, offset 15352 */
	0x000a3bfc, /* Controller 10, led 319, offset 15356 */
	0x000b3c00, /* Controller 11, led 319, offset 15360 */
	0x00003c04, /* Controller 0, led 320, offset 15364 */
	0x00013c08, /* Controller 1, led 320, offset 15368 */
	0x00023c0c, /* Controller 2, led 320, offset 15372 */
	0x00033c10, /* Controller 3, led 320, offset 15376 */
	0x00043c14, /* Controller 4, led 320, offset 15380 */
	0x00053c18, /* Controller 5, led 320, offset 15384 */
	0x00063c1c, /* Controller 6, led 320, offset 15388 */
	0x00073c20, /* Controller 7, led 320, offset 15392 */
	0x00083c24, /* Controller 8, led 320, offset 15396 */
	0x00093c28, /* Controller 9, led 320, offset 15400 */
	0x000a3c2c, /* Controller 10, led 320, offset 15404 */
	0x000b3c30, /* Controller 11, led 320, offset 15408 */
	0x00003c34, /* Controller 0, led 321, offset 15412 */
	0x00013c38, /* Controller 1, led 321, offset 15416 */
	0x00023c3c, /* Controller 2, led 321, offset 15420 */
	0x00033c40, /* Controller 3, led 321, offset 15424 */
	0x00043c44, /* Controller 4, led 321, offset 15428 */
	0x00053c48, /* Controller 5, led 321, offset 15432 */
	0x00063c4c, /* Controller 6, led 321, offset 15436 */
	0x00073c50, /* Controller 7, led 321, offset 15440 */
	0x00083c54, /* Controller 8, led 321, offset 15444 */
	0x00093c58, /* Controller 9, led 321, offset 15448 */
	0x000a3c5c, /* Controller 10, led 321, offset 15452 */
	0x000b3c60, /* Controller 11, led 321, offset 15456 */
	0x00003c64, /* Controller 0, led 322, offset 15460 */
	0x00013c68, /* Controller 1, led 322, offset 15464 */
	0x00023c6c, /* Controller 2, led 322, offset 15468 */
	0x00033c70, /* Controller 3, led 322, offset 15472 */
	0x00043c74, /* Controller 4, led 322, offset 15476 */
	0x00053c78, /* Controller 5, led 322, offset 15480 */
	0x00063c7c, /* Controller 6, led 322, offset 15484 */
	0x00073c80, /* Controller 7, led 322, offset 15488 */
	0x00083c84, /* Controller 8, led 322, offset 15492 */
	0x00093c88, /* Controller 9, led 322, offset 15496 */
	0x000a3c8c, /* Controller 10, led 322, offset 15500 */
	0x000b3c90, /* Controller 11, led 322, offset 15504 */
	0x00003c94, /* Controller 0, led 323, offset 15508 */
	0x00013c98, /* Controller 1, led 323, offset 15512 */
	0x00023c9c, /* Controller 2, led 323, offset 15516 */
	0x00033ca0, /* Controller 3, led 323, offset 15520 */
	0x00043ca4, /* Controller 4, led 323, offset 15524 */
	0x00053ca8, /* Controller 5, led 323, offset 15528 */
	0x00063cac, /* Controller 6, led 323, offset 15532 */
	0x00073cb0, /* Controller 7, led 323, offset 15536 */
	0x00083cb4, /* Controller 8, led 323, offset 15540 */
	0x00093cb8, /* Controller 9, led 323, offset 15544 */
	0x000a3cbc, /* Controller 10, led 323, offset 15548 */
	0x000b3cc0, /* Controller 11, led 323, offset 15552 */
	0x00003cc4, /* Controller 0, led 324, offset 15556 */
	0x00013cc8, /* Controller 1, led 324, offset 15560 */
	0x00023ccc, /* Controller 2, led 324, offset 15564 */
	0x00033cd0, /* Controller 3, led 324, offset 15568 */
	0x00043cd4, /* Controller 4, led 324, offset 15572 */
	0x00053cd8, /* Controller 5, led 324, offset 15576 */
	0x00063cdc, /* Controller 6, led 324, offset 15580 */
	0x00073ce0, /* Controller 7, led 324, offset 15584 */
	0x00083ce4, /* Controller 8, led 324, offset 15588 */
	0x00093ce8, /* Controller 9, led 324, offset 15592 */
	0x000a3cec, /* Controller 10, led 324, offset 15596 */
	0x000b3cf0, /* Controller 11, led 324, offset 15600 */
	0x00003cf4, /* Controller 0, led 325, offset 15604 */
	0x00013cf8, /* Controller 1, led 325, offset 15608 */
	0x00023cfc, /* Controller 2, led 325, offset 15612 */
	0x00033d00, /* Controller 3, led 325, offset 15616 */
	0x00043d04, /* Controller 4, led 325, offset 15620 */
	0x00053d08, /* Controller 5, led 325, offset 15624 */
	0x00063d0c, /* Controller 6, led 325, offset 15628 */
	0x00073d10, /* Controller 7, led 325, offset 15632 */
	0x00083d14, /* Controller 8, led 325, offset 15636 */
	0x00093d18, /* Controller 9, led 325, offset 15640 */
	0x000a3d1c, /* Controller 10, led 325, offset 15644 */
	0x000b3d20, /* Controller 11, led 325, offset 15648 */
	0x00003d24, /* Controller 0, led 326, offset 15652 */
	0x00013d28, /* Controller 1, led 326, offset 15656 */
	0x00023d2c, /* Controller 2, led 326, offset 15660 */
	0x00033d30, /* Controller 3, led 326, offset 15664 */
	0x00043d34, /* Controller 4, led 326, offset 15668 */
	0x00053d38, /* Controller 5, led 326, offset 15672 */
	0x00063d3c, /* Controller 6, led 326, offset 15676 */
	0x00073d40, /* Controller 7, led 326, offset 15680 */
	0x00083d44, /* Controller 8, led 326, offset 15684 */
	0x00093d48, /* Controller 9, led 326, offset 15688 */
	0x000a3d4c, /* Controller 10, led 326, offset 15692 */
	0x000b3d50, /* Controller 11, led 326, offset 15696 */
	0x00003d54, /* Controller 0, led 327, offset 15700 */
	0x00013d58, /* Controller 1, led 327, offset 15704 */
	0x00023d5c, /* Controller 2, led 327, offset 15708 */
	0x00033d60, /* Controller 3, led 327, offset 15712 */
	0x00043d64, /* Controller 4, led 327, offset 15716 */
	0x00053d68, /* Controller 5, led 327, offset 15720 */
	0x00063d6c, /* Controller 6, led 327, offset 15724 */
	0x00073d70, /* Controller 7, led 327, offset 15728 */
	0x00083d74, /* Controller 8, led 327, offset 15732 */
	0x00093d78, /* Controller 9, led 327, offset 15736 */
	0x000a3d7c, /* Controller 10, led 327, offset 15740 */
	0x000b3d80, /* Controller 11, led 327, offset 15744 */
	0x00003d84, /* Controller 0, led 328, offset 15748 */
	0x00013d88, /* Controller 1, led 328, offset 15752 */
	0x00023d8c, /* Controller 2, led 328, offset 15756 */
	0x00033d90, /* Controller 3, led 328, offset 15760 */
	0x00043d94, /* Controller 4, led 328, offset 15764 */
	0x00053d98, /* Controller 5, led 328, offset 15768 */
	0x00063d9c, /* Controller 6, led 328, offset 15772 */
	0x00073da0, /* Controller 7, led 328, offset 15776 */
	0x00083da4, /* Controller 8, led 328, offset 15780 */
	0x00093da8, /* Controller 9, led 328, offset 15784 */
	0x000a3dac, /* Controller 10, led 328, offset 15788 */
	0x000b3db0, /* Controller 11, led 328, offset 15792 */
	0x00003db4, /* Controller 0, led 329, offset 15796 */
	0x00013db8, /* Controller 1, led 329, offset 15800 */
	0x00023dbc, /* Controller 2, led 329, offset 15804 */
	0x00033dc0, /* Controller 3, led 329, offset 15808 */
	0x00043dc4, /* Controller 4, led 329, offset 15812 */
	0x00053dc8, /* Controller 5, led 329, offset 15816 */
	0x00063dcc, /* Controller 6, led 329, offset 15820 */
	0x00073dd0, /* Controller 7, led 329, offset 15824 */
	0x00083dd4, /* Controller 8, led 329, offset 15828 */
	0x00093dd8, /* Controller 9, led 329, offset 15832 */
	0x000a3ddc, /* Controller 10, led 329, offset 15836 */
	0x000b3de0, /* Controller 11, led 329, offset 15840 */
	0x00003de4, /* Controller 0, led 330, offset 15844 */
	0x00013de8, /* Controller 1, led 330, offset 15848 */
	0x00023dec, /* Controller 2, led 330, offset 15852 */
	0x00033df0, /* Controller 3, led 330, offset 15856 */
	0x00043df4, /* Controller 4, led 330, offset 15860 */
	0x00053df8, /* Controller 5, led 330, offset 15864 */
	0x00063dfc, /* Controller 6, led 330, offset 15868 */
	0x00073e00, /* Controller 7, led 330, offset 15872 */
	0x00083e04, /* Controller 8, led 330, offset 15876 */
	0x00093e08, /* Controller 9, led 330, offset 15880 */
	0x000a3e0c, /* Controller 10, led 330, offset 15884 */
	0x000b3e10, /* Controller 11, led 330, offset 15888 */
	0x00003e14, /* Controller 0, led 331, offset 15892 */
	0x00013e18, /* Controller 1, led 331, offset 15896 */
	0x00023e1c, /* Controller 2, led 331, offset 15900 */
	0x00033e20, /* Controller 3, led 331, offset 15904 */
	0x00043e24, /* Controller 4, led 331, offset 15908 */
	0x00053e28, /* Controller 5, led 331, offset 15912 */
	0x00063e2c, /* Controller 6, led 331, offset 15916 */
	0x00073e30, /* Controller 7, led 331, offset 15920 */
	0x00083e34, /* Controller 8, led 331, offset 15924 */
	0x00093e38, /* Controller 9, led 331, offset 15928 */
	0x000a3e3c, /* Controller 10, led 331, offset 15932 */
	0x000b3e40, /* Controller 11, led 331, offset 15936 */
	0x00003e44, /* Controller 0, led 332, offset 15940 */
	0x00013e48, /* Controller 1, led 332, offset 15944 */
	0x00023e4c, /* Controller 2, led 332, offset 15948 */
	0x00033e50, /* Controller 3, led 332, offset 15952 */
	0x00043e54, /* Controller 4, led 332, offset 15956 */
	0x00053e58, /* Controller 5, led 332, offset 15960 */
	0x00063e5c, /* Controller 6, led 332, offset 15964 */
	0x00073e60, /* Controller 7, led 332, offset 15968 */
	0x00083e64, /* Controller 8, led 332, offset 15972 */
	0x00093e68, /* Controller 9, led 332, offset 15976 */
	0x000a3e6c, /* Controller 10, led 332, offset 15980 */
	0x000b3e70, /* Controller 11, led 332, offset 15984 */
	0x00003e74, /* Controller 0, led 333, offset 15988 */
	0x00013e78, /* Controller 1, led 333, offset 15992 */
	0x00023e7c, /* Controller 2, led 333, offset 15996 */
	0x00033e80, /* Controller 3, led 333, offset 16000 */
	0x00043e84, /* Controller 4, led 333, offset 16004 */
	0x00053e88, /* Controller 5, led 333, offset 16008 */
	0x00063e8c, /* Controller 6, led 333, offset 16012 */
	0x00073e90, /* Controller 7, led 333, offset 16016 */
	0x00083e94, /* Controller 8, led 333, offset 16020 */
	0x00093e98, /* Controller 9, led 333, offset 16024 */
	0x000a3e9c, /* Controller 10, led 333, offset 16028 */
	0x000b3ea0, /* Controller 11, led 333, offset 16032 */
	0x00003ea4, /* Controller 0, led 334, offset 16036 */
	0x00013ea8, /* Controller 1, led 334, offset 16040 */
	0x00023eac, /* Controller 2, led 334, offset 16044 */
	0x00033eb0, /* Controller 3, led 334, offset 16048 */
	0x00043eb4, /* Controller 4, led 334, offset 16052 */
	0x00053eb8, /* Controller 5, led 334, offset 16056 */
	0x00063ebc, /* Controller 6, led 334, offset 16060 */
	0x00073ec0, /* Controller 7, led 334, offset 16064 */
	0x00083ec4, /* Controller 8, led 334, offset 16068 */
	0x00093ec8, /* Controller 9, led 334, offset 16072 */
	0x000a3ecc, /* Controller 10, led 334, offset 16076 */
	0x000b3ed0, /* Controller 11, led 334, offset 16080 */
	0x00003ed4, /* Controller 0, led 335, offset 16084 */
	0x00013ed8, /* Controller 1, led 335, offset 16088 */
	0x00023edc, /* Controller 2, led 335, offset 16092 */
	0x00033ee0, /* Controller 3, led 335, offset 16096 */
	0x00043ee4, /* Controller 4, led 335, offset 16100 */
	0x00053ee8, /* Controller 5, led 335, offset 16104 */
	0x00063eec, /* Controller 6, led 335, offset 16108 */
	0x00073ef0, /* Controller 7, led 335, offset 16112 */
	0x00083ef4, /* Controller 8, led 335, offset 16116 */
	0x00093ef8, /* Controller 9, led 335, offset 16120 */
	0x000a3efc, /* Controller 10, led 335, offset 16124 */
	0x000b3f00, /* Controller 11, led 335, offset 16128 */
	0x00003f04, /* Controller 0, led 336, offset 16132 */
	0x00013f08, /* Controller 1, led 336, offset 16136 */
	0x00023f0c, /* Controller 2, led 336, offset 16140 */
	0x00033f10, /* Controller 3, led 336, offset 16144 */
	0x00043f14, /* Controller 4, led 336, offset 16148 */
	0x00053f18, /* Controller 5, led 336, offset 16152 */
	0x00063f1c, /* Controller 6, led 336, offset 16156 */
	0x00073f20, /* Controller 7, led 336, offset 16160 */
	0x00083f24, /* Controller 8, led 336, offset 16164 */
	0x00093f28, /* Controller 9, led 336, offset 16168 */
	0x000a3f2c, /* Controller 10, led 336, offset 16172 */
	0x000b3f30, /* Controller 11, led 336, offset 16176 */
	0x00003f34, /* Controller 0, led 337, offset 16180 */
	0x00013f38, /* Controller 1, led 337, offset 16184 */
	0x00023f3c, /* Controller 2, led 337, offset 16188 */
	0x00033f40, /* Controller 3, led 337, offset 16192 */
	0x00043f44, /* Controller 4, led 337, offset 16196 */
	0x00053f48, /* Controller 5, led 337, offset 16200 */
	0x00063f4c, /* Controller 6, led 337, offset 16204 */
	0x00073f50, /* Controller 7, led 337, offset 16208 */
	0x00083f54, /* Controller 8, led 337, offset 16212 */
	0x00093f58, /* Controller 9, led 337, offset 16216 */
	0x000a3f5c, /* Controller 10, led 337, offset 16220 */
	0x000b3f60, /* Controller 11, led 337, offset 16224 */
	0x00003f64, /* Controller 0, led 338, offset 16228 */
	0x00013f68, /* Controller 1, led 338, offset 16232 */
	0x00023f6c, /* Controller 2, led 338, offset 16236 */
	0x00033f70, /* Controller 3, led 338, offset 16240 */
	0x00043f74, /* Controller 4, led 338, offset 16244 */
	0x00053f78, /* Controller 5, led 338, offset 16248 */
	0x00063f7c, /* Controller 6, led 338, offset 16252 */
	0x00073f80, /* Controller 7, led 338, offset 16256 */
	0x00083f84, /* Controller 8, led 338, offset 16260 */
	0x00093f88, /* Controller 9, led 338, offset 16264 */
	0x000a3f8c, /* Controller 10, led 338, offset 16268 */
	0x000b3f90, /* Controller 11, led 338, offset 16272 */
	0x00003f94, /* Controller 0, led 339, offset 16276 */
	0x00013f98, /* Controller 1, led 339, offset 16280 */
	0x00023f9c, /* Controller 2, led 339, offset 16284 */
	0x00033fa0, /* Controller 3, led 339, offset 16288 */
	0x00043fa4, /* Controller 4, led 339, offset 16292 */
	0x00053fa8, /* Controller 5, led 339, offset 16296 */
	0x00063fac, /* Controller 6, led 339, offset 16300 */
	0x00073fb0, /* Controller 7, led 339, offset 16304 */
	0x00083fb4, /* Controller 8, led 339, offset 16308 */
	0x00093fb8, /* Controller 9, led 339, offset 16312 */
	0x000a3fbc, /* Controller 10, led 339, offset 16316 */
	0x000b3fc0, /* Controller 11, led 339, offset 16320 */
	0x00003fc4, /* Controller 0, led 340, offset 16324 */
	0x00013fc8, /* Controller 1, led 340, offset 16328 */
	0x00023fcc, /* Controller 2, led 340, offset 16332 */
	0x00033fd0, /* Controller 3, led 340, offset 16336 */
	0x00043fd4, /* Controller 4, led 340, offset 16340 */
	0x00053fd8, /* Controller 5, led 340, offset 16344 */
	0x00063fdc, /* Controller 6, led 340, offset 16348 */
	0x00073fe0, /* Controller 7, led 340, offset 16352 */
	0x00083fe4, /* Controller 8, led 340, offset 16356 */
	0x00093fe8, /* Controller 9, led 340, offset 16360 */
	0x000a3fec, /* Controller 10, led 340, offset 16364 */
	0x000b3ff0, /* Controller 11, led 340, offset 16368 */
	0x00003ff4, /* Controller 0, led 341, offset 16372 */
	0x00013ff8, /* Controller 1, led 341, offset 16376 */
	0x00023ffc, /* Controller 2, led 341, offset 16380 */
	0x00034000, /* Controller 3, led 341, offset 16384 */
	0x00044004, /* Controller 4, led 341, offset 16388 */
	0x00054008, /* Controller 5, led 341, offset 16392 */
	0x0006400c, /* Controller 6, led 341, offset 16396 */
	0x00074010, /* Controller 7, led 341, offset 16400 */
	0x00084014, /* Controller 8, led 341, offset 16404 */
	0x00094018, /* Controller 9, led 341, offset 16408 */
	0x000a401c, /* Controller 10, led 341, offset 16412 */
	0x000b4020, /* Controller 11, led 341, offset 16416 */
	0x00004024, /* Controller 0, led 342, offset 16420 */
	0x00014028, /* Controller 1, led 342, offset 16424 */
	0x0002402c, /* Controller 2, led 342, offset 16428 */
	0x00034030, /* Controller 3, led 342, offset 16432 */
	0x00044034, /* Controller 4, led 342, offset 16436 */
	0x00054038, /* Controller 5, led 342, offset 16440 */
	0x0006403c, /* Controller 6, led 342, offset 16444 */
	0x00074040, /* Controller 7, led 342, offset 16448 */
	0x00084044, /* Controller 8, led 342, offset 16452 */
	0x00094048, /* Controller 9, led 342, offset 16456 */
	0x000a404c, /* Controller 10, led 342, offset 16460 */
	0x000b4050, /* Controller 11, led 342, offset 16464 */
	0x00004054, /* Controller 0, led 343, offset 16468 */
	0x00014058, /* Controller 1, led 343, offset 16472 */
	0x0002405c, /* Controller 2, led 343, offset 16476 */
	0x00034060, /* Controller 3, led 343, offset 16480 */
	0x00044064, /* Controller 4, led 343, offset 16484 */
	0x00054068, /* Controller 5, led 343, offset 16488 */
	0x0006406c, /* Controller 6, led 343, offset 16492 */
	0x00074070, /* Controller 7, led 343, offset 16496 */
	0x00084074, /* Controller 8, led 343, offset 16500 */
	0x00094078, /* Controller 9, led 343, offset 16504 */
	0x000a407c, /* Controller 10, led 343, offset 16508 */
	0x000b4080, /* Controller 11, led 343, offset 16512 */
	0x00004084, /* Controller 0, led 344, offset 16516 */
	0x00014088, /* Controller 1, led 344, offset 16520 */
	0x0002408c, /* Controller 2, led 344, offset 16524 */
	0x00034090, /* Controller 3, led 344, offset 16528 */
	0x00044094, /* Controller 4, led 344, offset 16532 */
	0x00054098, /* Controller 5, led 344, offset 16536 */
	0x0006409c, /* Controller 6, led 344, offset 16540 */
	0x000740a0, /* Controller 7, led 344, offset 16544 */
	0x000840a4, /* Controller 8, led 344, offset 16548 */
	0x000940a8, /* Controller 9, led 344, offset 16552 */
	0x000a40ac, /* Controller 10, led 344, offset 16556 */
	0x000b40b0, /* Controller 11, led 344, offset 16560 */
	0x000040b4, /* Controller 0, led 345, offset 16564 */
	0x000140b8, /* Controller 1, led 345, offset 16568 */
	0x000240bc, /* Controller 2, led 345, offset 16572 */
	0x000340c0, /* Controller 3, led 345, offset 16576 */
	0x000440c4, /* Controller 4, led 345, offset 16580 */
	0x000540c8, /* Controller 5, led 345, offset 16584 */
	0x000640cc, /* Controller 6, led 345, offset 16588 */
	0x000740d0, /* Controller 7, led 345, offset 16592 */
	0x000840d4, /* Controller 8, led 345, offset 16596 */
	0x000940d8, /* Controller 9, led 345, offset 16600 */
	0x000a40dc, /* Controller 10, led 345, offset 16604 */
	0x000b40e0, /* Controller 11, led 345, offset 16608 */
	0x000040e4, /* Controller 0, led 346, offset 16612 */
	0x000140e8, /* Controller 1, led 346, offset 16616 */
	0x000240ec, /* Controller 2, led 346, offset 16620 */
	0x000340f0, /* Controller 3, led 346, offset 16624 */
	0x000440f4, /* Controller 4, led 346, offset 16628 */
	0x000540f8, /* Controller 5, led 346, offset 16632 */
	0x000640fc, /* Controller 6, led 346, offset 16636 */
	0x00074100, /* Controller 7, led 346, offset 16640 */
	0x00084104, /* Controller 8, led 346, offset 16644 */
	0x00094108, /* Controller 9, led 346, offset 16648 */
	0x000a410c, /* Controller 10, led 346, offset 16652 */
	0x000b4110, /* Controller 11, led 346, offset 16656 */
	0x00004114, /* Controller 0, led 347, offset 16660 */
	0x00014118, /* Controller 1, led 347, offset 16664 */
	0x0002411c, /* Controller 2, led 347, offset 16668 */
	0x00034120, /* Controller 3, led 347, offset 16672 */
	0x00044124, /* Controller 4, led 347, offset 16676 */
	0x00054128, /* Controller 5, led 347, offset 16680 */
	0x0006412c, /* Controller 6, led 347, offset 16684 */
	0x00074130, /* Controller 7, led 347, offset 16688 */
	0x00084134, /* Controller 8, led 347, offset 16692 */
	0x00094138, /* Controller 9, led 347, offset 16696 */
	0x000a413c, /* Controller 10, led 347, offset 16700 */
	0x000b4140, /* Controller 11, led 347, offset 16704 */
	0x00004144, /* Controller 0, led 348, offset 16708 */
	0x00014148, /* Controller 1, led 348, offset 16712 */
	0x0002414c, /* Controller 2, led 348, offset 16716 */
	0x00034150, /* Controller 3, led 348, offset 16720 */
	0x00044154, /* Controller 4, led 348, offset 16724 */
	0x00054158, /* Controller 5, led 348, offset 16728 */
	0x0006415c, /* Controller 6, led 348, offset 16732 */
	0x00074160, /* Controller 7, led 348, offset 16736 */
	0x00084164, /* Controller 8, led 348, offset 16740 */
	0x00094168, /* Controller 9, led 348, offset 16744 */
	0x000a416c, /* Controller 10, led 348, offset 16748 */
	0x000b4170, /* Controller 11, led 348, offset 16752 */
	0x00004174, /* Controller 0, led 349, offset 16756 */
	0x00014178, /* Controller 1, led 349, offset 16760 */
	0x0002417c, /* Controller 2, led 349, offset 16764 */
	0x00034180, /* Controller 3, led 349, offset 16768 */
	0x00044184, /* Controller 4, led 349, offset 16772 */
	0x00054188, /* Controller 5, led 349, offset 16776 */
	0x0006418c, /* Controller 6, led 349, offset 16780 */
	0x00074190, /* Controller 7, led 349, offset 16784 */
	0x00084194, /* Controller 8, led 349, offset 16788 */
	0x00094198, /* Controller 9, led 349, offset 16792 */
	0x000a419c, /* Controller 10, led 349, offset 16796 */
	0x000b41a0, /* Controller 11, led 349, offset 16800 */
	0x000041a4, /* Controller 0, led 350, offset 16804 */
	0x000141a8, /* Controller 1, led 350, offset 16808 */
	0x000241ac, /* Controller 2, led 350, offset 16812 */
	0x000341b0, /* Controller 3, led 350, offset 16816 */
	0x000441b4, /* Controller 4, led 350, offset 16820 */
	0x000541b8, /* Controller 5, led 350, offset 16824 */
	0x000641bc, /* Controller 6, led 350, offset 16828 */
	0x000741c0, /* Controller 7, led 350, offset 16832 */
	0x000841c4, /* Controller 8, led 350, offset 16836 */
	0x000941c8, /* Controller 9, led 350, offset 16840 */
	0x000a41cc, /* Controller 10, led 350, offset 16844 */
	0x000b41d0, /* Controller 11, led 350, offset 16848 */
	0x000041d4, /* Controller 0, led 351, offset 16852 */
	0x000141d8, /* Controller 1, led 351, offset 16856 */
	0x000241dc, /* Controller 2, led 351, offset 16860 */
	0x000341e0, /* Controller 3, led 351, offset 16864 */
	0x000441e4, /* Controller 4, led 351, offset 16868 */
	0x000541e8, /* Controller 5, led 351, offset 16872 */
	0x000641ec, /* Controller 6, led 351, offset 16876 */
	0x000741f0, /* Controller 7, led 351, offset 16880 */
	0x000841f4, /* Controller 8, led 351, offset 16884 */
	0x000941f8, /* Controller 9, led 351, offset 16888 */
	0x000a41fc, /* Controller 10, led 351, offset 16892 */
	0x000b4200, /* Controller 11, led 351, offset 16896 */
	0x00004204, /* Controller 0, led 352, offset 16900 */
	0x00014208, /* Controller 1, led 352, offset 16904 */
	0x0002420c, /* Controller 2, led 352, offset 16908 */
	0x00034210, /* Controller 3, led 352, offset 16912 */
	0x00044214, /* Controller 4, led 352, offset 16916 */
	0x00054218, /* Controller 5, led 352, offset 16920 */
	0x0006421c, /* Controller 6, led 352, offset 16924 */
	0x00074220, /* Controller 7, led 352, offset 16928 */
	0x00084224, /* Controller 8, led 352, offset 16932 */
	0x00094228, /* Controller 9, led 352, offset 16936 */
	0x000a422c, /* Controller 10, led 352, offset 16940 */
	0x000b4230, /* Controller 11, led 352, offset 16944 */
	0x00004234, /* Controller 0, led 353, offset 16948 */
	0x00014238, /* Controller 1, led 353, offset 16952 */
	0x0002423c, /* Controller 2, led 353, offset 16956 */
	0x00034240, /* Controller 3, led 353, offset 16960 */
	0x00044244, /* Controller 4, led 353, offset 16964 */
	0x00054248, /* Controller 5, led 353, offset 16968 */
	0x0006424c, /* Controller 6, led 353, offset 16972 */
	0x00074250, /* Controller 7, led 353, offset 16976 */
	0x00084254, /* Controller 8, led 353, offset 16980 */
	0x00094258, /* Controller 9, led 353, offset 16984 */
	0x000a425c, /* Controller 10, led 353, offset 16988 */
	0x000b4260, /* Controller 11, led 353, offset 16992 */
	0x00004264, /* Controller 0, led 354, offset 16996 */
	0x00014268, /* Controller 1, led 354, offset 17000 */
	0x0002426c, /* Controller 2, led 354, offset 17004 */
	0x00034270, /* Controller 3, led 354, offset 17008 */
	0x00044274, /* Controller 4, led 354, offset 17012 */
	0x00054278, /* Controller 5, led 354, offset 17016 */
	0x0006427c, /* Controller 6, led 354, offset 17020 */
	0x00074280, /* Controller 7, led 354, offset 17024 */
	0x00084284, /* Controller 8, led 354, offset 17028 */
	0x00094288, /* Controller 9, led 354, offset 17032 */
	0x000a428c, /* Controller 10, led 354, offset 17036 */
	0x000b4290, /* Controller 11, led 354, offset 17040 */
	0x00004294, /* Controller 0, led 355, offset 17044 */
	0x00014298, /* Controller 1, led 355, offset 17048 */
	0x0002429c, /* Controller 2, led 355, offset 17052 */
	0x000342a0, /* Controller 3, led 355, offset 17056 */
	0x000442a4, /* Controller 4, led 355, offset 17060 */
	0x000542a8, /* Controller 5, led 355, offset 17064 */
	0x000642ac, /* Controller 6, led 355, offset 17068 */
	0x000742b0, /* Controller 7, led 355, offset 17072 */
	0x000842b4, /* Controller 8, led 355, offset 17076 */
	0x000942b8, /* Controller 9, led 355, offset 17080 */
	0x000a42bc, /* Controller 10, led 355, offset 17084 */
	0x000b42c0, /* Controller 11, led 355, offset 17088 */
	0x000042c4, /* Controller 0, led 356, offset 17092 */
	0x000142c8, /* Controller 1, led 356, offset 17096 */
	0x000242cc, /* Controller 2, led 356, offset 17100 */
	0x000342d0, /* Controller 3, led 356, offset 17104 */
	0x000442d4, /* Controller 4, led 356, offset 17108 */
	0x000542d8, /* Controller 5, led 356, offset 17112 */
	0x000642dc, /* Controller 6, led 356, offset 17116 */
	0x000742e0, /* Controller 7, led 356, offset 17120 */
	0x000842e4, /* Controller 8, led 356, offset 17124 */
	0x000942e8, /* Controller 9, led 356, offset 17128 */
	0x000a42ec, /* Controller 10, led 356, offset 17132 */
	0x000b42f0, /* Controller 11, led 356, offset 17136 */
	0x000042f4, /* Controller 0, led 357, offset 17140 */
	0x000142f8, /* Controller 1, led 357, offset 17144 */
	0x000242fc, /* Controller 2, led 357, offset 17148 */
	0x00034300, /* Controller 3, led 357, offset 17152 */
	0x00044304, /* Controller 4, led 357, offset 17156 */
	0x00054308, /* Controller 5, led 357, offset 17160 */
	0x0006430c, /* Controller 6, led 357, offset 17164 */
	0x00074310, /* Controller 7, led 357, offset 17168 */
	0x00084314, /* Controller 8, led 357, offset 17172 */
	0x00094318, /* Controller 9, led 357, offset 17176 */
	0x000a431c, /* Controller 10, led 357, offset 17180 */
	0x000b4320, /* Controller 11, led 357, offset 17184 */
	0x00004324, /* Controller 0, led 358, offset 17188 */
	0x00014328, /* Controller 1, led 358, offset 17192 */
	0x0002432c, /* Controller 2, led 358, offset 17196 */
	0x00034330, /* Controller 3, led 358, offset 17200 */
	0x00044334, /* Controller 4, led 358, offset 17204 */
	0x00054338, /* Controller 5, led 358, offset 17208 */
	0x0006433c, /* Controller 6, led 358, offset 17212 */
	0x00074340, /* Controller 7, led 358, offset 17216 */
	0x00084344, /* Controller 8, led 358, offset 17220 */
	0x00094348, /* Controller 9, led 358, offset 17224 */
	0x000a434c, /* Controller 10, led 358, offset 17228 */
	0x000b4350, /* Controller 11, led 358, offset 17232 */
	0x00004354, /* Controller 0, led 359, offset 17236 */
	0x00014358, /* Controller 1, led 359, offset 17240 */
	0x0002435c, /* Controller 2, led 359, offset 17244 */
	0x00034360, /* Controller 3, led 359, offset 17248 */
	0x00044364, /* Controller 4, led 359, offset 17252 */
	0x00054368, /* Controller 5, led 359, offset 17256 */
	0x0006436c, /* Controller 6, led 359, offset 17260 */
	0x00074370, /* Controller 7, led 359, offset 17264 */
	0x00084374, /* Controller 8, led 359, offset 17268 */
	0x00094378, /* Controller 9, led 359, offset 17272 */
	0x000a437c, /* Controller 10, led 359, offset 17276 */
	0x000b4380, /* Controller 11, led 359, offset 17280 */
	0x00004384, /* Controller 0, led 360, offset 17284 */
	0x00014388, /* Controller 1, led 360, offset 17288 */
	0x0002438c, /* Controller 2, led 360, offset 17292 */
	0x00034390, /* Controller 3, led 360, offset 17296 */
	0x00044394, /* Controller 4, led 360, offset 17300 */
	0x00054398, /* Controller 5, led 360, offset 17304 */
	0x0006439c, /* Controller 6, led 360, offset 17308 */
	0x000743a0, /* Controller 7, led 360, offset 17312 */
	0x000843a4, /* Controller 8, led 360, offset 17316 */
	0x000943a8, /* Controller 9, led 360, offset 17320 */
	0x000a43ac, /* Controller 10, led 360, offset 17324 */
	0x000b43b0, /* Controller 11, led 360, offset 17328 */
	0x000043b4, /* Controller 0, led 361, offset 17332 */
	0x000143b8, /* Controller 1, led 361, offset 17336 */
	0x000243bc, /* Controller 2, led 361, offset 17340 */
	0x000343c0, /* Controller 3, led 361, offset 17344 */
	0x000443c4, /* Controller 4, led 361, offset 17348 */
	0x000543c8, /* Controller 5, led 361, offset 17352 */
	0x000643cc, /* Controller 6, led 361, offset 17356 */
	0x000743d0, /* Controller 7, led 361, offset 17360 */
	0x000843d4, /* Controller 8, led 361, offset 17364 */
	0x000943d8, /* Controller 9, led 361, offset 17368 */
	0x000a43dc, /* Controller 10, led 361, offset 17372 */
	0x000b43e0, /* Controller 11, led 361, offset 17376 */
	0x000043e4, /* Controller 0, led 362, offset 17380 */
	0x000143e8, /* Controller 1, led 362, offset 17384 */
	0x000243ec, /* Controller 2, led 362, offset 17388 */
	0x000343f0, /* Controller 3, led 362, offset 17392 */
	0x000443f4, /* Controller 4, led 362, offset 17396 */
	0x000543f8, /* Controller 5, led 362, offset 17400 */
	0x000643fc, /* Controller 6, led 362, offset 17404 */
	0x00074400, /* Controller 7, led 362, offset 17408 */
	0x00084404, /* Controller 8, led 362, offset 17412 */
	0x00094408, /* Controller 9, led 362, offset 17416 */
	0x000a440c, /* Controller 10, led 362, offset 17420 */
	0x000b4410, /* Controller 11, led 362, offset 17424 */
	0x00004414, /* Controller 0, led 363, offset 17428 */
	0x00014418, /* Controller 1, led 363, offset 17432 */
	0x0002441c, /* Controller 2, led 363, offset 17436 */
	0x00034420, /* Controller 3, led 363, offset 17440 */
	0x00044424, /* Controller 4, led 363, offset 17444 */
	0x00054428, /* Controller 5, led 363, offset 17448 */
	0x0006442c, /* Controller 6, led 363, offset 17452 */
	0x00074430, /* Controller 7, led 363, offset 17456 */
	0x00084434, /* Controller 8, led 363, offset 17460 */
	0x00094438, /* Controller 9, led 363, offset 17464 */
	0x000a443c, /* Controller 10, led 363, offset 17468 */
	0x000b4440, /* Controller 11, led 363, offset 17472 */
	0x00004444, /* Controller 0, led 364, offset 17476 */
	0x00014448, /* Controller 1, led 364, offset 17480 */
	0x0002444c, /* Controller 2, led 364, offset 17484 */
	0x00034450, /* Controller 3, led 364, offset 17488 */
	0x00044454, /* Controller 4, led 364, offset 17492 */
	0x00054458, /* Controller 5, led 364, offset 17496 */
	0x0006445c, /* Controller 6, led 364, offset 17500 */
	0x00074460, /* Controller 7, led 364, offset 17504 */
	0x00084464, /* Controller 8, led 364, offset 17508 */
	0x00094468, /* Controller 9, led 364, offset 17512 */
	0x000a446c, /* Controller 10, led 364, offset 17516 */
	0x000b4470, /* Controller 11, led 364, offset 17520 */
	0x00004474, /* Controller 0, led 365, offset 17524 */
	0x00014478, /* Controller 1, led 365, offset 17528 */
	0x0002447c, /* Controller 2, led 365, offset 17532 */
	0x00034480, /* Controller 3, led 365, offset 17536 */
	0x00044484, /* Controller 4, led 365, offset 17540 */
	0x00054488, /* Controller 5, led 365, offset 17544 */
	0x0006448c, /* Controller 6, led 365, offset 17548 */
	0x00074490, /* Controller 7, led 365, offset 17552 */
	0x00084494, /* Controller 8, led 365, offset 17556 */
	0x00094498, /* Controller 9, led 365, offset 17560 */
	0x000a449c, /* Controller 10, led 365, offset 17564 */
	0x000b44a0, /* Controller 11, led 365, offset 17568 */
	0x000044a4, /* Controller 0, led 366, offset 17572 */
	0x000144a8, /* Controller 1, led 366, offset 17576 */
	0x000244ac, /* Controller 2, led 366, offset 17580 */
	0x000344b0, /* Controller 3, led 366, offset 17584 */
	0x000444b4, /* Controller 4, led 366, offset 17588 */
	0x000544b8, /* Controller 5, led 366, offset 17592 */
	0x000644bc, /* Controller 6, led 366, offset 17596 */
	0x000744c0, /* Controller 7, led 366, offset 17600 */
	0x000844c4, /* Controller 8, led 366, offset 17604 */
	0x000944c8, /* Controller 9, led 366, offset 17608 */
	0x000a44cc, /* Controller 10, led 366, offset 17612 */
	0x000b44d0, /* Controller 11, led 366, offset 17616 */
	0x000044d4, /* Controller 0, led 367, offset 17620 */
	0x000144d8, /* Controller 1, led 367, offset 17624 */
	0x000244dc, /* Controller 2, led 367, offset 17628 */
	0x000344e0, /* Controller 3, led 367, offset 17632 */
	0x000444e4, /* Controller 4, led 367, offset 17636 */
	0x000544e8, /* Controller 5, led 367, offset 17640 */
	0x000644ec, /* Controller 6, led 367, offset 17644 */
	0x000744f0, /* Controller 7, led 367, offset 17648 */
	0x000844f4, /* Controller 8, led 367, offset 17652 */
	0x000944f8, /* Controller 9, led 367, offset 17656 */
	0x000a44fc, /* Controller 10, led 367, offset 17660 */
	0x000b4500, /* Controller 11, led 367, offset 17664 */
	0x00004504, /* Controller 0, led 368, offset 17668 */
	0x00014508, /* Controller 1, led 368, offset 17672 */
	0x0002450c, /* Controller 2, led 368, offset 17676 */
	0x00034510, /* Controller 3, led 368, offset 17680 */
	0x00044514, /* Controller 4, led 368, offset 17684 */
	0x00054518, /* Controller 5, led 368, offset 17688 */
	0x0006451c, /* Controller 6, led 368, offset 17692 */
	0x00074520, /* Controller 7, led 368, offset 17696 */
	0x00084524, /* Controller 8, led 368, offset 17700 */
	0x00094528, /* Controller 9, led 368, offset 17704 */
	0x000a452c, /* Controller 10, led 368, offset 17708 */
	0x000b4530, /* Controller 11, led 368, offset 17712 */
	0x00004534, /* Controller 0, led 369, offset 17716 */
	0x00014538, /* Controller 1, led 369, offset 17720 */
	0x0002453c, /* Controller 2, led 369, offset 17724 */
	0x00034540, /* Controller 3, led 369, offset 17728 */
	0x00044544, /* Controller 4, led 369, offset 17732 */
	0x00054548, /* Controller 5, led 369, offset 17736 */
	0x0006454c, /* Controller 6, led 369, offset 17740 */
	0x00074550, /* Controller 7, led 369, offset 17744 */
	0x00084554, /* Controller 8, led 369, offset 17748 */
	0x00094558, /* Controller 9, led 369, offset 17752 */
	0x000a455c, /* Controller 10, led 369, offset 17756 */
	0x000b4560, /* Controller 11, led 369, offset 17760 */
	0x00004564, /* Controller 0, led 370, offset 17764 */
	0x00014568, /* Controller 1, led 370, offset 17768 */
	0x0002456c, /* Controller 2, led 370, offset 17772 */
	0x00034570, /* Controller 3, led 370, offset 17776 */
	0x00044574, /* Controller 4, led 370, offset 17780 */
	0x00054578, /* Controller 5, led 370, offset 17784 */
	0x0006457c, /* Controller 6, led 370, offset 17788 */
	0x00074580, /* Controller 7, led 370, offset 17792 */
	0x00084584, /* Controller 8, led 370, offset 17796 */
	0x00094588, /* Controller 9, led 370, offset 17800 */
	0x000a458c, /* Controller 10, led 370, offset 17804 */
	0x000b4590, /* Controller 11, led 370, offset 17808 */
	0x00004594, /* Controller 0, led 371, offset 17812 */
	0x00014598, /* Controller 1, led 371, offset 17816 */
	0x0002459c, /* Controller 2, led 371, offset 17820 */
	0x000345a0, /* Controller 3, led 371, offset 17824 */
	0x000445a4, /* Controller 4, led 371, offset 17828 */
	0x000545a8, /* Controller 5, led 371, offset 17832 */
	0x000645ac, /* Controller 6, led 371, offset 17836 */
	0x000745b0, /* Controller 7, led 371, offset 17840 */
	0x000845b4, /* Controller 8, led 371, offset 17844 */
	0x000945b8, /* Controller 9, led 371, offset 17848 */
	0x000a45bc, /* Controller 10, led 371, offset 17852 */
	0x000b45c0, /* Controller 11, led 371, offset 17856 */
	0x000045c4, /* Controller 0, led 372, offset 17860 */
	0x000145c8, /* Controller 1, led 372, offset 17864 */
	0x000245cc, /* Controller 2, led 372, offset 17868 */
	0x000345d0, /* Controller 3, led 372, offset 17872 */
	0x000445d4, /* Controller 4, led 372, offset 17876 */
	0x000545d8, /* Controller 5, led 372, offset 17880 */
	0x000645dc, /* Controller 6, led 372, offset 17884 */
	0x000745e0, /* Controller 7, led 372, offset 17888 */
	0x000845e4, /* Controller 8, led 372, offset 17892 */
	0x000945e8, /* Controller 9, led 372, offset 17896 */
	0x000a45ec, /* Controller 10, led 372, offset 17900 */
	0x000b45f0, /* Controller 11, led 372, offset 17904 */
	0x000045f4, /* Controller 0, led 373, offset 17908 */
	0x000145f8, /* Controller 1, led 373, offset 17912 */
	0x000245fc, /* Controller 2, led 373, offset 17916 */
	0x00034600, /* Controller 3, led 373, offset 17920 */
	0x00044604, /* Controller 4, led 373, offset 17924 */
	0x00054608, /* Controller 5, led 373, offset 17928 */
	0x0006460c, /* Controller 6, led 373, offset 17932 */
	0x00074610, /* Controller 7, led 373, offset 17936 */
	0x00084614, /* Controller 8, led 373, offset 17940 */
	0x00094618, /* Controller 9, led 373, offset 17944 */
	0x000a461c, /* Controller 10, led 373, offset 17948 */
	0x000b4620, /* Controller 11, led 373, offset 17952 */
	0x00004624, /* Controller 0, led 374, offset 17956 */
	0x00014628, /* Controller 1, led 374, offset 17960 */
	0x0002462c, /* Controller 2, led 374, offset 17964 */
	0x00034630, /* Controller 3, led 374, offset 17968 */
	0x00044634, /* Controller 4, led 374, offset 17972 */
	0x00054638, /* Controller 5, led 374, offset 17976 */
	0x0006463c, /* Controller 6, led 374, offset 17980 */
	0x00074640, /* Controller 7, led 374, offset 17984 */
	0x00084644, /* Controller 8, led 374, offset 17988 */
	0x00094648, /* Controller 9, led 374, offset 17992 */
	0x000a464c, /* Controller 10, led 374, offset 17996 */
	0x000b4650, /* Controller 11, led 374, offset 18000 */
	0x00004654, /* Controller 0, led 375, offset 18004 */
	0x00014658, /* Controller 1, led 375, offset 18008 */
	0x0002465c, /* Controller 2, led 375, offset 18012 */
	0x00034660, /* Controller 3, led 375, offset 18016 */
	0x00044664, /* Controller 4, led 375, offset 18020 */
	0x00054668, /* Controller 5, led 375, offset 18024 */
	0x0006466c, /* Controller 6, led 375, offset 18028 */
	0x00074670, /* Controller 7, led 375, offset 18032 */
	0x00084674, /* Controller 8, led 375, offset 18036 */
	0x00094678, /* Controller 9, led 375, offset 18040 */
	0x000a467c, /* Controller 10, led 375, offset 18044 */
	0x000b4680, /* Controller 11, led 375, offset 18048 */
	0x00004684, /* Controller 0, led 376, offset 18052 */
	0x00014688, /* Controller 1, led 376, offset 18056 */
	0x0002468c, /* Controller 2, led 376, offset 18060 */
	0x00034690, /* Controller 3, led 376, offset 18064 */
	0x00044694, /* Controller 4, led 376, offset 18068 */
	0x00054698, /* Controller 5, led 376, offset 18072 */
	0x0006469c, /* Controller 6, led 376, offset 18076 */
	0x000746a0, /* Controller 7, led 376, offset 18080 */
	0x000846a4, /* Controller 8, led 376, offset 18084 */
	0x000946a8, /* Controller 9, led 376, offset 18088 */
	0x000a46ac, /* Controller 10, led 376, offset 18092 */
	0x000b46b0, /* Controller 11, led 376, offset 18096 */
	0x000046b4, /* Controller 0, led 377, offset 18100 */
	0x000146b8, /* Controller 1, led 377, offset 18104 */
	0x000246bc, /* Controller 2, led 377, offset 18108 */
	0x000346c0, /* Controller 3, led 377, offset 18112 */
	0x000446c4, /* Controller 4, led 377, offset 18116 */
	0x000546c8, /* Controller 5, led 377, offset 18120 */
	0x000646cc, /* Controller 6, led 377, offset 18124 */
	0x000746d0, /* Controller 7, led 377, offset 18128 */
	0x000846d4, /* Controller 8, led 377, offset 18132 */
	0x000946d8, /* Controller 9, led 377, offset 18136 */
	0x000a46dc, /* Controller 10, led 377, offset 18140 */
	0x000b46e0, /* Controller 11, led 377, offset 18144 */
	0x000046e4, /* Controller 0, led 378, offset 18148 */
	0x000146e8, /* Controller 1, led 378, offset 18152 */
	0x000246ec, /* Controller 2, led 378, offset 18156 */
	0x000346f0, /* Controller 3, led 378, offset 18160 */
	0x000446f4, /* Controller 4, led 378, offset 18164 */
	0x000546f8, /* Controller 5, led 378, offset 18168 */
	0x000646fc, /* Controller 6, led 378, offset 18172 */
	0x00074700, /* Controller 7, led 378, offset 18176 */
	0x00084704, /* Controller 8, led 378, offset 18180 */
	0x00094708, /* Controller 9, led 378, offset 18184 */
	0x000a470c, /* Controller 10, led 378, offset 18188 */
	0x000b4710, /* Controller 11, led 378, offset 18192 */
	0x00004714, /* Controller 0, led 379, offset 18196 */
	0x00014718, /* Controller 1, led 379, offset 18200 */
	0x0002471c, /* Controller 2, led 379, offset 18204 */
	0x00034720, /* Controller 3, led 379, offset 18208 */
	0x00044724, /* Controller 4, led 379, offset 18212 */
	0x00054728, /* Controller 5, led 379, offset 18216 */
	0x0006472c, /* Controller 6, led 379, offset 18220 */
	0x00074730, /* Controller 7, led 379, offset 18224 */
	0x00084734, /* Controller 8, led 379, offset 18228 */
	0x00094738, /* Controller 9, led 379, offset 18232 */
	0x000a473c, /* Controller 10, led 379, offset 18236 */
	0x000b4740, /* Controller 11, led 379, offset 18240 */
	0x00004744, /* Controller 0, led 380, offset 18244 */
	0x00014748, /* Controller 1, led 380, offset 18248 */
	0x0002474c, /* Controller 2, led 380, offset 18252 */
	0x00034750, /* Controller 3, led 380, offset 18256 */
	0x00044754, /* Controller 4, led 380, offset 18260 */
	0x00054758, /* Controller 5, led 380, offset 18264 */
	0x0006475c, /* Controller 6, led 380, offset 18268 */
	0x00074760, /* Controller 7, led 380, offset 18272 */
	0x00084764, /* Controller 8, led 380, offset 18276 */
	0x00094768, /* Controller 9, led 380, offset 18280 */
	0x000a476c, /* Controller 10, led 380, offset 18284 */
	0x000b4770, /* Controller 11, led 380, offset 18288 */
	0x00004774, /* Controller 0, led 381, offset 18292 */
	0x00014778, /* Controller 1, led 381, offset 18296 */
	0x0002477c, /* Controller 2, led 381, offset 18300 */
	0x00034780, /* Controller 3, led 381, offset 18304 */
	0x00044784, /* Controller 4, led 381, offset 18308 */
	0x00054788, /* Controller 5, led 381, offset 18312 */
	0x0006478c, /* Controller 6, led 381, offset 18316 */
	0x00074790, /* Controller 7, led 381, offset 18320 */
	0x00084794, /* Controller 8, led 381, offset 18324 */
	0x00094798, /* Controller 9, led 381, offset 18328 */
	0x000a479c, /* Controller 10, led 381, offset 18332 */
	0x000b47a0, /* Controller 11, led 381, offset 18336 */
	0x000047a4, /* Controller 0, led 382, offset 18340 */
	0x000147a8, /* Controller 1, led 382, offset 18344 */
	0x000247ac, /* Controller 2, led 382, offset 18348 */
	0x000347b0, /* Controller 3, led 382, offset 18352 */
	0x000447b4, /* Controller 4, led 382, offset 18356 */
	0x000547b8, /* Controller 5, led 382, offset 18360 */
	0x000647bc, /* Controller 6, led 382, offset 18364 */
	0x000747c0, /* Controller 7, led 382, offset 18368 */
	0x000847c4, /* Controller 8, led 382, offset 18372 */
	0x000947c8, /* Controller 9, led 382, offset 18376 */
	0x000a47cc, /* Controller 10, led 382, offset 18380 */
	0x000b47d0, /* Controller 11, led 382, offset 18384 */
	0x000047d4, /* Controller 0, led 383, offset 18388 */
	0x000147d8, /* Controller 1, led 383, offset 18392 */
	0x000247dc, /* Controller 2, led 383, offset 18396 */
	0x000347e0, /* Controller 3, led 383, offset 18400 */
	0x000447e4, /* Controller 4, led 383, offset 18404 */
	0x000547e8, /* Controller 5, led 383, offset 18408 */
	0x000647ec, /* Controller 6, led 383, offset 18412 */
	0x000747f0, /* Controller 7, led 383, offset 18416 */
	0x000847f4, /* Controller 8, led 383, offset 18420 */
	0x000947f8, /* Controller 9, led 383, offset 18424 */
	0x000a47fc, /* Controller 10, led 383, offset 18428 */
	0x000b4800, /* Controller 11, led 383, offset 18432 */
	0x00004804, /* Controller 0, led 384, offset 18436 */
	0x00014808, /* Controller 1, led 384, offset 18440 */
	0x0002480c, /* Controller 2, led 384, offset 18444 */
	0x00034810, /* Controller 3, led 384, offset 18448 */
	0x00044814, /* Controller 4, led 384, offset 18452 */
	0x00054818, /* Controller 5, led 384, offset 18456 */
	0x0006481c, /* Controller 6, led 384, offset 18460 */
	0x00074820, /* Controller 7, led 384, offset 18464 */
	0x00084824, /* Controller 8, led 384, offset 18468 */
	0x00094828, /* Controller 9, led 384, offset 18472 */
	0x000a482c, /* Controller 10, led 384, offset 18476 */
	0x000b4830, /* Controller 11, led 384, offset 18480 */
	0x00004834, /* Controller 0, led 385, offset 18484 */
	0x00014838, /* Controller 1, led 385, offset 18488 */
	0x0002483c, /* Controller 2, led 385, offset 18492 */
	0x00034840, /* Controller 3, led 385, offset 18496 */
	0x00044844, /* Controller 4, led 385, offset 18500 */
	0x00054848, /* Controller 5, led 385, offset 18504 */
	0x0006484c, /* Controller 6, led 385, offset 18508 */
	0x00074850, /* Controller 7, led 385, offset 18512 */
	0x00084854, /* Controller 8, led 385, offset 18516 */
	0x00094858, /* Controller 9, led 385, offset 18520 */
	0x000a485c, /* Controller 10, led 385, offset 18524 */
	0x000b4860, /* Controller 11, led 385, offset 18528 */
	0x00004864, /* Controller 0, led 386, offset 18532 */
	0x00014868, /* Controller 1, led 386, offset 18536 */
	0x0002486c, /* Controller 2, led 386, offset 18540 */
	0x00034870, /* Controller 3, led 386, offset 18544 */
	0x00044874, /* Controller 4, led 386, offset 18548 */
	0x00054878, /* Controller 5, led 386, offset 18552 */
	0x0006487c, /* Controller 6, led 386, offset 18556 */
	0x00074880, /* Controller 7, led 386, offset 18560 */
	0x00084884, /* Controller 8, led 386, offset 18564 */
	0x00094888, /* Controller 9, led 386, offset 18568 */
	0x000a488c, /* Controller 10, led 386, offset 18572 */
	0x000b4890, /* Controller 11, led 386, offset 18576 */
	0x00004894, /* Controller 0, led 387, offset 18580 */
	0x00014898, /* Controller 1, led 387, offset 18584 */
	0x0002489c, /* Controller 2, led 387, offset 18588 */
	0x000348a0, /* Controller 3, led 387, offset 18592 */
	0x000448a4, /* Controller 4, led 387, offset 18596 */
	0x000548a8, /* Controller 5, led 387, offset 18600 */
	0x000648ac, /* Controller 6, led 387, offset 18604 */
	0x000748b0, /* Controller 7, led 387, offset 18608 */
	0x000848b4, /* Controller 8, led 387, offset 18612 */
	0x000948b8, /* Controller 9, led 387, offset 18616 */
	0x000a48bc, /* Controller 10, led 387, offset 18620 */
	0x000b48c0, /* Controller 11, led 387, offset 18624 */
	0x000048c4, /* Controller 0, led 388, offset 18628 */
	0x000148c8, /* Controller 1, led 388, offset 18632 */
	0x000248cc, /* Controller 2, led 388, offset 18636 */
	0x000348d0, /* Controller 3, led 388, offset 18640 */
	0x000448d4, /* Controller 4, led 388, offset 18644 */
	0x000548d8, /* Controller 5, led 388, offset 18648 */
	0x000648dc, /* Controller 6, led 388, offset 18652 */
	0x000748e0, /* Controller 7, led 388, offset 18656 */
	0x000848e4, /* Controller 8, led 388, offset 18660 */
	0x000948e8, /* Controller 9, led 388, offset 18664 */
	0x000a48ec, /* Controller 10, led 388, offset 18668 */
	0x000b48f0, /* Controller 11, led 388, offset 18672 */
	0x000048f4, /* Controller 0, led 389, offset 18676 */
	0x000148f8, /* Controller 1, led 389, offset 18680 */
	0x000248fc, /* Controller 2, led 389, offset 18684 */
	0x00034900, /* Controller 3, led 389, offset 18688 */
	0x00044904, /* Controller 4, led 389, offset 18692 */
	0x00054908, /* Controller 5, led 389, offset 18696 */
	0x0006490c, /* Controller 6, led 389, offset 18700 */
	0x00074910, /* Controller 7, led 389, offset 18704 */
	0x00084914, /* Controller 8, led 389, offset 18708 */
	0x00094918, /* Controller 9, led 389, offset 18712 */
	0x000a491c, /* Controller 10, led 389, offset 18716 */
	0x000b4920, /* Controller 11, led 389, offset 18720 */
	0x00004924, /* Controller 0, led 390, offset 18724 */
	0x00014928, /* Controller 1, led 390, offset 18728 */
	0x0002492c, /* Controller 2, led 390, offset 18732 */
	0x00034930, /* Controller 3, led 390, offset 18736 */
	0x00044934, /* Controller 4, led 390, offset 18740 */
	0x00054938, /* Controller 5, led 390, offset 18744 */
	0x0006493c, /* Controller 6, led 390, offset 18748 */
	0x00074940, /* Controller 7, led 390, offset 18752 */
	0x00084944, /* Controller 8, led 390, offset 18756 */
	0x00094948, /* Controller 9, led 390, offset 18760 */
	0x000a494c, /* Controller 10, led 390, offset 18764 */
	0x000b4950, /* Controller 11, led 390, offset 18768 */
	0x00004954, /* Controller 0, led 391, offset 18772 */
	0x00014958, /* Controller 1, led 391, offset 18776 */
	0x0002495c, /* Controller 2, led 391, offset 18780 */
	0x00034960, /* Controller 3, led 391, offset 18784 */
	0x00044964, /* Controller 4, led 391, offset 18788 */
	0x00054968, /* Controller 5, led 391, offset 18792 */
	0x0006496c, /* Controller 6, led 391, offset 18796 */
	0x00074970, /* Controller 7, led 391, offset 18800 */
	0x00084974, /* Controller 8, led 391, offset 18804 */
	0x00094978, /* Controller 9, led 391, offset 18808 */
	0x000a497c, /* Controller 10, led 391, offset 18812 */
	0x000b4980, /* Controller 11, led 391, offset 18816 */
	0x00004984, /* Controller 0, led 392, offset 18820 */
	0x00014988, /* Controller 1, led 392, offset 18824 */
	0x0002498c, /* Controller 2, led 392, offset 18828 */
	0x00034990, /* Controller 3, led 392, offset 18832 */
	0x00044994, /* Controller 4, led 392, offset 18836 */
	0x00054998, /* Controller 5, led 392, offset 18840 */
	0x0006499c, /* Controller 6, led 392, offset 18844 */
	0x000749a0, /* Controller 7, led 392, offset 18848 */
	0x000849a4, /* Controller 8, led 392, offset 18852 */
	0x000949a8, /* Controller 9, led 392, offset 18856 */
	0x000a49ac, /* Controller 10, led 392, offset 18860 */
	0x000b49b0, /* Controller 11, led 392, offset 18864 */
	0x000049b4, /* Controller 0, led 393, offset 18868 */
	0x000149b8, /* Controller 1, led 393, offset 18872 */
	0x000249bc, /* Controller 2, led 393, offset 18876 */
	0x000349c0, /* Controller 3, led 393, offset 18880 */
	0x000449c4, /* Controller 4, led 393, offset 18884 */
	0x000549c8, /* Controller 5, led 393, offset 18888 */
	0x000649cc, /* Controller 6, led 393, offset 18892 */
	0x000749d0, /* Controller 7, led 393, offset 18896 */
	0x000849d4, /* Controller 8, led 393, offset 18900 */
	0x000949d8, /* Controller 9, led 393, offset 18904 */
	0x000a49dc, /* Controller 10, led 393, offset 18908 */
	0x000b49e0, /* Controller 11, led 393, offset 18912 */
	0x000049e4, /* Controller 0, led 394, offset 18916 */
	0x000149e8, /* Controller 1, led 394, offset 18920 */
	0x000249ec, /* Controller 2, led 394, offset 18924 */
	0x000349f0, /* Controller 3, led 394, offset 18928 */
	0x000449f4, /* Controller 4, led 394, offset 18932 */
	0x000549f8, /* Controller 5, led 394, offset 18936 */
	0x000649fc, /* Controller 6, led 394, offset 18940 */
	0x00074a00, /* Controller 7, led 394, offset 18944 */
	0x00084a04, /* Controller 8, led 394, offset 18948 */
	0x00094a08, /* Controller 9, led 394, offset 18952 */
	0x000a4a0c, /* Controller 10, led 394, offset 18956 */
	0x000b4a10, /* Controller 11, led 394, offset 18960 */
	0x00004a14, /* Controller 0, led 395, offset 18964 */
	0x00014a18, /* Controller 1, led 395, offset 18968 */
	0x00024a1c, /* Controller 2, led 395, offset 18972 */
	0x00034a20, /* Controller 3, led 395, offset 18976 */
	0x00044a24, /* Controller 4, led 395, offset 18980 */
	0x00054a28, /* Controller 5, led 395, offset 18984 */
	0x00064a2c, /* Controller 6, led 395, offset 18988 */
	0x00074a30, /* Controller 7, led 395, offset 18992 */
	0x00084a34, /* Controller 8, led 395, offset 18996 */
	0x00094a38, /* Controller 9, led 395, offset 19000 */
	0x000a4a3c, /* Controller 10, led 395, offset 19004 */
	0x000b4a40, /* Controller 11, led 395, offset 19008 */
	0x00004a44, /* Controller 0, led 396, offset 19012 */
	0x00014a48, /* Controller 1, led 396, offset 19016 */
	0x00024a4c, /* Controller 2, led 396, offset 19020 */
	0x00034a50, /* Controller 3, led 396, offset 19024 */
	0x00044a54, /* Controller 4, led 396, offset 19028 */
	0x00054a58, /* Controller 5, led 396, offset 19032 */
	0x00064a5c, /* Controller 6, led 396, offset 19036 */
	0x00074a60, /* Controller 7, led 396, offset 19040 */
	0x00084a64, /* Controller 8, led 396, offset 19044 */
	0x00094a68, /* Controller 9, led 396, offset 19048 */
	0x000a4a6c, /* Controller 10, led 396, offset 19052 */
	0x000b4a70, /* Controller 11, led 396, offset 19056 */
	0x00004a74, /* Controller 0, led 397, offset 19060 */
	0x00014a78, /* Controller 1, led 397, offset 19064 */
	0x00024a7c, /* Controller 2, led 397, offset 19068 */
	0x00034a80, /* Controller 3, led 397, offset 19072 */
	0x00044a84, /* Controller 4, led 397, offset 19076 */
	0x00054a88, /* Controller 5, led 397, offset 19080 */
	0x00064a8c, /* Controller 6, led 397, offset 19084 */
	0x00074a90, /* Controller 7, led 397, offset 19088 */
	0x00084a94, /* Controller 8, led 397, offset 19092 */
	0x00094a98, /* Controller 9, led 397, offset 19096 */
	0x000a4a9c, /* Controller 10, led 397, offset 19100 */
	0x000b4aa0, /* Controller 11, led 397, offset 19104 */
	0x00004aa4, /* Controller 0, led 398, offset 19108 */
	0x00014aa8, /* Controller 1, led 398, offset 19112 */
	0x00024aac, /* Controller 2, led 398, offset 19116 */
	0x00034ab0, /* Controller 3, led 398, offset 19120 */
	0x00044ab4, /* Controller 4, led 398, offset 19124 */
	0x00054ab8, /* Controller 5, led 398, offset 19128 */
	0x00064abc, /* Controller 6, led 398, offset 19132 */
	0x00074ac0, /* Controller 7, led 398, offset 19136 */
	0x00084ac4, /* Controller 8, led 398, offset 19140 */
	0x00094ac8, /* Controller 9, led 398, offset 19144 */
	0x000a4acc, /* Controller 10, led 398, offset 19148 */
	0x000b4ad0, /* Controller 11, led 398, offset 19152 */
	0x00004ad4, /* Controller 0, led 399, offset 19156 */
	0x00014ad8, /* Controller 1, led 399, offset 19160 */
	0x00024adc, /* Controller 2, led 399, offset 19164 */
	0x00034ae0, /* Controller 3, led 399, offset 19168 */
	0x00044ae4, /* Controller 4, led 399, offset 19172 */
	0x00054ae8, /* Controller 5, led 399, offset 19176 */
	0x00064aec, /* Controller 6, led 399, offset 19180 */
	0x00074af0, /* Controller 7, led 399, offset 19184 */
	0x00084af4, /* Controller 8, led 399, offset 19188 */
	0x00094af8, /* Controller 9, led 399, offset 19192 */
	0x000a4afc, /* Controller 10, led 399, offset 19196 */
	0x000b4b00, /* Controller 11, led 399, offset 19200 */
	0x00004b04, /* Controller 0, led 400, offset 19204 */
	0x00014b08, /* Controller 1, led 400, offset 19208 */
	0x00024b0c, /* Controller 2, led 400, offset 19212 */
	0x00034b10, /* Controller 3, led 400, offset 19216 */
	0x00044b14, /* Controller 4, led 400, offset 19220 */
	0x00054b18, /* Controller 5, led 400, offset 19224 */
	0x00064b1c, /* Controller 6, led 400, offset 19228 */
	0x00074b20, /* Controller 7, led 400, offset 19232 */
	0x00084b24, /* Controller 8, led 400, offset 19236 */
	0x00094b28, /* Controller 9, led 400, offset 19240 */
	0x000a4b2c, /* Controller 10, led 400, offset 19244 */
	0x000b4b30, /* Controller 11, led 400, offset 19248 */
	0x00004b34, /* Controller 0, led 401, offset 19252 */
	0x00014b38, /* Controller 1, led 401, offset 19256 */
	0x00024b3c, /* Controller 2, led 401, offset 19260 */
	0x00034b40, /* Controller 3, led 401, offset 19264 */
	0x00044b44, /* Controller 4, led 401, offset 19268 */
	0x00054b48, /* Controller 5, led 401, offset 19272 */
	0x00064b4c, /* Controller 6, led 401, offset 19276 */
	0x00074b50, /* Controller 7, led 401, offset 19280 */
	0x00084b54, /* Controller 8, led 401, offset 19284 */
	0x00094b58, /* Controller 9, led 401, offset 19288 */
	0x000a4b5c, /* Controller 10, led 401, offset 19292 */
	0x000b4b60, /* Controller 11, led 401, offset 19296 */
	0x00004b64, /* Controller 0, led 402, offset 19300 */
	0x00014b68, /* Controller 1, led 402, offset 19304 */
	0x00024b6c, /* Controller 2, led 402, offset 19308 */
	0x00034b70, /* Controller 3, led 402, offset 19312 */
	0x00044b74, /* Controller 4, led 402, offset 19316 */
	0x00054b78, /* Controller 5, led 402, offset 19320 */
	0x00064b7c, /* Controller 6, led 402, offset 19324 */
	0x00074b80, /* Controller 7, led 402, offset 19328 */
	0x00084b84, /* Controller 8, led 402, offset 19332 */
	0x00094b88, /* Controller 9, led 402, offset 19336 */
	0x000a4b8c, /* Controller 10, led 402, offset 19340 */
	0x000b4b90, /* Controller 11, led 402, offset 19344 */
	0x00004b94, /* Controller 0, led 403, offset 19348 */
	0x00014b98, /* Controller 1, led 403, offset 19352 */
	0x00024b9c, /* Controller 2, led 403, offset 19356 */
	0x00034ba0, /* Controller 3, led 403, offset 19360 */
	0x00044ba4, /* Controller 4, led 403, offset 19364 */
	0x00054ba8, /* Controller 5, led 403, offset 19368 */
	0x00064bac, /* Controller 6, led 403, offset 19372 */
	0x00074bb0, /* Controller 7, led 403, offset 19376 */
	0x00084bb4, /* Controller 8, led 403, offset 19380 */
	0x00094bb8, /* Controller 9, led 403, offset 19384 */
	0x000a4bbc, /* Controller 10, led 403, offset 19388 */
	0x000b4bc0, /* Controller 11, led 403, offset 19392 */
	0x00004bc4, /* Controller 0, led 404, offset 19396 */
	0x00014bc8, /* Controller 1, led 404, offset 19400 */
	0x00024bcc, /* Controller 2, led 404, offset 19404 */
	0x00034bd0, /* Controller 3, led 404, offset 19408 */
	0x00044bd4, /* Controller 4, led 404, offset 19412 */
	0x00054bd8, /* Controller 5, led 404, offset 19416 */
	0x00064bdc, /* Controller 6, led 404, offset 19420 */
	0x00074be0, /* Controller 7, led 404, offset 19424 */
	0x00084be4, /* Controller 8, led 404, offset 19428 */
	0x00094be8, /* Controller 9, led 404, offset 19432 */
	0x000a4bec, /* Controller 10, led 404, offset 19436 */
	0x000b4bf0, /* Controller 11, led 404, offset 19440 */
	0x00004bf4, /* Controller 0, led 405, offset 19444 */
	0x00014bf8, /* Controller 1, led 405, offset 19448 */
	0x00024bfc, /* Controller 2, led 405, offset 19452 */
	0x00034c00, /* Controller 3, led 405, offset 19456 */
	0x00044c04, /* Controller 4, led 405, offset 19460 */
	0x00054c08, /* Controller 5, led 405, offset 19464 */
	0x00064c0c, /* Controller 6, led 405, offset 19468 */
	0x00074c10, /* Controller 7, led 405, offset 19472 */
	0x00084c14, /* Controller 8, led 405, offset 19476 */
	0x00094c18, /* Controller 9, led 405, offset 19480 */
	0x000a4c1c, /* Controller 10, led 405, offset 19484 */
	0x000b4c20, /* Controller 11, led 405, offset 19488 */
	0x00004c24, /* Controller 0, led 406, offset 19492 */
	0x00014c28, /* Controller 1, led 406, offset 19496 */
	0x00024c2c, /* Controller 2, led 406, offset 19500 */
	0x00034c30, /* Controller 3, led 406, offset 19504 */
	0x00044c34, /* Controller 4, led 406, offset 19508 */
	0x00054c38, /* Controller 5, led 406, offset 19512 */
	0x00064c3c, /* Controller 6, led 406, offset 19516 */
	0x00074c40, /* Controller 7, led 406, offset 19520 */
	0x00084c44, /* Controller 8, led 406, offset 19524 */
	0x00094c48, /* Controller 9, led 406, offset 19528 */
	0x000a4c4c, /* Controller 10, led 406, offset 19532 */
	0x000b4c50, /* Controller 11, led 406, offset 19536 */
	0x00004c54, /* Controller 0, led 407, offset 19540 */
	0x00014c58, /* Controller 1, led 407, offset 19544 */
	0x00024c5c, /* Controller 2, led 407, offset 19548 */
	0x00034c60, /* Controller 3, led 407, offset 19552 */
	0x00044c64, /* Controller 4, led 407, offset 19556 */
	0x00054c68, /* Controller 5, led 407, offset 19560 */
	0x00064c6c, /* Controller 6, led 407, offset 19564 */
	0x00074c70, /* Controller 7, led 407, offset 19568 */
	0x00084c74, /* Controller 8, led 407, offset 19572 */
	0x00094c78, /* Controller 9, led 407, offset 19576 */
	0x000a4c7c, /* Controller 10, led 407, offset 19580 */
	0x000b4c80, /* Controller 11, led 407, offset 19584 */
	0x00004c84, /* Controller 0, led 408, offset 19588 */
	0x00014c88, /* Controller 1, led 408, offset 19592 */
	0x00024c8c, /* Controller 2, led 408, offset 19596 */
	0x00034c90, /* Controller 3, led 408, offset 19600 */
	0x00044c94, /* Controller 4, led 408, offset 19604 */
	0x00054c98, /* Controller 5, led 408, offset 19608 */
	0x00064c9c, /* Controller 6, led 408, offset 19612 */
	0x00074ca0, /* Controller 7, led 408, offset 19616 */
	0x00084ca4, /* Controller 8, led 408, offset 19620 */
	0x00094ca8, /* Controller 9, led 408, offset 19624 */
	0x000a4cac, /* Controller 10, led 408, offset 19628 */
	0x000b4cb0, /* Controller 11, led 408, offset 19632 */
	0x00004cb4, /* Controller 0, led 409, offset 19636 */
	0x00014cb8, /* Controller 1, led 409, offset 19640 */
	0x00024cbc, /* Controller 2, led 409, offset 19644 */
	0x00034cc0, /* Controller 3, led 409, offset 19648 */
	0x00044cc4, /* Controller 4, led 409, offset 19652 */
	0x00054cc8, /* Controller 5, led 409, offset 19656 */
	0x00064ccc, /* Controller 6, led 409, offset 19660 */
	0x00074cd0, /* Controller 7, led 409, offset 19664 */
	0x00084cd4, /* Controller 8, led 409, offset 19668 */
	0x00094cd8, /* Controller 9, led 409, offset 19672 */
	0x000a4cdc, /* Controller 10, led 409, offset 19676 */
	0x000b4ce0, /* Controller 11, led 409, offset 19680 */
	0x00004ce4, /* Controller 0, led 410, offset 19684 */
	0x00014ce8, /* Controller 1, led 410, offset 19688 */
	0x00024cec, /* Controller 2, led 410, offset 19692 */
	0x00034cf0, /* Controller 3, led 410, offset 19696 */
	0x00044cf4, /* Controller 4, led 410, offset 19700 */
	0x00054cf8, /* Controller 5, led 410, offset 19704 */
	0x00064cfc, /* Controller 6, led 410, offset 19708 */
	0x00074d00, /* Controller 7, led 410, offset 19712 */
	0x00084d04, /* Controller 8, led 410, offset 19716 */
	0x00094d08, /* Controller 9, led 410, offset 19720 */
	0x000a4d0c, /* Controller 10, led 410, offset 19724 */
	0x000b4d10, /* Controller 11, led 410, offset 19728 */
	0x00004d14, /* Controller 0, led 411, offset 19732 */
	0x00014d18, /* Controller 1, led 411, offset 19736 */
	0x00024d1c, /* Controller 2, led 411, offset 19740 */
	0x00034d20, /* Controller 3, led 411, offset 19744 */
	0x00044d24, /* Controller 4, led 411, offset 19748 */
	0x00054d28, /* Controller 5, led 411, offset 19752 */
	0x00064d2c, /* Controller 6, led 411, offset 19756 */
	0x00074d30, /* Controller 7, led 411, offset 19760 */
	0x00084d34, /* Controller 8, led 411, offset 19764 */
	0x00094d38, /* Controller 9, led 411, offset 19768 */
	0x000a4d3c, /* Controller 10, led 411, offset 19772 */
	0x000b4d40, /* Controller 11, led 411, offset 19776 */
	0x00004d44, /* Controller 0, led 412, offset 19780 */
	0x00014d48, /* Controller 1, led 412, offset 19784 */
	0x00024d4c, /* Controller 2, led 412, offset 19788 */
	0x00034d50, /* Controller 3, led 412, offset 19792 */
	0x00044d54, /* Controller 4, led 412, offset 19796 */
	0x00054d58, /* Controller 5, led 412, offset 19800 */
	0x00064d5c, /* Controller 6, led 412, offset 19804 */
	0x00074d60, /* Controller 7, led 412, offset 19808 */
	0x00084d64, /* Controller 8, led 412, offset 19812 */
	0x00094d68, /* Controller 9, led 412, offset 19816 */
	0x000a4d6c, /* Controller 10, led 412, offset 19820 */
	0x000b4d70, /* Controller 11, led 412, offset 19824 */
	0x00004d74, /* Controller 0, led 413, offset 19828 */
	0x00014d78, /* Controller 1, led 413, offset 19832 */
	0x00024d7c, /* Controller 2, led 413, offset 19836 */
	0x00034d80, /* Controller 3, led 413, offset 19840 */
	0x00044d84, /* Controller 4, led 413, offset 19844 */
	0x00054d88, /* Controller 5, led 413, offset 19848 */
	0x00064d8c, /* Controller 6, led 413, offset 19852 */
	0x00074d90, /* Controller 7, led 413, offset 19856 */
	0x00084d94, /* Controller 8, led 413, offset 19860 */
	0x00094d98, /* Controller 9, led 413, offset 19864 */
	0x000a4d9c, /* Controller 10, led 413, offset 19868 */
	0x000b4da0, /* Controller 11, led 413, offset 19872 */
	0x00004da4, /* Controller 0, led 414, offset 19876 */
	0x00014da8, /* Controller 1, led 414, offset 19880 */
	0x00024dac, /* Controller 2, led 414, offset 19884 */
	0x00034db0, /* Controller 3, led 414, offset 19888 */
	0x00044db4, /* Controller 4, led 414, offset 19892 */
	0x00054db8, /* Controller 5, led 414, offset 19896 */
	0x00064dbc, /* Controller 6, led 414, offset 19900 */
	0x00074dc0, /* Controller 7, led 414, offset 19904 */
	0x00084dc4, /* Controller 8, led 414, offset 19908 */
	0x00094dc8, /* Controller 9, led 414, offset 19912 */
	0x000a4dcc, /* Controller 10, led 414, offset 19916 */
	0x000b4dd0, /* Controller 11, led 414, offset 19920 */
	0x00004dd4, /* Controller 0, led 415, offset 19924 */
	0x00014dd8, /* Controller 1, led 415, offset 19928 */
	0x00024ddc, /* Controller 2, led 415, offset 19932 */
	0x00034de0, /* Controller 3, led 415, offset 19936 */
	0x00044de4, /* Controller 4, led 415, offset 19940 */
	0x00054de8, /* Controller 5, led 415, offset 19944 */
	0x00064dec, /* Controller 6, led 415, offset 19948 */
	0x00074df0, /* Controller 7, led 415, offset 19952 */
	0x00084df4, /* Controller 8, led 415, offset 19956 */
	0x00094df8, /* Controller 9, led 415, offset 19960 */
	0x000a4dfc, /* Controller 10, led 415, offset 19964 */
	0x000b4e00, /* Controller 11, led 415, offset 19968 */
	0x00004e04, /* Controller 0, led 416, offset 19972 */
	0x00014e08, /* Controller 1, led 416, offset 19976 */
	0x00024e0c, /* Controller 2, led 416, offset 19980 */
	0x00034e10, /* Controller 3, led 416, offset 19984 */
	0x00044e14, /* Controller 4, led 416, offset 19988 */
	0x00054e18, /* Controller 5, led 416, offset 19992 */
	0x00064e1c, /* Controller 6, led 416, offset 19996 */
	0x00074e20, /* Controller 7, led 416, offset 20000 */
	0x00084e24, /* Controller 8, led 416, offset 20004 */
	0x00094e28, /* Controller 9, led 416, offset 20008 */
	0x000a4e2c, /* Controller 10, led 416, offset 20012 */
	0x000b4e30, /* Controller 11, led 416, offset 20016 */
	0x00004e34, /* Controller 0, led 417, offset 20020 */
	0x00014e38, /* Controller 1, led 417, offset 20024 */
	0x00024e3c, /* Controller 2, led 417, offset 20028 */
	0x00034e40, /* Controller 3, led 417, offset 20032 */
	0x00044e44, /* Controller 4, led 417, offset 20036 */
	0x00054e48, /* Controller 5, led 417, offset 20040 */
	0x00064e4c, /* Controller 6, led 417, offset 20044 */
	0x00074e50, /* Controller 7, led 417, offset 20048 */
	0x00084e54, /* Controller 8, led 417, offset 20052 */
	0x00094e58, /* Controller 9, led 417, offset 20056 */
	0x000a4e5c, /* Controller 10, led 417, offset 20060 */
	0x000b4e60, /* Controller 11, led 417, offset 20064 */
	0x00004e64, /* Controller 0, led 418, offset 20068 */
	0x00014e68, /* Controller 1, led 418, offset 20072 */
	0x00024e6c, /* Controller 2, led 418, offset 20076 */
	0x00034e70, /* Controller 3, led 418, offset 20080 */
	0x00044e74, /* Controller 4, led 418, offset 20084 */
	0x00054e78, /* Controller 5, led 418, offset 20088 */
	0x00064e7c, /* Controller 6, led 418, offset 20092 */
	0x00074e80, /* Controller 7, led 418, offset 20096 */
	0x00084e84, /* Controller 8, led 418, offset 20100 */
	0x00094e88, /* Controller 9, led 418, offset 20104 */
	0x000a4e8c, /* Controller 10, led 418, offset 20108 */
	0x000b4e90, /* Controller 11, led 418, offset 20112 */
	0x00004e94, /* Controller 0, led 419, offset 20116 */
	0x00014e98, /* Controller 1, led 419, offset 20120 */
	0x00024e9c, /* Controller 2, led 419, offset 20124 */
	0x00034ea0, /* Controller 3, led 419, offset 20128 */
	0x00044ea4, /* Controller 4, led 419, offset 20132 */
	0x00054ea8, /* Controller 5, led 419, offset 20136 */
	0x00064eac, /* Controller 6, led 419, offset 20140 */
	0x00074eb0, /* Controller 7, led 419, offset 20144 */
	0x00084eb4, /* Controller 8, led 419, offset 20148 */
	0x00094eb8, /* Controller 9, led 419, offset 20152 */
	0x000a4ebc, /* Controller 10, led 419, offset 20156 */
	0x000b4ec0, /* Controller 11, led 419, offset 20160 */
	0x00004ec4, /* Controller 0, led 420, offset 20164 */
	0x00014ec8, /* Controller 1, led 420, offset 20168 */
	0x00024ecc, /* Controller 2, led 420, offset 20172 */
	0x00034ed0, /* Controller 3, led 420, offset 20176 */
	0x00044ed4, /* Controller 4, led 420, offset 20180 */
	0x00054ed8, /* Controller 5, led 420, offset 20184 */
	0x00064edc, /* Controller 6, led 420, offset 20188 */
	0x00074ee0, /* Controller 7, led 420, offset 20192 */
	0x00084ee4, /* Controller 8, led 420, offset 20196 */
	0x00094ee8, /* Controller 9, led 420, offset 20200 */
	0x000a4eec, /* Controller 10, led 420, offset 20204 */
	0x000b4ef0, /* Controller 11, led 420, offset 20208 */
	0x00004ef4, /* Controller 0, led 421, offset 20212 */
	0x00014ef8, /* Controller 1, led 421, offset 20216 */
	0x00024efc, /* Controller 2, led 421, offset 20220 */
	0x00034f00, /* Controller 3, led 421, offset 20224 */
	0x00044f04, /* Controller 4, led 421, offset 20228 */
	0x00054f08, /* Controller 5, led 421, offset 20232 */
	0x00064f0c, /* Controller 6, led 421, offset 20236 */
	0x00074f10, /* Controller 7, led 421, offset 20240 */
	0x00084f14, /* Controller 8, led 421, offset 20244 */
	0x00094f18, /* Controller 9, led 421, offset 20248 */
	0x000a4f1c, /* Controller 10, led 421, offset 20252 */
	0x000b4f20, /* Controller 11, led 421, offset 20256 */
	0x00004f24, /* Controller 0, led 422, offset 20260 */
	0x00014f28, /* Controller 1, led 422, offset 20264 */
	0x00024f2c, /* Controller 2, led 422, offset 20268 */
	0x00034f30, /* Controller 3, led 422, offset 20272 */
	0x00044f34, /* Controller 4, led 422, offset 20276 */
	0x00054f38, /* Controller 5, led 422, offset 20280 */
	0x00064f3c, /* Controller 6, led 422, offset 20284 */
	0x00074f40, /* Controller 7, led 422, offset 20288 */
	0x00084f44, /* Controller 8, led 422, offset 20292 */
	0x00094f48, /* Controller 9, led 422, offset 20296 */
	0x000a4f4c, /* Controller 10, led 422, offset 20300 */
	0x000b4f50, /* Controller 11, led 422, offset 20304 */
	0x00004f54, /* Controller 0, led 423, offset 20308 */
	0x00014f58, /* Controller 1, led 423, offset 20312 */
	0x00024f5c, /* Controller 2, led 423, offset 20316 */
	0x00034f60, /* Controller 3, led 423, offset 20320 */
	0x00044f64, /* Controller 4, led 423, offset 20324 */
	0x00054f68, /* Controller 5, led 423, offset 20328 */
	0x00064f6c, /* Controller 6, led 423, offset 20332 */
	0x00074f70, /* Controller 7, led 423, offset 20336 */
	0x00084f74, /* Controller 8, led 423, offset 20340 */
	0x00094f78, /* Controller 9, led 423, offset 20344 */
	0x000a4f7c, /* Controller 10, led 423, offset 20348 */
	0x000b4f80, /* Controller 11, led 423, offset 20352 */
	0x00004f84, /* Controller 0, led 424, offset 20356 */
	0x00014f88, /* Controller 1, led 424, offset 20360 */
	0x00024f8c, /* Controller 2, led 424, offset 20364 */
	0x00034f90, /* Controller 3, led 424, offset 20368 */
	0x00044f94, /* Controller 4, led 424, offset 20372 */
	0x00054f98, /* Controller 5, led 424, offset 20376 */
	0x00064f9c, /* Controller 6, led 424, offset 20380 */
	0x00074fa0, /* Controller 7, led 424, offset 20384 */
	0x00084fa4, /* Controller 8, led 424, offset 20388 */
	0x00094fa8, /* Controller 9, led 424, offset 20392 */
	0x000a4fac, /* Controller 10, led 424, offset 20396 */
	0x000b4fb0, /* Controller 11, led 424, offset 20400 */
	0x00004fb4, /* Controller 0, led 425, offset 20404 */
	0x00014fb8, /* Controller 1, led 425, offset 20408 */
	0x00024fbc, /* Controller 2, led 425, offset 20412 */
	0x00034fc0, /* Controller 3, led 425, offset 20416 */
	0x00044fc4, /* Controller 4, led 425, offset 20420 */
	0x00054fc8, /* Controller 5, led 425, offset 20424 */
	0x00064fcc, /* Controller 6, led 425, offset 20428 */
	0x00074fd0, /* Controller 7, led 425, offset 20432 */
	0x00084fd4, /* Controller 8, led 425, offset 20436 */
	0x00094fd8, /* Controller 9, led 425, offset 20440 */
	0x000a4fdc, /* Controller 10, led 425, offset 20444 */
	0x000b4fe0, /* Controller 11, led 425, offset 20448 */
	0x00004fe4, /* Controller 0, led 426, offset 20452 */
	0x00014fe8, /* Controller 1, led 426, offset 20456 */
	0x00024fec, /* Controller 2, led 426, offset 20460 */
	0x00034ff0, /* Controller 3, led 426, offset 20464 */
	0x00044ff4, /* Controller 4, led 426, offset 20468 */
	0x00054ff8, /* Controller 5, led 426, offset 20472 */
	0x00064ffc, /* Controller 6, led 426, offset 20476 */
	0x00075000, /* Controller 7, led 426, offset 20480 */
	0x00085004, /* Controller 8, led 426, offset 20484 */
	0x00095008, /* Controller 9, led 426, offset 20488 */
	0x000a500c, /* Controller 10, led 426, offset 20492 */
	0x000b5010, /* Controller 11, led 426, offset 20496 */
	0x00005014, /* Controller 0, led 427, offset 20500 */
	0x00015018, /* Controller 1, led 427, offset 20504 */
	0x0002501c, /* Controller 2, led 427, offset 20508 */
	0x00035020, /* Controller 3, led 427, offset 20512 */
	0x00045024, /* Controller 4, led 427, offset 20516 */
	0x00055028, /* Controller 5, led 427, offset 20520 */
	0x0006502c, /* Controller 6, led 427, offset 20524 */
	0x00075030, /* Controller 7, led 427, offset 20528 */
	0x00085034, /* Controller 8, led 427, offset 20532 */
	0x00095038, /* Controller 9, led 427, offset 20536 */
	0x000a503c, /* Controller 10, led 427, offset 20540 */
	0x000b5040, /* Controller 11, led 427, offset 20544 */
	0x00005044, /* Controller 0, led 428, offset 20548 */
	0x00015048, /* Controller 1, led 428, offset 20552 */
	0x0002504c, /* Controller 2, led 428, offset 20556 */
	0x00035050, /* Controller 3, led 428, offset 20560 */
	0x00045054, /* Controller 4, led 428, offset 20564 */
	0x00055058, /* Controller 5, led 428, offset 20568 */
	0x0006505c, /* Controller 6, led 428, offset 20572 */
	0x00075060, /* Controller 7, led 428, offset 20576 */
	0x00085064, /* Controller 8, led 428, offset 20580 */
	0x00095068, /* Controller 9, led 428, offset 20584 */
	0x000a506c, /* Controller 10, led 428, offset 20588 */
	0x000b5070, /* Controller 11, led 428, offset 20592 */
	0x00005074, /* Controller 0, led 429, offset 20596 */
	0x00015078, /* Controller 1, led 429, offset 20600 */
	0x0002507c, /* Controller 2, led 429, offset 20604 */
	0x00035080, /* Controller 3, led 429, offset 20608 */
	0x00045084, /* Controller 4, led 429, offset 20612 */
	0x00055088, /* Controller 5, led 429, offset 20616 */
	0x0006508c, /* Controller 6, led 429, offset 20620 */
	0x00075090, /* Controller 7, led 429, offset 20624 */
	0x00085094, /* Controller 8, led 429, offset 20628 */
	0x00095098, /* Controller 9, led 429, offset 20632 */
	0x000a509c, /* Controller 10, led 429, offset 20636 */
	0x000b50a0, /* Controller 11, led 429, offset 20640 */
	0x000050a4, /* Controller 0, led 430, offset 20644 */
	0x000150a8, /* Controller 1, led 430, offset 20648 */
	0x000250ac, /* Controller 2, led 430, offset 20652 */
	0x000350b0, /* Controller 3, led 430, offset 20656 */
	0x000450b4, /* Controller 4, led 430, offset 20660 */
	0x000550b8, /* Controller 5, led 430, offset 20664 */
	0x000650bc, /* Controller 6, led 430, offset 20668 */
	0x000750c0, /* Controller 7, led 430, offset 20672 */
	0x000850c4, /* Controller 8, led 430, offset 20676 */
	0x000950c8, /* Controller 9, led 430, offset 20680 */
	0x000a50cc, /* Controller 10, led 430, offset 20684 */
	0x000b50d0, /* Controller 11, led 430, offset 20688 */
	0x000050d4, /* Controller 0, led 431, offset 20692 */
	0x000150d8, /* Controller 1, led 431, offset 20696 */
	0x000250dc, /* Controller 2, led 431, offset 20700 */
	0x000350e0, /* Controller 3, led 431, offset 20704 */
	0x000450e4, /* Controller 4, led 431, offset 20708 */
	0x000550e8, /* Controller 5, led 431, offset 20712 */
	0x000650ec, /* Controller 6, led 431, offset 20716 */
	0x000750f0, /* Controller 7, led 431, offset 20720 */
	0x000850f4, /* Controller 8, led 431, offset 20724 */
	0x000950f8, /* Controller 9, led 431, offset 20728 */
	0x000a50fc, /* Controller 10, led 431, offset 20732 */
	0x000b5100, /* Controller 11, led 431, offset 20736 */
	0x00005104, /* Controller 0, led 432, offset 20740 */
	0x00015108, /* Controller 1, led 432, offset 20744 */
	0x0002510c, /* Controller 2, led 432, offset 20748 */
	0x00035110, /* Controller 3, led 432, offset 20752 */
	0x00045114, /* Controller 4, led 432, offset 20756 */
	0x00055118, /* Controller 5, led 432, offset 20760 */
	0x0006511c, /* Controller 6, led 432, offset 20764 */
	0x00075120, /* Controller 7, led 432, offset 20768 */
	0x00085124, /* Controller 8, led 432, offset 20772 */
	0x00095128, /* Controller 9, led 432, offset 20776 */
	0x000a512c, /* Controller 10, led 432, offset 20780 */
	0x000b5130, /* Controller 11, led 432, offset 20784 */
	0x00005134, /* Controller 0, led 433, offset 20788 */
	0x00015138, /* Controller 1, led 433, offset 20792 */
	0x0002513c, /* Controller 2, led 433, offset 20796 */
	0x00035140, /* Controller 3, led 433, offset 20800 */
	0x00045144, /* Controller 4, led 433, offset 20804 */
	0x00055148, /* Controller 5, led 433, offset 20808 */
	0x0006514c, /* Controller 6, led 433, offset 20812 */
	0x00075150, /* Controller 7, led 433, offset 20816 */
	0x00085154, /* Controller 8, led 433, offset 20820 */
	0x00095158, /* Controller 9, led 433, offset 20824 */
	0x000a515c, /* Controller 10, led 433, offset 20828 */
	0x000b5160, /* Controller 11, led 433, offset 20832 */
	0x00005164, /* Controller 0, led 434, offset 20836 */
	0x00015168, /* Controller 1, led 434, offset 20840 */
	0x0002516c, /* Controller 2, led 434, offset 20844 */
	0x00035170, /* Controller 3, led 434, offset 20848 */
	0x00045174, /* Controller 4, led 434, offset 20852 */
	0x00055178, /* Controller 5, led 434, offset 20856 */
	0x0006517c, /* Controller 6, led 434, offset 20860 */
	0x00075180, /* Controller 7, led 434, offset 20864 */
	0x00085184, /* Controller 8, led 434, offset 20868 */
	0x00095188, /* Controller 9, led 434, offset 20872 */
	0x000a518c, /* Controller 10, led 434, offset 20876 */
	0x000b5190, /* Controller 11, led 434, offset 20880 */
	0x00005194, /* Controller 0, led 435, offset 20884 */
	0x00015198, /* Controller 1, led 435, offset 20888 */
	0x0002519c, /* Controller 2, led 435, offset 20892 */
	0x000351a0, /* Controller 3, led 435, offset 20896 */
	0x000451a4, /* Controller 4, led 435, offset 20900 */
	0x000551a8, /* Controller 5, led 435, offset 20904 */
	0x000651ac, /* Controller 6, led 435, offset 20908 */
	0x000751b0, /* Controller 7, led 435, offset 20912 */
	0x000851b4, /* Controller 8, led 435, offset 20916 */
	0x000951b8, /* Controller 9, led 435, offset 20920 */
	0x000a51bc, /* Controller 10, led 435, offset 20924 */
	0x000b51c0, /* Controller 11, led 435, offset 20928 */
	0x000051c4, /* Controller 0, led 436, offset 20932 */
	0x000151c8, /* Controller 1, led 436, offset 20936 */
	0x000251cc, /* Controller 2, led 436, offset 20940 */
	0x000351d0, /* Controller 3, led 436, offset 20944 */
	0x000451d4, /* Controller 4, led 436, offset 20948 */
	0x000551d8, /* Controller 5, led 436, offset 20952 */
	0x000651dc, /* Controller 6, led 436, offset 20956 */
	0x000751e0, /* Controller 7, led 436, offset 20960 */
	0x000851e4, /* Controller 8, led 436, offset 20964 */
	0x000951e8, /* Controller 9, led 436, offset 20968 */
	0x000a51ec, /* Controller 10, led 436, offset 20972 */
	0x000b51f0, /* Controller 11, led 436, offset 20976 */
	0x000051f4, /* Controller 0, led 437, offset 20980 */
	0x000151f8, /* Controller 1, led 437, offset 20984 */
	0x000251fc, /* Controller 2, led 437, offset 20988 */
	0x00035200, /* Controller 3, led 437, offset 20992 */
	0x00045204, /* Controller 4, led 437, offset 20996 */
	0x00055208, /* Controller 5, led 437, offset 21000 */
	0x0006520c, /* Controller 6, led 437, offset 21004 */
	0x00075210, /* Controller 7, led 437, offset 21008 */
	0x00085214, /* Controller 8, led 437, offset 21012 */
	0x00095218, /* Controller 9, led 437, offset 21016 */
	0x000a521c, /* Controller 10, led 437, offset 21020 */
	0x000b5220, /* Controller 11, led 437, offset 21024 */
	0x00005224, /* Controller 0, led 438, offset 21028 */
	0x00015228, /* Controller 1, led 438, offset 21032 */
	0x0002522c, /* Controller 2, led 438, offset 21036 */
	0x00035230, /* Controller 3, led 438, offset 21040 */
	0x00045234, /* Controller 4, led 438, offset 21044 */
	0x00055238, /* Controller 5, led 438, offset 21048 */
	0x0006523c, /* Controller 6, led 438, offset 21052 */
	0x00075240, /* Controller 7, led 438, offset 21056 */
	0x00085244, /* Controller 8, led 438, offset 21060 */
	0x00095248, /* Controller 9, led 438, offset 21064 */
	0x000a524c, /* Controller 10, led 438, offset 21068 */
	0x000b5250, /* Controller 11, led 438, offset 21072 */
	0x00005254, /* Controller 0, led 439, offset 21076 */
	0x00015258, /* Controller 1, led 439, offset 21080 */
	0x0002525c, /* Controller 2, led 439, offset 21084 */
	0x00035260, /* Controller 3, led 439, offset 21088 */
	0x00045264, /* Controller 4, led 439, offset 21092 */
	0x00055268, /* Controller 5, led 439, offset 21096 */
	0x0006526c, /* Controller 6, led 439, offset 21100 */
	0x00075270, /* Controller 7, led 439, offset 21104 */
	0x00085274, /* Controller 8, led 439, offset 21108 */
	0x00095278, /* Controller 9, led 439, offset 21112 */
	0x000a527c, /* Controller 10, led 439, offset 21116 */
	0x000b5280, /* Controller 11, led 439, offset 21120 */
	0x00005284, /* Controller 0, led 440, offset 21124 */
	0x00015288, /* Controller 1, led 440, offset 21128 */
	0x0002528c, /* Controller 2, led 440, offset 21132 */
	0x00035290, /* Controller 3, led 440, offset 21136 */
	0x00045294, /* Controller 4, led 440, offset 21140 */
	0x00055298, /* Controller 5, led 440, offset 21144 */
	0x0006529c, /* Controller 6, led 440, offset 21148 */
	0x000752a0, /* Controller 7, led 440, offset 21152 */
	0x000852a4, /* Controller 8, led 440, offset 21156 */
	0x000952a8, /* Controller 9, led 440, offset 21160 */
	0x000a52ac, /* Controller 10, led 440, offset 21164 */
	0x000b52b0, /* Controller 11, led 440, offset 21168 */
	0x000052b4, /* Controller 0, led 441, offset 21172 */
	0x000152b8, /* Controller 1, led 441, offset 21176 */
	0x000252bc, /* Controller 2, led 441, offset 21180 */
	0x000352c0, /* Controller 3, led 441, offset 21184 */
	0x000452c4, /* Controller 4, led 441, offset 21188 */
	0x000552c8, /* Controller 5, led 441, offset 21192 */
	0x000652cc, /* Controller 6, led 441, offset 21196 */
	0x000752d0, /* Controller 7, led 441, offset 21200 */
	0x000852d4, /* Controller 8, led 441, offset 21204 */
	0x000952d8, /* Controller 9, led 441, offset 21208 */
	0x000a52dc, /* Controller 10, led 441, offset 21212 */
	0x000b52e0, /* Controller 11, led 441, offset 21216 */
	0x000052e4, /* Controller 0, led 442, offset 21220 */
	0x000152e8, /* Controller 1, led 442, offset 21224 */
	0x000252ec, /* Controller 2, led 442, offset 21228 */
	0x000352f0, /* Controller 3, led 442, offset 21232 */
	0x000452f4, /* Controller 4, led 442, offset 21236 */
	0x000552f8, /* Controller 5, led 442, offset 21240 */
	0x000652fc, /* Controller 6, led 442, offset 21244 */
	0x00075300, /* Controller 7, led 442, offset 21248 */
	0x00085304, /* Controller 8, led 442, offset 21252 */
	0x00095308, /* Controller 9, led 442, offset 21256 */
	0x000a530c, /* Controller 10, led 442, offset 21260 */
	0x000b5310, /* Controller 11, led 442, offset 21264 */
	0x00005314, /* Controller 0, led 443, offset 21268 */
	0x00015318, /* Controller 1, led 443, offset 21272 */
	0x0002531c, /* Controller 2, led 443, offset 21276 */
	0x00035320, /* Controller 3, led 443, offset 21280 */
	0x00045324, /* Controller 4, led 443, offset 21284 */
	0x00055328, /* Controller 5, led 443, offset 21288 */
	0x0006532c, /* Controller 6, led 443, offset 21292 */
	0x00075330, /* Controller 7, led 443, offset 21296 */
	0x00085334, /* Controller 8, led 443, offset 21300 */
	0x00095338, /* Controller 9, led 443, offset 21304 */
	0x000a533c, /* Controller 10, led 443, offset 21308 */
	0x000b5340, /* Controller 11, led 443, offset 21312 */
	0x00005344, /* Controller 0, led 444, offset 21316 */
	0x00015348, /* Controller 1, led 444, offset 21320 */
	0x0002534c, /* Controller 2, led 444, offset 21324 */
	0x00035350, /* Controller 3, led 444, offset 21328 */
	0x00045354, /* Controller 4, led 444, offset 21332 */
	0x00055358, /* Controller 5, led 444, offset 21336 */
	0x0006535c, /* Controller 6, led 444, offset 21340 */
	0x00075360, /* Controller 7, led 444, offset 21344 */
	0x00085364, /* Controller 8, led 444, offset 21348 */
	0x00095368, /* Controller 9, led 444, offset 21352 */
	0x000a536c, /* Controller 10, led 444, offset 21356 */
	0x000b5370, /* Controller 11, led 444, offset 21360 */
	0x00005374, /* Controller 0, led 445, offset 21364 */
	0x00015378, /* Controller 1, led 445, offset 21368 */
	0x0002537c, /* Controller 2, led 445, offset 21372 */
	0x00035380, /* Controller 3, led 445, offset 21376 */
	0x00045384, /* Controller 4, led 445, offset 21380 */
	0x00055388, /* Controller 5, led 445, offset 21384 */
	0x0006538c, /* Controller 6, led 445, offset 21388 */
	0x00075390, /* Controller 7, led 445, offset 21392 */
	0x00085394, /* Controller 8, led 445, offset 21396 */
	0x00095398, /* Controller 9, led 445, offset 21400 */
	0x000a539c, /* Controller 10, led 445, offset 21404 */
	0x000b53a0, /* Controller 11, led 445, offset 21408 */
	0x000053a4, /* Controller 0, led 446, offset 21412 */
	0x000153a8, /* Controller 1, led 446, offset 21416 */
	0x000253ac, /* Controller 2, led 446, offset 21420 */
	0x000353b0, /* Controller 3, led 446, offset 21424 */
	0x000453b4, /* Controller 4, led 446, offset 21428 */
	0x000553b8, /* Controller 5, led 446, offset 21432 */
	0x000653bc, /* Controller 6, led 446, offset 21436 */
	0x000753c0, /* Controller 7, led 446, offset 21440 */
	0x000853c4, /* Controller 8, led 446, offset 21444 */
	0x000953c8, /* Controller 9, led 446, offset 21448 */
	0x000a53cc, /* Controller 10, led 446, offset 21452 */
	0x000b53d0, /* Controller 11, led 446, offset 21456 */
	0x000053d4, /* Controller 0, led 447, offset 21460 */
	0x000153d8, /* Controller 1, led 447, offset 21464 */
	0x000253dc, /* Controller 2, led 447, offset 21468 */
	0x000353e0, /* Controller 3, led 447, offset 21472 */
	0x000453e4, /* Controller 4, led 447, offset 21476 */
	0x000553e8, /* Controller 5, led 447, offset 21480 */
	0x000653ec, /* Controller 6, led 447, offset 21484 */
	0x000753f0, /* Controller 7, led 447, offset 21488 */
	0x000853f4, /* Controller 8, led 447, offset 21492 */
	0x000953f8, /* Controller 9, led 447, offset 21496 */
	0x000a53fc, /* Controller 10, led 447, offset 21500 */
	0x000b5400, /* Controller 11, led 447, offset 21504 */
	0x00005404, /* Controller 0, led 448, offset 21508 */
	0x00015408, /* Controller 1, led 448, offset 21512 */
	0x0002540c, /* Controller 2, led 448, offset 21516 */
	0x00035410, /* Controller 3, led 448, offset 21520 */
	0x00045414, /* Controller 4, led 448, offset 21524 */
	0x00055418, /* Controller 5, led 448, offset 21528 */
	0x0006541c, /* Controller 6, led 448, offset 21532 */
	0x00075420, /* Controller 7, led 448, offset 21536 */
	0x00085424, /* Controller 8, led 448, offset 21540 */
	0x00095428, /* Controller 9, led 448, offset 21544 */
	0x000a542c, /* Controller 10, led 448, offset 21548 */
	0x000b5430, /* Controller 11, led 448, offset 21552 */
	0x00005434, /* Controller 0, led 449, offset 21556 */
	0x00015438, /* Controller 1, led 449, offset 21560 */
	0x0002543c, /* Controller 2, led 449, offset 21564 */
	0x00035440, /* Controller 3, led 449, offset 21568 */
	0x00045444, /* Controller 4, led 449, offset 21572 */
	0x00055448, /* Controller 5, led 449, offset 21576 */
	0x0006544c, /* Controller 6, led 449, offset 21580 */
	0x00075450, /* Controller 7, led 449, offset 21584 */
	0x00085454, /* Controller 8, led 449, offset 21588 */
	0x00095458, /* Controller 9, led 449, offset 21592 */
	0x000a545c, /* Controller 10, led 449, offset 21596 */
	0x000b5460, /* Controller 11, led 449, offset 21600 */
	0x00005464, /* Controller 0, led 450, offset 21604 */
	0x00015468, /* Controller 1, led 450, offset 21608 */
	0x0002546c, /* Controller 2, led 450, offset 21612 */
	0x00035470, /* Controller 3, led 450, offset 21616 */
	0x00045474, /* Controller 4, led 450, offset 21620 */
	0x00055478, /* Controller 5, led 450, offset 21624 */
	0x0006547c, /* Controller 6, led 450, offset 21628 */
	0x00075480, /* Controller 7, led 450, offset 21632 */
	0x00085484, /* Controller 8, led 450, offset 21636 */
	0x00095488, /* Controller 9, led 450, offset 21640 */
	0x000a548c, /* Controller 10, led 450, offset 21644 */
	0x000b5490, /* Controller 11, led 450, offset 21648 */
	0x00005494, /* Controller 0, led 451, offset 21652 */
	0x00015498, /* Controller 1, led 451, offset 21656 */
	0x0002549c, /* Controller 2, led 451, offset 21660 */
	0x000354a0, /* Controller 3, led 451, offset 21664 */
	0x000454a4, /* Controller 4, led 451, offset 21668 */
	0x000554a8, /* Controller 5, led 451, offset 21672 */
	0x000654ac, /* Controller 6, led 451, offset 21676 */
	0x000754b0, /* Controller 7, led 451, offset 21680 */
	0x000854b4, /* Controller 8, led 451, offset 21684 */
	0x000954b8, /* Controller 9, led 451, offset 21688 */
	0x000a54bc, /* Controller 10, led 451, offset 21692 */
	0x000b54c0, /* Controller 11, led 451, offset 21696 */
	0x000054c4, /* Controller 0, led 452, offset 21700 */
	0x000154c8, /* Controller 1, led 452, offset 21704 */
	0x000254cc, /* Controller 2, led 452, offset 21708 */
	0x000354d0, /* Controller 3, led 452, offset 21712 */
	0x000454d4, /* Controller 4, led 452, offset 21716 */
	0x000554d8, /* Controller 5, led 452, offset 21720 */
	0x000654dc, /* Controller 6, led 452, offset 21724 */
	0x000754e0, /* Controller 7, led 452, offset 21728 */
	0x000854e4, /* Controller 8, led 452, offset 21732 */
	0x000954e8, /* Controller 9, led 452, offset 21736 */
	0x000a54ec, /* Controller 10, led 452, offset 21740 */
	0x000b54f0, /* Controller 11, led 452, offset 21744 */
	0x000054f4, /* Controller 0, led 453, offset 21748 */
	0x000154f8, /* Controller 1, led 453, offset 21752 */
	0x000254fc, /* Controller 2, led 453, offset 21756 */
	0x00035500, /* Controller 3, led 453, offset 21760 */
	0x00045504, /* Controller 4, led 453, offset 21764 */
	0x00055508, /* Controller 5, led 453, offset 21768 */
	0x0006550c, /* Controller 6, led 453, offset 21772 */
	0x00075510, /* Controller 7, led 453, offset 21776 */
	0x00085514, /* Controller 8, led 453, offset 21780 */
	0x00095518, /* Controller 9, led 453, offset 21784 */
	0x000a551c, /* Controller 10, led 453, offset 21788 */
	0x000b5520, /* Controller 11, led 453, offset 21792 */
	0x00005524, /* Controller 0, led 454, offset 21796 */
	0x00015528, /* Controller 1, led 454, offset 21800 */
	0x0002552c, /* Controller 2, led 454, offset 21804 */
	0x00035530, /* Controller 3, led 454, offset 21808 */
	0x00045534, /* Controller 4, led 454, offset 21812 */
	0x00055538, /* Controller 5, led 454, offset 21816 */
	0x0006553c, /* Controller 6, led 454, offset 21820 */
	0x00075540, /* Controller 7, led 454, offset 21824 */
	0x00085544, /* Controller 8, led 454, offset 21828 */
	0x00095548, /* Controller 9, led 454, offset 21832 */
	0x000a554c, /* Controller 10, led 454, offset 21836 */
	0x000b5550, /* Controller 11, led 454, offset 21840 */
	0x00005554, /* Controller 0, led 455, offset 21844 */
	0x00015558, /* Controller 1, led 455, offset 21848 */
	0x0002555c, /* Controller 2, led 455, offset 21852 */
	0x00035560, /* Controller 3, led 455, offset 21856 */
	0x00045564, /* Controller 4, led 455, offset 21860 */
	0x00055568, /* Controller 5, led 455, offset 21864 */
	0x0006556c, /* Controller 6, led 455, offset 21868 */
	0x00075570, /* Controller 7, led 455, offset 21872 */
	0x00085574, /* Controller 8, led 455, offset 21876 */
	0x00095578, /* Controller 9, led 455, offset 21880 */
	0x000a557c, /* Controller 10, led 455, offset 21884 */
	0x000b5580, /* Controller 11, led 455, offset 21888 */
	0x00005584, /* Controller 0, led 456, offset 21892 */
	0x00015588, /* Controller 1, led 456, offset 21896 */
	0x0002558c, /* Controller 2, led 456, offset 21900 */
	0x00035590, /* Controller 3, led 456, offset 21904 */
	0x00045594, /* Controller 4, led 456, offset 21908 */
	0x00055598, /* Controller 5, led 456, offset 21912 */
	0x0006559c, /* Controller 6, led 456, offset 21916 */
	0x000755a0, /* Controller 7, led 456, offset 21920 */
	0x000855a4, /* Controller 8, led 456, offset 21924 */
	0x000955a8, /* Controller 9, led 456, offset 21928 */
	0x000a55ac, /* Controller 10, led 456, offset 21932 */
	0x000b55b0, /* Controller 11, led 456, offset 21936 */
	0x000055b4, /* Controller 0, led 457, offset 21940 */
	0x000155b8, /* Controller 1, led 457, offset 21944 */
	0x000255bc, /* Controller 2, led 457, offset 21948 */
	0x000355c0, /* Controller 3, led 457, offset 21952 */
	0x000455c4, /* Controller 4, led 457, offset 21956 */
	0x000555c8, /* Controller 5, led 457, offset 21960 */
	0x000655cc, /* Controller 6, led 457, offset 21964 */
	0x000755d0, /* Controller 7, led 457, offset 21968 */
	0x000855d4, /* Controller 8, led 457, offset 21972 */
	0x000955d8, /* Controller 9, led 457, offset 21976 */
	0x000a55dc, /* Controller 10, led 457, offset 21980 */
	0x000b55e0, /* Controller 11, led 457, offset 21984 */
	0x000055e4, /* Controller 0, led 458, offset 21988 */
	0x000155e8, /* Controller 1, led 458, offset 21992 */
	0x000255ec, /* Controller 2, led 458, offset 21996 */
	0x000355f0, /* Controller 3, led 458, offset 22000 */
	0x000455f4, /* Controller 4, led 458, offset 22004 */
	0x000555f8, /* Controller 5, led 458, offset 22008 */
	0x000655fc, /* Controller 6, led 458, offset 22012 */
	0x00075600, /* Controller 7, led 458, offset 22016 */
	0x00085604, /* Controller 8, led 458, offset 22020 */
	0x00095608, /* Controller 9, led 458, offset 22024 */
	0x000a560c, /* Controller 10, led 458, offset 22028 */
	0x000b5610, /* Controller 11, led 458, offset 22032 */
	0x00005614, /* Controller 0, led 459, offset 22036 */
	0x00015618, /* Controller 1, led 459, offset 22040 */
	0x0002561c, /* Controller 2, led 459, offset 22044 */
	0x00035620, /* Controller 3, led 459, offset 22048 */
	0x00045624, /* Controller 4, led 459, offset 22052 */
	0x00055628, /* Controller 5, led 459, offset 22056 */
	0x0006562c, /* Controller 6, led 459, offset 22060 */
	0x00075630, /* Controller 7, led 459, offset 22064 */
	0x00085634, /* Controller 8, led 459, offset 22068 */
	0x00095638, /* Controller 9, led 459, offset 22072 */
	0x000a563c, /* Controller 10, led 459, offset 22076 */
	0x000b5640, /* Controller 11, led 459, offset 22080 */
	0x00005644, /* Controller 0, led 460, offset 22084 */
	0x00015648, /* Controller 1, led 460, offset 22088 */
	0x0002564c, /* Controller 2, led 460, offset 22092 */
	0x00035650, /* Controller 3, led 460, offset 22096 */
	0x00045654, /* Controller 4, led 460, offset 22100 */
	0x00055658, /* Controller 5, led 460, offset 22104 */
	0x0006565c, /* Controller 6, led 460, offset 22108 */
	0x00075660, /* Controller 7, led 460, offset 22112 */
	0x00085664, /* Controller 8, led 460, offset 22116 */
	0x00095668, /* Controller 9, led 460, offset 22120 */
	0x000a566c, /* Controller 10, led 460, offset 22124 */
	0x000b5670, /* Controller 11, led 460, offset 22128 */
	0x00005674, /* Controller 0, led 461, offset 22132 */
	0x00015678, /* Controller 1, led 461, offset 22136 */
	0x0002567c, /* Controller 2, led 461, offset 22140 */
	0x00035680, /* Controller 3, led 461, offset 22144 */
	0x00045684, /* Controller 4, led 461, offset 22148 */
	0x00055688, /* Controller 5, led 461, offset 22152 */
	0x0006568c, /* Controller 6, led 461, offset 22156 */
	0x00075690, /* Controller 7, led 461, offset 22160 */
	0x00085694, /* Controller 8, led 461, offset 22164 */
	0x00095698, /* Controller 9, led 461, offset 22168 */
	0x000a569c, /* Controller 10, led 461, offset 22172 */
	0x000b56a0, /* Controller 11, led 461, offset 22176 */
	0x000056a4, /* Controller 0, led 462, offset 22180 */
	0x000156a8, /* Controller 1, led 462, offset 22184 */
	0x000256ac, /* Controller 2, led 462, offset 22188 */
	0x000356b0, /* Controller 3, led 462, offset 22192 */
	0x000456b4, /* Controller 4, led 462, offset 22196 */
	0x000556b8, /* Controller 5, led 462, offset 22200 */
	0x000656bc, /* Controller 6, led 462, offset 22204 */
	0x000756c0, /* Controller 7, led 462, offset 22208 */
	0x000856c4, /* Controller 8, led 462, offset 22212 */
	0x000956c8, /* Controller 9, led 462, offset 22216 */
	0x000a56cc, /* Controller 10, led 462, offset 22220 */
	0x000b56d0, /* Controller 11, led 462, offset 22224 */
	0x000056d4, /* Controller 0, led 463, offset 22228 */
	0x000156d8, /* Controller 1, led 463, offset 22232 */
	0x000256dc, /* Controller 2, led 463, offset 22236 */
	0x000356e0, /* Controller 3, led 463, offset 22240 */
	0x000456e4, /* Controller 4, led 463, offset 22244 */
	0x000556e8, /* Controller 5, led 463, offset 22248 */
	0x000656ec, /* Controller 6, led 463, offset 22252 */
	0x000756f0, /* Controller 7, led 463, offset 22256 */
	0x000856f4, /* Controller 8, led 463, offset 22260 */
	0x000956f8, /* Controller 9, led 463, offset 22264 */
	0x000a56fc, /* Controller 10, led 463, offset 22268 */
	0x000b5700, /* Controller 11, led 463, offset 22272 */
	0x00005704, /* Controller 0, led 464, offset 22276 */
	0x00015708, /* Controller 1, led 464, offset 22280 */
	0x0002570c, /* Controller 2, led 464, offset 22284 */
	0x00035710, /* Controller 3, led 464, offset 22288 */
	0x00045714, /* Controller 4, led 464, offset 22292 */
	0x00055718, /* Controller 5, led 464, offset 22296 */
	0x0006571c, /* Controller 6, led 464, offset 22300 */
	0x00075720, /* Controller 7, led 464, offset 22304 */
	0x00085724, /* Controller 8, led 464, offset 22308 */
	0x00095728, /* Controller 9, led 464, offset 22312 */
	0x000a572c, /* Controller 10, led 464, offset 22316 */
	0x000b5730, /* Controller 11, led 464, offset 22320 */
	0x00005734, /* Controller 0, led 465, offset 22324 */
	0x00015738, /* Controller 1, led 465, offset 22328 */
	0x0002573c, /* Controller 2, led 465, offset 22332 */
	0x00035740, /* Controller 3, led 465, offset 22336 */
	0x00045744, /* Controller 4, led 465, offset 22340 */
	0x00055748, /* Controller 5, led 465, offset 22344 */
	0x0006574c, /* Controller 6, led 465, offset 22348 */
	0x00075750, /* Controller 7, led 465, offset 22352 */
	0x00085754, /* Controller 8, led 465, offset 22356 */
	0x00095758, /* Controller 9, led 465, offset 22360 */
	0x000a575c, /* Controller 10, led 465, offset 22364 */
	0x000b5760, /* Controller 11, led 465, offset 22368 */
	0x00005764, /* Controller 0, led 466, offset 22372 */
	0x00015768, /* Controller 1, led 466, offset 22376 */
	0x0002576c, /* Controller 2, led 466, offset 22380 */
	0x00035770, /* Controller 3, led 466, offset 22384 */
	0x00045774, /* Controller 4, led 466, offset 22388 */
	0x00055778, /* Controller 5, led 466, offset 22392 */
	0x0006577c, /* Controller 6, led 466, offset 22396 */
	0x00075780, /* Controller 7, led 466, offset 22400 */
	0x00085784, /* Controller 8, led 466, offset 22404 */
	0x00095788, /* Controller 9, led 466, offset 22408 */
	0x000a578c, /* Controller 10, led 466, offset 22412 */
	0x000b5790, /* Controller 11, led 466, offset 22416 */
	0x00005794, /* Controller 0, led 467, offset 22420 */
	0x00015798, /* Controller 1, led 467, offset 22424 */
	0x0002579c, /* Controller 2, led 467, offset 22428 */
	0x000357a0, /* Controller 3, led 467, offset 22432 */
	0x000457a4, /* Controller 4, led 467, offset 22436 */
	0x000557a8, /* Controller 5, led 467, offset 22440 */
	0x000657ac, /* Controller 6, led 467, offset 22444 */
	0x000757b0, /* Controller 7, led 467, offset 22448 */
	0x000857b4, /* Controller 8, led 467, offset 22452 */
	0x000957b8, /* Controller 9, led 467, offset 22456 */
	0x000a57bc, /* Controller 10, led 467, offset 22460 */
	0x000b57c0, /* Controller 11, led 467, offset 22464 */
	0x000057c4, /* Controller 0, led 468, offset 22468 */
	0x000157c8, /* Controller 1, led 468, offset 22472 */
	0x000257cc, /* Controller 2, led 468, offset 22476 */
	0x000357d0, /* Controller 3, led 468, offset 22480 */
	0x000457d4, /* Controller 4, led 468, offset 22484 */
	0x000557d8, /* Controller 5, led 468, offset 22488 */
	0x000657dc, /* Controller 6, led 468, offset 22492 */
	0x000757e0, /* Controller 7, led 468, offset 22496 */
	0x000857e4, /* Controller 8, led 468, offset 22500 */
	0x000957e8, /* Controller 9, led 468, offset 22504 */
	0x000a57ec, /* Controller 10, led 468, offset 22508 */
	0x000b57f0, /* Controller 11, led 468, offset 22512 */
	0x000057f4, /* Controller 0, led 469, offset 22516 */
	0x000157f8, /* Controller 1, led 469, offset 22520 */
	0x000257fc, /* Controller 2, led 469, offset 22524 */
	0x00035800, /* Controller 3, led 469, offset 22528 */
	0x00045804, /* Controller 4, led 469, offset 22532 */
	0x00055808, /* Controller 5, led 469, offset 22536 */
	0x0006580c, /* Controller 6, led 469, offset 22540 */
	0x00075810, /* Controller 7, led 469, offset 22544 */
	0x00085814, /* Controller 8, led 469, offset 22548 */
	0x00095818, /* Controller 9, led 469, offset 22552 */
	0x000a581c, /* Controller 10, led 469, offset 22556 */
	0x000b5820, /* Controller 11, led 469, offset 22560 */
	0x00005824, /* Controller 0, led 470, offset 22564 */
	0x00015828, /* Controller 1, led 470, offset 22568 */
	0x0002582c, /* Controller 2, led 470, offset 22572 */
	0x00035830, /* Controller 3, led 470, offset 22576 */
	0x00045834, /* Controller 4, led 470, offset 22580 */
	0x00055838, /* Controller 5, led 470, offset 22584 */
	0x0006583c, /* Controller 6, led 470, offset 22588 */
	0x00075840, /* Controller 7, led 470, offset 22592 */
	0x00085844, /* Controller 8, led 470, offset 22596 */
	0x00095848, /* Controller 9, led 470, offset 22600 */
	0x000a584c, /* Controller 10, led 470, offset 22604 */
	0x000b5850, /* Controller 11, led 470, offset 22608 */
	0x00005854, /* Controller 0, led 471, offset 22612 */
	0x00015858, /* Controller 1, led 471, offset 22616 */
	0x0002585c, /* Controller 2, led 471, offset 22620 */
	0x00035860, /* Controller 3, led 471, offset 22624 */
	0x00045864, /* Controller 4, led 471, offset 22628 */
	0x00055868, /* Controller 5, led 471, offset 22632 */
	0x0006586c, /* Controller 6, led 471, offset 22636 */
	0x00075870, /* Controller 7, led 471, offset 22640 */
	0x00085874, /* Controller 8, led 471, offset 22644 */
	0x00095878, /* Controller 9, led 471, offset 22648 */
	0x000a587c, /* Controller 10, led 471, offset 22652 */
	0x000b5880, /* Controller 11, led 471, offset 22656 */
	0x00005884, /* Controller 0, led 472, offset 22660 */
	0x00015888, /* Controller 1, led 472, offset 22664 */
	0x0002588c, /* Controller 2, led 472, offset 22668 */
	0x00035890, /* Controller 3, led 472, offset 22672 */
	0x00045894, /* Controller 4, led 472, offset 22676 */
	0x00055898, /* Controller 5, led 472, offset 22680 */
	0x0006589c, /* Controller 6, led 472, offset 22684 */
	0x000758a0, /* Controller 7, led 472, offset 22688 */
	0x000858a4, /* Controller 8, led 472, offset 22692 */
	0x000958a8, /* Controller 9, led 472, offset 22696 */
	0x000a58ac, /* Controller 10, led 472, offset 22700 */
	0x000b58b0, /* Controller 11, led 472, offset 22704 */
	0x000058b4, /* Controller 0, led 473, offset 22708 */
	0x000158b8, /* Controller 1, led 473, offset 22712 */
	0x000258bc, /* Controller 2, led 473, offset 22716 */
	0x000358c0, /* Controller 3, led 473, offset 22720 */
	0x000458c4, /* Controller 4, led 473, offset 22724 */
	0x000558c8, /* Controller 5, led 473, offset 22728 */
	0x000658cc, /* Controller 6, led 473, offset 22732 */
	0x000758d0, /* Controller 7, led 473, offset 22736 */
	0x000858d4, /* Controller 8, led 473, offset 22740 */
	0x000958d8, /* Controller 9, led 473, offset 22744 */
	0x000a58dc, /* Controller 10, led 473, offset 22748 */
	0x000b58e0, /* Controller 11, led 473, offset 22752 */
	0x000058e4, /* Controller 0, led 474, offset 22756 */
	0x000158e8, /* Controller 1, led 474, offset 22760 */
	0x000258ec, /* Controller 2, led 474, offset 22764 */
	0x000358f0, /* Controller 3, led 474, offset 22768 */
	0x000458f4, /* Controller 4, led 474, offset 22772 */
	0x000558f8, /* Controller 5, led 474, offset 22776 */
	0x000658fc, /* Controller 6, led 474, offset 22780 */
	0x00075900, /* Controller 7, led 474, offset 22784 */
	0x00085904, /* Controller 8, led 474, offset 22788 */
	0x00095908, /* Controller 9, led 474, offset 22792 */
	0x000a590c, /* Controller 10, led 474, offset 22796 */
	0x000b5910, /* Controller 11, led 474, offset 22800 */
	0x00005914, /* Controller 0, led 475, offset 22804 */
	0x00015918, /* Controller 1, led 475, offset 22808 */
	0x0002591c, /* Controller 2, led 475, offset 22812 */
	0x00035920, /* Controller 3, led 475, offset 22816 */
	0x00045924, /* Controller 4, led 475, offset 22820 */
	0x00055928, /* Controller 5, led 475, offset 22824 */
	0x0006592c, /* Controller 6, led 475, offset 22828 */
	0x00075930, /* Controller 7, led 475, offset 22832 */
	0x00085934, /* Controller 8, led 475, offset 22836 */
	0x00095938, /* Controller 9, led 475, offset 22840 */
	0x000a593c, /* Controller 10, led 475, offset 22844 */
	0x000b5940, /* Controller 11, led 475, offset 22848 */
	0x00005944, /* Controller 0, led 476, offset 22852 */
	0x00015948, /* Controller 1, led 476, offset 22856 */
	0x0002594c, /* Controller 2, led 476, offset 22860 */
	0x00035950, /* Controller 3, led 476, offset 22864 */
	0x00045954, /* Controller 4, led 476, offset 22868 */
	0x00055958, /* Controller 5, led 476, offset 22872 */
	0x0006595c, /* Controller 6, led 476, offset 22876 */
	0x00075960, /* Controller 7, led 476, offset 22880 */
	0x00085964, /* Controller 8, led 476, offset 22884 */
	0x00095968, /* Controller 9, led 476, offset 22888 */
	0x000a596c, /* Controller 10, led 476, offset 22892 */
	0x000b5970, /* Controller 11, led 476, offset 22896 */
	0x00005974, /* Controller 0, led 477, offset 22900 */
	0x00015978, /* Controller 1, led 477, offset 22904 */
	0x0002597c, /* Controller 2, led 477, offset 22908 */
	0x00035980, /* Controller 3, led 477, offset 22912 */
	0x00045984, /* Controller 4, led 477, offset 22916 */
	0x00055988, /* Controller 5, led 477, offset 22920 */
	0x0006598c, /* Controller 6, led 477, offset 22924 */
	0x00075990, /* Controller 7, led 477, offset 22928 */
	0x00085994, /* Controller 8, led 477, offset 22932 */
	0x00095998, /* Controller 9, led 477, offset 22936 */
	0x000a599c, /* Controller 10, led 477, offset 22940 */
	0x000b59a0, /* Controller 11, led 477, offset 22944 */
	0x000059a4, /* Controller 0, led 478, offset 22948 */
	0x000159a8, /* Controller 1, led 478, offset 22952 */
	0x000259ac, /* Controller 2, led 478, offset 22956 */
	0x000359b0, /* Controller 3, led 478, offset 22960 */
	0x000459b4, /* Controller 4, led 478, offset 22964 */
	0x000559b8, /* Controller 5, led 478, offset 22968 */
	0x000659bc, /* Controller 6, led 478, offset 22972 */
	0x000759c0, /* Controller 7, led 478, offset 22976 */
	0x000859c4, /* Controller 8, led 478, offset 22980 */
	0x000959c8, /* Controller 9, led 478, offset 22984 */
	0x000a59cc, /* Controller 10, led 478, offset 22988 */
	0x000b59d0, /* Controller 11, led 478, offset 22992 */
	0x000059d4, /* Controller 0, led 479, offset 22996 */
	0x000159d8, /* Controller 1, led 479, offset 23000 */
	0x000259dc, /* Controller 2, led 479, offset 23004 */
	0x000359e0, /* Controller 3, led 479, offset 23008 */
	0x000459e4, /* Controller 4, led 479, offset 23012 */
	0x000559e8, /* Controller 5, led 479, offset 23016 */
	0x000659ec, /* Controller 6, led 479, offset 23020 */
	0x000759f0, /* Controller 7, led 479, offset 23024 */
	0x000859f4, /* Controller 8, led 479, offset 23028 */
	0x000959f8, /* Controller 9, led 479, offset 23032 */
	0x000a59fc, /* Controller 10, led 479, offset 23036 */
	0x000b5a00, /* Controller 11, led 479, offset 23040 */
	0x00005a04, /* Controller 0, led 480, offset 23044 */
	0x00015a08, /* Controller 1, led 480, offset 23048 */
	0x00025a0c, /* Controller 2, led 480, offset 23052 */
	0x00035a10, /* Controller 3, led 480, offset 23056 */
	0x00045a14, /* Controller 4, led 480, offset 23060 */
	0x00055a18, /* Controller 5, led 480, offset 23064 */
	0x00065a1c, /* Controller 6, led 480, offset 23068 */
	0x00075a20, /* Controller 7, led 480, offset 23072 */
	0x00085a24, /* Controller 8, led 480, offset 23076 */
	0x00095a28, /* Controller 9, led 480, offset 23080 */
	0x000a5a2c, /* Controller 10, led 480, offset 23084 */
	0x000b5a30, /* Controller 11, led 480, offset 23088 */
	0x00005a34, /* Controller 0, led 481, offset 23092 */
	0x00015a38, /* Controller 1, led 481, offset 23096 */
	0x00025a3c, /* Controller 2, led 481, offset 23100 */
	0x00035a40, /* Controller 3, led 481, offset 23104 */
	0x00045a44, /* Controller 4, led 481, offset 23108 */
	0x00055a48, /* Controller 5, led 481, offset 23112 */
	0x00065a4c, /* Controller 6, led 481, offset 23116 */
	0x00075a50, /* Controller 7, led 481, offset 23120 */
	0x00085a54, /* Controller 8, led 481, offset 23124 */
	0x00095a58, /* Controller 9, led 481, offset 23128 */
	0x000a5a5c, /* Controller 10, led 481, offset 23132 */
	0x000b5a60, /* Controller 11, led 481, offset 23136 */
	0x00005a64, /* Controller 0, led 482, offset 23140 */
	0x00015a68, /* Controller 1, led 482, offset 23144 */
	0x00025a6c, /* Controller 2, led 482, offset 23148 */
	0x00035a70, /* Controller 3, led 482, offset 23152 */
	0x00045a74, /* Controller 4, led 482, offset 23156 */
	0x00055a78, /* Controller 5, led 482, offset 23160 */
	0x00065a7c, /* Controller 6, led 482, offset 23164 */
	0x00075a80, /* Controller 7, led 482, offset 23168 */
	0x00085a84, /* Controller 8, led 482, offset 23172 */
	0x00095a88, /* Controller 9, led 482, offset 23176 */
	0x000a5a8c, /* Controller 10, led 482, offset 23180 */
	0x000b5a90, /* Controller 11, led 482, offset 23184 */
	0x00005a94, /* Controller 0, led 483, offset 23188 */
	0x00015a98, /* Controller 1, led 483, offset 23192 */
	0x00025a9c, /* Controller 2, led 483, offset 23196 */
	0x00035aa0, /* Controller 3, led 483, offset 23200 */
	0x00045aa4, /* Controller 4, led 483, offset 23204 */
	0x00055aa8, /* Controller 5, led 483, offset 23208 */
	0x00065aac, /* Controller 6, led 483, offset 23212 */
	0x00075ab0, /* Controller 7, led 483, offset 23216 */
	0x00085ab4, /* Controller 8, led 483, offset 23220 */
	0x00095ab8, /* Controller 9, led 483, offset 23224 */
	0x000a5abc, /* Controller 10, led 483, offset 23228 */
	0x000b5ac0, /* Controller 11, led 483, offset 23232 */
	0x00005ac4, /* Controller 0, led 484, offset 23236 */
	0x00015ac8, /* Controller 1, led 484, offset 23240 */
	0x00025acc, /* Controller 2, led 484, offset 23244 */
	0x00035ad0, /* Controller 3, led 484, offset 23248 */
	0x00045ad4, /* Controller 4, led 484, offset 23252 */
	0x00055ad8, /* Controller 5, led 484, offset 23256 */
	0x00065adc, /* Controller 6, led 484, offset 23260 */
	0x00075ae0, /* Controller 7, led 484, offset 23264 */
	0x00085ae4, /* Controller 8, led 484, offset 23268 */
	0x00095ae8, /* Controller 9, led 484, offset 23272 */
	0x000a5aec, /* Controller 10, led 484, offset 23276 */
	0x000b5af0, /* Controller 11, led 484, offset 23280 */
	0x00005af4, /* Controller 0, led 485, offset 23284 */
	0x00015af8, /* Controller 1, led 485, offset 23288 */
	0x00025afc, /* Controller 2, led 485, offset 23292 */
	0x00035b00, /* Controller 3, led 485, offset 23296 */
	0x00045b04, /* Controller 4, led 485, offset 23300 */
	0x00055b08, /* Controller 5, led 485, offset 23304 */
	0x00065b0c, /* Controller 6, led 485, offset 23308 */
	0x00075b10, /* Controller 7, led 485, offset 23312 */
	0x00085b14, /* Controller 8, led 485, offset 23316 */
	0x00095b18, /* Controller 9, led 485, offset 23320 */
	0x000a5b1c, /* Controller 10, led 485, offset 23324 */
	0x000b5b20, /* Controller 11, led 485, offset 23328 */
	0x00005b24, /* Controller 0, led 486, offset 23332 */
	0x00015b28, /* Controller 1, led 486, offset 23336 */
	0x00025b2c, /* Controller 2, led 486, offset 23340 */
	0x00035b30, /* Controller 3, led 486, offset 23344 */
	0x00045b34, /* Controller 4, led 486, offset 23348 */
	0x00055b38, /* Controller 5, led 486, offset 23352 */
	0x00065b3c, /* Controller 6, led 486, offset 23356 */
	0x00075b40, /* Controller 7, led 486, offset 23360 */
	0x00085b44, /* Controller 8, led 486, offset 23364 */
	0x00095b48, /* Controller 9, led 486, offset 23368 */
	0x000a5b4c, /* Controller 10, led 486, offset 23372 */
	0x000b5b50, /* Controller 11, led 486, offset 23376 */
	0x00005b54, /* Controller 0, led 487, offset 23380 */
	0x00015b58, /* Controller 1, led 487, offset 23384 */
	0x00025b5c, /* Controller 2, led 487, offset 23388 */
	0x00035b60, /* Controller 3, led 487, offset 23392 */
	0x00045b64, /* Controller 4, led 487, offset 23396 */
	0x00055b68, /* Controller 5, led 487, offset 23400 */
	0x00065b6c, /* Controller 6, led 487, offset 23404 */
	0x00075b70, /* Controller 7, led 487, offset 23408 */
	0x00085b74, /* Controller 8, led 487, offset 23412 */
	0x00095b78, /* Controller 9, led 487, offset 23416 */
	0x000a5b7c, /* Controller 10, led 487, offset 23420 */
	0x000b5b80, /* Controller 11, led 487, offset 23424 */
	0x00005b84, /* Controller 0, led 488, offset 23428 */
	0x00015b88, /* Controller 1, led 488, offset 23432 */
	0x00025b8c, /* Controller 2, led 488, offset 23436 */
	0x00035b90, /* Controller 3, led 488, offset 23440 */
	0x00045b94, /* Controller 4, led 488, offset 23444 */
	0x00055b98, /* Controller 5, led 488, offset 23448 */
	0x00065b9c, /* Controller 6, led 488, offset 23452 */
	0x00075ba0, /* Controller 7, led 488, offset 23456 */
	0x00085ba4, /* Controller 8, led 488, offset 23460 */
	0x00095ba8, /* Controller 9, led 488, offset 23464 */
	0x000a5bac, /* Controller 10, led 488, offset 23468 */
	0x000b5bb0, /* Controller 11, led 488, offset 23472 */
	0x00005bb4, /* Controller 0, led 489, offset 23476 */
	0x00015bb8, /* Controller 1, led 489, offset 23480 */
	0x00025bbc, /* Controller 2, led 489, offset 23484 */
	0x00035bc0, /* Controller 3, led 489, offset 23488 */
	0x00045bc4, /* Controller 4, led 489, offset 23492 */
	0x00055bc8, /* Controller 5, led 489, offset 23496 */
	0x00065bcc, /* Controller 6, led 489, offset 23500 */
	0x00075bd0, /* Controller 7, led 489, offset 23504 */
	0x00085bd4, /* Controller 8, led 489, offset 23508 */
	0x00095bd8, /* Controller 9, led 489, offset 23512 */
	0x000a5bdc, /* Controller 10, led 489, offset 23516 */
	0x000b5be0, /* Controller 11, led 489, offset 23520 */
	0x00005be4, /* Controller 0, led 490, offset 23524 */
	0x00015be8, /* Controller 1, led 490, offset 23528 */
	0x00025bec, /* Controller 2, led 490, offset 23532 */
	0x00035bf0, /* Controller 3, led 490, offset 23536 */
	0x00045bf4, /* Controller 4, led 490, offset 23540 */
	0x00055bf8, /* Controller 5, led 490, offset 23544 */
	0x00065bfc, /* Controller 6, led 490, offset 23548 */
	0x00075c00, /* Controller 7, led 490, offset 23552 */
	0x00085c04, /* Controller 8, led 490, offset 23556 */
	0x00095c08, /* Controller 9, led 490, offset 23560 */
	0x000a5c0c, /* Controller 10, led 490, offset 23564 */
	0x000b5c10, /* Controller 11, led 490, offset 23568 */
	0x00005c14, /* Controller 0, led 491, offset 23572 */
	0x00015c18, /* Controller 1, led 491, offset 23576 */
	0x00025c1c, /* Controller 2, led 491, offset 23580 */
	0x00035c20, /* Controller 3, led 491, offset 23584 */
	0x00045c24, /* Controller 4, led 491, offset 23588 */
	0x00055c28, /* Controller 5, led 491, offset 23592 */
	0x00065c2c, /* Controller 6, led 491, offset 23596 */
	0x00075c30, /* Controller 7, led 491, offset 23600 */
	0x00085c34, /* Controller 8, led 491, offset 23604 */
	0x00095c38, /* Controller 9, led 491, offset 23608 */
	0x000a5c3c, /* Controller 10, led 491, offset 23612 */
	0x000b5c40, /* Controller 11, led 491, offset 23616 */
	0x00005c44, /* Controller 0, led 492, offset 23620 */
	0x00015c48, /* Controller 1, led 492, offset 23624 */
	0x00025c4c, /* Controller 2, led 492, offset 23628 */
	0x00035c50, /* Controller 3, led 492, offset 23632 */
	0x00045c54, /* Controller 4, led 492, offset 23636 */
	0x00055c58, /* Controller 5, led 492, offset 23640 */
	0x00065c5c, /* Controller 6, led 492, offset 23644 */
	0x00075c60, /* Controller 7, led 492, offset 23648 */
	0x00085c64, /* Controller 8, led 492, offset 23652 */
	0x00095c68, /* Controller 9, led 492, offset 23656 */
	0x000a5c6c, /* Controller 10, led 492, offset 23660 */
	0x000b5c70, /* Controller 11, led 492, offset 23664 */
	0x00005c74, /* Controller 0, led 493, offset 23668 */
	0x00015c78, /* Controller 1, led 493, offset 23672 */
	0x00025c7c, /* Controller 2, led 493, offset 23676 */
	0x00035c80, /* Controller 3, led 493, offset 23680 */
	0x00045c84, /* Controller 4, led 493, offset 23684 */
	0x00055c88, /* Controller 5, led 493, offset 23688 */
	0x00065c8c, /* Controller 6, led 493, offset 23692 */
	0x00075c90, /* Controller 7, led 493, offset 23696 */
	0x00085c94, /* Controller 8, led 493, offset 23700 */
	0x00095c98, /* Controller 9, led 493, offset 23704 */
	0x000a5c9c, /* Controller 10, led 493, offset 23708 */
	0x000b5ca0, /* Controller 11, led 493, offset 23712 */
	0x00005ca4, /* Controller 0, led 494, offset 23716 */
	0x00015ca8, /* Controller 1, led 494, offset 23720 */
	0x00025cac, /* Controller 2, led 494, offset 23724 */
	0x00035cb0, /* Controller 3, led 494, offset 23728 */
	0x00045cb4, /* Controller 4, led 494, offset 23732 */
	0x00055cb8, /* Controller 5, led 494, offset 23736 */
	0x00065cbc, /* Controller 6, led 494, offset 23740 */
	0x00075cc0, /* Controller 7, led 494, offset 23744 */
	0x00085cc4, /* Controller 8, led 494, offset 23748 */
	0x00095cc8, /* Controller 9, led 494, offset 23752 */
	0x000a5ccc, /* Controller 10, led 494, offset 23756 */
	0x000b5cd0, /* Controller 11, led 494, offset 23760 */
	0x00005cd4, /* Controller 0, led 495, offset 23764 */
	0x00015cd8, /* Controller 1, led 495, offset 23768 */
	0x00025cdc, /* Controller 2, led 495, offset 23772 */
	0x00035ce0, /* Controller 3, led 495, offset 23776 */
	0x00045ce4, /* Controller 4, led 495, offset 23780 */
	0x00055ce8, /* Controller 5, led 495, offset 23784 */
	0x00065cec, /* Controller 6, led 495, offset 23788 */
	0x00075cf0, /* Controller 7, led 495, offset 23792 */
	0x00085cf4, /* Controller 8, led 495, offset 23796 */
	0x00095cf8, /* Controller 9, led 495, offset 23800 */
	0x000a5cfc, /* Controller 10, led 495, offset 23804 */
	0x000b5d00, /* Controller 11, led 495, offset 23808 */
	0x00005d04, /* Controller 0, led 496, offset 23812 */
	0x00015d08, /* Controller 1, led 496, offset 23816 */
	0x00025d0c, /* Controller 2, led 496, offset 23820 */
	0x00035d10, /* Controller 3, led 496, offset 23824 */
	0x00045d14, /* Controller 4, led 496, offset 23828 */
	0x00055d18, /* Controller 5, led 496, offset 23832 */
	0x00065d1c, /* Controller 6, led 496, offset 23836 */
	0x00075d20, /* Controller 7, led 496, offset 23840 */
	0x00085d24, /* Controller 8, led 496, offset 23844 */
	0x00095d28, /* Controller 9, led 496, offset 23848 */
	0x000a5d2c, /* Controller 10, led 496, offset 23852 */
	0x000b5d30, /* Controller 11, led 496, offset 23856 */
	0x00005d34, /* Controller 0, led 497, offset 23860 */
	0x00015d38, /* Controller 1, led 497, offset 23864 */
	0x00025d3c, /* Controller 2, led 497, offset 23868 */
	0x00035d40, /* Controller 3, led 497, offset 23872 */
	0x00045d44, /* Controller 4, led 497, offset 23876 */
	0x00055d48, /* Controller 5, led 497, offset 23880 */
	0x00065d4c, /* Controller 6, led 497, offset 23884 */
	0x00075d50, /* Controller 7, led 497, offset 23888 */
	0x00085d54, /* Controller 8, led 497, offset 23892 */
	0x00095d58, /* Controller 9, led 497, offset 23896 */
	0x000a5d5c, /* Controller 10, led 497, offset 23900 */
	0x000b5d60, /* Controller 11, led 497, offset 23904 */
	0x00005d64, /* Controller 0, led 498, offset 23908 */
	0x00015d68, /* Controller 1, led 498, offset 23912 */
	0x00025d6c, /* Controller 2, led 498, offset 23916 */
	0x00035d70, /* Controller 3, led 498, offset 23920 */
	0x00045d74, /* Controller 4, led 498, offset 23924 */
	0x00055d78, /* Controller 5, led 498, offset 23928 */
	0x00065d7c, /* Controller 6, led 498, offset 23932 */
	0x00075d80, /* Controller 7, led 498, offset 23936 */
	0x00085d84, /* Controller 8, led 498, offset 23940 */
	0x00095d88, /* Controller 9, led 498, offset 23944 */
	0x000a5d8c, /* Controller 10, led 498, offset 23948 */
	0x000b5d90, /* Controller 11, led 498, offset 23952 */
	0x00005d94, /* Controller 0, led 499, offset 23956 */
	0x00015d98, /* Controller 1, led 499, offset 23960 */
	0x00025d9c, /* Controller 2, led 499, offset 23964 */
	0x00035da0, /* Controller 3, led 499, offset 23968 */
	0x00045da4, /* Controller 4, led 499, offset 23972 */
	0x00055da8, /* Controller 5, led 499, offset 23976 */
	0x00065dac, /* Controller 6, led 499, offset 23980 */
	0x00075db0, /* Controller 7, led 499, offset 23984 */
	0x00085db4, /* Controller 8, led 499, offset 23988 */
	0x00095db8, /* Controller 9, led 499, offset 23992 */
	0x000a5dbc, /* Controller 10, led 499, offset 23996 */
	0x000b5dc0, /* Controller 11, led 499, offset 24000 */
	0x00005dc4, /* Controller 0, led 500, offset 24004 */
	0x00015dc8, /* Controller 1, led 500, offset 24008 */
	0x00025dcc, /* Controller 2, led 500, offset 24012 */
	0x00035dd0, /* Controller 3, led 500, offset 24016 */
	0x00045dd4, /* Controller 4, led 500, offset 24020 */
	0x00055dd8, /* Controller 5, led 500, offset 24024 */
	0x00065ddc, /* Controller 6, led 500, offset 24028 */
	0x00075de0, /* Controller 7, led 500, offset 24032 */
	0x00085de4, /* Controller 8, led 500, offset 24036 */
	0x00095de8, /* Controller 9, led 500, offset 24040 */
	0x000a5dec, /* Controller 10, led 500, offset 24044 */
	0x000b5df0, /* Controller 11, led 500, offset 24048 */
	0x00005df4, /* Controller 0, led 501, offset 24052 */
	0x00015df8, /* Controller 1, led 501, offset 24056 */
	0x00025dfc, /* Controller 2, led 501, offset 24060 */
	0x00035e00, /* Controller 3, led 501, offset 24064 */
	0x00045e04, /* Controller 4, led 501, offset 24068 */
	0x00055e08, /* Controller 5, led 501, offset 24072 */
	0x00065e0c, /* Controller 6, led 501, offset 24076 */
	0x00075e10, /* Controller 7, led 501, offset 24080 */
	0x00085e14, /* Controller 8, led 501, offset 24084 */
	0x00095e18, /* Controller 9, led 501, offset 24088 */
	0x000a5e1c, /* Controller 10, led 501, offset 24092 */
	0x000b5e20, /* Controller 11, led 501, offset 24096 */
	0x00005e24, /* Controller 0, led 502, offset 24100 */
	0x00015e28, /* Controller 1, led 502, offset 24104 */
	0x00025e2c, /* Controller 2, led 502, offset 24108 */
	0x00035e30, /* Controller 3, led 502, offset 24112 */
	0x00045e34, /* Controller 4, led 502, offset 24116 */
	0x00055e38, /* Controller 5, led 502, offset 24120 */
	0x00065e3c, /* Controller 6, led 502, offset 24124 */
	0x00075e40, /* Controller 7, led 502, offset 24128 */
	0x00085e44, /* Controller 8, led 502, offset 24132 */
	0x00095e48, /* Controller 9, led 502, offset 24136 */
	0x000a5e4c, /* Controller 10, led 502, offset 24140 */
	0x000b5e50, /* Controller 11, led 502, offset 24144 */
	0x00005e54, /* Controller 0, led 503, offset 24148 */
	0x00015e58, /* Controller 1, led 503, offset 24152 */
	0x00025e5c, /* Controller 2, led 503, offset 24156 */
	0x00035e60, /* Controller 3, led 503, offset 24160 */
	0x00045e64, /* Controller 4, led 503, offset 24164 */
	0x00055e68, /* Controller 5, led 503, offset 24168 */
	0x00065e6c, /* Controller 6, led 503, offset 24172 */
	0x00075e70, /* Controller 7, led 503, offset 24176 */
	0x00085e74, /* Controller 8, led 503, offset 24180 */
	0x00095e78, /* Controller 9, led 503, offset 24184 */
	0x000a5e7c, /* Controller 10, led 503, offset 24188 */
	0x000b5e80, /* Controller 11, led 503, offset 24192 */
	0x00005e84, /* Controller 0, led 504, offset 24196 */
	0x00015e88, /* Controller 1, led 504, offset 24200 */
	0x00025e8c, /* Controller 2, led 504, offset 24204 */
	0x00035e90, /* Controller 3, led 504, offset 24208 */
	0x00045e94, /* Controller 4, led 504, offset 24212 */
	0x00055e98, /* Controller 5, led 504, offset 24216 */
	0x00065e9c, /* Controller 6, led 504, offset 24220 */
	0x00075ea0, /* Controller 7, led 504, offset 24224 */
	0x00085ea4, /* Controller 8, led 504, offset 24228 */
	0x00095ea8, /* Controller 9, led 504, offset 24232 */
	0x000a5eac, /* Controller 10, led 504, offset 24236 */
	0x000b5eb0, /* Controller 11, led 504, offset 24240 */
	0x00005eb4, /* Controller 0, led 505, offset 24244 */
	0x00015eb8, /* Controller 1, led 505, offset 24248 */
	0x00025ebc, /* Controller 2, led 505, offset 24252 */
	0x00035ec0, /* Controller 3, led 505, offset 24256 */
	0x00045ec4, /* Controller 4, led 505, offset 24260 */
	0x00055ec8, /* Controller 5, led 505, offset 24264 */
	0x00065ecc, /* Controller 6, led 505, offset 24268 */
	0x00075ed0, /* Controller 7, led 505, offset 24272 */
	0x00085ed4, /* Controller 8, led 505, offset 24276 */
	0x00095ed8, /* Controller 9, led 505, offset 24280 */
	0x000a5edc, /* Controller 10, led 505, offset 24284 */
	0x000b5ee0, /* Controller 11, led 505, offset 24288 */
	0x00005ee4, /* Controller 0, led 506, offset 24292 */
	0x00015ee8, /* Controller 1, led 506, offset 24296 */
	0x00025eec, /* Controller 2, led 506, offset 24300 */
	0x00035ef0, /* Controller 3, led 506, offset 24304 */
	0x00045ef4, /* Controller 4, led 506, offset 24308 */
	0x00055ef8, /* Controller 5, led 506, offset 24312 */
	0x00065efc, /* Controller 6, led 506, offset 24316 */
	0x00075f00, /* Controller 7, led 506, offset 24320 */
	0x00085f04, /* Controller 8, led 506, offset 24324 */
	0x00095f08, /* Controller 9, led 506, offset 24328 */
	0x000a5f0c, /* Controller 10, led 506, offset 24332 */
	0x000b5f10, /* Controller 11, led 506, offset 24336 */
	0x00005f14, /* Controller 0, led 507, offset 24340 */
	0x00015f18, /* Controller 1, led 507, offset 24344 */
	0x00025f1c, /* Controller 2, led 507, offset 24348 */
	0x00035f20, /* Controller 3, led 507, offset 24352 */
	0x00045f24, /* Controller 4, led 507, offset 24356 */
	0x00055f28, /* Controller 5, led 507, offset 24360 */
	0x00065f2c, /* Controller 6, led 507, offset 24364 */
	0x00075f30, /* Controller 7, led 507, offset 24368 */
	0x00085f34, /* Controller 8, led 507, offset 24372 */
	0x00095f38, /* Controller 9, led 507, offset 24376 */
	0x000a5f3c, /* Controller 10, led 507, offset 24380 */
	0x000b5f40, /* Controller 11, led 507, offset 24384 */
	0x00005f44, /* Controller 0, led 508, offset 24388 */
	0x00015f48, /* Controller 1, led 508, offset 24392 */
	0x00025f4c, /* Controller 2, led 508, offset 24396 */
	0x00035f50, /* Controller 3, led 508, offset 24400 */
	0x00045f54, /* Controller 4, led 508, offset 24404 */
	0x00055f58, /* Controller 5, led 508, offset 24408 */
	0x00065f5c, /* Controller 6, led 508, offset 24412 */
	0x00075f60, /* Controller 7, led 508, offset 24416 */
	0x00085f64, /* Controller 8, led 508, offset 24420 */
	0x00095f68, /* Controller 9, led 508, offset 24424 */
	0x000a5f6c, /* Controller 10, led 508, offset 24428 */
	0x000b5f70, /* Controller 11, led 508, offset 24432 */
	0x00005f74, /* Controller 0, led 509, offset 24436 */
	0x00015f78, /* Controller 1, led 509, offset 24440 */
	0x00025f7c, /* Controller 2, led 509, offset 24444 */
	0x00035f80, /* Controller 3, led 509, offset 24448 */
	0x00045f84, /* Controller 4, led 509, offset 24452 */
	0x00055f88, /* Controller 5, led 509, offset 24456 */
	0x00065f8c, /* Controller 6, led 509, offset 24460 */
	0x00075f90, /* Controller 7, led 509, offset 24464 */
	0x00085f94, /* Controller 8, led 509, offset 24468 */
	0x00095f98, /* Controller 9, led 509, offset 24472 */
	0x000a5f9c, /* Controller 10, led 509, offset 24476 */
	0x000b5fa0, /* Controller 11, led 509, offset 24480 */
	0x00005fa4, /* Controller 0, led 510, offset 24484 */
	0x00015fa8, /* Controller 1, led 510, offset 24488 */
	0x00025fac, /* Controller 2, led 510, offset 24492 */
	0x00035fb0, /* Controller 3, led 510, offset 24496 */
	0x00045fb4, /* Controller 4, led 510, offset 24500 */
	0x00055fb8, /* Controller 5, led 510, offset 24504 */
	0x00065fbc, /* Controller 6, led 510, offset 24508 */
	0x00075fc0, /* Controller 7, led 510, offset 24512 */
	0x00085fc4, /* Controller 8, led 510, offset 24516 */
	0x00095fc8, /* Controller 9, led 510, offset 24520 */
	0x000a5fcc, /* Controller 10, led 510, offset 24524 */
	0x000b5fd0, /* Controller 11, led 510, offset 24528 */
	0x00005fd4, /* Controller 0, led 511, offset 24532 */
	0x00015fd8, /* Controller 1, led 511, offset 24536 */
	0x00025fdc, /* Controller 2, led 511, offset 24540 */
	0x00035fe0, /* Controller 3, led 511, offset 24544 */
	0x00045fe4, /* Controller 4, led 511, offset 24548 */
	0x00055fe8, /* Controller 5, led 511, offset 24552 */
	0x00065fec, /* Controller 6, led 511, offset 24556 */
	0x00075ff0, /* Controller 7, led 511, offset 24560 */
	0x00085ff4, /* Controller 8, led 511, offset 24564 */
	0x00095ff8, /* Controller 9, led 511, offset 24568 */
	0x000a5ffc, /* Controller 10, led 511, offset 24572 */
	0x000b6000, /* Controller 11, led 511, offset 24576 */
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
	0x00000044, /* Controller 0, offset 68 (direct) */ 
	0x00000048, /* Controller 0, offset 72 (direct) */ 
	0x0000004c, /* Controller 0, offset 76 (direct) */ 
	0x00000050, /* Controller 0, offset 80 (direct) */ 
	0x00000054, /* Controller 0, offset 84 (direct) */ 
	0x00000058, /* Controller 0, offset 88 (direct) */ 
	0x0000005c, /* Controller 0, offset 92 (direct) */ 
	0x00000060, /* Controller 0, offset 96 (direct) */ 
	0x00000064, /* Controller 0, offset 100 (direct) */ 
	0x00000068, /* Controller 0, offset 104 (direct) */ 
	0x0000006c, /* Controller 0, offset 108 (direct) */ 
	0x00000070, /* Controller 0, offset 112 (direct) */ 
	0x00000074, /* Controller 0, offset 116 (direct) */ 
	0x00000078, /* Controller 0, offset 120 (direct) */ 
	0x0000007c, /* Controller 0, offset 124 (direct) */ 
	0x00000080, /* Controller 0, offset 128 (direct) */ 
	0x00000084, /* Controller 0, offset 132 (direct) */ 
	0x00000088, /* Controller 0, offset 136 (direct) */ 
	0x0000008c, /* Controller 0, offset 140 (direct) */ 
	0x00000090, /* Controller 0, offset 144 (direct) */ 
	0x00000094, /* Controller 0, offset 148 (direct) */ 
	0x00000098, /* Controller 0, offset 152 (direct) */ 
	0x0000009c, /* Controller 0, offset 156 (direct) */ 
	0x000000a0, /* Controller 0, offset 160 (direct) */ 
	0x000000a4, /* Controller 0, offset 164 (direct) */ 
	0x000000a8, /* Controller 0, offset 168 (direct) */ 
	0x000000ac, /* Controller 0, offset 172 (direct) */ 
	0x000000b0, /* Controller 0, offset 176 (direct) */ 
	0x000000b4, /* Controller 0, offset 180 (direct) */ 
	0x000000b8, /* Controller 0, offset 184 (direct) */ 
	0x000000bc, /* Controller 0, offset 188 (direct) */ 
	0x000000c0, /* Controller 0, offset 192 (direct) */ 
	0x000000c4, /* Controller 0, offset 196 (direct) */ 
	0x000000c8, /* Controller 0, offset 200 (direct) */ 
	0x000000cc, /* Controller 0, offset 204 (direct) */ 
	0x000000d0, /* Controller 0, offset 208 (direct) */ 
	0x000000d4, /* Controller 0, offset 212 (direct) */ 
	0x000000d8, /* Controller 0, offset 216 (direct) */ 
	0x000000dc, /* Controller 0, offset 220 (direct) */ 
	0x000000e0, /* Controller 0, offset 224 (direct) */ 
	0x000000e4, /* Controller 0, offset 228 (direct) */ 
	0x000000e8, /* Controller 0, offset 232 (direct) */ 
	0x000000ec, /* Controller 0, offset 236 (direct) */ 
	0x000000f0, /* Controller 0, offset 240 (direct) */ 
	0x000000f4, /* Controller 0, offset 244 (direct) */ 
	0x000000f8, /* Controller 0, offset 248 (direct) */ 
	0x000000fc, /* Controller 0, offset 252 (direct) */ 
	0x00000100, /* Controller 0, offset 256 (direct) */ 
	0x00000104, /* Controller 0, offset 260 (direct) */ 
	0x00000108, /* Controller 0, offset 264 (direct) */ 
	0x0000010c, /* Controller 0, offset 268 (direct) */ 
	0x00000110, /* Controller 0, offset 272 (direct) */ 
	0x00000114, /* Controller 0, offset 276 (direct) */ 
	0x00000118, /* Controller 0, offset 280 (direct) */ 
	0x0000011c, /* Controller 0, offset 284 (direct) */ 
	0x00000120, /* Controller 0, offset 288 (direct) */ 
	0x00000124, /* Controller 0, offset 292 (direct) */ 
	0x00000128, /* Controller 0, offset 296 (direct) */ 
	0x0000012c, /* Controller 0, offset 300 (direct) */ 
	0x00000130, /* Controller 0, offset 304 (direct) */ 
	0x00000134, /* Controller 0, offset 308 (direct) */ 
	0x00000138, /* Controller 0, offset 312 (direct) */ 
	0x0000013c, /* Controller 0, offset 316 (direct) */ 
	0x00000140, /* Controller 0, offset 320 (direct) */ 
	0x00000144, /* Controller 0, offset 324 (direct) */ 
	0x00000148, /* Controller 0, offset 328 (direct) */ 
	0x0000014c, /* Controller 0, offset 332 (direct) */ 
	0x00000150, /* Controller 0, offset 336 (direct) */ 
	0x00000154, /* Controller 0, offset 340 (direct) */ 
	0x00000158, /* Controller 0, offset 344 (direct) */ 
	0x0000015c, /* Controller 0, offset 348 (direct) */ 
	0x00000160, /* Controller 0, offset 352 (direct) */ 
	0x00000164, /* Controller 0, offset 356 (direct) */ 
	0x00000168, /* Controller 0, offset 360 (direct) */ 
	0x0000016c, /* Controller 0, offset 364 (direct) */ 
	0x00000170, /* Controller 0, offset 368 (direct) */ 
	0x00000174, /* Controller 0, offset 372 (direct) */ 
	0x00000178, /* Controller 0, offset 376 (direct) */ 
	0x0000017c, /* Controller 0, offset 380 (direct) */ 
	0x00000180, /* Controller 0, offset 384 (direct) */ 
	0x00000184, /* Controller 0, offset 388 (direct) */ 
	0x00000188, /* Controller 0, offset 392 (direct) */ 
	0x0000018c, /* Controller 0, offset 396 (direct) */ 
	0x00000190, /* Controller 0, offset 400 (direct) */ 
	0x00000194, /* Controller 0, offset 404 (direct) */ 
	0x00000198, /* Controller 0, offset 408 (direct) */ 
	0x0000019c, /* Controller 0, offset 412 (direct) */ 
	0x000001a0, /* Controller 0, offset 416 (direct) */ 
	0x000001a4, /* Controller 0, offset 420 (direct) */ 
	0x000001a8, /* Controller 0, offset 424 (direct) */ 
	0x000001ac, /* Controller 0, offset 428 (direct) */ 
	0x000001b0, /* Controller 0, offset 432 (direct) */ 
	0x000001b4, /* Controller 0, offset 436 (direct) */ 
	0x000001b8, /* Controller 0, offset 440 (direct) */ 
	0x000001bc, /* Controller 0, offset 444 (direct) */ 
	0x000001c0, /* Controller 0, offset 448 (direct) */ 
	0x000001c4, /* Controller 0, offset 452 (direct) */ 
	0x000001c8, /* Controller 0, offset 456 (direct) */ 
	0x000001cc, /* Controller 0, offset 460 (direct) */ 
	0x000001d0, /* Controller 0, offset 464 (direct) */ 
	0x000001d4, /* Controller 0, offset 468 (direct) */ 
	0x000001d8, /* Controller 0, offset 472 (direct) */ 
	0x000001dc, /* Controller 0, offset 476 (direct) */ 
	0x000001e0, /* Controller 0, offset 480 (direct) */ 
	0x000001e4, /* Controller 0, offset 484 (direct) */ 
	0x000001e8, /* Controller 0, offset 488 (direct) */ 
	0x000001ec, /* Controller 0, offset 492 (direct) */ 
	0x000001f0, /* Controller 0, offset 496 (direct) */ 
	0x000001f4, /* Controller 0, offset 500 (direct) */ 
	0x000001f8, /* Controller 0, offset 504 (direct) */ 
	0x000001fc, /* Controller 0, offset 508 (direct) */ 
	0x00000200, /* Controller 0, offset 512 (direct) */ 
	0x00000204, /* Controller 0, offset 516 (direct) */ 
	0x00000208, /* Controller 0, offset 520 (direct) */ 
	0x0000020c, /* Controller 0, offset 524 (direct) */ 
	0x00000210, /* Controller 0, offset 528 (direct) */ 
	0x00000214, /* Controller 0, offset 532 (direct) */ 
	0x00000218, /* Controller 0, offset 536 (direct) */ 
	0x0000021c, /* Controller 0, offset 540 (direct) */ 
	0x00000220, /* Controller 0, offset 544 (direct) */ 
	0x00000224, /* Controller 0, offset 548 (direct) */ 
	0x00000228, /* Controller 0, offset 552 (direct) */ 
	0x0000022c, /* Controller 0, offset 556 (direct) */ 
	0x00000230, /* Controller 0, offset 560 (direct) */ 
	0x00000234, /* Controller 0, offset 564 (direct) */ 
	0x00000238, /* Controller 0, offset 568 (direct) */ 
	0x0000023c, /* Controller 0, offset 572 (direct) */ 
	0x00000240, /* Controller 0, offset 576 (direct) */ 
	0x00000244, /* Controller 0, offset 580 (direct) */ 
	0x00000248, /* Controller 0, offset 584 (direct) */ 
	0x0000024c, /* Controller 0, offset 588 (direct) */ 
	0x00000250, /* Controller 0, offset 592 (direct) */ 
	0x00000254, /* Controller 0, offset 596 (direct) */ 
	0x00000258, /* Controller 0, offset 600 (direct) */ 
	0x0000025c, /* Controller 0, offset 604 (direct) */ 
	0x00000260, /* Controller 0, offset 608 (direct) */ 
	0x00000264, /* Controller 0, offset 612 (direct) */ 
	0x00000268, /* Controller 0, offset 616 (direct) */ 
	0x0000026c, /* Controller 0, offset 620 (direct) */ 
	0x00000270, /* Controller 0, offset 624 (direct) */ 
	0x00000274, /* Controller 0, offset 628 (direct) */ 
	0x00000278, /* Controller 0, offset 632 (direct) */ 
	0x0000027c, /* Controller 0, offset 636 (direct) */ 
	0x00000280, /* Controller 0, offset 640 (direct) */ 
	0x00000284, /* Controller 0, offset 644 (direct) */ 
	0x00000288, /* Controller 0, offset 648 (direct) */ 
	0x0000028c, /* Controller 0, offset 652 (direct) */ 
	0x00000290, /* Controller 0, offset 656 (direct) */ 
	0x00000294, /* Controller 0, offset 660 (direct) */ 
	0x00000298, /* Controller 0, offset 664 (direct) */ 
	0x0000029c, /* Controller 0, offset 668 (direct) */ 
	0x000002a0, /* Controller 0, offset 672 (direct) */ 
	0x000002a4, /* Controller 0, offset 676 (direct) */ 
	0x000002a8, /* Controller 0, offset 680 (direct) */ 
	0x000002ac, /* Controller 0, offset 684 (direct) */ 
	0x000002b0, /* Controller 0, offset 688 (direct) */ 
	0x000002b4, /* Controller 0, offset 692 (direct) */ 
	0x000002b8, /* Controller 0, offset 696 (direct) */ 
	0x000002bc, /* Controller 0, offset 700 (direct) */ 
	0x000002c0, /* Controller 0, offset 704 (direct) */ 
	0x000002c4, /* Controller 0, offset 708 (direct) */ 
	0x000002c8, /* Controller 0, offset 712 (direct) */ 
	0x000002cc, /* Controller 0, offset 716 (direct) */ 
	0x000002d0, /* Controller 0, offset 720 (direct) */ 
	0x000002d4, /* Controller 0, offset 724 (direct) */ 
	0x000002d8, /* Controller 0, offset 728 (direct) */ 
	0x000002dc, /* Controller 0, offset 732 (direct) */ 
	0x000002e0, /* Controller 0, offset 736 (direct) */ 
	0x000002e4, /* Controller 0, offset 740 (direct) */ 
	0x000002e8, /* Controller 0, offset 744 (direct) */ 
	0x000002ec, /* Controller 0, offset 748 (direct) */ 
	0x000002f0, /* Controller 0, offset 752 (direct) */ 
	0x000002f4, /* Controller 0, offset 756 (direct) */ 
	0x000002f8, /* Controller 0, offset 760 (direct) */ 
	0x000002fc, /* Controller 0, offset 764 (direct) */ 
	0x00000300, /* Controller 0, offset 768 (direct) */ 
	0x00000304, /* Controller 0, offset 772 (direct) */ 
	0x00000308, /* Controller 0, offset 776 (direct) */ 
	0x0000030c, /* Controller 0, offset 780 (direct) */ 
	0x00000310, /* Controller 0, offset 784 (direct) */ 
	0x00000314, /* Controller 0, offset 788 (direct) */ 
	0x00000318, /* Controller 0, offset 792 (direct) */ 
	0x0000031c, /* Controller 0, offset 796 (direct) */ 
	0x00000320, /* Controller 0, offset 800 (direct) */ 
	0x00000324, /* Controller 0, offset 804 (direct) */ 
	0x00000328, /* Controller 0, offset 808 (direct) */ 
	0x0000032c, /* Controller 0, offset 812 (direct) */ 
	0x00000330, /* Controller 0, offset 816 (direct) */ 
	0x00000334, /* Controller 0, offset 820 (direct) */ 
	0x00000338, /* Controller 0, offset 824 (direct) */ 
	0x0000033c, /* Controller 0, offset 828 (direct) */ 
	0x00000340, /* Controller 0, offset 832 (direct) */ 
	0x00000344, /* Controller 0, offset 836 (direct) */ 
	0x00000348, /* Controller 0, offset 840 (direct) */ 
	0x0000034c, /* Controller 0, offset 844 (direct) */ 
	0x00000350, /* Controller 0, offset 848 (direct) */ 
	0x00000354, /* Controller 0, offset 852 (direct) */ 
	0x00000358, /* Controller 0, offset 856 (direct) */ 
	0x0000035c, /* Controller 0, offset 860 (direct) */ 
	0x00000360, /* Controller 0, offset 864 (direct) */ 
	0x00000364, /* Controller 0, offset 868 (direct) */ 
	0x00000368, /* Controller 0, offset 872 (direct) */ 
	0x0000036c, /* Controller 0, offset 876 (direct) */ 
	0x00000370, /* Controller 0, offset 880 (direct) */ 
	0x00000374, /* Controller 0, offset 884 (direct) */ 
	0x00000378, /* Controller 0, offset 888 (direct) */ 
	0x0000037c, /* Controller 0, offset 892 (direct) */ 
	0x00000380, /* Controller 0, offset 896 (direct) */ 
	0x00000384, /* Controller 0, offset 900 (direct) */ 
	0x00000388, /* Controller 0, offset 904 (direct) */ 
	0x0000038c, /* Controller 0, offset 908 (direct) */ 
	0x00000390, /* Controller 0, offset 912 (direct) */ 
	0x00000394, /* Controller 0, offset 916 (direct) */ 
	0x00000398, /* Controller 0, offset 920 (direct) */ 
	0x0000039c, /* Controller 0, offset 924 (direct) */ 
	0x000003a0, /* Controller 0, offset 928 (direct) */ 
	0x000003a4, /* Controller 0, offset 932 (direct) */ 
	0x000003a8, /* Controller 0, offset 936 (direct) */ 
	0x000003ac, /* Controller 0, offset 940 (direct) */ 
	0x000003b0, /* Controller 0, offset 944 (direct) */ 
	0x000003b4, /* Controller 0, offset 948 (direct) */ 
	0x000003b8, /* Controller 0, offset 952 (direct) */ 
	0x000003bc, /* Controller 0, offset 956 (direct) */ 
	0x000003c0, /* Controller 0, offset 960 (direct) */ 
	0x000003c4, /* Controller 0, offset 964 (direct) */ 
	0x000003c8, /* Controller 0, offset 968 (direct) */ 
	0x000003cc, /* Controller 0, offset 972 (direct) */ 
	0x000003d0, /* Controller 0, offset 976 (direct) */ 
	0x000003d4, /* Controller 0, offset 980 (direct) */ 
	0x000003d8, /* Controller 0, offset 984 (direct) */ 
	0x000003dc, /* Controller 0, offset 988 (direct) */ 
	0x000003e0, /* Controller 0, offset 992 (direct) */ 
	0x000003e4, /* Controller 0, offset 996 (direct) */ 
	0x000003e8, /* Controller 0, offset 1000 (direct) */ 
	0x000003ec, /* Controller 0, offset 1004 (direct) */ 
	0x000003f0, /* Controller 0, offset 1008 (direct) */ 
	0x000003f4, /* Controller 0, offset 1012 (direct) */ 
	0x000003f8, /* Controller 0, offset 1016 (direct) */ 
	0x000003fc, /* Controller 0, offset 1020 (direct) */ 
	0x00000400, /* Controller 0, offset 1024 (direct) */ 
	0x00000404, /* Controller 0, offset 1028 (direct) */ 
	0x00000408, /* Controller 0, offset 1032 (direct) */ 
	0x0000040c, /* Controller 0, offset 1036 (direct) */ 
	0x00000410, /* Controller 0, offset 1040 (direct) */ 
	0x00000414, /* Controller 0, offset 1044 (direct) */ 
	0x00000418, /* Controller 0, offset 1048 (direct) */ 
	0x0000041c, /* Controller 0, offset 1052 (direct) */ 
	0x00000420, /* Controller 0, offset 1056 (direct) */ 
	0x00000424, /* Controller 0, offset 1060 (direct) */ 
	0x00000428, /* Controller 0, offset 1064 (direct) */ 
	0x0000042c, /* Controller 0, offset 1068 (direct) */ 
	0x00000430, /* Controller 0, offset 1072 (direct) */ 
	0x00000434, /* Controller 0, offset 1076 (direct) */ 
	0x00000438, /* Controller 0, offset 1080 (direct) */ 
	0x0000043c, /* Controller 0, offset 1084 (direct) */ 
	0x00000440, /* Controller 0, offset 1088 (direct) */ 
	0x00000444, /* Controller 0, offset 1092 (direct) */ 
	0x00000448, /* Controller 0, offset 1096 (direct) */ 
	0x0000044c, /* Controller 0, offset 1100 (direct) */ 
	0x00000450, /* Controller 0, offset 1104 (direct) */ 
	0x00000454, /* Controller 0, offset 1108 (direct) */ 
	0x00000458, /* Controller 0, offset 1112 (direct) */ 
	0x0000045c, /* Controller 0, offset 1116 (direct) */ 
	0x00000460, /* Controller 0, offset 1120 (direct) */ 
	0x00000464, /* Controller 0, offset 1124 (direct) */ 
	0x00000468, /* Controller 0, offset 1128 (direct) */ 
	0x0000046c, /* Controller 0, offset 1132 (direct) */ 
	0x00000470, /* Controller 0, offset 1136 (direct) */ 
	0x00000474, /* Controller 0, offset 1140 (direct) */ 
	0x00000478, /* Controller 0, offset 1144 (direct) */ 
	0x0000047c, /* Controller 0, offset 1148 (direct) */ 
	0x00000480, /* Controller 0, offset 1152 (direct) */ 
	0x00000484, /* Controller 0, offset 1156 (direct) */ 
	0x00000488, /* Controller 0, offset 1160 (direct) */ 
	0x0000048c, /* Controller 0, offset 1164 (direct) */ 
	0x00000490, /* Controller 0, offset 1168 (direct) */ 
	0x00000494, /* Controller 0, offset 1172 (direct) */ 
	0x00000498, /* Controller 0, offset 1176 (direct) */ 
	0x0000049c, /* Controller 0, offset 1180 (direct) */ 
	0x000004a0, /* Controller 0, offset 1184 (direct) */ 
	0x000004a4, /* Controller 0, offset 1188 (direct) */ 
	0x000004a8, /* Controller 0, offset 1192 (direct) */ 
	0x000004ac, /* Controller 0, offset 1196 (direct) */ 
	0x000004b0, /* Controller 0, offset 1200 (direct) */ 
	0x000004b4, /* Controller 0, offset 1204 (direct) */ 
	0x000004b8, /* Controller 0, offset 1208 (direct) */ 
	0x000004bc, /* Controller 0, offset 1212 (direct) */ 
	0x000004c0, /* Controller 0, offset 1216 (direct) */ 
	0x000004c4, /* Controller 0, offset 1220 (direct) */ 
	0x000004c8, /* Controller 0, offset 1224 (direct) */ 
	0x000004cc, /* Controller 0, offset 1228 (direct) */ 
	0x000004d0, /* Controller 0, offset 1232 (direct) */ 
	0x000004d4, /* Controller 0, offset 1236 (direct) */ 
	0x000004d8, /* Controller 0, offset 1240 (direct) */ 
	0x000004dc, /* Controller 0, offset 1244 (direct) */ 
	0x000004e0, /* Controller 0, offset 1248 (direct) */ 
	0x000004e4, /* Controller 0, offset 1252 (direct) */ 
	0x000004e8, /* Controller 0, offset 1256 (direct) */ 
	0x000004ec, /* Controller 0, offset 1260 (direct) */ 
	0x000004f0, /* Controller 0, offset 1264 (direct) */ 
	0x000004f4, /* Controller 0, offset 1268 (direct) */ 
	0x000004f8, /* Controller 0, offset 1272 (direct) */ 
	0x000004fc, /* Controller 0, offset 1276 (direct) */ 
	0x00000500, /* Controller 0, offset 1280 (direct) */ 
	0x00000504, /* Controller 0, offset 1284 (direct) */ 
	0x00000508, /* Controller 0, offset 1288 (direct) */ 
	0x0000050c, /* Controller 0, offset 1292 (direct) */ 
	0x00000510, /* Controller 0, offset 1296 (direct) */ 
	0x00000514, /* Controller 0, offset 1300 (direct) */ 
	0x00000518, /* Controller 0, offset 1304 (direct) */ 
	0x0000051c, /* Controller 0, offset 1308 (direct) */ 
	0x00000520, /* Controller 0, offset 1312 (direct) */ 
	0x00000524, /* Controller 0, offset 1316 (direct) */ 
	0x00000528, /* Controller 0, offset 1320 (direct) */ 
	0x0000052c, /* Controller 0, offset 1324 (direct) */ 
	0x00000530, /* Controller 0, offset 1328 (direct) */ 
	0x00000534, /* Controller 0, offset 1332 (direct) */ 
	0x00000538, /* Controller 0, offset 1336 (direct) */ 
	0x0000053c, /* Controller 0, offset 1340 (direct) */ 
	0x00000540, /* Controller 0, offset 1344 (direct) */ 
	0x00000544, /* Controller 0, offset 1348 (direct) */ 
	0x00000548, /* Controller 0, offset 1352 (direct) */ 
	0x0000054c, /* Controller 0, offset 1356 (direct) */ 
	0x00000550, /* Controller 0, offset 1360 (direct) */ 
	0x00000554, /* Controller 0, offset 1364 (direct) */ 
	0x00000558, /* Controller 0, offset 1368 (direct) */ 
	0x0000055c, /* Controller 0, offset 1372 (direct) */ 
	0x00000560, /* Controller 0, offset 1376 (direct) */ 
	0x00000564, /* Controller 0, offset 1380 (direct) */ 
	0x00000568, /* Controller 0, offset 1384 (direct) */ 
	0x0000056c, /* Controller 0, offset 1388 (direct) */ 
	0x00000570, /* Controller 0, offset 1392 (direct) */ 
	0x00000574, /* Controller 0, offset 1396 (direct) */ 
	0x00000578, /* Controller 0, offset 1400 (direct) */ 
	0x0000057c, /* Controller 0, offset 1404 (direct) */ 
	0x00000580, /* Controller 0, offset 1408 (direct) */ 
	0x00000584, /* Controller 0, offset 1412 (direct) */ 
	0x00000588, /* Controller 0, offset 1416 (direct) */ 
	0x0000058c, /* Controller 0, offset 1420 (direct) */ 
	0x00000590, /* Controller 0, offset 1424 (direct) */ 
	0x00000594, /* Controller 0, offset 1428 (direct) */ 
	0x00000598, /* Controller 0, offset 1432 (direct) */ 
	0x0000059c, /* Controller 0, offset 1436 (direct) */ 
	0x000005a0, /* Controller 0, offset 1440 (direct) */ 
	0x000005a4, /* Controller 0, offset 1444 (direct) */ 
	0x000005a8, /* Controller 0, offset 1448 (direct) */ 
	0x000005ac, /* Controller 0, offset 1452 (direct) */ 
	0x000005b0, /* Controller 0, offset 1456 (direct) */ 
	0x000005b4, /* Controller 0, offset 1460 (direct) */ 
	0x000005b8, /* Controller 0, offset 1464 (direct) */ 
	0x000005bc, /* Controller 0, offset 1468 (direct) */ 
	0x000005c0, /* Controller 0, offset 1472 (direct) */ 
	0x000005c4, /* Controller 0, offset 1476 (direct) */ 
	0x000005c8, /* Controller 0, offset 1480 (direct) */ 
	0x000005cc, /* Controller 0, offset 1484 (direct) */ 
	0x000005d0, /* Controller 0, offset 1488 (direct) */ 
	0x000005d4, /* Controller 0, offset 1492 (direct) */ 
	0x000005d8, /* Controller 0, offset 1496 (direct) */ 
	0x000005dc, /* Controller 0, offset 1500 (direct) */ 
	0x000005e0, /* Controller 0, offset 1504 (direct) */ 
	0x000005e4, /* Controller 0, offset 1508 (direct) */ 
	0x000005e8, /* Controller 0, offset 1512 (direct) */ 
	0x000005ec, /* Controller 0, offset 1516 (direct) */ 
	0x000005f0, /* Controller 0, offset 1520 (direct) */ 
	0x000005f4, /* Controller 0, offset 1524 (direct) */ 
	0x000005f8, /* Controller 0, offset 1528 (direct) */ 
	0x000005fc, /* Controller 0, offset 1532 (direct) */ 
	0x00000600, /* Controller 0, offset 1536 (direct) */ 
	0x00000604, /* Controller 0, offset 1540 (direct) */ 
	0x00000608, /* Controller 0, offset 1544 (direct) */ 
	0x0000060c, /* Controller 0, offset 1548 (direct) */ 
	0x00000610, /* Controller 0, offset 1552 (direct) */ 
	0x00000614, /* Controller 0, offset 1556 (direct) */ 
	0x00000618, /* Controller 0, offset 1560 (direct) */ 
	0x0000061c, /* Controller 0, offset 1564 (direct) */ 
	0x00000620, /* Controller 0, offset 1568 (direct) */ 
	0x00000624, /* Controller 0, offset 1572 (direct) */ 
	0x00000628, /* Controller 0, offset 1576 (direct) */ 
	0x0000062c, /* Controller 0, offset 1580 (direct) */ 
	0x00000630, /* Controller 0, offset 1584 (direct) */ 
	0x00000634, /* Controller 0, offset 1588 (direct) */ 
	0x00000638, /* Controller 0, offset 1592 (direct) */ 
	0x0000063c, /* Controller 0, offset 1596 (direct) */ 
	0x00000640, /* Controller 0, offset 1600 (direct) */ 
	0x00000644, /* Controller 0, offset 1604 (direct) */ 
	0x00000648, /* Controller 0, offset 1608 (direct) */ 
	0x0000064c, /* Controller 0, offset 1612 (direct) */ 
	0x00000650, /* Controller 0, offset 1616 (direct) */ 
	0x00000654, /* Controller 0, offset 1620 (direct) */ 
	0x00000658, /* Controller 0, offset 1624 (direct) */ 
	0x0000065c, /* Controller 0, offset 1628 (direct) */ 
	0x00000660, /* Controller 0, offset 1632 (direct) */ 
	0x00000664, /* Controller 0, offset 1636 (direct) */ 
	0x00000668, /* Controller 0, offset 1640 (direct) */ 
	0x0000066c, /* Controller 0, offset 1644 (direct) */ 
	0x00000670, /* Controller 0, offset 1648 (direct) */ 
	0x00000674, /* Controller 0, offset 1652 (direct) */ 
	0x00000678, /* Controller 0, offset 1656 (direct) */ 
	0x0000067c, /* Controller 0, offset 1660 (direct) */ 
	0x00000680, /* Controller 0, offset 1664 (direct) */ 
	0x00000684, /* Controller 0, offset 1668 (direct) */ 
	0x00000688, /* Controller 0, offset 1672 (direct) */ 
	0x0000068c, /* Controller 0, offset 1676 (direct) */ 
	0x00000690, /* Controller 0, offset 1680 (direct) */ 
	0x00000694, /* Controller 0, offset 1684 (direct) */ 
	0x00000698, /* Controller 0, offset 1688 (direct) */ 
	0x0000069c, /* Controller 0, offset 1692 (direct) */ 
	0x000006a0, /* Controller 0, offset 1696 (direct) */ 
	0x000006a4, /* Controller 0, offset 1700 (direct) */ 
	0x000006a8, /* Controller 0, offset 1704 (direct) */ 
	0x000006ac, /* Controller 0, offset 1708 (direct) */ 
	0x000006b0, /* Controller 0, offset 1712 (direct) */ 
	0x000006b4, /* Controller 0, offset 1716 (direct) */ 
	0x000006b8, /* Controller 0, offset 1720 (direct) */ 
	0x000006bc, /* Controller 0, offset 1724 (direct) */ 
	0x000006c0, /* Controller 0, offset 1728 (direct) */ 
	0x000006c4, /* Controller 0, offset 1732 (direct) */ 
	0x000006c8, /* Controller 0, offset 1736 (direct) */ 
	0x000006cc, /* Controller 0, offset 1740 (direct) */ 
	0x000006d0, /* Controller 0, offset 1744 (direct) */ 
	0x000006d4, /* Controller 0, offset 1748 (direct) */ 
	0x000006d8, /* Controller 0, offset 1752 (direct) */ 
	0x000006dc, /* Controller 0, offset 1756 (direct) */ 
	0x000006e0, /* Controller 0, offset 1760 (direct) */ 
	0x000006e4, /* Controller 0, offset 1764 (direct) */ 
	0x000006e8, /* Controller 0, offset 1768 (direct) */ 
	0x000006ec, /* Controller 0, offset 1772 (direct) */ 
	0x000006f0, /* Controller 0, offset 1776 (direct) */ 
	0x000006f4, /* Controller 0, offset 1780 (direct) */ 
	0x000006f8, /* Controller 0, offset 1784 (direct) */ 
	0x000006fc, /* Controller 0, offset 1788 (direct) */ 
	0x00000700, /* Controller 0, offset 1792 (direct) */ 
	0x00000704, /* Controller 0, offset 1796 (direct) */ 
	0x00000708, /* Controller 0, offset 1800 (direct) */ 
	0x0000070c, /* Controller 0, offset 1804 (direct) */ 
	0x00000710, /* Controller 0, offset 1808 (direct) */ 
	0x00000714, /* Controller 0, offset 1812 (direct) */ 
	0x00000718, /* Controller 0, offset 1816 (direct) */ 
	0x0000071c, /* Controller 0, offset 1820 (direct) */ 
	0x00000720, /* Controller 0, offset 1824 (direct) */ 
	0x00000724, /* Controller 0, offset 1828 (direct) */ 
	0x00000728, /* Controller 0, offset 1832 (direct) */ 
	0x0000072c, /* Controller 0, offset 1836 (direct) */ 
	0x00000730, /* Controller 0, offset 1840 (direct) */ 
	0x00000734, /* Controller 0, offset 1844 (direct) */ 
	0x00000738, /* Controller 0, offset 1848 (direct) */ 
	0x0000073c, /* Controller 0, offset 1852 (direct) */ 
	0x00000740, /* Controller 0, offset 1856 (direct) */ 
	0x00000744, /* Controller 0, offset 1860 (direct) */ 
	0x00000748, /* Controller 0, offset 1864 (direct) */ 
	0x0000074c, /* Controller 0, offset 1868 (direct) */ 
	0x00000750, /* Controller 0, offset 1872 (direct) */ 
	0x00000754, /* Controller 0, offset 1876 (direct) */ 
	0x00000758, /* Controller 0, offset 1880 (direct) */ 
	0x0000075c, /* Controller 0, offset 1884 (direct) */ 
	0x00000760, /* Controller 0, offset 1888 (direct) */ 
	0x00000764, /* Controller 0, offset 1892 (direct) */ 
	0x00000768, /* Controller 0, offset 1896 (direct) */ 
	0x0000076c, /* Controller 0, offset 1900 (direct) */ 
	0x00000770, /* Controller 0, offset 1904 (direct) */ 
	0x00000774, /* Controller 0, offset 1908 (direct) */ 
	0x00000778, /* Controller 0, offset 1912 (direct) */ 
	0x0000077c, /* Controller 0, offset 1916 (direct) */ 
	0x00000780, /* Controller 0, offset 1920 (direct) */ 
	0x00000784, /* Controller 0, offset 1924 (direct) */ 
	0x00000788, /* Controller 0, offset 1928 (direct) */ 
	0x0000078c, /* Controller 0, offset 1932 (direct) */ 
	0x00000790, /* Controller 0, offset 1936 (direct) */ 
	0x00000794, /* Controller 0, offset 1940 (direct) */ 
	0x00000798, /* Controller 0, offset 1944 (direct) */ 
	0x0000079c, /* Controller 0, offset 1948 (direct) */ 
	0x000007a0, /* Controller 0, offset 1952 (direct) */ 
	0x000007a4, /* Controller 0, offset 1956 (direct) */ 
	0x000007a8, /* Controller 0, offset 1960 (direct) */ 
	0x000007ac, /* Controller 0, offset 1964 (direct) */ 
	0x000007b0, /* Controller 0, offset 1968 (direct) */ 
	0x000007b4, /* Controller 0, offset 1972 (direct) */ 
	0x000007b8, /* Controller 0, offset 1976 (direct) */ 
	0x000007bc, /* Controller 0, offset 1980 (direct) */ 
	0x000007c0, /* Controller 0, offset 1984 (direct) */ 
	0x000007c4, /* Controller 0, offset 1988 (direct) */ 
	0x000007c8, /* Controller 0, offset 1992 (direct) */ 
	0x000007cc, /* Controller 0, offset 1996 (direct) */ 
	0x000007d0, /* Controller 0, offset 2000 (direct) */ 
	0x000007d4, /* Controller 0, offset 2004 (direct) */ 
	0x000007d8, /* Controller 0, offset 2008 (direct) */ 
	0x000007dc, /* Controller 0, offset 2012 (direct) */ 
	0x000007e0, /* Controller 0, offset 2016 (direct) */ 
	0x000007e4, /* Controller 0, offset 2020 (direct) */ 
	0x000007e8, /* Controller 0, offset 2024 (direct) */ 
	0x000007ec, /* Controller 0, offset 2028 (direct) */ 
	0x000007f0, /* Controller 0, offset 2032 (direct) */ 
	0x000007f4, /* Controller 0, offset 2036 (direct) */ 
	0x000007f8, /* Controller 0, offset 2040 (direct) */ 
	0x000007fc, /* Controller 0, offset 2044 (direct) */ 
	0x00000800, /* Controller 0, offset 2048 (direct) */ 
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
	0x00010044, /* Controller 1, offset 68 (direct) */ 
	0x00010048, /* Controller 1, offset 72 (direct) */ 
	0x0001004c, /* Controller 1, offset 76 (direct) */ 
	0x00010050, /* Controller 1, offset 80 (direct) */ 
	0x00010054, /* Controller 1, offset 84 (direct) */ 
	0x00010058, /* Controller 1, offset 88 (direct) */ 
	0x0001005c, /* Controller 1, offset 92 (direct) */ 
	0x00010060, /* Controller 1, offset 96 (direct) */ 
	0x00010064, /* Controller 1, offset 100 (direct) */ 
	0x00010068, /* Controller 1, offset 104 (direct) */ 
	0x0001006c, /* Controller 1, offset 108 (direct) */ 
	0x00010070, /* Controller 1, offset 112 (direct) */ 
	0x00010074, /* Controller 1, offset 116 (direct) */ 
	0x00010078, /* Controller 1, offset 120 (direct) */ 
	0x0001007c, /* Controller 1, offset 124 (direct) */ 
	0x00010080, /* Controller 1, offset 128 (direct) */ 
	0x00010084, /* Controller 1, offset 132 (direct) */ 
	0x00010088, /* Controller 1, offset 136 (direct) */ 
	0x0001008c, /* Controller 1, offset 140 (direct) */ 
	0x00010090, /* Controller 1, offset 144 (direct) */ 
	0x00010094, /* Controller 1, offset 148 (direct) */ 
	0x00010098, /* Controller 1, offset 152 (direct) */ 
	0x0001009c, /* Controller 1, offset 156 (direct) */ 
	0x000100a0, /* Controller 1, offset 160 (direct) */ 
	0x000100a4, /* Controller 1, offset 164 (direct) */ 
	0x000100a8, /* Controller 1, offset 168 (direct) */ 
	0x000100ac, /* Controller 1, offset 172 (direct) */ 
	0x000100b0, /* Controller 1, offset 176 (direct) */ 
	0x000100b4, /* Controller 1, offset 180 (direct) */ 
	0x000100b8, /* Controller 1, offset 184 (direct) */ 
	0x000100bc, /* Controller 1, offset 188 (direct) */ 
	0x000100c0, /* Controller 1, offset 192 (direct) */ 
	0x000100c4, /* Controller 1, offset 196 (direct) */ 
	0x000100c8, /* Controller 1, offset 200 (direct) */ 
	0x000100cc, /* Controller 1, offset 204 (direct) */ 
	0x000100d0, /* Controller 1, offset 208 (direct) */ 
	0x000100d4, /* Controller 1, offset 212 (direct) */ 
	0x000100d8, /* Controller 1, offset 216 (direct) */ 
	0x000100dc, /* Controller 1, offset 220 (direct) */ 
	0x000100e0, /* Controller 1, offset 224 (direct) */ 
	0x000100e4, /* Controller 1, offset 228 (direct) */ 
	0x000100e8, /* Controller 1, offset 232 (direct) */ 
	0x000100ec, /* Controller 1, offset 236 (direct) */ 
	0x000100f0, /* Controller 1, offset 240 (direct) */ 
	0x000100f4, /* Controller 1, offset 244 (direct) */ 
	0x000100f8, /* Controller 1, offset 248 (direct) */ 
	0x000100fc, /* Controller 1, offset 252 (direct) */ 
	0x00010100, /* Controller 1, offset 256 (direct) */ 
	0x00010104, /* Controller 1, offset 260 (direct) */ 
	0x00010108, /* Controller 1, offset 264 (direct) */ 
	0x0001010c, /* Controller 1, offset 268 (direct) */ 
	0x00010110, /* Controller 1, offset 272 (direct) */ 
	0x00010114, /* Controller 1, offset 276 (direct) */ 
	0x00010118, /* Controller 1, offset 280 (direct) */ 
	0x0001011c, /* Controller 1, offset 284 (direct) */ 
	0x00010120, /* Controller 1, offset 288 (direct) */ 
	0x00010124, /* Controller 1, offset 292 (direct) */ 
	0x00010128, /* Controller 1, offset 296 (direct) */ 
	0x0001012c, /* Controller 1, offset 300 (direct) */ 
	0x00010130, /* Controller 1, offset 304 (direct) */ 
	0x00010134, /* Controller 1, offset 308 (direct) */ 
	0x00010138, /* Controller 1, offset 312 (direct) */ 
	0x0001013c, /* Controller 1, offset 316 (direct) */ 
	0x00010140, /* Controller 1, offset 320 (direct) */ 
	0x00010144, /* Controller 1, offset 324 (direct) */ 
	0x00010148, /* Controller 1, offset 328 (direct) */ 
	0x0001014c, /* Controller 1, offset 332 (direct) */ 
	0x00010150, /* Controller 1, offset 336 (direct) */ 
	0x00010154, /* Controller 1, offset 340 (direct) */ 
	0x00010158, /* Controller 1, offset 344 (direct) */ 
	0x0001015c, /* Controller 1, offset 348 (direct) */ 
	0x00010160, /* Controller 1, offset 352 (direct) */ 
	0x00010164, /* Controller 1, offset 356 (direct) */ 
	0x00010168, /* Controller 1, offset 360 (direct) */ 
	0x0001016c, /* Controller 1, offset 364 (direct) */ 
	0x00010170, /* Controller 1, offset 368 (direct) */ 
	0x00010174, /* Controller 1, offset 372 (direct) */ 
	0x00010178, /* Controller 1, offset 376 (direct) */ 
	0x0001017c, /* Controller 1, offset 380 (direct) */ 
	0x00010180, /* Controller 1, offset 384 (direct) */ 
	0x00010184, /* Controller 1, offset 388 (direct) */ 
	0x00010188, /* Controller 1, offset 392 (direct) */ 
	0x0001018c, /* Controller 1, offset 396 (direct) */ 
	0x00010190, /* Controller 1, offset 400 (direct) */ 
	0x00010194, /* Controller 1, offset 404 (direct) */ 
	0x00010198, /* Controller 1, offset 408 (direct) */ 
	0x0001019c, /* Controller 1, offset 412 (direct) */ 
	0x000101a0, /* Controller 1, offset 416 (direct) */ 
	0x000101a4, /* Controller 1, offset 420 (direct) */ 
	0x000101a8, /* Controller 1, offset 424 (direct) */ 
	0x000101ac, /* Controller 1, offset 428 (direct) */ 
	0x000101b0, /* Controller 1, offset 432 (direct) */ 
	0x000101b4, /* Controller 1, offset 436 (direct) */ 
	0x000101b8, /* Controller 1, offset 440 (direct) */ 
	0x000101bc, /* Controller 1, offset 444 (direct) */ 
	0x000101c0, /* Controller 1, offset 448 (direct) */ 
	0x000101c4, /* Controller 1, offset 452 (direct) */ 
	0x000101c8, /* Controller 1, offset 456 (direct) */ 
	0x000101cc, /* Controller 1, offset 460 (direct) */ 
	0x000101d0, /* Controller 1, offset 464 (direct) */ 
	0x000101d4, /* Controller 1, offset 468 (direct) */ 
	0x000101d8, /* Controller 1, offset 472 (direct) */ 
	0x000101dc, /* Controller 1, offset 476 (direct) */ 
	0x000101e0, /* Controller 1, offset 480 (direct) */ 
	0x000101e4, /* Controller 1, offset 484 (direct) */ 
	0x000101e8, /* Controller 1, offset 488 (direct) */ 
	0x000101ec, /* Controller 1, offset 492 (direct) */ 
	0x000101f0, /* Controller 1, offset 496 (direct) */ 
	0x000101f4, /* Controller 1, offset 500 (direct) */ 
	0x000101f8, /* Controller 1, offset 504 (direct) */ 
	0x000101fc, /* Controller 1, offset 508 (direct) */ 
	0x00010200, /* Controller 1, offset 512 (direct) */ 
	0x00010204, /* Controller 1, offset 516 (direct) */ 
	0x00010208, /* Controller 1, offset 520 (direct) */ 
	0x0001020c, /* Controller 1, offset 524 (direct) */ 
	0x00010210, /* Controller 1, offset 528 (direct) */ 
	0x00010214, /* Controller 1, offset 532 (direct) */ 
	0x00010218, /* Controller 1, offset 536 (direct) */ 
	0x0001021c, /* Controller 1, offset 540 (direct) */ 
	0x00010220, /* Controller 1, offset 544 (direct) */ 
	0x00010224, /* Controller 1, offset 548 (direct) */ 
	0x00010228, /* Controller 1, offset 552 (direct) */ 
	0x0001022c, /* Controller 1, offset 556 (direct) */ 
	0x00010230, /* Controller 1, offset 560 (direct) */ 
	0x00010234, /* Controller 1, offset 564 (direct) */ 
	0x00010238, /* Controller 1, offset 568 (direct) */ 
	0x0001023c, /* Controller 1, offset 572 (direct) */ 
	0x00010240, /* Controller 1, offset 576 (direct) */ 
	0x00010244, /* Controller 1, offset 580 (direct) */ 
	0x00010248, /* Controller 1, offset 584 (direct) */ 
	0x0001024c, /* Controller 1, offset 588 (direct) */ 
	0x00010250, /* Controller 1, offset 592 (direct) */ 
	0x00010254, /* Controller 1, offset 596 (direct) */ 
	0x00010258, /* Controller 1, offset 600 (direct) */ 
	0x0001025c, /* Controller 1, offset 604 (direct) */ 
	0x00010260, /* Controller 1, offset 608 (direct) */ 
	0x00010264, /* Controller 1, offset 612 (direct) */ 
	0x00010268, /* Controller 1, offset 616 (direct) */ 
	0x0001026c, /* Controller 1, offset 620 (direct) */ 
	0x00010270, /* Controller 1, offset 624 (direct) */ 
	0x00010274, /* Controller 1, offset 628 (direct) */ 
	0x00010278, /* Controller 1, offset 632 (direct) */ 
	0x0001027c, /* Controller 1, offset 636 (direct) */ 
	0x00010280, /* Controller 1, offset 640 (direct) */ 
	0x00010284, /* Controller 1, offset 644 (direct) */ 
	0x00010288, /* Controller 1, offset 648 (direct) */ 
	0x0001028c, /* Controller 1, offset 652 (direct) */ 
	0x00010290, /* Controller 1, offset 656 (direct) */ 
	0x00010294, /* Controller 1, offset 660 (direct) */ 
	0x00010298, /* Controller 1, offset 664 (direct) */ 
	0x0001029c, /* Controller 1, offset 668 (direct) */ 
	0x000102a0, /* Controller 1, offset 672 (direct) */ 
	0x000102a4, /* Controller 1, offset 676 (direct) */ 
	0x000102a8, /* Controller 1, offset 680 (direct) */ 
	0x000102ac, /* Controller 1, offset 684 (direct) */ 
	0x000102b0, /* Controller 1, offset 688 (direct) */ 
	0x000102b4, /* Controller 1, offset 692 (direct) */ 
	0x000102b8, /* Controller 1, offset 696 (direct) */ 
	0x000102bc, /* Controller 1, offset 700 (direct) */ 
	0x000102c0, /* Controller 1, offset 704 (direct) */ 
	0x000102c4, /* Controller 1, offset 708 (direct) */ 
	0x000102c8, /* Controller 1, offset 712 (direct) */ 
	0x000102cc, /* Controller 1, offset 716 (direct) */ 
	0x000102d0, /* Controller 1, offset 720 (direct) */ 
	0x000102d4, /* Controller 1, offset 724 (direct) */ 
	0x000102d8, /* Controller 1, offset 728 (direct) */ 
	0x000102dc, /* Controller 1, offset 732 (direct) */ 
	0x000102e0, /* Controller 1, offset 736 (direct) */ 
	0x000102e4, /* Controller 1, offset 740 (direct) */ 
	0x000102e8, /* Controller 1, offset 744 (direct) */ 
	0x000102ec, /* Controller 1, offset 748 (direct) */ 
	0x000102f0, /* Controller 1, offset 752 (direct) */ 
	0x000102f4, /* Controller 1, offset 756 (direct) */ 
	0x000102f8, /* Controller 1, offset 760 (direct) */ 
	0x000102fc, /* Controller 1, offset 764 (direct) */ 
	0x00010300, /* Controller 1, offset 768 (direct) */ 
	0x00010304, /* Controller 1, offset 772 (direct) */ 
	0x00010308, /* Controller 1, offset 776 (direct) */ 
	0x0001030c, /* Controller 1, offset 780 (direct) */ 
	0x00010310, /* Controller 1, offset 784 (direct) */ 
	0x00010314, /* Controller 1, offset 788 (direct) */ 
	0x00010318, /* Controller 1, offset 792 (direct) */ 
	0x0001031c, /* Controller 1, offset 796 (direct) */ 
	0x00010320, /* Controller 1, offset 800 (direct) */ 
	0x00010324, /* Controller 1, offset 804 (direct) */ 
	0x00010328, /* Controller 1, offset 808 (direct) */ 
	0x0001032c, /* Controller 1, offset 812 (direct) */ 
	0x00010330, /* Controller 1, offset 816 (direct) */ 
	0x00010334, /* Controller 1, offset 820 (direct) */ 
	0x00010338, /* Controller 1, offset 824 (direct) */ 
	0x0001033c, /* Controller 1, offset 828 (direct) */ 
	0x00010340, /* Controller 1, offset 832 (direct) */ 
	0x00010344, /* Controller 1, offset 836 (direct) */ 
	0x00010348, /* Controller 1, offset 840 (direct) */ 
	0x0001034c, /* Controller 1, offset 844 (direct) */ 
	0x00010350, /* Controller 1, offset 848 (direct) */ 
	0x00010354, /* Controller 1, offset 852 (direct) */ 
	0x00010358, /* Controller 1, offset 856 (direct) */ 
	0x0001035c, /* Controller 1, offset 860 (direct) */ 
	0x00010360, /* Controller 1, offset 864 (direct) */ 
	0x00010364, /* Controller 1, offset 868 (direct) */ 
	0x00010368, /* Controller 1, offset 872 (direct) */ 
	0x0001036c, /* Controller 1, offset 876 (direct) */ 
	0x00010370, /* Controller 1, offset 880 (direct) */ 
	0x00010374, /* Controller 1, offset 884 (direct) */ 
	0x00010378, /* Controller 1, offset 888 (direct) */ 
	0x0001037c, /* Controller 1, offset 892 (direct) */ 
	0x00010380, /* Controller 1, offset 896 (direct) */ 
	0x00010384, /* Controller 1, offset 900 (direct) */ 
	0x00010388, /* Controller 1, offset 904 (direct) */ 
	0x0001038c, /* Controller 1, offset 908 (direct) */ 
	0x00010390, /* Controller 1, offset 912 (direct) */ 
	0x00010394, /* Controller 1, offset 916 (direct) */ 
	0x00010398, /* Controller 1, offset 920 (direct) */ 
	0x0001039c, /* Controller 1, offset 924 (direct) */ 
	0x000103a0, /* Controller 1, offset 928 (direct) */ 
	0x000103a4, /* Controller 1, offset 932 (direct) */ 
	0x000103a8, /* Controller 1, offset 936 (direct) */ 
	0x000103ac, /* Controller 1, offset 940 (direct) */ 
	0x000103b0, /* Controller 1, offset 944 (direct) */ 
	0x000103b4, /* Controller 1, offset 948 (direct) */ 
	0x000103b8, /* Controller 1, offset 952 (direct) */ 
	0x000103bc, /* Controller 1, offset 956 (direct) */ 
	0x000103c0, /* Controller 1, offset 960 (direct) */ 
	0x000103c4, /* Controller 1, offset 964 (direct) */ 
	0x000103c8, /* Controller 1, offset 968 (direct) */ 
	0x000103cc, /* Controller 1, offset 972 (direct) */ 
	0x000103d0, /* Controller 1, offset 976 (direct) */ 
	0x000103d4, /* Controller 1, offset 980 (direct) */ 
	0x000103d8, /* Controller 1, offset 984 (direct) */ 
	0x000103dc, /* Controller 1, offset 988 (direct) */ 
	0x000103e0, /* Controller 1, offset 992 (direct) */ 
	0x000103e4, /* Controller 1, offset 996 (direct) */ 
	0x000103e8, /* Controller 1, offset 1000 (direct) */ 
	0x000103ec, /* Controller 1, offset 1004 (direct) */ 
	0x000103f0, /* Controller 1, offset 1008 (direct) */ 
	0x000103f4, /* Controller 1, offset 1012 (direct) */ 
	0x000103f8, /* Controller 1, offset 1016 (direct) */ 
	0x000103fc, /* Controller 1, offset 1020 (direct) */ 
	0x00010400, /* Controller 1, offset 1024 (direct) */ 
	0x00010404, /* Controller 1, offset 1028 (direct) */ 
	0x00010408, /* Controller 1, offset 1032 (direct) */ 
	0x0001040c, /* Controller 1, offset 1036 (direct) */ 
	0x00010410, /* Controller 1, offset 1040 (direct) */ 
	0x00010414, /* Controller 1, offset 1044 (direct) */ 
	0x00010418, /* Controller 1, offset 1048 (direct) */ 
	0x0001041c, /* Controller 1, offset 1052 (direct) */ 
	0x00010420, /* Controller 1, offset 1056 (direct) */ 
	0x00010424, /* Controller 1, offset 1060 (direct) */ 
	0x00010428, /* Controller 1, offset 1064 (direct) */ 
	0x0001042c, /* Controller 1, offset 1068 (direct) */ 
	0x00010430, /* Controller 1, offset 1072 (direct) */ 
	0x00010434, /* Controller 1, offset 1076 (direct) */ 
	0x00010438, /* Controller 1, offset 1080 (direct) */ 
	0x0001043c, /* Controller 1, offset 1084 (direct) */ 
	0x00010440, /* Controller 1, offset 1088 (direct) */ 
	0x00010444, /* Controller 1, offset 1092 (direct) */ 
	0x00010448, /* Controller 1, offset 1096 (direct) */ 
	0x0001044c, /* Controller 1, offset 1100 (direct) */ 
	0x00010450, /* Controller 1, offset 1104 (direct) */ 
	0x00010454, /* Controller 1, offset 1108 (direct) */ 
	0x00010458, /* Controller 1, offset 1112 (direct) */ 
	0x0001045c, /* Controller 1, offset 1116 (direct) */ 
	0x00010460, /* Controller 1, offset 1120 (direct) */ 
	0x00010464, /* Controller 1, offset 1124 (direct) */ 
	0x00010468, /* Controller 1, offset 1128 (direct) */ 
	0x0001046c, /* Controller 1, offset 1132 (direct) */ 
	0x00010470, /* Controller 1, offset 1136 (direct) */ 
	0x00010474, /* Controller 1, offset 1140 (direct) */ 
	0x00010478, /* Controller 1, offset 1144 (direct) */ 
	0x0001047c, /* Controller 1, offset 1148 (direct) */ 
	0x00010480, /* Controller 1, offset 1152 (direct) */ 
	0x00010484, /* Controller 1, offset 1156 (direct) */ 
	0x00010488, /* Controller 1, offset 1160 (direct) */ 
	0x0001048c, /* Controller 1, offset 1164 (direct) */ 
	0x00010490, /* Controller 1, offset 1168 (direct) */ 
	0x00010494, /* Controller 1, offset 1172 (direct) */ 
	0x00010498, /* Controller 1, offset 1176 (direct) */ 
	0x0001049c, /* Controller 1, offset 1180 (direct) */ 
	0x000104a0, /* Controller 1, offset 1184 (direct) */ 
	0x000104a4, /* Controller 1, offset 1188 (direct) */ 
	0x000104a8, /* Controller 1, offset 1192 (direct) */ 
	0x000104ac, /* Controller 1, offset 1196 (direct) */ 
	0x000104b0, /* Controller 1, offset 1200 (direct) */ 
	0x000104b4, /* Controller 1, offset 1204 (direct) */ 
	0x000104b8, /* Controller 1, offset 1208 (direct) */ 
	0x000104bc, /* Controller 1, offset 1212 (direct) */ 
	0x000104c0, /* Controller 1, offset 1216 (direct) */ 
	0x000104c4, /* Controller 1, offset 1220 (direct) */ 
	0x000104c8, /* Controller 1, offset 1224 (direct) */ 
	0x000104cc, /* Controller 1, offset 1228 (direct) */ 
	0x000104d0, /* Controller 1, offset 1232 (direct) */ 
	0x000104d4, /* Controller 1, offset 1236 (direct) */ 
	0x000104d8, /* Controller 1, offset 1240 (direct) */ 
	0x000104dc, /* Controller 1, offset 1244 (direct) */ 
	0x000104e0, /* Controller 1, offset 1248 (direct) */ 
	0x000104e4, /* Controller 1, offset 1252 (direct) */ 
	0x000104e8, /* Controller 1, offset 1256 (direct) */ 
	0x000104ec, /* Controller 1, offset 1260 (direct) */ 
	0x000104f0, /* Controller 1, offset 1264 (direct) */ 
	0x000104f4, /* Controller 1, offset 1268 (direct) */ 
	0x000104f8, /* Controller 1, offset 1272 (direct) */ 
	0x000104fc, /* Controller 1, offset 1276 (direct) */ 
	0x00010500, /* Controller 1, offset 1280 (direct) */ 
	0x00010504, /* Controller 1, offset 1284 (direct) */ 
	0x00010508, /* Controller 1, offset 1288 (direct) */ 
	0x0001050c, /* Controller 1, offset 1292 (direct) */ 
	0x00010510, /* Controller 1, offset 1296 (direct) */ 
	0x00010514, /* Controller 1, offset 1300 (direct) */ 
	0x00010518, /* Controller 1, offset 1304 (direct) */ 
	0x0001051c, /* Controller 1, offset 1308 (direct) */ 
	0x00010520, /* Controller 1, offset 1312 (direct) */ 
	0x00010524, /* Controller 1, offset 1316 (direct) */ 
	0x00010528, /* Controller 1, offset 1320 (direct) */ 
	0x0001052c, /* Controller 1, offset 1324 (direct) */ 
	0x00010530, /* Controller 1, offset 1328 (direct) */ 
	0x00010534, /* Controller 1, offset 1332 (direct) */ 
	0x00010538, /* Controller 1, offset 1336 (direct) */ 
	0x0001053c, /* Controller 1, offset 1340 (direct) */ 
	0x00010540, /* Controller 1, offset 1344 (direct) */ 
	0x00010544, /* Controller 1, offset 1348 (direct) */ 
	0x00010548, /* Controller 1, offset 1352 (direct) */ 
	0x0001054c, /* Controller 1, offset 1356 (direct) */ 
	0x00010550, /* Controller 1, offset 1360 (direct) */ 
	0x00010554, /* Controller 1, offset 1364 (direct) */ 
	0x00010558, /* Controller 1, offset 1368 (direct) */ 
	0x0001055c, /* Controller 1, offset 1372 (direct) */ 
	0x00010560, /* Controller 1, offset 1376 (direct) */ 
	0x00010564, /* Controller 1, offset 1380 (direct) */ 
	0x00010568, /* Controller 1, offset 1384 (direct) */ 
	0x0001056c, /* Controller 1, offset 1388 (direct) */ 
	0x00010570, /* Controller 1, offset 1392 (direct) */ 
	0x00010574, /* Controller 1, offset 1396 (direct) */ 
	0x00010578, /* Controller 1, offset 1400 (direct) */ 
	0x0001057c, /* Controller 1, offset 1404 (direct) */ 
	0x00010580, /* Controller 1, offset 1408 (direct) */ 
	0x00010584, /* Controller 1, offset 1412 (direct) */ 
	0x00010588, /* Controller 1, offset 1416 (direct) */ 
	0x0001058c, /* Controller 1, offset 1420 (direct) */ 
	0x00010590, /* Controller 1, offset 1424 (direct) */ 
	0x00010594, /* Controller 1, offset 1428 (direct) */ 
	0x00010598, /* Controller 1, offset 1432 (direct) */ 
	0x0001059c, /* Controller 1, offset 1436 (direct) */ 
	0x000105a0, /* Controller 1, offset 1440 (direct) */ 
	0x000105a4, /* Controller 1, offset 1444 (direct) */ 
	0x000105a8, /* Controller 1, offset 1448 (direct) */ 
	0x000105ac, /* Controller 1, offset 1452 (direct) */ 
	0x000105b0, /* Controller 1, offset 1456 (direct) */ 
	0x000105b4, /* Controller 1, offset 1460 (direct) */ 
	0x000105b8, /* Controller 1, offset 1464 (direct) */ 
	0x000105bc, /* Controller 1, offset 1468 (direct) */ 
	0x000105c0, /* Controller 1, offset 1472 (direct) */ 
	0x000105c4, /* Controller 1, offset 1476 (direct) */ 
	0x000105c8, /* Controller 1, offset 1480 (direct) */ 
	0x000105cc, /* Controller 1, offset 1484 (direct) */ 
	0x000105d0, /* Controller 1, offset 1488 (direct) */ 
	0x000105d4, /* Controller 1, offset 1492 (direct) */ 
	0x000105d8, /* Controller 1, offset 1496 (direct) */ 
	0x000105dc, /* Controller 1, offset 1500 (direct) */ 
	0x000105e0, /* Controller 1, offset 1504 (direct) */ 
	0x000105e4, /* Controller 1, offset 1508 (direct) */ 
	0x000105e8, /* Controller 1, offset 1512 (direct) */ 
	0x000105ec, /* Controller 1, offset 1516 (direct) */ 
	0x000105f0, /* Controller 1, offset 1520 (direct) */ 
	0x000105f4, /* Controller 1, offset 1524 (direct) */ 
	0x000105f8, /* Controller 1, offset 1528 (direct) */ 
	0x000105fc, /* Controller 1, offset 1532 (direct) */ 
	0x00010600, /* Controller 1, offset 1536 (direct) */ 
	0x00010604, /* Controller 1, offset 1540 (direct) */ 
	0x00010608, /* Controller 1, offset 1544 (direct) */ 
	0x0001060c, /* Controller 1, offset 1548 (direct) */ 
	0x00010610, /* Controller 1, offset 1552 (direct) */ 
	0x00010614, /* Controller 1, offset 1556 (direct) */ 
	0x00010618, /* Controller 1, offset 1560 (direct) */ 
	0x0001061c, /* Controller 1, offset 1564 (direct) */ 
	0x00010620, /* Controller 1, offset 1568 (direct) */ 
	0x00010624, /* Controller 1, offset 1572 (direct) */ 
	0x00010628, /* Controller 1, offset 1576 (direct) */ 
	0x0001062c, /* Controller 1, offset 1580 (direct) */ 
	0x00010630, /* Controller 1, offset 1584 (direct) */ 
	0x00010634, /* Controller 1, offset 1588 (direct) */ 
	0x00010638, /* Controller 1, offset 1592 (direct) */ 
	0x0001063c, /* Controller 1, offset 1596 (direct) */ 
	0x00010640, /* Controller 1, offset 1600 (direct) */ 
	0x00010644, /* Controller 1, offset 1604 (direct) */ 
	0x00010648, /* Controller 1, offset 1608 (direct) */ 
	0x0001064c, /* Controller 1, offset 1612 (direct) */ 
	0x00010650, /* Controller 1, offset 1616 (direct) */ 
	0x00010654, /* Controller 1, offset 1620 (direct) */ 
	0x00010658, /* Controller 1, offset 1624 (direct) */ 
	0x0001065c, /* Controller 1, offset 1628 (direct) */ 
	0x00010660, /* Controller 1, offset 1632 (direct) */ 
	0x00010664, /* Controller 1, offset 1636 (direct) */ 
	0x00010668, /* Controller 1, offset 1640 (direct) */ 
	0x0001066c, /* Controller 1, offset 1644 (direct) */ 
	0x00010670, /* Controller 1, offset 1648 (direct) */ 
	0x00010674, /* Controller 1, offset 1652 (direct) */ 
	0x00010678, /* Controller 1, offset 1656 (direct) */ 
	0x0001067c, /* Controller 1, offset 1660 (direct) */ 
	0x00010680, /* Controller 1, offset 1664 (direct) */ 
	0x00010684, /* Controller 1, offset 1668 (direct) */ 
	0x00010688, /* Controller 1, offset 1672 (direct) */ 
	0x0001068c, /* Controller 1, offset 1676 (direct) */ 
	0x00010690, /* Controller 1, offset 1680 (direct) */ 
	0x00010694, /* Controller 1, offset 1684 (direct) */ 
	0x00010698, /* Controller 1, offset 1688 (direct) */ 
	0x0001069c, /* Controller 1, offset 1692 (direct) */ 
	0x000106a0, /* Controller 1, offset 1696 (direct) */ 
	0x000106a4, /* Controller 1, offset 1700 (direct) */ 
	0x000106a8, /* Controller 1, offset 1704 (direct) */ 
	0x000106ac, /* Controller 1, offset 1708 (direct) */ 
	0x000106b0, /* Controller 1, offset 1712 (direct) */ 
	0x000106b4, /* Controller 1, offset 1716 (direct) */ 
	0x000106b8, /* Controller 1, offset 1720 (direct) */ 
	0x000106bc, /* Controller 1, offset 1724 (direct) */ 
	0x000106c0, /* Controller 1, offset 1728 (direct) */ 
	0x000106c4, /* Controller 1, offset 1732 (direct) */ 
	0x000106c8, /* Controller 1, offset 1736 (direct) */ 
	0x000106cc, /* Controller 1, offset 1740 (direct) */ 
	0x000106d0, /* Controller 1, offset 1744 (direct) */ 
	0x000106d4, /* Controller 1, offset 1748 (direct) */ 
	0x000106d8, /* Controller 1, offset 1752 (direct) */ 
	0x000106dc, /* Controller 1, offset 1756 (direct) */ 
	0x000106e0, /* Controller 1, offset 1760 (direct) */ 
	0x000106e4, /* Controller 1, offset 1764 (direct) */ 
	0x000106e8, /* Controller 1, offset 1768 (direct) */ 
	0x000106ec, /* Controller 1, offset 1772 (direct) */ 
	0x000106f0, /* Controller 1, offset 1776 (direct) */ 
	0x000106f4, /* Controller 1, offset 1780 (direct) */ 
	0x000106f8, /* Controller 1, offset 1784 (direct) */ 
	0x000106fc, /* Controller 1, offset 1788 (direct) */ 
	0x00010700, /* Controller 1, offset 1792 (direct) */ 
	0x00010704, /* Controller 1, offset 1796 (direct) */ 
	0x00010708, /* Controller 1, offset 1800 (direct) */ 
	0x0001070c, /* Controller 1, offset 1804 (direct) */ 
	0x00010710, /* Controller 1, offset 1808 (direct) */ 
	0x00010714, /* Controller 1, offset 1812 (direct) */ 
	0x00010718, /* Controller 1, offset 1816 (direct) */ 
	0x0001071c, /* Controller 1, offset 1820 (direct) */ 
	0x00010720, /* Controller 1, offset 1824 (direct) */ 
	0x00010724, /* Controller 1, offset 1828 (direct) */ 
	0x00010728, /* Controller 1, offset 1832 (direct) */ 
	0x0001072c, /* Controller 1, offset 1836 (direct) */ 
	0x00010730, /* Controller 1, offset 1840 (direct) */ 
	0x00010734, /* Controller 1, offset 1844 (direct) */ 
	0x00010738, /* Controller 1, offset 1848 (direct) */ 
	0x0001073c, /* Controller 1, offset 1852 (direct) */ 
	0x00010740, /* Controller 1, offset 1856 (direct) */ 
	0x00010744, /* Controller 1, offset 1860 (direct) */ 
	0x00010748, /* Controller 1, offset 1864 (direct) */ 
	0x0001074c, /* Controller 1, offset 1868 (direct) */ 
	0x00010750, /* Controller 1, offset 1872 (direct) */ 
	0x00010754, /* Controller 1, offset 1876 (direct) */ 
	0x00010758, /* Controller 1, offset 1880 (direct) */ 
	0x0001075c, /* Controller 1, offset 1884 (direct) */ 
	0x00010760, /* Controller 1, offset 1888 (direct) */ 
	0x00010764, /* Controller 1, offset 1892 (direct) */ 
	0x00010768, /* Controller 1, offset 1896 (direct) */ 
	0x0001076c, /* Controller 1, offset 1900 (direct) */ 
	0x00010770, /* Controller 1, offset 1904 (direct) */ 
	0x00010774, /* Controller 1, offset 1908 (direct) */ 
	0x00010778, /* Controller 1, offset 1912 (direct) */ 
	0x0001077c, /* Controller 1, offset 1916 (direct) */ 
	0x00010780, /* Controller 1, offset 1920 (direct) */ 
	0x00010784, /* Controller 1, offset 1924 (direct) */ 
	0x00010788, /* Controller 1, offset 1928 (direct) */ 
	0x0001078c, /* Controller 1, offset 1932 (direct) */ 
	0x00010790, /* Controller 1, offset 1936 (direct) */ 
	0x00010794, /* Controller 1, offset 1940 (direct) */ 
	0x00010798, /* Controller 1, offset 1944 (direct) */ 
	0x0001079c, /* Controller 1, offset 1948 (direct) */ 
	0x000107a0, /* Controller 1, offset 1952 (direct) */ 
	0x000107a4, /* Controller 1, offset 1956 (direct) */ 
	0x000107a8, /* Controller 1, offset 1960 (direct) */ 
	0x000107ac, /* Controller 1, offset 1964 (direct) */ 
	0x000107b0, /* Controller 1, offset 1968 (direct) */ 
	0x000107b4, /* Controller 1, offset 1972 (direct) */ 
	0x000107b8, /* Controller 1, offset 1976 (direct) */ 
	0x000107bc, /* Controller 1, offset 1980 (direct) */ 
	0x000107c0, /* Controller 1, offset 1984 (direct) */ 
	0x000107c4, /* Controller 1, offset 1988 (direct) */ 
	0x000107c8, /* Controller 1, offset 1992 (direct) */ 
	0x000107cc, /* Controller 1, offset 1996 (direct) */ 
	0x000107d0, /* Controller 1, offset 2000 (direct) */ 
	0x000107d4, /* Controller 1, offset 2004 (direct) */ 
	0x000107d8, /* Controller 1, offset 2008 (direct) */ 
	0x000107dc, /* Controller 1, offset 2012 (direct) */ 
	0x000107e0, /* Controller 1, offset 2016 (direct) */ 
	0x000107e4, /* Controller 1, offset 2020 (direct) */ 
	0x000107e8, /* Controller 1, offset 2024 (direct) */ 
	0x000107ec, /* Controller 1, offset 2028 (direct) */ 
	0x000107f0, /* Controller 1, offset 2032 (direct) */ 
	0x000107f4, /* Controller 1, offset 2036 (direct) */ 
	0x000107f8, /* Controller 1, offset 2040 (direct) */ 
	0x000107fc, /* Controller 1, offset 2044 (direct) */ 
	0x00010800, /* Controller 1, offset 2048 (direct) */ 
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
	0x00020044, /* Controller 2, offset 68 (direct) */ 
	0x00020048, /* Controller 2, offset 72 (direct) */ 
	0x0002004c, /* Controller 2, offset 76 (direct) */ 
	0x00020050, /* Controller 2, offset 80 (direct) */ 
	0x00020054, /* Controller 2, offset 84 (direct) */ 
	0x00020058, /* Controller 2, offset 88 (direct) */ 
	0x0002005c, /* Controller 2, offset 92 (direct) */ 
	0x00020060, /* Controller 2, offset 96 (direct) */ 
	0x00020064, /* Controller 2, offset 100 (direct) */ 
	0x00020068, /* Controller 2, offset 104 (direct) */ 
	0x0002006c, /* Controller 2, offset 108 (direct) */ 
	0x00020070, /* Controller 2, offset 112 (direct) */ 
	0x00020074, /* Controller 2, offset 116 (direct) */ 
	0x00020078, /* Controller 2, offset 120 (direct) */ 
	0x0002007c, /* Controller 2, offset 124 (direct) */ 
	0x00020080, /* Controller 2, offset 128 (direct) */ 
	0x00020084, /* Controller 2, offset 132 (direct) */ 
	0x00020088, /* Controller 2, offset 136 (direct) */ 
	0x0002008c, /* Controller 2, offset 140 (direct) */ 
	0x00020090, /* Controller 2, offset 144 (direct) */ 
	0x00020094, /* Controller 2, offset 148 (direct) */ 
	0x00020098, /* Controller 2, offset 152 (direct) */ 
	0x0002009c, /* Controller 2, offset 156 (direct) */ 
	0x000200a0, /* Controller 2, offset 160 (direct) */ 
	0x000200a4, /* Controller 2, offset 164 (direct) */ 
	0x000200a8, /* Controller 2, offset 168 (direct) */ 
	0x000200ac, /* Controller 2, offset 172 (direct) */ 
	0x000200b0, /* Controller 2, offset 176 (direct) */ 
	0x000200b4, /* Controller 2, offset 180 (direct) */ 
	0x000200b8, /* Controller 2, offset 184 (direct) */ 
	0x000200bc, /* Controller 2, offset 188 (direct) */ 
	0x000200c0, /* Controller 2, offset 192 (direct) */ 
	0x000200c4, /* Controller 2, offset 196 (direct) */ 
	0x000200c8, /* Controller 2, offset 200 (direct) */ 
	0x000200cc, /* Controller 2, offset 204 (direct) */ 
	0x000200d0, /* Controller 2, offset 208 (direct) */ 
	0x000200d4, /* Controller 2, offset 212 (direct) */ 
	0x000200d8, /* Controller 2, offset 216 (direct) */ 
	0x000200dc, /* Controller 2, offset 220 (direct) */ 
	0x000200e0, /* Controller 2, offset 224 (direct) */ 
	0x000200e4, /* Controller 2, offset 228 (direct) */ 
	0x000200e8, /* Controller 2, offset 232 (direct) */ 
	0x000200ec, /* Controller 2, offset 236 (direct) */ 
	0x000200f0, /* Controller 2, offset 240 (direct) */ 
	0x000200f4, /* Controller 2, offset 244 (direct) */ 
	0x000200f8, /* Controller 2, offset 248 (direct) */ 
	0x000200fc, /* Controller 2, offset 252 (direct) */ 
	0x00020100, /* Controller 2, offset 256 (direct) */ 
	0x00020104, /* Controller 2, offset 260 (direct) */ 
	0x00020108, /* Controller 2, offset 264 (direct) */ 
	0x0002010c, /* Controller 2, offset 268 (direct) */ 
	0x00020110, /* Controller 2, offset 272 (direct) */ 
	0x00020114, /* Controller 2, offset 276 (direct) */ 
	0x00020118, /* Controller 2, offset 280 (direct) */ 
	0x0002011c, /* Controller 2, offset 284 (direct) */ 
	0x00020120, /* Controller 2, offset 288 (direct) */ 
	0x00020124, /* Controller 2, offset 292 (direct) */ 
	0x00020128, /* Controller 2, offset 296 (direct) */ 
	0x0002012c, /* Controller 2, offset 300 (direct) */ 
	0x00020130, /* Controller 2, offset 304 (direct) */ 
	0x00020134, /* Controller 2, offset 308 (direct) */ 
	0x00020138, /* Controller 2, offset 312 (direct) */ 
	0x0002013c, /* Controller 2, offset 316 (direct) */ 
	0x00020140, /* Controller 2, offset 320 (direct) */ 
	0x00020144, /* Controller 2, offset 324 (direct) */ 
	0x00020148, /* Controller 2, offset 328 (direct) */ 
	0x0002014c, /* Controller 2, offset 332 (direct) */ 
	0x00020150, /* Controller 2, offset 336 (direct) */ 
	0x00020154, /* Controller 2, offset 340 (direct) */ 
	0x00020158, /* Controller 2, offset 344 (direct) */ 
	0x0002015c, /* Controller 2, offset 348 (direct) */ 
	0x00020160, /* Controller 2, offset 352 (direct) */ 
	0x00020164, /* Controller 2, offset 356 (direct) */ 
	0x00020168, /* Controller 2, offset 360 (direct) */ 
	0x0002016c, /* Controller 2, offset 364 (direct) */ 
	0x00020170, /* Controller 2, offset 368 (direct) */ 
	0x00020174, /* Controller 2, offset 372 (direct) */ 
	0x00020178, /* Controller 2, offset 376 (direct) */ 
	0x0002017c, /* Controller 2, offset 380 (direct) */ 
	0x00020180, /* Controller 2, offset 384 (direct) */ 
	0x00020184, /* Controller 2, offset 388 (direct) */ 
	0x00020188, /* Controller 2, offset 392 (direct) */ 
	0x0002018c, /* Controller 2, offset 396 (direct) */ 
	0x00020190, /* Controller 2, offset 400 (direct) */ 
	0x00020194, /* Controller 2, offset 404 (direct) */ 
	0x00020198, /* Controller 2, offset 408 (direct) */ 
	0x0002019c, /* Controller 2, offset 412 (direct) */ 
	0x000201a0, /* Controller 2, offset 416 (direct) */ 
	0x000201a4, /* Controller 2, offset 420 (direct) */ 
	0x000201a8, /* Controller 2, offset 424 (direct) */ 
	0x000201ac, /* Controller 2, offset 428 (direct) */ 
	0x000201b0, /* Controller 2, offset 432 (direct) */ 
	0x000201b4, /* Controller 2, offset 436 (direct) */ 
	0x000201b8, /* Controller 2, offset 440 (direct) */ 
	0x000201bc, /* Controller 2, offset 444 (direct) */ 
	0x000201c0, /* Controller 2, offset 448 (direct) */ 
	0x000201c4, /* Controller 2, offset 452 (direct) */ 
	0x000201c8, /* Controller 2, offset 456 (direct) */ 
	0x000201cc, /* Controller 2, offset 460 (direct) */ 
	0x000201d0, /* Controller 2, offset 464 (direct) */ 
	0x000201d4, /* Controller 2, offset 468 (direct) */ 
	0x000201d8, /* Controller 2, offset 472 (direct) */ 
	0x000201dc, /* Controller 2, offset 476 (direct) */ 
	0x000201e0, /* Controller 2, offset 480 (direct) */ 
	0x000201e4, /* Controller 2, offset 484 (direct) */ 
	0x000201e8, /* Controller 2, offset 488 (direct) */ 
	0x000201ec, /* Controller 2, offset 492 (direct) */ 
	0x000201f0, /* Controller 2, offset 496 (direct) */ 
	0x000201f4, /* Controller 2, offset 500 (direct) */ 
	0x000201f8, /* Controller 2, offset 504 (direct) */ 
	0x000201fc, /* Controller 2, offset 508 (direct) */ 
	0x00020200, /* Controller 2, offset 512 (direct) */ 
	0x00020204, /* Controller 2, offset 516 (direct) */ 
	0x00020208, /* Controller 2, offset 520 (direct) */ 
	0x0002020c, /* Controller 2, offset 524 (direct) */ 
	0x00020210, /* Controller 2, offset 528 (direct) */ 
	0x00020214, /* Controller 2, offset 532 (direct) */ 
	0x00020218, /* Controller 2, offset 536 (direct) */ 
	0x0002021c, /* Controller 2, offset 540 (direct) */ 
	0x00020220, /* Controller 2, offset 544 (direct) */ 
	0x00020224, /* Controller 2, offset 548 (direct) */ 
	0x00020228, /* Controller 2, offset 552 (direct) */ 
	0x0002022c, /* Controller 2, offset 556 (direct) */ 
	0x00020230, /* Controller 2, offset 560 (direct) */ 
	0x00020234, /* Controller 2, offset 564 (direct) */ 
	0x00020238, /* Controller 2, offset 568 (direct) */ 
	0x0002023c, /* Controller 2, offset 572 (direct) */ 
	0x00020240, /* Controller 2, offset 576 (direct) */ 
	0x00020244, /* Controller 2, offset 580 (direct) */ 
	0x00020248, /* Controller 2, offset 584 (direct) */ 
	0x0002024c, /* Controller 2, offset 588 (direct) */ 
	0x00020250, /* Controller 2, offset 592 (direct) */ 
	0x00020254, /* Controller 2, offset 596 (direct) */ 
	0x00020258, /* Controller 2, offset 600 (direct) */ 
	0x0002025c, /* Controller 2, offset 604 (direct) */ 
	0x00020260, /* Controller 2, offset 608 (direct) */ 
	0x00020264, /* Controller 2, offset 612 (direct) */ 
	0x00020268, /* Controller 2, offset 616 (direct) */ 
	0x0002026c, /* Controller 2, offset 620 (direct) */ 
	0x00020270, /* Controller 2, offset 624 (direct) */ 
	0x00020274, /* Controller 2, offset 628 (direct) */ 
	0x00020278, /* Controller 2, offset 632 (direct) */ 
	0x0002027c, /* Controller 2, offset 636 (direct) */ 
	0x00020280, /* Controller 2, offset 640 (direct) */ 
	0x00020284, /* Controller 2, offset 644 (direct) */ 
	0x00020288, /* Controller 2, offset 648 (direct) */ 
	0x0002028c, /* Controller 2, offset 652 (direct) */ 
	0x00020290, /* Controller 2, offset 656 (direct) */ 
	0x00020294, /* Controller 2, offset 660 (direct) */ 
	0x00020298, /* Controller 2, offset 664 (direct) */ 
	0x0002029c, /* Controller 2, offset 668 (direct) */ 
	0x000202a0, /* Controller 2, offset 672 (direct) */ 
	0x000202a4, /* Controller 2, offset 676 (direct) */ 
	0x000202a8, /* Controller 2, offset 680 (direct) */ 
	0x000202ac, /* Controller 2, offset 684 (direct) */ 
	0x000202b0, /* Controller 2, offset 688 (direct) */ 
	0x000202b4, /* Controller 2, offset 692 (direct) */ 
	0x000202b8, /* Controller 2, offset 696 (direct) */ 
	0x000202bc, /* Controller 2, offset 700 (direct) */ 
	0x000202c0, /* Controller 2, offset 704 (direct) */ 
	0x000202c4, /* Controller 2, offset 708 (direct) */ 
	0x000202c8, /* Controller 2, offset 712 (direct) */ 
	0x000202cc, /* Controller 2, offset 716 (direct) */ 
	0x000202d0, /* Controller 2, offset 720 (direct) */ 
	0x000202d4, /* Controller 2, offset 724 (direct) */ 
	0x000202d8, /* Controller 2, offset 728 (direct) */ 
	0x000202dc, /* Controller 2, offset 732 (direct) */ 
	0x000202e0, /* Controller 2, offset 736 (direct) */ 
	0x000202e4, /* Controller 2, offset 740 (direct) */ 
	0x000202e8, /* Controller 2, offset 744 (direct) */ 
	0x000202ec, /* Controller 2, offset 748 (direct) */ 
	0x000202f0, /* Controller 2, offset 752 (direct) */ 
	0x000202f4, /* Controller 2, offset 756 (direct) */ 
	0x000202f8, /* Controller 2, offset 760 (direct) */ 
	0x000202fc, /* Controller 2, offset 764 (direct) */ 
	0x00020300, /* Controller 2, offset 768 (direct) */ 
	0x00020304, /* Controller 2, offset 772 (direct) */ 
	0x00020308, /* Controller 2, offset 776 (direct) */ 
	0x0002030c, /* Controller 2, offset 780 (direct) */ 
	0x00020310, /* Controller 2, offset 784 (direct) */ 
	0x00020314, /* Controller 2, offset 788 (direct) */ 
	0x00020318, /* Controller 2, offset 792 (direct) */ 
	0x0002031c, /* Controller 2, offset 796 (direct) */ 
	0x00020320, /* Controller 2, offset 800 (direct) */ 
	0x00020324, /* Controller 2, offset 804 (direct) */ 
	0x00020328, /* Controller 2, offset 808 (direct) */ 
	0x0002032c, /* Controller 2, offset 812 (direct) */ 
	0x00020330, /* Controller 2, offset 816 (direct) */ 
	0x00020334, /* Controller 2, offset 820 (direct) */ 
	0x00020338, /* Controller 2, offset 824 (direct) */ 
	0x0002033c, /* Controller 2, offset 828 (direct) */ 
	0x00020340, /* Controller 2, offset 832 (direct) */ 
	0x00020344, /* Controller 2, offset 836 (direct) */ 
	0x00020348, /* Controller 2, offset 840 (direct) */ 
	0x0002034c, /* Controller 2, offset 844 (direct) */ 
	0x00020350, /* Controller 2, offset 848 (direct) */ 
	0x00020354, /* Controller 2, offset 852 (direct) */ 
	0x00020358, /* Controller 2, offset 856 (direct) */ 
	0x0002035c, /* Controller 2, offset 860 (direct) */ 
	0x00020360, /* Controller 2, offset 864 (direct) */ 
	0x00020364, /* Controller 2, offset 868 (direct) */ 
	0x00020368, /* Controller 2, offset 872 (direct) */ 
	0x0002036c, /* Controller 2, offset 876 (direct) */ 
	0x00020370, /* Controller 2, offset 880 (direct) */ 
	0x00020374, /* Controller 2, offset 884 (direct) */ 
	0x00020378, /* Controller 2, offset 888 (direct) */ 
	0x0002037c, /* Controller 2, offset 892 (direct) */ 
	0x00020380, /* Controller 2, offset 896 (direct) */ 
	0x00020384, /* Controller 2, offset 900 (direct) */ 
	0x00020388, /* Controller 2, offset 904 (direct) */ 
	0x0002038c, /* Controller 2, offset 908 (direct) */ 
	0x00020390, /* Controller 2, offset 912 (direct) */ 
	0x00020394, /* Controller 2, offset 916 (direct) */ 
	0x00020398, /* Controller 2, offset 920 (direct) */ 
	0x0002039c, /* Controller 2, offset 924 (direct) */ 
	0x000203a0, /* Controller 2, offset 928 (direct) */ 
	0x000203a4, /* Controller 2, offset 932 (direct) */ 
	0x000203a8, /* Controller 2, offset 936 (direct) */ 
	0x000203ac, /* Controller 2, offset 940 (direct) */ 
	0x000203b0, /* Controller 2, offset 944 (direct) */ 
	0x000203b4, /* Controller 2, offset 948 (direct) */ 
	0x000203b8, /* Controller 2, offset 952 (direct) */ 
	0x000203bc, /* Controller 2, offset 956 (direct) */ 
	0x000203c0, /* Controller 2, offset 960 (direct) */ 
	0x000203c4, /* Controller 2, offset 964 (direct) */ 
	0x000203c8, /* Controller 2, offset 968 (direct) */ 
	0x000203cc, /* Controller 2, offset 972 (direct) */ 
	0x000203d0, /* Controller 2, offset 976 (direct) */ 
	0x000203d4, /* Controller 2, offset 980 (direct) */ 
	0x000203d8, /* Controller 2, offset 984 (direct) */ 
	0x000203dc, /* Controller 2, offset 988 (direct) */ 
	0x000203e0, /* Controller 2, offset 992 (direct) */ 
	0x000203e4, /* Controller 2, offset 996 (direct) */ 
	0x000203e8, /* Controller 2, offset 1000 (direct) */ 
	0x000203ec, /* Controller 2, offset 1004 (direct) */ 
	0x000203f0, /* Controller 2, offset 1008 (direct) */ 
	0x000203f4, /* Controller 2, offset 1012 (direct) */ 
	0x000203f8, /* Controller 2, offset 1016 (direct) */ 
	0x000203fc, /* Controller 2, offset 1020 (direct) */ 
	0x00020400, /* Controller 2, offset 1024 (direct) */ 
	0x00020404, /* Controller 2, offset 1028 (direct) */ 
	0x00020408, /* Controller 2, offset 1032 (direct) */ 
	0x0002040c, /* Controller 2, offset 1036 (direct) */ 
	0x00020410, /* Controller 2, offset 1040 (direct) */ 
	0x00020414, /* Controller 2, offset 1044 (direct) */ 
	0x00020418, /* Controller 2, offset 1048 (direct) */ 
	0x0002041c, /* Controller 2, offset 1052 (direct) */ 
	0x00020420, /* Controller 2, offset 1056 (direct) */ 
	0x00020424, /* Controller 2, offset 1060 (direct) */ 
	0x00020428, /* Controller 2, offset 1064 (direct) */ 
	0x0002042c, /* Controller 2, offset 1068 (direct) */ 
	0x00020430, /* Controller 2, offset 1072 (direct) */ 
	0x00020434, /* Controller 2, offset 1076 (direct) */ 
	0x00020438, /* Controller 2, offset 1080 (direct) */ 
	0x0002043c, /* Controller 2, offset 1084 (direct) */ 
	0x00020440, /* Controller 2, offset 1088 (direct) */ 
	0x00020444, /* Controller 2, offset 1092 (direct) */ 
	0x00020448, /* Controller 2, offset 1096 (direct) */ 
	0x0002044c, /* Controller 2, offset 1100 (direct) */ 
	0x00020450, /* Controller 2, offset 1104 (direct) */ 
	0x00020454, /* Controller 2, offset 1108 (direct) */ 
	0x00020458, /* Controller 2, offset 1112 (direct) */ 
	0x0002045c, /* Controller 2, offset 1116 (direct) */ 
	0x00020460, /* Controller 2, offset 1120 (direct) */ 
	0x00020464, /* Controller 2, offset 1124 (direct) */ 
	0x00020468, /* Controller 2, offset 1128 (direct) */ 
	0x0002046c, /* Controller 2, offset 1132 (direct) */ 
	0x00020470, /* Controller 2, offset 1136 (direct) */ 
	0x00020474, /* Controller 2, offset 1140 (direct) */ 
	0x00020478, /* Controller 2, offset 1144 (direct) */ 
	0x0002047c, /* Controller 2, offset 1148 (direct) */ 
	0x00020480, /* Controller 2, offset 1152 (direct) */ 
	0x00020484, /* Controller 2, offset 1156 (direct) */ 
	0x00020488, /* Controller 2, offset 1160 (direct) */ 
	0x0002048c, /* Controller 2, offset 1164 (direct) */ 
	0x00020490, /* Controller 2, offset 1168 (direct) */ 
	0x00020494, /* Controller 2, offset 1172 (direct) */ 
	0x00020498, /* Controller 2, offset 1176 (direct) */ 
	0x0002049c, /* Controller 2, offset 1180 (direct) */ 
	0x000204a0, /* Controller 2, offset 1184 (direct) */ 
	0x000204a4, /* Controller 2, offset 1188 (direct) */ 
	0x000204a8, /* Controller 2, offset 1192 (direct) */ 
	0x000204ac, /* Controller 2, offset 1196 (direct) */ 
	0x000204b0, /* Controller 2, offset 1200 (direct) */ 
	0x000204b4, /* Controller 2, offset 1204 (direct) */ 
	0x000204b8, /* Controller 2, offset 1208 (direct) */ 
	0x000204bc, /* Controller 2, offset 1212 (direct) */ 
	0x000204c0, /* Controller 2, offset 1216 (direct) */ 
	0x000204c4, /* Controller 2, offset 1220 (direct) */ 
	0x000204c8, /* Controller 2, offset 1224 (direct) */ 
	0x000204cc, /* Controller 2, offset 1228 (direct) */ 
	0x000204d0, /* Controller 2, offset 1232 (direct) */ 
	0x000204d4, /* Controller 2, offset 1236 (direct) */ 
	0x000204d8, /* Controller 2, offset 1240 (direct) */ 
	0x000204dc, /* Controller 2, offset 1244 (direct) */ 
	0x000204e0, /* Controller 2, offset 1248 (direct) */ 
	0x000204e4, /* Controller 2, offset 1252 (direct) */ 
	0x000204e8, /* Controller 2, offset 1256 (direct) */ 
	0x000204ec, /* Controller 2, offset 1260 (direct) */ 
	0x000204f0, /* Controller 2, offset 1264 (direct) */ 
	0x000204f4, /* Controller 2, offset 1268 (direct) */ 
	0x000204f8, /* Controller 2, offset 1272 (direct) */ 
	0x000204fc, /* Controller 2, offset 1276 (direct) */ 
	0x00020500, /* Controller 2, offset 1280 (direct) */ 
	0x00020504, /* Controller 2, offset 1284 (direct) */ 
	0x00020508, /* Controller 2, offset 1288 (direct) */ 
	0x0002050c, /* Controller 2, offset 1292 (direct) */ 
	0x00020510, /* Controller 2, offset 1296 (direct) */ 
	0x00020514, /* Controller 2, offset 1300 (direct) */ 
	0x00020518, /* Controller 2, offset 1304 (direct) */ 
	0x0002051c, /* Controller 2, offset 1308 (direct) */ 
	0x00020520, /* Controller 2, offset 1312 (direct) */ 
	0x00020524, /* Controller 2, offset 1316 (direct) */ 
	0x00020528, /* Controller 2, offset 1320 (direct) */ 
	0x0002052c, /* Controller 2, offset 1324 (direct) */ 
	0x00020530, /* Controller 2, offset 1328 (direct) */ 
	0x00020534, /* Controller 2, offset 1332 (direct) */ 
	0x00020538, /* Controller 2, offset 1336 (direct) */ 
	0x0002053c, /* Controller 2, offset 1340 (direct) */ 
	0x00020540, /* Controller 2, offset 1344 (direct) */ 
	0x00020544, /* Controller 2, offset 1348 (direct) */ 
	0x00020548, /* Controller 2, offset 1352 (direct) */ 
	0x0002054c, /* Controller 2, offset 1356 (direct) */ 
	0x00020550, /* Controller 2, offset 1360 (direct) */ 
	0x00020554, /* Controller 2, offset 1364 (direct) */ 
	0x00020558, /* Controller 2, offset 1368 (direct) */ 
	0x0002055c, /* Controller 2, offset 1372 (direct) */ 
	0x00020560, /* Controller 2, offset 1376 (direct) */ 
	0x00020564, /* Controller 2, offset 1380 (direct) */ 
	0x00020568, /* Controller 2, offset 1384 (direct) */ 
	0x0002056c, /* Controller 2, offset 1388 (direct) */ 
	0x00020570, /* Controller 2, offset 1392 (direct) */ 
	0x00020574, /* Controller 2, offset 1396 (direct) */ 
	0x00020578, /* Controller 2, offset 1400 (direct) */ 
	0x0002057c, /* Controller 2, offset 1404 (direct) */ 
	0x00020580, /* Controller 2, offset 1408 (direct) */ 
	0x00020584, /* Controller 2, offset 1412 (direct) */ 
	0x00020588, /* Controller 2, offset 1416 (direct) */ 
	0x0002058c, /* Controller 2, offset 1420 (direct) */ 
	0x00020590, /* Controller 2, offset 1424 (direct) */ 
	0x00020594, /* Controller 2, offset 1428 (direct) */ 
	0x00020598, /* Controller 2, offset 1432 (direct) */ 
	0x0002059c, /* Controller 2, offset 1436 (direct) */ 
	0x000205a0, /* Controller 2, offset 1440 (direct) */ 
	0x000205a4, /* Controller 2, offset 1444 (direct) */ 
	0x000205a8, /* Controller 2, offset 1448 (direct) */ 
	0x000205ac, /* Controller 2, offset 1452 (direct) */ 
	0x000205b0, /* Controller 2, offset 1456 (direct) */ 
	0x000205b4, /* Controller 2, offset 1460 (direct) */ 
	0x000205b8, /* Controller 2, offset 1464 (direct) */ 
	0x000205bc, /* Controller 2, offset 1468 (direct) */ 
	0x000205c0, /* Controller 2, offset 1472 (direct) */ 
	0x000205c4, /* Controller 2, offset 1476 (direct) */ 
	0x000205c8, /* Controller 2, offset 1480 (direct) */ 
	0x000205cc, /* Controller 2, offset 1484 (direct) */ 
	0x000205d0, /* Controller 2, offset 1488 (direct) */ 
	0x000205d4, /* Controller 2, offset 1492 (direct) */ 
	0x000205d8, /* Controller 2, offset 1496 (direct) */ 
	0x000205dc, /* Controller 2, offset 1500 (direct) */ 
	0x000205e0, /* Controller 2, offset 1504 (direct) */ 
	0x000205e4, /* Controller 2, offset 1508 (direct) */ 
	0x000205e8, /* Controller 2, offset 1512 (direct) */ 
	0x000205ec, /* Controller 2, offset 1516 (direct) */ 
	0x000205f0, /* Controller 2, offset 1520 (direct) */ 
	0x000205f4, /* Controller 2, offset 1524 (direct) */ 
	0x000205f8, /* Controller 2, offset 1528 (direct) */ 
	0x000205fc, /* Controller 2, offset 1532 (direct) */ 
	0x00020600, /* Controller 2, offset 1536 (direct) */ 
	0x00020604, /* Controller 2, offset 1540 (direct) */ 
	0x00020608, /* Controller 2, offset 1544 (direct) */ 
	0x0002060c, /* Controller 2, offset 1548 (direct) */ 
	0x00020610, /* Controller 2, offset 1552 (direct) */ 
	0x00020614, /* Controller 2, offset 1556 (direct) */ 
	0x00020618, /* Controller 2, offset 1560 (direct) */ 
	0x0002061c, /* Controller 2, offset 1564 (direct) */ 
	0x00020620, /* Controller 2, offset 1568 (direct) */ 
	0x00020624, /* Controller 2, offset 1572 (direct) */ 
	0x00020628, /* Controller 2, offset 1576 (direct) */ 
	0x0002062c, /* Controller 2, offset 1580 (direct) */ 
	0x00020630, /* Controller 2, offset 1584 (direct) */ 
	0x00020634, /* Controller 2, offset 1588 (direct) */ 
	0x00020638, /* Controller 2, offset 1592 (direct) */ 
	0x0002063c, /* Controller 2, offset 1596 (direct) */ 
	0x00020640, /* Controller 2, offset 1600 (direct) */ 
	0x00020644, /* Controller 2, offset 1604 (direct) */ 
	0x00020648, /* Controller 2, offset 1608 (direct) */ 
	0x0002064c, /* Controller 2, offset 1612 (direct) */ 
	0x00020650, /* Controller 2, offset 1616 (direct) */ 
	0x00020654, /* Controller 2, offset 1620 (direct) */ 
	0x00020658, /* Controller 2, offset 1624 (direct) */ 
	0x0002065c, /* Controller 2, offset 1628 (direct) */ 
	0x00020660, /* Controller 2, offset 1632 (direct) */ 
	0x00020664, /* Controller 2, offset 1636 (direct) */ 
	0x00020668, /* Controller 2, offset 1640 (direct) */ 
	0x0002066c, /* Controller 2, offset 1644 (direct) */ 
	0x00020670, /* Controller 2, offset 1648 (direct) */ 
	0x00020674, /* Controller 2, offset 1652 (direct) */ 
	0x00020678, /* Controller 2, offset 1656 (direct) */ 
	0x0002067c, /* Controller 2, offset 1660 (direct) */ 
	0x00020680, /* Controller 2, offset 1664 (direct) */ 
	0x00020684, /* Controller 2, offset 1668 (direct) */ 
	0x00020688, /* Controller 2, offset 1672 (direct) */ 
	0x0002068c, /* Controller 2, offset 1676 (direct) */ 
	0x00020690, /* Controller 2, offset 1680 (direct) */ 
	0x00020694, /* Controller 2, offset 1684 (direct) */ 
	0x00020698, /* Controller 2, offset 1688 (direct) */ 
	0x0002069c, /* Controller 2, offset 1692 (direct) */ 
	0x000206a0, /* Controller 2, offset 1696 (direct) */ 
	0x000206a4, /* Controller 2, offset 1700 (direct) */ 
	0x000206a8, /* Controller 2, offset 1704 (direct) */ 
	0x000206ac, /* Controller 2, offset 1708 (direct) */ 
	0x000206b0, /* Controller 2, offset 1712 (direct) */ 
	0x000206b4, /* Controller 2, offset 1716 (direct) */ 
	0x000206b8, /* Controller 2, offset 1720 (direct) */ 
	0x000206bc, /* Controller 2, offset 1724 (direct) */ 
	0x000206c0, /* Controller 2, offset 1728 (direct) */ 
	0x000206c4, /* Controller 2, offset 1732 (direct) */ 
	0x000206c8, /* Controller 2, offset 1736 (direct) */ 
	0x000206cc, /* Controller 2, offset 1740 (direct) */ 
	0x000206d0, /* Controller 2, offset 1744 (direct) */ 
	0x000206d4, /* Controller 2, offset 1748 (direct) */ 
	0x000206d8, /* Controller 2, offset 1752 (direct) */ 
	0x000206dc, /* Controller 2, offset 1756 (direct) */ 
	0x000206e0, /* Controller 2, offset 1760 (direct) */ 
	0x000206e4, /* Controller 2, offset 1764 (direct) */ 
	0x000206e8, /* Controller 2, offset 1768 (direct) */ 
	0x000206ec, /* Controller 2, offset 1772 (direct) */ 
	0x000206f0, /* Controller 2, offset 1776 (direct) */ 
	0x000206f4, /* Controller 2, offset 1780 (direct) */ 
	0x000206f8, /* Controller 2, offset 1784 (direct) */ 
	0x000206fc, /* Controller 2, offset 1788 (direct) */ 
	0x00020700, /* Controller 2, offset 1792 (direct) */ 
	0x00020704, /* Controller 2, offset 1796 (direct) */ 
	0x00020708, /* Controller 2, offset 1800 (direct) */ 
	0x0002070c, /* Controller 2, offset 1804 (direct) */ 
	0x00020710, /* Controller 2, offset 1808 (direct) */ 
	0x00020714, /* Controller 2, offset 1812 (direct) */ 
	0x00020718, /* Controller 2, offset 1816 (direct) */ 
	0x0002071c, /* Controller 2, offset 1820 (direct) */ 
	0x00020720, /* Controller 2, offset 1824 (direct) */ 
	0x00020724, /* Controller 2, offset 1828 (direct) */ 
	0x00020728, /* Controller 2, offset 1832 (direct) */ 
	0x0002072c, /* Controller 2, offset 1836 (direct) */ 
	0x00020730, /* Controller 2, offset 1840 (direct) */ 
	0x00020734, /* Controller 2, offset 1844 (direct) */ 
	0x00020738, /* Controller 2, offset 1848 (direct) */ 
	0x0002073c, /* Controller 2, offset 1852 (direct) */ 
	0x00020740, /* Controller 2, offset 1856 (direct) */ 
	0x00020744, /* Controller 2, offset 1860 (direct) */ 
	0x00020748, /* Controller 2, offset 1864 (direct) */ 
	0x0002074c, /* Controller 2, offset 1868 (direct) */ 
	0x00020750, /* Controller 2, offset 1872 (direct) */ 
	0x00020754, /* Controller 2, offset 1876 (direct) */ 
	0x00020758, /* Controller 2, offset 1880 (direct) */ 
	0x0002075c, /* Controller 2, offset 1884 (direct) */ 
	0x00020760, /* Controller 2, offset 1888 (direct) */ 
	0x00020764, /* Controller 2, offset 1892 (direct) */ 
	0x00020768, /* Controller 2, offset 1896 (direct) */ 
	0x0002076c, /* Controller 2, offset 1900 (direct) */ 
	0x00020770, /* Controller 2, offset 1904 (direct) */ 
	0x00020774, /* Controller 2, offset 1908 (direct) */ 
	0x00020778, /* Controller 2, offset 1912 (direct) */ 
	0x0002077c, /* Controller 2, offset 1916 (direct) */ 
	0x00020780, /* Controller 2, offset 1920 (direct) */ 
	0x00020784, /* Controller 2, offset 1924 (direct) */ 
	0x00020788, /* Controller 2, offset 1928 (direct) */ 
	0x0002078c, /* Controller 2, offset 1932 (direct) */ 
	0x00020790, /* Controller 2, offset 1936 (direct) */ 
	0x00020794, /* Controller 2, offset 1940 (direct) */ 
	0x00020798, /* Controller 2, offset 1944 (direct) */ 
	0x0002079c, /* Controller 2, offset 1948 (direct) */ 
	0x000207a0, /* Controller 2, offset 1952 (direct) */ 
	0x000207a4, /* Controller 2, offset 1956 (direct) */ 
	0x000207a8, /* Controller 2, offset 1960 (direct) */ 
	0x000207ac, /* Controller 2, offset 1964 (direct) */ 
	0x000207b0, /* Controller 2, offset 1968 (direct) */ 
	0x000207b4, /* Controller 2, offset 1972 (direct) */ 
	0x000207b8, /* Controller 2, offset 1976 (direct) */ 
	0x000207bc, /* Controller 2, offset 1980 (direct) */ 
	0x000207c0, /* Controller 2, offset 1984 (direct) */ 
	0x000207c4, /* Controller 2, offset 1988 (direct) */ 
	0x000207c8, /* Controller 2, offset 1992 (direct) */ 
	0x000207cc, /* Controller 2, offset 1996 (direct) */ 
	0x000207d0, /* Controller 2, offset 2000 (direct) */ 
	0x000207d4, /* Controller 2, offset 2004 (direct) */ 
	0x000207d8, /* Controller 2, offset 2008 (direct) */ 
	0x000207dc, /* Controller 2, offset 2012 (direct) */ 
	0x000207e0, /* Controller 2, offset 2016 (direct) */ 
	0x000207e4, /* Controller 2, offset 2020 (direct) */ 
	0x000207e8, /* Controller 2, offset 2024 (direct) */ 
	0x000207ec, /* Controller 2, offset 2028 (direct) */ 
	0x000207f0, /* Controller 2, offset 2032 (direct) */ 
	0x000207f4, /* Controller 2, offset 2036 (direct) */ 
	0x000207f8, /* Controller 2, offset 2040 (direct) */ 
	0x000207fc, /* Controller 2, offset 2044 (direct) */ 
	0x00020800, /* Controller 2, offset 2048 (direct) */ 
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
	0x00030044, /* Controller 3, offset 68 (direct) */ 
	0x00030048, /* Controller 3, offset 72 (direct) */ 
	0x0003004c, /* Controller 3, offset 76 (direct) */ 
	0x00030050, /* Controller 3, offset 80 (direct) */ 
	0x00030054, /* Controller 3, offset 84 (direct) */ 
	0x00030058, /* Controller 3, offset 88 (direct) */ 
	0x0003005c, /* Controller 3, offset 92 (direct) */ 
	0x00030060, /* Controller 3, offset 96 (direct) */ 
	0x00030064, /* Controller 3, offset 100 (direct) */ 
	0x00030068, /* Controller 3, offset 104 (direct) */ 
	0x0003006c, /* Controller 3, offset 108 (direct) */ 
	0x00030070, /* Controller 3, offset 112 (direct) */ 
	0x00030074, /* Controller 3, offset 116 (direct) */ 
	0x00030078, /* Controller 3, offset 120 (direct) */ 
	0x0003007c, /* Controller 3, offset 124 (direct) */ 
	0x00030080, /* Controller 3, offset 128 (direct) */ 
	0x00030084, /* Controller 3, offset 132 (direct) */ 
	0x00030088, /* Controller 3, offset 136 (direct) */ 
	0x0003008c, /* Controller 3, offset 140 (direct) */ 
	0x00030090, /* Controller 3, offset 144 (direct) */ 
	0x00030094, /* Controller 3, offset 148 (direct) */ 
	0x00030098, /* Controller 3, offset 152 (direct) */ 
	0x0003009c, /* Controller 3, offset 156 (direct) */ 
	0x000300a0, /* Controller 3, offset 160 (direct) */ 
	0x000300a4, /* Controller 3, offset 164 (direct) */ 
	0x000300a8, /* Controller 3, offset 168 (direct) */ 
	0x000300ac, /* Controller 3, offset 172 (direct) */ 
	0x000300b0, /* Controller 3, offset 176 (direct) */ 
	0x000300b4, /* Controller 3, offset 180 (direct) */ 
	0x000300b8, /* Controller 3, offset 184 (direct) */ 
	0x000300bc, /* Controller 3, offset 188 (direct) */ 
	0x000300c0, /* Controller 3, offset 192 (direct) */ 
	0x000300c4, /* Controller 3, offset 196 (direct) */ 
	0x000300c8, /* Controller 3, offset 200 (direct) */ 
	0x000300cc, /* Controller 3, offset 204 (direct) */ 
	0x000300d0, /* Controller 3, offset 208 (direct) */ 
	0x000300d4, /* Controller 3, offset 212 (direct) */ 
	0x000300d8, /* Controller 3, offset 216 (direct) */ 
	0x000300dc, /* Controller 3, offset 220 (direct) */ 
	0x000300e0, /* Controller 3, offset 224 (direct) */ 
	0x000300e4, /* Controller 3, offset 228 (direct) */ 
	0x000300e8, /* Controller 3, offset 232 (direct) */ 
	0x000300ec, /* Controller 3, offset 236 (direct) */ 
	0x000300f0, /* Controller 3, offset 240 (direct) */ 
	0x000300f4, /* Controller 3, offset 244 (direct) */ 
	0x000300f8, /* Controller 3, offset 248 (direct) */ 
	0x000300fc, /* Controller 3, offset 252 (direct) */ 
	0x00030100, /* Controller 3, offset 256 (direct) */ 
	0x00030104, /* Controller 3, offset 260 (direct) */ 
	0x00030108, /* Controller 3, offset 264 (direct) */ 
	0x0003010c, /* Controller 3, offset 268 (direct) */ 
	0x00030110, /* Controller 3, offset 272 (direct) */ 
	0x00030114, /* Controller 3, offset 276 (direct) */ 
	0x00030118, /* Controller 3, offset 280 (direct) */ 
	0x0003011c, /* Controller 3, offset 284 (direct) */ 
	0x00030120, /* Controller 3, offset 288 (direct) */ 
	0x00030124, /* Controller 3, offset 292 (direct) */ 
	0x00030128, /* Controller 3, offset 296 (direct) */ 
	0x0003012c, /* Controller 3, offset 300 (direct) */ 
	0x00030130, /* Controller 3, offset 304 (direct) */ 
	0x00030134, /* Controller 3, offset 308 (direct) */ 
	0x00030138, /* Controller 3, offset 312 (direct) */ 
	0x0003013c, /* Controller 3, offset 316 (direct) */ 
	0x00030140, /* Controller 3, offset 320 (direct) */ 
	0x00030144, /* Controller 3, offset 324 (direct) */ 
	0x00030148, /* Controller 3, offset 328 (direct) */ 
	0x0003014c, /* Controller 3, offset 332 (direct) */ 
	0x00030150, /* Controller 3, offset 336 (direct) */ 
	0x00030154, /* Controller 3, offset 340 (direct) */ 
	0x00030158, /* Controller 3, offset 344 (direct) */ 
	0x0003015c, /* Controller 3, offset 348 (direct) */ 
	0x00030160, /* Controller 3, offset 352 (direct) */ 
	0x00030164, /* Controller 3, offset 356 (direct) */ 
	0x00030168, /* Controller 3, offset 360 (direct) */ 
	0x0003016c, /* Controller 3, offset 364 (direct) */ 
	0x00030170, /* Controller 3, offset 368 (direct) */ 
	0x00030174, /* Controller 3, offset 372 (direct) */ 
	0x00030178, /* Controller 3, offset 376 (direct) */ 
	0x0003017c, /* Controller 3, offset 380 (direct) */ 
	0x00030180, /* Controller 3, offset 384 (direct) */ 
	0x00030184, /* Controller 3, offset 388 (direct) */ 
	0x00030188, /* Controller 3, offset 392 (direct) */ 
	0x0003018c, /* Controller 3, offset 396 (direct) */ 
	0x00030190, /* Controller 3, offset 400 (direct) */ 
	0x00030194, /* Controller 3, offset 404 (direct) */ 
	0x00030198, /* Controller 3, offset 408 (direct) */ 
	0x0003019c, /* Controller 3, offset 412 (direct) */ 
	0x000301a0, /* Controller 3, offset 416 (direct) */ 
	0x000301a4, /* Controller 3, offset 420 (direct) */ 
	0x000301a8, /* Controller 3, offset 424 (direct) */ 
	0x000301ac, /* Controller 3, offset 428 (direct) */ 
	0x000301b0, /* Controller 3, offset 432 (direct) */ 
	0x000301b4, /* Controller 3, offset 436 (direct) */ 
	0x000301b8, /* Controller 3, offset 440 (direct) */ 
	0x000301bc, /* Controller 3, offset 444 (direct) */ 
	0x000301c0, /* Controller 3, offset 448 (direct) */ 
	0x000301c4, /* Controller 3, offset 452 (direct) */ 
	0x000301c8, /* Controller 3, offset 456 (direct) */ 
	0x000301cc, /* Controller 3, offset 460 (direct) */ 
	0x000301d0, /* Controller 3, offset 464 (direct) */ 
	0x000301d4, /* Controller 3, offset 468 (direct) */ 
	0x000301d8, /* Controller 3, offset 472 (direct) */ 
	0x000301dc, /* Controller 3, offset 476 (direct) */ 
	0x000301e0, /* Controller 3, offset 480 (direct) */ 
	0x000301e4, /* Controller 3, offset 484 (direct) */ 
	0x000301e8, /* Controller 3, offset 488 (direct) */ 
	0x000301ec, /* Controller 3, offset 492 (direct) */ 
	0x000301f0, /* Controller 3, offset 496 (direct) */ 
	0x000301f4, /* Controller 3, offset 500 (direct) */ 
	0x000301f8, /* Controller 3, offset 504 (direct) */ 
	0x000301fc, /* Controller 3, offset 508 (direct) */ 
	0x00030200, /* Controller 3, offset 512 (direct) */ 
	0x00030204, /* Controller 3, offset 516 (direct) */ 
	0x00030208, /* Controller 3, offset 520 (direct) */ 
	0x0003020c, /* Controller 3, offset 524 (direct) */ 
	0x00030210, /* Controller 3, offset 528 (direct) */ 
	0x00030214, /* Controller 3, offset 532 (direct) */ 
	0x00030218, /* Controller 3, offset 536 (direct) */ 
	0x0003021c, /* Controller 3, offset 540 (direct) */ 
	0x00030220, /* Controller 3, offset 544 (direct) */ 
	0x00030224, /* Controller 3, offset 548 (direct) */ 
	0x00030228, /* Controller 3, offset 552 (direct) */ 
	0x0003022c, /* Controller 3, offset 556 (direct) */ 
	0x00030230, /* Controller 3, offset 560 (direct) */ 
	0x00030234, /* Controller 3, offset 564 (direct) */ 
	0x00030238, /* Controller 3, offset 568 (direct) */ 
	0x0003023c, /* Controller 3, offset 572 (direct) */ 
	0x00030240, /* Controller 3, offset 576 (direct) */ 
	0x00030244, /* Controller 3, offset 580 (direct) */ 
	0x00030248, /* Controller 3, offset 584 (direct) */ 
	0x0003024c, /* Controller 3, offset 588 (direct) */ 
	0x00030250, /* Controller 3, offset 592 (direct) */ 
	0x00030254, /* Controller 3, offset 596 (direct) */ 
	0x00030258, /* Controller 3, offset 600 (direct) */ 
	0x0003025c, /* Controller 3, offset 604 (direct) */ 
	0x00030260, /* Controller 3, offset 608 (direct) */ 
	0x00030264, /* Controller 3, offset 612 (direct) */ 
	0x00030268, /* Controller 3, offset 616 (direct) */ 
	0x0003026c, /* Controller 3, offset 620 (direct) */ 
	0x00030270, /* Controller 3, offset 624 (direct) */ 
	0x00030274, /* Controller 3, offset 628 (direct) */ 
	0x00030278, /* Controller 3, offset 632 (direct) */ 
	0x0003027c, /* Controller 3, offset 636 (direct) */ 
	0x00030280, /* Controller 3, offset 640 (direct) */ 
	0x00030284, /* Controller 3, offset 644 (direct) */ 
	0x00030288, /* Controller 3, offset 648 (direct) */ 
	0x0003028c, /* Controller 3, offset 652 (direct) */ 
	0x00030290, /* Controller 3, offset 656 (direct) */ 
	0x00030294, /* Controller 3, offset 660 (direct) */ 
	0x00030298, /* Controller 3, offset 664 (direct) */ 
	0x0003029c, /* Controller 3, offset 668 (direct) */ 
	0x000302a0, /* Controller 3, offset 672 (direct) */ 
	0x000302a4, /* Controller 3, offset 676 (direct) */ 
	0x000302a8, /* Controller 3, offset 680 (direct) */ 
	0x000302ac, /* Controller 3, offset 684 (direct) */ 
	0x000302b0, /* Controller 3, offset 688 (direct) */ 
	0x000302b4, /* Controller 3, offset 692 (direct) */ 
	0x000302b8, /* Controller 3, offset 696 (direct) */ 
	0x000302bc, /* Controller 3, offset 700 (direct) */ 
	0x000302c0, /* Controller 3, offset 704 (direct) */ 
	0x000302c4, /* Controller 3, offset 708 (direct) */ 
	0x000302c8, /* Controller 3, offset 712 (direct) */ 
	0x000302cc, /* Controller 3, offset 716 (direct) */ 
	0x000302d0, /* Controller 3, offset 720 (direct) */ 
	0x000302d4, /* Controller 3, offset 724 (direct) */ 
	0x000302d8, /* Controller 3, offset 728 (direct) */ 
	0x000302dc, /* Controller 3, offset 732 (direct) */ 
	0x000302e0, /* Controller 3, offset 736 (direct) */ 
	0x000302e4, /* Controller 3, offset 740 (direct) */ 
	0x000302e8, /* Controller 3, offset 744 (direct) */ 
	0x000302ec, /* Controller 3, offset 748 (direct) */ 
	0x000302f0, /* Controller 3, offset 752 (direct) */ 
	0x000302f4, /* Controller 3, offset 756 (direct) */ 
	0x000302f8, /* Controller 3, offset 760 (direct) */ 
	0x000302fc, /* Controller 3, offset 764 (direct) */ 
	0x00030300, /* Controller 3, offset 768 (direct) */ 
	0x00030304, /* Controller 3, offset 772 (direct) */ 
	0x00030308, /* Controller 3, offset 776 (direct) */ 
	0x0003030c, /* Controller 3, offset 780 (direct) */ 
	0x00030310, /* Controller 3, offset 784 (direct) */ 
	0x00030314, /* Controller 3, offset 788 (direct) */ 
	0x00030318, /* Controller 3, offset 792 (direct) */ 
	0x0003031c, /* Controller 3, offset 796 (direct) */ 
	0x00030320, /* Controller 3, offset 800 (direct) */ 
	0x00030324, /* Controller 3, offset 804 (direct) */ 
	0x00030328, /* Controller 3, offset 808 (direct) */ 
	0x0003032c, /* Controller 3, offset 812 (direct) */ 
	0x00030330, /* Controller 3, offset 816 (direct) */ 
	0x00030334, /* Controller 3, offset 820 (direct) */ 
	0x00030338, /* Controller 3, offset 824 (direct) */ 
	0x0003033c, /* Controller 3, offset 828 (direct) */ 
	0x00030340, /* Controller 3, offset 832 (direct) */ 
	0x00030344, /* Controller 3, offset 836 (direct) */ 
	0x00030348, /* Controller 3, offset 840 (direct) */ 
	0x0003034c, /* Controller 3, offset 844 (direct) */ 
	0x00030350, /* Controller 3, offset 848 (direct) */ 
	0x00030354, /* Controller 3, offset 852 (direct) */ 
	0x00030358, /* Controller 3, offset 856 (direct) */ 
	0x0003035c, /* Controller 3, offset 860 (direct) */ 
	0x00030360, /* Controller 3, offset 864 (direct) */ 
	0x00030364, /* Controller 3, offset 868 (direct) */ 
	0x00030368, /* Controller 3, offset 872 (direct) */ 
	0x0003036c, /* Controller 3, offset 876 (direct) */ 
	0x00030370, /* Controller 3, offset 880 (direct) */ 
	0x00030374, /* Controller 3, offset 884 (direct) */ 
	0x00030378, /* Controller 3, offset 888 (direct) */ 
	0x0003037c, /* Controller 3, offset 892 (direct) */ 
	0x00030380, /* Controller 3, offset 896 (direct) */ 
	0x00030384, /* Controller 3, offset 900 (direct) */ 
	0x00030388, /* Controller 3, offset 904 (direct) */ 
	0x0003038c, /* Controller 3, offset 908 (direct) */ 
	0x00030390, /* Controller 3, offset 912 (direct) */ 
	0x00030394, /* Controller 3, offset 916 (direct) */ 
	0x00030398, /* Controller 3, offset 920 (direct) */ 
	0x0003039c, /* Controller 3, offset 924 (direct) */ 
	0x000303a0, /* Controller 3, offset 928 (direct) */ 
	0x000303a4, /* Controller 3, offset 932 (direct) */ 
	0x000303a8, /* Controller 3, offset 936 (direct) */ 
	0x000303ac, /* Controller 3, offset 940 (direct) */ 
	0x000303b0, /* Controller 3, offset 944 (direct) */ 
	0x000303b4, /* Controller 3, offset 948 (direct) */ 
	0x000303b8, /* Controller 3, offset 952 (direct) */ 
	0x000303bc, /* Controller 3, offset 956 (direct) */ 
	0x000303c0, /* Controller 3, offset 960 (direct) */ 
	0x000303c4, /* Controller 3, offset 964 (direct) */ 
	0x000303c8, /* Controller 3, offset 968 (direct) */ 
	0x000303cc, /* Controller 3, offset 972 (direct) */ 
	0x000303d0, /* Controller 3, offset 976 (direct) */ 
	0x000303d4, /* Controller 3, offset 980 (direct) */ 
	0x000303d8, /* Controller 3, offset 984 (direct) */ 
	0x000303dc, /* Controller 3, offset 988 (direct) */ 
	0x000303e0, /* Controller 3, offset 992 (direct) */ 
	0x000303e4, /* Controller 3, offset 996 (direct) */ 
	0x000303e8, /* Controller 3, offset 1000 (direct) */ 
	0x000303ec, /* Controller 3, offset 1004 (direct) */ 
	0x000303f0, /* Controller 3, offset 1008 (direct) */ 
	0x000303f4, /* Controller 3, offset 1012 (direct) */ 
	0x000303f8, /* Controller 3, offset 1016 (direct) */ 
	0x000303fc, /* Controller 3, offset 1020 (direct) */ 
	0x00030400, /* Controller 3, offset 1024 (direct) */ 
	0x00030404, /* Controller 3, offset 1028 (direct) */ 
	0x00030408, /* Controller 3, offset 1032 (direct) */ 
	0x0003040c, /* Controller 3, offset 1036 (direct) */ 
	0x00030410, /* Controller 3, offset 1040 (direct) */ 
	0x00030414, /* Controller 3, offset 1044 (direct) */ 
	0x00030418, /* Controller 3, offset 1048 (direct) */ 
	0x0003041c, /* Controller 3, offset 1052 (direct) */ 
	0x00030420, /* Controller 3, offset 1056 (direct) */ 
	0x00030424, /* Controller 3, offset 1060 (direct) */ 
	0x00030428, /* Controller 3, offset 1064 (direct) */ 
	0x0003042c, /* Controller 3, offset 1068 (direct) */ 
	0x00030430, /* Controller 3, offset 1072 (direct) */ 
	0x00030434, /* Controller 3, offset 1076 (direct) */ 
	0x00030438, /* Controller 3, offset 1080 (direct) */ 
	0x0003043c, /* Controller 3, offset 1084 (direct) */ 
	0x00030440, /* Controller 3, offset 1088 (direct) */ 
	0x00030444, /* Controller 3, offset 1092 (direct) */ 
	0x00030448, /* Controller 3, offset 1096 (direct) */ 
	0x0003044c, /* Controller 3, offset 1100 (direct) */ 
	0x00030450, /* Controller 3, offset 1104 (direct) */ 
	0x00030454, /* Controller 3, offset 1108 (direct) */ 
	0x00030458, /* Controller 3, offset 1112 (direct) */ 
	0x0003045c, /* Controller 3, offset 1116 (direct) */ 
	0x00030460, /* Controller 3, offset 1120 (direct) */ 
	0x00030464, /* Controller 3, offset 1124 (direct) */ 
	0x00030468, /* Controller 3, offset 1128 (direct) */ 
	0x0003046c, /* Controller 3, offset 1132 (direct) */ 
	0x00030470, /* Controller 3, offset 1136 (direct) */ 
	0x00030474, /* Controller 3, offset 1140 (direct) */ 
	0x00030478, /* Controller 3, offset 1144 (direct) */ 
	0x0003047c, /* Controller 3, offset 1148 (direct) */ 
	0x00030480, /* Controller 3, offset 1152 (direct) */ 
	0x00030484, /* Controller 3, offset 1156 (direct) */ 
	0x00030488, /* Controller 3, offset 1160 (direct) */ 
	0x0003048c, /* Controller 3, offset 1164 (direct) */ 
	0x00030490, /* Controller 3, offset 1168 (direct) */ 
	0x00030494, /* Controller 3, offset 1172 (direct) */ 
	0x00030498, /* Controller 3, offset 1176 (direct) */ 
	0x0003049c, /* Controller 3, offset 1180 (direct) */ 
	0x000304a0, /* Controller 3, offset 1184 (direct) */ 
	0x000304a4, /* Controller 3, offset 1188 (direct) */ 
	0x000304a8, /* Controller 3, offset 1192 (direct) */ 
	0x000304ac, /* Controller 3, offset 1196 (direct) */ 
	0x000304b0, /* Controller 3, offset 1200 (direct) */ 
	0x000304b4, /* Controller 3, offset 1204 (direct) */ 
	0x000304b8, /* Controller 3, offset 1208 (direct) */ 
	0x000304bc, /* Controller 3, offset 1212 (direct) */ 
	0x000304c0, /* Controller 3, offset 1216 (direct) */ 
	0x000304c4, /* Controller 3, offset 1220 (direct) */ 
	0x000304c8, /* Controller 3, offset 1224 (direct) */ 
	0x000304cc, /* Controller 3, offset 1228 (direct) */ 
	0x000304d0, /* Controller 3, offset 1232 (direct) */ 
	0x000304d4, /* Controller 3, offset 1236 (direct) */ 
	0x000304d8, /* Controller 3, offset 1240 (direct) */ 
	0x000304dc, /* Controller 3, offset 1244 (direct) */ 
	0x000304e0, /* Controller 3, offset 1248 (direct) */ 
	0x000304e4, /* Controller 3, offset 1252 (direct) */ 
	0x000304e8, /* Controller 3, offset 1256 (direct) */ 
	0x000304ec, /* Controller 3, offset 1260 (direct) */ 
	0x000304f0, /* Controller 3, offset 1264 (direct) */ 
	0x000304f4, /* Controller 3, offset 1268 (direct) */ 
	0x000304f8, /* Controller 3, offset 1272 (direct) */ 
	0x000304fc, /* Controller 3, offset 1276 (direct) */ 
	0x00030500, /* Controller 3, offset 1280 (direct) */ 
	0x00030504, /* Controller 3, offset 1284 (direct) */ 
	0x00030508, /* Controller 3, offset 1288 (direct) */ 
	0x0003050c, /* Controller 3, offset 1292 (direct) */ 
	0x00030510, /* Controller 3, offset 1296 (direct) */ 
	0x00030514, /* Controller 3, offset 1300 (direct) */ 
	0x00030518, /* Controller 3, offset 1304 (direct) */ 
	0x0003051c, /* Controller 3, offset 1308 (direct) */ 
	0x00030520, /* Controller 3, offset 1312 (direct) */ 
	0x00030524, /* Controller 3, offset 1316 (direct) */ 
	0x00030528, /* Controller 3, offset 1320 (direct) */ 
	0x0003052c, /* Controller 3, offset 1324 (direct) */ 
	0x00030530, /* Controller 3, offset 1328 (direct) */ 
	0x00030534, /* Controller 3, offset 1332 (direct) */ 
	0x00030538, /* Controller 3, offset 1336 (direct) */ 
	0x0003053c, /* Controller 3, offset 1340 (direct) */ 
	0x00030540, /* Controller 3, offset 1344 (direct) */ 
	0x00030544, /* Controller 3, offset 1348 (direct) */ 
	0x00030548, /* Controller 3, offset 1352 (direct) */ 
	0x0003054c, /* Controller 3, offset 1356 (direct) */ 
	0x00030550, /* Controller 3, offset 1360 (direct) */ 
	0x00030554, /* Controller 3, offset 1364 (direct) */ 
	0x00030558, /* Controller 3, offset 1368 (direct) */ 
	0x0003055c, /* Controller 3, offset 1372 (direct) */ 
	0x00030560, /* Controller 3, offset 1376 (direct) */ 
	0x00030564, /* Controller 3, offset 1380 (direct) */ 
	0x00030568, /* Controller 3, offset 1384 (direct) */ 
	0x0003056c, /* Controller 3, offset 1388 (direct) */ 
	0x00030570, /* Controller 3, offset 1392 (direct) */ 
	0x00030574, /* Controller 3, offset 1396 (direct) */ 
	0x00030578, /* Controller 3, offset 1400 (direct) */ 
	0x0003057c, /* Controller 3, offset 1404 (direct) */ 
	0x00030580, /* Controller 3, offset 1408 (direct) */ 
	0x00030584, /* Controller 3, offset 1412 (direct) */ 
	0x00030588, /* Controller 3, offset 1416 (direct) */ 
	0x0003058c, /* Controller 3, offset 1420 (direct) */ 
	0x00030590, /* Controller 3, offset 1424 (direct) */ 
	0x00030594, /* Controller 3, offset 1428 (direct) */ 
	0x00030598, /* Controller 3, offset 1432 (direct) */ 
	0x0003059c, /* Controller 3, offset 1436 (direct) */ 
	0x000305a0, /* Controller 3, offset 1440 (direct) */ 
	0x000305a4, /* Controller 3, offset 1444 (direct) */ 
	0x000305a8, /* Controller 3, offset 1448 (direct) */ 
	0x000305ac, /* Controller 3, offset 1452 (direct) */ 
	0x000305b0, /* Controller 3, offset 1456 (direct) */ 
	0x000305b4, /* Controller 3, offset 1460 (direct) */ 
	0x000305b8, /* Controller 3, offset 1464 (direct) */ 
	0x000305bc, /* Controller 3, offset 1468 (direct) */ 
	0x000305c0, /* Controller 3, offset 1472 (direct) */ 
	0x000305c4, /* Controller 3, offset 1476 (direct) */ 
	0x000305c8, /* Controller 3, offset 1480 (direct) */ 
	0x000305cc, /* Controller 3, offset 1484 (direct) */ 
	0x000305d0, /* Controller 3, offset 1488 (direct) */ 
	0x000305d4, /* Controller 3, offset 1492 (direct) */ 
	0x000305d8, /* Controller 3, offset 1496 (direct) */ 
	0x000305dc, /* Controller 3, offset 1500 (direct) */ 
	0x000305e0, /* Controller 3, offset 1504 (direct) */ 
	0x000305e4, /* Controller 3, offset 1508 (direct) */ 
	0x000305e8, /* Controller 3, offset 1512 (direct) */ 
	0x000305ec, /* Controller 3, offset 1516 (direct) */ 
	0x000305f0, /* Controller 3, offset 1520 (direct) */ 
	0x000305f4, /* Controller 3, offset 1524 (direct) */ 
	0x000305f8, /* Controller 3, offset 1528 (direct) */ 
	0x000305fc, /* Controller 3, offset 1532 (direct) */ 
	0x00030600, /* Controller 3, offset 1536 (direct) */ 
	0x00030604, /* Controller 3, offset 1540 (direct) */ 
	0x00030608, /* Controller 3, offset 1544 (direct) */ 
	0x0003060c, /* Controller 3, offset 1548 (direct) */ 
	0x00030610, /* Controller 3, offset 1552 (direct) */ 
	0x00030614, /* Controller 3, offset 1556 (direct) */ 
	0x00030618, /* Controller 3, offset 1560 (direct) */ 
	0x0003061c, /* Controller 3, offset 1564 (direct) */ 
	0x00030620, /* Controller 3, offset 1568 (direct) */ 
	0x00030624, /* Controller 3, offset 1572 (direct) */ 
	0x00030628, /* Controller 3, offset 1576 (direct) */ 
	0x0003062c, /* Controller 3, offset 1580 (direct) */ 
	0x00030630, /* Controller 3, offset 1584 (direct) */ 
	0x00030634, /* Controller 3, offset 1588 (direct) */ 
	0x00030638, /* Controller 3, offset 1592 (direct) */ 
	0x0003063c, /* Controller 3, offset 1596 (direct) */ 
	0x00030640, /* Controller 3, offset 1600 (direct) */ 
	0x00030644, /* Controller 3, offset 1604 (direct) */ 
	0x00030648, /* Controller 3, offset 1608 (direct) */ 
	0x0003064c, /* Controller 3, offset 1612 (direct) */ 
	0x00030650, /* Controller 3, offset 1616 (direct) */ 
	0x00030654, /* Controller 3, offset 1620 (direct) */ 
	0x00030658, /* Controller 3, offset 1624 (direct) */ 
	0x0003065c, /* Controller 3, offset 1628 (direct) */ 
	0x00030660, /* Controller 3, offset 1632 (direct) */ 
	0x00030664, /* Controller 3, offset 1636 (direct) */ 
	0x00030668, /* Controller 3, offset 1640 (direct) */ 
	0x0003066c, /* Controller 3, offset 1644 (direct) */ 
	0x00030670, /* Controller 3, offset 1648 (direct) */ 
	0x00030674, /* Controller 3, offset 1652 (direct) */ 
	0x00030678, /* Controller 3, offset 1656 (direct) */ 
	0x0003067c, /* Controller 3, offset 1660 (direct) */ 
	0x00030680, /* Controller 3, offset 1664 (direct) */ 
	0x00030684, /* Controller 3, offset 1668 (direct) */ 
	0x00030688, /* Controller 3, offset 1672 (direct) */ 
	0x0003068c, /* Controller 3, offset 1676 (direct) */ 
	0x00030690, /* Controller 3, offset 1680 (direct) */ 
	0x00030694, /* Controller 3, offset 1684 (direct) */ 
	0x00030698, /* Controller 3, offset 1688 (direct) */ 
	0x0003069c, /* Controller 3, offset 1692 (direct) */ 
	0x000306a0, /* Controller 3, offset 1696 (direct) */ 
	0x000306a4, /* Controller 3, offset 1700 (direct) */ 
	0x000306a8, /* Controller 3, offset 1704 (direct) */ 
	0x000306ac, /* Controller 3, offset 1708 (direct) */ 
	0x000306b0, /* Controller 3, offset 1712 (direct) */ 
	0x000306b4, /* Controller 3, offset 1716 (direct) */ 
	0x000306b8, /* Controller 3, offset 1720 (direct) */ 
	0x000306bc, /* Controller 3, offset 1724 (direct) */ 
	0x000306c0, /* Controller 3, offset 1728 (direct) */ 
	0x000306c4, /* Controller 3, offset 1732 (direct) */ 
	0x000306c8, /* Controller 3, offset 1736 (direct) */ 
	0x000306cc, /* Controller 3, offset 1740 (direct) */ 
	0x000306d0, /* Controller 3, offset 1744 (direct) */ 
	0x000306d4, /* Controller 3, offset 1748 (direct) */ 
	0x000306d8, /* Controller 3, offset 1752 (direct) */ 
	0x000306dc, /* Controller 3, offset 1756 (direct) */ 
	0x000306e0, /* Controller 3, offset 1760 (direct) */ 
	0x000306e4, /* Controller 3, offset 1764 (direct) */ 
	0x000306e8, /* Controller 3, offset 1768 (direct) */ 
	0x000306ec, /* Controller 3, offset 1772 (direct) */ 
	0x000306f0, /* Controller 3, offset 1776 (direct) */ 
	0x000306f4, /* Controller 3, offset 1780 (direct) */ 
	0x000306f8, /* Controller 3, offset 1784 (direct) */ 
	0x000306fc, /* Controller 3, offset 1788 (direct) */ 
	0x00030700, /* Controller 3, offset 1792 (direct) */ 
	0x00030704, /* Controller 3, offset 1796 (direct) */ 
	0x00030708, /* Controller 3, offset 1800 (direct) */ 
	0x0003070c, /* Controller 3, offset 1804 (direct) */ 
	0x00030710, /* Controller 3, offset 1808 (direct) */ 
	0x00030714, /* Controller 3, offset 1812 (direct) */ 
	0x00030718, /* Controller 3, offset 1816 (direct) */ 
	0x0003071c, /* Controller 3, offset 1820 (direct) */ 
	0x00030720, /* Controller 3, offset 1824 (direct) */ 
	0x00030724, /* Controller 3, offset 1828 (direct) */ 
	0x00030728, /* Controller 3, offset 1832 (direct) */ 
	0x0003072c, /* Controller 3, offset 1836 (direct) */ 
	0x00030730, /* Controller 3, offset 1840 (direct) */ 
	0x00030734, /* Controller 3, offset 1844 (direct) */ 
	0x00030738, /* Controller 3, offset 1848 (direct) */ 
	0x0003073c, /* Controller 3, offset 1852 (direct) */ 
	0x00030740, /* Controller 3, offset 1856 (direct) */ 
	0x00030744, /* Controller 3, offset 1860 (direct) */ 
	0x00030748, /* Controller 3, offset 1864 (direct) */ 
	0x0003074c, /* Controller 3, offset 1868 (direct) */ 
	0x00030750, /* Controller 3, offset 1872 (direct) */ 
	0x00030754, /* Controller 3, offset 1876 (direct) */ 
	0x00030758, /* Controller 3, offset 1880 (direct) */ 
	0x0003075c, /* Controller 3, offset 1884 (direct) */ 
	0x00030760, /* Controller 3, offset 1888 (direct) */ 
	0x00030764, /* Controller 3, offset 1892 (direct) */ 
	0x00030768, /* Controller 3, offset 1896 (direct) */ 
	0x0003076c, /* Controller 3, offset 1900 (direct) */ 
	0x00030770, /* Controller 3, offset 1904 (direct) */ 
	0x00030774, /* Controller 3, offset 1908 (direct) */ 
	0x00030778, /* Controller 3, offset 1912 (direct) */ 
	0x0003077c, /* Controller 3, offset 1916 (direct) */ 
	0x00030780, /* Controller 3, offset 1920 (direct) */ 
	0x00030784, /* Controller 3, offset 1924 (direct) */ 
	0x00030788, /* Controller 3, offset 1928 (direct) */ 
	0x0003078c, /* Controller 3, offset 1932 (direct) */ 
	0x00030790, /* Controller 3, offset 1936 (direct) */ 
	0x00030794, /* Controller 3, offset 1940 (direct) */ 
	0x00030798, /* Controller 3, offset 1944 (direct) */ 
	0x0003079c, /* Controller 3, offset 1948 (direct) */ 
	0x000307a0, /* Controller 3, offset 1952 (direct) */ 
	0x000307a4, /* Controller 3, offset 1956 (direct) */ 
	0x000307a8, /* Controller 3, offset 1960 (direct) */ 
	0x000307ac, /* Controller 3, offset 1964 (direct) */ 
	0x000307b0, /* Controller 3, offset 1968 (direct) */ 
	0x000307b4, /* Controller 3, offset 1972 (direct) */ 
	0x000307b8, /* Controller 3, offset 1976 (direct) */ 
	0x000307bc, /* Controller 3, offset 1980 (direct) */ 
	0x000307c0, /* Controller 3, offset 1984 (direct) */ 
	0x000307c4, /* Controller 3, offset 1988 (direct) */ 
	0x000307c8, /* Controller 3, offset 1992 (direct) */ 
	0x000307cc, /* Controller 3, offset 1996 (direct) */ 
	0x000307d0, /* Controller 3, offset 2000 (direct) */ 
	0x000307d4, /* Controller 3, offset 2004 (direct) */ 
	0x000307d8, /* Controller 3, offset 2008 (direct) */ 
	0x000307dc, /* Controller 3, offset 2012 (direct) */ 
	0x000307e0, /* Controller 3, offset 2016 (direct) */ 
	0x000307e4, /* Controller 3, offset 2020 (direct) */ 
	0x000307e8, /* Controller 3, offset 2024 (direct) */ 
	0x000307ec, /* Controller 3, offset 2028 (direct) */ 
	0x000307f0, /* Controller 3, offset 2032 (direct) */ 
	0x000307f4, /* Controller 3, offset 2036 (direct) */ 
	0x000307f8, /* Controller 3, offset 2040 (direct) */ 
	0x000307fc, /* Controller 3, offset 2044 (direct) */ 
	0x00030800, /* Controller 3, offset 2048 (direct) */ 
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
	0x00040044, /* Controller 4, offset 68 (direct) */ 
	0x00040048, /* Controller 4, offset 72 (direct) */ 
	0x0004004c, /* Controller 4, offset 76 (direct) */ 
	0x00040050, /* Controller 4, offset 80 (direct) */ 
	0x00040054, /* Controller 4, offset 84 (direct) */ 
	0x00040058, /* Controller 4, offset 88 (direct) */ 
	0x0004005c, /* Controller 4, offset 92 (direct) */ 
	0x00040060, /* Controller 4, offset 96 (direct) */ 
	0x00040064, /* Controller 4, offset 100 (direct) */ 
	0x00040068, /* Controller 4, offset 104 (direct) */ 
	0x0004006c, /* Controller 4, offset 108 (direct) */ 
	0x00040070, /* Controller 4, offset 112 (direct) */ 
	0x00040074, /* Controller 4, offset 116 (direct) */ 
	0x00040078, /* Controller 4, offset 120 (direct) */ 
	0x0004007c, /* Controller 4, offset 124 (direct) */ 
	0x00040080, /* Controller 4, offset 128 (direct) */ 
	0x00040084, /* Controller 4, offset 132 (direct) */ 
	0x00040088, /* Controller 4, offset 136 (direct) */ 
	0x0004008c, /* Controller 4, offset 140 (direct) */ 
	0x00040090, /* Controller 4, offset 144 (direct) */ 
	0x00040094, /* Controller 4, offset 148 (direct) */ 
	0x00040098, /* Controller 4, offset 152 (direct) */ 
	0x0004009c, /* Controller 4, offset 156 (direct) */ 
	0x000400a0, /* Controller 4, offset 160 (direct) */ 
	0x000400a4, /* Controller 4, offset 164 (direct) */ 
	0x000400a8, /* Controller 4, offset 168 (direct) */ 
	0x000400ac, /* Controller 4, offset 172 (direct) */ 
	0x000400b0, /* Controller 4, offset 176 (direct) */ 
	0x000400b4, /* Controller 4, offset 180 (direct) */ 
	0x000400b8, /* Controller 4, offset 184 (direct) */ 
	0x000400bc, /* Controller 4, offset 188 (direct) */ 
	0x000400c0, /* Controller 4, offset 192 (direct) */ 
	0x000400c4, /* Controller 4, offset 196 (direct) */ 
	0x000400c8, /* Controller 4, offset 200 (direct) */ 
	0x000400cc, /* Controller 4, offset 204 (direct) */ 
	0x000400d0, /* Controller 4, offset 208 (direct) */ 
	0x000400d4, /* Controller 4, offset 212 (direct) */ 
	0x000400d8, /* Controller 4, offset 216 (direct) */ 
	0x000400dc, /* Controller 4, offset 220 (direct) */ 
	0x000400e0, /* Controller 4, offset 224 (direct) */ 
	0x000400e4, /* Controller 4, offset 228 (direct) */ 
	0x000400e8, /* Controller 4, offset 232 (direct) */ 
	0x000400ec, /* Controller 4, offset 236 (direct) */ 
	0x000400f0, /* Controller 4, offset 240 (direct) */ 
	0x000400f4, /* Controller 4, offset 244 (direct) */ 
	0x000400f8, /* Controller 4, offset 248 (direct) */ 
	0x000400fc, /* Controller 4, offset 252 (direct) */ 
	0x00040100, /* Controller 4, offset 256 (direct) */ 
	0x00040104, /* Controller 4, offset 260 (direct) */ 
	0x00040108, /* Controller 4, offset 264 (direct) */ 
	0x0004010c, /* Controller 4, offset 268 (direct) */ 
	0x00040110, /* Controller 4, offset 272 (direct) */ 
	0x00040114, /* Controller 4, offset 276 (direct) */ 
	0x00040118, /* Controller 4, offset 280 (direct) */ 
	0x0004011c, /* Controller 4, offset 284 (direct) */ 
	0x00040120, /* Controller 4, offset 288 (direct) */ 
	0x00040124, /* Controller 4, offset 292 (direct) */ 
	0x00040128, /* Controller 4, offset 296 (direct) */ 
	0x0004012c, /* Controller 4, offset 300 (direct) */ 
	0x00040130, /* Controller 4, offset 304 (direct) */ 
	0x00040134, /* Controller 4, offset 308 (direct) */ 
	0x00040138, /* Controller 4, offset 312 (direct) */ 
	0x0004013c, /* Controller 4, offset 316 (direct) */ 
	0x00040140, /* Controller 4, offset 320 (direct) */ 
	0x00040144, /* Controller 4, offset 324 (direct) */ 
	0x00040148, /* Controller 4, offset 328 (direct) */ 
	0x0004014c, /* Controller 4, offset 332 (direct) */ 
	0x00040150, /* Controller 4, offset 336 (direct) */ 
	0x00040154, /* Controller 4, offset 340 (direct) */ 
	0x00040158, /* Controller 4, offset 344 (direct) */ 
	0x0004015c, /* Controller 4, offset 348 (direct) */ 
	0x00040160, /* Controller 4, offset 352 (direct) */ 
	0x00040164, /* Controller 4, offset 356 (direct) */ 
	0x00040168, /* Controller 4, offset 360 (direct) */ 
	0x0004016c, /* Controller 4, offset 364 (direct) */ 
	0x00040170, /* Controller 4, offset 368 (direct) */ 
	0x00040174, /* Controller 4, offset 372 (direct) */ 
	0x00040178, /* Controller 4, offset 376 (direct) */ 
	0x0004017c, /* Controller 4, offset 380 (direct) */ 
	0x00040180, /* Controller 4, offset 384 (direct) */ 
	0x00040184, /* Controller 4, offset 388 (direct) */ 
	0x00040188, /* Controller 4, offset 392 (direct) */ 
	0x0004018c, /* Controller 4, offset 396 (direct) */ 
	0x00040190, /* Controller 4, offset 400 (direct) */ 
	0x00040194, /* Controller 4, offset 404 (direct) */ 
	0x00040198, /* Controller 4, offset 408 (direct) */ 
	0x0004019c, /* Controller 4, offset 412 (direct) */ 
	0x000401a0, /* Controller 4, offset 416 (direct) */ 
	0x000401a4, /* Controller 4, offset 420 (direct) */ 
	0x000401a8, /* Controller 4, offset 424 (direct) */ 
	0x000401ac, /* Controller 4, offset 428 (direct) */ 
	0x000401b0, /* Controller 4, offset 432 (direct) */ 
	0x000401b4, /* Controller 4, offset 436 (direct) */ 
	0x000401b8, /* Controller 4, offset 440 (direct) */ 
	0x000401bc, /* Controller 4, offset 444 (direct) */ 
	0x000401c0, /* Controller 4, offset 448 (direct) */ 
	0x000401c4, /* Controller 4, offset 452 (direct) */ 
	0x000401c8, /* Controller 4, offset 456 (direct) */ 
	0x000401cc, /* Controller 4, offset 460 (direct) */ 
	0x000401d0, /* Controller 4, offset 464 (direct) */ 
	0x000401d4, /* Controller 4, offset 468 (direct) */ 
	0x000401d8, /* Controller 4, offset 472 (direct) */ 
	0x000401dc, /* Controller 4, offset 476 (direct) */ 
	0x000401e0, /* Controller 4, offset 480 (direct) */ 
	0x000401e4, /* Controller 4, offset 484 (direct) */ 
	0x000401e8, /* Controller 4, offset 488 (direct) */ 
	0x000401ec, /* Controller 4, offset 492 (direct) */ 
	0x000401f0, /* Controller 4, offset 496 (direct) */ 
	0x000401f4, /* Controller 4, offset 500 (direct) */ 
	0x000401f8, /* Controller 4, offset 504 (direct) */ 
	0x000401fc, /* Controller 4, offset 508 (direct) */ 
	0x00040200, /* Controller 4, offset 512 (direct) */ 
	0x00040204, /* Controller 4, offset 516 (direct) */ 
	0x00040208, /* Controller 4, offset 520 (direct) */ 
	0x0004020c, /* Controller 4, offset 524 (direct) */ 
	0x00040210, /* Controller 4, offset 528 (direct) */ 
	0x00040214, /* Controller 4, offset 532 (direct) */ 
	0x00040218, /* Controller 4, offset 536 (direct) */ 
	0x0004021c, /* Controller 4, offset 540 (direct) */ 
	0x00040220, /* Controller 4, offset 544 (direct) */ 
	0x00040224, /* Controller 4, offset 548 (direct) */ 
	0x00040228, /* Controller 4, offset 552 (direct) */ 
	0x0004022c, /* Controller 4, offset 556 (direct) */ 
	0x00040230, /* Controller 4, offset 560 (direct) */ 
	0x00040234, /* Controller 4, offset 564 (direct) */ 
	0x00040238, /* Controller 4, offset 568 (direct) */ 
	0x0004023c, /* Controller 4, offset 572 (direct) */ 
	0x00040240, /* Controller 4, offset 576 (direct) */ 
	0x00040244, /* Controller 4, offset 580 (direct) */ 
	0x00040248, /* Controller 4, offset 584 (direct) */ 
	0x0004024c, /* Controller 4, offset 588 (direct) */ 
	0x00040250, /* Controller 4, offset 592 (direct) */ 
	0x00040254, /* Controller 4, offset 596 (direct) */ 
	0x00040258, /* Controller 4, offset 600 (direct) */ 
	0x0004025c, /* Controller 4, offset 604 (direct) */ 
	0x00040260, /* Controller 4, offset 608 (direct) */ 
	0x00040264, /* Controller 4, offset 612 (direct) */ 
	0x00040268, /* Controller 4, offset 616 (direct) */ 
	0x0004026c, /* Controller 4, offset 620 (direct) */ 
	0x00040270, /* Controller 4, offset 624 (direct) */ 
	0x00040274, /* Controller 4, offset 628 (direct) */ 
	0x00040278, /* Controller 4, offset 632 (direct) */ 
	0x0004027c, /* Controller 4, offset 636 (direct) */ 
	0x00040280, /* Controller 4, offset 640 (direct) */ 
	0x00040284, /* Controller 4, offset 644 (direct) */ 
	0x00040288, /* Controller 4, offset 648 (direct) */ 
	0x0004028c, /* Controller 4, offset 652 (direct) */ 
	0x00040290, /* Controller 4, offset 656 (direct) */ 
	0x00040294, /* Controller 4, offset 660 (direct) */ 
	0x00040298, /* Controller 4, offset 664 (direct) */ 
	0x0004029c, /* Controller 4, offset 668 (direct) */ 
	0x000402a0, /* Controller 4, offset 672 (direct) */ 
	0x000402a4, /* Controller 4, offset 676 (direct) */ 
	0x000402a8, /* Controller 4, offset 680 (direct) */ 
	0x000402ac, /* Controller 4, offset 684 (direct) */ 
	0x000402b0, /* Controller 4, offset 688 (direct) */ 
	0x000402b4, /* Controller 4, offset 692 (direct) */ 
	0x000402b8, /* Controller 4, offset 696 (direct) */ 
	0x000402bc, /* Controller 4, offset 700 (direct) */ 
	0x000402c0, /* Controller 4, offset 704 (direct) */ 
	0x000402c4, /* Controller 4, offset 708 (direct) */ 
	0x000402c8, /* Controller 4, offset 712 (direct) */ 
	0x000402cc, /* Controller 4, offset 716 (direct) */ 
	0x000402d0, /* Controller 4, offset 720 (direct) */ 
	0x000402d4, /* Controller 4, offset 724 (direct) */ 
	0x000402d8, /* Controller 4, offset 728 (direct) */ 
	0x000402dc, /* Controller 4, offset 732 (direct) */ 
	0x000402e0, /* Controller 4, offset 736 (direct) */ 
	0x000402e4, /* Controller 4, offset 740 (direct) */ 
	0x000402e8, /* Controller 4, offset 744 (direct) */ 
	0x000402ec, /* Controller 4, offset 748 (direct) */ 
	0x000402f0, /* Controller 4, offset 752 (direct) */ 
	0x000402f4, /* Controller 4, offset 756 (direct) */ 
	0x000402f8, /* Controller 4, offset 760 (direct) */ 
	0x000402fc, /* Controller 4, offset 764 (direct) */ 
	0x00040300, /* Controller 4, offset 768 (direct) */ 
	0x00040304, /* Controller 4, offset 772 (direct) */ 
	0x00040308, /* Controller 4, offset 776 (direct) */ 
	0x0004030c, /* Controller 4, offset 780 (direct) */ 
	0x00040310, /* Controller 4, offset 784 (direct) */ 
	0x00040314, /* Controller 4, offset 788 (direct) */ 
	0x00040318, /* Controller 4, offset 792 (direct) */ 
	0x0004031c, /* Controller 4, offset 796 (direct) */ 
	0x00040320, /* Controller 4, offset 800 (direct) */ 
	0x00040324, /* Controller 4, offset 804 (direct) */ 
	0x00040328, /* Controller 4, offset 808 (direct) */ 
	0x0004032c, /* Controller 4, offset 812 (direct) */ 
	0x00040330, /* Controller 4, offset 816 (direct) */ 
	0x00040334, /* Controller 4, offset 820 (direct) */ 
	0x00040338, /* Controller 4, offset 824 (direct) */ 
	0x0004033c, /* Controller 4, offset 828 (direct) */ 
	0x00040340, /* Controller 4, offset 832 (direct) */ 
	0x00040344, /* Controller 4, offset 836 (direct) */ 
	0x00040348, /* Controller 4, offset 840 (direct) */ 
	0x0004034c, /* Controller 4, offset 844 (direct) */ 
	0x00040350, /* Controller 4, offset 848 (direct) */ 
	0x00040354, /* Controller 4, offset 852 (direct) */ 
	0x00040358, /* Controller 4, offset 856 (direct) */ 
	0x0004035c, /* Controller 4, offset 860 (direct) */ 
	0x00040360, /* Controller 4, offset 864 (direct) */ 
	0x00040364, /* Controller 4, offset 868 (direct) */ 
	0x00040368, /* Controller 4, offset 872 (direct) */ 
	0x0004036c, /* Controller 4, offset 876 (direct) */ 
	0x00040370, /* Controller 4, offset 880 (direct) */ 
	0x00040374, /* Controller 4, offset 884 (direct) */ 
	0x00040378, /* Controller 4, offset 888 (direct) */ 
	0x0004037c, /* Controller 4, offset 892 (direct) */ 
	0x00040380, /* Controller 4, offset 896 (direct) */ 
	0x00040384, /* Controller 4, offset 900 (direct) */ 
	0x00040388, /* Controller 4, offset 904 (direct) */ 
	0x0004038c, /* Controller 4, offset 908 (direct) */ 
	0x00040390, /* Controller 4, offset 912 (direct) */ 
	0x00040394, /* Controller 4, offset 916 (direct) */ 
	0x00040398, /* Controller 4, offset 920 (direct) */ 
	0x0004039c, /* Controller 4, offset 924 (direct) */ 
	0x000403a0, /* Controller 4, offset 928 (direct) */ 
	0x000403a4, /* Controller 4, offset 932 (direct) */ 
	0x000403a8, /* Controller 4, offset 936 (direct) */ 
	0x000403ac, /* Controller 4, offset 940 (direct) */ 
	0x000403b0, /* Controller 4, offset 944 (direct) */ 
	0x000403b4, /* Controller 4, offset 948 (direct) */ 
	0x000403b8, /* Controller 4, offset 952 (direct) */ 
	0x000403bc, /* Controller 4, offset 956 (direct) */ 
	0x000403c0, /* Controller 4, offset 960 (direct) */ 
	0x000403c4, /* Controller 4, offset 964 (direct) */ 
	0x000403c8, /* Controller 4, offset 968 (direct) */ 
	0x000403cc, /* Controller 4, offset 972 (direct) */ 
	0x000403d0, /* Controller 4, offset 976 (direct) */ 
	0x000403d4, /* Controller 4, offset 980 (direct) */ 
	0x000403d8, /* Controller 4, offset 984 (direct) */ 
	0x000403dc, /* Controller 4, offset 988 (direct) */ 
	0x000403e0, /* Controller 4, offset 992 (direct) */ 
	0x000403e4, /* Controller 4, offset 996 (direct) */ 
	0x000403e8, /* Controller 4, offset 1000 (direct) */ 
	0x000403ec, /* Controller 4, offset 1004 (direct) */ 
	0x000403f0, /* Controller 4, offset 1008 (direct) */ 
	0x000403f4, /* Controller 4, offset 1012 (direct) */ 
	0x000403f8, /* Controller 4, offset 1016 (direct) */ 
	0x000403fc, /* Controller 4, offset 1020 (direct) */ 
	0x00040400, /* Controller 4, offset 1024 (direct) */ 
	0x00040404, /* Controller 4, offset 1028 (direct) */ 
	0x00040408, /* Controller 4, offset 1032 (direct) */ 
	0x0004040c, /* Controller 4, offset 1036 (direct) */ 
	0x00040410, /* Controller 4, offset 1040 (direct) */ 
	0x00040414, /* Controller 4, offset 1044 (direct) */ 
	0x00040418, /* Controller 4, offset 1048 (direct) */ 
	0x0004041c, /* Controller 4, offset 1052 (direct) */ 
	0x00040420, /* Controller 4, offset 1056 (direct) */ 
	0x00040424, /* Controller 4, offset 1060 (direct) */ 
	0x00040428, /* Controller 4, offset 1064 (direct) */ 
	0x0004042c, /* Controller 4, offset 1068 (direct) */ 
	0x00040430, /* Controller 4, offset 1072 (direct) */ 
	0x00040434, /* Controller 4, offset 1076 (direct) */ 
	0x00040438, /* Controller 4, offset 1080 (direct) */ 
	0x0004043c, /* Controller 4, offset 1084 (direct) */ 
	0x00040440, /* Controller 4, offset 1088 (direct) */ 
	0x00040444, /* Controller 4, offset 1092 (direct) */ 
	0x00040448, /* Controller 4, offset 1096 (direct) */ 
	0x0004044c, /* Controller 4, offset 1100 (direct) */ 
	0x00040450, /* Controller 4, offset 1104 (direct) */ 
	0x00040454, /* Controller 4, offset 1108 (direct) */ 
	0x00040458, /* Controller 4, offset 1112 (direct) */ 
	0x0004045c, /* Controller 4, offset 1116 (direct) */ 
	0x00040460, /* Controller 4, offset 1120 (direct) */ 
	0x00040464, /* Controller 4, offset 1124 (direct) */ 
	0x00040468, /* Controller 4, offset 1128 (direct) */ 
	0x0004046c, /* Controller 4, offset 1132 (direct) */ 
	0x00040470, /* Controller 4, offset 1136 (direct) */ 
	0x00040474, /* Controller 4, offset 1140 (direct) */ 
	0x00040478, /* Controller 4, offset 1144 (direct) */ 
	0x0004047c, /* Controller 4, offset 1148 (direct) */ 
	0x00040480, /* Controller 4, offset 1152 (direct) */ 
	0x00040484, /* Controller 4, offset 1156 (direct) */ 
	0x00040488, /* Controller 4, offset 1160 (direct) */ 
	0x0004048c, /* Controller 4, offset 1164 (direct) */ 
	0x00040490, /* Controller 4, offset 1168 (direct) */ 
	0x00040494, /* Controller 4, offset 1172 (direct) */ 
	0x00040498, /* Controller 4, offset 1176 (direct) */ 
	0x0004049c, /* Controller 4, offset 1180 (direct) */ 
	0x000404a0, /* Controller 4, offset 1184 (direct) */ 
	0x000404a4, /* Controller 4, offset 1188 (direct) */ 
	0x000404a8, /* Controller 4, offset 1192 (direct) */ 
	0x000404ac, /* Controller 4, offset 1196 (direct) */ 
	0x000404b0, /* Controller 4, offset 1200 (direct) */ 
	0x000404b4, /* Controller 4, offset 1204 (direct) */ 
	0x000404b8, /* Controller 4, offset 1208 (direct) */ 
	0x000404bc, /* Controller 4, offset 1212 (direct) */ 
	0x000404c0, /* Controller 4, offset 1216 (direct) */ 
	0x000404c4, /* Controller 4, offset 1220 (direct) */ 
	0x000404c8, /* Controller 4, offset 1224 (direct) */ 
	0x000404cc, /* Controller 4, offset 1228 (direct) */ 
	0x000404d0, /* Controller 4, offset 1232 (direct) */ 
	0x000404d4, /* Controller 4, offset 1236 (direct) */ 
	0x000404d8, /* Controller 4, offset 1240 (direct) */ 
	0x000404dc, /* Controller 4, offset 1244 (direct) */ 
	0x000404e0, /* Controller 4, offset 1248 (direct) */ 
	0x000404e4, /* Controller 4, offset 1252 (direct) */ 
	0x000404e8, /* Controller 4, offset 1256 (direct) */ 
	0x000404ec, /* Controller 4, offset 1260 (direct) */ 
	0x000404f0, /* Controller 4, offset 1264 (direct) */ 
	0x000404f4, /* Controller 4, offset 1268 (direct) */ 
	0x000404f8, /* Controller 4, offset 1272 (direct) */ 
	0x000404fc, /* Controller 4, offset 1276 (direct) */ 
	0x00040500, /* Controller 4, offset 1280 (direct) */ 
	0x00040504, /* Controller 4, offset 1284 (direct) */ 
	0x00040508, /* Controller 4, offset 1288 (direct) */ 
	0x0004050c, /* Controller 4, offset 1292 (direct) */ 
	0x00040510, /* Controller 4, offset 1296 (direct) */ 
	0x00040514, /* Controller 4, offset 1300 (direct) */ 
	0x00040518, /* Controller 4, offset 1304 (direct) */ 
	0x0004051c, /* Controller 4, offset 1308 (direct) */ 
	0x00040520, /* Controller 4, offset 1312 (direct) */ 
	0x00040524, /* Controller 4, offset 1316 (direct) */ 
	0x00040528, /* Controller 4, offset 1320 (direct) */ 
	0x0004052c, /* Controller 4, offset 1324 (direct) */ 
	0x00040530, /* Controller 4, offset 1328 (direct) */ 
	0x00040534, /* Controller 4, offset 1332 (direct) */ 
	0x00040538, /* Controller 4, offset 1336 (direct) */ 
	0x0004053c, /* Controller 4, offset 1340 (direct) */ 
	0x00040540, /* Controller 4, offset 1344 (direct) */ 
	0x00040544, /* Controller 4, offset 1348 (direct) */ 
	0x00040548, /* Controller 4, offset 1352 (direct) */ 
	0x0004054c, /* Controller 4, offset 1356 (direct) */ 
	0x00040550, /* Controller 4, offset 1360 (direct) */ 
	0x00040554, /* Controller 4, offset 1364 (direct) */ 
	0x00040558, /* Controller 4, offset 1368 (direct) */ 
	0x0004055c, /* Controller 4, offset 1372 (direct) */ 
	0x00040560, /* Controller 4, offset 1376 (direct) */ 
	0x00040564, /* Controller 4, offset 1380 (direct) */ 
	0x00040568, /* Controller 4, offset 1384 (direct) */ 
	0x0004056c, /* Controller 4, offset 1388 (direct) */ 
	0x00040570, /* Controller 4, offset 1392 (direct) */ 
	0x00040574, /* Controller 4, offset 1396 (direct) */ 
	0x00040578, /* Controller 4, offset 1400 (direct) */ 
	0x0004057c, /* Controller 4, offset 1404 (direct) */ 
	0x00040580, /* Controller 4, offset 1408 (direct) */ 
	0x00040584, /* Controller 4, offset 1412 (direct) */ 
	0x00040588, /* Controller 4, offset 1416 (direct) */ 
	0x0004058c, /* Controller 4, offset 1420 (direct) */ 
	0x00040590, /* Controller 4, offset 1424 (direct) */ 
	0x00040594, /* Controller 4, offset 1428 (direct) */ 
	0x00040598, /* Controller 4, offset 1432 (direct) */ 
	0x0004059c, /* Controller 4, offset 1436 (direct) */ 
	0x000405a0, /* Controller 4, offset 1440 (direct) */ 
	0x000405a4, /* Controller 4, offset 1444 (direct) */ 
	0x000405a8, /* Controller 4, offset 1448 (direct) */ 
	0x000405ac, /* Controller 4, offset 1452 (direct) */ 
	0x000405b0, /* Controller 4, offset 1456 (direct) */ 
	0x000405b4, /* Controller 4, offset 1460 (direct) */ 
	0x000405b8, /* Controller 4, offset 1464 (direct) */ 
	0x000405bc, /* Controller 4, offset 1468 (direct) */ 
	0x000405c0, /* Controller 4, offset 1472 (direct) */ 
	0x000405c4, /* Controller 4, offset 1476 (direct) */ 
	0x000405c8, /* Controller 4, offset 1480 (direct) */ 
	0x000405cc, /* Controller 4, offset 1484 (direct) */ 
	0x000405d0, /* Controller 4, offset 1488 (direct) */ 
	0x000405d4, /* Controller 4, offset 1492 (direct) */ 
	0x000405d8, /* Controller 4, offset 1496 (direct) */ 
	0x000405dc, /* Controller 4, offset 1500 (direct) */ 
	0x000405e0, /* Controller 4, offset 1504 (direct) */ 
	0x000405e4, /* Controller 4, offset 1508 (direct) */ 
	0x000405e8, /* Controller 4, offset 1512 (direct) */ 
	0x000405ec, /* Controller 4, offset 1516 (direct) */ 
	0x000405f0, /* Controller 4, offset 1520 (direct) */ 
	0x000405f4, /* Controller 4, offset 1524 (direct) */ 
	0x000405f8, /* Controller 4, offset 1528 (direct) */ 
	0x000405fc, /* Controller 4, offset 1532 (direct) */ 
	0x00040600, /* Controller 4, offset 1536 (direct) */ 
	0x00040604, /* Controller 4, offset 1540 (direct) */ 
	0x00040608, /* Controller 4, offset 1544 (direct) */ 
	0x0004060c, /* Controller 4, offset 1548 (direct) */ 
	0x00040610, /* Controller 4, offset 1552 (direct) */ 
	0x00040614, /* Controller 4, offset 1556 (direct) */ 
	0x00040618, /* Controller 4, offset 1560 (direct) */ 
	0x0004061c, /* Controller 4, offset 1564 (direct) */ 
	0x00040620, /* Controller 4, offset 1568 (direct) */ 
	0x00040624, /* Controller 4, offset 1572 (direct) */ 
	0x00040628, /* Controller 4, offset 1576 (direct) */ 
	0x0004062c, /* Controller 4, offset 1580 (direct) */ 
	0x00040630, /* Controller 4, offset 1584 (direct) */ 
	0x00040634, /* Controller 4, offset 1588 (direct) */ 
	0x00040638, /* Controller 4, offset 1592 (direct) */ 
	0x0004063c, /* Controller 4, offset 1596 (direct) */ 
	0x00040640, /* Controller 4, offset 1600 (direct) */ 
	0x00040644, /* Controller 4, offset 1604 (direct) */ 
	0x00040648, /* Controller 4, offset 1608 (direct) */ 
	0x0004064c, /* Controller 4, offset 1612 (direct) */ 
	0x00040650, /* Controller 4, offset 1616 (direct) */ 
	0x00040654, /* Controller 4, offset 1620 (direct) */ 
	0x00040658, /* Controller 4, offset 1624 (direct) */ 
	0x0004065c, /* Controller 4, offset 1628 (direct) */ 
	0x00040660, /* Controller 4, offset 1632 (direct) */ 
	0x00040664, /* Controller 4, offset 1636 (direct) */ 
	0x00040668, /* Controller 4, offset 1640 (direct) */ 
	0x0004066c, /* Controller 4, offset 1644 (direct) */ 
	0x00040670, /* Controller 4, offset 1648 (direct) */ 
	0x00040674, /* Controller 4, offset 1652 (direct) */ 
	0x00040678, /* Controller 4, offset 1656 (direct) */ 
	0x0004067c, /* Controller 4, offset 1660 (direct) */ 
	0x00040680, /* Controller 4, offset 1664 (direct) */ 
	0x00040684, /* Controller 4, offset 1668 (direct) */ 
	0x00040688, /* Controller 4, offset 1672 (direct) */ 
	0x0004068c, /* Controller 4, offset 1676 (direct) */ 
	0x00040690, /* Controller 4, offset 1680 (direct) */ 
	0x00040694, /* Controller 4, offset 1684 (direct) */ 
	0x00040698, /* Controller 4, offset 1688 (direct) */ 
	0x0004069c, /* Controller 4, offset 1692 (direct) */ 
	0x000406a0, /* Controller 4, offset 1696 (direct) */ 
	0x000406a4, /* Controller 4, offset 1700 (direct) */ 
	0x000406a8, /* Controller 4, offset 1704 (direct) */ 
	0x000406ac, /* Controller 4, offset 1708 (direct) */ 
	0x000406b0, /* Controller 4, offset 1712 (direct) */ 
	0x000406b4, /* Controller 4, offset 1716 (direct) */ 
	0x000406b8, /* Controller 4, offset 1720 (direct) */ 
	0x000406bc, /* Controller 4, offset 1724 (direct) */ 
	0x000406c0, /* Controller 4, offset 1728 (direct) */ 
	0x000406c4, /* Controller 4, offset 1732 (direct) */ 
	0x000406c8, /* Controller 4, offset 1736 (direct) */ 
	0x000406cc, /* Controller 4, offset 1740 (direct) */ 
	0x000406d0, /* Controller 4, offset 1744 (direct) */ 
	0x000406d4, /* Controller 4, offset 1748 (direct) */ 
	0x000406d8, /* Controller 4, offset 1752 (direct) */ 
	0x000406dc, /* Controller 4, offset 1756 (direct) */ 
	0x000406e0, /* Controller 4, offset 1760 (direct) */ 
	0x000406e4, /* Controller 4, offset 1764 (direct) */ 
	0x000406e8, /* Controller 4, offset 1768 (direct) */ 
	0x000406ec, /* Controller 4, offset 1772 (direct) */ 
	0x000406f0, /* Controller 4, offset 1776 (direct) */ 
	0x000406f4, /* Controller 4, offset 1780 (direct) */ 
	0x000406f8, /* Controller 4, offset 1784 (direct) */ 
	0x000406fc, /* Controller 4, offset 1788 (direct) */ 
	0x00040700, /* Controller 4, offset 1792 (direct) */ 
	0x00040704, /* Controller 4, offset 1796 (direct) */ 
	0x00040708, /* Controller 4, offset 1800 (direct) */ 
	0x0004070c, /* Controller 4, offset 1804 (direct) */ 
	0x00040710, /* Controller 4, offset 1808 (direct) */ 
	0x00040714, /* Controller 4, offset 1812 (direct) */ 
	0x00040718, /* Controller 4, offset 1816 (direct) */ 
	0x0004071c, /* Controller 4, offset 1820 (direct) */ 
	0x00040720, /* Controller 4, offset 1824 (direct) */ 
	0x00040724, /* Controller 4, offset 1828 (direct) */ 
	0x00040728, /* Controller 4, offset 1832 (direct) */ 
	0x0004072c, /* Controller 4, offset 1836 (direct) */ 
	0x00040730, /* Controller 4, offset 1840 (direct) */ 
	0x00040734, /* Controller 4, offset 1844 (direct) */ 
	0x00040738, /* Controller 4, offset 1848 (direct) */ 
	0x0004073c, /* Controller 4, offset 1852 (direct) */ 
	0x00040740, /* Controller 4, offset 1856 (direct) */ 
	0x00040744, /* Controller 4, offset 1860 (direct) */ 
	0x00040748, /* Controller 4, offset 1864 (direct) */ 
	0x0004074c, /* Controller 4, offset 1868 (direct) */ 
	0x00040750, /* Controller 4, offset 1872 (direct) */ 
	0x00040754, /* Controller 4, offset 1876 (direct) */ 
	0x00040758, /* Controller 4, offset 1880 (direct) */ 
	0x0004075c, /* Controller 4, offset 1884 (direct) */ 
	0x00040760, /* Controller 4, offset 1888 (direct) */ 
	0x00040764, /* Controller 4, offset 1892 (direct) */ 
	0x00040768, /* Controller 4, offset 1896 (direct) */ 
	0x0004076c, /* Controller 4, offset 1900 (direct) */ 
	0x00040770, /* Controller 4, offset 1904 (direct) */ 
	0x00040774, /* Controller 4, offset 1908 (direct) */ 
	0x00040778, /* Controller 4, offset 1912 (direct) */ 
	0x0004077c, /* Controller 4, offset 1916 (direct) */ 
	0x00040780, /* Controller 4, offset 1920 (direct) */ 
	0x00040784, /* Controller 4, offset 1924 (direct) */ 
	0x00040788, /* Controller 4, offset 1928 (direct) */ 
	0x0004078c, /* Controller 4, offset 1932 (direct) */ 
	0x00040790, /* Controller 4, offset 1936 (direct) */ 
	0x00040794, /* Controller 4, offset 1940 (direct) */ 
	0x00040798, /* Controller 4, offset 1944 (direct) */ 
	0x0004079c, /* Controller 4, offset 1948 (direct) */ 
	0x000407a0, /* Controller 4, offset 1952 (direct) */ 
	0x000407a4, /* Controller 4, offset 1956 (direct) */ 
	0x000407a8, /* Controller 4, offset 1960 (direct) */ 
	0x000407ac, /* Controller 4, offset 1964 (direct) */ 
	0x000407b0, /* Controller 4, offset 1968 (direct) */ 
	0x000407b4, /* Controller 4, offset 1972 (direct) */ 
	0x000407b8, /* Controller 4, offset 1976 (direct) */ 
	0x000407bc, /* Controller 4, offset 1980 (direct) */ 
	0x000407c0, /* Controller 4, offset 1984 (direct) */ 
	0x000407c4, /* Controller 4, offset 1988 (direct) */ 
	0x000407c8, /* Controller 4, offset 1992 (direct) */ 
	0x000407cc, /* Controller 4, offset 1996 (direct) */ 
	0x000407d0, /* Controller 4, offset 2000 (direct) */ 
	0x000407d4, /* Controller 4, offset 2004 (direct) */ 
	0x000407d8, /* Controller 4, offset 2008 (direct) */ 
	0x000407dc, /* Controller 4, offset 2012 (direct) */ 
	0x000407e0, /* Controller 4, offset 2016 (direct) */ 
	0x000407e4, /* Controller 4, offset 2020 (direct) */ 
	0x000407e8, /* Controller 4, offset 2024 (direct) */ 
	0x000407ec, /* Controller 4, offset 2028 (direct) */ 
	0x000407f0, /* Controller 4, offset 2032 (direct) */ 
	0x000407f4, /* Controller 4, offset 2036 (direct) */ 
	0x000407f8, /* Controller 4, offset 2040 (direct) */ 
	0x000407fc, /* Controller 4, offset 2044 (direct) */ 
	0x00040800, /* Controller 4, offset 2048 (direct) */ 
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
	0x00050044, /* Controller 5, offset 68 (direct) */ 
	0x00050048, /* Controller 5, offset 72 (direct) */ 
	0x0005004c, /* Controller 5, offset 76 (direct) */ 
	0x00050050, /* Controller 5, offset 80 (direct) */ 
	0x00050054, /* Controller 5, offset 84 (direct) */ 
	0x00050058, /* Controller 5, offset 88 (direct) */ 
	0x0005005c, /* Controller 5, offset 92 (direct) */ 
	0x00050060, /* Controller 5, offset 96 (direct) */ 
	0x00050064, /* Controller 5, offset 100 (direct) */ 
	0x00050068, /* Controller 5, offset 104 (direct) */ 
	0x0005006c, /* Controller 5, offset 108 (direct) */ 
	0x00050070, /* Controller 5, offset 112 (direct) */ 
	0x00050074, /* Controller 5, offset 116 (direct) */ 
	0x00050078, /* Controller 5, offset 120 (direct) */ 
	0x0005007c, /* Controller 5, offset 124 (direct) */ 
	0x00050080, /* Controller 5, offset 128 (direct) */ 
	0x00050084, /* Controller 5, offset 132 (direct) */ 
	0x00050088, /* Controller 5, offset 136 (direct) */ 
	0x0005008c, /* Controller 5, offset 140 (direct) */ 
	0x00050090, /* Controller 5, offset 144 (direct) */ 
	0x00050094, /* Controller 5, offset 148 (direct) */ 
	0x00050098, /* Controller 5, offset 152 (direct) */ 
	0x0005009c, /* Controller 5, offset 156 (direct) */ 
	0x000500a0, /* Controller 5, offset 160 (direct) */ 
	0x000500a4, /* Controller 5, offset 164 (direct) */ 
	0x000500a8, /* Controller 5, offset 168 (direct) */ 
	0x000500ac, /* Controller 5, offset 172 (direct) */ 
	0x000500b0, /* Controller 5, offset 176 (direct) */ 
	0x000500b4, /* Controller 5, offset 180 (direct) */ 
	0x000500b8, /* Controller 5, offset 184 (direct) */ 
	0x000500bc, /* Controller 5, offset 188 (direct) */ 
	0x000500c0, /* Controller 5, offset 192 (direct) */ 
	0x000500c4, /* Controller 5, offset 196 (direct) */ 
	0x000500c8, /* Controller 5, offset 200 (direct) */ 
	0x000500cc, /* Controller 5, offset 204 (direct) */ 
	0x000500d0, /* Controller 5, offset 208 (direct) */ 
	0x000500d4, /* Controller 5, offset 212 (direct) */ 
	0x000500d8, /* Controller 5, offset 216 (direct) */ 
	0x000500dc, /* Controller 5, offset 220 (direct) */ 
	0x000500e0, /* Controller 5, offset 224 (direct) */ 
	0x000500e4, /* Controller 5, offset 228 (direct) */ 
	0x000500e8, /* Controller 5, offset 232 (direct) */ 
	0x000500ec, /* Controller 5, offset 236 (direct) */ 
	0x000500f0, /* Controller 5, offset 240 (direct) */ 
	0x000500f4, /* Controller 5, offset 244 (direct) */ 
	0x000500f8, /* Controller 5, offset 248 (direct) */ 
	0x000500fc, /* Controller 5, offset 252 (direct) */ 
	0x00050100, /* Controller 5, offset 256 (direct) */ 
	0x00050104, /* Controller 5, offset 260 (direct) */ 
	0x00050108, /* Controller 5, offset 264 (direct) */ 
	0x0005010c, /* Controller 5, offset 268 (direct) */ 
	0x00050110, /* Controller 5, offset 272 (direct) */ 
	0x00050114, /* Controller 5, offset 276 (direct) */ 
	0x00050118, /* Controller 5, offset 280 (direct) */ 
	0x0005011c, /* Controller 5, offset 284 (direct) */ 
	0x00050120, /* Controller 5, offset 288 (direct) */ 
	0x00050124, /* Controller 5, offset 292 (direct) */ 
	0x00050128, /* Controller 5, offset 296 (direct) */ 
	0x0005012c, /* Controller 5, offset 300 (direct) */ 
	0x00050130, /* Controller 5, offset 304 (direct) */ 
	0x00050134, /* Controller 5, offset 308 (direct) */ 
	0x00050138, /* Controller 5, offset 312 (direct) */ 
	0x0005013c, /* Controller 5, offset 316 (direct) */ 
	0x00050140, /* Controller 5, offset 320 (direct) */ 
	0x00050144, /* Controller 5, offset 324 (direct) */ 
	0x00050148, /* Controller 5, offset 328 (direct) */ 
	0x0005014c, /* Controller 5, offset 332 (direct) */ 
	0x00050150, /* Controller 5, offset 336 (direct) */ 
	0x00050154, /* Controller 5, offset 340 (direct) */ 
	0x00050158, /* Controller 5, offset 344 (direct) */ 
	0x0005015c, /* Controller 5, offset 348 (direct) */ 
	0x00050160, /* Controller 5, offset 352 (direct) */ 
	0x00050164, /* Controller 5, offset 356 (direct) */ 
	0x00050168, /* Controller 5, offset 360 (direct) */ 
	0x0005016c, /* Controller 5, offset 364 (direct) */ 
	0x00050170, /* Controller 5, offset 368 (direct) */ 
	0x00050174, /* Controller 5, offset 372 (direct) */ 
	0x00050178, /* Controller 5, offset 376 (direct) */ 
	0x0005017c, /* Controller 5, offset 380 (direct) */ 
	0x00050180, /* Controller 5, offset 384 (direct) */ 
	0x00050184, /* Controller 5, offset 388 (direct) */ 
	0x00050188, /* Controller 5, offset 392 (direct) */ 
	0x0005018c, /* Controller 5, offset 396 (direct) */ 
	0x00050190, /* Controller 5, offset 400 (direct) */ 
	0x00050194, /* Controller 5, offset 404 (direct) */ 
	0x00050198, /* Controller 5, offset 408 (direct) */ 
	0x0005019c, /* Controller 5, offset 412 (direct) */ 
	0x000501a0, /* Controller 5, offset 416 (direct) */ 
	0x000501a4, /* Controller 5, offset 420 (direct) */ 
	0x000501a8, /* Controller 5, offset 424 (direct) */ 
	0x000501ac, /* Controller 5, offset 428 (direct) */ 
	0x000501b0, /* Controller 5, offset 432 (direct) */ 
	0x000501b4, /* Controller 5, offset 436 (direct) */ 
	0x000501b8, /* Controller 5, offset 440 (direct) */ 
	0x000501bc, /* Controller 5, offset 444 (direct) */ 
	0x000501c0, /* Controller 5, offset 448 (direct) */ 
	0x000501c4, /* Controller 5, offset 452 (direct) */ 
	0x000501c8, /* Controller 5, offset 456 (direct) */ 
	0x000501cc, /* Controller 5, offset 460 (direct) */ 
	0x000501d0, /* Controller 5, offset 464 (direct) */ 
	0x000501d4, /* Controller 5, offset 468 (direct) */ 
	0x000501d8, /* Controller 5, offset 472 (direct) */ 
	0x000501dc, /* Controller 5, offset 476 (direct) */ 
	0x000501e0, /* Controller 5, offset 480 (direct) */ 
	0x000501e4, /* Controller 5, offset 484 (direct) */ 
	0x000501e8, /* Controller 5, offset 488 (direct) */ 
	0x000501ec, /* Controller 5, offset 492 (direct) */ 
	0x000501f0, /* Controller 5, offset 496 (direct) */ 
	0x000501f4, /* Controller 5, offset 500 (direct) */ 
	0x000501f8, /* Controller 5, offset 504 (direct) */ 
	0x000501fc, /* Controller 5, offset 508 (direct) */ 
	0x00050200, /* Controller 5, offset 512 (direct) */ 
	0x00050204, /* Controller 5, offset 516 (direct) */ 
	0x00050208, /* Controller 5, offset 520 (direct) */ 
	0x0005020c, /* Controller 5, offset 524 (direct) */ 
	0x00050210, /* Controller 5, offset 528 (direct) */ 
	0x00050214, /* Controller 5, offset 532 (direct) */ 
	0x00050218, /* Controller 5, offset 536 (direct) */ 
	0x0005021c, /* Controller 5, offset 540 (direct) */ 
	0x00050220, /* Controller 5, offset 544 (direct) */ 
	0x00050224, /* Controller 5, offset 548 (direct) */ 
	0x00050228, /* Controller 5, offset 552 (direct) */ 
	0x0005022c, /* Controller 5, offset 556 (direct) */ 
	0x00050230, /* Controller 5, offset 560 (direct) */ 
	0x00050234, /* Controller 5, offset 564 (direct) */ 
	0x00050238, /* Controller 5, offset 568 (direct) */ 
	0x0005023c, /* Controller 5, offset 572 (direct) */ 
	0x00050240, /* Controller 5, offset 576 (direct) */ 
	0x00050244, /* Controller 5, offset 580 (direct) */ 
	0x00050248, /* Controller 5, offset 584 (direct) */ 
	0x0005024c, /* Controller 5, offset 588 (direct) */ 
	0x00050250, /* Controller 5, offset 592 (direct) */ 
	0x00050254, /* Controller 5, offset 596 (direct) */ 
	0x00050258, /* Controller 5, offset 600 (direct) */ 
	0x0005025c, /* Controller 5, offset 604 (direct) */ 
	0x00050260, /* Controller 5, offset 608 (direct) */ 
	0x00050264, /* Controller 5, offset 612 (direct) */ 
	0x00050268, /* Controller 5, offset 616 (direct) */ 
	0x0005026c, /* Controller 5, offset 620 (direct) */ 
	0x00050270, /* Controller 5, offset 624 (direct) */ 
	0x00050274, /* Controller 5, offset 628 (direct) */ 
	0x00050278, /* Controller 5, offset 632 (direct) */ 
	0x0005027c, /* Controller 5, offset 636 (direct) */ 
	0x00050280, /* Controller 5, offset 640 (direct) */ 
	0x00050284, /* Controller 5, offset 644 (direct) */ 
	0x00050288, /* Controller 5, offset 648 (direct) */ 
	0x0005028c, /* Controller 5, offset 652 (direct) */ 
	0x00050290, /* Controller 5, offset 656 (direct) */ 
	0x00050294, /* Controller 5, offset 660 (direct) */ 
	0x00050298, /* Controller 5, offset 664 (direct) */ 
	0x0005029c, /* Controller 5, offset 668 (direct) */ 
	0x000502a0, /* Controller 5, offset 672 (direct) */ 
	0x000502a4, /* Controller 5, offset 676 (direct) */ 
	0x000502a8, /* Controller 5, offset 680 (direct) */ 
	0x000502ac, /* Controller 5, offset 684 (direct) */ 
	0x000502b0, /* Controller 5, offset 688 (direct) */ 
	0x000502b4, /* Controller 5, offset 692 (direct) */ 
	0x000502b8, /* Controller 5, offset 696 (direct) */ 
	0x000502bc, /* Controller 5, offset 700 (direct) */ 
	0x000502c0, /* Controller 5, offset 704 (direct) */ 
	0x000502c4, /* Controller 5, offset 708 (direct) */ 
	0x000502c8, /* Controller 5, offset 712 (direct) */ 
	0x000502cc, /* Controller 5, offset 716 (direct) */ 
	0x000502d0, /* Controller 5, offset 720 (direct) */ 
	0x000502d4, /* Controller 5, offset 724 (direct) */ 
	0x000502d8, /* Controller 5, offset 728 (direct) */ 
	0x000502dc, /* Controller 5, offset 732 (direct) */ 
	0x000502e0, /* Controller 5, offset 736 (direct) */ 
	0x000502e4, /* Controller 5, offset 740 (direct) */ 
	0x000502e8, /* Controller 5, offset 744 (direct) */ 
	0x000502ec, /* Controller 5, offset 748 (direct) */ 
	0x000502f0, /* Controller 5, offset 752 (direct) */ 
	0x000502f4, /* Controller 5, offset 756 (direct) */ 
	0x000502f8, /* Controller 5, offset 760 (direct) */ 
	0x000502fc, /* Controller 5, offset 764 (direct) */ 
	0x00050300, /* Controller 5, offset 768 (direct) */ 
	0x00050304, /* Controller 5, offset 772 (direct) */ 
	0x00050308, /* Controller 5, offset 776 (direct) */ 
	0x0005030c, /* Controller 5, offset 780 (direct) */ 
	0x00050310, /* Controller 5, offset 784 (direct) */ 
	0x00050314, /* Controller 5, offset 788 (direct) */ 
	0x00050318, /* Controller 5, offset 792 (direct) */ 
	0x0005031c, /* Controller 5, offset 796 (direct) */ 
	0x00050320, /* Controller 5, offset 800 (direct) */ 
	0x00050324, /* Controller 5, offset 804 (direct) */ 
	0x00050328, /* Controller 5, offset 808 (direct) */ 
	0x0005032c, /* Controller 5, offset 812 (direct) */ 
	0x00050330, /* Controller 5, offset 816 (direct) */ 
	0x00050334, /* Controller 5, offset 820 (direct) */ 
	0x00050338, /* Controller 5, offset 824 (direct) */ 
	0x0005033c, /* Controller 5, offset 828 (direct) */ 
	0x00050340, /* Controller 5, offset 832 (direct) */ 
	0x00050344, /* Controller 5, offset 836 (direct) */ 
	0x00050348, /* Controller 5, offset 840 (direct) */ 
	0x0005034c, /* Controller 5, offset 844 (direct) */ 
	0x00050350, /* Controller 5, offset 848 (direct) */ 
	0x00050354, /* Controller 5, offset 852 (direct) */ 
	0x00050358, /* Controller 5, offset 856 (direct) */ 
	0x0005035c, /* Controller 5, offset 860 (direct) */ 
	0x00050360, /* Controller 5, offset 864 (direct) */ 
	0x00050364, /* Controller 5, offset 868 (direct) */ 
	0x00050368, /* Controller 5, offset 872 (direct) */ 
	0x0005036c, /* Controller 5, offset 876 (direct) */ 
	0x00050370, /* Controller 5, offset 880 (direct) */ 
	0x00050374, /* Controller 5, offset 884 (direct) */ 
	0x00050378, /* Controller 5, offset 888 (direct) */ 
	0x0005037c, /* Controller 5, offset 892 (direct) */ 
	0x00050380, /* Controller 5, offset 896 (direct) */ 
	0x00050384, /* Controller 5, offset 900 (direct) */ 
	0x00050388, /* Controller 5, offset 904 (direct) */ 
	0x0005038c, /* Controller 5, offset 908 (direct) */ 
	0x00050390, /* Controller 5, offset 912 (direct) */ 
	0x00050394, /* Controller 5, offset 916 (direct) */ 
	0x00050398, /* Controller 5, offset 920 (direct) */ 
	0x0005039c, /* Controller 5, offset 924 (direct) */ 
	0x000503a0, /* Controller 5, offset 928 (direct) */ 
	0x000503a4, /* Controller 5, offset 932 (direct) */ 
	0x000503a8, /* Controller 5, offset 936 (direct) */ 
	0x000503ac, /* Controller 5, offset 940 (direct) */ 
	0x000503b0, /* Controller 5, offset 944 (direct) */ 
	0x000503b4, /* Controller 5, offset 948 (direct) */ 
	0x000503b8, /* Controller 5, offset 952 (direct) */ 
	0x000503bc, /* Controller 5, offset 956 (direct) */ 
	0x000503c0, /* Controller 5, offset 960 (direct) */ 
	0x000503c4, /* Controller 5, offset 964 (direct) */ 
	0x000503c8, /* Controller 5, offset 968 (direct) */ 
	0x000503cc, /* Controller 5, offset 972 (direct) */ 
	0x000503d0, /* Controller 5, offset 976 (direct) */ 
	0x000503d4, /* Controller 5, offset 980 (direct) */ 
	0x000503d8, /* Controller 5, offset 984 (direct) */ 
	0x000503dc, /* Controller 5, offset 988 (direct) */ 
	0x000503e0, /* Controller 5, offset 992 (direct) */ 
	0x000503e4, /* Controller 5, offset 996 (direct) */ 
	0x000503e8, /* Controller 5, offset 1000 (direct) */ 
	0x000503ec, /* Controller 5, offset 1004 (direct) */ 
	0x000503f0, /* Controller 5, offset 1008 (direct) */ 
	0x000503f4, /* Controller 5, offset 1012 (direct) */ 
	0x000503f8, /* Controller 5, offset 1016 (direct) */ 
	0x000503fc, /* Controller 5, offset 1020 (direct) */ 
	0x00050400, /* Controller 5, offset 1024 (direct) */ 
	0x00050404, /* Controller 5, offset 1028 (direct) */ 
	0x00050408, /* Controller 5, offset 1032 (direct) */ 
	0x0005040c, /* Controller 5, offset 1036 (direct) */ 
	0x00050410, /* Controller 5, offset 1040 (direct) */ 
	0x00050414, /* Controller 5, offset 1044 (direct) */ 
	0x00050418, /* Controller 5, offset 1048 (direct) */ 
	0x0005041c, /* Controller 5, offset 1052 (direct) */ 
	0x00050420, /* Controller 5, offset 1056 (direct) */ 
	0x00050424, /* Controller 5, offset 1060 (direct) */ 
	0x00050428, /* Controller 5, offset 1064 (direct) */ 
	0x0005042c, /* Controller 5, offset 1068 (direct) */ 
	0x00050430, /* Controller 5, offset 1072 (direct) */ 
	0x00050434, /* Controller 5, offset 1076 (direct) */ 
	0x00050438, /* Controller 5, offset 1080 (direct) */ 
	0x0005043c, /* Controller 5, offset 1084 (direct) */ 
	0x00050440, /* Controller 5, offset 1088 (direct) */ 
	0x00050444, /* Controller 5, offset 1092 (direct) */ 
	0x00050448, /* Controller 5, offset 1096 (direct) */ 
	0x0005044c, /* Controller 5, offset 1100 (direct) */ 
	0x00050450, /* Controller 5, offset 1104 (direct) */ 
	0x00050454, /* Controller 5, offset 1108 (direct) */ 
	0x00050458, /* Controller 5, offset 1112 (direct) */ 
	0x0005045c, /* Controller 5, offset 1116 (direct) */ 
	0x00050460, /* Controller 5, offset 1120 (direct) */ 
	0x00050464, /* Controller 5, offset 1124 (direct) */ 
	0x00050468, /* Controller 5, offset 1128 (direct) */ 
	0x0005046c, /* Controller 5, offset 1132 (direct) */ 
	0x00050470, /* Controller 5, offset 1136 (direct) */ 
	0x00050474, /* Controller 5, offset 1140 (direct) */ 
	0x00050478, /* Controller 5, offset 1144 (direct) */ 
	0x0005047c, /* Controller 5, offset 1148 (direct) */ 
	0x00050480, /* Controller 5, offset 1152 (direct) */ 
	0x00050484, /* Controller 5, offset 1156 (direct) */ 
	0x00050488, /* Controller 5, offset 1160 (direct) */ 
	0x0005048c, /* Controller 5, offset 1164 (direct) */ 
	0x00050490, /* Controller 5, offset 1168 (direct) */ 
	0x00050494, /* Controller 5, offset 1172 (direct) */ 
	0x00050498, /* Controller 5, offset 1176 (direct) */ 
	0x0005049c, /* Controller 5, offset 1180 (direct) */ 
	0x000504a0, /* Controller 5, offset 1184 (direct) */ 
	0x000504a4, /* Controller 5, offset 1188 (direct) */ 
	0x000504a8, /* Controller 5, offset 1192 (direct) */ 
	0x000504ac, /* Controller 5, offset 1196 (direct) */ 
	0x000504b0, /* Controller 5, offset 1200 (direct) */ 
	0x000504b4, /* Controller 5, offset 1204 (direct) */ 
	0x000504b8, /* Controller 5, offset 1208 (direct) */ 
	0x000504bc, /* Controller 5, offset 1212 (direct) */ 
	0x000504c0, /* Controller 5, offset 1216 (direct) */ 
	0x000504c4, /* Controller 5, offset 1220 (direct) */ 
	0x000504c8, /* Controller 5, offset 1224 (direct) */ 
	0x000504cc, /* Controller 5, offset 1228 (direct) */ 
	0x000504d0, /* Controller 5, offset 1232 (direct) */ 
	0x000504d4, /* Controller 5, offset 1236 (direct) */ 
	0x000504d8, /* Controller 5, offset 1240 (direct) */ 
	0x000504dc, /* Controller 5, offset 1244 (direct) */ 
	0x000504e0, /* Controller 5, offset 1248 (direct) */ 
	0x000504e4, /* Controller 5, offset 1252 (direct) */ 
	0x000504e8, /* Controller 5, offset 1256 (direct) */ 
	0x000504ec, /* Controller 5, offset 1260 (direct) */ 
	0x000504f0, /* Controller 5, offset 1264 (direct) */ 
	0x000504f4, /* Controller 5, offset 1268 (direct) */ 
	0x000504f8, /* Controller 5, offset 1272 (direct) */ 
	0x000504fc, /* Controller 5, offset 1276 (direct) */ 
	0x00050500, /* Controller 5, offset 1280 (direct) */ 
	0x00050504, /* Controller 5, offset 1284 (direct) */ 
	0x00050508, /* Controller 5, offset 1288 (direct) */ 
	0x0005050c, /* Controller 5, offset 1292 (direct) */ 
	0x00050510, /* Controller 5, offset 1296 (direct) */ 
	0x00050514, /* Controller 5, offset 1300 (direct) */ 
	0x00050518, /* Controller 5, offset 1304 (direct) */ 
	0x0005051c, /* Controller 5, offset 1308 (direct) */ 
	0x00050520, /* Controller 5, offset 1312 (direct) */ 
	0x00050524, /* Controller 5, offset 1316 (direct) */ 
	0x00050528, /* Controller 5, offset 1320 (direct) */ 
	0x0005052c, /* Controller 5, offset 1324 (direct) */ 
	0x00050530, /* Controller 5, offset 1328 (direct) */ 
	0x00050534, /* Controller 5, offset 1332 (direct) */ 
	0x00050538, /* Controller 5, offset 1336 (direct) */ 
	0x0005053c, /* Controller 5, offset 1340 (direct) */ 
	0x00050540, /* Controller 5, offset 1344 (direct) */ 
	0x00050544, /* Controller 5, offset 1348 (direct) */ 
	0x00050548, /* Controller 5, offset 1352 (direct) */ 
	0x0005054c, /* Controller 5, offset 1356 (direct) */ 
	0x00050550, /* Controller 5, offset 1360 (direct) */ 
	0x00050554, /* Controller 5, offset 1364 (direct) */ 
	0x00050558, /* Controller 5, offset 1368 (direct) */ 
	0x0005055c, /* Controller 5, offset 1372 (direct) */ 
	0x00050560, /* Controller 5, offset 1376 (direct) */ 
	0x00050564, /* Controller 5, offset 1380 (direct) */ 
	0x00050568, /* Controller 5, offset 1384 (direct) */ 
	0x0005056c, /* Controller 5, offset 1388 (direct) */ 
	0x00050570, /* Controller 5, offset 1392 (direct) */ 
	0x00050574, /* Controller 5, offset 1396 (direct) */ 
	0x00050578, /* Controller 5, offset 1400 (direct) */ 
	0x0005057c, /* Controller 5, offset 1404 (direct) */ 
	0x00050580, /* Controller 5, offset 1408 (direct) */ 
	0x00050584, /* Controller 5, offset 1412 (direct) */ 
	0x00050588, /* Controller 5, offset 1416 (direct) */ 
	0x0005058c, /* Controller 5, offset 1420 (direct) */ 
	0x00050590, /* Controller 5, offset 1424 (direct) */ 
	0x00050594, /* Controller 5, offset 1428 (direct) */ 
	0x00050598, /* Controller 5, offset 1432 (direct) */ 
	0x0005059c, /* Controller 5, offset 1436 (direct) */ 
	0x000505a0, /* Controller 5, offset 1440 (direct) */ 
	0x000505a4, /* Controller 5, offset 1444 (direct) */ 
	0x000505a8, /* Controller 5, offset 1448 (direct) */ 
	0x000505ac, /* Controller 5, offset 1452 (direct) */ 
	0x000505b0, /* Controller 5, offset 1456 (direct) */ 
	0x000505b4, /* Controller 5, offset 1460 (direct) */ 
	0x000505b8, /* Controller 5, offset 1464 (direct) */ 
	0x000505bc, /* Controller 5, offset 1468 (direct) */ 
	0x000505c0, /* Controller 5, offset 1472 (direct) */ 
	0x000505c4, /* Controller 5, offset 1476 (direct) */ 
	0x000505c8, /* Controller 5, offset 1480 (direct) */ 
	0x000505cc, /* Controller 5, offset 1484 (direct) */ 
	0x000505d0, /* Controller 5, offset 1488 (direct) */ 
	0x000505d4, /* Controller 5, offset 1492 (direct) */ 
	0x000505d8, /* Controller 5, offset 1496 (direct) */ 
	0x000505dc, /* Controller 5, offset 1500 (direct) */ 
	0x000505e0, /* Controller 5, offset 1504 (direct) */ 
	0x000505e4, /* Controller 5, offset 1508 (direct) */ 
	0x000505e8, /* Controller 5, offset 1512 (direct) */ 
	0x000505ec, /* Controller 5, offset 1516 (direct) */ 
	0x000505f0, /* Controller 5, offset 1520 (direct) */ 
	0x000505f4, /* Controller 5, offset 1524 (direct) */ 
	0x000505f8, /* Controller 5, offset 1528 (direct) */ 
	0x000505fc, /* Controller 5, offset 1532 (direct) */ 
	0x00050600, /* Controller 5, offset 1536 (direct) */ 
	0x00050604, /* Controller 5, offset 1540 (direct) */ 
	0x00050608, /* Controller 5, offset 1544 (direct) */ 
	0x0005060c, /* Controller 5, offset 1548 (direct) */ 
	0x00050610, /* Controller 5, offset 1552 (direct) */ 
	0x00050614, /* Controller 5, offset 1556 (direct) */ 
	0x00050618, /* Controller 5, offset 1560 (direct) */ 
	0x0005061c, /* Controller 5, offset 1564 (direct) */ 
	0x00050620, /* Controller 5, offset 1568 (direct) */ 
	0x00050624, /* Controller 5, offset 1572 (direct) */ 
	0x00050628, /* Controller 5, offset 1576 (direct) */ 
	0x0005062c, /* Controller 5, offset 1580 (direct) */ 
	0x00050630, /* Controller 5, offset 1584 (direct) */ 
	0x00050634, /* Controller 5, offset 1588 (direct) */ 
	0x00050638, /* Controller 5, offset 1592 (direct) */ 
	0x0005063c, /* Controller 5, offset 1596 (direct) */ 
	0x00050640, /* Controller 5, offset 1600 (direct) */ 
	0x00050644, /* Controller 5, offset 1604 (direct) */ 
	0x00050648, /* Controller 5, offset 1608 (direct) */ 
	0x0005064c, /* Controller 5, offset 1612 (direct) */ 
	0x00050650, /* Controller 5, offset 1616 (direct) */ 
	0x00050654, /* Controller 5, offset 1620 (direct) */ 
	0x00050658, /* Controller 5, offset 1624 (direct) */ 
	0x0005065c, /* Controller 5, offset 1628 (direct) */ 
	0x00050660, /* Controller 5, offset 1632 (direct) */ 
	0x00050664, /* Controller 5, offset 1636 (direct) */ 
	0x00050668, /* Controller 5, offset 1640 (direct) */ 
	0x0005066c, /* Controller 5, offset 1644 (direct) */ 
	0x00050670, /* Controller 5, offset 1648 (direct) */ 
	0x00050674, /* Controller 5, offset 1652 (direct) */ 
	0x00050678, /* Controller 5, offset 1656 (direct) */ 
	0x0005067c, /* Controller 5, offset 1660 (direct) */ 
	0x00050680, /* Controller 5, offset 1664 (direct) */ 
	0x00050684, /* Controller 5, offset 1668 (direct) */ 
	0x00050688, /* Controller 5, offset 1672 (direct) */ 
	0x0005068c, /* Controller 5, offset 1676 (direct) */ 
	0x00050690, /* Controller 5, offset 1680 (direct) */ 
	0x00050694, /* Controller 5, offset 1684 (direct) */ 
	0x00050698, /* Controller 5, offset 1688 (direct) */ 
	0x0005069c, /* Controller 5, offset 1692 (direct) */ 
	0x000506a0, /* Controller 5, offset 1696 (direct) */ 
	0x000506a4, /* Controller 5, offset 1700 (direct) */ 
	0x000506a8, /* Controller 5, offset 1704 (direct) */ 
	0x000506ac, /* Controller 5, offset 1708 (direct) */ 
	0x000506b0, /* Controller 5, offset 1712 (direct) */ 
	0x000506b4, /* Controller 5, offset 1716 (direct) */ 
	0x000506b8, /* Controller 5, offset 1720 (direct) */ 
	0x000506bc, /* Controller 5, offset 1724 (direct) */ 
	0x000506c0, /* Controller 5, offset 1728 (direct) */ 
	0x000506c4, /* Controller 5, offset 1732 (direct) */ 
	0x000506c8, /* Controller 5, offset 1736 (direct) */ 
	0x000506cc, /* Controller 5, offset 1740 (direct) */ 
	0x000506d0, /* Controller 5, offset 1744 (direct) */ 
	0x000506d4, /* Controller 5, offset 1748 (direct) */ 
	0x000506d8, /* Controller 5, offset 1752 (direct) */ 
	0x000506dc, /* Controller 5, offset 1756 (direct) */ 
	0x000506e0, /* Controller 5, offset 1760 (direct) */ 
	0x000506e4, /* Controller 5, offset 1764 (direct) */ 
	0x000506e8, /* Controller 5, offset 1768 (direct) */ 
	0x000506ec, /* Controller 5, offset 1772 (direct) */ 
	0x000506f0, /* Controller 5, offset 1776 (direct) */ 
	0x000506f4, /* Controller 5, offset 1780 (direct) */ 
	0x000506f8, /* Controller 5, offset 1784 (direct) */ 
	0x000506fc, /* Controller 5, offset 1788 (direct) */ 
	0x00050700, /* Controller 5, offset 1792 (direct) */ 
	0x00050704, /* Controller 5, offset 1796 (direct) */ 
	0x00050708, /* Controller 5, offset 1800 (direct) */ 
	0x0005070c, /* Controller 5, offset 1804 (direct) */ 
	0x00050710, /* Controller 5, offset 1808 (direct) */ 
	0x00050714, /* Controller 5, offset 1812 (direct) */ 
	0x00050718, /* Controller 5, offset 1816 (direct) */ 
	0x0005071c, /* Controller 5, offset 1820 (direct) */ 
	0x00050720, /* Controller 5, offset 1824 (direct) */ 
	0x00050724, /* Controller 5, offset 1828 (direct) */ 
	0x00050728, /* Controller 5, offset 1832 (direct) */ 
	0x0005072c, /* Controller 5, offset 1836 (direct) */ 
	0x00050730, /* Controller 5, offset 1840 (direct) */ 
	0x00050734, /* Controller 5, offset 1844 (direct) */ 
	0x00050738, /* Controller 5, offset 1848 (direct) */ 
	0x0005073c, /* Controller 5, offset 1852 (direct) */ 
	0x00050740, /* Controller 5, offset 1856 (direct) */ 
	0x00050744, /* Controller 5, offset 1860 (direct) */ 
	0x00050748, /* Controller 5, offset 1864 (direct) */ 
	0x0005074c, /* Controller 5, offset 1868 (direct) */ 
	0x00050750, /* Controller 5, offset 1872 (direct) */ 
	0x00050754, /* Controller 5, offset 1876 (direct) */ 
	0x00050758, /* Controller 5, offset 1880 (direct) */ 
	0x0005075c, /* Controller 5, offset 1884 (direct) */ 
	0x00050760, /* Controller 5, offset 1888 (direct) */ 
	0x00050764, /* Controller 5, offset 1892 (direct) */ 
	0x00050768, /* Controller 5, offset 1896 (direct) */ 
	0x0005076c, /* Controller 5, offset 1900 (direct) */ 
	0x00050770, /* Controller 5, offset 1904 (direct) */ 
	0x00050774, /* Controller 5, offset 1908 (direct) */ 
	0x00050778, /* Controller 5, offset 1912 (direct) */ 
	0x0005077c, /* Controller 5, offset 1916 (direct) */ 
	0x00050780, /* Controller 5, offset 1920 (direct) */ 
	0x00050784, /* Controller 5, offset 1924 (direct) */ 
	0x00050788, /* Controller 5, offset 1928 (direct) */ 
	0x0005078c, /* Controller 5, offset 1932 (direct) */ 
	0x00050790, /* Controller 5, offset 1936 (direct) */ 
	0x00050794, /* Controller 5, offset 1940 (direct) */ 
	0x00050798, /* Controller 5, offset 1944 (direct) */ 
	0x0005079c, /* Controller 5, offset 1948 (direct) */ 
	0x000507a0, /* Controller 5, offset 1952 (direct) */ 
	0x000507a4, /* Controller 5, offset 1956 (direct) */ 
	0x000507a8, /* Controller 5, offset 1960 (direct) */ 
	0x000507ac, /* Controller 5, offset 1964 (direct) */ 
	0x000507b0, /* Controller 5, offset 1968 (direct) */ 
	0x000507b4, /* Controller 5, offset 1972 (direct) */ 
	0x000507b8, /* Controller 5, offset 1976 (direct) */ 
	0x000507bc, /* Controller 5, offset 1980 (direct) */ 
	0x000507c0, /* Controller 5, offset 1984 (direct) */ 
	0x000507c4, /* Controller 5, offset 1988 (direct) */ 
	0x000507c8, /* Controller 5, offset 1992 (direct) */ 
	0x000507cc, /* Controller 5, offset 1996 (direct) */ 
	0x000507d0, /* Controller 5, offset 2000 (direct) */ 
	0x000507d4, /* Controller 5, offset 2004 (direct) */ 
	0x000507d8, /* Controller 5, offset 2008 (direct) */ 
	0x000507dc, /* Controller 5, offset 2012 (direct) */ 
	0x000507e0, /* Controller 5, offset 2016 (direct) */ 
	0x000507e4, /* Controller 5, offset 2020 (direct) */ 
	0x000507e8, /* Controller 5, offset 2024 (direct) */ 
	0x000507ec, /* Controller 5, offset 2028 (direct) */ 
	0x000507f0, /* Controller 5, offset 2032 (direct) */ 
	0x000507f4, /* Controller 5, offset 2036 (direct) */ 
	0x000507f8, /* Controller 5, offset 2040 (direct) */ 
	0x000507fc, /* Controller 5, offset 2044 (direct) */ 
	0x00050800, /* Controller 5, offset 2048 (direct) */ 
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
	0x00060044, /* Controller 6, offset 68 (direct) */ 
	0x00060048, /* Controller 6, offset 72 (direct) */ 
	0x0006004c, /* Controller 6, offset 76 (direct) */ 
	0x00060050, /* Controller 6, offset 80 (direct) */ 
	0x00060054, /* Controller 6, offset 84 (direct) */ 
	0x00060058, /* Controller 6, offset 88 (direct) */ 
	0x0006005c, /* Controller 6, offset 92 (direct) */ 
	0x00060060, /* Controller 6, offset 96 (direct) */ 
	0x00060064, /* Controller 6, offset 100 (direct) */ 
	0x00060068, /* Controller 6, offset 104 (direct) */ 
	0x0006006c, /* Controller 6, offset 108 (direct) */ 
	0x00060070, /* Controller 6, offset 112 (direct) */ 
	0x00060074, /* Controller 6, offset 116 (direct) */ 
	0x00060078, /* Controller 6, offset 120 (direct) */ 
	0x0006007c, /* Controller 6, offset 124 (direct) */ 
	0x00060080, /* Controller 6, offset 128 (direct) */ 
	0x00060084, /* Controller 6, offset 132 (direct) */ 
	0x00060088, /* Controller 6, offset 136 (direct) */ 
	0x0006008c, /* Controller 6, offset 140 (direct) */ 
	0x00060090, /* Controller 6, offset 144 (direct) */ 
	0x00060094, /* Controller 6, offset 148 (direct) */ 
	0x00060098, /* Controller 6, offset 152 (direct) */ 
	0x0006009c, /* Controller 6, offset 156 (direct) */ 
	0x000600a0, /* Controller 6, offset 160 (direct) */ 
	0x000600a4, /* Controller 6, offset 164 (direct) */ 
	0x000600a8, /* Controller 6, offset 168 (direct) */ 
	0x000600ac, /* Controller 6, offset 172 (direct) */ 
	0x000600b0, /* Controller 6, offset 176 (direct) */ 
	0x000600b4, /* Controller 6, offset 180 (direct) */ 
	0x000600b8, /* Controller 6, offset 184 (direct) */ 
	0x000600bc, /* Controller 6, offset 188 (direct) */ 
	0x000600c0, /* Controller 6, offset 192 (direct) */ 
	0x000600c4, /* Controller 6, offset 196 (direct) */ 
	0x000600c8, /* Controller 6, offset 200 (direct) */ 
	0x000600cc, /* Controller 6, offset 204 (direct) */ 
	0x000600d0, /* Controller 6, offset 208 (direct) */ 
	0x000600d4, /* Controller 6, offset 212 (direct) */ 
	0x000600d8, /* Controller 6, offset 216 (direct) */ 
	0x000600dc, /* Controller 6, offset 220 (direct) */ 
	0x000600e0, /* Controller 6, offset 224 (direct) */ 
	0x000600e4, /* Controller 6, offset 228 (direct) */ 
	0x000600e8, /* Controller 6, offset 232 (direct) */ 
	0x000600ec, /* Controller 6, offset 236 (direct) */ 
	0x000600f0, /* Controller 6, offset 240 (direct) */ 
	0x000600f4, /* Controller 6, offset 244 (direct) */ 
	0x000600f8, /* Controller 6, offset 248 (direct) */ 
	0x000600fc, /* Controller 6, offset 252 (direct) */ 
	0x00060100, /* Controller 6, offset 256 (direct) */ 
	0x00060104, /* Controller 6, offset 260 (direct) */ 
	0x00060108, /* Controller 6, offset 264 (direct) */ 
	0x0006010c, /* Controller 6, offset 268 (direct) */ 
	0x00060110, /* Controller 6, offset 272 (direct) */ 
	0x00060114, /* Controller 6, offset 276 (direct) */ 
	0x00060118, /* Controller 6, offset 280 (direct) */ 
	0x0006011c, /* Controller 6, offset 284 (direct) */ 
	0x00060120, /* Controller 6, offset 288 (direct) */ 
	0x00060124, /* Controller 6, offset 292 (direct) */ 
	0x00060128, /* Controller 6, offset 296 (direct) */ 
	0x0006012c, /* Controller 6, offset 300 (direct) */ 
	0x00060130, /* Controller 6, offset 304 (direct) */ 
	0x00060134, /* Controller 6, offset 308 (direct) */ 
	0x00060138, /* Controller 6, offset 312 (direct) */ 
	0x0006013c, /* Controller 6, offset 316 (direct) */ 
	0x00060140, /* Controller 6, offset 320 (direct) */ 
	0x00060144, /* Controller 6, offset 324 (direct) */ 
	0x00060148, /* Controller 6, offset 328 (direct) */ 
	0x0006014c, /* Controller 6, offset 332 (direct) */ 
	0x00060150, /* Controller 6, offset 336 (direct) */ 
	0x00060154, /* Controller 6, offset 340 (direct) */ 
	0x00060158, /* Controller 6, offset 344 (direct) */ 
	0x0006015c, /* Controller 6, offset 348 (direct) */ 
	0x00060160, /* Controller 6, offset 352 (direct) */ 
	0x00060164, /* Controller 6, offset 356 (direct) */ 
	0x00060168, /* Controller 6, offset 360 (direct) */ 
	0x0006016c, /* Controller 6, offset 364 (direct) */ 
	0x00060170, /* Controller 6, offset 368 (direct) */ 
	0x00060174, /* Controller 6, offset 372 (direct) */ 
	0x00060178, /* Controller 6, offset 376 (direct) */ 
	0x0006017c, /* Controller 6, offset 380 (direct) */ 
	0x00060180, /* Controller 6, offset 384 (direct) */ 
	0x00060184, /* Controller 6, offset 388 (direct) */ 
	0x00060188, /* Controller 6, offset 392 (direct) */ 
	0x0006018c, /* Controller 6, offset 396 (direct) */ 
	0x00060190, /* Controller 6, offset 400 (direct) */ 
	0x00060194, /* Controller 6, offset 404 (direct) */ 
	0x00060198, /* Controller 6, offset 408 (direct) */ 
	0x0006019c, /* Controller 6, offset 412 (direct) */ 
	0x000601a0, /* Controller 6, offset 416 (direct) */ 
	0x000601a4, /* Controller 6, offset 420 (direct) */ 
	0x000601a8, /* Controller 6, offset 424 (direct) */ 
	0x000601ac, /* Controller 6, offset 428 (direct) */ 
	0x000601b0, /* Controller 6, offset 432 (direct) */ 
	0x000601b4, /* Controller 6, offset 436 (direct) */ 
	0x000601b8, /* Controller 6, offset 440 (direct) */ 
	0x000601bc, /* Controller 6, offset 444 (direct) */ 
	0x000601c0, /* Controller 6, offset 448 (direct) */ 
	0x000601c4, /* Controller 6, offset 452 (direct) */ 
	0x000601c8, /* Controller 6, offset 456 (direct) */ 
	0x000601cc, /* Controller 6, offset 460 (direct) */ 
	0x000601d0, /* Controller 6, offset 464 (direct) */ 
	0x000601d4, /* Controller 6, offset 468 (direct) */ 
	0x000601d8, /* Controller 6, offset 472 (direct) */ 
	0x000601dc, /* Controller 6, offset 476 (direct) */ 
	0x000601e0, /* Controller 6, offset 480 (direct) */ 
	0x000601e4, /* Controller 6, offset 484 (direct) */ 
	0x000601e8, /* Controller 6, offset 488 (direct) */ 
	0x000601ec, /* Controller 6, offset 492 (direct) */ 
	0x000601f0, /* Controller 6, offset 496 (direct) */ 
	0x000601f4, /* Controller 6, offset 500 (direct) */ 
	0x000601f8, /* Controller 6, offset 504 (direct) */ 
	0x000601fc, /* Controller 6, offset 508 (direct) */ 
	0x00060200, /* Controller 6, offset 512 (direct) */ 
	0x00060204, /* Controller 6, offset 516 (direct) */ 
	0x00060208, /* Controller 6, offset 520 (direct) */ 
	0x0006020c, /* Controller 6, offset 524 (direct) */ 
	0x00060210, /* Controller 6, offset 528 (direct) */ 
	0x00060214, /* Controller 6, offset 532 (direct) */ 
	0x00060218, /* Controller 6, offset 536 (direct) */ 
	0x0006021c, /* Controller 6, offset 540 (direct) */ 
	0x00060220, /* Controller 6, offset 544 (direct) */ 
	0x00060224, /* Controller 6, offset 548 (direct) */ 
	0x00060228, /* Controller 6, offset 552 (direct) */ 
	0x0006022c, /* Controller 6, offset 556 (direct) */ 
	0x00060230, /* Controller 6, offset 560 (direct) */ 
	0x00060234, /* Controller 6, offset 564 (direct) */ 
	0x00060238, /* Controller 6, offset 568 (direct) */ 
	0x0006023c, /* Controller 6, offset 572 (direct) */ 
	0x00060240, /* Controller 6, offset 576 (direct) */ 
	0x00060244, /* Controller 6, offset 580 (direct) */ 
	0x00060248, /* Controller 6, offset 584 (direct) */ 
	0x0006024c, /* Controller 6, offset 588 (direct) */ 
	0x00060250, /* Controller 6, offset 592 (direct) */ 
	0x00060254, /* Controller 6, offset 596 (direct) */ 
	0x00060258, /* Controller 6, offset 600 (direct) */ 
	0x0006025c, /* Controller 6, offset 604 (direct) */ 
	0x00060260, /* Controller 6, offset 608 (direct) */ 
	0x00060264, /* Controller 6, offset 612 (direct) */ 
	0x00060268, /* Controller 6, offset 616 (direct) */ 
	0x0006026c, /* Controller 6, offset 620 (direct) */ 
	0x00060270, /* Controller 6, offset 624 (direct) */ 
	0x00060274, /* Controller 6, offset 628 (direct) */ 
	0x00060278, /* Controller 6, offset 632 (direct) */ 
	0x0006027c, /* Controller 6, offset 636 (direct) */ 
	0x00060280, /* Controller 6, offset 640 (direct) */ 
	0x00060284, /* Controller 6, offset 644 (direct) */ 
	0x00060288, /* Controller 6, offset 648 (direct) */ 
	0x0006028c, /* Controller 6, offset 652 (direct) */ 
	0x00060290, /* Controller 6, offset 656 (direct) */ 
	0x00060294, /* Controller 6, offset 660 (direct) */ 
	0x00060298, /* Controller 6, offset 664 (direct) */ 
	0x0006029c, /* Controller 6, offset 668 (direct) */ 
	0x000602a0, /* Controller 6, offset 672 (direct) */ 
	0x000602a4, /* Controller 6, offset 676 (direct) */ 
	0x000602a8, /* Controller 6, offset 680 (direct) */ 
	0x000602ac, /* Controller 6, offset 684 (direct) */ 
	0x000602b0, /* Controller 6, offset 688 (direct) */ 
	0x000602b4, /* Controller 6, offset 692 (direct) */ 
	0x000602b8, /* Controller 6, offset 696 (direct) */ 
	0x000602bc, /* Controller 6, offset 700 (direct) */ 
	0x000602c0, /* Controller 6, offset 704 (direct) */ 
	0x000602c4, /* Controller 6, offset 708 (direct) */ 
	0x000602c8, /* Controller 6, offset 712 (direct) */ 
	0x000602cc, /* Controller 6, offset 716 (direct) */ 
	0x000602d0, /* Controller 6, offset 720 (direct) */ 
	0x000602d4, /* Controller 6, offset 724 (direct) */ 
	0x000602d8, /* Controller 6, offset 728 (direct) */ 
	0x000602dc, /* Controller 6, offset 732 (direct) */ 
	0x000602e0, /* Controller 6, offset 736 (direct) */ 
	0x000602e4, /* Controller 6, offset 740 (direct) */ 
	0x000602e8, /* Controller 6, offset 744 (direct) */ 
	0x000602ec, /* Controller 6, offset 748 (direct) */ 
	0x000602f0, /* Controller 6, offset 752 (direct) */ 
	0x000602f4, /* Controller 6, offset 756 (direct) */ 
	0x000602f8, /* Controller 6, offset 760 (direct) */ 
	0x000602fc, /* Controller 6, offset 764 (direct) */ 
	0x00060300, /* Controller 6, offset 768 (direct) */ 
	0x00060304, /* Controller 6, offset 772 (direct) */ 
	0x00060308, /* Controller 6, offset 776 (direct) */ 
	0x0006030c, /* Controller 6, offset 780 (direct) */ 
	0x00060310, /* Controller 6, offset 784 (direct) */ 
	0x00060314, /* Controller 6, offset 788 (direct) */ 
	0x00060318, /* Controller 6, offset 792 (direct) */ 
	0x0006031c, /* Controller 6, offset 796 (direct) */ 
	0x00060320, /* Controller 6, offset 800 (direct) */ 
	0x00060324, /* Controller 6, offset 804 (direct) */ 
	0x00060328, /* Controller 6, offset 808 (direct) */ 
	0x0006032c, /* Controller 6, offset 812 (direct) */ 
	0x00060330, /* Controller 6, offset 816 (direct) */ 
	0x00060334, /* Controller 6, offset 820 (direct) */ 
	0x00060338, /* Controller 6, offset 824 (direct) */ 
	0x0006033c, /* Controller 6, offset 828 (direct) */ 
	0x00060340, /* Controller 6, offset 832 (direct) */ 
	0x00060344, /* Controller 6, offset 836 (direct) */ 
	0x00060348, /* Controller 6, offset 840 (direct) */ 
	0x0006034c, /* Controller 6, offset 844 (direct) */ 
	0x00060350, /* Controller 6, offset 848 (direct) */ 
	0x00060354, /* Controller 6, offset 852 (direct) */ 
	0x00060358, /* Controller 6, offset 856 (direct) */ 
	0x0006035c, /* Controller 6, offset 860 (direct) */ 
	0x00060360, /* Controller 6, offset 864 (direct) */ 
	0x00060364, /* Controller 6, offset 868 (direct) */ 
	0x00060368, /* Controller 6, offset 872 (direct) */ 
	0x0006036c, /* Controller 6, offset 876 (direct) */ 
	0x00060370, /* Controller 6, offset 880 (direct) */ 
	0x00060374, /* Controller 6, offset 884 (direct) */ 
	0x00060378, /* Controller 6, offset 888 (direct) */ 
	0x0006037c, /* Controller 6, offset 892 (direct) */ 
	0x00060380, /* Controller 6, offset 896 (direct) */ 
	0x00060384, /* Controller 6, offset 900 (direct) */ 
	0x00060388, /* Controller 6, offset 904 (direct) */ 
	0x0006038c, /* Controller 6, offset 908 (direct) */ 
	0x00060390, /* Controller 6, offset 912 (direct) */ 
	0x00060394, /* Controller 6, offset 916 (direct) */ 
	0x00060398, /* Controller 6, offset 920 (direct) */ 
	0x0006039c, /* Controller 6, offset 924 (direct) */ 
	0x000603a0, /* Controller 6, offset 928 (direct) */ 
	0x000603a4, /* Controller 6, offset 932 (direct) */ 
	0x000603a8, /* Controller 6, offset 936 (direct) */ 
	0x000603ac, /* Controller 6, offset 940 (direct) */ 
	0x000603b0, /* Controller 6, offset 944 (direct) */ 
	0x000603b4, /* Controller 6, offset 948 (direct) */ 
	0x000603b8, /* Controller 6, offset 952 (direct) */ 
	0x000603bc, /* Controller 6, offset 956 (direct) */ 
	0x000603c0, /* Controller 6, offset 960 (direct) */ 
	0x000603c4, /* Controller 6, offset 964 (direct) */ 
	0x000603c8, /* Controller 6, offset 968 (direct) */ 
	0x000603cc, /* Controller 6, offset 972 (direct) */ 
	0x000603d0, /* Controller 6, offset 976 (direct) */ 
	0x000603d4, /* Controller 6, offset 980 (direct) */ 
	0x000603d8, /* Controller 6, offset 984 (direct) */ 
	0x000603dc, /* Controller 6, offset 988 (direct) */ 
	0x000603e0, /* Controller 6, offset 992 (direct) */ 
	0x000603e4, /* Controller 6, offset 996 (direct) */ 
	0x000603e8, /* Controller 6, offset 1000 (direct) */ 
	0x000603ec, /* Controller 6, offset 1004 (direct) */ 
	0x000603f0, /* Controller 6, offset 1008 (direct) */ 
	0x000603f4, /* Controller 6, offset 1012 (direct) */ 
	0x000603f8, /* Controller 6, offset 1016 (direct) */ 
	0x000603fc, /* Controller 6, offset 1020 (direct) */ 
	0x00060400, /* Controller 6, offset 1024 (direct) */ 
	0x00060404, /* Controller 6, offset 1028 (direct) */ 
	0x00060408, /* Controller 6, offset 1032 (direct) */ 
	0x0006040c, /* Controller 6, offset 1036 (direct) */ 
	0x00060410, /* Controller 6, offset 1040 (direct) */ 
	0x00060414, /* Controller 6, offset 1044 (direct) */ 
	0x00060418, /* Controller 6, offset 1048 (direct) */ 
	0x0006041c, /* Controller 6, offset 1052 (direct) */ 
	0x00060420, /* Controller 6, offset 1056 (direct) */ 
	0x00060424, /* Controller 6, offset 1060 (direct) */ 
	0x00060428, /* Controller 6, offset 1064 (direct) */ 
	0x0006042c, /* Controller 6, offset 1068 (direct) */ 
	0x00060430, /* Controller 6, offset 1072 (direct) */ 
	0x00060434, /* Controller 6, offset 1076 (direct) */ 
	0x00060438, /* Controller 6, offset 1080 (direct) */ 
	0x0006043c, /* Controller 6, offset 1084 (direct) */ 
	0x00060440, /* Controller 6, offset 1088 (direct) */ 
	0x00060444, /* Controller 6, offset 1092 (direct) */ 
	0x00060448, /* Controller 6, offset 1096 (direct) */ 
	0x0006044c, /* Controller 6, offset 1100 (direct) */ 
	0x00060450, /* Controller 6, offset 1104 (direct) */ 
	0x00060454, /* Controller 6, offset 1108 (direct) */ 
	0x00060458, /* Controller 6, offset 1112 (direct) */ 
	0x0006045c, /* Controller 6, offset 1116 (direct) */ 
	0x00060460, /* Controller 6, offset 1120 (direct) */ 
	0x00060464, /* Controller 6, offset 1124 (direct) */ 
	0x00060468, /* Controller 6, offset 1128 (direct) */ 
	0x0006046c, /* Controller 6, offset 1132 (direct) */ 
	0x00060470, /* Controller 6, offset 1136 (direct) */ 
	0x00060474, /* Controller 6, offset 1140 (direct) */ 
	0x00060478, /* Controller 6, offset 1144 (direct) */ 
	0x0006047c, /* Controller 6, offset 1148 (direct) */ 
	0x00060480, /* Controller 6, offset 1152 (direct) */ 
	0x00060484, /* Controller 6, offset 1156 (direct) */ 
	0x00060488, /* Controller 6, offset 1160 (direct) */ 
	0x0006048c, /* Controller 6, offset 1164 (direct) */ 
	0x00060490, /* Controller 6, offset 1168 (direct) */ 
	0x00060494, /* Controller 6, offset 1172 (direct) */ 
	0x00060498, /* Controller 6, offset 1176 (direct) */ 
	0x0006049c, /* Controller 6, offset 1180 (direct) */ 
	0x000604a0, /* Controller 6, offset 1184 (direct) */ 
	0x000604a4, /* Controller 6, offset 1188 (direct) */ 
	0x000604a8, /* Controller 6, offset 1192 (direct) */ 
	0x000604ac, /* Controller 6, offset 1196 (direct) */ 
	0x000604b0, /* Controller 6, offset 1200 (direct) */ 
	0x000604b4, /* Controller 6, offset 1204 (direct) */ 
	0x000604b8, /* Controller 6, offset 1208 (direct) */ 
	0x000604bc, /* Controller 6, offset 1212 (direct) */ 
	0x000604c0, /* Controller 6, offset 1216 (direct) */ 
	0x000604c4, /* Controller 6, offset 1220 (direct) */ 
	0x000604c8, /* Controller 6, offset 1224 (direct) */ 
	0x000604cc, /* Controller 6, offset 1228 (direct) */ 
	0x000604d0, /* Controller 6, offset 1232 (direct) */ 
	0x000604d4, /* Controller 6, offset 1236 (direct) */ 
	0x000604d8, /* Controller 6, offset 1240 (direct) */ 
	0x000604dc, /* Controller 6, offset 1244 (direct) */ 
	0x000604e0, /* Controller 6, offset 1248 (direct) */ 
	0x000604e4, /* Controller 6, offset 1252 (direct) */ 
	0x000604e8, /* Controller 6, offset 1256 (direct) */ 
	0x000604ec, /* Controller 6, offset 1260 (direct) */ 
	0x000604f0, /* Controller 6, offset 1264 (direct) */ 
	0x000604f4, /* Controller 6, offset 1268 (direct) */ 
	0x000604f8, /* Controller 6, offset 1272 (direct) */ 
	0x000604fc, /* Controller 6, offset 1276 (direct) */ 
	0x00060500, /* Controller 6, offset 1280 (direct) */ 
	0x00060504, /* Controller 6, offset 1284 (direct) */ 
	0x00060508, /* Controller 6, offset 1288 (direct) */ 
	0x0006050c, /* Controller 6, offset 1292 (direct) */ 
	0x00060510, /* Controller 6, offset 1296 (direct) */ 
	0x00060514, /* Controller 6, offset 1300 (direct) */ 
	0x00060518, /* Controller 6, offset 1304 (direct) */ 
	0x0006051c, /* Controller 6, offset 1308 (direct) */ 
	0x00060520, /* Controller 6, offset 1312 (direct) */ 
	0x00060524, /* Controller 6, offset 1316 (direct) */ 
	0x00060528, /* Controller 6, offset 1320 (direct) */ 
	0x0006052c, /* Controller 6, offset 1324 (direct) */ 
	0x00060530, /* Controller 6, offset 1328 (direct) */ 
	0x00060534, /* Controller 6, offset 1332 (direct) */ 
	0x00060538, /* Controller 6, offset 1336 (direct) */ 
	0x0006053c, /* Controller 6, offset 1340 (direct) */ 
	0x00060540, /* Controller 6, offset 1344 (direct) */ 
	0x00060544, /* Controller 6, offset 1348 (direct) */ 
	0x00060548, /* Controller 6, offset 1352 (direct) */ 
	0x0006054c, /* Controller 6, offset 1356 (direct) */ 
	0x00060550, /* Controller 6, offset 1360 (direct) */ 
	0x00060554, /* Controller 6, offset 1364 (direct) */ 
	0x00060558, /* Controller 6, offset 1368 (direct) */ 
	0x0006055c, /* Controller 6, offset 1372 (direct) */ 
	0x00060560, /* Controller 6, offset 1376 (direct) */ 
	0x00060564, /* Controller 6, offset 1380 (direct) */ 
	0x00060568, /* Controller 6, offset 1384 (direct) */ 
	0x0006056c, /* Controller 6, offset 1388 (direct) */ 
	0x00060570, /* Controller 6, offset 1392 (direct) */ 
	0x00060574, /* Controller 6, offset 1396 (direct) */ 
	0x00060578, /* Controller 6, offset 1400 (direct) */ 
	0x0006057c, /* Controller 6, offset 1404 (direct) */ 
	0x00060580, /* Controller 6, offset 1408 (direct) */ 
	0x00060584, /* Controller 6, offset 1412 (direct) */ 
	0x00060588, /* Controller 6, offset 1416 (direct) */ 
	0x0006058c, /* Controller 6, offset 1420 (direct) */ 
	0x00060590, /* Controller 6, offset 1424 (direct) */ 
	0x00060594, /* Controller 6, offset 1428 (direct) */ 
	0x00060598, /* Controller 6, offset 1432 (direct) */ 
	0x0006059c, /* Controller 6, offset 1436 (direct) */ 
	0x000605a0, /* Controller 6, offset 1440 (direct) */ 
	0x000605a4, /* Controller 6, offset 1444 (direct) */ 
	0x000605a8, /* Controller 6, offset 1448 (direct) */ 
	0x000605ac, /* Controller 6, offset 1452 (direct) */ 
	0x000605b0, /* Controller 6, offset 1456 (direct) */ 
	0x000605b4, /* Controller 6, offset 1460 (direct) */ 
	0x000605b8, /* Controller 6, offset 1464 (direct) */ 
	0x000605bc, /* Controller 6, offset 1468 (direct) */ 
	0x000605c0, /* Controller 6, offset 1472 (direct) */ 
	0x000605c4, /* Controller 6, offset 1476 (direct) */ 
	0x000605c8, /* Controller 6, offset 1480 (direct) */ 
	0x000605cc, /* Controller 6, offset 1484 (direct) */ 
	0x000605d0, /* Controller 6, offset 1488 (direct) */ 
	0x000605d4, /* Controller 6, offset 1492 (direct) */ 
	0x000605d8, /* Controller 6, offset 1496 (direct) */ 
	0x000605dc, /* Controller 6, offset 1500 (direct) */ 
	0x000605e0, /* Controller 6, offset 1504 (direct) */ 
	0x000605e4, /* Controller 6, offset 1508 (direct) */ 
	0x000605e8, /* Controller 6, offset 1512 (direct) */ 
	0x000605ec, /* Controller 6, offset 1516 (direct) */ 
	0x000605f0, /* Controller 6, offset 1520 (direct) */ 
	0x000605f4, /* Controller 6, offset 1524 (direct) */ 
	0x000605f8, /* Controller 6, offset 1528 (direct) */ 
	0x000605fc, /* Controller 6, offset 1532 (direct) */ 
	0x00060600, /* Controller 6, offset 1536 (direct) */ 
	0x00060604, /* Controller 6, offset 1540 (direct) */ 
	0x00060608, /* Controller 6, offset 1544 (direct) */ 
	0x0006060c, /* Controller 6, offset 1548 (direct) */ 
	0x00060610, /* Controller 6, offset 1552 (direct) */ 
	0x00060614, /* Controller 6, offset 1556 (direct) */ 
	0x00060618, /* Controller 6, offset 1560 (direct) */ 
	0x0006061c, /* Controller 6, offset 1564 (direct) */ 
	0x00060620, /* Controller 6, offset 1568 (direct) */ 
	0x00060624, /* Controller 6, offset 1572 (direct) */ 
	0x00060628, /* Controller 6, offset 1576 (direct) */ 
	0x0006062c, /* Controller 6, offset 1580 (direct) */ 
	0x00060630, /* Controller 6, offset 1584 (direct) */ 
	0x00060634, /* Controller 6, offset 1588 (direct) */ 
	0x00060638, /* Controller 6, offset 1592 (direct) */ 
	0x0006063c, /* Controller 6, offset 1596 (direct) */ 
	0x00060640, /* Controller 6, offset 1600 (direct) */ 
	0x00060644, /* Controller 6, offset 1604 (direct) */ 
	0x00060648, /* Controller 6, offset 1608 (direct) */ 
	0x0006064c, /* Controller 6, offset 1612 (direct) */ 
	0x00060650, /* Controller 6, offset 1616 (direct) */ 
	0x00060654, /* Controller 6, offset 1620 (direct) */ 
	0x00060658, /* Controller 6, offset 1624 (direct) */ 
	0x0006065c, /* Controller 6, offset 1628 (direct) */ 
	0x00060660, /* Controller 6, offset 1632 (direct) */ 
	0x00060664, /* Controller 6, offset 1636 (direct) */ 
	0x00060668, /* Controller 6, offset 1640 (direct) */ 
	0x0006066c, /* Controller 6, offset 1644 (direct) */ 
	0x00060670, /* Controller 6, offset 1648 (direct) */ 
	0x00060674, /* Controller 6, offset 1652 (direct) */ 
	0x00060678, /* Controller 6, offset 1656 (direct) */ 
	0x0006067c, /* Controller 6, offset 1660 (direct) */ 
	0x00060680, /* Controller 6, offset 1664 (direct) */ 
	0x00060684, /* Controller 6, offset 1668 (direct) */ 
	0x00060688, /* Controller 6, offset 1672 (direct) */ 
	0x0006068c, /* Controller 6, offset 1676 (direct) */ 
	0x00060690, /* Controller 6, offset 1680 (direct) */ 
	0x00060694, /* Controller 6, offset 1684 (direct) */ 
	0x00060698, /* Controller 6, offset 1688 (direct) */ 
	0x0006069c, /* Controller 6, offset 1692 (direct) */ 
	0x000606a0, /* Controller 6, offset 1696 (direct) */ 
	0x000606a4, /* Controller 6, offset 1700 (direct) */ 
	0x000606a8, /* Controller 6, offset 1704 (direct) */ 
	0x000606ac, /* Controller 6, offset 1708 (direct) */ 
	0x000606b0, /* Controller 6, offset 1712 (direct) */ 
	0x000606b4, /* Controller 6, offset 1716 (direct) */ 
	0x000606b8, /* Controller 6, offset 1720 (direct) */ 
	0x000606bc, /* Controller 6, offset 1724 (direct) */ 
	0x000606c0, /* Controller 6, offset 1728 (direct) */ 
	0x000606c4, /* Controller 6, offset 1732 (direct) */ 
	0x000606c8, /* Controller 6, offset 1736 (direct) */ 
	0x000606cc, /* Controller 6, offset 1740 (direct) */ 
	0x000606d0, /* Controller 6, offset 1744 (direct) */ 
	0x000606d4, /* Controller 6, offset 1748 (direct) */ 
	0x000606d8, /* Controller 6, offset 1752 (direct) */ 
	0x000606dc, /* Controller 6, offset 1756 (direct) */ 
	0x000606e0, /* Controller 6, offset 1760 (direct) */ 
	0x000606e4, /* Controller 6, offset 1764 (direct) */ 
	0x000606e8, /* Controller 6, offset 1768 (direct) */ 
	0x000606ec, /* Controller 6, offset 1772 (direct) */ 
	0x000606f0, /* Controller 6, offset 1776 (direct) */ 
	0x000606f4, /* Controller 6, offset 1780 (direct) */ 
	0x000606f8, /* Controller 6, offset 1784 (direct) */ 
	0x000606fc, /* Controller 6, offset 1788 (direct) */ 
	0x00060700, /* Controller 6, offset 1792 (direct) */ 
	0x00060704, /* Controller 6, offset 1796 (direct) */ 
	0x00060708, /* Controller 6, offset 1800 (direct) */ 
	0x0006070c, /* Controller 6, offset 1804 (direct) */ 
	0x00060710, /* Controller 6, offset 1808 (direct) */ 
	0x00060714, /* Controller 6, offset 1812 (direct) */ 
	0x00060718, /* Controller 6, offset 1816 (direct) */ 
	0x0006071c, /* Controller 6, offset 1820 (direct) */ 
	0x00060720, /* Controller 6, offset 1824 (direct) */ 
	0x00060724, /* Controller 6, offset 1828 (direct) */ 
	0x00060728, /* Controller 6, offset 1832 (direct) */ 
	0x0006072c, /* Controller 6, offset 1836 (direct) */ 
	0x00060730, /* Controller 6, offset 1840 (direct) */ 
	0x00060734, /* Controller 6, offset 1844 (direct) */ 
	0x00060738, /* Controller 6, offset 1848 (direct) */ 
	0x0006073c, /* Controller 6, offset 1852 (direct) */ 
	0x00060740, /* Controller 6, offset 1856 (direct) */ 
	0x00060744, /* Controller 6, offset 1860 (direct) */ 
	0x00060748, /* Controller 6, offset 1864 (direct) */ 
	0x0006074c, /* Controller 6, offset 1868 (direct) */ 
	0x00060750, /* Controller 6, offset 1872 (direct) */ 
	0x00060754, /* Controller 6, offset 1876 (direct) */ 
	0x00060758, /* Controller 6, offset 1880 (direct) */ 
	0x0006075c, /* Controller 6, offset 1884 (direct) */ 
	0x00060760, /* Controller 6, offset 1888 (direct) */ 
	0x00060764, /* Controller 6, offset 1892 (direct) */ 
	0x00060768, /* Controller 6, offset 1896 (direct) */ 
	0x0006076c, /* Controller 6, offset 1900 (direct) */ 
	0x00060770, /* Controller 6, offset 1904 (direct) */ 
	0x00060774, /* Controller 6, offset 1908 (direct) */ 
	0x00060778, /* Controller 6, offset 1912 (direct) */ 
	0x0006077c, /* Controller 6, offset 1916 (direct) */ 
	0x00060780, /* Controller 6, offset 1920 (direct) */ 
	0x00060784, /* Controller 6, offset 1924 (direct) */ 
	0x00060788, /* Controller 6, offset 1928 (direct) */ 
	0x0006078c, /* Controller 6, offset 1932 (direct) */ 
	0x00060790, /* Controller 6, offset 1936 (direct) */ 
	0x00060794, /* Controller 6, offset 1940 (direct) */ 
	0x00060798, /* Controller 6, offset 1944 (direct) */ 
	0x0006079c, /* Controller 6, offset 1948 (direct) */ 
	0x000607a0, /* Controller 6, offset 1952 (direct) */ 
	0x000607a4, /* Controller 6, offset 1956 (direct) */ 
	0x000607a8, /* Controller 6, offset 1960 (direct) */ 
	0x000607ac, /* Controller 6, offset 1964 (direct) */ 
	0x000607b0, /* Controller 6, offset 1968 (direct) */ 
	0x000607b4, /* Controller 6, offset 1972 (direct) */ 
	0x000607b8, /* Controller 6, offset 1976 (direct) */ 
	0x000607bc, /* Controller 6, offset 1980 (direct) */ 
	0x000607c0, /* Controller 6, offset 1984 (direct) */ 
	0x000607c4, /* Controller 6, offset 1988 (direct) */ 
	0x000607c8, /* Controller 6, offset 1992 (direct) */ 
	0x000607cc, /* Controller 6, offset 1996 (direct) */ 
	0x000607d0, /* Controller 6, offset 2000 (direct) */ 
	0x000607d4, /* Controller 6, offset 2004 (direct) */ 
	0x000607d8, /* Controller 6, offset 2008 (direct) */ 
	0x000607dc, /* Controller 6, offset 2012 (direct) */ 
	0x000607e0, /* Controller 6, offset 2016 (direct) */ 
	0x000607e4, /* Controller 6, offset 2020 (direct) */ 
	0x000607e8, /* Controller 6, offset 2024 (direct) */ 
	0x000607ec, /* Controller 6, offset 2028 (direct) */ 
	0x000607f0, /* Controller 6, offset 2032 (direct) */ 
	0x000607f4, /* Controller 6, offset 2036 (direct) */ 
	0x000607f8, /* Controller 6, offset 2040 (direct) */ 
	0x000607fc, /* Controller 6, offset 2044 (direct) */ 
	0x00060800, /* Controller 6, offset 2048 (direct) */ 
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
	0x00070044, /* Controller 7, offset 68 (direct) */ 
	0x00070048, /* Controller 7, offset 72 (direct) */ 
	0x0007004c, /* Controller 7, offset 76 (direct) */ 
	0x00070050, /* Controller 7, offset 80 (direct) */ 
	0x00070054, /* Controller 7, offset 84 (direct) */ 
	0x00070058, /* Controller 7, offset 88 (direct) */ 
	0x0007005c, /* Controller 7, offset 92 (direct) */ 
	0x00070060, /* Controller 7, offset 96 (direct) */ 
	0x00070064, /* Controller 7, offset 100 (direct) */ 
	0x00070068, /* Controller 7, offset 104 (direct) */ 
	0x0007006c, /* Controller 7, offset 108 (direct) */ 
	0x00070070, /* Controller 7, offset 112 (direct) */ 
	0x00070074, /* Controller 7, offset 116 (direct) */ 
	0x00070078, /* Controller 7, offset 120 (direct) */ 
	0x0007007c, /* Controller 7, offset 124 (direct) */ 
	0x00070080, /* Controller 7, offset 128 (direct) */ 
	0x00070084, /* Controller 7, offset 132 (direct) */ 
	0x00070088, /* Controller 7, offset 136 (direct) */ 
	0x0007008c, /* Controller 7, offset 140 (direct) */ 
	0x00070090, /* Controller 7, offset 144 (direct) */ 
	0x00070094, /* Controller 7, offset 148 (direct) */ 
	0x00070098, /* Controller 7, offset 152 (direct) */ 
	0x0007009c, /* Controller 7, offset 156 (direct) */ 
	0x000700a0, /* Controller 7, offset 160 (direct) */ 
	0x000700a4, /* Controller 7, offset 164 (direct) */ 
	0x000700a8, /* Controller 7, offset 168 (direct) */ 
	0x000700ac, /* Controller 7, offset 172 (direct) */ 
	0x000700b0, /* Controller 7, offset 176 (direct) */ 
	0x000700b4, /* Controller 7, offset 180 (direct) */ 
	0x000700b8, /* Controller 7, offset 184 (direct) */ 
	0x000700bc, /* Controller 7, offset 188 (direct) */ 
	0x000700c0, /* Controller 7, offset 192 (direct) */ 
	0x000700c4, /* Controller 7, offset 196 (direct) */ 
	0x000700c8, /* Controller 7, offset 200 (direct) */ 
	0x000700cc, /* Controller 7, offset 204 (direct) */ 
	0x000700d0, /* Controller 7, offset 208 (direct) */ 
	0x000700d4, /* Controller 7, offset 212 (direct) */ 
	0x000700d8, /* Controller 7, offset 216 (direct) */ 
	0x000700dc, /* Controller 7, offset 220 (direct) */ 
	0x000700e0, /* Controller 7, offset 224 (direct) */ 
	0x000700e4, /* Controller 7, offset 228 (direct) */ 
	0x000700e8, /* Controller 7, offset 232 (direct) */ 
	0x000700ec, /* Controller 7, offset 236 (direct) */ 
	0x000700f0, /* Controller 7, offset 240 (direct) */ 
	0x000700f4, /* Controller 7, offset 244 (direct) */ 
	0x000700f8, /* Controller 7, offset 248 (direct) */ 
	0x000700fc, /* Controller 7, offset 252 (direct) */ 
	0x00070100, /* Controller 7, offset 256 (direct) */ 
	0x00070104, /* Controller 7, offset 260 (direct) */ 
	0x00070108, /* Controller 7, offset 264 (direct) */ 
	0x0007010c, /* Controller 7, offset 268 (direct) */ 
	0x00070110, /* Controller 7, offset 272 (direct) */ 
	0x00070114, /* Controller 7, offset 276 (direct) */ 
	0x00070118, /* Controller 7, offset 280 (direct) */ 
	0x0007011c, /* Controller 7, offset 284 (direct) */ 
	0x00070120, /* Controller 7, offset 288 (direct) */ 
	0x00070124, /* Controller 7, offset 292 (direct) */ 
	0x00070128, /* Controller 7, offset 296 (direct) */ 
	0x0007012c, /* Controller 7, offset 300 (direct) */ 
	0x00070130, /* Controller 7, offset 304 (direct) */ 
	0x00070134, /* Controller 7, offset 308 (direct) */ 
	0x00070138, /* Controller 7, offset 312 (direct) */ 
	0x0007013c, /* Controller 7, offset 316 (direct) */ 
	0x00070140, /* Controller 7, offset 320 (direct) */ 
	0x00070144, /* Controller 7, offset 324 (direct) */ 
	0x00070148, /* Controller 7, offset 328 (direct) */ 
	0x0007014c, /* Controller 7, offset 332 (direct) */ 
	0x00070150, /* Controller 7, offset 336 (direct) */ 
	0x00070154, /* Controller 7, offset 340 (direct) */ 
	0x00070158, /* Controller 7, offset 344 (direct) */ 
	0x0007015c, /* Controller 7, offset 348 (direct) */ 
	0x00070160, /* Controller 7, offset 352 (direct) */ 
	0x00070164, /* Controller 7, offset 356 (direct) */ 
	0x00070168, /* Controller 7, offset 360 (direct) */ 
	0x0007016c, /* Controller 7, offset 364 (direct) */ 
	0x00070170, /* Controller 7, offset 368 (direct) */ 
	0x00070174, /* Controller 7, offset 372 (direct) */ 
	0x00070178, /* Controller 7, offset 376 (direct) */ 
	0x0007017c, /* Controller 7, offset 380 (direct) */ 
	0x00070180, /* Controller 7, offset 384 (direct) */ 
	0x00070184, /* Controller 7, offset 388 (direct) */ 
	0x00070188, /* Controller 7, offset 392 (direct) */ 
	0x0007018c, /* Controller 7, offset 396 (direct) */ 
	0x00070190, /* Controller 7, offset 400 (direct) */ 
	0x00070194, /* Controller 7, offset 404 (direct) */ 
	0x00070198, /* Controller 7, offset 408 (direct) */ 
	0x0007019c, /* Controller 7, offset 412 (direct) */ 
	0x000701a0, /* Controller 7, offset 416 (direct) */ 
	0x000701a4, /* Controller 7, offset 420 (direct) */ 
	0x000701a8, /* Controller 7, offset 424 (direct) */ 
	0x000701ac, /* Controller 7, offset 428 (direct) */ 
	0x000701b0, /* Controller 7, offset 432 (direct) */ 
	0x000701b4, /* Controller 7, offset 436 (direct) */ 
	0x000701b8, /* Controller 7, offset 440 (direct) */ 
	0x000701bc, /* Controller 7, offset 444 (direct) */ 
	0x000701c0, /* Controller 7, offset 448 (direct) */ 
	0x000701c4, /* Controller 7, offset 452 (direct) */ 
	0x000701c8, /* Controller 7, offset 456 (direct) */ 
	0x000701cc, /* Controller 7, offset 460 (direct) */ 
	0x000701d0, /* Controller 7, offset 464 (direct) */ 
	0x000701d4, /* Controller 7, offset 468 (direct) */ 
	0x000701d8, /* Controller 7, offset 472 (direct) */ 
	0x000701dc, /* Controller 7, offset 476 (direct) */ 
	0x000701e0, /* Controller 7, offset 480 (direct) */ 
	0x000701e4, /* Controller 7, offset 484 (direct) */ 
	0x000701e8, /* Controller 7, offset 488 (direct) */ 
	0x000701ec, /* Controller 7, offset 492 (direct) */ 
	0x000701f0, /* Controller 7, offset 496 (direct) */ 
	0x000701f4, /* Controller 7, offset 500 (direct) */ 
	0x000701f8, /* Controller 7, offset 504 (direct) */ 
	0x000701fc, /* Controller 7, offset 508 (direct) */ 
	0x00070200, /* Controller 7, offset 512 (direct) */ 
	0x00070204, /* Controller 7, offset 516 (direct) */ 
	0x00070208, /* Controller 7, offset 520 (direct) */ 
	0x0007020c, /* Controller 7, offset 524 (direct) */ 
	0x00070210, /* Controller 7, offset 528 (direct) */ 
	0x00070214, /* Controller 7, offset 532 (direct) */ 
	0x00070218, /* Controller 7, offset 536 (direct) */ 
	0x0007021c, /* Controller 7, offset 540 (direct) */ 
	0x00070220, /* Controller 7, offset 544 (direct) */ 
	0x00070224, /* Controller 7, offset 548 (direct) */ 
	0x00070228, /* Controller 7, offset 552 (direct) */ 
	0x0007022c, /* Controller 7, offset 556 (direct) */ 
	0x00070230, /* Controller 7, offset 560 (direct) */ 
	0x00070234, /* Controller 7, offset 564 (direct) */ 
	0x00070238, /* Controller 7, offset 568 (direct) */ 
	0x0007023c, /* Controller 7, offset 572 (direct) */ 
	0x00070240, /* Controller 7, offset 576 (direct) */ 
	0x00070244, /* Controller 7, offset 580 (direct) */ 
	0x00070248, /* Controller 7, offset 584 (direct) */ 
	0x0007024c, /* Controller 7, offset 588 (direct) */ 
	0x00070250, /* Controller 7, offset 592 (direct) */ 
	0x00070254, /* Controller 7, offset 596 (direct) */ 
	0x00070258, /* Controller 7, offset 600 (direct) */ 
	0x0007025c, /* Controller 7, offset 604 (direct) */ 
	0x00070260, /* Controller 7, offset 608 (direct) */ 
	0x00070264, /* Controller 7, offset 612 (direct) */ 
	0x00070268, /* Controller 7, offset 616 (direct) */ 
	0x0007026c, /* Controller 7, offset 620 (direct) */ 
	0x00070270, /* Controller 7, offset 624 (direct) */ 
	0x00070274, /* Controller 7, offset 628 (direct) */ 
	0x00070278, /* Controller 7, offset 632 (direct) */ 
	0x0007027c, /* Controller 7, offset 636 (direct) */ 
	0x00070280, /* Controller 7, offset 640 (direct) */ 
	0x00070284, /* Controller 7, offset 644 (direct) */ 
	0x00070288, /* Controller 7, offset 648 (direct) */ 
	0x0007028c, /* Controller 7, offset 652 (direct) */ 
	0x00070290, /* Controller 7, offset 656 (direct) */ 
	0x00070294, /* Controller 7, offset 660 (direct) */ 
	0x00070298, /* Controller 7, offset 664 (direct) */ 
	0x0007029c, /* Controller 7, offset 668 (direct) */ 
	0x000702a0, /* Controller 7, offset 672 (direct) */ 
	0x000702a4, /* Controller 7, offset 676 (direct) */ 
	0x000702a8, /* Controller 7, offset 680 (direct) */ 
	0x000702ac, /* Controller 7, offset 684 (direct) */ 
	0x000702b0, /* Controller 7, offset 688 (direct) */ 
	0x000702b4, /* Controller 7, offset 692 (direct) */ 
	0x000702b8, /* Controller 7, offset 696 (direct) */ 
	0x000702bc, /* Controller 7, offset 700 (direct) */ 
	0x000702c0, /* Controller 7, offset 704 (direct) */ 
	0x000702c4, /* Controller 7, offset 708 (direct) */ 
	0x000702c8, /* Controller 7, offset 712 (direct) */ 
	0x000702cc, /* Controller 7, offset 716 (direct) */ 
	0x000702d0, /* Controller 7, offset 720 (direct) */ 
	0x000702d4, /* Controller 7, offset 724 (direct) */ 
	0x000702d8, /* Controller 7, offset 728 (direct) */ 
	0x000702dc, /* Controller 7, offset 732 (direct) */ 
	0x000702e0, /* Controller 7, offset 736 (direct) */ 
	0x000702e4, /* Controller 7, offset 740 (direct) */ 
	0x000702e8, /* Controller 7, offset 744 (direct) */ 
	0x000702ec, /* Controller 7, offset 748 (direct) */ 
	0x000702f0, /* Controller 7, offset 752 (direct) */ 
	0x000702f4, /* Controller 7, offset 756 (direct) */ 
	0x000702f8, /* Controller 7, offset 760 (direct) */ 
	0x000702fc, /* Controller 7, offset 764 (direct) */ 
	0x00070300, /* Controller 7, offset 768 (direct) */ 
	0x00070304, /* Controller 7, offset 772 (direct) */ 
	0x00070308, /* Controller 7, offset 776 (direct) */ 
	0x0007030c, /* Controller 7, offset 780 (direct) */ 
	0x00070310, /* Controller 7, offset 784 (direct) */ 
	0x00070314, /* Controller 7, offset 788 (direct) */ 
	0x00070318, /* Controller 7, offset 792 (direct) */ 
	0x0007031c, /* Controller 7, offset 796 (direct) */ 
	0x00070320, /* Controller 7, offset 800 (direct) */ 
	0x00070324, /* Controller 7, offset 804 (direct) */ 
	0x00070328, /* Controller 7, offset 808 (direct) */ 
	0x0007032c, /* Controller 7, offset 812 (direct) */ 
	0x00070330, /* Controller 7, offset 816 (direct) */ 
	0x00070334, /* Controller 7, offset 820 (direct) */ 
	0x00070338, /* Controller 7, offset 824 (direct) */ 
	0x0007033c, /* Controller 7, offset 828 (direct) */ 
	0x00070340, /* Controller 7, offset 832 (direct) */ 
	0x00070344, /* Controller 7, offset 836 (direct) */ 
	0x00070348, /* Controller 7, offset 840 (direct) */ 
	0x0007034c, /* Controller 7, offset 844 (direct) */ 
	0x00070350, /* Controller 7, offset 848 (direct) */ 
	0x00070354, /* Controller 7, offset 852 (direct) */ 
	0x00070358, /* Controller 7, offset 856 (direct) */ 
	0x0007035c, /* Controller 7, offset 860 (direct) */ 
	0x00070360, /* Controller 7, offset 864 (direct) */ 
	0x00070364, /* Controller 7, offset 868 (direct) */ 
	0x00070368, /* Controller 7, offset 872 (direct) */ 
	0x0007036c, /* Controller 7, offset 876 (direct) */ 
	0x00070370, /* Controller 7, offset 880 (direct) */ 
	0x00070374, /* Controller 7, offset 884 (direct) */ 
	0x00070378, /* Controller 7, offset 888 (direct) */ 
	0x0007037c, /* Controller 7, offset 892 (direct) */ 
	0x00070380, /* Controller 7, offset 896 (direct) */ 
	0x00070384, /* Controller 7, offset 900 (direct) */ 
	0x00070388, /* Controller 7, offset 904 (direct) */ 
	0x0007038c, /* Controller 7, offset 908 (direct) */ 
	0x00070390, /* Controller 7, offset 912 (direct) */ 
	0x00070394, /* Controller 7, offset 916 (direct) */ 
	0x00070398, /* Controller 7, offset 920 (direct) */ 
	0x0007039c, /* Controller 7, offset 924 (direct) */ 
	0x000703a0, /* Controller 7, offset 928 (direct) */ 
	0x000703a4, /* Controller 7, offset 932 (direct) */ 
	0x000703a8, /* Controller 7, offset 936 (direct) */ 
	0x000703ac, /* Controller 7, offset 940 (direct) */ 
	0x000703b0, /* Controller 7, offset 944 (direct) */ 
	0x000703b4, /* Controller 7, offset 948 (direct) */ 
	0x000703b8, /* Controller 7, offset 952 (direct) */ 
	0x000703bc, /* Controller 7, offset 956 (direct) */ 
	0x000703c0, /* Controller 7, offset 960 (direct) */ 
	0x000703c4, /* Controller 7, offset 964 (direct) */ 
	0x000703c8, /* Controller 7, offset 968 (direct) */ 
	0x000703cc, /* Controller 7, offset 972 (direct) */ 
	0x000703d0, /* Controller 7, offset 976 (direct) */ 
	0x000703d4, /* Controller 7, offset 980 (direct) */ 
	0x000703d8, /* Controller 7, offset 984 (direct) */ 
	0x000703dc, /* Controller 7, offset 988 (direct) */ 
	0x000703e0, /* Controller 7, offset 992 (direct) */ 
	0x000703e4, /* Controller 7, offset 996 (direct) */ 
	0x000703e8, /* Controller 7, offset 1000 (direct) */ 
	0x000703ec, /* Controller 7, offset 1004 (direct) */ 
	0x000703f0, /* Controller 7, offset 1008 (direct) */ 
	0x000703f4, /* Controller 7, offset 1012 (direct) */ 
	0x000703f8, /* Controller 7, offset 1016 (direct) */ 
	0x000703fc, /* Controller 7, offset 1020 (direct) */ 
	0x00070400, /* Controller 7, offset 1024 (direct) */ 
	0x00070404, /* Controller 7, offset 1028 (direct) */ 
	0x00070408, /* Controller 7, offset 1032 (direct) */ 
	0x0007040c, /* Controller 7, offset 1036 (direct) */ 
	0x00070410, /* Controller 7, offset 1040 (direct) */ 
	0x00070414, /* Controller 7, offset 1044 (direct) */ 
	0x00070418, /* Controller 7, offset 1048 (direct) */ 
	0x0007041c, /* Controller 7, offset 1052 (direct) */ 
	0x00070420, /* Controller 7, offset 1056 (direct) */ 
	0x00070424, /* Controller 7, offset 1060 (direct) */ 
	0x00070428, /* Controller 7, offset 1064 (direct) */ 
	0x0007042c, /* Controller 7, offset 1068 (direct) */ 
	0x00070430, /* Controller 7, offset 1072 (direct) */ 
	0x00070434, /* Controller 7, offset 1076 (direct) */ 
	0x00070438, /* Controller 7, offset 1080 (direct) */ 
	0x0007043c, /* Controller 7, offset 1084 (direct) */ 
	0x00070440, /* Controller 7, offset 1088 (direct) */ 
	0x00070444, /* Controller 7, offset 1092 (direct) */ 
	0x00070448, /* Controller 7, offset 1096 (direct) */ 
	0x0007044c, /* Controller 7, offset 1100 (direct) */ 
	0x00070450, /* Controller 7, offset 1104 (direct) */ 
	0x00070454, /* Controller 7, offset 1108 (direct) */ 
	0x00070458, /* Controller 7, offset 1112 (direct) */ 
	0x0007045c, /* Controller 7, offset 1116 (direct) */ 
	0x00070460, /* Controller 7, offset 1120 (direct) */ 
	0x00070464, /* Controller 7, offset 1124 (direct) */ 
	0x00070468, /* Controller 7, offset 1128 (direct) */ 
	0x0007046c, /* Controller 7, offset 1132 (direct) */ 
	0x00070470, /* Controller 7, offset 1136 (direct) */ 
	0x00070474, /* Controller 7, offset 1140 (direct) */ 
	0x00070478, /* Controller 7, offset 1144 (direct) */ 
	0x0007047c, /* Controller 7, offset 1148 (direct) */ 
	0x00070480, /* Controller 7, offset 1152 (direct) */ 
	0x00070484, /* Controller 7, offset 1156 (direct) */ 
	0x00070488, /* Controller 7, offset 1160 (direct) */ 
	0x0007048c, /* Controller 7, offset 1164 (direct) */ 
	0x00070490, /* Controller 7, offset 1168 (direct) */ 
	0x00070494, /* Controller 7, offset 1172 (direct) */ 
	0x00070498, /* Controller 7, offset 1176 (direct) */ 
	0x0007049c, /* Controller 7, offset 1180 (direct) */ 
	0x000704a0, /* Controller 7, offset 1184 (direct) */ 
	0x000704a4, /* Controller 7, offset 1188 (direct) */ 
	0x000704a8, /* Controller 7, offset 1192 (direct) */ 
	0x000704ac, /* Controller 7, offset 1196 (direct) */ 
	0x000704b0, /* Controller 7, offset 1200 (direct) */ 
	0x000704b4, /* Controller 7, offset 1204 (direct) */ 
	0x000704b8, /* Controller 7, offset 1208 (direct) */ 
	0x000704bc, /* Controller 7, offset 1212 (direct) */ 
	0x000704c0, /* Controller 7, offset 1216 (direct) */ 
	0x000704c4, /* Controller 7, offset 1220 (direct) */ 
	0x000704c8, /* Controller 7, offset 1224 (direct) */ 
	0x000704cc, /* Controller 7, offset 1228 (direct) */ 
	0x000704d0, /* Controller 7, offset 1232 (direct) */ 
	0x000704d4, /* Controller 7, offset 1236 (direct) */ 
	0x000704d8, /* Controller 7, offset 1240 (direct) */ 
	0x000704dc, /* Controller 7, offset 1244 (direct) */ 
	0x000704e0, /* Controller 7, offset 1248 (direct) */ 
	0x000704e4, /* Controller 7, offset 1252 (direct) */ 
	0x000704e8, /* Controller 7, offset 1256 (direct) */ 
	0x000704ec, /* Controller 7, offset 1260 (direct) */ 
	0x000704f0, /* Controller 7, offset 1264 (direct) */ 
	0x000704f4, /* Controller 7, offset 1268 (direct) */ 
	0x000704f8, /* Controller 7, offset 1272 (direct) */ 
	0x000704fc, /* Controller 7, offset 1276 (direct) */ 
	0x00070500, /* Controller 7, offset 1280 (direct) */ 
	0x00070504, /* Controller 7, offset 1284 (direct) */ 
	0x00070508, /* Controller 7, offset 1288 (direct) */ 
	0x0007050c, /* Controller 7, offset 1292 (direct) */ 
	0x00070510, /* Controller 7, offset 1296 (direct) */ 
	0x00070514, /* Controller 7, offset 1300 (direct) */ 
	0x00070518, /* Controller 7, offset 1304 (direct) */ 
	0x0007051c, /* Controller 7, offset 1308 (direct) */ 
	0x00070520, /* Controller 7, offset 1312 (direct) */ 
	0x00070524, /* Controller 7, offset 1316 (direct) */ 
	0x00070528, /* Controller 7, offset 1320 (direct) */ 
	0x0007052c, /* Controller 7, offset 1324 (direct) */ 
	0x00070530, /* Controller 7, offset 1328 (direct) */ 
	0x00070534, /* Controller 7, offset 1332 (direct) */ 
	0x00070538, /* Controller 7, offset 1336 (direct) */ 
	0x0007053c, /* Controller 7, offset 1340 (direct) */ 
	0x00070540, /* Controller 7, offset 1344 (direct) */ 
	0x00070544, /* Controller 7, offset 1348 (direct) */ 
	0x00070548, /* Controller 7, offset 1352 (direct) */ 
	0x0007054c, /* Controller 7, offset 1356 (direct) */ 
	0x00070550, /* Controller 7, offset 1360 (direct) */ 
	0x00070554, /* Controller 7, offset 1364 (direct) */ 
	0x00070558, /* Controller 7, offset 1368 (direct) */ 
	0x0007055c, /* Controller 7, offset 1372 (direct) */ 
	0x00070560, /* Controller 7, offset 1376 (direct) */ 
	0x00070564, /* Controller 7, offset 1380 (direct) */ 
	0x00070568, /* Controller 7, offset 1384 (direct) */ 
	0x0007056c, /* Controller 7, offset 1388 (direct) */ 
	0x00070570, /* Controller 7, offset 1392 (direct) */ 
	0x00070574, /* Controller 7, offset 1396 (direct) */ 
	0x00070578, /* Controller 7, offset 1400 (direct) */ 
	0x0007057c, /* Controller 7, offset 1404 (direct) */ 
	0x00070580, /* Controller 7, offset 1408 (direct) */ 
	0x00070584, /* Controller 7, offset 1412 (direct) */ 
	0x00070588, /* Controller 7, offset 1416 (direct) */ 
	0x0007058c, /* Controller 7, offset 1420 (direct) */ 
	0x00070590, /* Controller 7, offset 1424 (direct) */ 
	0x00070594, /* Controller 7, offset 1428 (direct) */ 
	0x00070598, /* Controller 7, offset 1432 (direct) */ 
	0x0007059c, /* Controller 7, offset 1436 (direct) */ 
	0x000705a0, /* Controller 7, offset 1440 (direct) */ 
	0x000705a4, /* Controller 7, offset 1444 (direct) */ 
	0x000705a8, /* Controller 7, offset 1448 (direct) */ 
	0x000705ac, /* Controller 7, offset 1452 (direct) */ 
	0x000705b0, /* Controller 7, offset 1456 (direct) */ 
	0x000705b4, /* Controller 7, offset 1460 (direct) */ 
	0x000705b8, /* Controller 7, offset 1464 (direct) */ 
	0x000705bc, /* Controller 7, offset 1468 (direct) */ 
	0x000705c0, /* Controller 7, offset 1472 (direct) */ 
	0x000705c4, /* Controller 7, offset 1476 (direct) */ 
	0x000705c8, /* Controller 7, offset 1480 (direct) */ 
	0x000705cc, /* Controller 7, offset 1484 (direct) */ 
	0x000705d0, /* Controller 7, offset 1488 (direct) */ 
	0x000705d4, /* Controller 7, offset 1492 (direct) */ 
	0x000705d8, /* Controller 7, offset 1496 (direct) */ 
	0x000705dc, /* Controller 7, offset 1500 (direct) */ 
	0x000705e0, /* Controller 7, offset 1504 (direct) */ 
	0x000705e4, /* Controller 7, offset 1508 (direct) */ 
	0x000705e8, /* Controller 7, offset 1512 (direct) */ 
	0x000705ec, /* Controller 7, offset 1516 (direct) */ 
	0x000705f0, /* Controller 7, offset 1520 (direct) */ 
	0x000705f4, /* Controller 7, offset 1524 (direct) */ 
	0x000705f8, /* Controller 7, offset 1528 (direct) */ 
	0x000705fc, /* Controller 7, offset 1532 (direct) */ 
	0x00070600, /* Controller 7, offset 1536 (direct) */ 
	0x00070604, /* Controller 7, offset 1540 (direct) */ 
	0x00070608, /* Controller 7, offset 1544 (direct) */ 
	0x0007060c, /* Controller 7, offset 1548 (direct) */ 
	0x00070610, /* Controller 7, offset 1552 (direct) */ 
	0x00070614, /* Controller 7, offset 1556 (direct) */ 
	0x00070618, /* Controller 7, offset 1560 (direct) */ 
	0x0007061c, /* Controller 7, offset 1564 (direct) */ 
	0x00070620, /* Controller 7, offset 1568 (direct) */ 
	0x00070624, /* Controller 7, offset 1572 (direct) */ 
	0x00070628, /* Controller 7, offset 1576 (direct) */ 
	0x0007062c, /* Controller 7, offset 1580 (direct) */ 
	0x00070630, /* Controller 7, offset 1584 (direct) */ 
	0x00070634, /* Controller 7, offset 1588 (direct) */ 
	0x00070638, /* Controller 7, offset 1592 (direct) */ 
	0x0007063c, /* Controller 7, offset 1596 (direct) */ 
	0x00070640, /* Controller 7, offset 1600 (direct) */ 
	0x00070644, /* Controller 7, offset 1604 (direct) */ 
	0x00070648, /* Controller 7, offset 1608 (direct) */ 
	0x0007064c, /* Controller 7, offset 1612 (direct) */ 
	0x00070650, /* Controller 7, offset 1616 (direct) */ 
	0x00070654, /* Controller 7, offset 1620 (direct) */ 
	0x00070658, /* Controller 7, offset 1624 (direct) */ 
	0x0007065c, /* Controller 7, offset 1628 (direct) */ 
	0x00070660, /* Controller 7, offset 1632 (direct) */ 
	0x00070664, /* Controller 7, offset 1636 (direct) */ 
	0x00070668, /* Controller 7, offset 1640 (direct) */ 
	0x0007066c, /* Controller 7, offset 1644 (direct) */ 
	0x00070670, /* Controller 7, offset 1648 (direct) */ 
	0x00070674, /* Controller 7, offset 1652 (direct) */ 
	0x00070678, /* Controller 7, offset 1656 (direct) */ 
	0x0007067c, /* Controller 7, offset 1660 (direct) */ 
	0x00070680, /* Controller 7, offset 1664 (direct) */ 
	0x00070684, /* Controller 7, offset 1668 (direct) */ 
	0x00070688, /* Controller 7, offset 1672 (direct) */ 
	0x0007068c, /* Controller 7, offset 1676 (direct) */ 
	0x00070690, /* Controller 7, offset 1680 (direct) */ 
	0x00070694, /* Controller 7, offset 1684 (direct) */ 
	0x00070698, /* Controller 7, offset 1688 (direct) */ 
	0x0007069c, /* Controller 7, offset 1692 (direct) */ 
	0x000706a0, /* Controller 7, offset 1696 (direct) */ 
	0x000706a4, /* Controller 7, offset 1700 (direct) */ 
	0x000706a8, /* Controller 7, offset 1704 (direct) */ 
	0x000706ac, /* Controller 7, offset 1708 (direct) */ 
	0x000706b0, /* Controller 7, offset 1712 (direct) */ 
	0x000706b4, /* Controller 7, offset 1716 (direct) */ 
	0x000706b8, /* Controller 7, offset 1720 (direct) */ 
	0x000706bc, /* Controller 7, offset 1724 (direct) */ 
	0x000706c0, /* Controller 7, offset 1728 (direct) */ 
	0x000706c4, /* Controller 7, offset 1732 (direct) */ 
	0x000706c8, /* Controller 7, offset 1736 (direct) */ 
	0x000706cc, /* Controller 7, offset 1740 (direct) */ 
	0x000706d0, /* Controller 7, offset 1744 (direct) */ 
	0x000706d4, /* Controller 7, offset 1748 (direct) */ 
	0x000706d8, /* Controller 7, offset 1752 (direct) */ 
	0x000706dc, /* Controller 7, offset 1756 (direct) */ 
	0x000706e0, /* Controller 7, offset 1760 (direct) */ 
	0x000706e4, /* Controller 7, offset 1764 (direct) */ 
	0x000706e8, /* Controller 7, offset 1768 (direct) */ 
	0x000706ec, /* Controller 7, offset 1772 (direct) */ 
	0x000706f0, /* Controller 7, offset 1776 (direct) */ 
	0x000706f4, /* Controller 7, offset 1780 (direct) */ 
	0x000706f8, /* Controller 7, offset 1784 (direct) */ 
	0x000706fc, /* Controller 7, offset 1788 (direct) */ 
	0x00070700, /* Controller 7, offset 1792 (direct) */ 
	0x00070704, /* Controller 7, offset 1796 (direct) */ 
	0x00070708, /* Controller 7, offset 1800 (direct) */ 
	0x0007070c, /* Controller 7, offset 1804 (direct) */ 
	0x00070710, /* Controller 7, offset 1808 (direct) */ 
	0x00070714, /* Controller 7, offset 1812 (direct) */ 
	0x00070718, /* Controller 7, offset 1816 (direct) */ 
	0x0007071c, /* Controller 7, offset 1820 (direct) */ 
	0x00070720, /* Controller 7, offset 1824 (direct) */ 
	0x00070724, /* Controller 7, offset 1828 (direct) */ 
	0x00070728, /* Controller 7, offset 1832 (direct) */ 
	0x0007072c, /* Controller 7, offset 1836 (direct) */ 
	0x00070730, /* Controller 7, offset 1840 (direct) */ 
	0x00070734, /* Controller 7, offset 1844 (direct) */ 
	0x00070738, /* Controller 7, offset 1848 (direct) */ 
	0x0007073c, /* Controller 7, offset 1852 (direct) */ 
	0x00070740, /* Controller 7, offset 1856 (direct) */ 
	0x00070744, /* Controller 7, offset 1860 (direct) */ 
	0x00070748, /* Controller 7, offset 1864 (direct) */ 
	0x0007074c, /* Controller 7, offset 1868 (direct) */ 
	0x00070750, /* Controller 7, offset 1872 (direct) */ 
	0x00070754, /* Controller 7, offset 1876 (direct) */ 
	0x00070758, /* Controller 7, offset 1880 (direct) */ 
	0x0007075c, /* Controller 7, offset 1884 (direct) */ 
	0x00070760, /* Controller 7, offset 1888 (direct) */ 
	0x00070764, /* Controller 7, offset 1892 (direct) */ 
	0x00070768, /* Controller 7, offset 1896 (direct) */ 
	0x0007076c, /* Controller 7, offset 1900 (direct) */ 
	0x00070770, /* Controller 7, offset 1904 (direct) */ 
	0x00070774, /* Controller 7, offset 1908 (direct) */ 
	0x00070778, /* Controller 7, offset 1912 (direct) */ 
	0x0007077c, /* Controller 7, offset 1916 (direct) */ 
	0x00070780, /* Controller 7, offset 1920 (direct) */ 
	0x00070784, /* Controller 7, offset 1924 (direct) */ 
	0x00070788, /* Controller 7, offset 1928 (direct) */ 
	0x0007078c, /* Controller 7, offset 1932 (direct) */ 
	0x00070790, /* Controller 7, offset 1936 (direct) */ 
	0x00070794, /* Controller 7, offset 1940 (direct) */ 
	0x00070798, /* Controller 7, offset 1944 (direct) */ 
	0x0007079c, /* Controller 7, offset 1948 (direct) */ 
	0x000707a0, /* Controller 7, offset 1952 (direct) */ 
	0x000707a4, /* Controller 7, offset 1956 (direct) */ 
	0x000707a8, /* Controller 7, offset 1960 (direct) */ 
	0x000707ac, /* Controller 7, offset 1964 (direct) */ 
	0x000707b0, /* Controller 7, offset 1968 (direct) */ 
	0x000707b4, /* Controller 7, offset 1972 (direct) */ 
	0x000707b8, /* Controller 7, offset 1976 (direct) */ 
	0x000707bc, /* Controller 7, offset 1980 (direct) */ 
	0x000707c0, /* Controller 7, offset 1984 (direct) */ 
	0x000707c4, /* Controller 7, offset 1988 (direct) */ 
	0x000707c8, /* Controller 7, offset 1992 (direct) */ 
	0x000707cc, /* Controller 7, offset 1996 (direct) */ 
	0x000707d0, /* Controller 7, offset 2000 (direct) */ 
	0x000707d4, /* Controller 7, offset 2004 (direct) */ 
	0x000707d8, /* Controller 7, offset 2008 (direct) */ 
	0x000707dc, /* Controller 7, offset 2012 (direct) */ 
	0x000707e0, /* Controller 7, offset 2016 (direct) */ 
	0x000707e4, /* Controller 7, offset 2020 (direct) */ 
	0x000707e8, /* Controller 7, offset 2024 (direct) */ 
	0x000707ec, /* Controller 7, offset 2028 (direct) */ 
	0x000707f0, /* Controller 7, offset 2032 (direct) */ 
	0x000707f4, /* Controller 7, offset 2036 (direct) */ 
	0x000707f8, /* Controller 7, offset 2040 (direct) */ 
	0x000707fc, /* Controller 7, offset 2044 (direct) */ 
	0x00070800, /* Controller 7, offset 2048 (direct) */ 
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
	0x00080044, /* Controller 8, offset 68 (direct) */ 
	0x00080048, /* Controller 8, offset 72 (direct) */ 
	0x0008004c, /* Controller 8, offset 76 (direct) */ 
	0x00080050, /* Controller 8, offset 80 (direct) */ 
	0x00080054, /* Controller 8, offset 84 (direct) */ 
	0x00080058, /* Controller 8, offset 88 (direct) */ 
	0x0008005c, /* Controller 8, offset 92 (direct) */ 
	0x00080060, /* Controller 8, offset 96 (direct) */ 
	0x00080064, /* Controller 8, offset 100 (direct) */ 
	0x00080068, /* Controller 8, offset 104 (direct) */ 
	0x0008006c, /* Controller 8, offset 108 (direct) */ 
	0x00080070, /* Controller 8, offset 112 (direct) */ 
	0x00080074, /* Controller 8, offset 116 (direct) */ 
	0x00080078, /* Controller 8, offset 120 (direct) */ 
	0x0008007c, /* Controller 8, offset 124 (direct) */ 
	0x00080080, /* Controller 8, offset 128 (direct) */ 
	0x00080084, /* Controller 8, offset 132 (direct) */ 
	0x00080088, /* Controller 8, offset 136 (direct) */ 
	0x0008008c, /* Controller 8, offset 140 (direct) */ 
	0x00080090, /* Controller 8, offset 144 (direct) */ 
	0x00080094, /* Controller 8, offset 148 (direct) */ 
	0x00080098, /* Controller 8, offset 152 (direct) */ 
	0x0008009c, /* Controller 8, offset 156 (direct) */ 
	0x000800a0, /* Controller 8, offset 160 (direct) */ 
	0x000800a4, /* Controller 8, offset 164 (direct) */ 
	0x000800a8, /* Controller 8, offset 168 (direct) */ 
	0x000800ac, /* Controller 8, offset 172 (direct) */ 
	0x000800b0, /* Controller 8, offset 176 (direct) */ 
	0x000800b4, /* Controller 8, offset 180 (direct) */ 
	0x000800b8, /* Controller 8, offset 184 (direct) */ 
	0x000800bc, /* Controller 8, offset 188 (direct) */ 
	0x000800c0, /* Controller 8, offset 192 (direct) */ 
	0x000800c4, /* Controller 8, offset 196 (direct) */ 
	0x000800c8, /* Controller 8, offset 200 (direct) */ 
	0x000800cc, /* Controller 8, offset 204 (direct) */ 
	0x000800d0, /* Controller 8, offset 208 (direct) */ 
	0x000800d4, /* Controller 8, offset 212 (direct) */ 
	0x000800d8, /* Controller 8, offset 216 (direct) */ 
	0x000800dc, /* Controller 8, offset 220 (direct) */ 
	0x000800e0, /* Controller 8, offset 224 (direct) */ 
	0x000800e4, /* Controller 8, offset 228 (direct) */ 
	0x000800e8, /* Controller 8, offset 232 (direct) */ 
	0x000800ec, /* Controller 8, offset 236 (direct) */ 
	0x000800f0, /* Controller 8, offset 240 (direct) */ 
	0x000800f4, /* Controller 8, offset 244 (direct) */ 
	0x000800f8, /* Controller 8, offset 248 (direct) */ 
	0x000800fc, /* Controller 8, offset 252 (direct) */ 
	0x00080100, /* Controller 8, offset 256 (direct) */ 
	0x00080104, /* Controller 8, offset 260 (direct) */ 
	0x00080108, /* Controller 8, offset 264 (direct) */ 
	0x0008010c, /* Controller 8, offset 268 (direct) */ 
	0x00080110, /* Controller 8, offset 272 (direct) */ 
	0x00080114, /* Controller 8, offset 276 (direct) */ 
	0x00080118, /* Controller 8, offset 280 (direct) */ 
	0x0008011c, /* Controller 8, offset 284 (direct) */ 
	0x00080120, /* Controller 8, offset 288 (direct) */ 
	0x00080124, /* Controller 8, offset 292 (direct) */ 
	0x00080128, /* Controller 8, offset 296 (direct) */ 
	0x0008012c, /* Controller 8, offset 300 (direct) */ 
	0x00080130, /* Controller 8, offset 304 (direct) */ 
	0x00080134, /* Controller 8, offset 308 (direct) */ 
	0x00080138, /* Controller 8, offset 312 (direct) */ 
	0x0008013c, /* Controller 8, offset 316 (direct) */ 
	0x00080140, /* Controller 8, offset 320 (direct) */ 
	0x00080144, /* Controller 8, offset 324 (direct) */ 
	0x00080148, /* Controller 8, offset 328 (direct) */ 
	0x0008014c, /* Controller 8, offset 332 (direct) */ 
	0x00080150, /* Controller 8, offset 336 (direct) */ 
	0x00080154, /* Controller 8, offset 340 (direct) */ 
	0x00080158, /* Controller 8, offset 344 (direct) */ 
	0x0008015c, /* Controller 8, offset 348 (direct) */ 
	0x00080160, /* Controller 8, offset 352 (direct) */ 
	0x00080164, /* Controller 8, offset 356 (direct) */ 
	0x00080168, /* Controller 8, offset 360 (direct) */ 
	0x0008016c, /* Controller 8, offset 364 (direct) */ 
	0x00080170, /* Controller 8, offset 368 (direct) */ 
	0x00080174, /* Controller 8, offset 372 (direct) */ 
	0x00080178, /* Controller 8, offset 376 (direct) */ 
	0x0008017c, /* Controller 8, offset 380 (direct) */ 
	0x00080180, /* Controller 8, offset 384 (direct) */ 
	0x00080184, /* Controller 8, offset 388 (direct) */ 
	0x00080188, /* Controller 8, offset 392 (direct) */ 
	0x0008018c, /* Controller 8, offset 396 (direct) */ 
	0x00080190, /* Controller 8, offset 400 (direct) */ 
	0x00080194, /* Controller 8, offset 404 (direct) */ 
	0x00080198, /* Controller 8, offset 408 (direct) */ 
	0x0008019c, /* Controller 8, offset 412 (direct) */ 
	0x000801a0, /* Controller 8, offset 416 (direct) */ 
	0x000801a4, /* Controller 8, offset 420 (direct) */ 
	0x000801a8, /* Controller 8, offset 424 (direct) */ 
	0x000801ac, /* Controller 8, offset 428 (direct) */ 
	0x000801b0, /* Controller 8, offset 432 (direct) */ 
	0x000801b4, /* Controller 8, offset 436 (direct) */ 
	0x000801b8, /* Controller 8, offset 440 (direct) */ 
	0x000801bc, /* Controller 8, offset 444 (direct) */ 
	0x000801c0, /* Controller 8, offset 448 (direct) */ 
	0x000801c4, /* Controller 8, offset 452 (direct) */ 
	0x000801c8, /* Controller 8, offset 456 (direct) */ 
	0x000801cc, /* Controller 8, offset 460 (direct) */ 
	0x000801d0, /* Controller 8, offset 464 (direct) */ 
	0x000801d4, /* Controller 8, offset 468 (direct) */ 
	0x000801d8, /* Controller 8, offset 472 (direct) */ 
	0x000801dc, /* Controller 8, offset 476 (direct) */ 
	0x000801e0, /* Controller 8, offset 480 (direct) */ 
	0x000801e4, /* Controller 8, offset 484 (direct) */ 
	0x000801e8, /* Controller 8, offset 488 (direct) */ 
	0x000801ec, /* Controller 8, offset 492 (direct) */ 
	0x000801f0, /* Controller 8, offset 496 (direct) */ 
	0x000801f4, /* Controller 8, offset 500 (direct) */ 
	0x000801f8, /* Controller 8, offset 504 (direct) */ 
	0x000801fc, /* Controller 8, offset 508 (direct) */ 
	0x00080200, /* Controller 8, offset 512 (direct) */ 
	0x00080204, /* Controller 8, offset 516 (direct) */ 
	0x00080208, /* Controller 8, offset 520 (direct) */ 
	0x0008020c, /* Controller 8, offset 524 (direct) */ 
	0x00080210, /* Controller 8, offset 528 (direct) */ 
	0x00080214, /* Controller 8, offset 532 (direct) */ 
	0x00080218, /* Controller 8, offset 536 (direct) */ 
	0x0008021c, /* Controller 8, offset 540 (direct) */ 
	0x00080220, /* Controller 8, offset 544 (direct) */ 
	0x00080224, /* Controller 8, offset 548 (direct) */ 
	0x00080228, /* Controller 8, offset 552 (direct) */ 
	0x0008022c, /* Controller 8, offset 556 (direct) */ 
	0x00080230, /* Controller 8, offset 560 (direct) */ 
	0x00080234, /* Controller 8, offset 564 (direct) */ 
	0x00080238, /* Controller 8, offset 568 (direct) */ 
	0x0008023c, /* Controller 8, offset 572 (direct) */ 
	0x00080240, /* Controller 8, offset 576 (direct) */ 
	0x00080244, /* Controller 8, offset 580 (direct) */ 
	0x00080248, /* Controller 8, offset 584 (direct) */ 
	0x0008024c, /* Controller 8, offset 588 (direct) */ 
	0x00080250, /* Controller 8, offset 592 (direct) */ 
	0x00080254, /* Controller 8, offset 596 (direct) */ 
	0x00080258, /* Controller 8, offset 600 (direct) */ 
	0x0008025c, /* Controller 8, offset 604 (direct) */ 
	0x00080260, /* Controller 8, offset 608 (direct) */ 
	0x00080264, /* Controller 8, offset 612 (direct) */ 
	0x00080268, /* Controller 8, offset 616 (direct) */ 
	0x0008026c, /* Controller 8, offset 620 (direct) */ 
	0x00080270, /* Controller 8, offset 624 (direct) */ 
	0x00080274, /* Controller 8, offset 628 (direct) */ 
	0x00080278, /* Controller 8, offset 632 (direct) */ 
	0x0008027c, /* Controller 8, offset 636 (direct) */ 
	0x00080280, /* Controller 8, offset 640 (direct) */ 
	0x00080284, /* Controller 8, offset 644 (direct) */ 
	0x00080288, /* Controller 8, offset 648 (direct) */ 
	0x0008028c, /* Controller 8, offset 652 (direct) */ 
	0x00080290, /* Controller 8, offset 656 (direct) */ 
	0x00080294, /* Controller 8, offset 660 (direct) */ 
	0x00080298, /* Controller 8, offset 664 (direct) */ 
	0x0008029c, /* Controller 8, offset 668 (direct) */ 
	0x000802a0, /* Controller 8, offset 672 (direct) */ 
	0x000802a4, /* Controller 8, offset 676 (direct) */ 
	0x000802a8, /* Controller 8, offset 680 (direct) */ 
	0x000802ac, /* Controller 8, offset 684 (direct) */ 
	0x000802b0, /* Controller 8, offset 688 (direct) */ 
	0x000802b4, /* Controller 8, offset 692 (direct) */ 
	0x000802b8, /* Controller 8, offset 696 (direct) */ 
	0x000802bc, /* Controller 8, offset 700 (direct) */ 
	0x000802c0, /* Controller 8, offset 704 (direct) */ 
	0x000802c4, /* Controller 8, offset 708 (direct) */ 
	0x000802c8, /* Controller 8, offset 712 (direct) */ 
	0x000802cc, /* Controller 8, offset 716 (direct) */ 
	0x000802d0, /* Controller 8, offset 720 (direct) */ 
	0x000802d4, /* Controller 8, offset 724 (direct) */ 
	0x000802d8, /* Controller 8, offset 728 (direct) */ 
	0x000802dc, /* Controller 8, offset 732 (direct) */ 
	0x000802e0, /* Controller 8, offset 736 (direct) */ 
	0x000802e4, /* Controller 8, offset 740 (direct) */ 
	0x000802e8, /* Controller 8, offset 744 (direct) */ 
	0x000802ec, /* Controller 8, offset 748 (direct) */ 
	0x000802f0, /* Controller 8, offset 752 (direct) */ 
	0x000802f4, /* Controller 8, offset 756 (direct) */ 
	0x000802f8, /* Controller 8, offset 760 (direct) */ 
	0x000802fc, /* Controller 8, offset 764 (direct) */ 
	0x00080300, /* Controller 8, offset 768 (direct) */ 
	0x00080304, /* Controller 8, offset 772 (direct) */ 
	0x00080308, /* Controller 8, offset 776 (direct) */ 
	0x0008030c, /* Controller 8, offset 780 (direct) */ 
	0x00080310, /* Controller 8, offset 784 (direct) */ 
	0x00080314, /* Controller 8, offset 788 (direct) */ 
	0x00080318, /* Controller 8, offset 792 (direct) */ 
	0x0008031c, /* Controller 8, offset 796 (direct) */ 
	0x00080320, /* Controller 8, offset 800 (direct) */ 
	0x00080324, /* Controller 8, offset 804 (direct) */ 
	0x00080328, /* Controller 8, offset 808 (direct) */ 
	0x0008032c, /* Controller 8, offset 812 (direct) */ 
	0x00080330, /* Controller 8, offset 816 (direct) */ 
	0x00080334, /* Controller 8, offset 820 (direct) */ 
	0x00080338, /* Controller 8, offset 824 (direct) */ 
	0x0008033c, /* Controller 8, offset 828 (direct) */ 
	0x00080340, /* Controller 8, offset 832 (direct) */ 
	0x00080344, /* Controller 8, offset 836 (direct) */ 
	0x00080348, /* Controller 8, offset 840 (direct) */ 
	0x0008034c, /* Controller 8, offset 844 (direct) */ 
	0x00080350, /* Controller 8, offset 848 (direct) */ 
	0x00080354, /* Controller 8, offset 852 (direct) */ 
	0x00080358, /* Controller 8, offset 856 (direct) */ 
	0x0008035c, /* Controller 8, offset 860 (direct) */ 
	0x00080360, /* Controller 8, offset 864 (direct) */ 
	0x00080364, /* Controller 8, offset 868 (direct) */ 
	0x00080368, /* Controller 8, offset 872 (direct) */ 
	0x0008036c, /* Controller 8, offset 876 (direct) */ 
	0x00080370, /* Controller 8, offset 880 (direct) */ 
	0x00080374, /* Controller 8, offset 884 (direct) */ 
	0x00080378, /* Controller 8, offset 888 (direct) */ 
	0x0008037c, /* Controller 8, offset 892 (direct) */ 
	0x00080380, /* Controller 8, offset 896 (direct) */ 
	0x00080384, /* Controller 8, offset 900 (direct) */ 
	0x00080388, /* Controller 8, offset 904 (direct) */ 
	0x0008038c, /* Controller 8, offset 908 (direct) */ 
	0x00080390, /* Controller 8, offset 912 (direct) */ 
	0x00080394, /* Controller 8, offset 916 (direct) */ 
	0x00080398, /* Controller 8, offset 920 (direct) */ 
	0x0008039c, /* Controller 8, offset 924 (direct) */ 
	0x000803a0, /* Controller 8, offset 928 (direct) */ 
	0x000803a4, /* Controller 8, offset 932 (direct) */ 
	0x000803a8, /* Controller 8, offset 936 (direct) */ 
	0x000803ac, /* Controller 8, offset 940 (direct) */ 
	0x000803b0, /* Controller 8, offset 944 (direct) */ 
	0x000803b4, /* Controller 8, offset 948 (direct) */ 
	0x000803b8, /* Controller 8, offset 952 (direct) */ 
	0x000803bc, /* Controller 8, offset 956 (direct) */ 
	0x000803c0, /* Controller 8, offset 960 (direct) */ 
	0x000803c4, /* Controller 8, offset 964 (direct) */ 
	0x000803c8, /* Controller 8, offset 968 (direct) */ 
	0x000803cc, /* Controller 8, offset 972 (direct) */ 
	0x000803d0, /* Controller 8, offset 976 (direct) */ 
	0x000803d4, /* Controller 8, offset 980 (direct) */ 
	0x000803d8, /* Controller 8, offset 984 (direct) */ 
	0x000803dc, /* Controller 8, offset 988 (direct) */ 
	0x000803e0, /* Controller 8, offset 992 (direct) */ 
	0x000803e4, /* Controller 8, offset 996 (direct) */ 
	0x000803e8, /* Controller 8, offset 1000 (direct) */ 
	0x000803ec, /* Controller 8, offset 1004 (direct) */ 
	0x000803f0, /* Controller 8, offset 1008 (direct) */ 
	0x000803f4, /* Controller 8, offset 1012 (direct) */ 
	0x000803f8, /* Controller 8, offset 1016 (direct) */ 
	0x000803fc, /* Controller 8, offset 1020 (direct) */ 
	0x00080400, /* Controller 8, offset 1024 (direct) */ 
	0x00080404, /* Controller 8, offset 1028 (direct) */ 
	0x00080408, /* Controller 8, offset 1032 (direct) */ 
	0x0008040c, /* Controller 8, offset 1036 (direct) */ 
	0x00080410, /* Controller 8, offset 1040 (direct) */ 
	0x00080414, /* Controller 8, offset 1044 (direct) */ 
	0x00080418, /* Controller 8, offset 1048 (direct) */ 
	0x0008041c, /* Controller 8, offset 1052 (direct) */ 
	0x00080420, /* Controller 8, offset 1056 (direct) */ 
	0x00080424, /* Controller 8, offset 1060 (direct) */ 
	0x00080428, /* Controller 8, offset 1064 (direct) */ 
	0x0008042c, /* Controller 8, offset 1068 (direct) */ 
	0x00080430, /* Controller 8, offset 1072 (direct) */ 
	0x00080434, /* Controller 8, offset 1076 (direct) */ 
	0x00080438, /* Controller 8, offset 1080 (direct) */ 
	0x0008043c, /* Controller 8, offset 1084 (direct) */ 
	0x00080440, /* Controller 8, offset 1088 (direct) */ 
	0x00080444, /* Controller 8, offset 1092 (direct) */ 
	0x00080448, /* Controller 8, offset 1096 (direct) */ 
	0x0008044c, /* Controller 8, offset 1100 (direct) */ 
	0x00080450, /* Controller 8, offset 1104 (direct) */ 
	0x00080454, /* Controller 8, offset 1108 (direct) */ 
	0x00080458, /* Controller 8, offset 1112 (direct) */ 
	0x0008045c, /* Controller 8, offset 1116 (direct) */ 
	0x00080460, /* Controller 8, offset 1120 (direct) */ 
	0x00080464, /* Controller 8, offset 1124 (direct) */ 
	0x00080468, /* Controller 8, offset 1128 (direct) */ 
	0x0008046c, /* Controller 8, offset 1132 (direct) */ 
	0x00080470, /* Controller 8, offset 1136 (direct) */ 
	0x00080474, /* Controller 8, offset 1140 (direct) */ 
	0x00080478, /* Controller 8, offset 1144 (direct) */ 
	0x0008047c, /* Controller 8, offset 1148 (direct) */ 
	0x00080480, /* Controller 8, offset 1152 (direct) */ 
	0x00080484, /* Controller 8, offset 1156 (direct) */ 
	0x00080488, /* Controller 8, offset 1160 (direct) */ 
	0x0008048c, /* Controller 8, offset 1164 (direct) */ 
	0x00080490, /* Controller 8, offset 1168 (direct) */ 
	0x00080494, /* Controller 8, offset 1172 (direct) */ 
	0x00080498, /* Controller 8, offset 1176 (direct) */ 
	0x0008049c, /* Controller 8, offset 1180 (direct) */ 
	0x000804a0, /* Controller 8, offset 1184 (direct) */ 
	0x000804a4, /* Controller 8, offset 1188 (direct) */ 
	0x000804a8, /* Controller 8, offset 1192 (direct) */ 
	0x000804ac, /* Controller 8, offset 1196 (direct) */ 
	0x000804b0, /* Controller 8, offset 1200 (direct) */ 
	0x000804b4, /* Controller 8, offset 1204 (direct) */ 
	0x000804b8, /* Controller 8, offset 1208 (direct) */ 
	0x000804bc, /* Controller 8, offset 1212 (direct) */ 
	0x000804c0, /* Controller 8, offset 1216 (direct) */ 
	0x000804c4, /* Controller 8, offset 1220 (direct) */ 
	0x000804c8, /* Controller 8, offset 1224 (direct) */ 
	0x000804cc, /* Controller 8, offset 1228 (direct) */ 
	0x000804d0, /* Controller 8, offset 1232 (direct) */ 
	0x000804d4, /* Controller 8, offset 1236 (direct) */ 
	0x000804d8, /* Controller 8, offset 1240 (direct) */ 
	0x000804dc, /* Controller 8, offset 1244 (direct) */ 
	0x000804e0, /* Controller 8, offset 1248 (direct) */ 
	0x000804e4, /* Controller 8, offset 1252 (direct) */ 
	0x000804e8, /* Controller 8, offset 1256 (direct) */ 
	0x000804ec, /* Controller 8, offset 1260 (direct) */ 
	0x000804f0, /* Controller 8, offset 1264 (direct) */ 
	0x000804f4, /* Controller 8, offset 1268 (direct) */ 
	0x000804f8, /* Controller 8, offset 1272 (direct) */ 
	0x000804fc, /* Controller 8, offset 1276 (direct) */ 
	0x00080500, /* Controller 8, offset 1280 (direct) */ 
	0x00080504, /* Controller 8, offset 1284 (direct) */ 
	0x00080508, /* Controller 8, offset 1288 (direct) */ 
	0x0008050c, /* Controller 8, offset 1292 (direct) */ 
	0x00080510, /* Controller 8, offset 1296 (direct) */ 
	0x00080514, /* Controller 8, offset 1300 (direct) */ 
	0x00080518, /* Controller 8, offset 1304 (direct) */ 
	0x0008051c, /* Controller 8, offset 1308 (direct) */ 
	0x00080520, /* Controller 8, offset 1312 (direct) */ 
	0x00080524, /* Controller 8, offset 1316 (direct) */ 
	0x00080528, /* Controller 8, offset 1320 (direct) */ 
	0x0008052c, /* Controller 8, offset 1324 (direct) */ 
	0x00080530, /* Controller 8, offset 1328 (direct) */ 
	0x00080534, /* Controller 8, offset 1332 (direct) */ 
	0x00080538, /* Controller 8, offset 1336 (direct) */ 
	0x0008053c, /* Controller 8, offset 1340 (direct) */ 
	0x00080540, /* Controller 8, offset 1344 (direct) */ 
	0x00080544, /* Controller 8, offset 1348 (direct) */ 
	0x00080548, /* Controller 8, offset 1352 (direct) */ 
	0x0008054c, /* Controller 8, offset 1356 (direct) */ 
	0x00080550, /* Controller 8, offset 1360 (direct) */ 
	0x00080554, /* Controller 8, offset 1364 (direct) */ 
	0x00080558, /* Controller 8, offset 1368 (direct) */ 
	0x0008055c, /* Controller 8, offset 1372 (direct) */ 
	0x00080560, /* Controller 8, offset 1376 (direct) */ 
	0x00080564, /* Controller 8, offset 1380 (direct) */ 
	0x00080568, /* Controller 8, offset 1384 (direct) */ 
	0x0008056c, /* Controller 8, offset 1388 (direct) */ 
	0x00080570, /* Controller 8, offset 1392 (direct) */ 
	0x00080574, /* Controller 8, offset 1396 (direct) */ 
	0x00080578, /* Controller 8, offset 1400 (direct) */ 
	0x0008057c, /* Controller 8, offset 1404 (direct) */ 
	0x00080580, /* Controller 8, offset 1408 (direct) */ 
	0x00080584, /* Controller 8, offset 1412 (direct) */ 
	0x00080588, /* Controller 8, offset 1416 (direct) */ 
	0x0008058c, /* Controller 8, offset 1420 (direct) */ 
	0x00080590, /* Controller 8, offset 1424 (direct) */ 
	0x00080594, /* Controller 8, offset 1428 (direct) */ 
	0x00080598, /* Controller 8, offset 1432 (direct) */ 
	0x0008059c, /* Controller 8, offset 1436 (direct) */ 
	0x000805a0, /* Controller 8, offset 1440 (direct) */ 
	0x000805a4, /* Controller 8, offset 1444 (direct) */ 
	0x000805a8, /* Controller 8, offset 1448 (direct) */ 
	0x000805ac, /* Controller 8, offset 1452 (direct) */ 
	0x000805b0, /* Controller 8, offset 1456 (direct) */ 
	0x000805b4, /* Controller 8, offset 1460 (direct) */ 
	0x000805b8, /* Controller 8, offset 1464 (direct) */ 
	0x000805bc, /* Controller 8, offset 1468 (direct) */ 
	0x000805c0, /* Controller 8, offset 1472 (direct) */ 
	0x000805c4, /* Controller 8, offset 1476 (direct) */ 
	0x000805c8, /* Controller 8, offset 1480 (direct) */ 
	0x000805cc, /* Controller 8, offset 1484 (direct) */ 
	0x000805d0, /* Controller 8, offset 1488 (direct) */ 
	0x000805d4, /* Controller 8, offset 1492 (direct) */ 
	0x000805d8, /* Controller 8, offset 1496 (direct) */ 
	0x000805dc, /* Controller 8, offset 1500 (direct) */ 
	0x000805e0, /* Controller 8, offset 1504 (direct) */ 
	0x000805e4, /* Controller 8, offset 1508 (direct) */ 
	0x000805e8, /* Controller 8, offset 1512 (direct) */ 
	0x000805ec, /* Controller 8, offset 1516 (direct) */ 
	0x000805f0, /* Controller 8, offset 1520 (direct) */ 
	0x000805f4, /* Controller 8, offset 1524 (direct) */ 
	0x000805f8, /* Controller 8, offset 1528 (direct) */ 
	0x000805fc, /* Controller 8, offset 1532 (direct) */ 
	0x00080600, /* Controller 8, offset 1536 (direct) */ 
	0x00080604, /* Controller 8, offset 1540 (direct) */ 
	0x00080608, /* Controller 8, offset 1544 (direct) */ 
	0x0008060c, /* Controller 8, offset 1548 (direct) */ 
	0x00080610, /* Controller 8, offset 1552 (direct) */ 
	0x00080614, /* Controller 8, offset 1556 (direct) */ 
	0x00080618, /* Controller 8, offset 1560 (direct) */ 
	0x0008061c, /* Controller 8, offset 1564 (direct) */ 
	0x00080620, /* Controller 8, offset 1568 (direct) */ 
	0x00080624, /* Controller 8, offset 1572 (direct) */ 
	0x00080628, /* Controller 8, offset 1576 (direct) */ 
	0x0008062c, /* Controller 8, offset 1580 (direct) */ 
	0x00080630, /* Controller 8, offset 1584 (direct) */ 
	0x00080634, /* Controller 8, offset 1588 (direct) */ 
	0x00080638, /* Controller 8, offset 1592 (direct) */ 
	0x0008063c, /* Controller 8, offset 1596 (direct) */ 
	0x00080640, /* Controller 8, offset 1600 (direct) */ 
	0x00080644, /* Controller 8, offset 1604 (direct) */ 
	0x00080648, /* Controller 8, offset 1608 (direct) */ 
	0x0008064c, /* Controller 8, offset 1612 (direct) */ 
	0x00080650, /* Controller 8, offset 1616 (direct) */ 
	0x00080654, /* Controller 8, offset 1620 (direct) */ 
	0x00080658, /* Controller 8, offset 1624 (direct) */ 
	0x0008065c, /* Controller 8, offset 1628 (direct) */ 
	0x00080660, /* Controller 8, offset 1632 (direct) */ 
	0x00080664, /* Controller 8, offset 1636 (direct) */ 
	0x00080668, /* Controller 8, offset 1640 (direct) */ 
	0x0008066c, /* Controller 8, offset 1644 (direct) */ 
	0x00080670, /* Controller 8, offset 1648 (direct) */ 
	0x00080674, /* Controller 8, offset 1652 (direct) */ 
	0x00080678, /* Controller 8, offset 1656 (direct) */ 
	0x0008067c, /* Controller 8, offset 1660 (direct) */ 
	0x00080680, /* Controller 8, offset 1664 (direct) */ 
	0x00080684, /* Controller 8, offset 1668 (direct) */ 
	0x00080688, /* Controller 8, offset 1672 (direct) */ 
	0x0008068c, /* Controller 8, offset 1676 (direct) */ 
	0x00080690, /* Controller 8, offset 1680 (direct) */ 
	0x00080694, /* Controller 8, offset 1684 (direct) */ 
	0x00080698, /* Controller 8, offset 1688 (direct) */ 
	0x0008069c, /* Controller 8, offset 1692 (direct) */ 
	0x000806a0, /* Controller 8, offset 1696 (direct) */ 
	0x000806a4, /* Controller 8, offset 1700 (direct) */ 
	0x000806a8, /* Controller 8, offset 1704 (direct) */ 
	0x000806ac, /* Controller 8, offset 1708 (direct) */ 
	0x000806b0, /* Controller 8, offset 1712 (direct) */ 
	0x000806b4, /* Controller 8, offset 1716 (direct) */ 
	0x000806b8, /* Controller 8, offset 1720 (direct) */ 
	0x000806bc, /* Controller 8, offset 1724 (direct) */ 
	0x000806c0, /* Controller 8, offset 1728 (direct) */ 
	0x000806c4, /* Controller 8, offset 1732 (direct) */ 
	0x000806c8, /* Controller 8, offset 1736 (direct) */ 
	0x000806cc, /* Controller 8, offset 1740 (direct) */ 
	0x000806d0, /* Controller 8, offset 1744 (direct) */ 
	0x000806d4, /* Controller 8, offset 1748 (direct) */ 
	0x000806d8, /* Controller 8, offset 1752 (direct) */ 
	0x000806dc, /* Controller 8, offset 1756 (direct) */ 
	0x000806e0, /* Controller 8, offset 1760 (direct) */ 
	0x000806e4, /* Controller 8, offset 1764 (direct) */ 
	0x000806e8, /* Controller 8, offset 1768 (direct) */ 
	0x000806ec, /* Controller 8, offset 1772 (direct) */ 
	0x000806f0, /* Controller 8, offset 1776 (direct) */ 
	0x000806f4, /* Controller 8, offset 1780 (direct) */ 
	0x000806f8, /* Controller 8, offset 1784 (direct) */ 
	0x000806fc, /* Controller 8, offset 1788 (direct) */ 
	0x00080700, /* Controller 8, offset 1792 (direct) */ 
	0x00080704, /* Controller 8, offset 1796 (direct) */ 
	0x00080708, /* Controller 8, offset 1800 (direct) */ 
	0x0008070c, /* Controller 8, offset 1804 (direct) */ 
	0x00080710, /* Controller 8, offset 1808 (direct) */ 
	0x00080714, /* Controller 8, offset 1812 (direct) */ 
	0x00080718, /* Controller 8, offset 1816 (direct) */ 
	0x0008071c, /* Controller 8, offset 1820 (direct) */ 
	0x00080720, /* Controller 8, offset 1824 (direct) */ 
	0x00080724, /* Controller 8, offset 1828 (direct) */ 
	0x00080728, /* Controller 8, offset 1832 (direct) */ 
	0x0008072c, /* Controller 8, offset 1836 (direct) */ 
	0x00080730, /* Controller 8, offset 1840 (direct) */ 
	0x00080734, /* Controller 8, offset 1844 (direct) */ 
	0x00080738, /* Controller 8, offset 1848 (direct) */ 
	0x0008073c, /* Controller 8, offset 1852 (direct) */ 
	0x00080740, /* Controller 8, offset 1856 (direct) */ 
	0x00080744, /* Controller 8, offset 1860 (direct) */ 
	0x00080748, /* Controller 8, offset 1864 (direct) */ 
	0x0008074c, /* Controller 8, offset 1868 (direct) */ 
	0x00080750, /* Controller 8, offset 1872 (direct) */ 
	0x00080754, /* Controller 8, offset 1876 (direct) */ 
	0x00080758, /* Controller 8, offset 1880 (direct) */ 
	0x0008075c, /* Controller 8, offset 1884 (direct) */ 
	0x00080760, /* Controller 8, offset 1888 (direct) */ 
	0x00080764, /* Controller 8, offset 1892 (direct) */ 
	0x00080768, /* Controller 8, offset 1896 (direct) */ 
	0x0008076c, /* Controller 8, offset 1900 (direct) */ 
	0x00080770, /* Controller 8, offset 1904 (direct) */ 
	0x00080774, /* Controller 8, offset 1908 (direct) */ 
	0x00080778, /* Controller 8, offset 1912 (direct) */ 
	0x0008077c, /* Controller 8, offset 1916 (direct) */ 
	0x00080780, /* Controller 8, offset 1920 (direct) */ 
	0x00080784, /* Controller 8, offset 1924 (direct) */ 
	0x00080788, /* Controller 8, offset 1928 (direct) */ 
	0x0008078c, /* Controller 8, offset 1932 (direct) */ 
	0x00080790, /* Controller 8, offset 1936 (direct) */ 
	0x00080794, /* Controller 8, offset 1940 (direct) */ 
	0x00080798, /* Controller 8, offset 1944 (direct) */ 
	0x0008079c, /* Controller 8, offset 1948 (direct) */ 
	0x000807a0, /* Controller 8, offset 1952 (direct) */ 
	0x000807a4, /* Controller 8, offset 1956 (direct) */ 
	0x000807a8, /* Controller 8, offset 1960 (direct) */ 
	0x000807ac, /* Controller 8, offset 1964 (direct) */ 
	0x000807b0, /* Controller 8, offset 1968 (direct) */ 
	0x000807b4, /* Controller 8, offset 1972 (direct) */ 
	0x000807b8, /* Controller 8, offset 1976 (direct) */ 
	0x000807bc, /* Controller 8, offset 1980 (direct) */ 
	0x000807c0, /* Controller 8, offset 1984 (direct) */ 
	0x000807c4, /* Controller 8, offset 1988 (direct) */ 
	0x000807c8, /* Controller 8, offset 1992 (direct) */ 
	0x000807cc, /* Controller 8, offset 1996 (direct) */ 
	0x000807d0, /* Controller 8, offset 2000 (direct) */ 
	0x000807d4, /* Controller 8, offset 2004 (direct) */ 
	0x000807d8, /* Controller 8, offset 2008 (direct) */ 
	0x000807dc, /* Controller 8, offset 2012 (direct) */ 
	0x000807e0, /* Controller 8, offset 2016 (direct) */ 
	0x000807e4, /* Controller 8, offset 2020 (direct) */ 
	0x000807e8, /* Controller 8, offset 2024 (direct) */ 
	0x000807ec, /* Controller 8, offset 2028 (direct) */ 
	0x000807f0, /* Controller 8, offset 2032 (direct) */ 
	0x000807f4, /* Controller 8, offset 2036 (direct) */ 
	0x000807f8, /* Controller 8, offset 2040 (direct) */ 
	0x000807fc, /* Controller 8, offset 2044 (direct) */ 
	0x00080800, /* Controller 8, offset 2048 (direct) */ 
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
	0x00090044, /* Controller 9, offset 68 (direct) */ 
	0x00090048, /* Controller 9, offset 72 (direct) */ 
	0x0009004c, /* Controller 9, offset 76 (direct) */ 
	0x00090050, /* Controller 9, offset 80 (direct) */ 
	0x00090054, /* Controller 9, offset 84 (direct) */ 
	0x00090058, /* Controller 9, offset 88 (direct) */ 
	0x0009005c, /* Controller 9, offset 92 (direct) */ 
	0x00090060, /* Controller 9, offset 96 (direct) */ 
	0x00090064, /* Controller 9, offset 100 (direct) */ 
	0x00090068, /* Controller 9, offset 104 (direct) */ 
	0x0009006c, /* Controller 9, offset 108 (direct) */ 
	0x00090070, /* Controller 9, offset 112 (direct) */ 
	0x00090074, /* Controller 9, offset 116 (direct) */ 
	0x00090078, /* Controller 9, offset 120 (direct) */ 
	0x0009007c, /* Controller 9, offset 124 (direct) */ 
	0x00090080, /* Controller 9, offset 128 (direct) */ 
	0x00090084, /* Controller 9, offset 132 (direct) */ 
	0x00090088, /* Controller 9, offset 136 (direct) */ 
	0x0009008c, /* Controller 9, offset 140 (direct) */ 
	0x00090090, /* Controller 9, offset 144 (direct) */ 
	0x00090094, /* Controller 9, offset 148 (direct) */ 
	0x00090098, /* Controller 9, offset 152 (direct) */ 
	0x0009009c, /* Controller 9, offset 156 (direct) */ 
	0x000900a0, /* Controller 9, offset 160 (direct) */ 
	0x000900a4, /* Controller 9, offset 164 (direct) */ 
	0x000900a8, /* Controller 9, offset 168 (direct) */ 
	0x000900ac, /* Controller 9, offset 172 (direct) */ 
	0x000900b0, /* Controller 9, offset 176 (direct) */ 
	0x000900b4, /* Controller 9, offset 180 (direct) */ 
	0x000900b8, /* Controller 9, offset 184 (direct) */ 
	0x000900bc, /* Controller 9, offset 188 (direct) */ 
	0x000900c0, /* Controller 9, offset 192 (direct) */ 
	0x000900c4, /* Controller 9, offset 196 (direct) */ 
	0x000900c8, /* Controller 9, offset 200 (direct) */ 
	0x000900cc, /* Controller 9, offset 204 (direct) */ 
	0x000900d0, /* Controller 9, offset 208 (direct) */ 
	0x000900d4, /* Controller 9, offset 212 (direct) */ 
	0x000900d8, /* Controller 9, offset 216 (direct) */ 
	0x000900dc, /* Controller 9, offset 220 (direct) */ 
	0x000900e0, /* Controller 9, offset 224 (direct) */ 
	0x000900e4, /* Controller 9, offset 228 (direct) */ 
	0x000900e8, /* Controller 9, offset 232 (direct) */ 
	0x000900ec, /* Controller 9, offset 236 (direct) */ 
	0x000900f0, /* Controller 9, offset 240 (direct) */ 
	0x000900f4, /* Controller 9, offset 244 (direct) */ 
	0x000900f8, /* Controller 9, offset 248 (direct) */ 
	0x000900fc, /* Controller 9, offset 252 (direct) */ 
	0x00090100, /* Controller 9, offset 256 (direct) */ 
	0x00090104, /* Controller 9, offset 260 (direct) */ 
	0x00090108, /* Controller 9, offset 264 (direct) */ 
	0x0009010c, /* Controller 9, offset 268 (direct) */ 
	0x00090110, /* Controller 9, offset 272 (direct) */ 
	0x00090114, /* Controller 9, offset 276 (direct) */ 
	0x00090118, /* Controller 9, offset 280 (direct) */ 
	0x0009011c, /* Controller 9, offset 284 (direct) */ 
	0x00090120, /* Controller 9, offset 288 (direct) */ 
	0x00090124, /* Controller 9, offset 292 (direct) */ 
	0x00090128, /* Controller 9, offset 296 (direct) */ 
	0x0009012c, /* Controller 9, offset 300 (direct) */ 
	0x00090130, /* Controller 9, offset 304 (direct) */ 
	0x00090134, /* Controller 9, offset 308 (direct) */ 
	0x00090138, /* Controller 9, offset 312 (direct) */ 
	0x0009013c, /* Controller 9, offset 316 (direct) */ 
	0x00090140, /* Controller 9, offset 320 (direct) */ 
	0x00090144, /* Controller 9, offset 324 (direct) */ 
	0x00090148, /* Controller 9, offset 328 (direct) */ 
	0x0009014c, /* Controller 9, offset 332 (direct) */ 
	0x00090150, /* Controller 9, offset 336 (direct) */ 
	0x00090154, /* Controller 9, offset 340 (direct) */ 
	0x00090158, /* Controller 9, offset 344 (direct) */ 
	0x0009015c, /* Controller 9, offset 348 (direct) */ 
	0x00090160, /* Controller 9, offset 352 (direct) */ 
	0x00090164, /* Controller 9, offset 356 (direct) */ 
	0x00090168, /* Controller 9, offset 360 (direct) */ 
	0x0009016c, /* Controller 9, offset 364 (direct) */ 
	0x00090170, /* Controller 9, offset 368 (direct) */ 
	0x00090174, /* Controller 9, offset 372 (direct) */ 
	0x00090178, /* Controller 9, offset 376 (direct) */ 
	0x0009017c, /* Controller 9, offset 380 (direct) */ 
	0x00090180, /* Controller 9, offset 384 (direct) */ 
	0x00090184, /* Controller 9, offset 388 (direct) */ 
	0x00090188, /* Controller 9, offset 392 (direct) */ 
	0x0009018c, /* Controller 9, offset 396 (direct) */ 
	0x00090190, /* Controller 9, offset 400 (direct) */ 
	0x00090194, /* Controller 9, offset 404 (direct) */ 
	0x00090198, /* Controller 9, offset 408 (direct) */ 
	0x0009019c, /* Controller 9, offset 412 (direct) */ 
	0x000901a0, /* Controller 9, offset 416 (direct) */ 
	0x000901a4, /* Controller 9, offset 420 (direct) */ 
	0x000901a8, /* Controller 9, offset 424 (direct) */ 
	0x000901ac, /* Controller 9, offset 428 (direct) */ 
	0x000901b0, /* Controller 9, offset 432 (direct) */ 
	0x000901b4, /* Controller 9, offset 436 (direct) */ 
	0x000901b8, /* Controller 9, offset 440 (direct) */ 
	0x000901bc, /* Controller 9, offset 444 (direct) */ 
	0x000901c0, /* Controller 9, offset 448 (direct) */ 
	0x000901c4, /* Controller 9, offset 452 (direct) */ 
	0x000901c8, /* Controller 9, offset 456 (direct) */ 
	0x000901cc, /* Controller 9, offset 460 (direct) */ 
	0x000901d0, /* Controller 9, offset 464 (direct) */ 
	0x000901d4, /* Controller 9, offset 468 (direct) */ 
	0x000901d8, /* Controller 9, offset 472 (direct) */ 
	0x000901dc, /* Controller 9, offset 476 (direct) */ 
	0x000901e0, /* Controller 9, offset 480 (direct) */ 
	0x000901e4, /* Controller 9, offset 484 (direct) */ 
	0x000901e8, /* Controller 9, offset 488 (direct) */ 
	0x000901ec, /* Controller 9, offset 492 (direct) */ 
	0x000901f0, /* Controller 9, offset 496 (direct) */ 
	0x000901f4, /* Controller 9, offset 500 (direct) */ 
	0x000901f8, /* Controller 9, offset 504 (direct) */ 
	0x000901fc, /* Controller 9, offset 508 (direct) */ 
	0x00090200, /* Controller 9, offset 512 (direct) */ 
	0x00090204, /* Controller 9, offset 516 (direct) */ 
	0x00090208, /* Controller 9, offset 520 (direct) */ 
	0x0009020c, /* Controller 9, offset 524 (direct) */ 
	0x00090210, /* Controller 9, offset 528 (direct) */ 
	0x00090214, /* Controller 9, offset 532 (direct) */ 
	0x00090218, /* Controller 9, offset 536 (direct) */ 
	0x0009021c, /* Controller 9, offset 540 (direct) */ 
	0x00090220, /* Controller 9, offset 544 (direct) */ 
	0x00090224, /* Controller 9, offset 548 (direct) */ 
	0x00090228, /* Controller 9, offset 552 (direct) */ 
	0x0009022c, /* Controller 9, offset 556 (direct) */ 
	0x00090230, /* Controller 9, offset 560 (direct) */ 
	0x00090234, /* Controller 9, offset 564 (direct) */ 
	0x00090238, /* Controller 9, offset 568 (direct) */ 
	0x0009023c, /* Controller 9, offset 572 (direct) */ 
	0x00090240, /* Controller 9, offset 576 (direct) */ 
	0x00090244, /* Controller 9, offset 580 (direct) */ 
	0x00090248, /* Controller 9, offset 584 (direct) */ 
	0x0009024c, /* Controller 9, offset 588 (direct) */ 
	0x00090250, /* Controller 9, offset 592 (direct) */ 
	0x00090254, /* Controller 9, offset 596 (direct) */ 
	0x00090258, /* Controller 9, offset 600 (direct) */ 
	0x0009025c, /* Controller 9, offset 604 (direct) */ 
	0x00090260, /* Controller 9, offset 608 (direct) */ 
	0x00090264, /* Controller 9, offset 612 (direct) */ 
	0x00090268, /* Controller 9, offset 616 (direct) */ 
	0x0009026c, /* Controller 9, offset 620 (direct) */ 
	0x00090270, /* Controller 9, offset 624 (direct) */ 
	0x00090274, /* Controller 9, offset 628 (direct) */ 
	0x00090278, /* Controller 9, offset 632 (direct) */ 
	0x0009027c, /* Controller 9, offset 636 (direct) */ 
	0x00090280, /* Controller 9, offset 640 (direct) */ 
	0x00090284, /* Controller 9, offset 644 (direct) */ 
	0x00090288, /* Controller 9, offset 648 (direct) */ 
	0x0009028c, /* Controller 9, offset 652 (direct) */ 
	0x00090290, /* Controller 9, offset 656 (direct) */ 
	0x00090294, /* Controller 9, offset 660 (direct) */ 
	0x00090298, /* Controller 9, offset 664 (direct) */ 
	0x0009029c, /* Controller 9, offset 668 (direct) */ 
	0x000902a0, /* Controller 9, offset 672 (direct) */ 
	0x000902a4, /* Controller 9, offset 676 (direct) */ 
	0x000902a8, /* Controller 9, offset 680 (direct) */ 
	0x000902ac, /* Controller 9, offset 684 (direct) */ 
	0x000902b0, /* Controller 9, offset 688 (direct) */ 
	0x000902b4, /* Controller 9, offset 692 (direct) */ 
	0x000902b8, /* Controller 9, offset 696 (direct) */ 
	0x000902bc, /* Controller 9, offset 700 (direct) */ 
	0x000902c0, /* Controller 9, offset 704 (direct) */ 
	0x000902c4, /* Controller 9, offset 708 (direct) */ 
	0x000902c8, /* Controller 9, offset 712 (direct) */ 
	0x000902cc, /* Controller 9, offset 716 (direct) */ 
	0x000902d0, /* Controller 9, offset 720 (direct) */ 
	0x000902d4, /* Controller 9, offset 724 (direct) */ 
	0x000902d8, /* Controller 9, offset 728 (direct) */ 
	0x000902dc, /* Controller 9, offset 732 (direct) */ 
	0x000902e0, /* Controller 9, offset 736 (direct) */ 
	0x000902e4, /* Controller 9, offset 740 (direct) */ 
	0x000902e8, /* Controller 9, offset 744 (direct) */ 
	0x000902ec, /* Controller 9, offset 748 (direct) */ 
	0x000902f0, /* Controller 9, offset 752 (direct) */ 
	0x000902f4, /* Controller 9, offset 756 (direct) */ 
	0x000902f8, /* Controller 9, offset 760 (direct) */ 
	0x000902fc, /* Controller 9, offset 764 (direct) */ 
	0x00090300, /* Controller 9, offset 768 (direct) */ 
	0x00090304, /* Controller 9, offset 772 (direct) */ 
	0x00090308, /* Controller 9, offset 776 (direct) */ 
	0x0009030c, /* Controller 9, offset 780 (direct) */ 
	0x00090310, /* Controller 9, offset 784 (direct) */ 
	0x00090314, /* Controller 9, offset 788 (direct) */ 
	0x00090318, /* Controller 9, offset 792 (direct) */ 
	0x0009031c, /* Controller 9, offset 796 (direct) */ 
	0x00090320, /* Controller 9, offset 800 (direct) */ 
	0x00090324, /* Controller 9, offset 804 (direct) */ 
	0x00090328, /* Controller 9, offset 808 (direct) */ 
	0x0009032c, /* Controller 9, offset 812 (direct) */ 
	0x00090330, /* Controller 9, offset 816 (direct) */ 
	0x00090334, /* Controller 9, offset 820 (direct) */ 
	0x00090338, /* Controller 9, offset 824 (direct) */ 
	0x0009033c, /* Controller 9, offset 828 (direct) */ 
	0x00090340, /* Controller 9, offset 832 (direct) */ 
	0x00090344, /* Controller 9, offset 836 (direct) */ 
	0x00090348, /* Controller 9, offset 840 (direct) */ 
	0x0009034c, /* Controller 9, offset 844 (direct) */ 
	0x00090350, /* Controller 9, offset 848 (direct) */ 
	0x00090354, /* Controller 9, offset 852 (direct) */ 
	0x00090358, /* Controller 9, offset 856 (direct) */ 
	0x0009035c, /* Controller 9, offset 860 (direct) */ 
	0x00090360, /* Controller 9, offset 864 (direct) */ 
	0x00090364, /* Controller 9, offset 868 (direct) */ 
	0x00090368, /* Controller 9, offset 872 (direct) */ 
	0x0009036c, /* Controller 9, offset 876 (direct) */ 
	0x00090370, /* Controller 9, offset 880 (direct) */ 
	0x00090374, /* Controller 9, offset 884 (direct) */ 
	0x00090378, /* Controller 9, offset 888 (direct) */ 
	0x0009037c, /* Controller 9, offset 892 (direct) */ 
	0x00090380, /* Controller 9, offset 896 (direct) */ 
	0x00090384, /* Controller 9, offset 900 (direct) */ 
	0x00090388, /* Controller 9, offset 904 (direct) */ 
	0x0009038c, /* Controller 9, offset 908 (direct) */ 
	0x00090390, /* Controller 9, offset 912 (direct) */ 
	0x00090394, /* Controller 9, offset 916 (direct) */ 
	0x00090398, /* Controller 9, offset 920 (direct) */ 
	0x0009039c, /* Controller 9, offset 924 (direct) */ 
	0x000903a0, /* Controller 9, offset 928 (direct) */ 
	0x000903a4, /* Controller 9, offset 932 (direct) */ 
	0x000903a8, /* Controller 9, offset 936 (direct) */ 
	0x000903ac, /* Controller 9, offset 940 (direct) */ 
	0x000903b0, /* Controller 9, offset 944 (direct) */ 
	0x000903b4, /* Controller 9, offset 948 (direct) */ 
	0x000903b8, /* Controller 9, offset 952 (direct) */ 
	0x000903bc, /* Controller 9, offset 956 (direct) */ 
	0x000903c0, /* Controller 9, offset 960 (direct) */ 
	0x000903c4, /* Controller 9, offset 964 (direct) */ 
	0x000903c8, /* Controller 9, offset 968 (direct) */ 
	0x000903cc, /* Controller 9, offset 972 (direct) */ 
	0x000903d0, /* Controller 9, offset 976 (direct) */ 
	0x000903d4, /* Controller 9, offset 980 (direct) */ 
	0x000903d8, /* Controller 9, offset 984 (direct) */ 
	0x000903dc, /* Controller 9, offset 988 (direct) */ 
	0x000903e0, /* Controller 9, offset 992 (direct) */ 
	0x000903e4, /* Controller 9, offset 996 (direct) */ 
	0x000903e8, /* Controller 9, offset 1000 (direct) */ 
	0x000903ec, /* Controller 9, offset 1004 (direct) */ 
	0x000903f0, /* Controller 9, offset 1008 (direct) */ 
	0x000903f4, /* Controller 9, offset 1012 (direct) */ 
	0x000903f8, /* Controller 9, offset 1016 (direct) */ 
	0x000903fc, /* Controller 9, offset 1020 (direct) */ 
	0x00090400, /* Controller 9, offset 1024 (direct) */ 
	0x00090404, /* Controller 9, offset 1028 (direct) */ 
	0x00090408, /* Controller 9, offset 1032 (direct) */ 
	0x0009040c, /* Controller 9, offset 1036 (direct) */ 
	0x00090410, /* Controller 9, offset 1040 (direct) */ 
	0x00090414, /* Controller 9, offset 1044 (direct) */ 
	0x00090418, /* Controller 9, offset 1048 (direct) */ 
	0x0009041c, /* Controller 9, offset 1052 (direct) */ 
	0x00090420, /* Controller 9, offset 1056 (direct) */ 
	0x00090424, /* Controller 9, offset 1060 (direct) */ 
	0x00090428, /* Controller 9, offset 1064 (direct) */ 
	0x0009042c, /* Controller 9, offset 1068 (direct) */ 
	0x00090430, /* Controller 9, offset 1072 (direct) */ 
	0x00090434, /* Controller 9, offset 1076 (direct) */ 
	0x00090438, /* Controller 9, offset 1080 (direct) */ 
	0x0009043c, /* Controller 9, offset 1084 (direct) */ 
	0x00090440, /* Controller 9, offset 1088 (direct) */ 
	0x00090444, /* Controller 9, offset 1092 (direct) */ 
	0x00090448, /* Controller 9, offset 1096 (direct) */ 
	0x0009044c, /* Controller 9, offset 1100 (direct) */ 
	0x00090450, /* Controller 9, offset 1104 (direct) */ 
	0x00090454, /* Controller 9, offset 1108 (direct) */ 
	0x00090458, /* Controller 9, offset 1112 (direct) */ 
	0x0009045c, /* Controller 9, offset 1116 (direct) */ 
	0x00090460, /* Controller 9, offset 1120 (direct) */ 
	0x00090464, /* Controller 9, offset 1124 (direct) */ 
	0x00090468, /* Controller 9, offset 1128 (direct) */ 
	0x0009046c, /* Controller 9, offset 1132 (direct) */ 
	0x00090470, /* Controller 9, offset 1136 (direct) */ 
	0x00090474, /* Controller 9, offset 1140 (direct) */ 
	0x00090478, /* Controller 9, offset 1144 (direct) */ 
	0x0009047c, /* Controller 9, offset 1148 (direct) */ 
	0x00090480, /* Controller 9, offset 1152 (direct) */ 
	0x00090484, /* Controller 9, offset 1156 (direct) */ 
	0x00090488, /* Controller 9, offset 1160 (direct) */ 
	0x0009048c, /* Controller 9, offset 1164 (direct) */ 
	0x00090490, /* Controller 9, offset 1168 (direct) */ 
	0x00090494, /* Controller 9, offset 1172 (direct) */ 
	0x00090498, /* Controller 9, offset 1176 (direct) */ 
	0x0009049c, /* Controller 9, offset 1180 (direct) */ 
	0x000904a0, /* Controller 9, offset 1184 (direct) */ 
	0x000904a4, /* Controller 9, offset 1188 (direct) */ 
	0x000904a8, /* Controller 9, offset 1192 (direct) */ 
	0x000904ac, /* Controller 9, offset 1196 (direct) */ 
	0x000904b0, /* Controller 9, offset 1200 (direct) */ 
	0x000904b4, /* Controller 9, offset 1204 (direct) */ 
	0x000904b8, /* Controller 9, offset 1208 (direct) */ 
	0x000904bc, /* Controller 9, offset 1212 (direct) */ 
	0x000904c0, /* Controller 9, offset 1216 (direct) */ 
	0x000904c4, /* Controller 9, offset 1220 (direct) */ 
	0x000904c8, /* Controller 9, offset 1224 (direct) */ 
	0x000904cc, /* Controller 9, offset 1228 (direct) */ 
	0x000904d0, /* Controller 9, offset 1232 (direct) */ 
	0x000904d4, /* Controller 9, offset 1236 (direct) */ 
	0x000904d8, /* Controller 9, offset 1240 (direct) */ 
	0x000904dc, /* Controller 9, offset 1244 (direct) */ 
	0x000904e0, /* Controller 9, offset 1248 (direct) */ 
	0x000904e4, /* Controller 9, offset 1252 (direct) */ 
	0x000904e8, /* Controller 9, offset 1256 (direct) */ 
	0x000904ec, /* Controller 9, offset 1260 (direct) */ 
	0x000904f0, /* Controller 9, offset 1264 (direct) */ 
	0x000904f4, /* Controller 9, offset 1268 (direct) */ 
	0x000904f8, /* Controller 9, offset 1272 (direct) */ 
	0x000904fc, /* Controller 9, offset 1276 (direct) */ 
	0x00090500, /* Controller 9, offset 1280 (direct) */ 
	0x00090504, /* Controller 9, offset 1284 (direct) */ 
	0x00090508, /* Controller 9, offset 1288 (direct) */ 
	0x0009050c, /* Controller 9, offset 1292 (direct) */ 
	0x00090510, /* Controller 9, offset 1296 (direct) */ 
	0x00090514, /* Controller 9, offset 1300 (direct) */ 
	0x00090518, /* Controller 9, offset 1304 (direct) */ 
	0x0009051c, /* Controller 9, offset 1308 (direct) */ 
	0x00090520, /* Controller 9, offset 1312 (direct) */ 
	0x00090524, /* Controller 9, offset 1316 (direct) */ 
	0x00090528, /* Controller 9, offset 1320 (direct) */ 
	0x0009052c, /* Controller 9, offset 1324 (direct) */ 
	0x00090530, /* Controller 9, offset 1328 (direct) */ 
	0x00090534, /* Controller 9, offset 1332 (direct) */ 
	0x00090538, /* Controller 9, offset 1336 (direct) */ 
	0x0009053c, /* Controller 9, offset 1340 (direct) */ 
	0x00090540, /* Controller 9, offset 1344 (direct) */ 
	0x00090544, /* Controller 9, offset 1348 (direct) */ 
	0x00090548, /* Controller 9, offset 1352 (direct) */ 
	0x0009054c, /* Controller 9, offset 1356 (direct) */ 
	0x00090550, /* Controller 9, offset 1360 (direct) */ 
	0x00090554, /* Controller 9, offset 1364 (direct) */ 
	0x00090558, /* Controller 9, offset 1368 (direct) */ 
	0x0009055c, /* Controller 9, offset 1372 (direct) */ 
	0x00090560, /* Controller 9, offset 1376 (direct) */ 
	0x00090564, /* Controller 9, offset 1380 (direct) */ 
	0x00090568, /* Controller 9, offset 1384 (direct) */ 
	0x0009056c, /* Controller 9, offset 1388 (direct) */ 
	0x00090570, /* Controller 9, offset 1392 (direct) */ 
	0x00090574, /* Controller 9, offset 1396 (direct) */ 
	0x00090578, /* Controller 9, offset 1400 (direct) */ 
	0x0009057c, /* Controller 9, offset 1404 (direct) */ 
	0x00090580, /* Controller 9, offset 1408 (direct) */ 
	0x00090584, /* Controller 9, offset 1412 (direct) */ 
	0x00090588, /* Controller 9, offset 1416 (direct) */ 
	0x0009058c, /* Controller 9, offset 1420 (direct) */ 
	0x00090590, /* Controller 9, offset 1424 (direct) */ 
	0x00090594, /* Controller 9, offset 1428 (direct) */ 
	0x00090598, /* Controller 9, offset 1432 (direct) */ 
	0x0009059c, /* Controller 9, offset 1436 (direct) */ 
	0x000905a0, /* Controller 9, offset 1440 (direct) */ 
	0x000905a4, /* Controller 9, offset 1444 (direct) */ 
	0x000905a8, /* Controller 9, offset 1448 (direct) */ 
	0x000905ac, /* Controller 9, offset 1452 (direct) */ 
	0x000905b0, /* Controller 9, offset 1456 (direct) */ 
	0x000905b4, /* Controller 9, offset 1460 (direct) */ 
	0x000905b8, /* Controller 9, offset 1464 (direct) */ 
	0x000905bc, /* Controller 9, offset 1468 (direct) */ 
	0x000905c0, /* Controller 9, offset 1472 (direct) */ 
	0x000905c4, /* Controller 9, offset 1476 (direct) */ 
	0x000905c8, /* Controller 9, offset 1480 (direct) */ 
	0x000905cc, /* Controller 9, offset 1484 (direct) */ 
	0x000905d0, /* Controller 9, offset 1488 (direct) */ 
	0x000905d4, /* Controller 9, offset 1492 (direct) */ 
	0x000905d8, /* Controller 9, offset 1496 (direct) */ 
	0x000905dc, /* Controller 9, offset 1500 (direct) */ 
	0x000905e0, /* Controller 9, offset 1504 (direct) */ 
	0x000905e4, /* Controller 9, offset 1508 (direct) */ 
	0x000905e8, /* Controller 9, offset 1512 (direct) */ 
	0x000905ec, /* Controller 9, offset 1516 (direct) */ 
	0x000905f0, /* Controller 9, offset 1520 (direct) */ 
	0x000905f4, /* Controller 9, offset 1524 (direct) */ 
	0x000905f8, /* Controller 9, offset 1528 (direct) */ 
	0x000905fc, /* Controller 9, offset 1532 (direct) */ 
	0x00090600, /* Controller 9, offset 1536 (direct) */ 
	0x00090604, /* Controller 9, offset 1540 (direct) */ 
	0x00090608, /* Controller 9, offset 1544 (direct) */ 
	0x0009060c, /* Controller 9, offset 1548 (direct) */ 
	0x00090610, /* Controller 9, offset 1552 (direct) */ 
	0x00090614, /* Controller 9, offset 1556 (direct) */ 
	0x00090618, /* Controller 9, offset 1560 (direct) */ 
	0x0009061c, /* Controller 9, offset 1564 (direct) */ 
	0x00090620, /* Controller 9, offset 1568 (direct) */ 
	0x00090624, /* Controller 9, offset 1572 (direct) */ 
	0x00090628, /* Controller 9, offset 1576 (direct) */ 
	0x0009062c, /* Controller 9, offset 1580 (direct) */ 
	0x00090630, /* Controller 9, offset 1584 (direct) */ 
	0x00090634, /* Controller 9, offset 1588 (direct) */ 
	0x00090638, /* Controller 9, offset 1592 (direct) */ 
	0x0009063c, /* Controller 9, offset 1596 (direct) */ 
	0x00090640, /* Controller 9, offset 1600 (direct) */ 
	0x00090644, /* Controller 9, offset 1604 (direct) */ 
	0x00090648, /* Controller 9, offset 1608 (direct) */ 
	0x0009064c, /* Controller 9, offset 1612 (direct) */ 
	0x00090650, /* Controller 9, offset 1616 (direct) */ 
	0x00090654, /* Controller 9, offset 1620 (direct) */ 
	0x00090658, /* Controller 9, offset 1624 (direct) */ 
	0x0009065c, /* Controller 9, offset 1628 (direct) */ 
	0x00090660, /* Controller 9, offset 1632 (direct) */ 
	0x00090664, /* Controller 9, offset 1636 (direct) */ 
	0x00090668, /* Controller 9, offset 1640 (direct) */ 
	0x0009066c, /* Controller 9, offset 1644 (direct) */ 
	0x00090670, /* Controller 9, offset 1648 (direct) */ 
	0x00090674, /* Controller 9, offset 1652 (direct) */ 
	0x00090678, /* Controller 9, offset 1656 (direct) */ 
	0x0009067c, /* Controller 9, offset 1660 (direct) */ 
	0x00090680, /* Controller 9, offset 1664 (direct) */ 
	0x00090684, /* Controller 9, offset 1668 (direct) */ 
	0x00090688, /* Controller 9, offset 1672 (direct) */ 
	0x0009068c, /* Controller 9, offset 1676 (direct) */ 
	0x00090690, /* Controller 9, offset 1680 (direct) */ 
	0x00090694, /* Controller 9, offset 1684 (direct) */ 
	0x00090698, /* Controller 9, offset 1688 (direct) */ 
	0x0009069c, /* Controller 9, offset 1692 (direct) */ 
	0x000906a0, /* Controller 9, offset 1696 (direct) */ 
	0x000906a4, /* Controller 9, offset 1700 (direct) */ 
	0x000906a8, /* Controller 9, offset 1704 (direct) */ 
	0x000906ac, /* Controller 9, offset 1708 (direct) */ 
	0x000906b0, /* Controller 9, offset 1712 (direct) */ 
	0x000906b4, /* Controller 9, offset 1716 (direct) */ 
	0x000906b8, /* Controller 9, offset 1720 (direct) */ 
	0x000906bc, /* Controller 9, offset 1724 (direct) */ 
	0x000906c0, /* Controller 9, offset 1728 (direct) */ 
	0x000906c4, /* Controller 9, offset 1732 (direct) */ 
	0x000906c8, /* Controller 9, offset 1736 (direct) */ 
	0x000906cc, /* Controller 9, offset 1740 (direct) */ 
	0x000906d0, /* Controller 9, offset 1744 (direct) */ 
	0x000906d4, /* Controller 9, offset 1748 (direct) */ 
	0x000906d8, /* Controller 9, offset 1752 (direct) */ 
	0x000906dc, /* Controller 9, offset 1756 (direct) */ 
	0x000906e0, /* Controller 9, offset 1760 (direct) */ 
	0x000906e4, /* Controller 9, offset 1764 (direct) */ 
	0x000906e8, /* Controller 9, offset 1768 (direct) */ 
	0x000906ec, /* Controller 9, offset 1772 (direct) */ 
	0x000906f0, /* Controller 9, offset 1776 (direct) */ 
	0x000906f4, /* Controller 9, offset 1780 (direct) */ 
	0x000906f8, /* Controller 9, offset 1784 (direct) */ 
	0x000906fc, /* Controller 9, offset 1788 (direct) */ 
	0x00090700, /* Controller 9, offset 1792 (direct) */ 
	0x00090704, /* Controller 9, offset 1796 (direct) */ 
	0x00090708, /* Controller 9, offset 1800 (direct) */ 
	0x0009070c, /* Controller 9, offset 1804 (direct) */ 
	0x00090710, /* Controller 9, offset 1808 (direct) */ 
	0x00090714, /* Controller 9, offset 1812 (direct) */ 
	0x00090718, /* Controller 9, offset 1816 (direct) */ 
	0x0009071c, /* Controller 9, offset 1820 (direct) */ 
	0x00090720, /* Controller 9, offset 1824 (direct) */ 
	0x00090724, /* Controller 9, offset 1828 (direct) */ 
	0x00090728, /* Controller 9, offset 1832 (direct) */ 
	0x0009072c, /* Controller 9, offset 1836 (direct) */ 
	0x00090730, /* Controller 9, offset 1840 (direct) */ 
	0x00090734, /* Controller 9, offset 1844 (direct) */ 
	0x00090738, /* Controller 9, offset 1848 (direct) */ 
	0x0009073c, /* Controller 9, offset 1852 (direct) */ 
	0x00090740, /* Controller 9, offset 1856 (direct) */ 
	0x00090744, /* Controller 9, offset 1860 (direct) */ 
	0x00090748, /* Controller 9, offset 1864 (direct) */ 
	0x0009074c, /* Controller 9, offset 1868 (direct) */ 
	0x00090750, /* Controller 9, offset 1872 (direct) */ 
	0x00090754, /* Controller 9, offset 1876 (direct) */ 
	0x00090758, /* Controller 9, offset 1880 (direct) */ 
	0x0009075c, /* Controller 9, offset 1884 (direct) */ 
	0x00090760, /* Controller 9, offset 1888 (direct) */ 
	0x00090764, /* Controller 9, offset 1892 (direct) */ 
	0x00090768, /* Controller 9, offset 1896 (direct) */ 
	0x0009076c, /* Controller 9, offset 1900 (direct) */ 
	0x00090770, /* Controller 9, offset 1904 (direct) */ 
	0x00090774, /* Controller 9, offset 1908 (direct) */ 
	0x00090778, /* Controller 9, offset 1912 (direct) */ 
	0x0009077c, /* Controller 9, offset 1916 (direct) */ 
	0x00090780, /* Controller 9, offset 1920 (direct) */ 
	0x00090784, /* Controller 9, offset 1924 (direct) */ 
	0x00090788, /* Controller 9, offset 1928 (direct) */ 
	0x0009078c, /* Controller 9, offset 1932 (direct) */ 
	0x00090790, /* Controller 9, offset 1936 (direct) */ 
	0x00090794, /* Controller 9, offset 1940 (direct) */ 
	0x00090798, /* Controller 9, offset 1944 (direct) */ 
	0x0009079c, /* Controller 9, offset 1948 (direct) */ 
	0x000907a0, /* Controller 9, offset 1952 (direct) */ 
	0x000907a4, /* Controller 9, offset 1956 (direct) */ 
	0x000907a8, /* Controller 9, offset 1960 (direct) */ 
	0x000907ac, /* Controller 9, offset 1964 (direct) */ 
	0x000907b0, /* Controller 9, offset 1968 (direct) */ 
	0x000907b4, /* Controller 9, offset 1972 (direct) */ 
	0x000907b8, /* Controller 9, offset 1976 (direct) */ 
	0x000907bc, /* Controller 9, offset 1980 (direct) */ 
	0x000907c0, /* Controller 9, offset 1984 (direct) */ 
	0x000907c4, /* Controller 9, offset 1988 (direct) */ 
	0x000907c8, /* Controller 9, offset 1992 (direct) */ 
	0x000907cc, /* Controller 9, offset 1996 (direct) */ 
	0x000907d0, /* Controller 9, offset 2000 (direct) */ 
	0x000907d4, /* Controller 9, offset 2004 (direct) */ 
	0x000907d8, /* Controller 9, offset 2008 (direct) */ 
	0x000907dc, /* Controller 9, offset 2012 (direct) */ 
	0x000907e0, /* Controller 9, offset 2016 (direct) */ 
	0x000907e4, /* Controller 9, offset 2020 (direct) */ 
	0x000907e8, /* Controller 9, offset 2024 (direct) */ 
	0x000907ec, /* Controller 9, offset 2028 (direct) */ 
	0x000907f0, /* Controller 9, offset 2032 (direct) */ 
	0x000907f4, /* Controller 9, offset 2036 (direct) */ 
	0x000907f8, /* Controller 9, offset 2040 (direct) */ 
	0x000907fc, /* Controller 9, offset 2044 (direct) */ 
	0x00090800, /* Controller 9, offset 2048 (direct) */ 
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
	0x000a0044, /* Controller 10, offset 68 (direct) */ 
	0x000a0048, /* Controller 10, offset 72 (direct) */ 
	0x000a004c, /* Controller 10, offset 76 (direct) */ 
	0x000a0050, /* Controller 10, offset 80 (direct) */ 
	0x000a0054, /* Controller 10, offset 84 (direct) */ 
	0x000a0058, /* Controller 10, offset 88 (direct) */ 
	0x000a005c, /* Controller 10, offset 92 (direct) */ 
	0x000a0060, /* Controller 10, offset 96 (direct) */ 
	0x000a0064, /* Controller 10, offset 100 (direct) */ 
	0x000a0068, /* Controller 10, offset 104 (direct) */ 
	0x000a006c, /* Controller 10, offset 108 (direct) */ 
	0x000a0070, /* Controller 10, offset 112 (direct) */ 
	0x000a0074, /* Controller 10, offset 116 (direct) */ 
	0x000a0078, /* Controller 10, offset 120 (direct) */ 
	0x000a007c, /* Controller 10, offset 124 (direct) */ 
	0x000a0080, /* Controller 10, offset 128 (direct) */ 
	0x000a0084, /* Controller 10, offset 132 (direct) */ 
	0x000a0088, /* Controller 10, offset 136 (direct) */ 
	0x000a008c, /* Controller 10, offset 140 (direct) */ 
	0x000a0090, /* Controller 10, offset 144 (direct) */ 
	0x000a0094, /* Controller 10, offset 148 (direct) */ 
	0x000a0098, /* Controller 10, offset 152 (direct) */ 
	0x000a009c, /* Controller 10, offset 156 (direct) */ 
	0x000a00a0, /* Controller 10, offset 160 (direct) */ 
	0x000a00a4, /* Controller 10, offset 164 (direct) */ 
	0x000a00a8, /* Controller 10, offset 168 (direct) */ 
	0x000a00ac, /* Controller 10, offset 172 (direct) */ 
	0x000a00b0, /* Controller 10, offset 176 (direct) */ 
	0x000a00b4, /* Controller 10, offset 180 (direct) */ 
	0x000a00b8, /* Controller 10, offset 184 (direct) */ 
	0x000a00bc, /* Controller 10, offset 188 (direct) */ 
	0x000a00c0, /* Controller 10, offset 192 (direct) */ 
	0x000a00c4, /* Controller 10, offset 196 (direct) */ 
	0x000a00c8, /* Controller 10, offset 200 (direct) */ 
	0x000a00cc, /* Controller 10, offset 204 (direct) */ 
	0x000a00d0, /* Controller 10, offset 208 (direct) */ 
	0x000a00d4, /* Controller 10, offset 212 (direct) */ 
	0x000a00d8, /* Controller 10, offset 216 (direct) */ 
	0x000a00dc, /* Controller 10, offset 220 (direct) */ 
	0x000a00e0, /* Controller 10, offset 224 (direct) */ 
	0x000a00e4, /* Controller 10, offset 228 (direct) */ 
	0x000a00e8, /* Controller 10, offset 232 (direct) */ 
	0x000a00ec, /* Controller 10, offset 236 (direct) */ 
	0x000a00f0, /* Controller 10, offset 240 (direct) */ 
	0x000a00f4, /* Controller 10, offset 244 (direct) */ 
	0x000a00f8, /* Controller 10, offset 248 (direct) */ 
	0x000a00fc, /* Controller 10, offset 252 (direct) */ 
	0x000a0100, /* Controller 10, offset 256 (direct) */ 
	0x000a0104, /* Controller 10, offset 260 (direct) */ 
	0x000a0108, /* Controller 10, offset 264 (direct) */ 
	0x000a010c, /* Controller 10, offset 268 (direct) */ 
	0x000a0110, /* Controller 10, offset 272 (direct) */ 
	0x000a0114, /* Controller 10, offset 276 (direct) */ 
	0x000a0118, /* Controller 10, offset 280 (direct) */ 
	0x000a011c, /* Controller 10, offset 284 (direct) */ 
	0x000a0120, /* Controller 10, offset 288 (direct) */ 
	0x000a0124, /* Controller 10, offset 292 (direct) */ 
	0x000a0128, /* Controller 10, offset 296 (direct) */ 
	0x000a012c, /* Controller 10, offset 300 (direct) */ 
	0x000a0130, /* Controller 10, offset 304 (direct) */ 
	0x000a0134, /* Controller 10, offset 308 (direct) */ 
	0x000a0138, /* Controller 10, offset 312 (direct) */ 
	0x000a013c, /* Controller 10, offset 316 (direct) */ 
	0x000a0140, /* Controller 10, offset 320 (direct) */ 
	0x000a0144, /* Controller 10, offset 324 (direct) */ 
	0x000a0148, /* Controller 10, offset 328 (direct) */ 
	0x000a014c, /* Controller 10, offset 332 (direct) */ 
	0x000a0150, /* Controller 10, offset 336 (direct) */ 
	0x000a0154, /* Controller 10, offset 340 (direct) */ 
	0x000a0158, /* Controller 10, offset 344 (direct) */ 
	0x000a015c, /* Controller 10, offset 348 (direct) */ 
	0x000a0160, /* Controller 10, offset 352 (direct) */ 
	0x000a0164, /* Controller 10, offset 356 (direct) */ 
	0x000a0168, /* Controller 10, offset 360 (direct) */ 
	0x000a016c, /* Controller 10, offset 364 (direct) */ 
	0x000a0170, /* Controller 10, offset 368 (direct) */ 
	0x000a0174, /* Controller 10, offset 372 (direct) */ 
	0x000a0178, /* Controller 10, offset 376 (direct) */ 
	0x000a017c, /* Controller 10, offset 380 (direct) */ 
	0x000a0180, /* Controller 10, offset 384 (direct) */ 
	0x000a0184, /* Controller 10, offset 388 (direct) */ 
	0x000a0188, /* Controller 10, offset 392 (direct) */ 
	0x000a018c, /* Controller 10, offset 396 (direct) */ 
	0x000a0190, /* Controller 10, offset 400 (direct) */ 
	0x000a0194, /* Controller 10, offset 404 (direct) */ 
	0x000a0198, /* Controller 10, offset 408 (direct) */ 
	0x000a019c, /* Controller 10, offset 412 (direct) */ 
	0x000a01a0, /* Controller 10, offset 416 (direct) */ 
	0x000a01a4, /* Controller 10, offset 420 (direct) */ 
	0x000a01a8, /* Controller 10, offset 424 (direct) */ 
	0x000a01ac, /* Controller 10, offset 428 (direct) */ 
	0x000a01b0, /* Controller 10, offset 432 (direct) */ 
	0x000a01b4, /* Controller 10, offset 436 (direct) */ 
	0x000a01b8, /* Controller 10, offset 440 (direct) */ 
	0x000a01bc, /* Controller 10, offset 444 (direct) */ 
	0x000a01c0, /* Controller 10, offset 448 (direct) */ 
	0x000a01c4, /* Controller 10, offset 452 (direct) */ 
	0x000a01c8, /* Controller 10, offset 456 (direct) */ 
	0x000a01cc, /* Controller 10, offset 460 (direct) */ 
	0x000a01d0, /* Controller 10, offset 464 (direct) */ 
	0x000a01d4, /* Controller 10, offset 468 (direct) */ 
	0x000a01d8, /* Controller 10, offset 472 (direct) */ 
	0x000a01dc, /* Controller 10, offset 476 (direct) */ 
	0x000a01e0, /* Controller 10, offset 480 (direct) */ 
	0x000a01e4, /* Controller 10, offset 484 (direct) */ 
	0x000a01e8, /* Controller 10, offset 488 (direct) */ 
	0x000a01ec, /* Controller 10, offset 492 (direct) */ 
	0x000a01f0, /* Controller 10, offset 496 (direct) */ 
	0x000a01f4, /* Controller 10, offset 500 (direct) */ 
	0x000a01f8, /* Controller 10, offset 504 (direct) */ 
	0x000a01fc, /* Controller 10, offset 508 (direct) */ 
	0x000a0200, /* Controller 10, offset 512 (direct) */ 
	0x000a0204, /* Controller 10, offset 516 (direct) */ 
	0x000a0208, /* Controller 10, offset 520 (direct) */ 
	0x000a020c, /* Controller 10, offset 524 (direct) */ 
	0x000a0210, /* Controller 10, offset 528 (direct) */ 
	0x000a0214, /* Controller 10, offset 532 (direct) */ 
	0x000a0218, /* Controller 10, offset 536 (direct) */ 
	0x000a021c, /* Controller 10, offset 540 (direct) */ 
	0x000a0220, /* Controller 10, offset 544 (direct) */ 
	0x000a0224, /* Controller 10, offset 548 (direct) */ 
	0x000a0228, /* Controller 10, offset 552 (direct) */ 
	0x000a022c, /* Controller 10, offset 556 (direct) */ 
	0x000a0230, /* Controller 10, offset 560 (direct) */ 
	0x000a0234, /* Controller 10, offset 564 (direct) */ 
	0x000a0238, /* Controller 10, offset 568 (direct) */ 
	0x000a023c, /* Controller 10, offset 572 (direct) */ 
	0x000a0240, /* Controller 10, offset 576 (direct) */ 
	0x000a0244, /* Controller 10, offset 580 (direct) */ 
	0x000a0248, /* Controller 10, offset 584 (direct) */ 
	0x000a024c, /* Controller 10, offset 588 (direct) */ 
	0x000a0250, /* Controller 10, offset 592 (direct) */ 
	0x000a0254, /* Controller 10, offset 596 (direct) */ 
	0x000a0258, /* Controller 10, offset 600 (direct) */ 
	0x000a025c, /* Controller 10, offset 604 (direct) */ 
	0x000a0260, /* Controller 10, offset 608 (direct) */ 
	0x000a0264, /* Controller 10, offset 612 (direct) */ 
	0x000a0268, /* Controller 10, offset 616 (direct) */ 
	0x000a026c, /* Controller 10, offset 620 (direct) */ 
	0x000a0270, /* Controller 10, offset 624 (direct) */ 
	0x000a0274, /* Controller 10, offset 628 (direct) */ 
	0x000a0278, /* Controller 10, offset 632 (direct) */ 
	0x000a027c, /* Controller 10, offset 636 (direct) */ 
	0x000a0280, /* Controller 10, offset 640 (direct) */ 
	0x000a0284, /* Controller 10, offset 644 (direct) */ 
	0x000a0288, /* Controller 10, offset 648 (direct) */ 
	0x000a028c, /* Controller 10, offset 652 (direct) */ 
	0x000a0290, /* Controller 10, offset 656 (direct) */ 
	0x000a0294, /* Controller 10, offset 660 (direct) */ 
	0x000a0298, /* Controller 10, offset 664 (direct) */ 
	0x000a029c, /* Controller 10, offset 668 (direct) */ 
	0x000a02a0, /* Controller 10, offset 672 (direct) */ 
	0x000a02a4, /* Controller 10, offset 676 (direct) */ 
	0x000a02a8, /* Controller 10, offset 680 (direct) */ 
	0x000a02ac, /* Controller 10, offset 684 (direct) */ 
	0x000a02b0, /* Controller 10, offset 688 (direct) */ 
	0x000a02b4, /* Controller 10, offset 692 (direct) */ 
	0x000a02b8, /* Controller 10, offset 696 (direct) */ 
	0x000a02bc, /* Controller 10, offset 700 (direct) */ 
	0x000a02c0, /* Controller 10, offset 704 (direct) */ 
	0x000a02c4, /* Controller 10, offset 708 (direct) */ 
	0x000a02c8, /* Controller 10, offset 712 (direct) */ 
	0x000a02cc, /* Controller 10, offset 716 (direct) */ 
	0x000a02d0, /* Controller 10, offset 720 (direct) */ 
	0x000a02d4, /* Controller 10, offset 724 (direct) */ 
	0x000a02d8, /* Controller 10, offset 728 (direct) */ 
	0x000a02dc, /* Controller 10, offset 732 (direct) */ 
	0x000a02e0, /* Controller 10, offset 736 (direct) */ 
	0x000a02e4, /* Controller 10, offset 740 (direct) */ 
	0x000a02e8, /* Controller 10, offset 744 (direct) */ 
	0x000a02ec, /* Controller 10, offset 748 (direct) */ 
	0x000a02f0, /* Controller 10, offset 752 (direct) */ 
	0x000a02f4, /* Controller 10, offset 756 (direct) */ 
	0x000a02f8, /* Controller 10, offset 760 (direct) */ 
	0x000a02fc, /* Controller 10, offset 764 (direct) */ 
	0x000a0300, /* Controller 10, offset 768 (direct) */ 
	0x000a0304, /* Controller 10, offset 772 (direct) */ 
	0x000a0308, /* Controller 10, offset 776 (direct) */ 
	0x000a030c, /* Controller 10, offset 780 (direct) */ 
	0x000a0310, /* Controller 10, offset 784 (direct) */ 
	0x000a0314, /* Controller 10, offset 788 (direct) */ 
	0x000a0318, /* Controller 10, offset 792 (direct) */ 
	0x000a031c, /* Controller 10, offset 796 (direct) */ 
	0x000a0320, /* Controller 10, offset 800 (direct) */ 
	0x000a0324, /* Controller 10, offset 804 (direct) */ 
	0x000a0328, /* Controller 10, offset 808 (direct) */ 
	0x000a032c, /* Controller 10, offset 812 (direct) */ 
	0x000a0330, /* Controller 10, offset 816 (direct) */ 
	0x000a0334, /* Controller 10, offset 820 (direct) */ 
	0x000a0338, /* Controller 10, offset 824 (direct) */ 
	0x000a033c, /* Controller 10, offset 828 (direct) */ 
	0x000a0340, /* Controller 10, offset 832 (direct) */ 
	0x000a0344, /* Controller 10, offset 836 (direct) */ 
	0x000a0348, /* Controller 10, offset 840 (direct) */ 
	0x000a034c, /* Controller 10, offset 844 (direct) */ 
	0x000a0350, /* Controller 10, offset 848 (direct) */ 
	0x000a0354, /* Controller 10, offset 852 (direct) */ 
	0x000a0358, /* Controller 10, offset 856 (direct) */ 
	0x000a035c, /* Controller 10, offset 860 (direct) */ 
	0x000a0360, /* Controller 10, offset 864 (direct) */ 
	0x000a0364, /* Controller 10, offset 868 (direct) */ 
	0x000a0368, /* Controller 10, offset 872 (direct) */ 
	0x000a036c, /* Controller 10, offset 876 (direct) */ 
	0x000a0370, /* Controller 10, offset 880 (direct) */ 
	0x000a0374, /* Controller 10, offset 884 (direct) */ 
	0x000a0378, /* Controller 10, offset 888 (direct) */ 
	0x000a037c, /* Controller 10, offset 892 (direct) */ 
	0x000a0380, /* Controller 10, offset 896 (direct) */ 
	0x000a0384, /* Controller 10, offset 900 (direct) */ 
	0x000a0388, /* Controller 10, offset 904 (direct) */ 
	0x000a038c, /* Controller 10, offset 908 (direct) */ 
	0x000a0390, /* Controller 10, offset 912 (direct) */ 
	0x000a0394, /* Controller 10, offset 916 (direct) */ 
	0x000a0398, /* Controller 10, offset 920 (direct) */ 
	0x000a039c, /* Controller 10, offset 924 (direct) */ 
	0x000a03a0, /* Controller 10, offset 928 (direct) */ 
	0x000a03a4, /* Controller 10, offset 932 (direct) */ 
	0x000a03a8, /* Controller 10, offset 936 (direct) */ 
	0x000a03ac, /* Controller 10, offset 940 (direct) */ 
	0x000a03b0, /* Controller 10, offset 944 (direct) */ 
	0x000a03b4, /* Controller 10, offset 948 (direct) */ 
	0x000a03b8, /* Controller 10, offset 952 (direct) */ 
	0x000a03bc, /* Controller 10, offset 956 (direct) */ 
	0x000a03c0, /* Controller 10, offset 960 (direct) */ 
	0x000a03c4, /* Controller 10, offset 964 (direct) */ 
	0x000a03c8, /* Controller 10, offset 968 (direct) */ 
	0x000a03cc, /* Controller 10, offset 972 (direct) */ 
	0x000a03d0, /* Controller 10, offset 976 (direct) */ 
	0x000a03d4, /* Controller 10, offset 980 (direct) */ 
	0x000a03d8, /* Controller 10, offset 984 (direct) */ 
	0x000a03dc, /* Controller 10, offset 988 (direct) */ 
	0x000a03e0, /* Controller 10, offset 992 (direct) */ 
	0x000a03e4, /* Controller 10, offset 996 (direct) */ 
	0x000a03e8, /* Controller 10, offset 1000 (direct) */ 
	0x000a03ec, /* Controller 10, offset 1004 (direct) */ 
	0x000a03f0, /* Controller 10, offset 1008 (direct) */ 
	0x000a03f4, /* Controller 10, offset 1012 (direct) */ 
	0x000a03f8, /* Controller 10, offset 1016 (direct) */ 
	0x000a03fc, /* Controller 10, offset 1020 (direct) */ 
	0x000a0400, /* Controller 10, offset 1024 (direct) */ 
	0x000a0404, /* Controller 10, offset 1028 (direct) */ 
	0x000a0408, /* Controller 10, offset 1032 (direct) */ 
	0x000a040c, /* Controller 10, offset 1036 (direct) */ 
	0x000a0410, /* Controller 10, offset 1040 (direct) */ 
	0x000a0414, /* Controller 10, offset 1044 (direct) */ 
	0x000a0418, /* Controller 10, offset 1048 (direct) */ 
	0x000a041c, /* Controller 10, offset 1052 (direct) */ 
	0x000a0420, /* Controller 10, offset 1056 (direct) */ 
	0x000a0424, /* Controller 10, offset 1060 (direct) */ 
	0x000a0428, /* Controller 10, offset 1064 (direct) */ 
	0x000a042c, /* Controller 10, offset 1068 (direct) */ 
	0x000a0430, /* Controller 10, offset 1072 (direct) */ 
	0x000a0434, /* Controller 10, offset 1076 (direct) */ 
	0x000a0438, /* Controller 10, offset 1080 (direct) */ 
	0x000a043c, /* Controller 10, offset 1084 (direct) */ 
	0x000a0440, /* Controller 10, offset 1088 (direct) */ 
	0x000a0444, /* Controller 10, offset 1092 (direct) */ 
	0x000a0448, /* Controller 10, offset 1096 (direct) */ 
	0x000a044c, /* Controller 10, offset 1100 (direct) */ 
	0x000a0450, /* Controller 10, offset 1104 (direct) */ 
	0x000a0454, /* Controller 10, offset 1108 (direct) */ 
	0x000a0458, /* Controller 10, offset 1112 (direct) */ 
	0x000a045c, /* Controller 10, offset 1116 (direct) */ 
	0x000a0460, /* Controller 10, offset 1120 (direct) */ 
	0x000a0464, /* Controller 10, offset 1124 (direct) */ 
	0x000a0468, /* Controller 10, offset 1128 (direct) */ 
	0x000a046c, /* Controller 10, offset 1132 (direct) */ 
	0x000a0470, /* Controller 10, offset 1136 (direct) */ 
	0x000a0474, /* Controller 10, offset 1140 (direct) */ 
	0x000a0478, /* Controller 10, offset 1144 (direct) */ 
	0x000a047c, /* Controller 10, offset 1148 (direct) */ 
	0x000a0480, /* Controller 10, offset 1152 (direct) */ 
	0x000a0484, /* Controller 10, offset 1156 (direct) */ 
	0x000a0488, /* Controller 10, offset 1160 (direct) */ 
	0x000a048c, /* Controller 10, offset 1164 (direct) */ 
	0x000a0490, /* Controller 10, offset 1168 (direct) */ 
	0x000a0494, /* Controller 10, offset 1172 (direct) */ 
	0x000a0498, /* Controller 10, offset 1176 (direct) */ 
	0x000a049c, /* Controller 10, offset 1180 (direct) */ 
	0x000a04a0, /* Controller 10, offset 1184 (direct) */ 
	0x000a04a4, /* Controller 10, offset 1188 (direct) */ 
	0x000a04a8, /* Controller 10, offset 1192 (direct) */ 
	0x000a04ac, /* Controller 10, offset 1196 (direct) */ 
	0x000a04b0, /* Controller 10, offset 1200 (direct) */ 
	0x000a04b4, /* Controller 10, offset 1204 (direct) */ 
	0x000a04b8, /* Controller 10, offset 1208 (direct) */ 
	0x000a04bc, /* Controller 10, offset 1212 (direct) */ 
	0x000a04c0, /* Controller 10, offset 1216 (direct) */ 
	0x000a04c4, /* Controller 10, offset 1220 (direct) */ 
	0x000a04c8, /* Controller 10, offset 1224 (direct) */ 
	0x000a04cc, /* Controller 10, offset 1228 (direct) */ 
	0x000a04d0, /* Controller 10, offset 1232 (direct) */ 
	0x000a04d4, /* Controller 10, offset 1236 (direct) */ 
	0x000a04d8, /* Controller 10, offset 1240 (direct) */ 
	0x000a04dc, /* Controller 10, offset 1244 (direct) */ 
	0x000a04e0, /* Controller 10, offset 1248 (direct) */ 
	0x000a04e4, /* Controller 10, offset 1252 (direct) */ 
	0x000a04e8, /* Controller 10, offset 1256 (direct) */ 
	0x000a04ec, /* Controller 10, offset 1260 (direct) */ 
	0x000a04f0, /* Controller 10, offset 1264 (direct) */ 
	0x000a04f4, /* Controller 10, offset 1268 (direct) */ 
	0x000a04f8, /* Controller 10, offset 1272 (direct) */ 
	0x000a04fc, /* Controller 10, offset 1276 (direct) */ 
	0x000a0500, /* Controller 10, offset 1280 (direct) */ 
	0x000a0504, /* Controller 10, offset 1284 (direct) */ 
	0x000a0508, /* Controller 10, offset 1288 (direct) */ 
	0x000a050c, /* Controller 10, offset 1292 (direct) */ 
	0x000a0510, /* Controller 10, offset 1296 (direct) */ 
	0x000a0514, /* Controller 10, offset 1300 (direct) */ 
	0x000a0518, /* Controller 10, offset 1304 (direct) */ 
	0x000a051c, /* Controller 10, offset 1308 (direct) */ 
	0x000a0520, /* Controller 10, offset 1312 (direct) */ 
	0x000a0524, /* Controller 10, offset 1316 (direct) */ 
	0x000a0528, /* Controller 10, offset 1320 (direct) */ 
	0x000a052c, /* Controller 10, offset 1324 (direct) */ 
	0x000a0530, /* Controller 10, offset 1328 (direct) */ 
	0x000a0534, /* Controller 10, offset 1332 (direct) */ 
	0x000a0538, /* Controller 10, offset 1336 (direct) */ 
	0x000a053c, /* Controller 10, offset 1340 (direct) */ 
	0x000a0540, /* Controller 10, offset 1344 (direct) */ 
	0x000a0544, /* Controller 10, offset 1348 (direct) */ 
	0x000a0548, /* Controller 10, offset 1352 (direct) */ 
	0x000a054c, /* Controller 10, offset 1356 (direct) */ 
	0x000a0550, /* Controller 10, offset 1360 (direct) */ 
	0x000a0554, /* Controller 10, offset 1364 (direct) */ 
	0x000a0558, /* Controller 10, offset 1368 (direct) */ 
	0x000a055c, /* Controller 10, offset 1372 (direct) */ 
	0x000a0560, /* Controller 10, offset 1376 (direct) */ 
	0x000a0564, /* Controller 10, offset 1380 (direct) */ 
	0x000a0568, /* Controller 10, offset 1384 (direct) */ 
	0x000a056c, /* Controller 10, offset 1388 (direct) */ 
	0x000a0570, /* Controller 10, offset 1392 (direct) */ 
	0x000a0574, /* Controller 10, offset 1396 (direct) */ 
	0x000a0578, /* Controller 10, offset 1400 (direct) */ 
	0x000a057c, /* Controller 10, offset 1404 (direct) */ 
	0x000a0580, /* Controller 10, offset 1408 (direct) */ 
	0x000a0584, /* Controller 10, offset 1412 (direct) */ 
	0x000a0588, /* Controller 10, offset 1416 (direct) */ 
	0x000a058c, /* Controller 10, offset 1420 (direct) */ 
	0x000a0590, /* Controller 10, offset 1424 (direct) */ 
	0x000a0594, /* Controller 10, offset 1428 (direct) */ 
	0x000a0598, /* Controller 10, offset 1432 (direct) */ 
	0x000a059c, /* Controller 10, offset 1436 (direct) */ 
	0x000a05a0, /* Controller 10, offset 1440 (direct) */ 
	0x000a05a4, /* Controller 10, offset 1444 (direct) */ 
	0x000a05a8, /* Controller 10, offset 1448 (direct) */ 
	0x000a05ac, /* Controller 10, offset 1452 (direct) */ 
	0x000a05b0, /* Controller 10, offset 1456 (direct) */ 
	0x000a05b4, /* Controller 10, offset 1460 (direct) */ 
	0x000a05b8, /* Controller 10, offset 1464 (direct) */ 
	0x000a05bc, /* Controller 10, offset 1468 (direct) */ 
	0x000a05c0, /* Controller 10, offset 1472 (direct) */ 
	0x000a05c4, /* Controller 10, offset 1476 (direct) */ 
	0x000a05c8, /* Controller 10, offset 1480 (direct) */ 
	0x000a05cc, /* Controller 10, offset 1484 (direct) */ 
	0x000a05d0, /* Controller 10, offset 1488 (direct) */ 
	0x000a05d4, /* Controller 10, offset 1492 (direct) */ 
	0x000a05d8, /* Controller 10, offset 1496 (direct) */ 
	0x000a05dc, /* Controller 10, offset 1500 (direct) */ 
	0x000a05e0, /* Controller 10, offset 1504 (direct) */ 
	0x000a05e4, /* Controller 10, offset 1508 (direct) */ 
	0x000a05e8, /* Controller 10, offset 1512 (direct) */ 
	0x000a05ec, /* Controller 10, offset 1516 (direct) */ 
	0x000a05f0, /* Controller 10, offset 1520 (direct) */ 
	0x000a05f4, /* Controller 10, offset 1524 (direct) */ 
	0x000a05f8, /* Controller 10, offset 1528 (direct) */ 
	0x000a05fc, /* Controller 10, offset 1532 (direct) */ 
	0x000a0600, /* Controller 10, offset 1536 (direct) */ 
	0x000a0604, /* Controller 10, offset 1540 (direct) */ 
	0x000a0608, /* Controller 10, offset 1544 (direct) */ 
	0x000a060c, /* Controller 10, offset 1548 (direct) */ 
	0x000a0610, /* Controller 10, offset 1552 (direct) */ 
	0x000a0614, /* Controller 10, offset 1556 (direct) */ 
	0x000a0618, /* Controller 10, offset 1560 (direct) */ 
	0x000a061c, /* Controller 10, offset 1564 (direct) */ 
	0x000a0620, /* Controller 10, offset 1568 (direct) */ 
	0x000a0624, /* Controller 10, offset 1572 (direct) */ 
	0x000a0628, /* Controller 10, offset 1576 (direct) */ 
	0x000a062c, /* Controller 10, offset 1580 (direct) */ 
	0x000a0630, /* Controller 10, offset 1584 (direct) */ 
	0x000a0634, /* Controller 10, offset 1588 (direct) */ 
	0x000a0638, /* Controller 10, offset 1592 (direct) */ 
	0x000a063c, /* Controller 10, offset 1596 (direct) */ 
	0x000a0640, /* Controller 10, offset 1600 (direct) */ 
	0x000a0644, /* Controller 10, offset 1604 (direct) */ 
	0x000a0648, /* Controller 10, offset 1608 (direct) */ 
	0x000a064c, /* Controller 10, offset 1612 (direct) */ 
	0x000a0650, /* Controller 10, offset 1616 (direct) */ 
	0x000a0654, /* Controller 10, offset 1620 (direct) */ 
	0x000a0658, /* Controller 10, offset 1624 (direct) */ 
	0x000a065c, /* Controller 10, offset 1628 (direct) */ 
	0x000a0660, /* Controller 10, offset 1632 (direct) */ 
	0x000a0664, /* Controller 10, offset 1636 (direct) */ 
	0x000a0668, /* Controller 10, offset 1640 (direct) */ 
	0x000a066c, /* Controller 10, offset 1644 (direct) */ 
	0x000a0670, /* Controller 10, offset 1648 (direct) */ 
	0x000a0674, /* Controller 10, offset 1652 (direct) */ 
	0x000a0678, /* Controller 10, offset 1656 (direct) */ 
	0x000a067c, /* Controller 10, offset 1660 (direct) */ 
	0x000a0680, /* Controller 10, offset 1664 (direct) */ 
	0x000a0684, /* Controller 10, offset 1668 (direct) */ 
	0x000a0688, /* Controller 10, offset 1672 (direct) */ 
	0x000a068c, /* Controller 10, offset 1676 (direct) */ 
	0x000a0690, /* Controller 10, offset 1680 (direct) */ 
	0x000a0694, /* Controller 10, offset 1684 (direct) */ 
	0x000a0698, /* Controller 10, offset 1688 (direct) */ 
	0x000a069c, /* Controller 10, offset 1692 (direct) */ 
	0x000a06a0, /* Controller 10, offset 1696 (direct) */ 
	0x000a06a4, /* Controller 10, offset 1700 (direct) */ 
	0x000a06a8, /* Controller 10, offset 1704 (direct) */ 
	0x000a06ac, /* Controller 10, offset 1708 (direct) */ 
	0x000a06b0, /* Controller 10, offset 1712 (direct) */ 
	0x000a06b4, /* Controller 10, offset 1716 (direct) */ 
	0x000a06b8, /* Controller 10, offset 1720 (direct) */ 
	0x000a06bc, /* Controller 10, offset 1724 (direct) */ 
	0x000a06c0, /* Controller 10, offset 1728 (direct) */ 
	0x000a06c4, /* Controller 10, offset 1732 (direct) */ 
	0x000a06c8, /* Controller 10, offset 1736 (direct) */ 
	0x000a06cc, /* Controller 10, offset 1740 (direct) */ 
	0x000a06d0, /* Controller 10, offset 1744 (direct) */ 
	0x000a06d4, /* Controller 10, offset 1748 (direct) */ 
	0x000a06d8, /* Controller 10, offset 1752 (direct) */ 
	0x000a06dc, /* Controller 10, offset 1756 (direct) */ 
	0x000a06e0, /* Controller 10, offset 1760 (direct) */ 
	0x000a06e4, /* Controller 10, offset 1764 (direct) */ 
	0x000a06e8, /* Controller 10, offset 1768 (direct) */ 
	0x000a06ec, /* Controller 10, offset 1772 (direct) */ 
	0x000a06f0, /* Controller 10, offset 1776 (direct) */ 
	0x000a06f4, /* Controller 10, offset 1780 (direct) */ 
	0x000a06f8, /* Controller 10, offset 1784 (direct) */ 
	0x000a06fc, /* Controller 10, offset 1788 (direct) */ 
	0x000a0700, /* Controller 10, offset 1792 (direct) */ 
	0x000a0704, /* Controller 10, offset 1796 (direct) */ 
	0x000a0708, /* Controller 10, offset 1800 (direct) */ 
	0x000a070c, /* Controller 10, offset 1804 (direct) */ 
	0x000a0710, /* Controller 10, offset 1808 (direct) */ 
	0x000a0714, /* Controller 10, offset 1812 (direct) */ 
	0x000a0718, /* Controller 10, offset 1816 (direct) */ 
	0x000a071c, /* Controller 10, offset 1820 (direct) */ 
	0x000a0720, /* Controller 10, offset 1824 (direct) */ 
	0x000a0724, /* Controller 10, offset 1828 (direct) */ 
	0x000a0728, /* Controller 10, offset 1832 (direct) */ 
	0x000a072c, /* Controller 10, offset 1836 (direct) */ 
	0x000a0730, /* Controller 10, offset 1840 (direct) */ 
	0x000a0734, /* Controller 10, offset 1844 (direct) */ 
	0x000a0738, /* Controller 10, offset 1848 (direct) */ 
	0x000a073c, /* Controller 10, offset 1852 (direct) */ 
	0x000a0740, /* Controller 10, offset 1856 (direct) */ 
	0x000a0744, /* Controller 10, offset 1860 (direct) */ 
	0x000a0748, /* Controller 10, offset 1864 (direct) */ 
	0x000a074c, /* Controller 10, offset 1868 (direct) */ 
	0x000a0750, /* Controller 10, offset 1872 (direct) */ 
	0x000a0754, /* Controller 10, offset 1876 (direct) */ 
	0x000a0758, /* Controller 10, offset 1880 (direct) */ 
	0x000a075c, /* Controller 10, offset 1884 (direct) */ 
	0x000a0760, /* Controller 10, offset 1888 (direct) */ 
	0x000a0764, /* Controller 10, offset 1892 (direct) */ 
	0x000a0768, /* Controller 10, offset 1896 (direct) */ 
	0x000a076c, /* Controller 10, offset 1900 (direct) */ 
	0x000a0770, /* Controller 10, offset 1904 (direct) */ 
	0x000a0774, /* Controller 10, offset 1908 (direct) */ 
	0x000a0778, /* Controller 10, offset 1912 (direct) */ 
	0x000a077c, /* Controller 10, offset 1916 (direct) */ 
	0x000a0780, /* Controller 10, offset 1920 (direct) */ 
	0x000a0784, /* Controller 10, offset 1924 (direct) */ 
	0x000a0788, /* Controller 10, offset 1928 (direct) */ 
	0x000a078c, /* Controller 10, offset 1932 (direct) */ 
	0x000a0790, /* Controller 10, offset 1936 (direct) */ 
	0x000a0794, /* Controller 10, offset 1940 (direct) */ 
	0x000a0798, /* Controller 10, offset 1944 (direct) */ 
	0x000a079c, /* Controller 10, offset 1948 (direct) */ 
	0x000a07a0, /* Controller 10, offset 1952 (direct) */ 
	0x000a07a4, /* Controller 10, offset 1956 (direct) */ 
	0x000a07a8, /* Controller 10, offset 1960 (direct) */ 
	0x000a07ac, /* Controller 10, offset 1964 (direct) */ 
	0x000a07b0, /* Controller 10, offset 1968 (direct) */ 
	0x000a07b4, /* Controller 10, offset 1972 (direct) */ 
	0x000a07b8, /* Controller 10, offset 1976 (direct) */ 
	0x000a07bc, /* Controller 10, offset 1980 (direct) */ 
	0x000a07c0, /* Controller 10, offset 1984 (direct) */ 
	0x000a07c4, /* Controller 10, offset 1988 (direct) */ 
	0x000a07c8, /* Controller 10, offset 1992 (direct) */ 
	0x000a07cc, /* Controller 10, offset 1996 (direct) */ 
	0x000a07d0, /* Controller 10, offset 2000 (direct) */ 
	0x000a07d4, /* Controller 10, offset 2004 (direct) */ 
	0x000a07d8, /* Controller 10, offset 2008 (direct) */ 
	0x000a07dc, /* Controller 10, offset 2012 (direct) */ 
	0x000a07e0, /* Controller 10, offset 2016 (direct) */ 
	0x000a07e4, /* Controller 10, offset 2020 (direct) */ 
	0x000a07e8, /* Controller 10, offset 2024 (direct) */ 
	0x000a07ec, /* Controller 10, offset 2028 (direct) */ 
	0x000a07f0, /* Controller 10, offset 2032 (direct) */ 
	0x000a07f4, /* Controller 10, offset 2036 (direct) */ 
	0x000a07f8, /* Controller 10, offset 2040 (direct) */ 
	0x000a07fc, /* Controller 10, offset 2044 (direct) */ 
	0x000a0800, /* Controller 10, offset 2048 (direct) */ 
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
	0x000b0044, /* Controller 11, offset 68 (direct) */ 
	0x000b0048, /* Controller 11, offset 72 (direct) */ 
	0x000b004c, /* Controller 11, offset 76 (direct) */ 
	0x000b0050, /* Controller 11, offset 80 (direct) */ 
	0x000b0054, /* Controller 11, offset 84 (direct) */ 
	0x000b0058, /* Controller 11, offset 88 (direct) */ 
	0x000b005c, /* Controller 11, offset 92 (direct) */ 
	0x000b0060, /* Controller 11, offset 96 (direct) */ 
	0x000b0064, /* Controller 11, offset 100 (direct) */ 
	0x000b0068, /* Controller 11, offset 104 (direct) */ 
	0x000b006c, /* Controller 11, offset 108 (direct) */ 
	0x000b0070, /* Controller 11, offset 112 (direct) */ 
	0x000b0074, /* Controller 11, offset 116 (direct) */ 
	0x000b0078, /* Controller 11, offset 120 (direct) */ 
	0x000b007c, /* Controller 11, offset 124 (direct) */ 
	0x000b0080, /* Controller 11, offset 128 (direct) */ 
	0x000b0084, /* Controller 11, offset 132 (direct) */ 
	0x000b0088, /* Controller 11, offset 136 (direct) */ 
	0x000b008c, /* Controller 11, offset 140 (direct) */ 
	0x000b0090, /* Controller 11, offset 144 (direct) */ 
	0x000b0094, /* Controller 11, offset 148 (direct) */ 
	0x000b0098, /* Controller 11, offset 152 (direct) */ 
	0x000b009c, /* Controller 11, offset 156 (direct) */ 
	0x000b00a0, /* Controller 11, offset 160 (direct) */ 
	0x000b00a4, /* Controller 11, offset 164 (direct) */ 
	0x000b00a8, /* Controller 11, offset 168 (direct) */ 
	0x000b00ac, /* Controller 11, offset 172 (direct) */ 
	0x000b00b0, /* Controller 11, offset 176 (direct) */ 
	0x000b00b4, /* Controller 11, offset 180 (direct) */ 
	0x000b00b8, /* Controller 11, offset 184 (direct) */ 
	0x000b00bc, /* Controller 11, offset 188 (direct) */ 
	0x000b00c0, /* Controller 11, offset 192 (direct) */ 
	0x000b00c4, /* Controller 11, offset 196 (direct) */ 
	0x000b00c8, /* Controller 11, offset 200 (direct) */ 
	0x000b00cc, /* Controller 11, offset 204 (direct) */ 
	0x000b00d0, /* Controller 11, offset 208 (direct) */ 
	0x000b00d4, /* Controller 11, offset 212 (direct) */ 
	0x000b00d8, /* Controller 11, offset 216 (direct) */ 
	0x000b00dc, /* Controller 11, offset 220 (direct) */ 
	0x000b00e0, /* Controller 11, offset 224 (direct) */ 
	0x000b00e4, /* Controller 11, offset 228 (direct) */ 
	0x000b00e8, /* Controller 11, offset 232 (direct) */ 
	0x000b00ec, /* Controller 11, offset 236 (direct) */ 
	0x000b00f0, /* Controller 11, offset 240 (direct) */ 
	0x000b00f4, /* Controller 11, offset 244 (direct) */ 
	0x000b00f8, /* Controller 11, offset 248 (direct) */ 
	0x000b00fc, /* Controller 11, offset 252 (direct) */ 
	0x000b0100, /* Controller 11, offset 256 (direct) */ 
	0x000b0104, /* Controller 11, offset 260 (direct) */ 
	0x000b0108, /* Controller 11, offset 264 (direct) */ 
	0x000b010c, /* Controller 11, offset 268 (direct) */ 
	0x000b0110, /* Controller 11, offset 272 (direct) */ 
	0x000b0114, /* Controller 11, offset 276 (direct) */ 
	0x000b0118, /* Controller 11, offset 280 (direct) */ 
	0x000b011c, /* Controller 11, offset 284 (direct) */ 
	0x000b0120, /* Controller 11, offset 288 (direct) */ 
	0x000b0124, /* Controller 11, offset 292 (direct) */ 
	0x000b0128, /* Controller 11, offset 296 (direct) */ 
	0x000b012c, /* Controller 11, offset 300 (direct) */ 
	0x000b0130, /* Controller 11, offset 304 (direct) */ 
	0x000b0134, /* Controller 11, offset 308 (direct) */ 
	0x000b0138, /* Controller 11, offset 312 (direct) */ 
	0x000b013c, /* Controller 11, offset 316 (direct) */ 
	0x000b0140, /* Controller 11, offset 320 (direct) */ 
	0x000b0144, /* Controller 11, offset 324 (direct) */ 
	0x000b0148, /* Controller 11, offset 328 (direct) */ 
	0x000b014c, /* Controller 11, offset 332 (direct) */ 
	0x000b0150, /* Controller 11, offset 336 (direct) */ 
	0x000b0154, /* Controller 11, offset 340 (direct) */ 
	0x000b0158, /* Controller 11, offset 344 (direct) */ 
	0x000b015c, /* Controller 11, offset 348 (direct) */ 
	0x000b0160, /* Controller 11, offset 352 (direct) */ 
	0x000b0164, /* Controller 11, offset 356 (direct) */ 
	0x000b0168, /* Controller 11, offset 360 (direct) */ 
	0x000b016c, /* Controller 11, offset 364 (direct) */ 
	0x000b0170, /* Controller 11, offset 368 (direct) */ 
	0x000b0174, /* Controller 11, offset 372 (direct) */ 
	0x000b0178, /* Controller 11, offset 376 (direct) */ 
	0x000b017c, /* Controller 11, offset 380 (direct) */ 
	0x000b0180, /* Controller 11, offset 384 (direct) */ 
	0x000b0184, /* Controller 11, offset 388 (direct) */ 
	0x000b0188, /* Controller 11, offset 392 (direct) */ 
	0x000b018c, /* Controller 11, offset 396 (direct) */ 
	0x000b0190, /* Controller 11, offset 400 (direct) */ 
	0x000b0194, /* Controller 11, offset 404 (direct) */ 
	0x000b0198, /* Controller 11, offset 408 (direct) */ 
	0x000b019c, /* Controller 11, offset 412 (direct) */ 
	0x000b01a0, /* Controller 11, offset 416 (direct) */ 
	0x000b01a4, /* Controller 11, offset 420 (direct) */ 
	0x000b01a8, /* Controller 11, offset 424 (direct) */ 
	0x000b01ac, /* Controller 11, offset 428 (direct) */ 
	0x000b01b0, /* Controller 11, offset 432 (direct) */ 
	0x000b01b4, /* Controller 11, offset 436 (direct) */ 
	0x000b01b8, /* Controller 11, offset 440 (direct) */ 
	0x000b01bc, /* Controller 11, offset 444 (direct) */ 
	0x000b01c0, /* Controller 11, offset 448 (direct) */ 
	0x000b01c4, /* Controller 11, offset 452 (direct) */ 
	0x000b01c8, /* Controller 11, offset 456 (direct) */ 
	0x000b01cc, /* Controller 11, offset 460 (direct) */ 
	0x000b01d0, /* Controller 11, offset 464 (direct) */ 
	0x000b01d4, /* Controller 11, offset 468 (direct) */ 
	0x000b01d8, /* Controller 11, offset 472 (direct) */ 
	0x000b01dc, /* Controller 11, offset 476 (direct) */ 
	0x000b01e0, /* Controller 11, offset 480 (direct) */ 
	0x000b01e4, /* Controller 11, offset 484 (direct) */ 
	0x000b01e8, /* Controller 11, offset 488 (direct) */ 
	0x000b01ec, /* Controller 11, offset 492 (direct) */ 
	0x000b01f0, /* Controller 11, offset 496 (direct) */ 
	0x000b01f4, /* Controller 11, offset 500 (direct) */ 
	0x000b01f8, /* Controller 11, offset 504 (direct) */ 
	0x000b01fc, /* Controller 11, offset 508 (direct) */ 
	0x000b0200, /* Controller 11, offset 512 (direct) */ 
	0x000b0204, /* Controller 11, offset 516 (direct) */ 
	0x000b0208, /* Controller 11, offset 520 (direct) */ 
	0x000b020c, /* Controller 11, offset 524 (direct) */ 
	0x000b0210, /* Controller 11, offset 528 (direct) */ 
	0x000b0214, /* Controller 11, offset 532 (direct) */ 
	0x000b0218, /* Controller 11, offset 536 (direct) */ 
	0x000b021c, /* Controller 11, offset 540 (direct) */ 
	0x000b0220, /* Controller 11, offset 544 (direct) */ 
	0x000b0224, /* Controller 11, offset 548 (direct) */ 
	0x000b0228, /* Controller 11, offset 552 (direct) */ 
	0x000b022c, /* Controller 11, offset 556 (direct) */ 
	0x000b0230, /* Controller 11, offset 560 (direct) */ 
	0x000b0234, /* Controller 11, offset 564 (direct) */ 
	0x000b0238, /* Controller 11, offset 568 (direct) */ 
	0x000b023c, /* Controller 11, offset 572 (direct) */ 
	0x000b0240, /* Controller 11, offset 576 (direct) */ 
	0x000b0244, /* Controller 11, offset 580 (direct) */ 
	0x000b0248, /* Controller 11, offset 584 (direct) */ 
	0x000b024c, /* Controller 11, offset 588 (direct) */ 
	0x000b0250, /* Controller 11, offset 592 (direct) */ 
	0x000b0254, /* Controller 11, offset 596 (direct) */ 
	0x000b0258, /* Controller 11, offset 600 (direct) */ 
	0x000b025c, /* Controller 11, offset 604 (direct) */ 
	0x000b0260, /* Controller 11, offset 608 (direct) */ 
	0x000b0264, /* Controller 11, offset 612 (direct) */ 
	0x000b0268, /* Controller 11, offset 616 (direct) */ 
	0x000b026c, /* Controller 11, offset 620 (direct) */ 
	0x000b0270, /* Controller 11, offset 624 (direct) */ 
	0x000b0274, /* Controller 11, offset 628 (direct) */ 
	0x000b0278, /* Controller 11, offset 632 (direct) */ 
	0x000b027c, /* Controller 11, offset 636 (direct) */ 
	0x000b0280, /* Controller 11, offset 640 (direct) */ 
	0x000b0284, /* Controller 11, offset 644 (direct) */ 
	0x000b0288, /* Controller 11, offset 648 (direct) */ 
	0x000b028c, /* Controller 11, offset 652 (direct) */ 
	0x000b0290, /* Controller 11, offset 656 (direct) */ 
	0x000b0294, /* Controller 11, offset 660 (direct) */ 
	0x000b0298, /* Controller 11, offset 664 (direct) */ 
	0x000b029c, /* Controller 11, offset 668 (direct) */ 
	0x000b02a0, /* Controller 11, offset 672 (direct) */ 
	0x000b02a4, /* Controller 11, offset 676 (direct) */ 
	0x000b02a8, /* Controller 11, offset 680 (direct) */ 
	0x000b02ac, /* Controller 11, offset 684 (direct) */ 
	0x000b02b0, /* Controller 11, offset 688 (direct) */ 
	0x000b02b4, /* Controller 11, offset 692 (direct) */ 
	0x000b02b8, /* Controller 11, offset 696 (direct) */ 
	0x000b02bc, /* Controller 11, offset 700 (direct) */ 
	0x000b02c0, /* Controller 11, offset 704 (direct) */ 
	0x000b02c4, /* Controller 11, offset 708 (direct) */ 
	0x000b02c8, /* Controller 11, offset 712 (direct) */ 
	0x000b02cc, /* Controller 11, offset 716 (direct) */ 
	0x000b02d0, /* Controller 11, offset 720 (direct) */ 
	0x000b02d4, /* Controller 11, offset 724 (direct) */ 
	0x000b02d8, /* Controller 11, offset 728 (direct) */ 
	0x000b02dc, /* Controller 11, offset 732 (direct) */ 
	0x000b02e0, /* Controller 11, offset 736 (direct) */ 
	0x000b02e4, /* Controller 11, offset 740 (direct) */ 
	0x000b02e8, /* Controller 11, offset 744 (direct) */ 
	0x000b02ec, /* Controller 11, offset 748 (direct) */ 
	0x000b02f0, /* Controller 11, offset 752 (direct) */ 
	0x000b02f4, /* Controller 11, offset 756 (direct) */ 
	0x000b02f8, /* Controller 11, offset 760 (direct) */ 
	0x000b02fc, /* Controller 11, offset 764 (direct) */ 
	0x000b0300, /* Controller 11, offset 768 (direct) */ 
	0x000b0304, /* Controller 11, offset 772 (direct) */ 
	0x000b0308, /* Controller 11, offset 776 (direct) */ 
	0x000b030c, /* Controller 11, offset 780 (direct) */ 
	0x000b0310, /* Controller 11, offset 784 (direct) */ 
	0x000b0314, /* Controller 11, offset 788 (direct) */ 
	0x000b0318, /* Controller 11, offset 792 (direct) */ 
	0x000b031c, /* Controller 11, offset 796 (direct) */ 
	0x000b0320, /* Controller 11, offset 800 (direct) */ 
	0x000b0324, /* Controller 11, offset 804 (direct) */ 
	0x000b0328, /* Controller 11, offset 808 (direct) */ 
	0x000b032c, /* Controller 11, offset 812 (direct) */ 
	0x000b0330, /* Controller 11, offset 816 (direct) */ 
	0x000b0334, /* Controller 11, offset 820 (direct) */ 
	0x000b0338, /* Controller 11, offset 824 (direct) */ 
	0x000b033c, /* Controller 11, offset 828 (direct) */ 
	0x000b0340, /* Controller 11, offset 832 (direct) */ 
	0x000b0344, /* Controller 11, offset 836 (direct) */ 
	0x000b0348, /* Controller 11, offset 840 (direct) */ 
	0x000b034c, /* Controller 11, offset 844 (direct) */ 
	0x000b0350, /* Controller 11, offset 848 (direct) */ 
	0x000b0354, /* Controller 11, offset 852 (direct) */ 
	0x000b0358, /* Controller 11, offset 856 (direct) */ 
	0x000b035c, /* Controller 11, offset 860 (direct) */ 
	0x000b0360, /* Controller 11, offset 864 (direct) */ 
	0x000b0364, /* Controller 11, offset 868 (direct) */ 
	0x000b0368, /* Controller 11, offset 872 (direct) */ 
	0x000b036c, /* Controller 11, offset 876 (direct) */ 
	0x000b0370, /* Controller 11, offset 880 (direct) */ 
	0x000b0374, /* Controller 11, offset 884 (direct) */ 
	0x000b0378, /* Controller 11, offset 888 (direct) */ 
	0x000b037c, /* Controller 11, offset 892 (direct) */ 
	0x000b0380, /* Controller 11, offset 896 (direct) */ 
	0x000b0384, /* Controller 11, offset 900 (direct) */ 
	0x000b0388, /* Controller 11, offset 904 (direct) */ 
	0x000b038c, /* Controller 11, offset 908 (direct) */ 
	0x000b0390, /* Controller 11, offset 912 (direct) */ 
	0x000b0394, /* Controller 11, offset 916 (direct) */ 
	0x000b0398, /* Controller 11, offset 920 (direct) */ 
	0x000b039c, /* Controller 11, offset 924 (direct) */ 
	0x000b03a0, /* Controller 11, offset 928 (direct) */ 
	0x000b03a4, /* Controller 11, offset 932 (direct) */ 
	0x000b03a8, /* Controller 11, offset 936 (direct) */ 
	0x000b03ac, /* Controller 11, offset 940 (direct) */ 
	0x000b03b0, /* Controller 11, offset 944 (direct) */ 
	0x000b03b4, /* Controller 11, offset 948 (direct) */ 
	0x000b03b8, /* Controller 11, offset 952 (direct) */ 
	0x000b03bc, /* Controller 11, offset 956 (direct) */ 
	0x000b03c0, /* Controller 11, offset 960 (direct) */ 
	0x000b03c4, /* Controller 11, offset 964 (direct) */ 
	0x000b03c8, /* Controller 11, offset 968 (direct) */ 
	0x000b03cc, /* Controller 11, offset 972 (direct) */ 
	0x000b03d0, /* Controller 11, offset 976 (direct) */ 
	0x000b03d4, /* Controller 11, offset 980 (direct) */ 
	0x000b03d8, /* Controller 11, offset 984 (direct) */ 
	0x000b03dc, /* Controller 11, offset 988 (direct) */ 
	0x000b03e0, /* Controller 11, offset 992 (direct) */ 
	0x000b03e4, /* Controller 11, offset 996 (direct) */ 
	0x000b03e8, /* Controller 11, offset 1000 (direct) */ 
	0x000b03ec, /* Controller 11, offset 1004 (direct) */ 
	0x000b03f0, /* Controller 11, offset 1008 (direct) */ 
	0x000b03f4, /* Controller 11, offset 1012 (direct) */ 
	0x000b03f8, /* Controller 11, offset 1016 (direct) */ 
	0x000b03fc, /* Controller 11, offset 1020 (direct) */ 
	0x000b0400, /* Controller 11, offset 1024 (direct) */ 
	0x000b0404, /* Controller 11, offset 1028 (direct) */ 
	0x000b0408, /* Controller 11, offset 1032 (direct) */ 
	0x000b040c, /* Controller 11, offset 1036 (direct) */ 
	0x000b0410, /* Controller 11, offset 1040 (direct) */ 
	0x000b0414, /* Controller 11, offset 1044 (direct) */ 
	0x000b0418, /* Controller 11, offset 1048 (direct) */ 
	0x000b041c, /* Controller 11, offset 1052 (direct) */ 
	0x000b0420, /* Controller 11, offset 1056 (direct) */ 
	0x000b0424, /* Controller 11, offset 1060 (direct) */ 
	0x000b0428, /* Controller 11, offset 1064 (direct) */ 
	0x000b042c, /* Controller 11, offset 1068 (direct) */ 
	0x000b0430, /* Controller 11, offset 1072 (direct) */ 
	0x000b0434, /* Controller 11, offset 1076 (direct) */ 
	0x000b0438, /* Controller 11, offset 1080 (direct) */ 
	0x000b043c, /* Controller 11, offset 1084 (direct) */ 
	0x000b0440, /* Controller 11, offset 1088 (direct) */ 
	0x000b0444, /* Controller 11, offset 1092 (direct) */ 
	0x000b0448, /* Controller 11, offset 1096 (direct) */ 
	0x000b044c, /* Controller 11, offset 1100 (direct) */ 
	0x000b0450, /* Controller 11, offset 1104 (direct) */ 
	0x000b0454, /* Controller 11, offset 1108 (direct) */ 
	0x000b0458, /* Controller 11, offset 1112 (direct) */ 
	0x000b045c, /* Controller 11, offset 1116 (direct) */ 
	0x000b0460, /* Controller 11, offset 1120 (direct) */ 
	0x000b0464, /* Controller 11, offset 1124 (direct) */ 
	0x000b0468, /* Controller 11, offset 1128 (direct) */ 
	0x000b046c, /* Controller 11, offset 1132 (direct) */ 
	0x000b0470, /* Controller 11, offset 1136 (direct) */ 
	0x000b0474, /* Controller 11, offset 1140 (direct) */ 
	0x000b0478, /* Controller 11, offset 1144 (direct) */ 
	0x000b047c, /* Controller 11, offset 1148 (direct) */ 
	0x000b0480, /* Controller 11, offset 1152 (direct) */ 
	0x000b0484, /* Controller 11, offset 1156 (direct) */ 
	0x000b0488, /* Controller 11, offset 1160 (direct) */ 
	0x000b048c, /* Controller 11, offset 1164 (direct) */ 
	0x000b0490, /* Controller 11, offset 1168 (direct) */ 
	0x000b0494, /* Controller 11, offset 1172 (direct) */ 
	0x000b0498, /* Controller 11, offset 1176 (direct) */ 
	0x000b049c, /* Controller 11, offset 1180 (direct) */ 
	0x000b04a0, /* Controller 11, offset 1184 (direct) */ 
	0x000b04a4, /* Controller 11, offset 1188 (direct) */ 
	0x000b04a8, /* Controller 11, offset 1192 (direct) */ 
	0x000b04ac, /* Controller 11, offset 1196 (direct) */ 
	0x000b04b0, /* Controller 11, offset 1200 (direct) */ 
	0x000b04b4, /* Controller 11, offset 1204 (direct) */ 
	0x000b04b8, /* Controller 11, offset 1208 (direct) */ 
	0x000b04bc, /* Controller 11, offset 1212 (direct) */ 
	0x000b04c0, /* Controller 11, offset 1216 (direct) */ 
	0x000b04c4, /* Controller 11, offset 1220 (direct) */ 
	0x000b04c8, /* Controller 11, offset 1224 (direct) */ 
	0x000b04cc, /* Controller 11, offset 1228 (direct) */ 
	0x000b04d0, /* Controller 11, offset 1232 (direct) */ 
	0x000b04d4, /* Controller 11, offset 1236 (direct) */ 
	0x000b04d8, /* Controller 11, offset 1240 (direct) */ 
	0x000b04dc, /* Controller 11, offset 1244 (direct) */ 
	0x000b04e0, /* Controller 11, offset 1248 (direct) */ 
	0x000b04e4, /* Controller 11, offset 1252 (direct) */ 
	0x000b04e8, /* Controller 11, offset 1256 (direct) */ 
	0x000b04ec, /* Controller 11, offset 1260 (direct) */ 
	0x000b04f0, /* Controller 11, offset 1264 (direct) */ 
	0x000b04f4, /* Controller 11, offset 1268 (direct) */ 
	0x000b04f8, /* Controller 11, offset 1272 (direct) */ 
	0x000b04fc, /* Controller 11, offset 1276 (direct) */ 
	0x000b0500, /* Controller 11, offset 1280 (direct) */ 
	0x000b0504, /* Controller 11, offset 1284 (direct) */ 
	0x000b0508, /* Controller 11, offset 1288 (direct) */ 
	0x000b050c, /* Controller 11, offset 1292 (direct) */ 
	0x000b0510, /* Controller 11, offset 1296 (direct) */ 
	0x000b0514, /* Controller 11, offset 1300 (direct) */ 
	0x000b0518, /* Controller 11, offset 1304 (direct) */ 
	0x000b051c, /* Controller 11, offset 1308 (direct) */ 
	0x000b0520, /* Controller 11, offset 1312 (direct) */ 
	0x000b0524, /* Controller 11, offset 1316 (direct) */ 
	0x000b0528, /* Controller 11, offset 1320 (direct) */ 
	0x000b052c, /* Controller 11, offset 1324 (direct) */ 
	0x000b0530, /* Controller 11, offset 1328 (direct) */ 
	0x000b0534, /* Controller 11, offset 1332 (direct) */ 
	0x000b0538, /* Controller 11, offset 1336 (direct) */ 
	0x000b053c, /* Controller 11, offset 1340 (direct) */ 
	0x000b0540, /* Controller 11, offset 1344 (direct) */ 
	0x000b0544, /* Controller 11, offset 1348 (direct) */ 
	0x000b0548, /* Controller 11, offset 1352 (direct) */ 
	0x000b054c, /* Controller 11, offset 1356 (direct) */ 
	0x000b0550, /* Controller 11, offset 1360 (direct) */ 
	0x000b0554, /* Controller 11, offset 1364 (direct) */ 
	0x000b0558, /* Controller 11, offset 1368 (direct) */ 
	0x000b055c, /* Controller 11, offset 1372 (direct) */ 
	0x000b0560, /* Controller 11, offset 1376 (direct) */ 
	0x000b0564, /* Controller 11, offset 1380 (direct) */ 
	0x000b0568, /* Controller 11, offset 1384 (direct) */ 
	0x000b056c, /* Controller 11, offset 1388 (direct) */ 
	0x000b0570, /* Controller 11, offset 1392 (direct) */ 
	0x000b0574, /* Controller 11, offset 1396 (direct) */ 
	0x000b0578, /* Controller 11, offset 1400 (direct) */ 
	0x000b057c, /* Controller 11, offset 1404 (direct) */ 
	0x000b0580, /* Controller 11, offset 1408 (direct) */ 
	0x000b0584, /* Controller 11, offset 1412 (direct) */ 
	0x000b0588, /* Controller 11, offset 1416 (direct) */ 
	0x000b058c, /* Controller 11, offset 1420 (direct) */ 
	0x000b0590, /* Controller 11, offset 1424 (direct) */ 
	0x000b0594, /* Controller 11, offset 1428 (direct) */ 
	0x000b0598, /* Controller 11, offset 1432 (direct) */ 
	0x000b059c, /* Controller 11, offset 1436 (direct) */ 
	0x000b05a0, /* Controller 11, offset 1440 (direct) */ 
	0x000b05a4, /* Controller 11, offset 1444 (direct) */ 
	0x000b05a8, /* Controller 11, offset 1448 (direct) */ 
	0x000b05ac, /* Controller 11, offset 1452 (direct) */ 
	0x000b05b0, /* Controller 11, offset 1456 (direct) */ 
	0x000b05b4, /* Controller 11, offset 1460 (direct) */ 
	0x000b05b8, /* Controller 11, offset 1464 (direct) */ 
	0x000b05bc, /* Controller 11, offset 1468 (direct) */ 
	0x000b05c0, /* Controller 11, offset 1472 (direct) */ 
	0x000b05c4, /* Controller 11, offset 1476 (direct) */ 
	0x000b05c8, /* Controller 11, offset 1480 (direct) */ 
	0x000b05cc, /* Controller 11, offset 1484 (direct) */ 
	0x000b05d0, /* Controller 11, offset 1488 (direct) */ 
	0x000b05d4, /* Controller 11, offset 1492 (direct) */ 
	0x000b05d8, /* Controller 11, offset 1496 (direct) */ 
	0x000b05dc, /* Controller 11, offset 1500 (direct) */ 
	0x000b05e0, /* Controller 11, offset 1504 (direct) */ 
	0x000b05e4, /* Controller 11, offset 1508 (direct) */ 
	0x000b05e8, /* Controller 11, offset 1512 (direct) */ 
	0x000b05ec, /* Controller 11, offset 1516 (direct) */ 
	0x000b05f0, /* Controller 11, offset 1520 (direct) */ 
	0x000b05f4, /* Controller 11, offset 1524 (direct) */ 
	0x000b05f8, /* Controller 11, offset 1528 (direct) */ 
	0x000b05fc, /* Controller 11, offset 1532 (direct) */ 
	0x000b0600, /* Controller 11, offset 1536 (direct) */ 
	0x000b0604, /* Controller 11, offset 1540 (direct) */ 
	0x000b0608, /* Controller 11, offset 1544 (direct) */ 
	0x000b060c, /* Controller 11, offset 1548 (direct) */ 
	0x000b0610, /* Controller 11, offset 1552 (direct) */ 
	0x000b0614, /* Controller 11, offset 1556 (direct) */ 
	0x000b0618, /* Controller 11, offset 1560 (direct) */ 
	0x000b061c, /* Controller 11, offset 1564 (direct) */ 
	0x000b0620, /* Controller 11, offset 1568 (direct) */ 
	0x000b0624, /* Controller 11, offset 1572 (direct) */ 
	0x000b0628, /* Controller 11, offset 1576 (direct) */ 
	0x000b062c, /* Controller 11, offset 1580 (direct) */ 
	0x000b0630, /* Controller 11, offset 1584 (direct) */ 
	0x000b0634, /* Controller 11, offset 1588 (direct) */ 
	0x000b0638, /* Controller 11, offset 1592 (direct) */ 
	0x000b063c, /* Controller 11, offset 1596 (direct) */ 
	0x000b0640, /* Controller 11, offset 1600 (direct) */ 
	0x000b0644, /* Controller 11, offset 1604 (direct) */ 
	0x000b0648, /* Controller 11, offset 1608 (direct) */ 
	0x000b064c, /* Controller 11, offset 1612 (direct) */ 
	0x000b0650, /* Controller 11, offset 1616 (direct) */ 
	0x000b0654, /* Controller 11, offset 1620 (direct) */ 
	0x000b0658, /* Controller 11, offset 1624 (direct) */ 
	0x000b065c, /* Controller 11, offset 1628 (direct) */ 
	0x000b0660, /* Controller 11, offset 1632 (direct) */ 
	0x000b0664, /* Controller 11, offset 1636 (direct) */ 
	0x000b0668, /* Controller 11, offset 1640 (direct) */ 
	0x000b066c, /* Controller 11, offset 1644 (direct) */ 
	0x000b0670, /* Controller 11, offset 1648 (direct) */ 
	0x000b0674, /* Controller 11, offset 1652 (direct) */ 
	0x000b0678, /* Controller 11, offset 1656 (direct) */ 
	0x000b067c, /* Controller 11, offset 1660 (direct) */ 
	0x000b0680, /* Controller 11, offset 1664 (direct) */ 
	0x000b0684, /* Controller 11, offset 1668 (direct) */ 
	0x000b0688, /* Controller 11, offset 1672 (direct) */ 
	0x000b068c, /* Controller 11, offset 1676 (direct) */ 
	0x000b0690, /* Controller 11, offset 1680 (direct) */ 
	0x000b0694, /* Controller 11, offset 1684 (direct) */ 
	0x000b0698, /* Controller 11, offset 1688 (direct) */ 
	0x000b069c, /* Controller 11, offset 1692 (direct) */ 
	0x000b06a0, /* Controller 11, offset 1696 (direct) */ 
	0x000b06a4, /* Controller 11, offset 1700 (direct) */ 
	0x000b06a8, /* Controller 11, offset 1704 (direct) */ 
	0x000b06ac, /* Controller 11, offset 1708 (direct) */ 
	0x000b06b0, /* Controller 11, offset 1712 (direct) */ 
	0x000b06b4, /* Controller 11, offset 1716 (direct) */ 
	0x000b06b8, /* Controller 11, offset 1720 (direct) */ 
	0x000b06bc, /* Controller 11, offset 1724 (direct) */ 
	0x000b06c0, /* Controller 11, offset 1728 (direct) */ 
	0x000b06c4, /* Controller 11, offset 1732 (direct) */ 
	0x000b06c8, /* Controller 11, offset 1736 (direct) */ 
	0x000b06cc, /* Controller 11, offset 1740 (direct) */ 
	0x000b06d0, /* Controller 11, offset 1744 (direct) */ 
	0x000b06d4, /* Controller 11, offset 1748 (direct) */ 
	0x000b06d8, /* Controller 11, offset 1752 (direct) */ 
	0x000b06dc, /* Controller 11, offset 1756 (direct) */ 
	0x000b06e0, /* Controller 11, offset 1760 (direct) */ 
	0x000b06e4, /* Controller 11, offset 1764 (direct) */ 
	0x000b06e8, /* Controller 11, offset 1768 (direct) */ 
	0x000b06ec, /* Controller 11, offset 1772 (direct) */ 
	0x000b06f0, /* Controller 11, offset 1776 (direct) */ 
	0x000b06f4, /* Controller 11, offset 1780 (direct) */ 
	0x000b06f8, /* Controller 11, offset 1784 (direct) */ 
	0x000b06fc, /* Controller 11, offset 1788 (direct) */ 
	0x000b0700, /* Controller 11, offset 1792 (direct) */ 
	0x000b0704, /* Controller 11, offset 1796 (direct) */ 
	0x000b0708, /* Controller 11, offset 1800 (direct) */ 
	0x000b070c, /* Controller 11, offset 1804 (direct) */ 
	0x000b0710, /* Controller 11, offset 1808 (direct) */ 
	0x000b0714, /* Controller 11, offset 1812 (direct) */ 
	0x000b0718, /* Controller 11, offset 1816 (direct) */ 
	0x000b071c, /* Controller 11, offset 1820 (direct) */ 
	0x000b0720, /* Controller 11, offset 1824 (direct) */ 
	0x000b0724, /* Controller 11, offset 1828 (direct) */ 
	0x000b0728, /* Controller 11, offset 1832 (direct) */ 
	0x000b072c, /* Controller 11, offset 1836 (direct) */ 
	0x000b0730, /* Controller 11, offset 1840 (direct) */ 
	0x000b0734, /* Controller 11, offset 1844 (direct) */ 
	0x000b0738, /* Controller 11, offset 1848 (direct) */ 
	0x000b073c, /* Controller 11, offset 1852 (direct) */ 
	0x000b0740, /* Controller 11, offset 1856 (direct) */ 
	0x000b0744, /* Controller 11, offset 1860 (direct) */ 
	0x000b0748, /* Controller 11, offset 1864 (direct) */ 
	0x000b074c, /* Controller 11, offset 1868 (direct) */ 
	0x000b0750, /* Controller 11, offset 1872 (direct) */ 
	0x000b0754, /* Controller 11, offset 1876 (direct) */ 
	0x000b0758, /* Controller 11, offset 1880 (direct) */ 
	0x000b075c, /* Controller 11, offset 1884 (direct) */ 
	0x000b0760, /* Controller 11, offset 1888 (direct) */ 
	0x000b0764, /* Controller 11, offset 1892 (direct) */ 
	0x000b0768, /* Controller 11, offset 1896 (direct) */ 
	0x000b076c, /* Controller 11, offset 1900 (direct) */ 
	0x000b0770, /* Controller 11, offset 1904 (direct) */ 
	0x000b0774, /* Controller 11, offset 1908 (direct) */ 
	0x000b0778, /* Controller 11, offset 1912 (direct) */ 
	0x000b077c, /* Controller 11, offset 1916 (direct) */ 
	0x000b0780, /* Controller 11, offset 1920 (direct) */ 
	0x000b0784, /* Controller 11, offset 1924 (direct) */ 
	0x000b0788, /* Controller 11, offset 1928 (direct) */ 
	0x000b078c, /* Controller 11, offset 1932 (direct) */ 
	0x000b0790, /* Controller 11, offset 1936 (direct) */ 
	0x000b0794, /* Controller 11, offset 1940 (direct) */ 
	0x000b0798, /* Controller 11, offset 1944 (direct) */ 
	0x000b079c, /* Controller 11, offset 1948 (direct) */ 
	0x000b07a0, /* Controller 11, offset 1952 (direct) */ 
	0x000b07a4, /* Controller 11, offset 1956 (direct) */ 
	0x000b07a8, /* Controller 11, offset 1960 (direct) */ 
	0x000b07ac, /* Controller 11, offset 1964 (direct) */ 
	0x000b07b0, /* Controller 11, offset 1968 (direct) */ 
	0x000b07b4, /* Controller 11, offset 1972 (direct) */ 
	0x000b07b8, /* Controller 11, offset 1976 (direct) */ 
	0x000b07bc, /* Controller 11, offset 1980 (direct) */ 
	0x000b07c0, /* Controller 11, offset 1984 (direct) */ 
	0x000b07c4, /* Controller 11, offset 1988 (direct) */ 
	0x000b07c8, /* Controller 11, offset 1992 (direct) */ 
	0x000b07cc, /* Controller 11, offset 1996 (direct) */ 
	0x000b07d0, /* Controller 11, offset 2000 (direct) */ 
	0x000b07d4, /* Controller 11, offset 2004 (direct) */ 
	0x000b07d8, /* Controller 11, offset 2008 (direct) */ 
	0x000b07dc, /* Controller 11, offset 2012 (direct) */ 
	0x000b07e0, /* Controller 11, offset 2016 (direct) */ 
	0x000b07e4, /* Controller 11, offset 2020 (direct) */ 
	0x000b07e8, /* Controller 11, offset 2024 (direct) */ 
	0x000b07ec, /* Controller 11, offset 2028 (direct) */ 
	0x000b07f0, /* Controller 11, offset 2032 (direct) */ 
	0x000b07f4, /* Controller 11, offset 2036 (direct) */ 
	0x000b07f8, /* Controller 11, offset 2040 (direct) */ 
	0x000b07fc, /* Controller 11, offset 2044 (direct) */ 
	0x000b0800, /* Controller 11, offset 2048 (direct) */ 
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00070000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00080000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x00090000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000a0000,
	0x000b0000,
	0x000b0000,
	0x000b0000,
	0x000b0000,
	0x000b0000,
	0x000b0000,
	0x000b0000,
	0x000b0000
};
