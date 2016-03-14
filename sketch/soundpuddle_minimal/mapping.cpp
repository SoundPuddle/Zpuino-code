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
	0x00000000, /* Controller 0, led 33, offset 0 */
	0x00010000, /* Controller 1, led 33, offset 0 */
	0x00020000, /* Controller 2, led 33, offset 0 */
	0x00030000, /* Controller 3, led 33, offset 0 */
	0x00040000, /* Controller 4, led 33, offset 0 */
	0x00050000, /* Controller 5, led 33, offset 0 */
	0x00060000, /* Controller 6, led 33, offset 0 */
	0x00070000, /* Controller 7, led 33, offset 0 */
	0x00080000, /* Controller 8, led 33, offset 0 */
	0x00090000, /* Controller 9, led 33, offset 0 */
	0x000a0000, /* Controller 10, led 33, offset 0 */
	0x000b0000, /* Controller 11, led 33, offset 0 */
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
