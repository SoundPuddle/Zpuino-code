unsigned int ledmapping[] = { 
	0x00000004, /* Controller 0, led 0, offset 4 */
	0x00010010, /* Controller 1, led 0, offset 16 */
	0x0002001c, /* Controller 2, led 0, offset 28 */
	0x00030028, /* Controller 3, led 0, offset 40 */
	0x00040034, /* Controller 4, led 0, offset 52 */
	0x00050040, /* Controller 5, led 0, offset 64 */
	0x0006004c, /* Controller 6, led 0, offset 76 */
	0x00070058, /* Controller 7, led 0, offset 88 */
	0x00080064, /* Controller 8, led 0, offset 100 */
	0x00090070, /* Controller 9, led 0, offset 112 */
	0x000a007c, /* Controller 10, led 0, offset 124 */
	0x000b0088, /* Controller 11, led 0, offset 136 */
	0x00000094, /* Controller 0, led 1, offset 148 */
	0x000100a0, /* Controller 1, led 1, offset 160 */
	0x000200ac, /* Controller 2, led 1, offset 172 */
	0x000300b8, /* Controller 3, led 1, offset 184 */
	0x000400c4, /* Controller 4, led 1, offset 196 */
	0x000500d0, /* Controller 5, led 1, offset 208 */
	0x000600dc, /* Controller 6, led 1, offset 220 */
	0x000700e8, /* Controller 7, led 1, offset 232 */
	0x000800f4, /* Controller 8, led 1, offset 244 */
	0x00090100, /* Controller 9, led 1, offset 256 */
	0x000a010c, /* Controller 10, led 1, offset 268 */
	0x000b0118, /* Controller 11, led 1, offset 280 */
	0x00000124, /* Controller 0, led 2, offset 292 */
	0x00010130, /* Controller 1, led 2, offset 304 */
	0x0002013c, /* Controller 2, led 2, offset 316 */
	0x00030148, /* Controller 3, led 2, offset 328 */
	0x00040154, /* Controller 4, led 2, offset 340 */
	0x00050160, /* Controller 5, led 2, offset 352 */
	0x0006016c, /* Controller 6, led 2, offset 364 */
	0x00070178, /* Controller 7, led 2, offset 376 */
	0x00080184, /* Controller 8, led 2, offset 388 */
	0x00090190, /* Controller 9, led 2, offset 400 */
	0x000a019c, /* Controller 10, led 2, offset 412 */
	0x000b01a8, /* Controller 11, led 2, offset 424 */
	0x000001b4, /* Controller 0, led 3, offset 436 */
	0x000101c0, /* Controller 1, led 3, offset 448 */
	0x000201cc, /* Controller 2, led 3, offset 460 */
	0x000301d8, /* Controller 3, led 3, offset 472 */
	0x000401e4, /* Controller 4, led 3, offset 484 */
	0x000501f0, /* Controller 5, led 3, offset 496 */
	0x000601fc, /* Controller 6, led 3, offset 508 */
	0x00070208, /* Controller 7, led 3, offset 520 */
	0x00080214, /* Controller 8, led 3, offset 532 */
	0x00090220, /* Controller 9, led 3, offset 544 */
	0x000a022c, /* Controller 10, led 3, offset 556 */
	0x000b0238, /* Controller 11, led 3, offset 568 */
	0x00000244, /* Controller 0, led 4, offset 580 */
	0x00010250, /* Controller 1, led 4, offset 592 */
	0x0002025c, /* Controller 2, led 4, offset 604 */
	0x00030268, /* Controller 3, led 4, offset 616 */
	0x00040274, /* Controller 4, led 4, offset 628 */
	0x00050280, /* Controller 5, led 4, offset 640 */
	0x0006028c, /* Controller 6, led 4, offset 652 */
	0x00070298, /* Controller 7, led 4, offset 664 */
	0x000802a4, /* Controller 8, led 4, offset 676 */
	0x000902b0, /* Controller 9, led 4, offset 688 */
	0x000a02bc, /* Controller 10, led 4, offset 700 */
	0x000b02c8, /* Controller 11, led 4, offset 712 */
	0x000002d4, /* Controller 0, led 5, offset 724 */
	0x000102e0, /* Controller 1, led 5, offset 736 */
	0x000202ec, /* Controller 2, led 5, offset 748 */
	0x000302f8, /* Controller 3, led 5, offset 760 */
	0x00040304, /* Controller 4, led 5, offset 772 */
	0x00050310, /* Controller 5, led 5, offset 784 */
	0x0006031c, /* Controller 6, led 5, offset 796 */
	0x00070328, /* Controller 7, led 5, offset 808 */
	0x00080334, /* Controller 8, led 5, offset 820 */
	0x00090340, /* Controller 9, led 5, offset 832 */
	0x000a034c, /* Controller 10, led 5, offset 844 */
	0x000b0358, /* Controller 11, led 5, offset 856 */
	0x00000364, /* Controller 0, led 6, offset 868 */
	0x00010370, /* Controller 1, led 6, offset 880 */
	0x0002037c, /* Controller 2, led 6, offset 892 */
	0x00030388, /* Controller 3, led 6, offset 904 */
	0x00040394, /* Controller 4, led 6, offset 916 */
	0x000503a0, /* Controller 5, led 6, offset 928 */
	0x000603ac, /* Controller 6, led 6, offset 940 */
	0x000703b8, /* Controller 7, led 6, offset 952 */
	0x000803c4, /* Controller 8, led 6, offset 964 */
	0x000903d0, /* Controller 9, led 6, offset 976 */
	0x000a03dc, /* Controller 10, led 6, offset 988 */
	0x000b03e8, /* Controller 11, led 6, offset 1000 */
	0x000003f4, /* Controller 0, led 7, offset 1012 */
	0x00010400, /* Controller 1, led 7, offset 1024 */
	0x0002040c, /* Controller 2, led 7, offset 1036 */
	0x00030418, /* Controller 3, led 7, offset 1048 */
	0x00040424, /* Controller 4, led 7, offset 1060 */
	0x00050430, /* Controller 5, led 7, offset 1072 */
	0x0006043c, /* Controller 6, led 7, offset 1084 */
	0x00070448, /* Controller 7, led 7, offset 1096 */
	0x00080454, /* Controller 8, led 7, offset 1108 */
	0x00090460, /* Controller 9, led 7, offset 1120 */
	0x000a046c, /* Controller 10, led 7, offset 1132 */
	0x000b0478, /* Controller 11, led 7, offset 1144 */
	0x00000484, /* Controller 0, led 8, offset 1156 */
	0x00010490, /* Controller 1, led 8, offset 1168 */
	0x0002049c, /* Controller 2, led 8, offset 1180 */
	0x000304a8, /* Controller 3, led 8, offset 1192 */
	0x000404b4, /* Controller 4, led 8, offset 1204 */
	0x000504c0, /* Controller 5, led 8, offset 1216 */
	0x000604cc, /* Controller 6, led 8, offset 1228 */
	0x000704d8, /* Controller 7, led 8, offset 1240 */
	0x000804e4, /* Controller 8, led 8, offset 1252 */
	0x000904f0, /* Controller 9, led 8, offset 1264 */
	0x000a04fc, /* Controller 10, led 8, offset 1276 */
	0x000b0508, /* Controller 11, led 8, offset 1288 */
	0x00000514, /* Controller 0, led 9, offset 1300 */
	0x00010520, /* Controller 1, led 9, offset 1312 */
	0x0002052c, /* Controller 2, led 9, offset 1324 */
	0x00030538, /* Controller 3, led 9, offset 1336 */
	0x00040544, /* Controller 4, led 9, offset 1348 */
	0x00050550, /* Controller 5, led 9, offset 1360 */
	0x0006055c, /* Controller 6, led 9, offset 1372 */
	0x00070568, /* Controller 7, led 9, offset 1384 */
	0x00080574, /* Controller 8, led 9, offset 1396 */
	0x00090580, /* Controller 9, led 9, offset 1408 */
	0x000a058c, /* Controller 10, led 9, offset 1420 */
	0x000b0598, /* Controller 11, led 9, offset 1432 */
	0x000005a4, /* Controller 0, led 10, offset 1444 */
	0x000105b0, /* Controller 1, led 10, offset 1456 */
	0x000205bc, /* Controller 2, led 10, offset 1468 */
	0x000305c8, /* Controller 3, led 10, offset 1480 */
	0x000405d4, /* Controller 4, led 10, offset 1492 */
	0x000505e0, /* Controller 5, led 10, offset 1504 */
	0x000605ec, /* Controller 6, led 10, offset 1516 */
	0x000705f8, /* Controller 7, led 10, offset 1528 */
	0x00080604, /* Controller 8, led 10, offset 1540 */
	0x00090610, /* Controller 9, led 10, offset 1552 */
	0x000a061c, /* Controller 10, led 10, offset 1564 */
	0x000b0628, /* Controller 11, led 10, offset 1576 */
	0x00000634, /* Controller 0, led 11, offset 1588 */
	0x00010640, /* Controller 1, led 11, offset 1600 */
	0x0002064c, /* Controller 2, led 11, offset 1612 */
	0x00030658, /* Controller 3, led 11, offset 1624 */
	0x00040664, /* Controller 4, led 11, offset 1636 */
	0x00050670, /* Controller 5, led 11, offset 1648 */
	0x0006067c, /* Controller 6, led 11, offset 1660 */
	0x00070688, /* Controller 7, led 11, offset 1672 */
	0x00080694, /* Controller 8, led 11, offset 1684 */
	0x000906a0, /* Controller 9, led 11, offset 1696 */
	0x000a06ac, /* Controller 10, led 11, offset 1708 */
	0x000b06b8, /* Controller 11, led 11, offset 1720 */
	0x000006c4, /* Controller 0, led 12, offset 1732 */
	0x000106d0, /* Controller 1, led 12, offset 1744 */
	0x000206dc, /* Controller 2, led 12, offset 1756 */
	0x000306e8, /* Controller 3, led 12, offset 1768 */
	0x000406f4, /* Controller 4, led 12, offset 1780 */
	0x00050700, /* Controller 5, led 12, offset 1792 */
	0x0006070c, /* Controller 6, led 12, offset 1804 */
	0x00070718, /* Controller 7, led 12, offset 1816 */
	0x00080724, /* Controller 8, led 12, offset 1828 */
	0x00090730, /* Controller 9, led 12, offset 1840 */
	0x000a073c, /* Controller 10, led 12, offset 1852 */
	0x000b0748, /* Controller 11, led 12, offset 1864 */
	0x00000754, /* Controller 0, led 13, offset 1876 */
	0x00010760, /* Controller 1, led 13, offset 1888 */
	0x0002076c, /* Controller 2, led 13, offset 1900 */
	0x00030778, /* Controller 3, led 13, offset 1912 */
	0x00040784, /* Controller 4, led 13, offset 1924 */
	0x00050790, /* Controller 5, led 13, offset 1936 */
	0x0006079c, /* Controller 6, led 13, offset 1948 */
	0x000707a8, /* Controller 7, led 13, offset 1960 */
	0x000807b4, /* Controller 8, led 13, offset 1972 */
	0x000907c0, /* Controller 9, led 13, offset 1984 */
	0x000a07cc, /* Controller 10, led 13, offset 1996 */
	0x000b07d8, /* Controller 11, led 13, offset 2008 */
	0x000007e4, /* Controller 0, led 14, offset 2020 */
	0x000107f0, /* Controller 1, led 14, offset 2032 */
	0x000207fc, /* Controller 2, led 14, offset 2044 */
	0x00030808, /* Controller 3, led 14, offset 2056 */
	0x00040814, /* Controller 4, led 14, offset 2068 */
	0x00050820, /* Controller 5, led 14, offset 2080 */
	0x0006082c, /* Controller 6, led 14, offset 2092 */
	0x00070838, /* Controller 7, led 14, offset 2104 */
	0x00080844, /* Controller 8, led 14, offset 2116 */
	0x00090850, /* Controller 9, led 14, offset 2128 */
	0x000a085c, /* Controller 10, led 14, offset 2140 */
	0x000b0868, /* Controller 11, led 14, offset 2152 */
	0x00000874, /* Controller 0, led 15, offset 2164 */
	0x00010880, /* Controller 1, led 15, offset 2176 */
	0x0002088c, /* Controller 2, led 15, offset 2188 */
	0x00030898, /* Controller 3, led 15, offset 2200 */
	0x000408a4, /* Controller 4, led 15, offset 2212 */
	0x000508b0, /* Controller 5, led 15, offset 2224 */
	0x000608bc, /* Controller 6, led 15, offset 2236 */
	0x000708c8, /* Controller 7, led 15, offset 2248 */
	0x000808d4, /* Controller 8, led 15, offset 2260 */
	0x000908e0, /* Controller 9, led 15, offset 2272 */
	0x000a08ec, /* Controller 10, led 15, offset 2284 */
	0x000b08f8, /* Controller 11, led 15, offset 2296 */
	0x00000904, /* Controller 0, led 16, offset 2308 */
	0x00010910, /* Controller 1, led 16, offset 2320 */
	0x0002091c, /* Controller 2, led 16, offset 2332 */
	0x00030928, /* Controller 3, led 16, offset 2344 */
	0x00040934, /* Controller 4, led 16, offset 2356 */
	0x00050940, /* Controller 5, led 16, offset 2368 */
	0x0006094c, /* Controller 6, led 16, offset 2380 */
	0x00070958, /* Controller 7, led 16, offset 2392 */
	0x00080964, /* Controller 8, led 16, offset 2404 */
	0x00090970, /* Controller 9, led 16, offset 2416 */
	0x000a097c, /* Controller 10, led 16, offset 2428 */
	0x000b0988, /* Controller 11, led 16, offset 2440 */
	0x00000994, /* Controller 0, led 17, offset 2452 */
	0x000109a0, /* Controller 1, led 17, offset 2464 */
	0x000209ac, /* Controller 2, led 17, offset 2476 */
	0x000309b8, /* Controller 3, led 17, offset 2488 */
	0x000409c4, /* Controller 4, led 17, offset 2500 */
	0x000509d0, /* Controller 5, led 17, offset 2512 */
	0x000609dc, /* Controller 6, led 17, offset 2524 */
	0x000709e8, /* Controller 7, led 17, offset 2536 */
	0x000809f4, /* Controller 8, led 17, offset 2548 */
	0x00090a00, /* Controller 9, led 17, offset 2560 */
	0x000a0a0c, /* Controller 10, led 17, offset 2572 */
	0x000b0a18, /* Controller 11, led 17, offset 2584 */
	0x00000a24, /* Controller 0, led 18, offset 2596 */
	0x00010a30, /* Controller 1, led 18, offset 2608 */
	0x00020a3c, /* Controller 2, led 18, offset 2620 */
	0x00030a48, /* Controller 3, led 18, offset 2632 */
	0x00040a54, /* Controller 4, led 18, offset 2644 */
	0x00050a60, /* Controller 5, led 18, offset 2656 */
	0x00060a6c, /* Controller 6, led 18, offset 2668 */
	0x00070a78, /* Controller 7, led 18, offset 2680 */
	0x00080a84, /* Controller 8, led 18, offset 2692 */
	0x00090a90, /* Controller 9, led 18, offset 2704 */
	0x000a0a9c, /* Controller 10, led 18, offset 2716 */
	0x000b0aa8, /* Controller 11, led 18, offset 2728 */
	0x00000ab4, /* Controller 0, led 19, offset 2740 */
	0x00010ac0, /* Controller 1, led 19, offset 2752 */
	0x00020acc, /* Controller 2, led 19, offset 2764 */
	0x00030ad8, /* Controller 3, led 19, offset 2776 */
	0x00040ae4, /* Controller 4, led 19, offset 2788 */
	0x00050af0, /* Controller 5, led 19, offset 2800 */
	0x00060afc, /* Controller 6, led 19, offset 2812 */
	0x00070b08, /* Controller 7, led 19, offset 2824 */
	0x00080b14, /* Controller 8, led 19, offset 2836 */
	0x00090b20, /* Controller 9, led 19, offset 2848 */
	0x000a0b2c, /* Controller 10, led 19, offset 2860 */
	0x000b0b38, /* Controller 11, led 19, offset 2872 */
	0x00000b44, /* Controller 0, led 20, offset 2884 */
	0x00010b50, /* Controller 1, led 20, offset 2896 */
	0x00020b5c, /* Controller 2, led 20, offset 2908 */
	0x00030b68, /* Controller 3, led 20, offset 2920 */
	0x00040b74, /* Controller 4, led 20, offset 2932 */
	0x00050b80, /* Controller 5, led 20, offset 2944 */
	0x00060b8c, /* Controller 6, led 20, offset 2956 */
	0x00070b98, /* Controller 7, led 20, offset 2968 */
	0x00080ba4, /* Controller 8, led 20, offset 2980 */
	0x00090bb0, /* Controller 9, led 20, offset 2992 */
	0x000a0bbc, /* Controller 10, led 20, offset 3004 */
	0x000b0bc8, /* Controller 11, led 20, offset 3016 */
	0x00000bd4, /* Controller 0, led 21, offset 3028 */
	0x00010be0, /* Controller 1, led 21, offset 3040 */
	0x00020bec, /* Controller 2, led 21, offset 3052 */
	0x00030bf8, /* Controller 3, led 21, offset 3064 */
	0x00040c04, /* Controller 4, led 21, offset 3076 */
	0x00050c10, /* Controller 5, led 21, offset 3088 */
	0x00060c1c, /* Controller 6, led 21, offset 3100 */
	0x00070c28, /* Controller 7, led 21, offset 3112 */
	0x00080c34, /* Controller 8, led 21, offset 3124 */
	0x00090c40, /* Controller 9, led 21, offset 3136 */
	0x000a0c4c, /* Controller 10, led 21, offset 3148 */
	0x000b0c58, /* Controller 11, led 21, offset 3160 */
	0x00000c64, /* Controller 0, led 22, offset 3172 */
	0x00010c70, /* Controller 1, led 22, offset 3184 */
	0x00020c7c, /* Controller 2, led 22, offset 3196 */
	0x00030c88, /* Controller 3, led 22, offset 3208 */
	0x00040c94, /* Controller 4, led 22, offset 3220 */
	0x00050ca0, /* Controller 5, led 22, offset 3232 */
	0x00060cac, /* Controller 6, led 22, offset 3244 */
	0x00070cb8, /* Controller 7, led 22, offset 3256 */
	0x00080cc4, /* Controller 8, led 22, offset 3268 */
	0x00090cd0, /* Controller 9, led 22, offset 3280 */
	0x000a0cdc, /* Controller 10, led 22, offset 3292 */
	0x000b0ce8, /* Controller 11, led 22, offset 3304 */
	0x00000cf4, /* Controller 0, led 23, offset 3316 */
	0x00010d00, /* Controller 1, led 23, offset 3328 */
	0x00020d0c, /* Controller 2, led 23, offset 3340 */
	0x00030d18, /* Controller 3, led 23, offset 3352 */
	0x00040d24, /* Controller 4, led 23, offset 3364 */
	0x00050d30, /* Controller 5, led 23, offset 3376 */
	0x00060d3c, /* Controller 6, led 23, offset 3388 */
	0x00070d48, /* Controller 7, led 23, offset 3400 */
	0x00080d54, /* Controller 8, led 23, offset 3412 */
	0x00090d60, /* Controller 9, led 23, offset 3424 */
	0x000a0d6c, /* Controller 10, led 23, offset 3436 */
	0x000b0d78, /* Controller 11, led 23, offset 3448 */
	0x00000d84, /* Controller 0, led 24, offset 3460 */
	0x00010d90, /* Controller 1, led 24, offset 3472 */
	0x00020d9c, /* Controller 2, led 24, offset 3484 */
	0x00030da8, /* Controller 3, led 24, offset 3496 */
	0x00040db4, /* Controller 4, led 24, offset 3508 */
	0x00050dc0, /* Controller 5, led 24, offset 3520 */
	0x00060dcc, /* Controller 6, led 24, offset 3532 */
	0x00070dd8, /* Controller 7, led 24, offset 3544 */
	0x00080de4, /* Controller 8, led 24, offset 3556 */
	0x00090df0, /* Controller 9, led 24, offset 3568 */
	0x000a0dfc, /* Controller 10, led 24, offset 3580 */
	0x000b0e08, /* Controller 11, led 24, offset 3592 */
	0x00000e14, /* Controller 0, led 25, offset 3604 */
	0x00010e20, /* Controller 1, led 25, offset 3616 */
	0x00020e2c, /* Controller 2, led 25, offset 3628 */
	0x00030e38, /* Controller 3, led 25, offset 3640 */
	0x00040e44, /* Controller 4, led 25, offset 3652 */
	0x00050e50, /* Controller 5, led 25, offset 3664 */
	0x00060e5c, /* Controller 6, led 25, offset 3676 */
	0x00070e68, /* Controller 7, led 25, offset 3688 */
	0x00080e74, /* Controller 8, led 25, offset 3700 */
	0x00090e80, /* Controller 9, led 25, offset 3712 */
	0x000a0e8c, /* Controller 10, led 25, offset 3724 */
	0x000b0e98, /* Controller 11, led 25, offset 3736 */
	0x00000ea4, /* Controller 0, led 26, offset 3748 */
	0x00010eb0, /* Controller 1, led 26, offset 3760 */
	0x00020ebc, /* Controller 2, led 26, offset 3772 */
	0x00030ec8, /* Controller 3, led 26, offset 3784 */
	0x00040ed4, /* Controller 4, led 26, offset 3796 */
	0x00050ee0, /* Controller 5, led 26, offset 3808 */
	0x00060eec, /* Controller 6, led 26, offset 3820 */
	0x00070ef8, /* Controller 7, led 26, offset 3832 */
	0x00080f04, /* Controller 8, led 26, offset 3844 */
	0x00090f10, /* Controller 9, led 26, offset 3856 */
	0x000a0f1c, /* Controller 10, led 26, offset 3868 */
	0x000b0f28, /* Controller 11, led 26, offset 3880 */
	0x00000f34, /* Controller 0, led 27, offset 3892 */
	0x00010f40, /* Controller 1, led 27, offset 3904 */
	0x00020f4c, /* Controller 2, led 27, offset 3916 */
	0x00030f58, /* Controller 3, led 27, offset 3928 */
	0x00040f64, /* Controller 4, led 27, offset 3940 */
	0x00050f70, /* Controller 5, led 27, offset 3952 */
	0x00060f7c, /* Controller 6, led 27, offset 3964 */
	0x00070f88, /* Controller 7, led 27, offset 3976 */
	0x00080f94, /* Controller 8, led 27, offset 3988 */
	0x00090fa0, /* Controller 9, led 27, offset 4000 */
	0x000a0fac, /* Controller 10, led 27, offset 4012 */
	0x000b0fb8, /* Controller 11, led 27, offset 4024 */
	0x00000fc4, /* Controller 0, led 28, offset 4036 */
	0x00010fd0, /* Controller 1, led 28, offset 4048 */
	0x00020fdc, /* Controller 2, led 28, offset 4060 */
	0x00030fe8, /* Controller 3, led 28, offset 4072 */
	0x00040ff4, /* Controller 4, led 28, offset 4084 */
	0x00051000, /* Controller 5, led 28, offset 4096 */
	0x0006100c, /* Controller 6, led 28, offset 4108 */
	0x00071018, /* Controller 7, led 28, offset 4120 */
	0x00081024, /* Controller 8, led 28, offset 4132 */
	0x00091030, /* Controller 9, led 28, offset 4144 */
	0x000a103c, /* Controller 10, led 28, offset 4156 */
	0x000b1048, /* Controller 11, led 28, offset 4168 */
	0x00001054, /* Controller 0, led 29, offset 4180 */
	0x00011060, /* Controller 1, led 29, offset 4192 */
	0x0002106c, /* Controller 2, led 29, offset 4204 */
	0x00031078, /* Controller 3, led 29, offset 4216 */
	0x00041084, /* Controller 4, led 29, offset 4228 */
	0x00051090, /* Controller 5, led 29, offset 4240 */
	0x0006109c, /* Controller 6, led 29, offset 4252 */
	0x000710a8, /* Controller 7, led 29, offset 4264 */
	0x000810b4, /* Controller 8, led 29, offset 4276 */
	0x000910c0, /* Controller 9, led 29, offset 4288 */
	0x000a10cc, /* Controller 10, led 29, offset 4300 */
	0x000b10d8, /* Controller 11, led 29, offset 4312 */
	0x000010e4, /* Controller 0, led 30, offset 4324 */
	0x000110f0, /* Controller 1, led 30, offset 4336 */
	0x000210fc, /* Controller 2, led 30, offset 4348 */
	0x00031108, /* Controller 3, led 30, offset 4360 */
	0x00041114, /* Controller 4, led 30, offset 4372 */
	0x00051120, /* Controller 5, led 30, offset 4384 */
	0x0006112c, /* Controller 6, led 30, offset 4396 */
	0x00071138, /* Controller 7, led 30, offset 4408 */
	0x00081144, /* Controller 8, led 30, offset 4420 */
	0x00091150, /* Controller 9, led 30, offset 4432 */
	0x000a115c, /* Controller 10, led 30, offset 4444 */
	0x000b1168, /* Controller 11, led 30, offset 4456 */
	0x00001174, /* Controller 0, led 31, offset 4468 */
	0x00011180, /* Controller 1, led 31, offset 4480 */
	0x0002118c, /* Controller 2, led 31, offset 4492 */
	0x00031198, /* Controller 3, led 31, offset 4504 */
	0x000411a4, /* Controller 4, led 31, offset 4516 */
	0x000511b0, /* Controller 5, led 31, offset 4528 */
	0x000611bc, /* Controller 6, led 31, offset 4540 */
	0x000711c8, /* Controller 7, led 31, offset 4552 */
	0x000811d4, /* Controller 8, led 31, offset 4564 */
	0x000911e0, /* Controller 9, led 31, offset 4576 */
	0x000a11ec, /* Controller 10, led 31, offset 4588 */
	0x000b11f8, /* Controller 11, led 31, offset 4600 */
	0x00001204, /* Controller 0, led 32, offset 4612 */
	0x00011210, /* Controller 1, led 32, offset 4624 */
	0x0002121c, /* Controller 2, led 32, offset 4636 */
	0x00031228, /* Controller 3, led 32, offset 4648 */
	0x00041234, /* Controller 4, led 32, offset 4660 */
	0x00051240, /* Controller 5, led 32, offset 4672 */
	0x0006124c, /* Controller 6, led 32, offset 4684 */
	0x00071258, /* Controller 7, led 32, offset 4696 */
	0x00081264, /* Controller 8, led 32, offset 4708 */
	0x00091270, /* Controller 9, led 32, offset 4720 */
	0x000a127c, /* Controller 10, led 32, offset 4732 */
	0x000b1288, /* Controller 11, led 32, offset 4744 */
	0x00001294, /* Controller 0, led 33, offset 4756 */
	0x000112a0, /* Controller 1, led 33, offset 4768 */
	0x000212ac, /* Controller 2, led 33, offset 4780 */
	0x000312b8, /* Controller 3, led 33, offset 4792 */
	0x000412c4, /* Controller 4, led 33, offset 4804 */
	0x000512d0, /* Controller 5, led 33, offset 4816 */
	0x000612dc, /* Controller 6, led 33, offset 4828 */
	0x000712e8, /* Controller 7, led 33, offset 4840 */
	0x000812f4, /* Controller 8, led 33, offset 4852 */
	0x00091300, /* Controller 9, led 33, offset 4864 */
	0x000a130c, /* Controller 10, led 33, offset 4876 */
	0x000b1318, /* Controller 11, led 33, offset 4888 */
	0x00001324, /* Controller 0, led 34, offset 4900 */
	0x00011330, /* Controller 1, led 34, offset 4912 */
	0x0002133c, /* Controller 2, led 34, offset 4924 */
	0x00031348, /* Controller 3, led 34, offset 4936 */
	0x00041354, /* Controller 4, led 34, offset 4948 */
	0x00051360, /* Controller 5, led 34, offset 4960 */
	0x0006136c, /* Controller 6, led 34, offset 4972 */
	0x00071378, /* Controller 7, led 34, offset 4984 */
	0x00081384, /* Controller 8, led 34, offset 4996 */
	0x00091390, /* Controller 9, led 34, offset 5008 */
	0x000a139c, /* Controller 10, led 34, offset 5020 */
	0x000b13a8, /* Controller 11, led 34, offset 5032 */
	0x000013b4, /* Controller 0, led 35, offset 5044 */
	0x000113c0, /* Controller 1, led 35, offset 5056 */
	0x000213cc, /* Controller 2, led 35, offset 5068 */
	0x000313d8, /* Controller 3, led 35, offset 5080 */
	0x000413e4, /* Controller 4, led 35, offset 5092 */
	0x000513f0, /* Controller 5, led 35, offset 5104 */
	0x000613fc, /* Controller 6, led 35, offset 5116 */
	0x00071408, /* Controller 7, led 35, offset 5128 */
	0x00081414, /* Controller 8, led 35, offset 5140 */
	0x00091420, /* Controller 9, led 35, offset 5152 */
	0x000a142c, /* Controller 10, led 35, offset 5164 */
	0x000b1438, /* Controller 11, led 35, offset 5176 */
	0x00001444, /* Controller 0, led 36, offset 5188 */
	0x00011450, /* Controller 1, led 36, offset 5200 */
	0x0002145c, /* Controller 2, led 36, offset 5212 */
	0x00031468, /* Controller 3, led 36, offset 5224 */
	0x00041474, /* Controller 4, led 36, offset 5236 */
	0x00051480, /* Controller 5, led 36, offset 5248 */
	0x0006148c, /* Controller 6, led 36, offset 5260 */
	0x00071498, /* Controller 7, led 36, offset 5272 */
	0x000814a4, /* Controller 8, led 36, offset 5284 */
	0x000914b0, /* Controller 9, led 36, offset 5296 */
	0x000a14bc, /* Controller 10, led 36, offset 5308 */
	0x000b14c8, /* Controller 11, led 36, offset 5320 */
	0x000014d4, /* Controller 0, led 37, offset 5332 */
	0x000114e0, /* Controller 1, led 37, offset 5344 */
	0x000214ec, /* Controller 2, led 37, offset 5356 */
	0x000314f8, /* Controller 3, led 37, offset 5368 */
	0x00041504, /* Controller 4, led 37, offset 5380 */
	0x00051510, /* Controller 5, led 37, offset 5392 */
	0x0006151c, /* Controller 6, led 37, offset 5404 */
	0x00071528, /* Controller 7, led 37, offset 5416 */
	0x00081534, /* Controller 8, led 37, offset 5428 */
	0x00091540, /* Controller 9, led 37, offset 5440 */
	0x000a154c, /* Controller 10, led 37, offset 5452 */
	0x000b1558, /* Controller 11, led 37, offset 5464 */
	0x00001564, /* Controller 0, led 38, offset 5476 */
	0x00011570, /* Controller 1, led 38, offset 5488 */
	0x0002157c, /* Controller 2, led 38, offset 5500 */
	0x00031588, /* Controller 3, led 38, offset 5512 */
	0x00041594, /* Controller 4, led 38, offset 5524 */
	0x000515a0, /* Controller 5, led 38, offset 5536 */
	0x000615ac, /* Controller 6, led 38, offset 5548 */
	0x000715b8, /* Controller 7, led 38, offset 5560 */
	0x000815c4, /* Controller 8, led 38, offset 5572 */
	0x000915d0, /* Controller 9, led 38, offset 5584 */
	0x000a15dc, /* Controller 10, led 38, offset 5596 */
	0x000b15e8, /* Controller 11, led 38, offset 5608 */
	0x000015f4, /* Controller 0, led 39, offset 5620 */
	0x00011600, /* Controller 1, led 39, offset 5632 */
	0x0002160c, /* Controller 2, led 39, offset 5644 */
	0x00031618, /* Controller 3, led 39, offset 5656 */
	0x00041624, /* Controller 4, led 39, offset 5668 */
	0x00051630, /* Controller 5, led 39, offset 5680 */
	0x0006163c, /* Controller 6, led 39, offset 5692 */
	0x00071648, /* Controller 7, led 39, offset 5704 */
	0x00081654, /* Controller 8, led 39, offset 5716 */
	0x00091660, /* Controller 9, led 39, offset 5728 */
	0x000a166c, /* Controller 10, led 39, offset 5740 */
	0x000b1678, /* Controller 11, led 39, offset 5752 */
	0x00001684, /* Controller 0, led 40, offset 5764 */
	0x00011690, /* Controller 1, led 40, offset 5776 */
	0x0002169c, /* Controller 2, led 40, offset 5788 */
	0x000316a8, /* Controller 3, led 40, offset 5800 */
	0x000416b4, /* Controller 4, led 40, offset 5812 */
	0x000516c0, /* Controller 5, led 40, offset 5824 */
	0x000616cc, /* Controller 6, led 40, offset 5836 */
	0x000716d8, /* Controller 7, led 40, offset 5848 */
	0x000816e4, /* Controller 8, led 40, offset 5860 */
	0x000916f0, /* Controller 9, led 40, offset 5872 */
	0x000a16fc, /* Controller 10, led 40, offset 5884 */
	0x000b1708, /* Controller 11, led 40, offset 5896 */
	0x00001714, /* Controller 0, led 41, offset 5908 */
	0x00011720, /* Controller 1, led 41, offset 5920 */
	0x0002172c, /* Controller 2, led 41, offset 5932 */
	0x00031738, /* Controller 3, led 41, offset 5944 */
	0x00041744, /* Controller 4, led 41, offset 5956 */
	0x00051750, /* Controller 5, led 41, offset 5968 */
	0x0006175c, /* Controller 6, led 41, offset 5980 */
	0x00071768, /* Controller 7, led 41, offset 5992 */
	0x00081774, /* Controller 8, led 41, offset 6004 */
	0x00091780, /* Controller 9, led 41, offset 6016 */
	0x000a178c, /* Controller 10, led 41, offset 6028 */
	0x000b1798, /* Controller 11, led 41, offset 6040 */
	0x000017a4, /* Controller 0, led 42, offset 6052 */
	0x000117b0, /* Controller 1, led 42, offset 6064 */
	0x000217bc, /* Controller 2, led 42, offset 6076 */
	0x000317c8, /* Controller 3, led 42, offset 6088 */
	0x000417d4, /* Controller 4, led 42, offset 6100 */
	0x000517e0, /* Controller 5, led 42, offset 6112 */
	0x000617ec, /* Controller 6, led 42, offset 6124 */
	0x000717f8, /* Controller 7, led 42, offset 6136 */
	0x00081804, /* Controller 8, led 42, offset 6148 */
	0x00091810, /* Controller 9, led 42, offset 6160 */
	0x000a181c, /* Controller 10, led 42, offset 6172 */
	0x000b1828, /* Controller 11, led 42, offset 6184 */
	0x00001834, /* Controller 0, led 43, offset 6196 */
	0x00011840, /* Controller 1, led 43, offset 6208 */
	0x0002184c, /* Controller 2, led 43, offset 6220 */
	0x00031858, /* Controller 3, led 43, offset 6232 */
	0x00041864, /* Controller 4, led 43, offset 6244 */
	0x00051870, /* Controller 5, led 43, offset 6256 */
	0x0006187c, /* Controller 6, led 43, offset 6268 */
	0x00071888, /* Controller 7, led 43, offset 6280 */
	0x00081894, /* Controller 8, led 43, offset 6292 */
	0x000918a0, /* Controller 9, led 43, offset 6304 */
	0x000a18ac, /* Controller 10, led 43, offset 6316 */
	0x000b18b8, /* Controller 11, led 43, offset 6328 */
	0x000018c4, /* Controller 0, led 44, offset 6340 */
	0x000118d0, /* Controller 1, led 44, offset 6352 */
	0x000218dc, /* Controller 2, led 44, offset 6364 */
	0x000318e8, /* Controller 3, led 44, offset 6376 */
	0x000418f4, /* Controller 4, led 44, offset 6388 */
	0x00051900, /* Controller 5, led 44, offset 6400 */
	0x0006190c, /* Controller 6, led 44, offset 6412 */
	0x00071918, /* Controller 7, led 44, offset 6424 */
	0x00081924, /* Controller 8, led 44, offset 6436 */
	0x00091930, /* Controller 9, led 44, offset 6448 */
	0x000a193c, /* Controller 10, led 44, offset 6460 */
	0x000b1948, /* Controller 11, led 44, offset 6472 */
	0x00001954, /* Controller 0, led 45, offset 6484 */
	0x00011960, /* Controller 1, led 45, offset 6496 */
	0x0002196c, /* Controller 2, led 45, offset 6508 */
	0x00031978, /* Controller 3, led 45, offset 6520 */
	0x00041984, /* Controller 4, led 45, offset 6532 */
	0x00051990, /* Controller 5, led 45, offset 6544 */
	0x0006199c, /* Controller 6, led 45, offset 6556 */
	0x000719a8, /* Controller 7, led 45, offset 6568 */
	0x000819b4, /* Controller 8, led 45, offset 6580 */
	0x000919c0, /* Controller 9, led 45, offset 6592 */
	0x000a19cc, /* Controller 10, led 45, offset 6604 */
	0x000b19d8, /* Controller 11, led 45, offset 6616 */
	0x000019e4, /* Controller 0, led 46, offset 6628 */
	0x000119f0, /* Controller 1, led 46, offset 6640 */
	0x000219fc, /* Controller 2, led 46, offset 6652 */
	0x00031a08, /* Controller 3, led 46, offset 6664 */
	0x00041a14, /* Controller 4, led 46, offset 6676 */
	0x00051a20, /* Controller 5, led 46, offset 6688 */
	0x00061a2c, /* Controller 6, led 46, offset 6700 */
	0x00071a38, /* Controller 7, led 46, offset 6712 */
	0x00081a44, /* Controller 8, led 46, offset 6724 */
	0x00091a50, /* Controller 9, led 46, offset 6736 */
	0x000a1a5c, /* Controller 10, led 46, offset 6748 */
	0x000b1a68, /* Controller 11, led 46, offset 6760 */
	0x00001a74, /* Controller 0, led 47, offset 6772 */
	0x00011a80, /* Controller 1, led 47, offset 6784 */
	0x00021a8c, /* Controller 2, led 47, offset 6796 */
	0x00031a98, /* Controller 3, led 47, offset 6808 */
	0x00041aa4, /* Controller 4, led 47, offset 6820 */
	0x00051ab0, /* Controller 5, led 47, offset 6832 */
	0x00061abc, /* Controller 6, led 47, offset 6844 */
	0x00071ac8, /* Controller 7, led 47, offset 6856 */
	0x00081ad4, /* Controller 8, led 47, offset 6868 */
	0x00091ae0, /* Controller 9, led 47, offset 6880 */
	0x000a1aec, /* Controller 10, led 47, offset 6892 */
	0x000b1af8, /* Controller 11, led 47, offset 6904 */
	0x00001b04, /* Controller 0, led 48, offset 6916 */
	0x00011b10, /* Controller 1, led 48, offset 6928 */
	0x00021b1c, /* Controller 2, led 48, offset 6940 */
	0x00031b28, /* Controller 3, led 48, offset 6952 */
	0x00041b34, /* Controller 4, led 48, offset 6964 */
	0x00051b40, /* Controller 5, led 48, offset 6976 */
	0x00061b4c, /* Controller 6, led 48, offset 6988 */
	0x00071b58, /* Controller 7, led 48, offset 7000 */
	0x00081b64, /* Controller 8, led 48, offset 7012 */
	0x00091b70, /* Controller 9, led 48, offset 7024 */
	0x000a1b7c, /* Controller 10, led 48, offset 7036 */
	0x000b1b88, /* Controller 11, led 48, offset 7048 */
	0x00001b94, /* Controller 0, led 49, offset 7060 */
	0x00011ba0, /* Controller 1, led 49, offset 7072 */
	0x00021bac, /* Controller 2, led 49, offset 7084 */
	0x00031bb8, /* Controller 3, led 49, offset 7096 */
	0x00041bc4, /* Controller 4, led 49, offset 7108 */
	0x00051bd0, /* Controller 5, led 49, offset 7120 */
	0x00061bdc, /* Controller 6, led 49, offset 7132 */
	0x00071be8, /* Controller 7, led 49, offset 7144 */
	0x00081bf4, /* Controller 8, led 49, offset 7156 */
	0x00091c00, /* Controller 9, led 49, offset 7168 */
	0x000a1c0c, /* Controller 10, led 49, offset 7180 */
	0x000b1c18, /* Controller 11, led 49, offset 7192 */
	0x00001c24, /* Controller 0, led 50, offset 7204 */
	0x00011c30, /* Controller 1, led 50, offset 7216 */
	0x00021c3c, /* Controller 2, led 50, offset 7228 */
	0x00031c48, /* Controller 3, led 50, offset 7240 */
	0x00041c54, /* Controller 4, led 50, offset 7252 */
	0x00051c60, /* Controller 5, led 50, offset 7264 */
	0x00061c6c, /* Controller 6, led 50, offset 7276 */
	0x00071c78, /* Controller 7, led 50, offset 7288 */
	0x00081c84, /* Controller 8, led 50, offset 7300 */
	0x00091c90, /* Controller 9, led 50, offset 7312 */
	0x000a1c9c, /* Controller 10, led 50, offset 7324 */
	0x000b1ca8, /* Controller 11, led 50, offset 7336 */
	0x00001cb4, /* Controller 0, led 51, offset 7348 */
	0x00011cc0, /* Controller 1, led 51, offset 7360 */
	0x00021ccc, /* Controller 2, led 51, offset 7372 */
	0x00031cd8, /* Controller 3, led 51, offset 7384 */
	0x00041ce4, /* Controller 4, led 51, offset 7396 */
	0x00051cf0, /* Controller 5, led 51, offset 7408 */
	0x00061cfc, /* Controller 6, led 51, offset 7420 */
	0x00071d08, /* Controller 7, led 51, offset 7432 */
	0x00081d14, /* Controller 8, led 51, offset 7444 */
	0x00091d20, /* Controller 9, led 51, offset 7456 */
	0x000a1d2c, /* Controller 10, led 51, offset 7468 */
	0x000b1d38, /* Controller 11, led 51, offset 7480 */
	0x00001d44, /* Controller 0, led 52, offset 7492 */
	0x00011d50, /* Controller 1, led 52, offset 7504 */
	0x00021d5c, /* Controller 2, led 52, offset 7516 */
	0x00031d68, /* Controller 3, led 52, offset 7528 */
	0x00041d74, /* Controller 4, led 52, offset 7540 */
	0x00051d80, /* Controller 5, led 52, offset 7552 */
	0x00061d8c, /* Controller 6, led 52, offset 7564 */
	0x00071d98, /* Controller 7, led 52, offset 7576 */
	0x00081da4, /* Controller 8, led 52, offset 7588 */
	0x00091db0, /* Controller 9, led 52, offset 7600 */
	0x000a1dbc, /* Controller 10, led 52, offset 7612 */
	0x000b1dc8, /* Controller 11, led 52, offset 7624 */
	0x00001dd4, /* Controller 0, led 53, offset 7636 */
	0x00011de0, /* Controller 1, led 53, offset 7648 */
	0x00021dec, /* Controller 2, led 53, offset 7660 */
	0x00031df8, /* Controller 3, led 53, offset 7672 */
	0x00041e04, /* Controller 4, led 53, offset 7684 */
	0x00051e10, /* Controller 5, led 53, offset 7696 */
	0x00061e1c, /* Controller 6, led 53, offset 7708 */
	0x00071e28, /* Controller 7, led 53, offset 7720 */
	0x00081e34, /* Controller 8, led 53, offset 7732 */
	0x00091e40, /* Controller 9, led 53, offset 7744 */
	0x000a1e4c, /* Controller 10, led 53, offset 7756 */
	0x000b1e58, /* Controller 11, led 53, offset 7768 */
	0x00001e64, /* Controller 0, led 54, offset 7780 */
	0x00011e70, /* Controller 1, led 54, offset 7792 */
	0x00021e7c, /* Controller 2, led 54, offset 7804 */
	0x00031e88, /* Controller 3, led 54, offset 7816 */
	0x00041e94, /* Controller 4, led 54, offset 7828 */
	0x00051ea0, /* Controller 5, led 54, offset 7840 */
	0x00061eac, /* Controller 6, led 54, offset 7852 */
	0x00071eb8, /* Controller 7, led 54, offset 7864 */
	0x00081ec4, /* Controller 8, led 54, offset 7876 */
	0x00091ed0, /* Controller 9, led 54, offset 7888 */
	0x000a1edc, /* Controller 10, led 54, offset 7900 */
	0x000b1ee8, /* Controller 11, led 54, offset 7912 */
	0x00001ef4, /* Controller 0, led 55, offset 7924 */
	0x00011f00, /* Controller 1, led 55, offset 7936 */
	0x00021f0c, /* Controller 2, led 55, offset 7948 */
	0x00031f18, /* Controller 3, led 55, offset 7960 */
	0x00041f24, /* Controller 4, led 55, offset 7972 */
	0x00051f30, /* Controller 5, led 55, offset 7984 */
	0x00061f3c, /* Controller 6, led 55, offset 7996 */
	0x00071f48, /* Controller 7, led 55, offset 8008 */
	0x00081f54, /* Controller 8, led 55, offset 8020 */
	0x00091f60, /* Controller 9, led 55, offset 8032 */
	0x000a1f6c, /* Controller 10, led 55, offset 8044 */
	0x000b1f78, /* Controller 11, led 55, offset 8056 */
	0x00001f84, /* Controller 0, led 56, offset 8068 */
	0x00011f90, /* Controller 1, led 56, offset 8080 */
	0x00021f9c, /* Controller 2, led 56, offset 8092 */
	0x00031fa8, /* Controller 3, led 56, offset 8104 */
	0x00041fb4, /* Controller 4, led 56, offset 8116 */
	0x00051fc0, /* Controller 5, led 56, offset 8128 */
	0x00061fcc, /* Controller 6, led 56, offset 8140 */
	0x00071fd8, /* Controller 7, led 56, offset 8152 */
	0x00081fe4, /* Controller 8, led 56, offset 8164 */
	0x00091ff0, /* Controller 9, led 56, offset 8176 */
	0x000a1ffc, /* Controller 10, led 56, offset 8188 */
	0x000b2008, /* Controller 11, led 56, offset 8200 */
	0x00002014, /* Controller 0, led 57, offset 8212 */
	0x00012020, /* Controller 1, led 57, offset 8224 */
	0x0002202c, /* Controller 2, led 57, offset 8236 */
	0x00032038, /* Controller 3, led 57, offset 8248 */
	0x00042044, /* Controller 4, led 57, offset 8260 */
	0x00052050, /* Controller 5, led 57, offset 8272 */
	0x0006205c, /* Controller 6, led 57, offset 8284 */
	0x00072068, /* Controller 7, led 57, offset 8296 */
	0x00082074, /* Controller 8, led 57, offset 8308 */
	0x00092080, /* Controller 9, led 57, offset 8320 */
	0x000a208c, /* Controller 10, led 57, offset 8332 */
	0x000b2098, /* Controller 11, led 57, offset 8344 */
	0x000020a4, /* Controller 0, led 58, offset 8356 */
	0x000120b0, /* Controller 1, led 58, offset 8368 */
	0x000220bc, /* Controller 2, led 58, offset 8380 */
	0x000320c8, /* Controller 3, led 58, offset 8392 */
	0x000420d4, /* Controller 4, led 58, offset 8404 */
	0x000520e0, /* Controller 5, led 58, offset 8416 */
	0x000620ec, /* Controller 6, led 58, offset 8428 */
	0x000720f8, /* Controller 7, led 58, offset 8440 */
	0x00082104, /* Controller 8, led 58, offset 8452 */
	0x00092110, /* Controller 9, led 58, offset 8464 */
	0x000a211c, /* Controller 10, led 58, offset 8476 */
	0x000b2128, /* Controller 11, led 58, offset 8488 */
	0x00002134, /* Controller 0, led 59, offset 8500 */
	0x00012140, /* Controller 1, led 59, offset 8512 */
	0x0002214c, /* Controller 2, led 59, offset 8524 */
	0x00032158, /* Controller 3, led 59, offset 8536 */
	0x00042164, /* Controller 4, led 59, offset 8548 */
	0x00052170, /* Controller 5, led 59, offset 8560 */
	0x0006217c, /* Controller 6, led 59, offset 8572 */
	0x00072188, /* Controller 7, led 59, offset 8584 */
	0x00082194, /* Controller 8, led 59, offset 8596 */
	0x000921a0, /* Controller 9, led 59, offset 8608 */
	0x000a21ac, /* Controller 10, led 59, offset 8620 */
	0x000b21b8, /* Controller 11, led 59, offset 8632 */
	0x000021c4, /* Controller 0, led 60, offset 8644 */
	0x000121d0, /* Controller 1, led 60, offset 8656 */
	0x000221dc, /* Controller 2, led 60, offset 8668 */
	0x000321e8, /* Controller 3, led 60, offset 8680 */
	0x000421f4, /* Controller 4, led 60, offset 8692 */
	0x00052200, /* Controller 5, led 60, offset 8704 */
	0x0006220c, /* Controller 6, led 60, offset 8716 */
	0x00072218, /* Controller 7, led 60, offset 8728 */
	0x00082224, /* Controller 8, led 60, offset 8740 */
	0x00092230, /* Controller 9, led 60, offset 8752 */
	0x000a223c, /* Controller 10, led 60, offset 8764 */
	0x000b2248, /* Controller 11, led 60, offset 8776 */
	0x00002254, /* Controller 0, led 61, offset 8788 */
	0x00012260, /* Controller 1, led 61, offset 8800 */
	0x0002226c, /* Controller 2, led 61, offset 8812 */
	0x00032278, /* Controller 3, led 61, offset 8824 */
	0x00042284, /* Controller 4, led 61, offset 8836 */
	0x00052290, /* Controller 5, led 61, offset 8848 */
	0x0006229c, /* Controller 6, led 61, offset 8860 */
	0x000722a8, /* Controller 7, led 61, offset 8872 */
	0x000822b4, /* Controller 8, led 61, offset 8884 */
	0x000922c0, /* Controller 9, led 61, offset 8896 */
	0x000a22cc, /* Controller 10, led 61, offset 8908 */
	0x000b22d8, /* Controller 11, led 61, offset 8920 */
	0x000022e4, /* Controller 0, led 62, offset 8932 */
	0x000122f0, /* Controller 1, led 62, offset 8944 */
	0x000222fc, /* Controller 2, led 62, offset 8956 */
	0x00032308, /* Controller 3, led 62, offset 8968 */
	0x00042314, /* Controller 4, led 62, offset 8980 */
	0x00052320, /* Controller 5, led 62, offset 8992 */
	0x0006232c, /* Controller 6, led 62, offset 9004 */
	0x00072338, /* Controller 7, led 62, offset 9016 */
	0x00082344, /* Controller 8, led 62, offset 9028 */
	0x00092350, /* Controller 9, led 62, offset 9040 */
	0x000a235c, /* Controller 10, led 62, offset 9052 */
	0x000b2368, /* Controller 11, led 62, offset 9064 */
	0x00002374, /* Controller 0, led 63, offset 9076 */
	0x00012380, /* Controller 1, led 63, offset 9088 */
	0x0002238c, /* Controller 2, led 63, offset 9100 */
	0x00032398, /* Controller 3, led 63, offset 9112 */
	0x000423a4, /* Controller 4, led 63, offset 9124 */
	0x000523b0, /* Controller 5, led 63, offset 9136 */
	0x000623bc, /* Controller 6, led 63, offset 9148 */
	0x000723c8, /* Controller 7, led 63, offset 9160 */
	0x000823d4, /* Controller 8, led 63, offset 9172 */
	0x000923e0, /* Controller 9, led 63, offset 9184 */
	0x000a23ec, /* Controller 10, led 63, offset 9196 */
	0x000b23f8, /* Controller 11, led 63, offset 9208 */
	0x00002404, /* Controller 0, led 64, offset 9220 */
	0x00012410, /* Controller 1, led 64, offset 9232 */
	0x0002241c, /* Controller 2, led 64, offset 9244 */
	0x00032428, /* Controller 3, led 64, offset 9256 */
	0x00042434, /* Controller 4, led 64, offset 9268 */
	0x00052440, /* Controller 5, led 64, offset 9280 */
	0x0006244c, /* Controller 6, led 64, offset 9292 */
	0x00072458, /* Controller 7, led 64, offset 9304 */
	0x00082464, /* Controller 8, led 64, offset 9316 */
	0x00092470, /* Controller 9, led 64, offset 9328 */
	0x000a247c, /* Controller 10, led 64, offset 9340 */
	0x000b2488, /* Controller 11, led 64, offset 9352 */
	0x00002494, /* Controller 0, led 65, offset 9364 */
	0x000124a0, /* Controller 1, led 65, offset 9376 */
	0x000224ac, /* Controller 2, led 65, offset 9388 */
	0x000324b8, /* Controller 3, led 65, offset 9400 */
	0x000424c4, /* Controller 4, led 65, offset 9412 */
	0x000524d0, /* Controller 5, led 65, offset 9424 */
	0x000624dc, /* Controller 6, led 65, offset 9436 */
	0x000724e8, /* Controller 7, led 65, offset 9448 */
	0x000824f4, /* Controller 8, led 65, offset 9460 */
	0x00092500, /* Controller 9, led 65, offset 9472 */
	0x000a250c, /* Controller 10, led 65, offset 9484 */
	0x000b2518, /* Controller 11, led 65, offset 9496 */
	0x00002524, /* Controller 0, led 66, offset 9508 */
	0x00012530, /* Controller 1, led 66, offset 9520 */
	0x0002253c, /* Controller 2, led 66, offset 9532 */
	0x00032548, /* Controller 3, led 66, offset 9544 */
	0x00042554, /* Controller 4, led 66, offset 9556 */
	0x00052560, /* Controller 5, led 66, offset 9568 */
	0x0006256c, /* Controller 6, led 66, offset 9580 */
	0x00072578, /* Controller 7, led 66, offset 9592 */
	0x00082584, /* Controller 8, led 66, offset 9604 */
	0x00092590, /* Controller 9, led 66, offset 9616 */
	0x000a259c, /* Controller 10, led 66, offset 9628 */
	0x000b25a8, /* Controller 11, led 66, offset 9640 */
	0x000025b4, /* Controller 0, led 67, offset 9652 */
	0x000125c0, /* Controller 1, led 67, offset 9664 */
	0x000225cc, /* Controller 2, led 67, offset 9676 */
	0x000325d8, /* Controller 3, led 67, offset 9688 */
	0x000425e4, /* Controller 4, led 67, offset 9700 */
	0x000525f0, /* Controller 5, led 67, offset 9712 */
	0x000625fc, /* Controller 6, led 67, offset 9724 */
	0x00072608, /* Controller 7, led 67, offset 9736 */
	0x00082614, /* Controller 8, led 67, offset 9748 */
	0x00092620, /* Controller 9, led 67, offset 9760 */
	0x000a262c, /* Controller 10, led 67, offset 9772 */
	0x000b2638, /* Controller 11, led 67, offset 9784 */
	0x00002644, /* Controller 0, led 68, offset 9796 */
	0x00012650, /* Controller 1, led 68, offset 9808 */
	0x0002265c, /* Controller 2, led 68, offset 9820 */
	0x00032668, /* Controller 3, led 68, offset 9832 */
	0x00042674, /* Controller 4, led 68, offset 9844 */
	0x00052680, /* Controller 5, led 68, offset 9856 */
	0x0006268c, /* Controller 6, led 68, offset 9868 */
	0x00072698, /* Controller 7, led 68, offset 9880 */
	0x000826a4, /* Controller 8, led 68, offset 9892 */
	0x000926b0, /* Controller 9, led 68, offset 9904 */
	0x000a26bc, /* Controller 10, led 68, offset 9916 */
	0x000b26c8, /* Controller 11, led 68, offset 9928 */
	0x000026d4, /* Controller 0, led 69, offset 9940 */
	0x000126e0, /* Controller 1, led 69, offset 9952 */
	0x000226ec, /* Controller 2, led 69, offset 9964 */
	0x000326f8, /* Controller 3, led 69, offset 9976 */
	0x00042704, /* Controller 4, led 69, offset 9988 */
	0x00052710, /* Controller 5, led 69, offset 10000 */
	0x0006271c, /* Controller 6, led 69, offset 10012 */
	0x00072728, /* Controller 7, led 69, offset 10024 */
	0x00082734, /* Controller 8, led 69, offset 10036 */
	0x00092740, /* Controller 9, led 69, offset 10048 */
	0x000a274c, /* Controller 10, led 69, offset 10060 */
	0x000b2758, /* Controller 11, led 69, offset 10072 */
	0x00002764, /* Controller 0, led 70, offset 10084 */
	0x00012770, /* Controller 1, led 70, offset 10096 */
	0x0002277c, /* Controller 2, led 70, offset 10108 */
	0x00032788, /* Controller 3, led 70, offset 10120 */
	0x00042794, /* Controller 4, led 70, offset 10132 */
	0x000527a0, /* Controller 5, led 70, offset 10144 */
	0x000627ac, /* Controller 6, led 70, offset 10156 */
	0x000727b8, /* Controller 7, led 70, offset 10168 */
	0x000827c4, /* Controller 8, led 70, offset 10180 */
	0x000927d0, /* Controller 9, led 70, offset 10192 */
	0x000a27dc, /* Controller 10, led 70, offset 10204 */
	0x000b27e8, /* Controller 11, led 70, offset 10216 */
	0x000027f4, /* Controller 0, led 71, offset 10228 */
	0x00012800, /* Controller 1, led 71, offset 10240 */
	0x0002280c, /* Controller 2, led 71, offset 10252 */
	0x00032818, /* Controller 3, led 71, offset 10264 */
	0x00042824, /* Controller 4, led 71, offset 10276 */
	0x00052830, /* Controller 5, led 71, offset 10288 */
	0x0006283c, /* Controller 6, led 71, offset 10300 */
	0x00072848, /* Controller 7, led 71, offset 10312 */
	0x00082854, /* Controller 8, led 71, offset 10324 */
	0x00092860, /* Controller 9, led 71, offset 10336 */
	0x000a286c, /* Controller 10, led 71, offset 10348 */
	0x000b2878, /* Controller 11, led 71, offset 10360 */
	0x00002884, /* Controller 0, led 72, offset 10372 */
	0x00012890, /* Controller 1, led 72, offset 10384 */
	0x0002289c, /* Controller 2, led 72, offset 10396 */
	0x000328a8, /* Controller 3, led 72, offset 10408 */
	0x000428b4, /* Controller 4, led 72, offset 10420 */
	0x000528c0, /* Controller 5, led 72, offset 10432 */
	0x000628cc, /* Controller 6, led 72, offset 10444 */
	0x000728d8, /* Controller 7, led 72, offset 10456 */
	0x000828e4, /* Controller 8, led 72, offset 10468 */
	0x000928f0, /* Controller 9, led 72, offset 10480 */
	0x000a28fc, /* Controller 10, led 72, offset 10492 */
	0x000b2908, /* Controller 11, led 72, offset 10504 */
	0x00002914, /* Controller 0, led 73, offset 10516 */
	0x00012920, /* Controller 1, led 73, offset 10528 */
	0x0002292c, /* Controller 2, led 73, offset 10540 */
	0x00032938, /* Controller 3, led 73, offset 10552 */
	0x00042944, /* Controller 4, led 73, offset 10564 */
	0x00052950, /* Controller 5, led 73, offset 10576 */
	0x0006295c, /* Controller 6, led 73, offset 10588 */
	0x00072968, /* Controller 7, led 73, offset 10600 */
	0x00082974, /* Controller 8, led 73, offset 10612 */
	0x00092980, /* Controller 9, led 73, offset 10624 */
	0x000a298c, /* Controller 10, led 73, offset 10636 */
	0x000b2998, /* Controller 11, led 73, offset 10648 */
	0x000029a4, /* Controller 0, led 74, offset 10660 */
	0x000129b0, /* Controller 1, led 74, offset 10672 */
	0x000229bc, /* Controller 2, led 74, offset 10684 */
	0x000329c8, /* Controller 3, led 74, offset 10696 */
	0x000429d4, /* Controller 4, led 74, offset 10708 */
	0x000529e0, /* Controller 5, led 74, offset 10720 */
	0x000629ec, /* Controller 6, led 74, offset 10732 */
	0x000729f8, /* Controller 7, led 74, offset 10744 */
	0x00082a04, /* Controller 8, led 74, offset 10756 */
	0x00092a10, /* Controller 9, led 74, offset 10768 */
	0x000a2a1c, /* Controller 10, led 74, offset 10780 */
	0x000b2a28, /* Controller 11, led 74, offset 10792 */
	0x00002a34, /* Controller 0, led 75, offset 10804 */
	0x00012a40, /* Controller 1, led 75, offset 10816 */
	0x00022a4c, /* Controller 2, led 75, offset 10828 */
	0x00032a58, /* Controller 3, led 75, offset 10840 */
	0x00042a64, /* Controller 4, led 75, offset 10852 */
	0x00052a70, /* Controller 5, led 75, offset 10864 */
	0x00062a7c, /* Controller 6, led 75, offset 10876 */
	0x00072a88, /* Controller 7, led 75, offset 10888 */
	0x00082a94, /* Controller 8, led 75, offset 10900 */
	0x00092aa0, /* Controller 9, led 75, offset 10912 */
	0x000a2aac, /* Controller 10, led 75, offset 10924 */
	0x000b2ab8, /* Controller 11, led 75, offset 10936 */
	0x00002ac4, /* Controller 0, led 76, offset 10948 */
	0x00012ad0, /* Controller 1, led 76, offset 10960 */
	0x00022adc, /* Controller 2, led 76, offset 10972 */
	0x00032ae8, /* Controller 3, led 76, offset 10984 */
	0x00042af4, /* Controller 4, led 76, offset 10996 */
	0x00052b00, /* Controller 5, led 76, offset 11008 */
	0x00062b0c, /* Controller 6, led 76, offset 11020 */
	0x00072b18, /* Controller 7, led 76, offset 11032 */
	0x00082b24, /* Controller 8, led 76, offset 11044 */
	0x00092b30, /* Controller 9, led 76, offset 11056 */
	0x000a2b3c, /* Controller 10, led 76, offset 11068 */
	0x000b2b48, /* Controller 11, led 76, offset 11080 */
	0x00002b54, /* Controller 0, led 77, offset 11092 */
	0x00012b60, /* Controller 1, led 77, offset 11104 */
	0x00022b6c, /* Controller 2, led 77, offset 11116 */
	0x00032b78, /* Controller 3, led 77, offset 11128 */
	0x00042b84, /* Controller 4, led 77, offset 11140 */
	0x00052b90, /* Controller 5, led 77, offset 11152 */
	0x00062b9c, /* Controller 6, led 77, offset 11164 */
	0x00072ba8, /* Controller 7, led 77, offset 11176 */
	0x00082bb4, /* Controller 8, led 77, offset 11188 */
	0x00092bc0, /* Controller 9, led 77, offset 11200 */
	0x000a2bcc, /* Controller 10, led 77, offset 11212 */
	0x000b2bd8, /* Controller 11, led 77, offset 11224 */
	0x00002be4, /* Controller 0, led 78, offset 11236 */
	0x00012bf0, /* Controller 1, led 78, offset 11248 */
	0x00022bfc, /* Controller 2, led 78, offset 11260 */
	0x00032c08, /* Controller 3, led 78, offset 11272 */
	0x00042c14, /* Controller 4, led 78, offset 11284 */
	0x00052c20, /* Controller 5, led 78, offset 11296 */
	0x00062c2c, /* Controller 6, led 78, offset 11308 */
	0x00072c38, /* Controller 7, led 78, offset 11320 */
	0x00082c44, /* Controller 8, led 78, offset 11332 */
	0x00092c50, /* Controller 9, led 78, offset 11344 */
	0x000a2c5c, /* Controller 10, led 78, offset 11356 */
	0x000b2c68, /* Controller 11, led 78, offset 11368 */
	0x00002c74, /* Controller 0, led 79, offset 11380 */
	0x00012c80, /* Controller 1, led 79, offset 11392 */
	0x00022c8c, /* Controller 2, led 79, offset 11404 */
	0x00032c98, /* Controller 3, led 79, offset 11416 */
	0x00042ca4, /* Controller 4, led 79, offset 11428 */
	0x00052cb0, /* Controller 5, led 79, offset 11440 */
	0x00062cbc, /* Controller 6, led 79, offset 11452 */
	0x00072cc8, /* Controller 7, led 79, offset 11464 */
	0x00082cd4, /* Controller 8, led 79, offset 11476 */
	0x00092ce0, /* Controller 9, led 79, offset 11488 */
	0x000a2cec, /* Controller 10, led 79, offset 11500 */
	0x000b2cf8, /* Controller 11, led 79, offset 11512 */
	0x00002d04, /* Controller 0, led 80, offset 11524 */
	0x00012d10, /* Controller 1, led 80, offset 11536 */
	0x00022d1c, /* Controller 2, led 80, offset 11548 */
	0x00032d28, /* Controller 3, led 80, offset 11560 */
	0x00042d34, /* Controller 4, led 80, offset 11572 */
	0x00052d40, /* Controller 5, led 80, offset 11584 */
	0x00062d4c, /* Controller 6, led 80, offset 11596 */
	0x00072d58, /* Controller 7, led 80, offset 11608 */
	0x00082d64, /* Controller 8, led 80, offset 11620 */
	0x00092d70, /* Controller 9, led 80, offset 11632 */
	0x000a2d7c, /* Controller 10, led 80, offset 11644 */
	0x000b2d88, /* Controller 11, led 80, offset 11656 */
	0x00002d94, /* Controller 0, led 81, offset 11668 */
	0x00012da0, /* Controller 1, led 81, offset 11680 */
	0x00022dac, /* Controller 2, led 81, offset 11692 */
	0x00032db8, /* Controller 3, led 81, offset 11704 */
	0x00042dc4, /* Controller 4, led 81, offset 11716 */
	0x00052dd0, /* Controller 5, led 81, offset 11728 */
	0x00062ddc, /* Controller 6, led 81, offset 11740 */
	0x00072de8, /* Controller 7, led 81, offset 11752 */
	0x00082df4, /* Controller 8, led 81, offset 11764 */
	0x00092e00, /* Controller 9, led 81, offset 11776 */
	0x000a2e0c, /* Controller 10, led 81, offset 11788 */
	0x000b2e18, /* Controller 11, led 81, offset 11800 */
	0x00002e24, /* Controller 0, led 82, offset 11812 */
	0x00012e30, /* Controller 1, led 82, offset 11824 */
	0x00022e3c, /* Controller 2, led 82, offset 11836 */
	0x00032e48, /* Controller 3, led 82, offset 11848 */
	0x00042e54, /* Controller 4, led 82, offset 11860 */
	0x00052e60, /* Controller 5, led 82, offset 11872 */
	0x00062e6c, /* Controller 6, led 82, offset 11884 */
	0x00072e78, /* Controller 7, led 82, offset 11896 */
	0x00082e84, /* Controller 8, led 82, offset 11908 */
	0x00092e90, /* Controller 9, led 82, offset 11920 */
	0x000a2e9c, /* Controller 10, led 82, offset 11932 */
	0x000b2ea8, /* Controller 11, led 82, offset 11944 */
	0x00002eb4, /* Controller 0, led 83, offset 11956 */
	0x00012ec0, /* Controller 1, led 83, offset 11968 */
	0x00022ecc, /* Controller 2, led 83, offset 11980 */
	0x00032ed8, /* Controller 3, led 83, offset 11992 */
	0x00042ee4, /* Controller 4, led 83, offset 12004 */
	0x00052ef0, /* Controller 5, led 83, offset 12016 */
	0x00062efc, /* Controller 6, led 83, offset 12028 */
	0x00072f08, /* Controller 7, led 83, offset 12040 */
	0x00082f14, /* Controller 8, led 83, offset 12052 */
	0x00092f20, /* Controller 9, led 83, offset 12064 */
	0x000a2f2c, /* Controller 10, led 83, offset 12076 */
	0x000b2f38, /* Controller 11, led 83, offset 12088 */
	0x00002f44, /* Controller 0, led 84, offset 12100 */
	0x00012f50, /* Controller 1, led 84, offset 12112 */
	0x00022f5c, /* Controller 2, led 84, offset 12124 */
	0x00032f68, /* Controller 3, led 84, offset 12136 */
	0x00042f74, /* Controller 4, led 84, offset 12148 */
	0x00052f80, /* Controller 5, led 84, offset 12160 */
	0x00062f8c, /* Controller 6, led 84, offset 12172 */
	0x00072f98, /* Controller 7, led 84, offset 12184 */
	0x00082fa4, /* Controller 8, led 84, offset 12196 */
	0x00092fb0, /* Controller 9, led 84, offset 12208 */
	0x000a2fbc, /* Controller 10, led 84, offset 12220 */
	0x000b2fc8, /* Controller 11, led 84, offset 12232 */
	0x00002fd4, /* Controller 0, led 85, offset 12244 */
	0x00012fe0, /* Controller 1, led 85, offset 12256 */
	0x00022fec, /* Controller 2, led 85, offset 12268 */
	0x00032ff8, /* Controller 3, led 85, offset 12280 */
	0x00043004, /* Controller 4, led 85, offset 12292 */
	0x00053010, /* Controller 5, led 85, offset 12304 */
	0x0006301c, /* Controller 6, led 85, offset 12316 */
	0x00073028, /* Controller 7, led 85, offset 12328 */
	0x00083034, /* Controller 8, led 85, offset 12340 */
	0x00093040, /* Controller 9, led 85, offset 12352 */
	0x000a304c, /* Controller 10, led 85, offset 12364 */
	0x000b3058, /* Controller 11, led 85, offset 12376 */
	0x00003064, /* Controller 0, led 86, offset 12388 */
	0x00013070, /* Controller 1, led 86, offset 12400 */
	0x0002307c, /* Controller 2, led 86, offset 12412 */
	0x00033088, /* Controller 3, led 86, offset 12424 */
	0x00043094, /* Controller 4, led 86, offset 12436 */
	0x000530a0, /* Controller 5, led 86, offset 12448 */
	0x000630ac, /* Controller 6, led 86, offset 12460 */
	0x000730b8, /* Controller 7, led 86, offset 12472 */
	0x000830c4, /* Controller 8, led 86, offset 12484 */
	0x000930d0, /* Controller 9, led 86, offset 12496 */
	0x000a30dc, /* Controller 10, led 86, offset 12508 */
	0x000b30e8, /* Controller 11, led 86, offset 12520 */
	0x000030f4, /* Controller 0, led 87, offset 12532 */
	0x00013100, /* Controller 1, led 87, offset 12544 */
	0x0002310c, /* Controller 2, led 87, offset 12556 */
	0x00033118, /* Controller 3, led 87, offset 12568 */
	0x00043124, /* Controller 4, led 87, offset 12580 */
	0x00053130, /* Controller 5, led 87, offset 12592 */
	0x0006313c, /* Controller 6, led 87, offset 12604 */
	0x00073148, /* Controller 7, led 87, offset 12616 */
	0x00083154, /* Controller 8, led 87, offset 12628 */
	0x00093160, /* Controller 9, led 87, offset 12640 */
	0x000a316c, /* Controller 10, led 87, offset 12652 */
	0x000b3178, /* Controller 11, led 87, offset 12664 */
	0x00003184, /* Controller 0, led 88, offset 12676 */
	0x00013190, /* Controller 1, led 88, offset 12688 */
	0x0002319c, /* Controller 2, led 88, offset 12700 */
	0x000331a8, /* Controller 3, led 88, offset 12712 */
	0x000431b4, /* Controller 4, led 88, offset 12724 */
	0x000531c0, /* Controller 5, led 88, offset 12736 */
	0x000631cc, /* Controller 6, led 88, offset 12748 */
	0x000731d8, /* Controller 7, led 88, offset 12760 */
	0x000831e4, /* Controller 8, led 88, offset 12772 */
	0x000931f0, /* Controller 9, led 88, offset 12784 */
	0x000a31fc, /* Controller 10, led 88, offset 12796 */
	0x000b3208, /* Controller 11, led 88, offset 12808 */
	0x00003214, /* Controller 0, led 89, offset 12820 */
	0x00013220, /* Controller 1, led 89, offset 12832 */
	0x0002322c, /* Controller 2, led 89, offset 12844 */
	0x00033238, /* Controller 3, led 89, offset 12856 */
	0x00043244, /* Controller 4, led 89, offset 12868 */
	0x00053250, /* Controller 5, led 89, offset 12880 */
	0x0006325c, /* Controller 6, led 89, offset 12892 */
	0x00073268, /* Controller 7, led 89, offset 12904 */
	0x00083274, /* Controller 8, led 89, offset 12916 */
	0x00093280, /* Controller 9, led 89, offset 12928 */
	0x000a328c, /* Controller 10, led 89, offset 12940 */
	0x000b3298, /* Controller 11, led 89, offset 12952 */
	0x000032a4, /* Controller 0, led 90, offset 12964 */
	0x000132b0, /* Controller 1, led 90, offset 12976 */
	0x000232bc, /* Controller 2, led 90, offset 12988 */
	0x000332c8, /* Controller 3, led 90, offset 13000 */
	0x000432d4, /* Controller 4, led 90, offset 13012 */
	0x000532e0, /* Controller 5, led 90, offset 13024 */
	0x000632ec, /* Controller 6, led 90, offset 13036 */
	0x000732f8, /* Controller 7, led 90, offset 13048 */
	0x00083304, /* Controller 8, led 90, offset 13060 */
	0x00093310, /* Controller 9, led 90, offset 13072 */
	0x000a331c, /* Controller 10, led 90, offset 13084 */
	0x000b3328, /* Controller 11, led 90, offset 13096 */
	0x00003334, /* Controller 0, led 91, offset 13108 */
	0x00013340, /* Controller 1, led 91, offset 13120 */
	0x0002334c, /* Controller 2, led 91, offset 13132 */
	0x00033358, /* Controller 3, led 91, offset 13144 */
	0x00043364, /* Controller 4, led 91, offset 13156 */
	0x00053370, /* Controller 5, led 91, offset 13168 */
	0x0006337c, /* Controller 6, led 91, offset 13180 */
	0x00073388, /* Controller 7, led 91, offset 13192 */
	0x00083394, /* Controller 8, led 91, offset 13204 */
	0x000933a0, /* Controller 9, led 91, offset 13216 */
	0x000a33ac, /* Controller 10, led 91, offset 13228 */
	0x000b33b8, /* Controller 11, led 91, offset 13240 */
	0x000033c4, /* Controller 0, led 92, offset 13252 */
	0x000133d0, /* Controller 1, led 92, offset 13264 */
	0x000233dc, /* Controller 2, led 92, offset 13276 */
	0x000333e8, /* Controller 3, led 92, offset 13288 */
	0x000433f4, /* Controller 4, led 92, offset 13300 */
	0x00053400, /* Controller 5, led 92, offset 13312 */
	0x0006340c, /* Controller 6, led 92, offset 13324 */
	0x00073418, /* Controller 7, led 92, offset 13336 */
	0x00083424, /* Controller 8, led 92, offset 13348 */
	0x00093430, /* Controller 9, led 92, offset 13360 */
	0x000a343c, /* Controller 10, led 92, offset 13372 */
	0x000b3448, /* Controller 11, led 92, offset 13384 */
	0x00003454, /* Controller 0, led 93, offset 13396 */
	0x00013460, /* Controller 1, led 93, offset 13408 */
	0x0002346c, /* Controller 2, led 93, offset 13420 */
	0x00033478, /* Controller 3, led 93, offset 13432 */
	0x00043484, /* Controller 4, led 93, offset 13444 */
	0x00053490, /* Controller 5, led 93, offset 13456 */
	0x0006349c, /* Controller 6, led 93, offset 13468 */
	0x000734a8, /* Controller 7, led 93, offset 13480 */
	0x000834b4, /* Controller 8, led 93, offset 13492 */
	0x000934c0, /* Controller 9, led 93, offset 13504 */
	0x000a34cc, /* Controller 10, led 93, offset 13516 */
	0x000b34d8, /* Controller 11, led 93, offset 13528 */
	0x000034e4, /* Controller 0, led 94, offset 13540 */
	0x000134f0, /* Controller 1, led 94, offset 13552 */
	0x000234fc, /* Controller 2, led 94, offset 13564 */
	0x00033508, /* Controller 3, led 94, offset 13576 */
	0x00043514, /* Controller 4, led 94, offset 13588 */
	0x00053520, /* Controller 5, led 94, offset 13600 */
	0x0006352c, /* Controller 6, led 94, offset 13612 */
	0x00073538, /* Controller 7, led 94, offset 13624 */
	0x00083544, /* Controller 8, led 94, offset 13636 */
	0x00093550, /* Controller 9, led 94, offset 13648 */
	0x000a355c, /* Controller 10, led 94, offset 13660 */
	0x000b3568, /* Controller 11, led 94, offset 13672 */
	0x00003574, /* Controller 0, led 95, offset 13684 */
	0x00013580, /* Controller 1, led 95, offset 13696 */
	0x0002358c, /* Controller 2, led 95, offset 13708 */
	0x00033598, /* Controller 3, led 95, offset 13720 */
	0x000435a4, /* Controller 4, led 95, offset 13732 */
	0x000535b0, /* Controller 5, led 95, offset 13744 */
	0x000635bc, /* Controller 6, led 95, offset 13756 */
	0x000735c8, /* Controller 7, led 95, offset 13768 */
	0x000835d4, /* Controller 8, led 95, offset 13780 */
	0x000935e0, /* Controller 9, led 95, offset 13792 */
	0x000a35ec, /* Controller 10, led 95, offset 13804 */
	0x000b35f8, /* Controller 11, led 95, offset 13816 */
	0x00003604, /* Controller 0, led 96, offset 13828 */
	0x00013610, /* Controller 1, led 96, offset 13840 */
	0x0002361c, /* Controller 2, led 96, offset 13852 */
	0x00033628, /* Controller 3, led 96, offset 13864 */
	0x00043634, /* Controller 4, led 96, offset 13876 */
	0x00053640, /* Controller 5, led 96, offset 13888 */
	0x0006364c, /* Controller 6, led 96, offset 13900 */
	0x00073658, /* Controller 7, led 96, offset 13912 */
	0x00083664, /* Controller 8, led 96, offset 13924 */
	0x00093670, /* Controller 9, led 96, offset 13936 */
	0x000a367c, /* Controller 10, led 96, offset 13948 */
	0x000b3688, /* Controller 11, led 96, offset 13960 */
	0x00003694, /* Controller 0, led 97, offset 13972 */
	0x000136a0, /* Controller 1, led 97, offset 13984 */
	0x000236ac, /* Controller 2, led 97, offset 13996 */
	0x000336b8, /* Controller 3, led 97, offset 14008 */
	0x000436c4, /* Controller 4, led 97, offset 14020 */
	0x000536d0, /* Controller 5, led 97, offset 14032 */
	0x000636dc, /* Controller 6, led 97, offset 14044 */
	0x000736e8, /* Controller 7, led 97, offset 14056 */
	0x000836f4, /* Controller 8, led 97, offset 14068 */
	0x00093700, /* Controller 9, led 97, offset 14080 */
	0x000a370c, /* Controller 10, led 97, offset 14092 */
	0x000b3718, /* Controller 11, led 97, offset 14104 */
	0x00003724, /* Controller 0, led 98, offset 14116 */
	0x00013730, /* Controller 1, led 98, offset 14128 */
	0x0002373c, /* Controller 2, led 98, offset 14140 */
	0x00033748, /* Controller 3, led 98, offset 14152 */
	0x00043754, /* Controller 4, led 98, offset 14164 */
	0x00053760, /* Controller 5, led 98, offset 14176 */
	0x0006376c, /* Controller 6, led 98, offset 14188 */
	0x00073778, /* Controller 7, led 98, offset 14200 */
	0x00083784, /* Controller 8, led 98, offset 14212 */
	0x00093790, /* Controller 9, led 98, offset 14224 */
	0x000a379c, /* Controller 10, led 98, offset 14236 */
	0x000b37a8, /* Controller 11, led 98, offset 14248 */
	0x000037b4, /* Controller 0, led 99, offset 14260 */
	0x000137c0, /* Controller 1, led 99, offset 14272 */
	0x000237cc, /* Controller 2, led 99, offset 14284 */
	0x000337d8, /* Controller 3, led 99, offset 14296 */
	0x000437e4, /* Controller 4, led 99, offset 14308 */
	0x000537f0, /* Controller 5, led 99, offset 14320 */
	0x000637fc, /* Controller 6, led 99, offset 14332 */
	0x00073808, /* Controller 7, led 99, offset 14344 */
	0x00083814, /* Controller 8, led 99, offset 14356 */
	0x00093820, /* Controller 9, led 99, offset 14368 */
	0x000a382c, /* Controller 10, led 99, offset 14380 */
	0x000b3838, /* Controller 11, led 99, offset 14392 */
	0x00003844, /* Controller 0, led 100, offset 14404 */
	0x00013850, /* Controller 1, led 100, offset 14416 */
	0x0002385c, /* Controller 2, led 100, offset 14428 */
	0x00033868, /* Controller 3, led 100, offset 14440 */
	0x00043874, /* Controller 4, led 100, offset 14452 */
	0x00053880, /* Controller 5, led 100, offset 14464 */
	0x0006388c, /* Controller 6, led 100, offset 14476 */
	0x00073898, /* Controller 7, led 100, offset 14488 */
	0x000838a4, /* Controller 8, led 100, offset 14500 */
	0x000938b0, /* Controller 9, led 100, offset 14512 */
	0x000a38bc, /* Controller 10, led 100, offset 14524 */
	0x000b38c8, /* Controller 11, led 100, offset 14536 */
	0x000038d4, /* Controller 0, led 101, offset 14548 */
	0x000138e0, /* Controller 1, led 101, offset 14560 */
	0x000238ec, /* Controller 2, led 101, offset 14572 */
	0x000338f8, /* Controller 3, led 101, offset 14584 */
	0x00043904, /* Controller 4, led 101, offset 14596 */
	0x00053910, /* Controller 5, led 101, offset 14608 */
	0x0006391c, /* Controller 6, led 101, offset 14620 */
	0x00073928, /* Controller 7, led 101, offset 14632 */
	0x00083934, /* Controller 8, led 101, offset 14644 */
	0x00093940, /* Controller 9, led 101, offset 14656 */
	0x000a394c, /* Controller 10, led 101, offset 14668 */
	0x000b3958, /* Controller 11, led 101, offset 14680 */
	0x00003964, /* Controller 0, led 102, offset 14692 */
	0x00013970, /* Controller 1, led 102, offset 14704 */
	0x0002397c, /* Controller 2, led 102, offset 14716 */
	0x00033988, /* Controller 3, led 102, offset 14728 */
	0x00043994, /* Controller 4, led 102, offset 14740 */
	0x000539a0, /* Controller 5, led 102, offset 14752 */
	0x000639ac, /* Controller 6, led 102, offset 14764 */
	0x000739b8, /* Controller 7, led 102, offset 14776 */
	0x000839c4, /* Controller 8, led 102, offset 14788 */
	0x000939d0, /* Controller 9, led 102, offset 14800 */
	0x000a39dc, /* Controller 10, led 102, offset 14812 */
	0x000b39e8, /* Controller 11, led 102, offset 14824 */
	0x000039f4, /* Controller 0, led 103, offset 14836 */
	0x00013a00, /* Controller 1, led 103, offset 14848 */
	0x00023a0c, /* Controller 2, led 103, offset 14860 */
	0x00033a18, /* Controller 3, led 103, offset 14872 */
	0x00043a24, /* Controller 4, led 103, offset 14884 */
	0x00053a30, /* Controller 5, led 103, offset 14896 */
	0x00063a3c, /* Controller 6, led 103, offset 14908 */
	0x00073a48, /* Controller 7, led 103, offset 14920 */
	0x00083a54, /* Controller 8, led 103, offset 14932 */
	0x00093a60, /* Controller 9, led 103, offset 14944 */
	0x000a3a6c, /* Controller 10, led 103, offset 14956 */
	0x000b3a78, /* Controller 11, led 103, offset 14968 */
	0x00003a84, /* Controller 0, led 104, offset 14980 */
	0x00013a90, /* Controller 1, led 104, offset 14992 */
	0x00023a9c, /* Controller 2, led 104, offset 15004 */
	0x00033aa8, /* Controller 3, led 104, offset 15016 */
	0x00043ab4, /* Controller 4, led 104, offset 15028 */
	0x00053ac0, /* Controller 5, led 104, offset 15040 */
	0x00063acc, /* Controller 6, led 104, offset 15052 */
	0x00073ad8, /* Controller 7, led 104, offset 15064 */
	0x00083ae4, /* Controller 8, led 104, offset 15076 */
	0x00093af0, /* Controller 9, led 104, offset 15088 */
	0x000a3afc, /* Controller 10, led 104, offset 15100 */
	0x000b3b08, /* Controller 11, led 104, offset 15112 */
	0x00003b14, /* Controller 0, led 105, offset 15124 */
	0x00013b20, /* Controller 1, led 105, offset 15136 */
	0x00023b2c, /* Controller 2, led 105, offset 15148 */
	0x00033b38, /* Controller 3, led 105, offset 15160 */
	0x00043b44, /* Controller 4, led 105, offset 15172 */
	0x00053b50, /* Controller 5, led 105, offset 15184 */
	0x00063b5c, /* Controller 6, led 105, offset 15196 */
	0x00073b68, /* Controller 7, led 105, offset 15208 */
	0x00083b74, /* Controller 8, led 105, offset 15220 */
	0x00093b80, /* Controller 9, led 105, offset 15232 */
	0x000a3b8c, /* Controller 10, led 105, offset 15244 */
	0x000b3b98, /* Controller 11, led 105, offset 15256 */
	0x00003ba4, /* Controller 0, led 106, offset 15268 */
	0x00013bb0, /* Controller 1, led 106, offset 15280 */
	0x00023bbc, /* Controller 2, led 106, offset 15292 */
	0x00033bc8, /* Controller 3, led 106, offset 15304 */
	0x00043bd4, /* Controller 4, led 106, offset 15316 */
	0x00053be0, /* Controller 5, led 106, offset 15328 */
	0x00063bec, /* Controller 6, led 106, offset 15340 */
	0x00073bf8, /* Controller 7, led 106, offset 15352 */
	0x00083c04, /* Controller 8, led 106, offset 15364 */
	0x00093c10, /* Controller 9, led 106, offset 15376 */
	0x000a3c1c, /* Controller 10, led 106, offset 15388 */
	0x000b3c28, /* Controller 11, led 106, offset 15400 */
	0x00003c34, /* Controller 0, led 107, offset 15412 */
	0x00013c40, /* Controller 1, led 107, offset 15424 */
	0x00023c4c, /* Controller 2, led 107, offset 15436 */
	0x00033c58, /* Controller 3, led 107, offset 15448 */
	0x00043c64, /* Controller 4, led 107, offset 15460 */
	0x00053c70, /* Controller 5, led 107, offset 15472 */
	0x00063c7c, /* Controller 6, led 107, offset 15484 */
	0x00073c88, /* Controller 7, led 107, offset 15496 */
	0x00083c94, /* Controller 8, led 107, offset 15508 */
	0x00093ca0, /* Controller 9, led 107, offset 15520 */
	0x000a3cac, /* Controller 10, led 107, offset 15532 */
	0x000b3cb8, /* Controller 11, led 107, offset 15544 */
	0x00003cc4, /* Controller 0, led 108, offset 15556 */
	0x00013cd0, /* Controller 1, led 108, offset 15568 */
	0x00023cdc, /* Controller 2, led 108, offset 15580 */
	0x00033ce8, /* Controller 3, led 108, offset 15592 */
	0x00043cf4, /* Controller 4, led 108, offset 15604 */
	0x00053d00, /* Controller 5, led 108, offset 15616 */
	0x00063d0c, /* Controller 6, led 108, offset 15628 */
	0x00073d18, /* Controller 7, led 108, offset 15640 */
	0x00083d24, /* Controller 8, led 108, offset 15652 */
	0x00093d30, /* Controller 9, led 108, offset 15664 */
	0x000a3d3c, /* Controller 10, led 108, offset 15676 */
	0x000b3d48, /* Controller 11, led 108, offset 15688 */
	0x00003d54, /* Controller 0, led 109, offset 15700 */
	0x00013d60, /* Controller 1, led 109, offset 15712 */
	0x00023d6c, /* Controller 2, led 109, offset 15724 */
	0x00033d78, /* Controller 3, led 109, offset 15736 */
	0x00043d84, /* Controller 4, led 109, offset 15748 */
	0x00053d90, /* Controller 5, led 109, offset 15760 */
	0x00063d9c, /* Controller 6, led 109, offset 15772 */
	0x00073da8, /* Controller 7, led 109, offset 15784 */
	0x00083db4, /* Controller 8, led 109, offset 15796 */
	0x00093dc0, /* Controller 9, led 109, offset 15808 */
	0x000a3dcc, /* Controller 10, led 109, offset 15820 */
	0x000b3dd8, /* Controller 11, led 109, offset 15832 */
	0x00003de4, /* Controller 0, led 110, offset 15844 */
	0x00013df0, /* Controller 1, led 110, offset 15856 */
	0x00023dfc, /* Controller 2, led 110, offset 15868 */
	0x00033e08, /* Controller 3, led 110, offset 15880 */
	0x00043e14, /* Controller 4, led 110, offset 15892 */
	0x00053e20, /* Controller 5, led 110, offset 15904 */
	0x00063e2c, /* Controller 6, led 110, offset 15916 */
	0x00073e38, /* Controller 7, led 110, offset 15928 */
	0x00083e44, /* Controller 8, led 110, offset 15940 */
	0x00093e50, /* Controller 9, led 110, offset 15952 */
	0x000a3e5c, /* Controller 10, led 110, offset 15964 */
	0x000b3e68, /* Controller 11, led 110, offset 15976 */
	0x00003e74, /* Controller 0, led 111, offset 15988 */
	0x00013e80, /* Controller 1, led 111, offset 16000 */
	0x00023e8c, /* Controller 2, led 111, offset 16012 */
	0x00033e98, /* Controller 3, led 111, offset 16024 */
	0x00043ea4, /* Controller 4, led 111, offset 16036 */
	0x00053eb0, /* Controller 5, led 111, offset 16048 */
	0x00063ebc, /* Controller 6, led 111, offset 16060 */
	0x00073ec8, /* Controller 7, led 111, offset 16072 */
	0x00083ed4, /* Controller 8, led 111, offset 16084 */
	0x00093ee0, /* Controller 9, led 111, offset 16096 */
	0x000a3eec, /* Controller 10, led 111, offset 16108 */
	0x000b3ef8, /* Controller 11, led 111, offset 16120 */
	0x00003f04, /* Controller 0, led 112, offset 16132 */
	0x00013f10, /* Controller 1, led 112, offset 16144 */
	0x00023f1c, /* Controller 2, led 112, offset 16156 */
	0x00033f28, /* Controller 3, led 112, offset 16168 */
	0x00043f34, /* Controller 4, led 112, offset 16180 */
	0x00053f40, /* Controller 5, led 112, offset 16192 */
	0x00063f4c, /* Controller 6, led 112, offset 16204 */
	0x00073f58, /* Controller 7, led 112, offset 16216 */
	0x00083f64, /* Controller 8, led 112, offset 16228 */
	0x00093f70, /* Controller 9, led 112, offset 16240 */
	0x000a3f7c, /* Controller 10, led 112, offset 16252 */
	0x000b3f88, /* Controller 11, led 112, offset 16264 */
	0x00003f94, /* Controller 0, led 113, offset 16276 */
	0x00013fa0, /* Controller 1, led 113, offset 16288 */
	0x00023fac, /* Controller 2, led 113, offset 16300 */
	0x00033fb8, /* Controller 3, led 113, offset 16312 */
	0x00043fc4, /* Controller 4, led 113, offset 16324 */
	0x00053fd0, /* Controller 5, led 113, offset 16336 */
	0x00063fdc, /* Controller 6, led 113, offset 16348 */
	0x00073fe8, /* Controller 7, led 113, offset 16360 */
	0x00083ff4, /* Controller 8, led 113, offset 16372 */
	0x00094000, /* Controller 9, led 113, offset 16384 */
	0x000a400c, /* Controller 10, led 113, offset 16396 */
	0x000b4018, /* Controller 11, led 113, offset 16408 */
	0x00004024, /* Controller 0, led 114, offset 16420 */
	0x00014030, /* Controller 1, led 114, offset 16432 */
	0x0002403c, /* Controller 2, led 114, offset 16444 */
	0x00034048, /* Controller 3, led 114, offset 16456 */
	0x00044054, /* Controller 4, led 114, offset 16468 */
	0x00054060, /* Controller 5, led 114, offset 16480 */
	0x0006406c, /* Controller 6, led 114, offset 16492 */
	0x00074078, /* Controller 7, led 114, offset 16504 */
	0x00084084, /* Controller 8, led 114, offset 16516 */
	0x00094090, /* Controller 9, led 114, offset 16528 */
	0x000a409c, /* Controller 10, led 114, offset 16540 */
	0x000b40a8, /* Controller 11, led 114, offset 16552 */
	0x000040b4, /* Controller 0, led 115, offset 16564 */
	0x000140c0, /* Controller 1, led 115, offset 16576 */
	0x000240cc, /* Controller 2, led 115, offset 16588 */
	0x000340d8, /* Controller 3, led 115, offset 16600 */
	0x000440e4, /* Controller 4, led 115, offset 16612 */
	0x000540f0, /* Controller 5, led 115, offset 16624 */
	0x000640fc, /* Controller 6, led 115, offset 16636 */
	0x00074108, /* Controller 7, led 115, offset 16648 */
	0x00084114, /* Controller 8, led 115, offset 16660 */
	0x00094120, /* Controller 9, led 115, offset 16672 */
	0x000a412c, /* Controller 10, led 115, offset 16684 */
	0x000b4138, /* Controller 11, led 115, offset 16696 */
	0x00004144, /* Controller 0, led 116, offset 16708 */
	0x00014150, /* Controller 1, led 116, offset 16720 */
	0x0002415c, /* Controller 2, led 116, offset 16732 */
	0x00034168, /* Controller 3, led 116, offset 16744 */
	0x00044174, /* Controller 4, led 116, offset 16756 */
	0x00054180, /* Controller 5, led 116, offset 16768 */
	0x0006418c, /* Controller 6, led 116, offset 16780 */
	0x00074198, /* Controller 7, led 116, offset 16792 */
	0x000841a4, /* Controller 8, led 116, offset 16804 */
	0x000941b0, /* Controller 9, led 116, offset 16816 */
	0x000a41bc, /* Controller 10, led 116, offset 16828 */
	0x000b41c8, /* Controller 11, led 116, offset 16840 */
	0x000041d4, /* Controller 0, led 117, offset 16852 */
	0x000141e0, /* Controller 1, led 117, offset 16864 */
	0x000241ec, /* Controller 2, led 117, offset 16876 */
	0x000341f8, /* Controller 3, led 117, offset 16888 */
	0x00044204, /* Controller 4, led 117, offset 16900 */
	0x00054210, /* Controller 5, led 117, offset 16912 */
	0x0006421c, /* Controller 6, led 117, offset 16924 */
	0x00074228, /* Controller 7, led 117, offset 16936 */
	0x00084234, /* Controller 8, led 117, offset 16948 */
	0x00094240, /* Controller 9, led 117, offset 16960 */
	0x000a424c, /* Controller 10, led 117, offset 16972 */
	0x000b4258, /* Controller 11, led 117, offset 16984 */
	0x00004264, /* Controller 0, led 118, offset 16996 */
	0x00014270, /* Controller 1, led 118, offset 17008 */
	0x0002427c, /* Controller 2, led 118, offset 17020 */
	0x00034288, /* Controller 3, led 118, offset 17032 */
	0x00044294, /* Controller 4, led 118, offset 17044 */
	0x000542a0, /* Controller 5, led 118, offset 17056 */
	0x000642ac, /* Controller 6, led 118, offset 17068 */
	0x000742b8, /* Controller 7, led 118, offset 17080 */
	0x000842c4, /* Controller 8, led 118, offset 17092 */
	0x000942d0, /* Controller 9, led 118, offset 17104 */
	0x000a42dc, /* Controller 10, led 118, offset 17116 */
	0x000b42e8, /* Controller 11, led 118, offset 17128 */
	0x000042f4, /* Controller 0, led 119, offset 17140 */
	0x00014300, /* Controller 1, led 119, offset 17152 */
	0x0002430c, /* Controller 2, led 119, offset 17164 */
	0x00034318, /* Controller 3, led 119, offset 17176 */
	0x00044324, /* Controller 4, led 119, offset 17188 */
	0x00054330, /* Controller 5, led 119, offset 17200 */
	0x0006433c, /* Controller 6, led 119, offset 17212 */
	0x00074348, /* Controller 7, led 119, offset 17224 */
	0x00084354, /* Controller 8, led 119, offset 17236 */
	0x00094360, /* Controller 9, led 119, offset 17248 */
	0x000a436c, /* Controller 10, led 119, offset 17260 */
	0x000b4378, /* Controller 11, led 119, offset 17272 */
	0x00004384, /* Controller 0, led 120, offset 17284 */
	0x00014390, /* Controller 1, led 120, offset 17296 */
	0x0002439c, /* Controller 2, led 120, offset 17308 */
	0x000343a8, /* Controller 3, led 120, offset 17320 */
	0x000443b4, /* Controller 4, led 120, offset 17332 */
	0x000543c0, /* Controller 5, led 120, offset 17344 */
	0x000643cc, /* Controller 6, led 120, offset 17356 */
	0x000743d8, /* Controller 7, led 120, offset 17368 */
	0x000843e4, /* Controller 8, led 120, offset 17380 */
	0x000943f0, /* Controller 9, led 120, offset 17392 */
	0x000a43fc, /* Controller 10, led 120, offset 17404 */
	0x000b4408, /* Controller 11, led 120, offset 17416 */
	0x00004414, /* Controller 0, led 121, offset 17428 */
	0x00014420, /* Controller 1, led 121, offset 17440 */
	0x0002442c, /* Controller 2, led 121, offset 17452 */
	0x00034438, /* Controller 3, led 121, offset 17464 */
	0x00044444, /* Controller 4, led 121, offset 17476 */
	0x00054450, /* Controller 5, led 121, offset 17488 */
	0x0006445c, /* Controller 6, led 121, offset 17500 */
	0x00074468, /* Controller 7, led 121, offset 17512 */
	0x00084474, /* Controller 8, led 121, offset 17524 */
	0x00094480, /* Controller 9, led 121, offset 17536 */
	0x000a448c, /* Controller 10, led 121, offset 17548 */
	0x000b4498, /* Controller 11, led 121, offset 17560 */
	0x000044a4, /* Controller 0, led 122, offset 17572 */
	0x000144b0, /* Controller 1, led 122, offset 17584 */
	0x000244bc, /* Controller 2, led 122, offset 17596 */
	0x000344c8, /* Controller 3, led 122, offset 17608 */
	0x000444d4, /* Controller 4, led 122, offset 17620 */
	0x000544e0, /* Controller 5, led 122, offset 17632 */
	0x000644ec, /* Controller 6, led 122, offset 17644 */
	0x000744f8, /* Controller 7, led 122, offset 17656 */
	0x00084504, /* Controller 8, led 122, offset 17668 */
	0x00094510, /* Controller 9, led 122, offset 17680 */
	0x000a451c, /* Controller 10, led 122, offset 17692 */
	0x000b4528, /* Controller 11, led 122, offset 17704 */
	0x00004534, /* Controller 0, led 123, offset 17716 */
	0x00014540, /* Controller 1, led 123, offset 17728 */
	0x0002454c, /* Controller 2, led 123, offset 17740 */
	0x00034558, /* Controller 3, led 123, offset 17752 */
	0x00044564, /* Controller 4, led 123, offset 17764 */
	0x00054570, /* Controller 5, led 123, offset 17776 */
	0x0006457c, /* Controller 6, led 123, offset 17788 */
	0x00074588, /* Controller 7, led 123, offset 17800 */
	0x00084594, /* Controller 8, led 123, offset 17812 */
	0x000945a0, /* Controller 9, led 123, offset 17824 */
	0x000a45ac, /* Controller 10, led 123, offset 17836 */
	0x000b45b8, /* Controller 11, led 123, offset 17848 */
	0x000045c4, /* Controller 0, led 124, offset 17860 */
	0x000145d0, /* Controller 1, led 124, offset 17872 */
	0x000245dc, /* Controller 2, led 124, offset 17884 */
	0x000345e8, /* Controller 3, led 124, offset 17896 */
	0x000445f4, /* Controller 4, led 124, offset 17908 */
	0x00054600, /* Controller 5, led 124, offset 17920 */
	0x0006460c, /* Controller 6, led 124, offset 17932 */
	0x00074618, /* Controller 7, led 124, offset 17944 */
	0x00084624, /* Controller 8, led 124, offset 17956 */
	0x00094630, /* Controller 9, led 124, offset 17968 */
	0x000a463c, /* Controller 10, led 124, offset 17980 */
	0x000b4648, /* Controller 11, led 124, offset 17992 */
	0x00004654, /* Controller 0, led 125, offset 18004 */
	0x00014660, /* Controller 1, led 125, offset 18016 */
	0x0002466c, /* Controller 2, led 125, offset 18028 */
	0x00034678, /* Controller 3, led 125, offset 18040 */
	0x00044684, /* Controller 4, led 125, offset 18052 */
	0x00054690, /* Controller 5, led 125, offset 18064 */
	0x0006469c, /* Controller 6, led 125, offset 18076 */
	0x000746a8, /* Controller 7, led 125, offset 18088 */
	0x000846b4, /* Controller 8, led 125, offset 18100 */
	0x000946c0, /* Controller 9, led 125, offset 18112 */
	0x000a46cc, /* Controller 10, led 125, offset 18124 */
	0x000b46d8, /* Controller 11, led 125, offset 18136 */
	0x000046e4, /* Controller 0, led 126, offset 18148 */
	0x000146f0, /* Controller 1, led 126, offset 18160 */
	0x000246fc, /* Controller 2, led 126, offset 18172 */
	0x00034708, /* Controller 3, led 126, offset 18184 */
	0x00044714, /* Controller 4, led 126, offset 18196 */
	0x00054720, /* Controller 5, led 126, offset 18208 */
	0x0006472c, /* Controller 6, led 126, offset 18220 */
	0x00074738, /* Controller 7, led 126, offset 18232 */
	0x00084744, /* Controller 8, led 126, offset 18244 */
	0x00094750, /* Controller 9, led 126, offset 18256 */
	0x000a475c, /* Controller 10, led 126, offset 18268 */
	0x000b4768, /* Controller 11, led 126, offset 18280 */
	0x00004774, /* Controller 0, led 127, offset 18292 */
	0x00014780, /* Controller 1, led 127, offset 18304 */
	0x0002478c, /* Controller 2, led 127, offset 18316 */
	0x00034798, /* Controller 3, led 127, offset 18328 */
	0x000447a4, /* Controller 4, led 127, offset 18340 */
	0x000547b0, /* Controller 5, led 127, offset 18352 */
	0x000647bc, /* Controller 6, led 127, offset 18364 */
	0x000747c8, /* Controller 7, led 127, offset 18376 */
	0x000847d4, /* Controller 8, led 127, offset 18388 */
	0x000947e0, /* Controller 9, led 127, offset 18400 */
	0x000a47ec, /* Controller 10, led 127, offset 18412 */
	0x000b47f8, /* Controller 11, led 127, offset 18424 */
	0x00000008, /* Controller 0, led 128, offset 8 */
	0x00010014, /* Controller 1, led 128, offset 20 */
	0x00020020, /* Controller 2, led 128, offset 32 */
	0x0003002c, /* Controller 3, led 128, offset 44 */
	0x00040038, /* Controller 4, led 128, offset 56 */
	0x00050044, /* Controller 5, led 128, offset 68 */
	0x00060050, /* Controller 6, led 128, offset 80 */
	0x0007005c, /* Controller 7, led 128, offset 92 */
	0x00080068, /* Controller 8, led 128, offset 104 */
	0x00090074, /* Controller 9, led 128, offset 116 */
	0x000a0080, /* Controller 10, led 128, offset 128 */
	0x000b008c, /* Controller 11, led 128, offset 140 */
	0x00000098, /* Controller 0, led 129, offset 152 */
	0x000100a4, /* Controller 1, led 129, offset 164 */
	0x000200b0, /* Controller 2, led 129, offset 176 */
	0x000300bc, /* Controller 3, led 129, offset 188 */
	0x000400c8, /* Controller 4, led 129, offset 200 */
	0x000500d4, /* Controller 5, led 129, offset 212 */
	0x000600e0, /* Controller 6, led 129, offset 224 */
	0x000700ec, /* Controller 7, led 129, offset 236 */
	0x000800f8, /* Controller 8, led 129, offset 248 */
	0x00090104, /* Controller 9, led 129, offset 260 */
	0x000a0110, /* Controller 10, led 129, offset 272 */
	0x000b011c, /* Controller 11, led 129, offset 284 */
	0x00000128, /* Controller 0, led 130, offset 296 */
	0x00010134, /* Controller 1, led 130, offset 308 */
	0x00020140, /* Controller 2, led 130, offset 320 */
	0x0003014c, /* Controller 3, led 130, offset 332 */
	0x00040158, /* Controller 4, led 130, offset 344 */
	0x00050164, /* Controller 5, led 130, offset 356 */
	0x00060170, /* Controller 6, led 130, offset 368 */
	0x0007017c, /* Controller 7, led 130, offset 380 */
	0x00080188, /* Controller 8, led 130, offset 392 */
	0x00090194, /* Controller 9, led 130, offset 404 */
	0x000a01a0, /* Controller 10, led 130, offset 416 */
	0x000b01ac, /* Controller 11, led 130, offset 428 */
	0x000001b8, /* Controller 0, led 131, offset 440 */
	0x000101c4, /* Controller 1, led 131, offset 452 */
	0x000201d0, /* Controller 2, led 131, offset 464 */
	0x000301dc, /* Controller 3, led 131, offset 476 */
	0x000401e8, /* Controller 4, led 131, offset 488 */
	0x000501f4, /* Controller 5, led 131, offset 500 */
	0x00060200, /* Controller 6, led 131, offset 512 */
	0x0007020c, /* Controller 7, led 131, offset 524 */
	0x00080218, /* Controller 8, led 131, offset 536 */
	0x00090224, /* Controller 9, led 131, offset 548 */
	0x000a0230, /* Controller 10, led 131, offset 560 */
	0x000b023c, /* Controller 11, led 131, offset 572 */
	0x00000248, /* Controller 0, led 132, offset 584 */
	0x00010254, /* Controller 1, led 132, offset 596 */
	0x00020260, /* Controller 2, led 132, offset 608 */
	0x0003026c, /* Controller 3, led 132, offset 620 */
	0x00040278, /* Controller 4, led 132, offset 632 */
	0x00050284, /* Controller 5, led 132, offset 644 */
	0x00060290, /* Controller 6, led 132, offset 656 */
	0x0007029c, /* Controller 7, led 132, offset 668 */
	0x000802a8, /* Controller 8, led 132, offset 680 */
	0x000902b4, /* Controller 9, led 132, offset 692 */
	0x000a02c0, /* Controller 10, led 132, offset 704 */
	0x000b02cc, /* Controller 11, led 132, offset 716 */
	0x000002d8, /* Controller 0, led 133, offset 728 */
	0x000102e4, /* Controller 1, led 133, offset 740 */
	0x000202f0, /* Controller 2, led 133, offset 752 */
	0x000302fc, /* Controller 3, led 133, offset 764 */
	0x00040308, /* Controller 4, led 133, offset 776 */
	0x00050314, /* Controller 5, led 133, offset 788 */
	0x00060320, /* Controller 6, led 133, offset 800 */
	0x0007032c, /* Controller 7, led 133, offset 812 */
	0x00080338, /* Controller 8, led 133, offset 824 */
	0x00090344, /* Controller 9, led 133, offset 836 */
	0x000a0350, /* Controller 10, led 133, offset 848 */
	0x000b035c, /* Controller 11, led 133, offset 860 */
	0x00000368, /* Controller 0, led 134, offset 872 */
	0x00010374, /* Controller 1, led 134, offset 884 */
	0x00020380, /* Controller 2, led 134, offset 896 */
	0x0003038c, /* Controller 3, led 134, offset 908 */
	0x00040398, /* Controller 4, led 134, offset 920 */
	0x000503a4, /* Controller 5, led 134, offset 932 */
	0x000603b0, /* Controller 6, led 134, offset 944 */
	0x000703bc, /* Controller 7, led 134, offset 956 */
	0x000803c8, /* Controller 8, led 134, offset 968 */
	0x000903d4, /* Controller 9, led 134, offset 980 */
	0x000a03e0, /* Controller 10, led 134, offset 992 */
	0x000b03ec, /* Controller 11, led 134, offset 1004 */
	0x000003f8, /* Controller 0, led 135, offset 1016 */
	0x00010404, /* Controller 1, led 135, offset 1028 */
	0x00020410, /* Controller 2, led 135, offset 1040 */
	0x0003041c, /* Controller 3, led 135, offset 1052 */
	0x00040428, /* Controller 4, led 135, offset 1064 */
	0x00050434, /* Controller 5, led 135, offset 1076 */
	0x00060440, /* Controller 6, led 135, offset 1088 */
	0x0007044c, /* Controller 7, led 135, offset 1100 */
	0x00080458, /* Controller 8, led 135, offset 1112 */
	0x00090464, /* Controller 9, led 135, offset 1124 */
	0x000a0470, /* Controller 10, led 135, offset 1136 */
	0x000b047c, /* Controller 11, led 135, offset 1148 */
	0x00000488, /* Controller 0, led 136, offset 1160 */
	0x00010494, /* Controller 1, led 136, offset 1172 */
	0x000204a0, /* Controller 2, led 136, offset 1184 */
	0x000304ac, /* Controller 3, led 136, offset 1196 */
	0x000404b8, /* Controller 4, led 136, offset 1208 */
	0x000504c4, /* Controller 5, led 136, offset 1220 */
	0x000604d0, /* Controller 6, led 136, offset 1232 */
	0x000704dc, /* Controller 7, led 136, offset 1244 */
	0x000804e8, /* Controller 8, led 136, offset 1256 */
	0x000904f4, /* Controller 9, led 136, offset 1268 */
	0x000a0500, /* Controller 10, led 136, offset 1280 */
	0x000b050c, /* Controller 11, led 136, offset 1292 */
	0x00000518, /* Controller 0, led 137, offset 1304 */
	0x00010524, /* Controller 1, led 137, offset 1316 */
	0x00020530, /* Controller 2, led 137, offset 1328 */
	0x0003053c, /* Controller 3, led 137, offset 1340 */
	0x00040548, /* Controller 4, led 137, offset 1352 */
	0x00050554, /* Controller 5, led 137, offset 1364 */
	0x00060560, /* Controller 6, led 137, offset 1376 */
	0x0007056c, /* Controller 7, led 137, offset 1388 */
	0x00080578, /* Controller 8, led 137, offset 1400 */
	0x00090584, /* Controller 9, led 137, offset 1412 */
	0x000a0590, /* Controller 10, led 137, offset 1424 */
	0x000b059c, /* Controller 11, led 137, offset 1436 */
	0x000005a8, /* Controller 0, led 138, offset 1448 */
	0x000105b4, /* Controller 1, led 138, offset 1460 */
	0x000205c0, /* Controller 2, led 138, offset 1472 */
	0x000305cc, /* Controller 3, led 138, offset 1484 */
	0x000405d8, /* Controller 4, led 138, offset 1496 */
	0x000505e4, /* Controller 5, led 138, offset 1508 */
	0x000605f0, /* Controller 6, led 138, offset 1520 */
	0x000705fc, /* Controller 7, led 138, offset 1532 */
	0x00080608, /* Controller 8, led 138, offset 1544 */
	0x00090614, /* Controller 9, led 138, offset 1556 */
	0x000a0620, /* Controller 10, led 138, offset 1568 */
	0x000b062c, /* Controller 11, led 138, offset 1580 */
	0x00000638, /* Controller 0, led 139, offset 1592 */
	0x00010644, /* Controller 1, led 139, offset 1604 */
	0x00020650, /* Controller 2, led 139, offset 1616 */
	0x0003065c, /* Controller 3, led 139, offset 1628 */
	0x00040668, /* Controller 4, led 139, offset 1640 */
	0x00050674, /* Controller 5, led 139, offset 1652 */
	0x00060680, /* Controller 6, led 139, offset 1664 */
	0x0007068c, /* Controller 7, led 139, offset 1676 */
	0x00080698, /* Controller 8, led 139, offset 1688 */
	0x000906a4, /* Controller 9, led 139, offset 1700 */
	0x000a06b0, /* Controller 10, led 139, offset 1712 */
	0x000b06bc, /* Controller 11, led 139, offset 1724 */
	0x000006c8, /* Controller 0, led 140, offset 1736 */
	0x000106d4, /* Controller 1, led 140, offset 1748 */
	0x000206e0, /* Controller 2, led 140, offset 1760 */
	0x000306ec, /* Controller 3, led 140, offset 1772 */
	0x000406f8, /* Controller 4, led 140, offset 1784 */
	0x00050704, /* Controller 5, led 140, offset 1796 */
	0x00060710, /* Controller 6, led 140, offset 1808 */
	0x0007071c, /* Controller 7, led 140, offset 1820 */
	0x00080728, /* Controller 8, led 140, offset 1832 */
	0x00090734, /* Controller 9, led 140, offset 1844 */
	0x000a0740, /* Controller 10, led 140, offset 1856 */
	0x000b074c, /* Controller 11, led 140, offset 1868 */
	0x00000758, /* Controller 0, led 141, offset 1880 */
	0x00010764, /* Controller 1, led 141, offset 1892 */
	0x00020770, /* Controller 2, led 141, offset 1904 */
	0x0003077c, /* Controller 3, led 141, offset 1916 */
	0x00040788, /* Controller 4, led 141, offset 1928 */
	0x00050794, /* Controller 5, led 141, offset 1940 */
	0x000607a0, /* Controller 6, led 141, offset 1952 */
	0x000707ac, /* Controller 7, led 141, offset 1964 */
	0x000807b8, /* Controller 8, led 141, offset 1976 */
	0x000907c4, /* Controller 9, led 141, offset 1988 */
	0x000a07d0, /* Controller 10, led 141, offset 2000 */
	0x000b07dc, /* Controller 11, led 141, offset 2012 */
	0x000007e8, /* Controller 0, led 142, offset 2024 */
	0x000107f4, /* Controller 1, led 142, offset 2036 */
	0x00020800, /* Controller 2, led 142, offset 2048 */
	0x0003080c, /* Controller 3, led 142, offset 2060 */
	0x00040818, /* Controller 4, led 142, offset 2072 */
	0x00050824, /* Controller 5, led 142, offset 2084 */
	0x00060830, /* Controller 6, led 142, offset 2096 */
	0x0007083c, /* Controller 7, led 142, offset 2108 */
	0x00080848, /* Controller 8, led 142, offset 2120 */
	0x00090854, /* Controller 9, led 142, offset 2132 */
	0x000a0860, /* Controller 10, led 142, offset 2144 */
	0x000b086c, /* Controller 11, led 142, offset 2156 */
	0x00000878, /* Controller 0, led 143, offset 2168 */
	0x00010884, /* Controller 1, led 143, offset 2180 */
	0x00020890, /* Controller 2, led 143, offset 2192 */
	0x0003089c, /* Controller 3, led 143, offset 2204 */
	0x000408a8, /* Controller 4, led 143, offset 2216 */
	0x000508b4, /* Controller 5, led 143, offset 2228 */
	0x000608c0, /* Controller 6, led 143, offset 2240 */
	0x000708cc, /* Controller 7, led 143, offset 2252 */
	0x000808d8, /* Controller 8, led 143, offset 2264 */
	0x000908e4, /* Controller 9, led 143, offset 2276 */
	0x000a08f0, /* Controller 10, led 143, offset 2288 */
	0x000b08fc, /* Controller 11, led 143, offset 2300 */
	0x00000908, /* Controller 0, led 144, offset 2312 */
	0x00010914, /* Controller 1, led 144, offset 2324 */
	0x00020920, /* Controller 2, led 144, offset 2336 */
	0x0003092c, /* Controller 3, led 144, offset 2348 */
	0x00040938, /* Controller 4, led 144, offset 2360 */
	0x00050944, /* Controller 5, led 144, offset 2372 */
	0x00060950, /* Controller 6, led 144, offset 2384 */
	0x0007095c, /* Controller 7, led 144, offset 2396 */
	0x00080968, /* Controller 8, led 144, offset 2408 */
	0x00090974, /* Controller 9, led 144, offset 2420 */
	0x000a0980, /* Controller 10, led 144, offset 2432 */
	0x000b098c, /* Controller 11, led 144, offset 2444 */
	0x00000998, /* Controller 0, led 145, offset 2456 */
	0x000109a4, /* Controller 1, led 145, offset 2468 */
	0x000209b0, /* Controller 2, led 145, offset 2480 */
	0x000309bc, /* Controller 3, led 145, offset 2492 */
	0x000409c8, /* Controller 4, led 145, offset 2504 */
	0x000509d4, /* Controller 5, led 145, offset 2516 */
	0x000609e0, /* Controller 6, led 145, offset 2528 */
	0x000709ec, /* Controller 7, led 145, offset 2540 */
	0x000809f8, /* Controller 8, led 145, offset 2552 */
	0x00090a04, /* Controller 9, led 145, offset 2564 */
	0x000a0a10, /* Controller 10, led 145, offset 2576 */
	0x000b0a1c, /* Controller 11, led 145, offset 2588 */
	0x00000a28, /* Controller 0, led 146, offset 2600 */
	0x00010a34, /* Controller 1, led 146, offset 2612 */
	0x00020a40, /* Controller 2, led 146, offset 2624 */
	0x00030a4c, /* Controller 3, led 146, offset 2636 */
	0x00040a58, /* Controller 4, led 146, offset 2648 */
	0x00050a64, /* Controller 5, led 146, offset 2660 */
	0x00060a70, /* Controller 6, led 146, offset 2672 */
	0x00070a7c, /* Controller 7, led 146, offset 2684 */
	0x00080a88, /* Controller 8, led 146, offset 2696 */
	0x00090a94, /* Controller 9, led 146, offset 2708 */
	0x000a0aa0, /* Controller 10, led 146, offset 2720 */
	0x000b0aac, /* Controller 11, led 146, offset 2732 */
	0x00000ab8, /* Controller 0, led 147, offset 2744 */
	0x00010ac4, /* Controller 1, led 147, offset 2756 */
	0x00020ad0, /* Controller 2, led 147, offset 2768 */
	0x00030adc, /* Controller 3, led 147, offset 2780 */
	0x00040ae8, /* Controller 4, led 147, offset 2792 */
	0x00050af4, /* Controller 5, led 147, offset 2804 */
	0x00060b00, /* Controller 6, led 147, offset 2816 */
	0x00070b0c, /* Controller 7, led 147, offset 2828 */
	0x00080b18, /* Controller 8, led 147, offset 2840 */
	0x00090b24, /* Controller 9, led 147, offset 2852 */
	0x000a0b30, /* Controller 10, led 147, offset 2864 */
	0x000b0b3c, /* Controller 11, led 147, offset 2876 */
	0x00000b48, /* Controller 0, led 148, offset 2888 */
	0x00010b54, /* Controller 1, led 148, offset 2900 */
	0x00020b60, /* Controller 2, led 148, offset 2912 */
	0x00030b6c, /* Controller 3, led 148, offset 2924 */
	0x00040b78, /* Controller 4, led 148, offset 2936 */
	0x00050b84, /* Controller 5, led 148, offset 2948 */
	0x00060b90, /* Controller 6, led 148, offset 2960 */
	0x00070b9c, /* Controller 7, led 148, offset 2972 */
	0x00080ba8, /* Controller 8, led 148, offset 2984 */
	0x00090bb4, /* Controller 9, led 148, offset 2996 */
	0x000a0bc0, /* Controller 10, led 148, offset 3008 */
	0x000b0bcc, /* Controller 11, led 148, offset 3020 */
	0x00000bd8, /* Controller 0, led 149, offset 3032 */
	0x00010be4, /* Controller 1, led 149, offset 3044 */
	0x00020bf0, /* Controller 2, led 149, offset 3056 */
	0x00030bfc, /* Controller 3, led 149, offset 3068 */
	0x00040c08, /* Controller 4, led 149, offset 3080 */
	0x00050c14, /* Controller 5, led 149, offset 3092 */
	0x00060c20, /* Controller 6, led 149, offset 3104 */
	0x00070c2c, /* Controller 7, led 149, offset 3116 */
	0x00080c38, /* Controller 8, led 149, offset 3128 */
	0x00090c44, /* Controller 9, led 149, offset 3140 */
	0x000a0c50, /* Controller 10, led 149, offset 3152 */
	0x000b0c5c, /* Controller 11, led 149, offset 3164 */
	0x00000c68, /* Controller 0, led 150, offset 3176 */
	0x00010c74, /* Controller 1, led 150, offset 3188 */
	0x00020c80, /* Controller 2, led 150, offset 3200 */
	0x00030c8c, /* Controller 3, led 150, offset 3212 */
	0x00040c98, /* Controller 4, led 150, offset 3224 */
	0x00050ca4, /* Controller 5, led 150, offset 3236 */
	0x00060cb0, /* Controller 6, led 150, offset 3248 */
	0x00070cbc, /* Controller 7, led 150, offset 3260 */
	0x00080cc8, /* Controller 8, led 150, offset 3272 */
	0x00090cd4, /* Controller 9, led 150, offset 3284 */
	0x000a0ce0, /* Controller 10, led 150, offset 3296 */
	0x000b0cec, /* Controller 11, led 150, offset 3308 */
	0x00000cf8, /* Controller 0, led 151, offset 3320 */
	0x00010d04, /* Controller 1, led 151, offset 3332 */
	0x00020d10, /* Controller 2, led 151, offset 3344 */
	0x00030d1c, /* Controller 3, led 151, offset 3356 */
	0x00040d28, /* Controller 4, led 151, offset 3368 */
	0x00050d34, /* Controller 5, led 151, offset 3380 */
	0x00060d40, /* Controller 6, led 151, offset 3392 */
	0x00070d4c, /* Controller 7, led 151, offset 3404 */
	0x00080d58, /* Controller 8, led 151, offset 3416 */
	0x00090d64, /* Controller 9, led 151, offset 3428 */
	0x000a0d70, /* Controller 10, led 151, offset 3440 */
	0x000b0d7c, /* Controller 11, led 151, offset 3452 */
	0x00000d88, /* Controller 0, led 152, offset 3464 */
	0x00010d94, /* Controller 1, led 152, offset 3476 */
	0x00020da0, /* Controller 2, led 152, offset 3488 */
	0x00030dac, /* Controller 3, led 152, offset 3500 */
	0x00040db8, /* Controller 4, led 152, offset 3512 */
	0x00050dc4, /* Controller 5, led 152, offset 3524 */
	0x00060dd0, /* Controller 6, led 152, offset 3536 */
	0x00070ddc, /* Controller 7, led 152, offset 3548 */
	0x00080de8, /* Controller 8, led 152, offset 3560 */
	0x00090df4, /* Controller 9, led 152, offset 3572 */
	0x000a0e00, /* Controller 10, led 152, offset 3584 */
	0x000b0e0c, /* Controller 11, led 152, offset 3596 */
	0x00000e18, /* Controller 0, led 153, offset 3608 */
	0x00010e24, /* Controller 1, led 153, offset 3620 */
	0x00020e30, /* Controller 2, led 153, offset 3632 */
	0x00030e3c, /* Controller 3, led 153, offset 3644 */
	0x00040e48, /* Controller 4, led 153, offset 3656 */
	0x00050e54, /* Controller 5, led 153, offset 3668 */
	0x00060e60, /* Controller 6, led 153, offset 3680 */
	0x00070e6c, /* Controller 7, led 153, offset 3692 */
	0x00080e78, /* Controller 8, led 153, offset 3704 */
	0x00090e84, /* Controller 9, led 153, offset 3716 */
	0x000a0e90, /* Controller 10, led 153, offset 3728 */
	0x000b0e9c, /* Controller 11, led 153, offset 3740 */
	0x00000ea8, /* Controller 0, led 154, offset 3752 */
	0x00010eb4, /* Controller 1, led 154, offset 3764 */
	0x00020ec0, /* Controller 2, led 154, offset 3776 */
	0x00030ecc, /* Controller 3, led 154, offset 3788 */
	0x00040ed8, /* Controller 4, led 154, offset 3800 */
	0x00050ee4, /* Controller 5, led 154, offset 3812 */
	0x00060ef0, /* Controller 6, led 154, offset 3824 */
	0x00070efc, /* Controller 7, led 154, offset 3836 */
	0x00080f08, /* Controller 8, led 154, offset 3848 */
	0x00090f14, /* Controller 9, led 154, offset 3860 */
	0x000a0f20, /* Controller 10, led 154, offset 3872 */
	0x000b0f2c, /* Controller 11, led 154, offset 3884 */
	0x00000f38, /* Controller 0, led 155, offset 3896 */
	0x00010f44, /* Controller 1, led 155, offset 3908 */
	0x00020f50, /* Controller 2, led 155, offset 3920 */
	0x00030f5c, /* Controller 3, led 155, offset 3932 */
	0x00040f68, /* Controller 4, led 155, offset 3944 */
	0x00050f74, /* Controller 5, led 155, offset 3956 */
	0x00060f80, /* Controller 6, led 155, offset 3968 */
	0x00070f8c, /* Controller 7, led 155, offset 3980 */
	0x00080f98, /* Controller 8, led 155, offset 3992 */
	0x00090fa4, /* Controller 9, led 155, offset 4004 */
	0x000a0fb0, /* Controller 10, led 155, offset 4016 */
	0x000b0fbc, /* Controller 11, led 155, offset 4028 */
	0x00000fc8, /* Controller 0, led 156, offset 4040 */
	0x00010fd4, /* Controller 1, led 156, offset 4052 */
	0x00020fe0, /* Controller 2, led 156, offset 4064 */
	0x00030fec, /* Controller 3, led 156, offset 4076 */
	0x00040ff8, /* Controller 4, led 156, offset 4088 */
	0x00051004, /* Controller 5, led 156, offset 4100 */
	0x00061010, /* Controller 6, led 156, offset 4112 */
	0x0007101c, /* Controller 7, led 156, offset 4124 */
	0x00081028, /* Controller 8, led 156, offset 4136 */
	0x00091034, /* Controller 9, led 156, offset 4148 */
	0x000a1040, /* Controller 10, led 156, offset 4160 */
	0x000b104c, /* Controller 11, led 156, offset 4172 */
	0x00001058, /* Controller 0, led 157, offset 4184 */
	0x00011064, /* Controller 1, led 157, offset 4196 */
	0x00021070, /* Controller 2, led 157, offset 4208 */
	0x0003107c, /* Controller 3, led 157, offset 4220 */
	0x00041088, /* Controller 4, led 157, offset 4232 */
	0x00051094, /* Controller 5, led 157, offset 4244 */
	0x000610a0, /* Controller 6, led 157, offset 4256 */
	0x000710ac, /* Controller 7, led 157, offset 4268 */
	0x000810b8, /* Controller 8, led 157, offset 4280 */
	0x000910c4, /* Controller 9, led 157, offset 4292 */
	0x000a10d0, /* Controller 10, led 157, offset 4304 */
	0x000b10dc, /* Controller 11, led 157, offset 4316 */
	0x000010e8, /* Controller 0, led 158, offset 4328 */
	0x000110f4, /* Controller 1, led 158, offset 4340 */
	0x00021100, /* Controller 2, led 158, offset 4352 */
	0x0003110c, /* Controller 3, led 158, offset 4364 */
	0x00041118, /* Controller 4, led 158, offset 4376 */
	0x00051124, /* Controller 5, led 158, offset 4388 */
	0x00061130, /* Controller 6, led 158, offset 4400 */
	0x0007113c, /* Controller 7, led 158, offset 4412 */
	0x00081148, /* Controller 8, led 158, offset 4424 */
	0x00091154, /* Controller 9, led 158, offset 4436 */
	0x000a1160, /* Controller 10, led 158, offset 4448 */
	0x000b116c, /* Controller 11, led 158, offset 4460 */
	0x00001178, /* Controller 0, led 159, offset 4472 */
	0x00011184, /* Controller 1, led 159, offset 4484 */
	0x00021190, /* Controller 2, led 159, offset 4496 */
	0x0003119c, /* Controller 3, led 159, offset 4508 */
	0x000411a8, /* Controller 4, led 159, offset 4520 */
	0x000511b4, /* Controller 5, led 159, offset 4532 */
	0x000611c0, /* Controller 6, led 159, offset 4544 */
	0x000711cc, /* Controller 7, led 159, offset 4556 */
	0x000811d8, /* Controller 8, led 159, offset 4568 */
	0x000911e4, /* Controller 9, led 159, offset 4580 */
	0x000a11f0, /* Controller 10, led 159, offset 4592 */
	0x000b11fc, /* Controller 11, led 159, offset 4604 */
	0x00001208, /* Controller 0, led 160, offset 4616 */
	0x00011214, /* Controller 1, led 160, offset 4628 */
	0x00021220, /* Controller 2, led 160, offset 4640 */
	0x0003122c, /* Controller 3, led 160, offset 4652 */
	0x00041238, /* Controller 4, led 160, offset 4664 */
	0x00051244, /* Controller 5, led 160, offset 4676 */
	0x00061250, /* Controller 6, led 160, offset 4688 */
	0x0007125c, /* Controller 7, led 160, offset 4700 */
	0x00081268, /* Controller 8, led 160, offset 4712 */
	0x00091274, /* Controller 9, led 160, offset 4724 */
	0x000a1280, /* Controller 10, led 160, offset 4736 */
	0x000b128c, /* Controller 11, led 160, offset 4748 */
	0x00001298, /* Controller 0, led 161, offset 4760 */
	0x000112a4, /* Controller 1, led 161, offset 4772 */
	0x000212b0, /* Controller 2, led 161, offset 4784 */
	0x000312bc, /* Controller 3, led 161, offset 4796 */
	0x000412c8, /* Controller 4, led 161, offset 4808 */
	0x000512d4, /* Controller 5, led 161, offset 4820 */
	0x000612e0, /* Controller 6, led 161, offset 4832 */
	0x000712ec, /* Controller 7, led 161, offset 4844 */
	0x000812f8, /* Controller 8, led 161, offset 4856 */
	0x00091304, /* Controller 9, led 161, offset 4868 */
	0x000a1310, /* Controller 10, led 161, offset 4880 */
	0x000b131c, /* Controller 11, led 161, offset 4892 */
	0x00001328, /* Controller 0, led 162, offset 4904 */
	0x00011334, /* Controller 1, led 162, offset 4916 */
	0x00021340, /* Controller 2, led 162, offset 4928 */
	0x0003134c, /* Controller 3, led 162, offset 4940 */
	0x00041358, /* Controller 4, led 162, offset 4952 */
	0x00051364, /* Controller 5, led 162, offset 4964 */
	0x00061370, /* Controller 6, led 162, offset 4976 */
	0x0007137c, /* Controller 7, led 162, offset 4988 */
	0x00081388, /* Controller 8, led 162, offset 5000 */
	0x00091394, /* Controller 9, led 162, offset 5012 */
	0x000a13a0, /* Controller 10, led 162, offset 5024 */
	0x000b13ac, /* Controller 11, led 162, offset 5036 */
	0x000013b8, /* Controller 0, led 163, offset 5048 */
	0x000113c4, /* Controller 1, led 163, offset 5060 */
	0x000213d0, /* Controller 2, led 163, offset 5072 */
	0x000313dc, /* Controller 3, led 163, offset 5084 */
	0x000413e8, /* Controller 4, led 163, offset 5096 */
	0x000513f4, /* Controller 5, led 163, offset 5108 */
	0x00061400, /* Controller 6, led 163, offset 5120 */
	0x0007140c, /* Controller 7, led 163, offset 5132 */
	0x00081418, /* Controller 8, led 163, offset 5144 */
	0x00091424, /* Controller 9, led 163, offset 5156 */
	0x000a1430, /* Controller 10, led 163, offset 5168 */
	0x000b143c, /* Controller 11, led 163, offset 5180 */
	0x00001448, /* Controller 0, led 164, offset 5192 */
	0x00011454, /* Controller 1, led 164, offset 5204 */
	0x00021460, /* Controller 2, led 164, offset 5216 */
	0x0003146c, /* Controller 3, led 164, offset 5228 */
	0x00041478, /* Controller 4, led 164, offset 5240 */
	0x00051484, /* Controller 5, led 164, offset 5252 */
	0x00061490, /* Controller 6, led 164, offset 5264 */
	0x0007149c, /* Controller 7, led 164, offset 5276 */
	0x000814a8, /* Controller 8, led 164, offset 5288 */
	0x000914b4, /* Controller 9, led 164, offset 5300 */
	0x000a14c0, /* Controller 10, led 164, offset 5312 */
	0x000b14cc, /* Controller 11, led 164, offset 5324 */
	0x000014d8, /* Controller 0, led 165, offset 5336 */
	0x000114e4, /* Controller 1, led 165, offset 5348 */
	0x000214f0, /* Controller 2, led 165, offset 5360 */
	0x000314fc, /* Controller 3, led 165, offset 5372 */
	0x00041508, /* Controller 4, led 165, offset 5384 */
	0x00051514, /* Controller 5, led 165, offset 5396 */
	0x00061520, /* Controller 6, led 165, offset 5408 */
	0x0007152c, /* Controller 7, led 165, offset 5420 */
	0x00081538, /* Controller 8, led 165, offset 5432 */
	0x00091544, /* Controller 9, led 165, offset 5444 */
	0x000a1550, /* Controller 10, led 165, offset 5456 */
	0x000b155c, /* Controller 11, led 165, offset 5468 */
	0x00001568, /* Controller 0, led 166, offset 5480 */
	0x00011574, /* Controller 1, led 166, offset 5492 */
	0x00021580, /* Controller 2, led 166, offset 5504 */
	0x0003158c, /* Controller 3, led 166, offset 5516 */
	0x00041598, /* Controller 4, led 166, offset 5528 */
	0x000515a4, /* Controller 5, led 166, offset 5540 */
	0x000615b0, /* Controller 6, led 166, offset 5552 */
	0x000715bc, /* Controller 7, led 166, offset 5564 */
	0x000815c8, /* Controller 8, led 166, offset 5576 */
	0x000915d4, /* Controller 9, led 166, offset 5588 */
	0x000a15e0, /* Controller 10, led 166, offset 5600 */
	0x000b15ec, /* Controller 11, led 166, offset 5612 */
	0x000015f8, /* Controller 0, led 167, offset 5624 */
	0x00011604, /* Controller 1, led 167, offset 5636 */
	0x00021610, /* Controller 2, led 167, offset 5648 */
	0x0003161c, /* Controller 3, led 167, offset 5660 */
	0x00041628, /* Controller 4, led 167, offset 5672 */
	0x00051634, /* Controller 5, led 167, offset 5684 */
	0x00061640, /* Controller 6, led 167, offset 5696 */
	0x0007164c, /* Controller 7, led 167, offset 5708 */
	0x00081658, /* Controller 8, led 167, offset 5720 */
	0x00091664, /* Controller 9, led 167, offset 5732 */
	0x000a1670, /* Controller 10, led 167, offset 5744 */
	0x000b167c, /* Controller 11, led 167, offset 5756 */
	0x00001688, /* Controller 0, led 168, offset 5768 */
	0x00011694, /* Controller 1, led 168, offset 5780 */
	0x000216a0, /* Controller 2, led 168, offset 5792 */
	0x000316ac, /* Controller 3, led 168, offset 5804 */
	0x000416b8, /* Controller 4, led 168, offset 5816 */
	0x000516c4, /* Controller 5, led 168, offset 5828 */
	0x000616d0, /* Controller 6, led 168, offset 5840 */
	0x000716dc, /* Controller 7, led 168, offset 5852 */
	0x000816e8, /* Controller 8, led 168, offset 5864 */
	0x000916f4, /* Controller 9, led 168, offset 5876 */
	0x000a1700, /* Controller 10, led 168, offset 5888 */
	0x000b170c, /* Controller 11, led 168, offset 5900 */
	0x00001718, /* Controller 0, led 169, offset 5912 */
	0x00011724, /* Controller 1, led 169, offset 5924 */
	0x00021730, /* Controller 2, led 169, offset 5936 */
	0x0003173c, /* Controller 3, led 169, offset 5948 */
	0x00041748, /* Controller 4, led 169, offset 5960 */
	0x00051754, /* Controller 5, led 169, offset 5972 */
	0x00061760, /* Controller 6, led 169, offset 5984 */
	0x0007176c, /* Controller 7, led 169, offset 5996 */
	0x00081778, /* Controller 8, led 169, offset 6008 */
	0x00091784, /* Controller 9, led 169, offset 6020 */
	0x000a1790, /* Controller 10, led 169, offset 6032 */
	0x000b179c, /* Controller 11, led 169, offset 6044 */
	0x000017a8, /* Controller 0, led 170, offset 6056 */
	0x000117b4, /* Controller 1, led 170, offset 6068 */
	0x000217c0, /* Controller 2, led 170, offset 6080 */
	0x000317cc, /* Controller 3, led 170, offset 6092 */
	0x000417d8, /* Controller 4, led 170, offset 6104 */
	0x000517e4, /* Controller 5, led 170, offset 6116 */
	0x000617f0, /* Controller 6, led 170, offset 6128 */
	0x000717fc, /* Controller 7, led 170, offset 6140 */
	0x00081808, /* Controller 8, led 170, offset 6152 */
	0x00091814, /* Controller 9, led 170, offset 6164 */
	0x000a1820, /* Controller 10, led 170, offset 6176 */
	0x000b182c, /* Controller 11, led 170, offset 6188 */
	0x00001838, /* Controller 0, led 171, offset 6200 */
	0x00011844, /* Controller 1, led 171, offset 6212 */
	0x00021850, /* Controller 2, led 171, offset 6224 */
	0x0003185c, /* Controller 3, led 171, offset 6236 */
	0x00041868, /* Controller 4, led 171, offset 6248 */
	0x00051874, /* Controller 5, led 171, offset 6260 */
	0x00061880, /* Controller 6, led 171, offset 6272 */
	0x0007188c, /* Controller 7, led 171, offset 6284 */
	0x00081898, /* Controller 8, led 171, offset 6296 */
	0x000918a4, /* Controller 9, led 171, offset 6308 */
	0x000a18b0, /* Controller 10, led 171, offset 6320 */
	0x000b18bc, /* Controller 11, led 171, offset 6332 */
	0x000018c8, /* Controller 0, led 172, offset 6344 */
	0x000118d4, /* Controller 1, led 172, offset 6356 */
	0x000218e0, /* Controller 2, led 172, offset 6368 */
	0x000318ec, /* Controller 3, led 172, offset 6380 */
	0x000418f8, /* Controller 4, led 172, offset 6392 */
	0x00051904, /* Controller 5, led 172, offset 6404 */
	0x00061910, /* Controller 6, led 172, offset 6416 */
	0x0007191c, /* Controller 7, led 172, offset 6428 */
	0x00081928, /* Controller 8, led 172, offset 6440 */
	0x00091934, /* Controller 9, led 172, offset 6452 */
	0x000a1940, /* Controller 10, led 172, offset 6464 */
	0x000b194c, /* Controller 11, led 172, offset 6476 */
	0x00001958, /* Controller 0, led 173, offset 6488 */
	0x00011964, /* Controller 1, led 173, offset 6500 */
	0x00021970, /* Controller 2, led 173, offset 6512 */
	0x0003197c, /* Controller 3, led 173, offset 6524 */
	0x00041988, /* Controller 4, led 173, offset 6536 */
	0x00051994, /* Controller 5, led 173, offset 6548 */
	0x000619a0, /* Controller 6, led 173, offset 6560 */
	0x000719ac, /* Controller 7, led 173, offset 6572 */
	0x000819b8, /* Controller 8, led 173, offset 6584 */
	0x000919c4, /* Controller 9, led 173, offset 6596 */
	0x000a19d0, /* Controller 10, led 173, offset 6608 */
	0x000b19dc, /* Controller 11, led 173, offset 6620 */
	0x000019e8, /* Controller 0, led 174, offset 6632 */
	0x000119f4, /* Controller 1, led 174, offset 6644 */
	0x00021a00, /* Controller 2, led 174, offset 6656 */
	0x00031a0c, /* Controller 3, led 174, offset 6668 */
	0x00041a18, /* Controller 4, led 174, offset 6680 */
	0x00051a24, /* Controller 5, led 174, offset 6692 */
	0x00061a30, /* Controller 6, led 174, offset 6704 */
	0x00071a3c, /* Controller 7, led 174, offset 6716 */
	0x00081a48, /* Controller 8, led 174, offset 6728 */
	0x00091a54, /* Controller 9, led 174, offset 6740 */
	0x000a1a60, /* Controller 10, led 174, offset 6752 */
	0x000b1a6c, /* Controller 11, led 174, offset 6764 */
	0x00001a78, /* Controller 0, led 175, offset 6776 */
	0x00011a84, /* Controller 1, led 175, offset 6788 */
	0x00021a90, /* Controller 2, led 175, offset 6800 */
	0x00031a9c, /* Controller 3, led 175, offset 6812 */
	0x00041aa8, /* Controller 4, led 175, offset 6824 */
	0x00051ab4, /* Controller 5, led 175, offset 6836 */
	0x00061ac0, /* Controller 6, led 175, offset 6848 */
	0x00071acc, /* Controller 7, led 175, offset 6860 */
	0x00081ad8, /* Controller 8, led 175, offset 6872 */
	0x00091ae4, /* Controller 9, led 175, offset 6884 */
	0x000a1af0, /* Controller 10, led 175, offset 6896 */
	0x000b1afc, /* Controller 11, led 175, offset 6908 */
	0x00001b08, /* Controller 0, led 176, offset 6920 */
	0x00011b14, /* Controller 1, led 176, offset 6932 */
	0x00021b20, /* Controller 2, led 176, offset 6944 */
	0x00031b2c, /* Controller 3, led 176, offset 6956 */
	0x00041b38, /* Controller 4, led 176, offset 6968 */
	0x00051b44, /* Controller 5, led 176, offset 6980 */
	0x00061b50, /* Controller 6, led 176, offset 6992 */
	0x00071b5c, /* Controller 7, led 176, offset 7004 */
	0x00081b68, /* Controller 8, led 176, offset 7016 */
	0x00091b74, /* Controller 9, led 176, offset 7028 */
	0x000a1b80, /* Controller 10, led 176, offset 7040 */
	0x000b1b8c, /* Controller 11, led 176, offset 7052 */
	0x00001b98, /* Controller 0, led 177, offset 7064 */
	0x00011ba4, /* Controller 1, led 177, offset 7076 */
	0x00021bb0, /* Controller 2, led 177, offset 7088 */
	0x00031bbc, /* Controller 3, led 177, offset 7100 */
	0x00041bc8, /* Controller 4, led 177, offset 7112 */
	0x00051bd4, /* Controller 5, led 177, offset 7124 */
	0x00061be0, /* Controller 6, led 177, offset 7136 */
	0x00071bec, /* Controller 7, led 177, offset 7148 */
	0x00081bf8, /* Controller 8, led 177, offset 7160 */
	0x00091c04, /* Controller 9, led 177, offset 7172 */
	0x000a1c10, /* Controller 10, led 177, offset 7184 */
	0x000b1c1c, /* Controller 11, led 177, offset 7196 */
	0x00001c28, /* Controller 0, led 178, offset 7208 */
	0x00011c34, /* Controller 1, led 178, offset 7220 */
	0x00021c40, /* Controller 2, led 178, offset 7232 */
	0x00031c4c, /* Controller 3, led 178, offset 7244 */
	0x00041c58, /* Controller 4, led 178, offset 7256 */
	0x00051c64, /* Controller 5, led 178, offset 7268 */
	0x00061c70, /* Controller 6, led 178, offset 7280 */
	0x00071c7c, /* Controller 7, led 178, offset 7292 */
	0x00081c88, /* Controller 8, led 178, offset 7304 */
	0x00091c94, /* Controller 9, led 178, offset 7316 */
	0x000a1ca0, /* Controller 10, led 178, offset 7328 */
	0x000b1cac, /* Controller 11, led 178, offset 7340 */
	0x00001cb8, /* Controller 0, led 179, offset 7352 */
	0x00011cc4, /* Controller 1, led 179, offset 7364 */
	0x00021cd0, /* Controller 2, led 179, offset 7376 */
	0x00031cdc, /* Controller 3, led 179, offset 7388 */
	0x00041ce8, /* Controller 4, led 179, offset 7400 */
	0x00051cf4, /* Controller 5, led 179, offset 7412 */
	0x00061d00, /* Controller 6, led 179, offset 7424 */
	0x00071d0c, /* Controller 7, led 179, offset 7436 */
	0x00081d18, /* Controller 8, led 179, offset 7448 */
	0x00091d24, /* Controller 9, led 179, offset 7460 */
	0x000a1d30, /* Controller 10, led 179, offset 7472 */
	0x000b1d3c, /* Controller 11, led 179, offset 7484 */
	0x00001d48, /* Controller 0, led 180, offset 7496 */
	0x00011d54, /* Controller 1, led 180, offset 7508 */
	0x00021d60, /* Controller 2, led 180, offset 7520 */
	0x00031d6c, /* Controller 3, led 180, offset 7532 */
	0x00041d78, /* Controller 4, led 180, offset 7544 */
	0x00051d84, /* Controller 5, led 180, offset 7556 */
	0x00061d90, /* Controller 6, led 180, offset 7568 */
	0x00071d9c, /* Controller 7, led 180, offset 7580 */
	0x00081da8, /* Controller 8, led 180, offset 7592 */
	0x00091db4, /* Controller 9, led 180, offset 7604 */
	0x000a1dc0, /* Controller 10, led 180, offset 7616 */
	0x000b1dcc, /* Controller 11, led 180, offset 7628 */
	0x00001dd8, /* Controller 0, led 181, offset 7640 */
	0x00011de4, /* Controller 1, led 181, offset 7652 */
	0x00021df0, /* Controller 2, led 181, offset 7664 */
	0x00031dfc, /* Controller 3, led 181, offset 7676 */
	0x00041e08, /* Controller 4, led 181, offset 7688 */
	0x00051e14, /* Controller 5, led 181, offset 7700 */
	0x00061e20, /* Controller 6, led 181, offset 7712 */
	0x00071e2c, /* Controller 7, led 181, offset 7724 */
	0x00081e38, /* Controller 8, led 181, offset 7736 */
	0x00091e44, /* Controller 9, led 181, offset 7748 */
	0x000a1e50, /* Controller 10, led 181, offset 7760 */
	0x000b1e5c, /* Controller 11, led 181, offset 7772 */
	0x00001e68, /* Controller 0, led 182, offset 7784 */
	0x00011e74, /* Controller 1, led 182, offset 7796 */
	0x00021e80, /* Controller 2, led 182, offset 7808 */
	0x00031e8c, /* Controller 3, led 182, offset 7820 */
	0x00041e98, /* Controller 4, led 182, offset 7832 */
	0x00051ea4, /* Controller 5, led 182, offset 7844 */
	0x00061eb0, /* Controller 6, led 182, offset 7856 */
	0x00071ebc, /* Controller 7, led 182, offset 7868 */
	0x00081ec8, /* Controller 8, led 182, offset 7880 */
	0x00091ed4, /* Controller 9, led 182, offset 7892 */
	0x000a1ee0, /* Controller 10, led 182, offset 7904 */
	0x000b1eec, /* Controller 11, led 182, offset 7916 */
	0x00001ef8, /* Controller 0, led 183, offset 7928 */
	0x00011f04, /* Controller 1, led 183, offset 7940 */
	0x00021f10, /* Controller 2, led 183, offset 7952 */
	0x00031f1c, /* Controller 3, led 183, offset 7964 */
	0x00041f28, /* Controller 4, led 183, offset 7976 */
	0x00051f34, /* Controller 5, led 183, offset 7988 */
	0x00061f40, /* Controller 6, led 183, offset 8000 */
	0x00071f4c, /* Controller 7, led 183, offset 8012 */
	0x00081f58, /* Controller 8, led 183, offset 8024 */
	0x00091f64, /* Controller 9, led 183, offset 8036 */
	0x000a1f70, /* Controller 10, led 183, offset 8048 */
	0x000b1f7c, /* Controller 11, led 183, offset 8060 */
	0x00001f88, /* Controller 0, led 184, offset 8072 */
	0x00011f94, /* Controller 1, led 184, offset 8084 */
	0x00021fa0, /* Controller 2, led 184, offset 8096 */
	0x00031fac, /* Controller 3, led 184, offset 8108 */
	0x00041fb8, /* Controller 4, led 184, offset 8120 */
	0x00051fc4, /* Controller 5, led 184, offset 8132 */
	0x00061fd0, /* Controller 6, led 184, offset 8144 */
	0x00071fdc, /* Controller 7, led 184, offset 8156 */
	0x00081fe8, /* Controller 8, led 184, offset 8168 */
	0x00091ff4, /* Controller 9, led 184, offset 8180 */
	0x000a2000, /* Controller 10, led 184, offset 8192 */
	0x000b200c, /* Controller 11, led 184, offset 8204 */
	0x00002018, /* Controller 0, led 185, offset 8216 */
	0x00012024, /* Controller 1, led 185, offset 8228 */
	0x00022030, /* Controller 2, led 185, offset 8240 */
	0x0003203c, /* Controller 3, led 185, offset 8252 */
	0x00042048, /* Controller 4, led 185, offset 8264 */
	0x00052054, /* Controller 5, led 185, offset 8276 */
	0x00062060, /* Controller 6, led 185, offset 8288 */
	0x0007206c, /* Controller 7, led 185, offset 8300 */
	0x00082078, /* Controller 8, led 185, offset 8312 */
	0x00092084, /* Controller 9, led 185, offset 8324 */
	0x000a2090, /* Controller 10, led 185, offset 8336 */
	0x000b209c, /* Controller 11, led 185, offset 8348 */
	0x000020a8, /* Controller 0, led 186, offset 8360 */
	0x000120b4, /* Controller 1, led 186, offset 8372 */
	0x000220c0, /* Controller 2, led 186, offset 8384 */
	0x000320cc, /* Controller 3, led 186, offset 8396 */
	0x000420d8, /* Controller 4, led 186, offset 8408 */
	0x000520e4, /* Controller 5, led 186, offset 8420 */
	0x000620f0, /* Controller 6, led 186, offset 8432 */
	0x000720fc, /* Controller 7, led 186, offset 8444 */
	0x00082108, /* Controller 8, led 186, offset 8456 */
	0x00092114, /* Controller 9, led 186, offset 8468 */
	0x000a2120, /* Controller 10, led 186, offset 8480 */
	0x000b212c, /* Controller 11, led 186, offset 8492 */
	0x00002138, /* Controller 0, led 187, offset 8504 */
	0x00012144, /* Controller 1, led 187, offset 8516 */
	0x00022150, /* Controller 2, led 187, offset 8528 */
	0x0003215c, /* Controller 3, led 187, offset 8540 */
	0x00042168, /* Controller 4, led 187, offset 8552 */
	0x00052174, /* Controller 5, led 187, offset 8564 */
	0x00062180, /* Controller 6, led 187, offset 8576 */
	0x0007218c, /* Controller 7, led 187, offset 8588 */
	0x00082198, /* Controller 8, led 187, offset 8600 */
	0x000921a4, /* Controller 9, led 187, offset 8612 */
	0x000a21b0, /* Controller 10, led 187, offset 8624 */
	0x000b21bc, /* Controller 11, led 187, offset 8636 */
	0x000021c8, /* Controller 0, led 188, offset 8648 */
	0x000121d4, /* Controller 1, led 188, offset 8660 */
	0x000221e0, /* Controller 2, led 188, offset 8672 */
	0x000321ec, /* Controller 3, led 188, offset 8684 */
	0x000421f8, /* Controller 4, led 188, offset 8696 */
	0x00052204, /* Controller 5, led 188, offset 8708 */
	0x00062210, /* Controller 6, led 188, offset 8720 */
	0x0007221c, /* Controller 7, led 188, offset 8732 */
	0x00082228, /* Controller 8, led 188, offset 8744 */
	0x00092234, /* Controller 9, led 188, offset 8756 */
	0x000a2240, /* Controller 10, led 188, offset 8768 */
	0x000b224c, /* Controller 11, led 188, offset 8780 */
	0x00002258, /* Controller 0, led 189, offset 8792 */
	0x00012264, /* Controller 1, led 189, offset 8804 */
	0x00022270, /* Controller 2, led 189, offset 8816 */
	0x0003227c, /* Controller 3, led 189, offset 8828 */
	0x00042288, /* Controller 4, led 189, offset 8840 */
	0x00052294, /* Controller 5, led 189, offset 8852 */
	0x000622a0, /* Controller 6, led 189, offset 8864 */
	0x000722ac, /* Controller 7, led 189, offset 8876 */
	0x000822b8, /* Controller 8, led 189, offset 8888 */
	0x000922c4, /* Controller 9, led 189, offset 8900 */
	0x000a22d0, /* Controller 10, led 189, offset 8912 */
	0x000b22dc, /* Controller 11, led 189, offset 8924 */
	0x000022e8, /* Controller 0, led 190, offset 8936 */
	0x000122f4, /* Controller 1, led 190, offset 8948 */
	0x00022300, /* Controller 2, led 190, offset 8960 */
	0x0003230c, /* Controller 3, led 190, offset 8972 */
	0x00042318, /* Controller 4, led 190, offset 8984 */
	0x00052324, /* Controller 5, led 190, offset 8996 */
	0x00062330, /* Controller 6, led 190, offset 9008 */
	0x0007233c, /* Controller 7, led 190, offset 9020 */
	0x00082348, /* Controller 8, led 190, offset 9032 */
	0x00092354, /* Controller 9, led 190, offset 9044 */
	0x000a2360, /* Controller 10, led 190, offset 9056 */
	0x000b236c, /* Controller 11, led 190, offset 9068 */
	0x00002378, /* Controller 0, led 191, offset 9080 */
	0x00012384, /* Controller 1, led 191, offset 9092 */
	0x00022390, /* Controller 2, led 191, offset 9104 */
	0x0003239c, /* Controller 3, led 191, offset 9116 */
	0x000423a8, /* Controller 4, led 191, offset 9128 */
	0x000523b4, /* Controller 5, led 191, offset 9140 */
	0x000623c0, /* Controller 6, led 191, offset 9152 */
	0x000723cc, /* Controller 7, led 191, offset 9164 */
	0x000823d8, /* Controller 8, led 191, offset 9176 */
	0x000923e4, /* Controller 9, led 191, offset 9188 */
	0x000a23f0, /* Controller 10, led 191, offset 9200 */
	0x000b23fc, /* Controller 11, led 191, offset 9212 */
	0x00002408, /* Controller 0, led 192, offset 9224 */
	0x00012414, /* Controller 1, led 192, offset 9236 */
	0x00022420, /* Controller 2, led 192, offset 9248 */
	0x0003242c, /* Controller 3, led 192, offset 9260 */
	0x00042438, /* Controller 4, led 192, offset 9272 */
	0x00052444, /* Controller 5, led 192, offset 9284 */
	0x00062450, /* Controller 6, led 192, offset 9296 */
	0x0007245c, /* Controller 7, led 192, offset 9308 */
	0x00082468, /* Controller 8, led 192, offset 9320 */
	0x00092474, /* Controller 9, led 192, offset 9332 */
	0x000a2480, /* Controller 10, led 192, offset 9344 */
	0x000b248c, /* Controller 11, led 192, offset 9356 */
	0x00002498, /* Controller 0, led 193, offset 9368 */
	0x000124a4, /* Controller 1, led 193, offset 9380 */
	0x000224b0, /* Controller 2, led 193, offset 9392 */
	0x000324bc, /* Controller 3, led 193, offset 9404 */
	0x000424c8, /* Controller 4, led 193, offset 9416 */
	0x000524d4, /* Controller 5, led 193, offset 9428 */
	0x000624e0, /* Controller 6, led 193, offset 9440 */
	0x000724ec, /* Controller 7, led 193, offset 9452 */
	0x000824f8, /* Controller 8, led 193, offset 9464 */
	0x00092504, /* Controller 9, led 193, offset 9476 */
	0x000a2510, /* Controller 10, led 193, offset 9488 */
	0x000b251c, /* Controller 11, led 193, offset 9500 */
	0x00002528, /* Controller 0, led 194, offset 9512 */
	0x00012534, /* Controller 1, led 194, offset 9524 */
	0x00022540, /* Controller 2, led 194, offset 9536 */
	0x0003254c, /* Controller 3, led 194, offset 9548 */
	0x00042558, /* Controller 4, led 194, offset 9560 */
	0x00052564, /* Controller 5, led 194, offset 9572 */
	0x00062570, /* Controller 6, led 194, offset 9584 */
	0x0007257c, /* Controller 7, led 194, offset 9596 */
	0x00082588, /* Controller 8, led 194, offset 9608 */
	0x00092594, /* Controller 9, led 194, offset 9620 */
	0x000a25a0, /* Controller 10, led 194, offset 9632 */
	0x000b25ac, /* Controller 11, led 194, offset 9644 */
	0x000025b8, /* Controller 0, led 195, offset 9656 */
	0x000125c4, /* Controller 1, led 195, offset 9668 */
	0x000225d0, /* Controller 2, led 195, offset 9680 */
	0x000325dc, /* Controller 3, led 195, offset 9692 */
	0x000425e8, /* Controller 4, led 195, offset 9704 */
	0x000525f4, /* Controller 5, led 195, offset 9716 */
	0x00062600, /* Controller 6, led 195, offset 9728 */
	0x0007260c, /* Controller 7, led 195, offset 9740 */
	0x00082618, /* Controller 8, led 195, offset 9752 */
	0x00092624, /* Controller 9, led 195, offset 9764 */
	0x000a2630, /* Controller 10, led 195, offset 9776 */
	0x000b263c, /* Controller 11, led 195, offset 9788 */
	0x00002648, /* Controller 0, led 196, offset 9800 */
	0x00012654, /* Controller 1, led 196, offset 9812 */
	0x00022660, /* Controller 2, led 196, offset 9824 */
	0x0003266c, /* Controller 3, led 196, offset 9836 */
	0x00042678, /* Controller 4, led 196, offset 9848 */
	0x00052684, /* Controller 5, led 196, offset 9860 */
	0x00062690, /* Controller 6, led 196, offset 9872 */
	0x0007269c, /* Controller 7, led 196, offset 9884 */
	0x000826a8, /* Controller 8, led 196, offset 9896 */
	0x000926b4, /* Controller 9, led 196, offset 9908 */
	0x000a26c0, /* Controller 10, led 196, offset 9920 */
	0x000b26cc, /* Controller 11, led 196, offset 9932 */
	0x000026d8, /* Controller 0, led 197, offset 9944 */
	0x000126e4, /* Controller 1, led 197, offset 9956 */
	0x000226f0, /* Controller 2, led 197, offset 9968 */
	0x000326fc, /* Controller 3, led 197, offset 9980 */
	0x00042708, /* Controller 4, led 197, offset 9992 */
	0x00052714, /* Controller 5, led 197, offset 10004 */
	0x00062720, /* Controller 6, led 197, offset 10016 */
	0x0007272c, /* Controller 7, led 197, offset 10028 */
	0x00082738, /* Controller 8, led 197, offset 10040 */
	0x00092744, /* Controller 9, led 197, offset 10052 */
	0x000a2750, /* Controller 10, led 197, offset 10064 */
	0x000b275c, /* Controller 11, led 197, offset 10076 */
	0x00002768, /* Controller 0, led 198, offset 10088 */
	0x00012774, /* Controller 1, led 198, offset 10100 */
	0x00022780, /* Controller 2, led 198, offset 10112 */
	0x0003278c, /* Controller 3, led 198, offset 10124 */
	0x00042798, /* Controller 4, led 198, offset 10136 */
	0x000527a4, /* Controller 5, led 198, offset 10148 */
	0x000627b0, /* Controller 6, led 198, offset 10160 */
	0x000727bc, /* Controller 7, led 198, offset 10172 */
	0x000827c8, /* Controller 8, led 198, offset 10184 */
	0x000927d4, /* Controller 9, led 198, offset 10196 */
	0x000a27e0, /* Controller 10, led 198, offset 10208 */
	0x000b27ec, /* Controller 11, led 198, offset 10220 */
	0x000027f8, /* Controller 0, led 199, offset 10232 */
	0x00012804, /* Controller 1, led 199, offset 10244 */
	0x00022810, /* Controller 2, led 199, offset 10256 */
	0x0003281c, /* Controller 3, led 199, offset 10268 */
	0x00042828, /* Controller 4, led 199, offset 10280 */
	0x00052834, /* Controller 5, led 199, offset 10292 */
	0x00062840, /* Controller 6, led 199, offset 10304 */
	0x0007284c, /* Controller 7, led 199, offset 10316 */
	0x00082858, /* Controller 8, led 199, offset 10328 */
	0x00092864, /* Controller 9, led 199, offset 10340 */
	0x000a2870, /* Controller 10, led 199, offset 10352 */
	0x000b287c, /* Controller 11, led 199, offset 10364 */
	0x00002888, /* Controller 0, led 200, offset 10376 */
	0x00012894, /* Controller 1, led 200, offset 10388 */
	0x000228a0, /* Controller 2, led 200, offset 10400 */
	0x000328ac, /* Controller 3, led 200, offset 10412 */
	0x000428b8, /* Controller 4, led 200, offset 10424 */
	0x000528c4, /* Controller 5, led 200, offset 10436 */
	0x000628d0, /* Controller 6, led 200, offset 10448 */
	0x000728dc, /* Controller 7, led 200, offset 10460 */
	0x000828e8, /* Controller 8, led 200, offset 10472 */
	0x000928f4, /* Controller 9, led 200, offset 10484 */
	0x000a2900, /* Controller 10, led 200, offset 10496 */
	0x000b290c, /* Controller 11, led 200, offset 10508 */
	0x00002918, /* Controller 0, led 201, offset 10520 */
	0x00012924, /* Controller 1, led 201, offset 10532 */
	0x00022930, /* Controller 2, led 201, offset 10544 */
	0x0003293c, /* Controller 3, led 201, offset 10556 */
	0x00042948, /* Controller 4, led 201, offset 10568 */
	0x00052954, /* Controller 5, led 201, offset 10580 */
	0x00062960, /* Controller 6, led 201, offset 10592 */
	0x0007296c, /* Controller 7, led 201, offset 10604 */
	0x00082978, /* Controller 8, led 201, offset 10616 */
	0x00092984, /* Controller 9, led 201, offset 10628 */
	0x000a2990, /* Controller 10, led 201, offset 10640 */
	0x000b299c, /* Controller 11, led 201, offset 10652 */
	0x000029a8, /* Controller 0, led 202, offset 10664 */
	0x000129b4, /* Controller 1, led 202, offset 10676 */
	0x000229c0, /* Controller 2, led 202, offset 10688 */
	0x000329cc, /* Controller 3, led 202, offset 10700 */
	0x000429d8, /* Controller 4, led 202, offset 10712 */
	0x000529e4, /* Controller 5, led 202, offset 10724 */
	0x000629f0, /* Controller 6, led 202, offset 10736 */
	0x000729fc, /* Controller 7, led 202, offset 10748 */
	0x00082a08, /* Controller 8, led 202, offset 10760 */
	0x00092a14, /* Controller 9, led 202, offset 10772 */
	0x000a2a20, /* Controller 10, led 202, offset 10784 */
	0x000b2a2c, /* Controller 11, led 202, offset 10796 */
	0x00002a38, /* Controller 0, led 203, offset 10808 */
	0x00012a44, /* Controller 1, led 203, offset 10820 */
	0x00022a50, /* Controller 2, led 203, offset 10832 */
	0x00032a5c, /* Controller 3, led 203, offset 10844 */
	0x00042a68, /* Controller 4, led 203, offset 10856 */
	0x00052a74, /* Controller 5, led 203, offset 10868 */
	0x00062a80, /* Controller 6, led 203, offset 10880 */
	0x00072a8c, /* Controller 7, led 203, offset 10892 */
	0x00082a98, /* Controller 8, led 203, offset 10904 */
	0x00092aa4, /* Controller 9, led 203, offset 10916 */
	0x000a2ab0, /* Controller 10, led 203, offset 10928 */
	0x000b2abc, /* Controller 11, led 203, offset 10940 */
	0x00002ac8, /* Controller 0, led 204, offset 10952 */
	0x00012ad4, /* Controller 1, led 204, offset 10964 */
	0x00022ae0, /* Controller 2, led 204, offset 10976 */
	0x00032aec, /* Controller 3, led 204, offset 10988 */
	0x00042af8, /* Controller 4, led 204, offset 11000 */
	0x00052b04, /* Controller 5, led 204, offset 11012 */
	0x00062b10, /* Controller 6, led 204, offset 11024 */
	0x00072b1c, /* Controller 7, led 204, offset 11036 */
	0x00082b28, /* Controller 8, led 204, offset 11048 */
	0x00092b34, /* Controller 9, led 204, offset 11060 */
	0x000a2b40, /* Controller 10, led 204, offset 11072 */
	0x000b2b4c, /* Controller 11, led 204, offset 11084 */
	0x00002b58, /* Controller 0, led 205, offset 11096 */
	0x00012b64, /* Controller 1, led 205, offset 11108 */
	0x00022b70, /* Controller 2, led 205, offset 11120 */
	0x00032b7c, /* Controller 3, led 205, offset 11132 */
	0x00042b88, /* Controller 4, led 205, offset 11144 */
	0x00052b94, /* Controller 5, led 205, offset 11156 */
	0x00062ba0, /* Controller 6, led 205, offset 11168 */
	0x00072bac, /* Controller 7, led 205, offset 11180 */
	0x00082bb8, /* Controller 8, led 205, offset 11192 */
	0x00092bc4, /* Controller 9, led 205, offset 11204 */
	0x000a2bd0, /* Controller 10, led 205, offset 11216 */
	0x000b2bdc, /* Controller 11, led 205, offset 11228 */
	0x00002be8, /* Controller 0, led 206, offset 11240 */
	0x00012bf4, /* Controller 1, led 206, offset 11252 */
	0x00022c00, /* Controller 2, led 206, offset 11264 */
	0x00032c0c, /* Controller 3, led 206, offset 11276 */
	0x00042c18, /* Controller 4, led 206, offset 11288 */
	0x00052c24, /* Controller 5, led 206, offset 11300 */
	0x00062c30, /* Controller 6, led 206, offset 11312 */
	0x00072c3c, /* Controller 7, led 206, offset 11324 */
	0x00082c48, /* Controller 8, led 206, offset 11336 */
	0x00092c54, /* Controller 9, led 206, offset 11348 */
	0x000a2c60, /* Controller 10, led 206, offset 11360 */
	0x000b2c6c, /* Controller 11, led 206, offset 11372 */
	0x00002c78, /* Controller 0, led 207, offset 11384 */
	0x00012c84, /* Controller 1, led 207, offset 11396 */
	0x00022c90, /* Controller 2, led 207, offset 11408 */
	0x00032c9c, /* Controller 3, led 207, offset 11420 */
	0x00042ca8, /* Controller 4, led 207, offset 11432 */
	0x00052cb4, /* Controller 5, led 207, offset 11444 */
	0x00062cc0, /* Controller 6, led 207, offset 11456 */
	0x00072ccc, /* Controller 7, led 207, offset 11468 */
	0x00082cd8, /* Controller 8, led 207, offset 11480 */
	0x00092ce4, /* Controller 9, led 207, offset 11492 */
	0x000a2cf0, /* Controller 10, led 207, offset 11504 */
	0x000b2cfc, /* Controller 11, led 207, offset 11516 */
	0x00002d08, /* Controller 0, led 208, offset 11528 */
	0x00012d14, /* Controller 1, led 208, offset 11540 */
	0x00022d20, /* Controller 2, led 208, offset 11552 */
	0x00032d2c, /* Controller 3, led 208, offset 11564 */
	0x00042d38, /* Controller 4, led 208, offset 11576 */
	0x00052d44, /* Controller 5, led 208, offset 11588 */
	0x00062d50, /* Controller 6, led 208, offset 11600 */
	0x00072d5c, /* Controller 7, led 208, offset 11612 */
	0x00082d68, /* Controller 8, led 208, offset 11624 */
	0x00092d74, /* Controller 9, led 208, offset 11636 */
	0x000a2d80, /* Controller 10, led 208, offset 11648 */
	0x000b2d8c, /* Controller 11, led 208, offset 11660 */
	0x00002d98, /* Controller 0, led 209, offset 11672 */
	0x00012da4, /* Controller 1, led 209, offset 11684 */
	0x00022db0, /* Controller 2, led 209, offset 11696 */
	0x00032dbc, /* Controller 3, led 209, offset 11708 */
	0x00042dc8, /* Controller 4, led 209, offset 11720 */
	0x00052dd4, /* Controller 5, led 209, offset 11732 */
	0x00062de0, /* Controller 6, led 209, offset 11744 */
	0x00072dec, /* Controller 7, led 209, offset 11756 */
	0x00082df8, /* Controller 8, led 209, offset 11768 */
	0x00092e04, /* Controller 9, led 209, offset 11780 */
	0x000a2e10, /* Controller 10, led 209, offset 11792 */
	0x000b2e1c, /* Controller 11, led 209, offset 11804 */
	0x00002e28, /* Controller 0, led 210, offset 11816 */
	0x00012e34, /* Controller 1, led 210, offset 11828 */
	0x00022e40, /* Controller 2, led 210, offset 11840 */
	0x00032e4c, /* Controller 3, led 210, offset 11852 */
	0x00042e58, /* Controller 4, led 210, offset 11864 */
	0x00052e64, /* Controller 5, led 210, offset 11876 */
	0x00062e70, /* Controller 6, led 210, offset 11888 */
	0x00072e7c, /* Controller 7, led 210, offset 11900 */
	0x00082e88, /* Controller 8, led 210, offset 11912 */
	0x00092e94, /* Controller 9, led 210, offset 11924 */
	0x000a2ea0, /* Controller 10, led 210, offset 11936 */
	0x000b2eac, /* Controller 11, led 210, offset 11948 */
	0x00002eb8, /* Controller 0, led 211, offset 11960 */
	0x00012ec4, /* Controller 1, led 211, offset 11972 */
	0x00022ed0, /* Controller 2, led 211, offset 11984 */
	0x00032edc, /* Controller 3, led 211, offset 11996 */
	0x00042ee8, /* Controller 4, led 211, offset 12008 */
	0x00052ef4, /* Controller 5, led 211, offset 12020 */
	0x00062f00, /* Controller 6, led 211, offset 12032 */
	0x00072f0c, /* Controller 7, led 211, offset 12044 */
	0x00082f18, /* Controller 8, led 211, offset 12056 */
	0x00092f24, /* Controller 9, led 211, offset 12068 */
	0x000a2f30, /* Controller 10, led 211, offset 12080 */
	0x000b2f3c, /* Controller 11, led 211, offset 12092 */
	0x00002f48, /* Controller 0, led 212, offset 12104 */
	0x00012f54, /* Controller 1, led 212, offset 12116 */
	0x00022f60, /* Controller 2, led 212, offset 12128 */
	0x00032f6c, /* Controller 3, led 212, offset 12140 */
	0x00042f78, /* Controller 4, led 212, offset 12152 */
	0x00052f84, /* Controller 5, led 212, offset 12164 */
	0x00062f90, /* Controller 6, led 212, offset 12176 */
	0x00072f9c, /* Controller 7, led 212, offset 12188 */
	0x00082fa8, /* Controller 8, led 212, offset 12200 */
	0x00092fb4, /* Controller 9, led 212, offset 12212 */
	0x000a2fc0, /* Controller 10, led 212, offset 12224 */
	0x000b2fcc, /* Controller 11, led 212, offset 12236 */
	0x00002fd8, /* Controller 0, led 213, offset 12248 */
	0x00012fe4, /* Controller 1, led 213, offset 12260 */
	0x00022ff0, /* Controller 2, led 213, offset 12272 */
	0x00032ffc, /* Controller 3, led 213, offset 12284 */
	0x00043008, /* Controller 4, led 213, offset 12296 */
	0x00053014, /* Controller 5, led 213, offset 12308 */
	0x00063020, /* Controller 6, led 213, offset 12320 */
	0x0007302c, /* Controller 7, led 213, offset 12332 */
	0x00083038, /* Controller 8, led 213, offset 12344 */
	0x00093044, /* Controller 9, led 213, offset 12356 */
	0x000a3050, /* Controller 10, led 213, offset 12368 */
	0x000b305c, /* Controller 11, led 213, offset 12380 */
	0x00003068, /* Controller 0, led 214, offset 12392 */
	0x00013074, /* Controller 1, led 214, offset 12404 */
	0x00023080, /* Controller 2, led 214, offset 12416 */
	0x0003308c, /* Controller 3, led 214, offset 12428 */
	0x00043098, /* Controller 4, led 214, offset 12440 */
	0x000530a4, /* Controller 5, led 214, offset 12452 */
	0x000630b0, /* Controller 6, led 214, offset 12464 */
	0x000730bc, /* Controller 7, led 214, offset 12476 */
	0x000830c8, /* Controller 8, led 214, offset 12488 */
	0x000930d4, /* Controller 9, led 214, offset 12500 */
	0x000a30e0, /* Controller 10, led 214, offset 12512 */
	0x000b30ec, /* Controller 11, led 214, offset 12524 */
	0x000030f8, /* Controller 0, led 215, offset 12536 */
	0x00013104, /* Controller 1, led 215, offset 12548 */
	0x00023110, /* Controller 2, led 215, offset 12560 */
	0x0003311c, /* Controller 3, led 215, offset 12572 */
	0x00043128, /* Controller 4, led 215, offset 12584 */
	0x00053134, /* Controller 5, led 215, offset 12596 */
	0x00063140, /* Controller 6, led 215, offset 12608 */
	0x0007314c, /* Controller 7, led 215, offset 12620 */
	0x00083158, /* Controller 8, led 215, offset 12632 */
	0x00093164, /* Controller 9, led 215, offset 12644 */
	0x000a3170, /* Controller 10, led 215, offset 12656 */
	0x000b317c, /* Controller 11, led 215, offset 12668 */
	0x00003188, /* Controller 0, led 216, offset 12680 */
	0x00013194, /* Controller 1, led 216, offset 12692 */
	0x000231a0, /* Controller 2, led 216, offset 12704 */
	0x000331ac, /* Controller 3, led 216, offset 12716 */
	0x000431b8, /* Controller 4, led 216, offset 12728 */
	0x000531c4, /* Controller 5, led 216, offset 12740 */
	0x000631d0, /* Controller 6, led 216, offset 12752 */
	0x000731dc, /* Controller 7, led 216, offset 12764 */
	0x000831e8, /* Controller 8, led 216, offset 12776 */
	0x000931f4, /* Controller 9, led 216, offset 12788 */
	0x000a3200, /* Controller 10, led 216, offset 12800 */
	0x000b320c, /* Controller 11, led 216, offset 12812 */
	0x00003218, /* Controller 0, led 217, offset 12824 */
	0x00013224, /* Controller 1, led 217, offset 12836 */
	0x00023230, /* Controller 2, led 217, offset 12848 */
	0x0003323c, /* Controller 3, led 217, offset 12860 */
	0x00043248, /* Controller 4, led 217, offset 12872 */
	0x00053254, /* Controller 5, led 217, offset 12884 */
	0x00063260, /* Controller 6, led 217, offset 12896 */
	0x0007326c, /* Controller 7, led 217, offset 12908 */
	0x00083278, /* Controller 8, led 217, offset 12920 */
	0x00093284, /* Controller 9, led 217, offset 12932 */
	0x000a3290, /* Controller 10, led 217, offset 12944 */
	0x000b329c, /* Controller 11, led 217, offset 12956 */
	0x000032a8, /* Controller 0, led 218, offset 12968 */
	0x000132b4, /* Controller 1, led 218, offset 12980 */
	0x000232c0, /* Controller 2, led 218, offset 12992 */
	0x000332cc, /* Controller 3, led 218, offset 13004 */
	0x000432d8, /* Controller 4, led 218, offset 13016 */
	0x000532e4, /* Controller 5, led 218, offset 13028 */
	0x000632f0, /* Controller 6, led 218, offset 13040 */
	0x000732fc, /* Controller 7, led 218, offset 13052 */
	0x00083308, /* Controller 8, led 218, offset 13064 */
	0x00093314, /* Controller 9, led 218, offset 13076 */
	0x000a3320, /* Controller 10, led 218, offset 13088 */
	0x000b332c, /* Controller 11, led 218, offset 13100 */
	0x00003338, /* Controller 0, led 219, offset 13112 */
	0x00013344, /* Controller 1, led 219, offset 13124 */
	0x00023350, /* Controller 2, led 219, offset 13136 */
	0x0003335c, /* Controller 3, led 219, offset 13148 */
	0x00043368, /* Controller 4, led 219, offset 13160 */
	0x00053374, /* Controller 5, led 219, offset 13172 */
	0x00063380, /* Controller 6, led 219, offset 13184 */
	0x0007338c, /* Controller 7, led 219, offset 13196 */
	0x00083398, /* Controller 8, led 219, offset 13208 */
	0x000933a4, /* Controller 9, led 219, offset 13220 */
	0x000a33b0, /* Controller 10, led 219, offset 13232 */
	0x000b33bc, /* Controller 11, led 219, offset 13244 */
	0x000033c8, /* Controller 0, led 220, offset 13256 */
	0x000133d4, /* Controller 1, led 220, offset 13268 */
	0x000233e0, /* Controller 2, led 220, offset 13280 */
	0x000333ec, /* Controller 3, led 220, offset 13292 */
	0x000433f8, /* Controller 4, led 220, offset 13304 */
	0x00053404, /* Controller 5, led 220, offset 13316 */
	0x00063410, /* Controller 6, led 220, offset 13328 */
	0x0007341c, /* Controller 7, led 220, offset 13340 */
	0x00083428, /* Controller 8, led 220, offset 13352 */
	0x00093434, /* Controller 9, led 220, offset 13364 */
	0x000a3440, /* Controller 10, led 220, offset 13376 */
	0x000b344c, /* Controller 11, led 220, offset 13388 */
	0x00003458, /* Controller 0, led 221, offset 13400 */
	0x00013464, /* Controller 1, led 221, offset 13412 */
	0x00023470, /* Controller 2, led 221, offset 13424 */
	0x0003347c, /* Controller 3, led 221, offset 13436 */
	0x00043488, /* Controller 4, led 221, offset 13448 */
	0x00053494, /* Controller 5, led 221, offset 13460 */
	0x000634a0, /* Controller 6, led 221, offset 13472 */
	0x000734ac, /* Controller 7, led 221, offset 13484 */
	0x000834b8, /* Controller 8, led 221, offset 13496 */
	0x000934c4, /* Controller 9, led 221, offset 13508 */
	0x000a34d0, /* Controller 10, led 221, offset 13520 */
	0x000b34dc, /* Controller 11, led 221, offset 13532 */
	0x000034e8, /* Controller 0, led 222, offset 13544 */
	0x000134f4, /* Controller 1, led 222, offset 13556 */
	0x00023500, /* Controller 2, led 222, offset 13568 */
	0x0003350c, /* Controller 3, led 222, offset 13580 */
	0x00043518, /* Controller 4, led 222, offset 13592 */
	0x00053524, /* Controller 5, led 222, offset 13604 */
	0x00063530, /* Controller 6, led 222, offset 13616 */
	0x0007353c, /* Controller 7, led 222, offset 13628 */
	0x00083548, /* Controller 8, led 222, offset 13640 */
	0x00093554, /* Controller 9, led 222, offset 13652 */
	0x000a3560, /* Controller 10, led 222, offset 13664 */
	0x000b356c, /* Controller 11, led 222, offset 13676 */
	0x00003578, /* Controller 0, led 223, offset 13688 */
	0x00013584, /* Controller 1, led 223, offset 13700 */
	0x00023590, /* Controller 2, led 223, offset 13712 */
	0x0003359c, /* Controller 3, led 223, offset 13724 */
	0x000435a8, /* Controller 4, led 223, offset 13736 */
	0x000535b4, /* Controller 5, led 223, offset 13748 */
	0x000635c0, /* Controller 6, led 223, offset 13760 */
	0x000735cc, /* Controller 7, led 223, offset 13772 */
	0x000835d8, /* Controller 8, led 223, offset 13784 */
	0x000935e4, /* Controller 9, led 223, offset 13796 */
	0x000a35f0, /* Controller 10, led 223, offset 13808 */
	0x000b35fc, /* Controller 11, led 223, offset 13820 */
	0x00003608, /* Controller 0, led 224, offset 13832 */
	0x00013614, /* Controller 1, led 224, offset 13844 */
	0x00023620, /* Controller 2, led 224, offset 13856 */
	0x0003362c, /* Controller 3, led 224, offset 13868 */
	0x00043638, /* Controller 4, led 224, offset 13880 */
	0x00053644, /* Controller 5, led 224, offset 13892 */
	0x00063650, /* Controller 6, led 224, offset 13904 */
	0x0007365c, /* Controller 7, led 224, offset 13916 */
	0x00083668, /* Controller 8, led 224, offset 13928 */
	0x00093674, /* Controller 9, led 224, offset 13940 */
	0x000a3680, /* Controller 10, led 224, offset 13952 */
	0x000b368c, /* Controller 11, led 224, offset 13964 */
	0x00003698, /* Controller 0, led 225, offset 13976 */
	0x000136a4, /* Controller 1, led 225, offset 13988 */
	0x000236b0, /* Controller 2, led 225, offset 14000 */
	0x000336bc, /* Controller 3, led 225, offset 14012 */
	0x000436c8, /* Controller 4, led 225, offset 14024 */
	0x000536d4, /* Controller 5, led 225, offset 14036 */
	0x000636e0, /* Controller 6, led 225, offset 14048 */
	0x000736ec, /* Controller 7, led 225, offset 14060 */
	0x000836f8, /* Controller 8, led 225, offset 14072 */
	0x00093704, /* Controller 9, led 225, offset 14084 */
	0x000a3710, /* Controller 10, led 225, offset 14096 */
	0x000b371c, /* Controller 11, led 225, offset 14108 */
	0x00003728, /* Controller 0, led 226, offset 14120 */
	0x00013734, /* Controller 1, led 226, offset 14132 */
	0x00023740, /* Controller 2, led 226, offset 14144 */
	0x0003374c, /* Controller 3, led 226, offset 14156 */
	0x00043758, /* Controller 4, led 226, offset 14168 */
	0x00053764, /* Controller 5, led 226, offset 14180 */
	0x00063770, /* Controller 6, led 226, offset 14192 */
	0x0007377c, /* Controller 7, led 226, offset 14204 */
	0x00083788, /* Controller 8, led 226, offset 14216 */
	0x00093794, /* Controller 9, led 226, offset 14228 */
	0x000a37a0, /* Controller 10, led 226, offset 14240 */
	0x000b37ac, /* Controller 11, led 226, offset 14252 */
	0x000037b8, /* Controller 0, led 227, offset 14264 */
	0x000137c4, /* Controller 1, led 227, offset 14276 */
	0x000237d0, /* Controller 2, led 227, offset 14288 */
	0x000337dc, /* Controller 3, led 227, offset 14300 */
	0x000437e8, /* Controller 4, led 227, offset 14312 */
	0x000537f4, /* Controller 5, led 227, offset 14324 */
	0x00063800, /* Controller 6, led 227, offset 14336 */
	0x0007380c, /* Controller 7, led 227, offset 14348 */
	0x00083818, /* Controller 8, led 227, offset 14360 */
	0x00093824, /* Controller 9, led 227, offset 14372 */
	0x000a3830, /* Controller 10, led 227, offset 14384 */
	0x000b383c, /* Controller 11, led 227, offset 14396 */
	0x00003848, /* Controller 0, led 228, offset 14408 */
	0x00013854, /* Controller 1, led 228, offset 14420 */
	0x00023860, /* Controller 2, led 228, offset 14432 */
	0x0003386c, /* Controller 3, led 228, offset 14444 */
	0x00043878, /* Controller 4, led 228, offset 14456 */
	0x00053884, /* Controller 5, led 228, offset 14468 */
	0x00063890, /* Controller 6, led 228, offset 14480 */
	0x0007389c, /* Controller 7, led 228, offset 14492 */
	0x000838a8, /* Controller 8, led 228, offset 14504 */
	0x000938b4, /* Controller 9, led 228, offset 14516 */
	0x000a38c0, /* Controller 10, led 228, offset 14528 */
	0x000b38cc, /* Controller 11, led 228, offset 14540 */
	0x000038d8, /* Controller 0, led 229, offset 14552 */
	0x000138e4, /* Controller 1, led 229, offset 14564 */
	0x000238f0, /* Controller 2, led 229, offset 14576 */
	0x000338fc, /* Controller 3, led 229, offset 14588 */
	0x00043908, /* Controller 4, led 229, offset 14600 */
	0x00053914, /* Controller 5, led 229, offset 14612 */
	0x00063920, /* Controller 6, led 229, offset 14624 */
	0x0007392c, /* Controller 7, led 229, offset 14636 */
	0x00083938, /* Controller 8, led 229, offset 14648 */
	0x00093944, /* Controller 9, led 229, offset 14660 */
	0x000a3950, /* Controller 10, led 229, offset 14672 */
	0x000b395c, /* Controller 11, led 229, offset 14684 */
	0x00003968, /* Controller 0, led 230, offset 14696 */
	0x00013974, /* Controller 1, led 230, offset 14708 */
	0x00023980, /* Controller 2, led 230, offset 14720 */
	0x0003398c, /* Controller 3, led 230, offset 14732 */
	0x00043998, /* Controller 4, led 230, offset 14744 */
	0x000539a4, /* Controller 5, led 230, offset 14756 */
	0x000639b0, /* Controller 6, led 230, offset 14768 */
	0x000739bc, /* Controller 7, led 230, offset 14780 */
	0x000839c8, /* Controller 8, led 230, offset 14792 */
	0x000939d4, /* Controller 9, led 230, offset 14804 */
	0x000a39e0, /* Controller 10, led 230, offset 14816 */
	0x000b39ec, /* Controller 11, led 230, offset 14828 */
	0x000039f8, /* Controller 0, led 231, offset 14840 */
	0x00013a04, /* Controller 1, led 231, offset 14852 */
	0x00023a10, /* Controller 2, led 231, offset 14864 */
	0x00033a1c, /* Controller 3, led 231, offset 14876 */
	0x00043a28, /* Controller 4, led 231, offset 14888 */
	0x00053a34, /* Controller 5, led 231, offset 14900 */
	0x00063a40, /* Controller 6, led 231, offset 14912 */
	0x00073a4c, /* Controller 7, led 231, offset 14924 */
	0x00083a58, /* Controller 8, led 231, offset 14936 */
	0x00093a64, /* Controller 9, led 231, offset 14948 */
	0x000a3a70, /* Controller 10, led 231, offset 14960 */
	0x000b3a7c, /* Controller 11, led 231, offset 14972 */
	0x00003a88, /* Controller 0, led 232, offset 14984 */
	0x00013a94, /* Controller 1, led 232, offset 14996 */
	0x00023aa0, /* Controller 2, led 232, offset 15008 */
	0x00033aac, /* Controller 3, led 232, offset 15020 */
	0x00043ab8, /* Controller 4, led 232, offset 15032 */
	0x00053ac4, /* Controller 5, led 232, offset 15044 */
	0x00063ad0, /* Controller 6, led 232, offset 15056 */
	0x00073adc, /* Controller 7, led 232, offset 15068 */
	0x00083ae8, /* Controller 8, led 232, offset 15080 */
	0x00093af4, /* Controller 9, led 232, offset 15092 */
	0x000a3b00, /* Controller 10, led 232, offset 15104 */
	0x000b3b0c, /* Controller 11, led 232, offset 15116 */
	0x00003b18, /* Controller 0, led 233, offset 15128 */
	0x00013b24, /* Controller 1, led 233, offset 15140 */
	0x00023b30, /* Controller 2, led 233, offset 15152 */
	0x00033b3c, /* Controller 3, led 233, offset 15164 */
	0x00043b48, /* Controller 4, led 233, offset 15176 */
	0x00053b54, /* Controller 5, led 233, offset 15188 */
	0x00063b60, /* Controller 6, led 233, offset 15200 */
	0x00073b6c, /* Controller 7, led 233, offset 15212 */
	0x00083b78, /* Controller 8, led 233, offset 15224 */
	0x00093b84, /* Controller 9, led 233, offset 15236 */
	0x000a3b90, /* Controller 10, led 233, offset 15248 */
	0x000b3b9c, /* Controller 11, led 233, offset 15260 */
	0x00003ba8, /* Controller 0, led 234, offset 15272 */
	0x00013bb4, /* Controller 1, led 234, offset 15284 */
	0x00023bc0, /* Controller 2, led 234, offset 15296 */
	0x00033bcc, /* Controller 3, led 234, offset 15308 */
	0x00043bd8, /* Controller 4, led 234, offset 15320 */
	0x00053be4, /* Controller 5, led 234, offset 15332 */
	0x00063bf0, /* Controller 6, led 234, offset 15344 */
	0x00073bfc, /* Controller 7, led 234, offset 15356 */
	0x00083c08, /* Controller 8, led 234, offset 15368 */
	0x00093c14, /* Controller 9, led 234, offset 15380 */
	0x000a3c20, /* Controller 10, led 234, offset 15392 */
	0x000b3c2c, /* Controller 11, led 234, offset 15404 */
	0x00003c38, /* Controller 0, led 235, offset 15416 */
	0x00013c44, /* Controller 1, led 235, offset 15428 */
	0x00023c50, /* Controller 2, led 235, offset 15440 */
	0x00033c5c, /* Controller 3, led 235, offset 15452 */
	0x00043c68, /* Controller 4, led 235, offset 15464 */
	0x00053c74, /* Controller 5, led 235, offset 15476 */
	0x00063c80, /* Controller 6, led 235, offset 15488 */
	0x00073c8c, /* Controller 7, led 235, offset 15500 */
	0x00083c98, /* Controller 8, led 235, offset 15512 */
	0x00093ca4, /* Controller 9, led 235, offset 15524 */
	0x000a3cb0, /* Controller 10, led 235, offset 15536 */
	0x000b3cbc, /* Controller 11, led 235, offset 15548 */
	0x00003cc8, /* Controller 0, led 236, offset 15560 */
	0x00013cd4, /* Controller 1, led 236, offset 15572 */
	0x00023ce0, /* Controller 2, led 236, offset 15584 */
	0x00033cec, /* Controller 3, led 236, offset 15596 */
	0x00043cf8, /* Controller 4, led 236, offset 15608 */
	0x00053d04, /* Controller 5, led 236, offset 15620 */
	0x00063d10, /* Controller 6, led 236, offset 15632 */
	0x00073d1c, /* Controller 7, led 236, offset 15644 */
	0x00083d28, /* Controller 8, led 236, offset 15656 */
	0x00093d34, /* Controller 9, led 236, offset 15668 */
	0x000a3d40, /* Controller 10, led 236, offset 15680 */
	0x000b3d4c, /* Controller 11, led 236, offset 15692 */
	0x00003d58, /* Controller 0, led 237, offset 15704 */
	0x00013d64, /* Controller 1, led 237, offset 15716 */
	0x00023d70, /* Controller 2, led 237, offset 15728 */
	0x00033d7c, /* Controller 3, led 237, offset 15740 */
	0x00043d88, /* Controller 4, led 237, offset 15752 */
	0x00053d94, /* Controller 5, led 237, offset 15764 */
	0x00063da0, /* Controller 6, led 237, offset 15776 */
	0x00073dac, /* Controller 7, led 237, offset 15788 */
	0x00083db8, /* Controller 8, led 237, offset 15800 */
	0x00093dc4, /* Controller 9, led 237, offset 15812 */
	0x000a3dd0, /* Controller 10, led 237, offset 15824 */
	0x000b3ddc, /* Controller 11, led 237, offset 15836 */
	0x00003de8, /* Controller 0, led 238, offset 15848 */
	0x00013df4, /* Controller 1, led 238, offset 15860 */
	0x00023e00, /* Controller 2, led 238, offset 15872 */
	0x00033e0c, /* Controller 3, led 238, offset 15884 */
	0x00043e18, /* Controller 4, led 238, offset 15896 */
	0x00053e24, /* Controller 5, led 238, offset 15908 */
	0x00063e30, /* Controller 6, led 238, offset 15920 */
	0x00073e3c, /* Controller 7, led 238, offset 15932 */
	0x00083e48, /* Controller 8, led 238, offset 15944 */
	0x00093e54, /* Controller 9, led 238, offset 15956 */
	0x000a3e60, /* Controller 10, led 238, offset 15968 */
	0x000b3e6c, /* Controller 11, led 238, offset 15980 */
	0x00003e78, /* Controller 0, led 239, offset 15992 */
	0x00013e84, /* Controller 1, led 239, offset 16004 */
	0x00023e90, /* Controller 2, led 239, offset 16016 */
	0x00033e9c, /* Controller 3, led 239, offset 16028 */
	0x00043ea8, /* Controller 4, led 239, offset 16040 */
	0x00053eb4, /* Controller 5, led 239, offset 16052 */
	0x00063ec0, /* Controller 6, led 239, offset 16064 */
	0x00073ecc, /* Controller 7, led 239, offset 16076 */
	0x00083ed8, /* Controller 8, led 239, offset 16088 */
	0x00093ee4, /* Controller 9, led 239, offset 16100 */
	0x000a3ef0, /* Controller 10, led 239, offset 16112 */
	0x000b3efc, /* Controller 11, led 239, offset 16124 */
	0x00003f08, /* Controller 0, led 240, offset 16136 */
	0x00013f14, /* Controller 1, led 240, offset 16148 */
	0x00023f20, /* Controller 2, led 240, offset 16160 */
	0x00033f2c, /* Controller 3, led 240, offset 16172 */
	0x00043f38, /* Controller 4, led 240, offset 16184 */
	0x00053f44, /* Controller 5, led 240, offset 16196 */
	0x00063f50, /* Controller 6, led 240, offset 16208 */
	0x00073f5c, /* Controller 7, led 240, offset 16220 */
	0x00083f68, /* Controller 8, led 240, offset 16232 */
	0x00093f74, /* Controller 9, led 240, offset 16244 */
	0x000a3f80, /* Controller 10, led 240, offset 16256 */
	0x000b3f8c, /* Controller 11, led 240, offset 16268 */
	0x00003f98, /* Controller 0, led 241, offset 16280 */
	0x00013fa4, /* Controller 1, led 241, offset 16292 */
	0x00023fb0, /* Controller 2, led 241, offset 16304 */
	0x00033fbc, /* Controller 3, led 241, offset 16316 */
	0x00043fc8, /* Controller 4, led 241, offset 16328 */
	0x00053fd4, /* Controller 5, led 241, offset 16340 */
	0x00063fe0, /* Controller 6, led 241, offset 16352 */
	0x00073fec, /* Controller 7, led 241, offset 16364 */
	0x00083ff8, /* Controller 8, led 241, offset 16376 */
	0x00094004, /* Controller 9, led 241, offset 16388 */
	0x000a4010, /* Controller 10, led 241, offset 16400 */
	0x000b401c, /* Controller 11, led 241, offset 16412 */
	0x00004028, /* Controller 0, led 242, offset 16424 */
	0x00014034, /* Controller 1, led 242, offset 16436 */
	0x00024040, /* Controller 2, led 242, offset 16448 */
	0x0003404c, /* Controller 3, led 242, offset 16460 */
	0x00044058, /* Controller 4, led 242, offset 16472 */
	0x00054064, /* Controller 5, led 242, offset 16484 */
	0x00064070, /* Controller 6, led 242, offset 16496 */
	0x0007407c, /* Controller 7, led 242, offset 16508 */
	0x00084088, /* Controller 8, led 242, offset 16520 */
	0x00094094, /* Controller 9, led 242, offset 16532 */
	0x000a40a0, /* Controller 10, led 242, offset 16544 */
	0x000b40ac, /* Controller 11, led 242, offset 16556 */
	0x000040b8, /* Controller 0, led 243, offset 16568 */
	0x000140c4, /* Controller 1, led 243, offset 16580 */
	0x000240d0, /* Controller 2, led 243, offset 16592 */
	0x000340dc, /* Controller 3, led 243, offset 16604 */
	0x000440e8, /* Controller 4, led 243, offset 16616 */
	0x000540f4, /* Controller 5, led 243, offset 16628 */
	0x00064100, /* Controller 6, led 243, offset 16640 */
	0x0007410c, /* Controller 7, led 243, offset 16652 */
	0x00084118, /* Controller 8, led 243, offset 16664 */
	0x00094124, /* Controller 9, led 243, offset 16676 */
	0x000a4130, /* Controller 10, led 243, offset 16688 */
	0x000b413c, /* Controller 11, led 243, offset 16700 */
	0x00004148, /* Controller 0, led 244, offset 16712 */
	0x00014154, /* Controller 1, led 244, offset 16724 */
	0x00024160, /* Controller 2, led 244, offset 16736 */
	0x0003416c, /* Controller 3, led 244, offset 16748 */
	0x00044178, /* Controller 4, led 244, offset 16760 */
	0x00054184, /* Controller 5, led 244, offset 16772 */
	0x00064190, /* Controller 6, led 244, offset 16784 */
	0x0007419c, /* Controller 7, led 244, offset 16796 */
	0x000841a8, /* Controller 8, led 244, offset 16808 */
	0x000941b4, /* Controller 9, led 244, offset 16820 */
	0x000a41c0, /* Controller 10, led 244, offset 16832 */
	0x000b41cc, /* Controller 11, led 244, offset 16844 */
	0x000041d8, /* Controller 0, led 245, offset 16856 */
	0x000141e4, /* Controller 1, led 245, offset 16868 */
	0x000241f0, /* Controller 2, led 245, offset 16880 */
	0x000341fc, /* Controller 3, led 245, offset 16892 */
	0x00044208, /* Controller 4, led 245, offset 16904 */
	0x00054214, /* Controller 5, led 245, offset 16916 */
	0x00064220, /* Controller 6, led 245, offset 16928 */
	0x0007422c, /* Controller 7, led 245, offset 16940 */
	0x00084238, /* Controller 8, led 245, offset 16952 */
	0x00094244, /* Controller 9, led 245, offset 16964 */
	0x000a4250, /* Controller 10, led 245, offset 16976 */
	0x000b425c, /* Controller 11, led 245, offset 16988 */
	0x00004268, /* Controller 0, led 246, offset 17000 */
	0x00014274, /* Controller 1, led 246, offset 17012 */
	0x00024280, /* Controller 2, led 246, offset 17024 */
	0x0003428c, /* Controller 3, led 246, offset 17036 */
	0x00044298, /* Controller 4, led 246, offset 17048 */
	0x000542a4, /* Controller 5, led 246, offset 17060 */
	0x000642b0, /* Controller 6, led 246, offset 17072 */
	0x000742bc, /* Controller 7, led 246, offset 17084 */
	0x000842c8, /* Controller 8, led 246, offset 17096 */
	0x000942d4, /* Controller 9, led 246, offset 17108 */
	0x000a42e0, /* Controller 10, led 246, offset 17120 */
	0x000b42ec, /* Controller 11, led 246, offset 17132 */
	0x000042f8, /* Controller 0, led 247, offset 17144 */
	0x00014304, /* Controller 1, led 247, offset 17156 */
	0x00024310, /* Controller 2, led 247, offset 17168 */
	0x0003431c, /* Controller 3, led 247, offset 17180 */
	0x00044328, /* Controller 4, led 247, offset 17192 */
	0x00054334, /* Controller 5, led 247, offset 17204 */
	0x00064340, /* Controller 6, led 247, offset 17216 */
	0x0007434c, /* Controller 7, led 247, offset 17228 */
	0x00084358, /* Controller 8, led 247, offset 17240 */
	0x00094364, /* Controller 9, led 247, offset 17252 */
	0x000a4370, /* Controller 10, led 247, offset 17264 */
	0x000b437c, /* Controller 11, led 247, offset 17276 */
	0x00004388, /* Controller 0, led 248, offset 17288 */
	0x00014394, /* Controller 1, led 248, offset 17300 */
	0x000243a0, /* Controller 2, led 248, offset 17312 */
	0x000343ac, /* Controller 3, led 248, offset 17324 */
	0x000443b8, /* Controller 4, led 248, offset 17336 */
	0x000543c4, /* Controller 5, led 248, offset 17348 */
	0x000643d0, /* Controller 6, led 248, offset 17360 */
	0x000743dc, /* Controller 7, led 248, offset 17372 */
	0x000843e8, /* Controller 8, led 248, offset 17384 */
	0x000943f4, /* Controller 9, led 248, offset 17396 */
	0x000a4400, /* Controller 10, led 248, offset 17408 */
	0x000b440c, /* Controller 11, led 248, offset 17420 */
	0x00004418, /* Controller 0, led 249, offset 17432 */
	0x00014424, /* Controller 1, led 249, offset 17444 */
	0x00024430, /* Controller 2, led 249, offset 17456 */
	0x0003443c, /* Controller 3, led 249, offset 17468 */
	0x00044448, /* Controller 4, led 249, offset 17480 */
	0x00054454, /* Controller 5, led 249, offset 17492 */
	0x00064460, /* Controller 6, led 249, offset 17504 */
	0x0007446c, /* Controller 7, led 249, offset 17516 */
	0x00084478, /* Controller 8, led 249, offset 17528 */
	0x00094484, /* Controller 9, led 249, offset 17540 */
	0x000a4490, /* Controller 10, led 249, offset 17552 */
	0x000b449c, /* Controller 11, led 249, offset 17564 */
	0x000044a8, /* Controller 0, led 250, offset 17576 */
	0x000144b4, /* Controller 1, led 250, offset 17588 */
	0x000244c0, /* Controller 2, led 250, offset 17600 */
	0x000344cc, /* Controller 3, led 250, offset 17612 */
	0x000444d8, /* Controller 4, led 250, offset 17624 */
	0x000544e4, /* Controller 5, led 250, offset 17636 */
	0x000644f0, /* Controller 6, led 250, offset 17648 */
	0x000744fc, /* Controller 7, led 250, offset 17660 */
	0x00084508, /* Controller 8, led 250, offset 17672 */
	0x00094514, /* Controller 9, led 250, offset 17684 */
	0x000a4520, /* Controller 10, led 250, offset 17696 */
	0x000b452c, /* Controller 11, led 250, offset 17708 */
	0x00004538, /* Controller 0, led 251, offset 17720 */
	0x00014544, /* Controller 1, led 251, offset 17732 */
	0x00024550, /* Controller 2, led 251, offset 17744 */
	0x0003455c, /* Controller 3, led 251, offset 17756 */
	0x00044568, /* Controller 4, led 251, offset 17768 */
	0x00054574, /* Controller 5, led 251, offset 17780 */
	0x00064580, /* Controller 6, led 251, offset 17792 */
	0x0007458c, /* Controller 7, led 251, offset 17804 */
	0x00084598, /* Controller 8, led 251, offset 17816 */
	0x000945a4, /* Controller 9, led 251, offset 17828 */
	0x000a45b0, /* Controller 10, led 251, offset 17840 */
	0x000b45bc, /* Controller 11, led 251, offset 17852 */
	0x000045c8, /* Controller 0, led 252, offset 17864 */
	0x000145d4, /* Controller 1, led 252, offset 17876 */
	0x000245e0, /* Controller 2, led 252, offset 17888 */
	0x000345ec, /* Controller 3, led 252, offset 17900 */
	0x000445f8, /* Controller 4, led 252, offset 17912 */
	0x00054604, /* Controller 5, led 252, offset 17924 */
	0x00064610, /* Controller 6, led 252, offset 17936 */
	0x0007461c, /* Controller 7, led 252, offset 17948 */
	0x00084628, /* Controller 8, led 252, offset 17960 */
	0x00094634, /* Controller 9, led 252, offset 17972 */
	0x000a4640, /* Controller 10, led 252, offset 17984 */
	0x000b464c, /* Controller 11, led 252, offset 17996 */
	0x00004658, /* Controller 0, led 253, offset 18008 */
	0x00014664, /* Controller 1, led 253, offset 18020 */
	0x00024670, /* Controller 2, led 253, offset 18032 */
	0x0003467c, /* Controller 3, led 253, offset 18044 */
	0x00044688, /* Controller 4, led 253, offset 18056 */
	0x00054694, /* Controller 5, led 253, offset 18068 */
	0x000646a0, /* Controller 6, led 253, offset 18080 */
	0x000746ac, /* Controller 7, led 253, offset 18092 */
	0x000846b8, /* Controller 8, led 253, offset 18104 */
	0x000946c4, /* Controller 9, led 253, offset 18116 */
	0x000a46d0, /* Controller 10, led 253, offset 18128 */
	0x000b46dc, /* Controller 11, led 253, offset 18140 */
	0x000046e8, /* Controller 0, led 254, offset 18152 */
	0x000146f4, /* Controller 1, led 254, offset 18164 */
	0x00024700, /* Controller 2, led 254, offset 18176 */
	0x0003470c, /* Controller 3, led 254, offset 18188 */
	0x00044718, /* Controller 4, led 254, offset 18200 */
	0x00054724, /* Controller 5, led 254, offset 18212 */
	0x00064730, /* Controller 6, led 254, offset 18224 */
	0x0007473c, /* Controller 7, led 254, offset 18236 */
	0x00084748, /* Controller 8, led 254, offset 18248 */
	0x00094754, /* Controller 9, led 254, offset 18260 */
	0x000a4760, /* Controller 10, led 254, offset 18272 */
	0x000b476c, /* Controller 11, led 254, offset 18284 */
	0x00004778, /* Controller 0, led 255, offset 18296 */
	0x00014784, /* Controller 1, led 255, offset 18308 */
	0x00024790, /* Controller 2, led 255, offset 18320 */
	0x0003479c, /* Controller 3, led 255, offset 18332 */
	0x000447a8, /* Controller 4, led 255, offset 18344 */
	0x000547b4, /* Controller 5, led 255, offset 18356 */
	0x000647c0, /* Controller 6, led 255, offset 18368 */
	0x000747cc, /* Controller 7, led 255, offset 18380 */
	0x000847d8, /* Controller 8, led 255, offset 18392 */
	0x000947e4, /* Controller 9, led 255, offset 18404 */
	0x000a47f0, /* Controller 10, led 255, offset 18416 */
	0x000b47fc, /* Controller 11, led 255, offset 18428 */
	0x0000000c, /* Controller 0, led 256, offset 12 */
	0x00010018, /* Controller 1, led 256, offset 24 */
	0x00020024, /* Controller 2, led 256, offset 36 */
	0x00030030, /* Controller 3, led 256, offset 48 */
	0x0004003c, /* Controller 4, led 256, offset 60 */
	0x00050048, /* Controller 5, led 256, offset 72 */
	0x00060054, /* Controller 6, led 256, offset 84 */
	0x00070060, /* Controller 7, led 256, offset 96 */
	0x0008006c, /* Controller 8, led 256, offset 108 */
	0x00090078, /* Controller 9, led 256, offset 120 */
	0x000a0084, /* Controller 10, led 256, offset 132 */
	0x000b0090, /* Controller 11, led 256, offset 144 */
	0x0000009c, /* Controller 0, led 257, offset 156 */
	0x000100a8, /* Controller 1, led 257, offset 168 */
	0x000200b4, /* Controller 2, led 257, offset 180 */
	0x000300c0, /* Controller 3, led 257, offset 192 */
	0x000400cc, /* Controller 4, led 257, offset 204 */
	0x000500d8, /* Controller 5, led 257, offset 216 */
	0x000600e4, /* Controller 6, led 257, offset 228 */
	0x000700f0, /* Controller 7, led 257, offset 240 */
	0x000800fc, /* Controller 8, led 257, offset 252 */
	0x00090108, /* Controller 9, led 257, offset 264 */
	0x000a0114, /* Controller 10, led 257, offset 276 */
	0x000b0120, /* Controller 11, led 257, offset 288 */
	0x0000012c, /* Controller 0, led 258, offset 300 */
	0x00010138, /* Controller 1, led 258, offset 312 */
	0x00020144, /* Controller 2, led 258, offset 324 */
	0x00030150, /* Controller 3, led 258, offset 336 */
	0x0004015c, /* Controller 4, led 258, offset 348 */
	0x00050168, /* Controller 5, led 258, offset 360 */
	0x00060174, /* Controller 6, led 258, offset 372 */
	0x00070180, /* Controller 7, led 258, offset 384 */
	0x0008018c, /* Controller 8, led 258, offset 396 */
	0x00090198, /* Controller 9, led 258, offset 408 */
	0x000a01a4, /* Controller 10, led 258, offset 420 */
	0x000b01b0, /* Controller 11, led 258, offset 432 */
	0x000001bc, /* Controller 0, led 259, offset 444 */
	0x000101c8, /* Controller 1, led 259, offset 456 */
	0x000201d4, /* Controller 2, led 259, offset 468 */
	0x000301e0, /* Controller 3, led 259, offset 480 */
	0x000401ec, /* Controller 4, led 259, offset 492 */
	0x000501f8, /* Controller 5, led 259, offset 504 */
	0x00060204, /* Controller 6, led 259, offset 516 */
	0x00070210, /* Controller 7, led 259, offset 528 */
	0x0008021c, /* Controller 8, led 259, offset 540 */
	0x00090228, /* Controller 9, led 259, offset 552 */
	0x000a0234, /* Controller 10, led 259, offset 564 */
	0x000b0240, /* Controller 11, led 259, offset 576 */
	0x0000024c, /* Controller 0, led 260, offset 588 */
	0x00010258, /* Controller 1, led 260, offset 600 */
	0x00020264, /* Controller 2, led 260, offset 612 */
	0x00030270, /* Controller 3, led 260, offset 624 */
	0x0004027c, /* Controller 4, led 260, offset 636 */
	0x00050288, /* Controller 5, led 260, offset 648 */
	0x00060294, /* Controller 6, led 260, offset 660 */
	0x000702a0, /* Controller 7, led 260, offset 672 */
	0x000802ac, /* Controller 8, led 260, offset 684 */
	0x000902b8, /* Controller 9, led 260, offset 696 */
	0x000a02c4, /* Controller 10, led 260, offset 708 */
	0x000b02d0, /* Controller 11, led 260, offset 720 */
	0x000002dc, /* Controller 0, led 261, offset 732 */
	0x000102e8, /* Controller 1, led 261, offset 744 */
	0x000202f4, /* Controller 2, led 261, offset 756 */
	0x00030300, /* Controller 3, led 261, offset 768 */
	0x0004030c, /* Controller 4, led 261, offset 780 */
	0x00050318, /* Controller 5, led 261, offset 792 */
	0x00060324, /* Controller 6, led 261, offset 804 */
	0x00070330, /* Controller 7, led 261, offset 816 */
	0x0008033c, /* Controller 8, led 261, offset 828 */
	0x00090348, /* Controller 9, led 261, offset 840 */
	0x000a0354, /* Controller 10, led 261, offset 852 */
	0x000b0360, /* Controller 11, led 261, offset 864 */
	0x0000036c, /* Controller 0, led 262, offset 876 */
	0x00010378, /* Controller 1, led 262, offset 888 */
	0x00020384, /* Controller 2, led 262, offset 900 */
	0x00030390, /* Controller 3, led 262, offset 912 */
	0x0004039c, /* Controller 4, led 262, offset 924 */
	0x000503a8, /* Controller 5, led 262, offset 936 */
	0x000603b4, /* Controller 6, led 262, offset 948 */
	0x000703c0, /* Controller 7, led 262, offset 960 */
	0x000803cc, /* Controller 8, led 262, offset 972 */
	0x000903d8, /* Controller 9, led 262, offset 984 */
	0x000a03e4, /* Controller 10, led 262, offset 996 */
	0x000b03f0, /* Controller 11, led 262, offset 1008 */
	0x000003fc, /* Controller 0, led 263, offset 1020 */
	0x00010408, /* Controller 1, led 263, offset 1032 */
	0x00020414, /* Controller 2, led 263, offset 1044 */
	0x00030420, /* Controller 3, led 263, offset 1056 */
	0x0004042c, /* Controller 4, led 263, offset 1068 */
	0x00050438, /* Controller 5, led 263, offset 1080 */
	0x00060444, /* Controller 6, led 263, offset 1092 */
	0x00070450, /* Controller 7, led 263, offset 1104 */
	0x0008045c, /* Controller 8, led 263, offset 1116 */
	0x00090468, /* Controller 9, led 263, offset 1128 */
	0x000a0474, /* Controller 10, led 263, offset 1140 */
	0x000b0480, /* Controller 11, led 263, offset 1152 */
	0x0000048c, /* Controller 0, led 264, offset 1164 */
	0x00010498, /* Controller 1, led 264, offset 1176 */
	0x000204a4, /* Controller 2, led 264, offset 1188 */
	0x000304b0, /* Controller 3, led 264, offset 1200 */
	0x000404bc, /* Controller 4, led 264, offset 1212 */
	0x000504c8, /* Controller 5, led 264, offset 1224 */
	0x000604d4, /* Controller 6, led 264, offset 1236 */
	0x000704e0, /* Controller 7, led 264, offset 1248 */
	0x000804ec, /* Controller 8, led 264, offset 1260 */
	0x000904f8, /* Controller 9, led 264, offset 1272 */
	0x000a0504, /* Controller 10, led 264, offset 1284 */
	0x000b0510, /* Controller 11, led 264, offset 1296 */
	0x0000051c, /* Controller 0, led 265, offset 1308 */
	0x00010528, /* Controller 1, led 265, offset 1320 */
	0x00020534, /* Controller 2, led 265, offset 1332 */
	0x00030540, /* Controller 3, led 265, offset 1344 */
	0x0004054c, /* Controller 4, led 265, offset 1356 */
	0x00050558, /* Controller 5, led 265, offset 1368 */
	0x00060564, /* Controller 6, led 265, offset 1380 */
	0x00070570, /* Controller 7, led 265, offset 1392 */
	0x0008057c, /* Controller 8, led 265, offset 1404 */
	0x00090588, /* Controller 9, led 265, offset 1416 */
	0x000a0594, /* Controller 10, led 265, offset 1428 */
	0x000b05a0, /* Controller 11, led 265, offset 1440 */
	0x000005ac, /* Controller 0, led 266, offset 1452 */
	0x000105b8, /* Controller 1, led 266, offset 1464 */
	0x000205c4, /* Controller 2, led 266, offset 1476 */
	0x000305d0, /* Controller 3, led 266, offset 1488 */
	0x000405dc, /* Controller 4, led 266, offset 1500 */
	0x000505e8, /* Controller 5, led 266, offset 1512 */
	0x000605f4, /* Controller 6, led 266, offset 1524 */
	0x00070600, /* Controller 7, led 266, offset 1536 */
	0x0008060c, /* Controller 8, led 266, offset 1548 */
	0x00090618, /* Controller 9, led 266, offset 1560 */
	0x000a0624, /* Controller 10, led 266, offset 1572 */
	0x000b0630, /* Controller 11, led 266, offset 1584 */
	0x0000063c, /* Controller 0, led 267, offset 1596 */
	0x00010648, /* Controller 1, led 267, offset 1608 */
	0x00020654, /* Controller 2, led 267, offset 1620 */
	0x00030660, /* Controller 3, led 267, offset 1632 */
	0x0004066c, /* Controller 4, led 267, offset 1644 */
	0x00050678, /* Controller 5, led 267, offset 1656 */
	0x00060684, /* Controller 6, led 267, offset 1668 */
	0x00070690, /* Controller 7, led 267, offset 1680 */
	0x0008069c, /* Controller 8, led 267, offset 1692 */
	0x000906a8, /* Controller 9, led 267, offset 1704 */
	0x000a06b4, /* Controller 10, led 267, offset 1716 */
	0x000b06c0, /* Controller 11, led 267, offset 1728 */
	0x000006cc, /* Controller 0, led 268, offset 1740 */
	0x000106d8, /* Controller 1, led 268, offset 1752 */
	0x000206e4, /* Controller 2, led 268, offset 1764 */
	0x000306f0, /* Controller 3, led 268, offset 1776 */
	0x000406fc, /* Controller 4, led 268, offset 1788 */
	0x00050708, /* Controller 5, led 268, offset 1800 */
	0x00060714, /* Controller 6, led 268, offset 1812 */
	0x00070720, /* Controller 7, led 268, offset 1824 */
	0x0008072c, /* Controller 8, led 268, offset 1836 */
	0x00090738, /* Controller 9, led 268, offset 1848 */
	0x000a0744, /* Controller 10, led 268, offset 1860 */
	0x000b0750, /* Controller 11, led 268, offset 1872 */
	0x0000075c, /* Controller 0, led 269, offset 1884 */
	0x00010768, /* Controller 1, led 269, offset 1896 */
	0x00020774, /* Controller 2, led 269, offset 1908 */
	0x00030780, /* Controller 3, led 269, offset 1920 */
	0x0004078c, /* Controller 4, led 269, offset 1932 */
	0x00050798, /* Controller 5, led 269, offset 1944 */
	0x000607a4, /* Controller 6, led 269, offset 1956 */
	0x000707b0, /* Controller 7, led 269, offset 1968 */
	0x000807bc, /* Controller 8, led 269, offset 1980 */
	0x000907c8, /* Controller 9, led 269, offset 1992 */
	0x000a07d4, /* Controller 10, led 269, offset 2004 */
	0x000b07e0, /* Controller 11, led 269, offset 2016 */
	0x000007ec, /* Controller 0, led 270, offset 2028 */
	0x000107f8, /* Controller 1, led 270, offset 2040 */
	0x00020804, /* Controller 2, led 270, offset 2052 */
	0x00030810, /* Controller 3, led 270, offset 2064 */
	0x0004081c, /* Controller 4, led 270, offset 2076 */
	0x00050828, /* Controller 5, led 270, offset 2088 */
	0x00060834, /* Controller 6, led 270, offset 2100 */
	0x00070840, /* Controller 7, led 270, offset 2112 */
	0x0008084c, /* Controller 8, led 270, offset 2124 */
	0x00090858, /* Controller 9, led 270, offset 2136 */
	0x000a0864, /* Controller 10, led 270, offset 2148 */
	0x000b0870, /* Controller 11, led 270, offset 2160 */
	0x0000087c, /* Controller 0, led 271, offset 2172 */
	0x00010888, /* Controller 1, led 271, offset 2184 */
	0x00020894, /* Controller 2, led 271, offset 2196 */
	0x000308a0, /* Controller 3, led 271, offset 2208 */
	0x000408ac, /* Controller 4, led 271, offset 2220 */
	0x000508b8, /* Controller 5, led 271, offset 2232 */
	0x000608c4, /* Controller 6, led 271, offset 2244 */
	0x000708d0, /* Controller 7, led 271, offset 2256 */
	0x000808dc, /* Controller 8, led 271, offset 2268 */
	0x000908e8, /* Controller 9, led 271, offset 2280 */
	0x000a08f4, /* Controller 10, led 271, offset 2292 */
	0x000b0900, /* Controller 11, led 271, offset 2304 */
	0x0000090c, /* Controller 0, led 272, offset 2316 */
	0x00010918, /* Controller 1, led 272, offset 2328 */
	0x00020924, /* Controller 2, led 272, offset 2340 */
	0x00030930, /* Controller 3, led 272, offset 2352 */
	0x0004093c, /* Controller 4, led 272, offset 2364 */
	0x00050948, /* Controller 5, led 272, offset 2376 */
	0x00060954, /* Controller 6, led 272, offset 2388 */
	0x00070960, /* Controller 7, led 272, offset 2400 */
	0x0008096c, /* Controller 8, led 272, offset 2412 */
	0x00090978, /* Controller 9, led 272, offset 2424 */
	0x000a0984, /* Controller 10, led 272, offset 2436 */
	0x000b0990, /* Controller 11, led 272, offset 2448 */
	0x0000099c, /* Controller 0, led 273, offset 2460 */
	0x000109a8, /* Controller 1, led 273, offset 2472 */
	0x000209b4, /* Controller 2, led 273, offset 2484 */
	0x000309c0, /* Controller 3, led 273, offset 2496 */
	0x000409cc, /* Controller 4, led 273, offset 2508 */
	0x000509d8, /* Controller 5, led 273, offset 2520 */
	0x000609e4, /* Controller 6, led 273, offset 2532 */
	0x000709f0, /* Controller 7, led 273, offset 2544 */
	0x000809fc, /* Controller 8, led 273, offset 2556 */
	0x00090a08, /* Controller 9, led 273, offset 2568 */
	0x000a0a14, /* Controller 10, led 273, offset 2580 */
	0x000b0a20, /* Controller 11, led 273, offset 2592 */
	0x00000a2c, /* Controller 0, led 274, offset 2604 */
	0x00010a38, /* Controller 1, led 274, offset 2616 */
	0x00020a44, /* Controller 2, led 274, offset 2628 */
	0x00030a50, /* Controller 3, led 274, offset 2640 */
	0x00040a5c, /* Controller 4, led 274, offset 2652 */
	0x00050a68, /* Controller 5, led 274, offset 2664 */
	0x00060a74, /* Controller 6, led 274, offset 2676 */
	0x00070a80, /* Controller 7, led 274, offset 2688 */
	0x00080a8c, /* Controller 8, led 274, offset 2700 */
	0x00090a98, /* Controller 9, led 274, offset 2712 */
	0x000a0aa4, /* Controller 10, led 274, offset 2724 */
	0x000b0ab0, /* Controller 11, led 274, offset 2736 */
	0x00000abc, /* Controller 0, led 275, offset 2748 */
	0x00010ac8, /* Controller 1, led 275, offset 2760 */
	0x00020ad4, /* Controller 2, led 275, offset 2772 */
	0x00030ae0, /* Controller 3, led 275, offset 2784 */
	0x00040aec, /* Controller 4, led 275, offset 2796 */
	0x00050af8, /* Controller 5, led 275, offset 2808 */
	0x00060b04, /* Controller 6, led 275, offset 2820 */
	0x00070b10, /* Controller 7, led 275, offset 2832 */
	0x00080b1c, /* Controller 8, led 275, offset 2844 */
	0x00090b28, /* Controller 9, led 275, offset 2856 */
	0x000a0b34, /* Controller 10, led 275, offset 2868 */
	0x000b0b40, /* Controller 11, led 275, offset 2880 */
	0x00000b4c, /* Controller 0, led 276, offset 2892 */
	0x00010b58, /* Controller 1, led 276, offset 2904 */
	0x00020b64, /* Controller 2, led 276, offset 2916 */
	0x00030b70, /* Controller 3, led 276, offset 2928 */
	0x00040b7c, /* Controller 4, led 276, offset 2940 */
	0x00050b88, /* Controller 5, led 276, offset 2952 */
	0x00060b94, /* Controller 6, led 276, offset 2964 */
	0x00070ba0, /* Controller 7, led 276, offset 2976 */
	0x00080bac, /* Controller 8, led 276, offset 2988 */
	0x00090bb8, /* Controller 9, led 276, offset 3000 */
	0x000a0bc4, /* Controller 10, led 276, offset 3012 */
	0x000b0bd0, /* Controller 11, led 276, offset 3024 */
	0x00000bdc, /* Controller 0, led 277, offset 3036 */
	0x00010be8, /* Controller 1, led 277, offset 3048 */
	0x00020bf4, /* Controller 2, led 277, offset 3060 */
	0x00030c00, /* Controller 3, led 277, offset 3072 */
	0x00040c0c, /* Controller 4, led 277, offset 3084 */
	0x00050c18, /* Controller 5, led 277, offset 3096 */
	0x00060c24, /* Controller 6, led 277, offset 3108 */
	0x00070c30, /* Controller 7, led 277, offset 3120 */
	0x00080c3c, /* Controller 8, led 277, offset 3132 */
	0x00090c48, /* Controller 9, led 277, offset 3144 */
	0x000a0c54, /* Controller 10, led 277, offset 3156 */
	0x000b0c60, /* Controller 11, led 277, offset 3168 */
	0x00000c6c, /* Controller 0, led 278, offset 3180 */
	0x00010c78, /* Controller 1, led 278, offset 3192 */
	0x00020c84, /* Controller 2, led 278, offset 3204 */
	0x00030c90, /* Controller 3, led 278, offset 3216 */
	0x00040c9c, /* Controller 4, led 278, offset 3228 */
	0x00050ca8, /* Controller 5, led 278, offset 3240 */
	0x00060cb4, /* Controller 6, led 278, offset 3252 */
	0x00070cc0, /* Controller 7, led 278, offset 3264 */
	0x00080ccc, /* Controller 8, led 278, offset 3276 */
	0x00090cd8, /* Controller 9, led 278, offset 3288 */
	0x000a0ce4, /* Controller 10, led 278, offset 3300 */
	0x000b0cf0, /* Controller 11, led 278, offset 3312 */
	0x00000cfc, /* Controller 0, led 279, offset 3324 */
	0x00010d08, /* Controller 1, led 279, offset 3336 */
	0x00020d14, /* Controller 2, led 279, offset 3348 */
	0x00030d20, /* Controller 3, led 279, offset 3360 */
	0x00040d2c, /* Controller 4, led 279, offset 3372 */
	0x00050d38, /* Controller 5, led 279, offset 3384 */
	0x00060d44, /* Controller 6, led 279, offset 3396 */
	0x00070d50, /* Controller 7, led 279, offset 3408 */
	0x00080d5c, /* Controller 8, led 279, offset 3420 */
	0x00090d68, /* Controller 9, led 279, offset 3432 */
	0x000a0d74, /* Controller 10, led 279, offset 3444 */
	0x000b0d80, /* Controller 11, led 279, offset 3456 */
	0x00000d8c, /* Controller 0, led 280, offset 3468 */
	0x00010d98, /* Controller 1, led 280, offset 3480 */
	0x00020da4, /* Controller 2, led 280, offset 3492 */
	0x00030db0, /* Controller 3, led 280, offset 3504 */
	0x00040dbc, /* Controller 4, led 280, offset 3516 */
	0x00050dc8, /* Controller 5, led 280, offset 3528 */
	0x00060dd4, /* Controller 6, led 280, offset 3540 */
	0x00070de0, /* Controller 7, led 280, offset 3552 */
	0x00080dec, /* Controller 8, led 280, offset 3564 */
	0x00090df8, /* Controller 9, led 280, offset 3576 */
	0x000a0e04, /* Controller 10, led 280, offset 3588 */
	0x000b0e10, /* Controller 11, led 280, offset 3600 */
	0x00000e1c, /* Controller 0, led 281, offset 3612 */
	0x00010e28, /* Controller 1, led 281, offset 3624 */
	0x00020e34, /* Controller 2, led 281, offset 3636 */
	0x00030e40, /* Controller 3, led 281, offset 3648 */
	0x00040e4c, /* Controller 4, led 281, offset 3660 */
	0x00050e58, /* Controller 5, led 281, offset 3672 */
	0x00060e64, /* Controller 6, led 281, offset 3684 */
	0x00070e70, /* Controller 7, led 281, offset 3696 */
	0x00080e7c, /* Controller 8, led 281, offset 3708 */
	0x00090e88, /* Controller 9, led 281, offset 3720 */
	0x000a0e94, /* Controller 10, led 281, offset 3732 */
	0x000b0ea0, /* Controller 11, led 281, offset 3744 */
	0x00000eac, /* Controller 0, led 282, offset 3756 */
	0x00010eb8, /* Controller 1, led 282, offset 3768 */
	0x00020ec4, /* Controller 2, led 282, offset 3780 */
	0x00030ed0, /* Controller 3, led 282, offset 3792 */
	0x00040edc, /* Controller 4, led 282, offset 3804 */
	0x00050ee8, /* Controller 5, led 282, offset 3816 */
	0x00060ef4, /* Controller 6, led 282, offset 3828 */
	0x00070f00, /* Controller 7, led 282, offset 3840 */
	0x00080f0c, /* Controller 8, led 282, offset 3852 */
	0x00090f18, /* Controller 9, led 282, offset 3864 */
	0x000a0f24, /* Controller 10, led 282, offset 3876 */
	0x000b0f30, /* Controller 11, led 282, offset 3888 */
	0x00000f3c, /* Controller 0, led 283, offset 3900 */
	0x00010f48, /* Controller 1, led 283, offset 3912 */
	0x00020f54, /* Controller 2, led 283, offset 3924 */
	0x00030f60, /* Controller 3, led 283, offset 3936 */
	0x00040f6c, /* Controller 4, led 283, offset 3948 */
	0x00050f78, /* Controller 5, led 283, offset 3960 */
	0x00060f84, /* Controller 6, led 283, offset 3972 */
	0x00070f90, /* Controller 7, led 283, offset 3984 */
	0x00080f9c, /* Controller 8, led 283, offset 3996 */
	0x00090fa8, /* Controller 9, led 283, offset 4008 */
	0x000a0fb4, /* Controller 10, led 283, offset 4020 */
	0x000b0fc0, /* Controller 11, led 283, offset 4032 */
	0x00000fcc, /* Controller 0, led 284, offset 4044 */
	0x00010fd8, /* Controller 1, led 284, offset 4056 */
	0x00020fe4, /* Controller 2, led 284, offset 4068 */
	0x00030ff0, /* Controller 3, led 284, offset 4080 */
	0x00040ffc, /* Controller 4, led 284, offset 4092 */
	0x00051008, /* Controller 5, led 284, offset 4104 */
	0x00061014, /* Controller 6, led 284, offset 4116 */
	0x00071020, /* Controller 7, led 284, offset 4128 */
	0x0008102c, /* Controller 8, led 284, offset 4140 */
	0x00091038, /* Controller 9, led 284, offset 4152 */
	0x000a1044, /* Controller 10, led 284, offset 4164 */
	0x000b1050, /* Controller 11, led 284, offset 4176 */
	0x0000105c, /* Controller 0, led 285, offset 4188 */
	0x00011068, /* Controller 1, led 285, offset 4200 */
	0x00021074, /* Controller 2, led 285, offset 4212 */
	0x00031080, /* Controller 3, led 285, offset 4224 */
	0x0004108c, /* Controller 4, led 285, offset 4236 */
	0x00051098, /* Controller 5, led 285, offset 4248 */
	0x000610a4, /* Controller 6, led 285, offset 4260 */
	0x000710b0, /* Controller 7, led 285, offset 4272 */
	0x000810bc, /* Controller 8, led 285, offset 4284 */
	0x000910c8, /* Controller 9, led 285, offset 4296 */
	0x000a10d4, /* Controller 10, led 285, offset 4308 */
	0x000b10e0, /* Controller 11, led 285, offset 4320 */
	0x000010ec, /* Controller 0, led 286, offset 4332 */
	0x000110f8, /* Controller 1, led 286, offset 4344 */
	0x00021104, /* Controller 2, led 286, offset 4356 */
	0x00031110, /* Controller 3, led 286, offset 4368 */
	0x0004111c, /* Controller 4, led 286, offset 4380 */
	0x00051128, /* Controller 5, led 286, offset 4392 */
	0x00061134, /* Controller 6, led 286, offset 4404 */
	0x00071140, /* Controller 7, led 286, offset 4416 */
	0x0008114c, /* Controller 8, led 286, offset 4428 */
	0x00091158, /* Controller 9, led 286, offset 4440 */
	0x000a1164, /* Controller 10, led 286, offset 4452 */
	0x000b1170, /* Controller 11, led 286, offset 4464 */
	0x0000117c, /* Controller 0, led 287, offset 4476 */
	0x00011188, /* Controller 1, led 287, offset 4488 */
	0x00021194, /* Controller 2, led 287, offset 4500 */
	0x000311a0, /* Controller 3, led 287, offset 4512 */
	0x000411ac, /* Controller 4, led 287, offset 4524 */
	0x000511b8, /* Controller 5, led 287, offset 4536 */
	0x000611c4, /* Controller 6, led 287, offset 4548 */
	0x000711d0, /* Controller 7, led 287, offset 4560 */
	0x000811dc, /* Controller 8, led 287, offset 4572 */
	0x000911e8, /* Controller 9, led 287, offset 4584 */
	0x000a11f4, /* Controller 10, led 287, offset 4596 */
	0x000b1200, /* Controller 11, led 287, offset 4608 */
	0x0000120c, /* Controller 0, led 288, offset 4620 */
	0x00011218, /* Controller 1, led 288, offset 4632 */
	0x00021224, /* Controller 2, led 288, offset 4644 */
	0x00031230, /* Controller 3, led 288, offset 4656 */
	0x0004123c, /* Controller 4, led 288, offset 4668 */
	0x00051248, /* Controller 5, led 288, offset 4680 */
	0x00061254, /* Controller 6, led 288, offset 4692 */
	0x00071260, /* Controller 7, led 288, offset 4704 */
	0x0008126c, /* Controller 8, led 288, offset 4716 */
	0x00091278, /* Controller 9, led 288, offset 4728 */
	0x000a1284, /* Controller 10, led 288, offset 4740 */
	0x000b1290, /* Controller 11, led 288, offset 4752 */
	0x0000129c, /* Controller 0, led 289, offset 4764 */
	0x000112a8, /* Controller 1, led 289, offset 4776 */
	0x000212b4, /* Controller 2, led 289, offset 4788 */
	0x000312c0, /* Controller 3, led 289, offset 4800 */
	0x000412cc, /* Controller 4, led 289, offset 4812 */
	0x000512d8, /* Controller 5, led 289, offset 4824 */
	0x000612e4, /* Controller 6, led 289, offset 4836 */
	0x000712f0, /* Controller 7, led 289, offset 4848 */
	0x000812fc, /* Controller 8, led 289, offset 4860 */
	0x00091308, /* Controller 9, led 289, offset 4872 */
	0x000a1314, /* Controller 10, led 289, offset 4884 */
	0x000b1320, /* Controller 11, led 289, offset 4896 */
	0x0000132c, /* Controller 0, led 290, offset 4908 */
	0x00011338, /* Controller 1, led 290, offset 4920 */
	0x00021344, /* Controller 2, led 290, offset 4932 */
	0x00031350, /* Controller 3, led 290, offset 4944 */
	0x0004135c, /* Controller 4, led 290, offset 4956 */
	0x00051368, /* Controller 5, led 290, offset 4968 */
	0x00061374, /* Controller 6, led 290, offset 4980 */
	0x00071380, /* Controller 7, led 290, offset 4992 */
	0x0008138c, /* Controller 8, led 290, offset 5004 */
	0x00091398, /* Controller 9, led 290, offset 5016 */
	0x000a13a4, /* Controller 10, led 290, offset 5028 */
	0x000b13b0, /* Controller 11, led 290, offset 5040 */
	0x000013bc, /* Controller 0, led 291, offset 5052 */
	0x000113c8, /* Controller 1, led 291, offset 5064 */
	0x000213d4, /* Controller 2, led 291, offset 5076 */
	0x000313e0, /* Controller 3, led 291, offset 5088 */
	0x000413ec, /* Controller 4, led 291, offset 5100 */
	0x000513f8, /* Controller 5, led 291, offset 5112 */
	0x00061404, /* Controller 6, led 291, offset 5124 */
	0x00071410, /* Controller 7, led 291, offset 5136 */
	0x0008141c, /* Controller 8, led 291, offset 5148 */
	0x00091428, /* Controller 9, led 291, offset 5160 */
	0x000a1434, /* Controller 10, led 291, offset 5172 */
	0x000b1440, /* Controller 11, led 291, offset 5184 */
	0x0000144c, /* Controller 0, led 292, offset 5196 */
	0x00011458, /* Controller 1, led 292, offset 5208 */
	0x00021464, /* Controller 2, led 292, offset 5220 */
	0x00031470, /* Controller 3, led 292, offset 5232 */
	0x0004147c, /* Controller 4, led 292, offset 5244 */
	0x00051488, /* Controller 5, led 292, offset 5256 */
	0x00061494, /* Controller 6, led 292, offset 5268 */
	0x000714a0, /* Controller 7, led 292, offset 5280 */
	0x000814ac, /* Controller 8, led 292, offset 5292 */
	0x000914b8, /* Controller 9, led 292, offset 5304 */
	0x000a14c4, /* Controller 10, led 292, offset 5316 */
	0x000b14d0, /* Controller 11, led 292, offset 5328 */
	0x000014dc, /* Controller 0, led 293, offset 5340 */
	0x000114e8, /* Controller 1, led 293, offset 5352 */
	0x000214f4, /* Controller 2, led 293, offset 5364 */
	0x00031500, /* Controller 3, led 293, offset 5376 */
	0x0004150c, /* Controller 4, led 293, offset 5388 */
	0x00051518, /* Controller 5, led 293, offset 5400 */
	0x00061524, /* Controller 6, led 293, offset 5412 */
	0x00071530, /* Controller 7, led 293, offset 5424 */
	0x0008153c, /* Controller 8, led 293, offset 5436 */
	0x00091548, /* Controller 9, led 293, offset 5448 */
	0x000a1554, /* Controller 10, led 293, offset 5460 */
	0x000b1560, /* Controller 11, led 293, offset 5472 */
	0x0000156c, /* Controller 0, led 294, offset 5484 */
	0x00011578, /* Controller 1, led 294, offset 5496 */
	0x00021584, /* Controller 2, led 294, offset 5508 */
	0x00031590, /* Controller 3, led 294, offset 5520 */
	0x0004159c, /* Controller 4, led 294, offset 5532 */
	0x000515a8, /* Controller 5, led 294, offset 5544 */
	0x000615b4, /* Controller 6, led 294, offset 5556 */
	0x000715c0, /* Controller 7, led 294, offset 5568 */
	0x000815cc, /* Controller 8, led 294, offset 5580 */
	0x000915d8, /* Controller 9, led 294, offset 5592 */
	0x000a15e4, /* Controller 10, led 294, offset 5604 */
	0x000b15f0, /* Controller 11, led 294, offset 5616 */
	0x000015fc, /* Controller 0, led 295, offset 5628 */
	0x00011608, /* Controller 1, led 295, offset 5640 */
	0x00021614, /* Controller 2, led 295, offset 5652 */
	0x00031620, /* Controller 3, led 295, offset 5664 */
	0x0004162c, /* Controller 4, led 295, offset 5676 */
	0x00051638, /* Controller 5, led 295, offset 5688 */
	0x00061644, /* Controller 6, led 295, offset 5700 */
	0x00071650, /* Controller 7, led 295, offset 5712 */
	0x0008165c, /* Controller 8, led 295, offset 5724 */
	0x00091668, /* Controller 9, led 295, offset 5736 */
	0x000a1674, /* Controller 10, led 295, offset 5748 */
	0x000b1680, /* Controller 11, led 295, offset 5760 */
	0x0000168c, /* Controller 0, led 296, offset 5772 */
	0x00011698, /* Controller 1, led 296, offset 5784 */
	0x000216a4, /* Controller 2, led 296, offset 5796 */
	0x000316b0, /* Controller 3, led 296, offset 5808 */
	0x000416bc, /* Controller 4, led 296, offset 5820 */
	0x000516c8, /* Controller 5, led 296, offset 5832 */
	0x000616d4, /* Controller 6, led 296, offset 5844 */
	0x000716e0, /* Controller 7, led 296, offset 5856 */
	0x000816ec, /* Controller 8, led 296, offset 5868 */
	0x000916f8, /* Controller 9, led 296, offset 5880 */
	0x000a1704, /* Controller 10, led 296, offset 5892 */
	0x000b1710, /* Controller 11, led 296, offset 5904 */
	0x0000171c, /* Controller 0, led 297, offset 5916 */
	0x00011728, /* Controller 1, led 297, offset 5928 */
	0x00021734, /* Controller 2, led 297, offset 5940 */
	0x00031740, /* Controller 3, led 297, offset 5952 */
	0x0004174c, /* Controller 4, led 297, offset 5964 */
	0x00051758, /* Controller 5, led 297, offset 5976 */
	0x00061764, /* Controller 6, led 297, offset 5988 */
	0x00071770, /* Controller 7, led 297, offset 6000 */
	0x0008177c, /* Controller 8, led 297, offset 6012 */
	0x00091788, /* Controller 9, led 297, offset 6024 */
	0x000a1794, /* Controller 10, led 297, offset 6036 */
	0x000b17a0, /* Controller 11, led 297, offset 6048 */
	0x000017ac, /* Controller 0, led 298, offset 6060 */
	0x000117b8, /* Controller 1, led 298, offset 6072 */
	0x000217c4, /* Controller 2, led 298, offset 6084 */
	0x000317d0, /* Controller 3, led 298, offset 6096 */
	0x000417dc, /* Controller 4, led 298, offset 6108 */
	0x000517e8, /* Controller 5, led 298, offset 6120 */
	0x000617f4, /* Controller 6, led 298, offset 6132 */
	0x00071800, /* Controller 7, led 298, offset 6144 */
	0x0008180c, /* Controller 8, led 298, offset 6156 */
	0x00091818, /* Controller 9, led 298, offset 6168 */
	0x000a1824, /* Controller 10, led 298, offset 6180 */
	0x000b1830, /* Controller 11, led 298, offset 6192 */
	0x0000183c, /* Controller 0, led 299, offset 6204 */
	0x00011848, /* Controller 1, led 299, offset 6216 */
	0x00021854, /* Controller 2, led 299, offset 6228 */
	0x00031860, /* Controller 3, led 299, offset 6240 */
	0x0004186c, /* Controller 4, led 299, offset 6252 */
	0x00051878, /* Controller 5, led 299, offset 6264 */
	0x00061884, /* Controller 6, led 299, offset 6276 */
	0x00071890, /* Controller 7, led 299, offset 6288 */
	0x0008189c, /* Controller 8, led 299, offset 6300 */
	0x000918a8, /* Controller 9, led 299, offset 6312 */
	0x000a18b4, /* Controller 10, led 299, offset 6324 */
	0x000b18c0, /* Controller 11, led 299, offset 6336 */
	0x000018cc, /* Controller 0, led 300, offset 6348 */
	0x000118d8, /* Controller 1, led 300, offset 6360 */
	0x000218e4, /* Controller 2, led 300, offset 6372 */
	0x000318f0, /* Controller 3, led 300, offset 6384 */
	0x000418fc, /* Controller 4, led 300, offset 6396 */
	0x00051908, /* Controller 5, led 300, offset 6408 */
	0x00061914, /* Controller 6, led 300, offset 6420 */
	0x00071920, /* Controller 7, led 300, offset 6432 */
	0x0008192c, /* Controller 8, led 300, offset 6444 */
	0x00091938, /* Controller 9, led 300, offset 6456 */
	0x000a1944, /* Controller 10, led 300, offset 6468 */
	0x000b1950, /* Controller 11, led 300, offset 6480 */
	0x0000195c, /* Controller 0, led 301, offset 6492 */
	0x00011968, /* Controller 1, led 301, offset 6504 */
	0x00021974, /* Controller 2, led 301, offset 6516 */
	0x00031980, /* Controller 3, led 301, offset 6528 */
	0x0004198c, /* Controller 4, led 301, offset 6540 */
	0x00051998, /* Controller 5, led 301, offset 6552 */
	0x000619a4, /* Controller 6, led 301, offset 6564 */
	0x000719b0, /* Controller 7, led 301, offset 6576 */
	0x000819bc, /* Controller 8, led 301, offset 6588 */
	0x000919c8, /* Controller 9, led 301, offset 6600 */
	0x000a19d4, /* Controller 10, led 301, offset 6612 */
	0x000b19e0, /* Controller 11, led 301, offset 6624 */
	0x000019ec, /* Controller 0, led 302, offset 6636 */
	0x000119f8, /* Controller 1, led 302, offset 6648 */
	0x00021a04, /* Controller 2, led 302, offset 6660 */
	0x00031a10, /* Controller 3, led 302, offset 6672 */
	0x00041a1c, /* Controller 4, led 302, offset 6684 */
	0x00051a28, /* Controller 5, led 302, offset 6696 */
	0x00061a34, /* Controller 6, led 302, offset 6708 */
	0x00071a40, /* Controller 7, led 302, offset 6720 */
	0x00081a4c, /* Controller 8, led 302, offset 6732 */
	0x00091a58, /* Controller 9, led 302, offset 6744 */
	0x000a1a64, /* Controller 10, led 302, offset 6756 */
	0x000b1a70, /* Controller 11, led 302, offset 6768 */
	0x00001a7c, /* Controller 0, led 303, offset 6780 */
	0x00011a88, /* Controller 1, led 303, offset 6792 */
	0x00021a94, /* Controller 2, led 303, offset 6804 */
	0x00031aa0, /* Controller 3, led 303, offset 6816 */
	0x00041aac, /* Controller 4, led 303, offset 6828 */
	0x00051ab8, /* Controller 5, led 303, offset 6840 */
	0x00061ac4, /* Controller 6, led 303, offset 6852 */
	0x00071ad0, /* Controller 7, led 303, offset 6864 */
	0x00081adc, /* Controller 8, led 303, offset 6876 */
	0x00091ae8, /* Controller 9, led 303, offset 6888 */
	0x000a1af4, /* Controller 10, led 303, offset 6900 */
	0x000b1b00, /* Controller 11, led 303, offset 6912 */
	0x00001b0c, /* Controller 0, led 304, offset 6924 */
	0x00011b18, /* Controller 1, led 304, offset 6936 */
	0x00021b24, /* Controller 2, led 304, offset 6948 */
	0x00031b30, /* Controller 3, led 304, offset 6960 */
	0x00041b3c, /* Controller 4, led 304, offset 6972 */
	0x00051b48, /* Controller 5, led 304, offset 6984 */
	0x00061b54, /* Controller 6, led 304, offset 6996 */
	0x00071b60, /* Controller 7, led 304, offset 7008 */
	0x00081b6c, /* Controller 8, led 304, offset 7020 */
	0x00091b78, /* Controller 9, led 304, offset 7032 */
	0x000a1b84, /* Controller 10, led 304, offset 7044 */
	0x000b1b90, /* Controller 11, led 304, offset 7056 */
	0x00001b9c, /* Controller 0, led 305, offset 7068 */
	0x00011ba8, /* Controller 1, led 305, offset 7080 */
	0x00021bb4, /* Controller 2, led 305, offset 7092 */
	0x00031bc0, /* Controller 3, led 305, offset 7104 */
	0x00041bcc, /* Controller 4, led 305, offset 7116 */
	0x00051bd8, /* Controller 5, led 305, offset 7128 */
	0x00061be4, /* Controller 6, led 305, offset 7140 */
	0x00071bf0, /* Controller 7, led 305, offset 7152 */
	0x00081bfc, /* Controller 8, led 305, offset 7164 */
	0x00091c08, /* Controller 9, led 305, offset 7176 */
	0x000a1c14, /* Controller 10, led 305, offset 7188 */
	0x000b1c20, /* Controller 11, led 305, offset 7200 */
	0x00001c2c, /* Controller 0, led 306, offset 7212 */
	0x00011c38, /* Controller 1, led 306, offset 7224 */
	0x00021c44, /* Controller 2, led 306, offset 7236 */
	0x00031c50, /* Controller 3, led 306, offset 7248 */
	0x00041c5c, /* Controller 4, led 306, offset 7260 */
	0x00051c68, /* Controller 5, led 306, offset 7272 */
	0x00061c74, /* Controller 6, led 306, offset 7284 */
	0x00071c80, /* Controller 7, led 306, offset 7296 */
	0x00081c8c, /* Controller 8, led 306, offset 7308 */
	0x00091c98, /* Controller 9, led 306, offset 7320 */
	0x000a1ca4, /* Controller 10, led 306, offset 7332 */
	0x000b1cb0, /* Controller 11, led 306, offset 7344 */
	0x00001cbc, /* Controller 0, led 307, offset 7356 */
	0x00011cc8, /* Controller 1, led 307, offset 7368 */
	0x00021cd4, /* Controller 2, led 307, offset 7380 */
	0x00031ce0, /* Controller 3, led 307, offset 7392 */
	0x00041cec, /* Controller 4, led 307, offset 7404 */
	0x00051cf8, /* Controller 5, led 307, offset 7416 */
	0x00061d04, /* Controller 6, led 307, offset 7428 */
	0x00071d10, /* Controller 7, led 307, offset 7440 */
	0x00081d1c, /* Controller 8, led 307, offset 7452 */
	0x00091d28, /* Controller 9, led 307, offset 7464 */
	0x000a1d34, /* Controller 10, led 307, offset 7476 */
	0x000b1d40, /* Controller 11, led 307, offset 7488 */
	0x00001d4c, /* Controller 0, led 308, offset 7500 */
	0x00011d58, /* Controller 1, led 308, offset 7512 */
	0x00021d64, /* Controller 2, led 308, offset 7524 */
	0x00031d70, /* Controller 3, led 308, offset 7536 */
	0x00041d7c, /* Controller 4, led 308, offset 7548 */
	0x00051d88, /* Controller 5, led 308, offset 7560 */
	0x00061d94, /* Controller 6, led 308, offset 7572 */
	0x00071da0, /* Controller 7, led 308, offset 7584 */
	0x00081dac, /* Controller 8, led 308, offset 7596 */
	0x00091db8, /* Controller 9, led 308, offset 7608 */
	0x000a1dc4, /* Controller 10, led 308, offset 7620 */
	0x000b1dd0, /* Controller 11, led 308, offset 7632 */
	0x00001ddc, /* Controller 0, led 309, offset 7644 */
	0x00011de8, /* Controller 1, led 309, offset 7656 */
	0x00021df4, /* Controller 2, led 309, offset 7668 */
	0x00031e00, /* Controller 3, led 309, offset 7680 */
	0x00041e0c, /* Controller 4, led 309, offset 7692 */
	0x00051e18, /* Controller 5, led 309, offset 7704 */
	0x00061e24, /* Controller 6, led 309, offset 7716 */
	0x00071e30, /* Controller 7, led 309, offset 7728 */
	0x00081e3c, /* Controller 8, led 309, offset 7740 */
	0x00091e48, /* Controller 9, led 309, offset 7752 */
	0x000a1e54, /* Controller 10, led 309, offset 7764 */
	0x000b1e60, /* Controller 11, led 309, offset 7776 */
	0x00001e6c, /* Controller 0, led 310, offset 7788 */
	0x00011e78, /* Controller 1, led 310, offset 7800 */
	0x00021e84, /* Controller 2, led 310, offset 7812 */
	0x00031e90, /* Controller 3, led 310, offset 7824 */
	0x00041e9c, /* Controller 4, led 310, offset 7836 */
	0x00051ea8, /* Controller 5, led 310, offset 7848 */
	0x00061eb4, /* Controller 6, led 310, offset 7860 */
	0x00071ec0, /* Controller 7, led 310, offset 7872 */
	0x00081ecc, /* Controller 8, led 310, offset 7884 */
	0x00091ed8, /* Controller 9, led 310, offset 7896 */
	0x000a1ee4, /* Controller 10, led 310, offset 7908 */
	0x000b1ef0, /* Controller 11, led 310, offset 7920 */
	0x00001efc, /* Controller 0, led 311, offset 7932 */
	0x00011f08, /* Controller 1, led 311, offset 7944 */
	0x00021f14, /* Controller 2, led 311, offset 7956 */
	0x00031f20, /* Controller 3, led 311, offset 7968 */
	0x00041f2c, /* Controller 4, led 311, offset 7980 */
	0x00051f38, /* Controller 5, led 311, offset 7992 */
	0x00061f44, /* Controller 6, led 311, offset 8004 */
	0x00071f50, /* Controller 7, led 311, offset 8016 */
	0x00081f5c, /* Controller 8, led 311, offset 8028 */
	0x00091f68, /* Controller 9, led 311, offset 8040 */
	0x000a1f74, /* Controller 10, led 311, offset 8052 */
	0x000b1f80, /* Controller 11, led 311, offset 8064 */
	0x00001f8c, /* Controller 0, led 312, offset 8076 */
	0x00011f98, /* Controller 1, led 312, offset 8088 */
	0x00021fa4, /* Controller 2, led 312, offset 8100 */
	0x00031fb0, /* Controller 3, led 312, offset 8112 */
	0x00041fbc, /* Controller 4, led 312, offset 8124 */
	0x00051fc8, /* Controller 5, led 312, offset 8136 */
	0x00061fd4, /* Controller 6, led 312, offset 8148 */
	0x00071fe0, /* Controller 7, led 312, offset 8160 */
	0x00081fec, /* Controller 8, led 312, offset 8172 */
	0x00091ff8, /* Controller 9, led 312, offset 8184 */
	0x000a2004, /* Controller 10, led 312, offset 8196 */
	0x000b2010, /* Controller 11, led 312, offset 8208 */
	0x0000201c, /* Controller 0, led 313, offset 8220 */
	0x00012028, /* Controller 1, led 313, offset 8232 */
	0x00022034, /* Controller 2, led 313, offset 8244 */
	0x00032040, /* Controller 3, led 313, offset 8256 */
	0x0004204c, /* Controller 4, led 313, offset 8268 */
	0x00052058, /* Controller 5, led 313, offset 8280 */
	0x00062064, /* Controller 6, led 313, offset 8292 */
	0x00072070, /* Controller 7, led 313, offset 8304 */
	0x0008207c, /* Controller 8, led 313, offset 8316 */
	0x00092088, /* Controller 9, led 313, offset 8328 */
	0x000a2094, /* Controller 10, led 313, offset 8340 */
	0x000b20a0, /* Controller 11, led 313, offset 8352 */
	0x000020ac, /* Controller 0, led 314, offset 8364 */
	0x000120b8, /* Controller 1, led 314, offset 8376 */
	0x000220c4, /* Controller 2, led 314, offset 8388 */
	0x000320d0, /* Controller 3, led 314, offset 8400 */
	0x000420dc, /* Controller 4, led 314, offset 8412 */
	0x000520e8, /* Controller 5, led 314, offset 8424 */
	0x000620f4, /* Controller 6, led 314, offset 8436 */
	0x00072100, /* Controller 7, led 314, offset 8448 */
	0x0008210c, /* Controller 8, led 314, offset 8460 */
	0x00092118, /* Controller 9, led 314, offset 8472 */
	0x000a2124, /* Controller 10, led 314, offset 8484 */
	0x000b2130, /* Controller 11, led 314, offset 8496 */
	0x0000213c, /* Controller 0, led 315, offset 8508 */
	0x00012148, /* Controller 1, led 315, offset 8520 */
	0x00022154, /* Controller 2, led 315, offset 8532 */
	0x00032160, /* Controller 3, led 315, offset 8544 */
	0x0004216c, /* Controller 4, led 315, offset 8556 */
	0x00052178, /* Controller 5, led 315, offset 8568 */
	0x00062184, /* Controller 6, led 315, offset 8580 */
	0x00072190, /* Controller 7, led 315, offset 8592 */
	0x0008219c, /* Controller 8, led 315, offset 8604 */
	0x000921a8, /* Controller 9, led 315, offset 8616 */
	0x000a21b4, /* Controller 10, led 315, offset 8628 */
	0x000b21c0, /* Controller 11, led 315, offset 8640 */
	0x000021cc, /* Controller 0, led 316, offset 8652 */
	0x000121d8, /* Controller 1, led 316, offset 8664 */
	0x000221e4, /* Controller 2, led 316, offset 8676 */
	0x000321f0, /* Controller 3, led 316, offset 8688 */
	0x000421fc, /* Controller 4, led 316, offset 8700 */
	0x00052208, /* Controller 5, led 316, offset 8712 */
	0x00062214, /* Controller 6, led 316, offset 8724 */
	0x00072220, /* Controller 7, led 316, offset 8736 */
	0x0008222c, /* Controller 8, led 316, offset 8748 */
	0x00092238, /* Controller 9, led 316, offset 8760 */
	0x000a2244, /* Controller 10, led 316, offset 8772 */
	0x000b2250, /* Controller 11, led 316, offset 8784 */
	0x0000225c, /* Controller 0, led 317, offset 8796 */
	0x00012268, /* Controller 1, led 317, offset 8808 */
	0x00022274, /* Controller 2, led 317, offset 8820 */
	0x00032280, /* Controller 3, led 317, offset 8832 */
	0x0004228c, /* Controller 4, led 317, offset 8844 */
	0x00052298, /* Controller 5, led 317, offset 8856 */
	0x000622a4, /* Controller 6, led 317, offset 8868 */
	0x000722b0, /* Controller 7, led 317, offset 8880 */
	0x000822bc, /* Controller 8, led 317, offset 8892 */
	0x000922c8, /* Controller 9, led 317, offset 8904 */
	0x000a22d4, /* Controller 10, led 317, offset 8916 */
	0x000b22e0, /* Controller 11, led 317, offset 8928 */
	0x000022ec, /* Controller 0, led 318, offset 8940 */
	0x000122f8, /* Controller 1, led 318, offset 8952 */
	0x00022304, /* Controller 2, led 318, offset 8964 */
	0x00032310, /* Controller 3, led 318, offset 8976 */
	0x0004231c, /* Controller 4, led 318, offset 8988 */
	0x00052328, /* Controller 5, led 318, offset 9000 */
	0x00062334, /* Controller 6, led 318, offset 9012 */
	0x00072340, /* Controller 7, led 318, offset 9024 */
	0x0008234c, /* Controller 8, led 318, offset 9036 */
	0x00092358, /* Controller 9, led 318, offset 9048 */
	0x000a2364, /* Controller 10, led 318, offset 9060 */
	0x000b2370, /* Controller 11, led 318, offset 9072 */
	0x0000237c, /* Controller 0, led 319, offset 9084 */
	0x00012388, /* Controller 1, led 319, offset 9096 */
	0x00022394, /* Controller 2, led 319, offset 9108 */
	0x000323a0, /* Controller 3, led 319, offset 9120 */
	0x000423ac, /* Controller 4, led 319, offset 9132 */
	0x000523b8, /* Controller 5, led 319, offset 9144 */
	0x000623c4, /* Controller 6, led 319, offset 9156 */
	0x000723d0, /* Controller 7, led 319, offset 9168 */
	0x000823dc, /* Controller 8, led 319, offset 9180 */
	0x000923e8, /* Controller 9, led 319, offset 9192 */
	0x000a23f4, /* Controller 10, led 319, offset 9204 */
	0x000b2400, /* Controller 11, led 319, offset 9216 */
	0x0000240c, /* Controller 0, led 320, offset 9228 */
	0x00012418, /* Controller 1, led 320, offset 9240 */
	0x00022424, /* Controller 2, led 320, offset 9252 */
	0x00032430, /* Controller 3, led 320, offset 9264 */
	0x0004243c, /* Controller 4, led 320, offset 9276 */
	0x00052448, /* Controller 5, led 320, offset 9288 */
	0x00062454, /* Controller 6, led 320, offset 9300 */
	0x00072460, /* Controller 7, led 320, offset 9312 */
	0x0008246c, /* Controller 8, led 320, offset 9324 */
	0x00092478, /* Controller 9, led 320, offset 9336 */
	0x000a2484, /* Controller 10, led 320, offset 9348 */
	0x000b2490, /* Controller 11, led 320, offset 9360 */
	0x0000249c, /* Controller 0, led 321, offset 9372 */
	0x000124a8, /* Controller 1, led 321, offset 9384 */
	0x000224b4, /* Controller 2, led 321, offset 9396 */
	0x000324c0, /* Controller 3, led 321, offset 9408 */
	0x000424cc, /* Controller 4, led 321, offset 9420 */
	0x000524d8, /* Controller 5, led 321, offset 9432 */
	0x000624e4, /* Controller 6, led 321, offset 9444 */
	0x000724f0, /* Controller 7, led 321, offset 9456 */
	0x000824fc, /* Controller 8, led 321, offset 9468 */
	0x00092508, /* Controller 9, led 321, offset 9480 */
	0x000a2514, /* Controller 10, led 321, offset 9492 */
	0x000b2520, /* Controller 11, led 321, offset 9504 */
	0x0000252c, /* Controller 0, led 322, offset 9516 */
	0x00012538, /* Controller 1, led 322, offset 9528 */
	0x00022544, /* Controller 2, led 322, offset 9540 */
	0x00032550, /* Controller 3, led 322, offset 9552 */
	0x0004255c, /* Controller 4, led 322, offset 9564 */
	0x00052568, /* Controller 5, led 322, offset 9576 */
	0x00062574, /* Controller 6, led 322, offset 9588 */
	0x00072580, /* Controller 7, led 322, offset 9600 */
	0x0008258c, /* Controller 8, led 322, offset 9612 */
	0x00092598, /* Controller 9, led 322, offset 9624 */
	0x000a25a4, /* Controller 10, led 322, offset 9636 */
	0x000b25b0, /* Controller 11, led 322, offset 9648 */
	0x000025bc, /* Controller 0, led 323, offset 9660 */
	0x000125c8, /* Controller 1, led 323, offset 9672 */
	0x000225d4, /* Controller 2, led 323, offset 9684 */
	0x000325e0, /* Controller 3, led 323, offset 9696 */
	0x000425ec, /* Controller 4, led 323, offset 9708 */
	0x000525f8, /* Controller 5, led 323, offset 9720 */
	0x00062604, /* Controller 6, led 323, offset 9732 */
	0x00072610, /* Controller 7, led 323, offset 9744 */
	0x0008261c, /* Controller 8, led 323, offset 9756 */
	0x00092628, /* Controller 9, led 323, offset 9768 */
	0x000a2634, /* Controller 10, led 323, offset 9780 */
	0x000b2640, /* Controller 11, led 323, offset 9792 */
	0x0000264c, /* Controller 0, led 324, offset 9804 */
	0x00012658, /* Controller 1, led 324, offset 9816 */
	0x00022664, /* Controller 2, led 324, offset 9828 */
	0x00032670, /* Controller 3, led 324, offset 9840 */
	0x0004267c, /* Controller 4, led 324, offset 9852 */
	0x00052688, /* Controller 5, led 324, offset 9864 */
	0x00062694, /* Controller 6, led 324, offset 9876 */
	0x000726a0, /* Controller 7, led 324, offset 9888 */
	0x000826ac, /* Controller 8, led 324, offset 9900 */
	0x000926b8, /* Controller 9, led 324, offset 9912 */
	0x000a26c4, /* Controller 10, led 324, offset 9924 */
	0x000b26d0, /* Controller 11, led 324, offset 9936 */
	0x000026dc, /* Controller 0, led 325, offset 9948 */
	0x000126e8, /* Controller 1, led 325, offset 9960 */
	0x000226f4, /* Controller 2, led 325, offset 9972 */
	0x00032700, /* Controller 3, led 325, offset 9984 */
	0x0004270c, /* Controller 4, led 325, offset 9996 */
	0x00052718, /* Controller 5, led 325, offset 10008 */
	0x00062724, /* Controller 6, led 325, offset 10020 */
	0x00072730, /* Controller 7, led 325, offset 10032 */
	0x0008273c, /* Controller 8, led 325, offset 10044 */
	0x00092748, /* Controller 9, led 325, offset 10056 */
	0x000a2754, /* Controller 10, led 325, offset 10068 */
	0x000b2760, /* Controller 11, led 325, offset 10080 */
	0x0000276c, /* Controller 0, led 326, offset 10092 */
	0x00012778, /* Controller 1, led 326, offset 10104 */
	0x00022784, /* Controller 2, led 326, offset 10116 */
	0x00032790, /* Controller 3, led 326, offset 10128 */
	0x0004279c, /* Controller 4, led 326, offset 10140 */
	0x000527a8, /* Controller 5, led 326, offset 10152 */
	0x000627b4, /* Controller 6, led 326, offset 10164 */
	0x000727c0, /* Controller 7, led 326, offset 10176 */
	0x000827cc, /* Controller 8, led 326, offset 10188 */
	0x000927d8, /* Controller 9, led 326, offset 10200 */
	0x000a27e4, /* Controller 10, led 326, offset 10212 */
	0x000b27f0, /* Controller 11, led 326, offset 10224 */
	0x000027fc, /* Controller 0, led 327, offset 10236 */
	0x00012808, /* Controller 1, led 327, offset 10248 */
	0x00022814, /* Controller 2, led 327, offset 10260 */
	0x00032820, /* Controller 3, led 327, offset 10272 */
	0x0004282c, /* Controller 4, led 327, offset 10284 */
	0x00052838, /* Controller 5, led 327, offset 10296 */
	0x00062844, /* Controller 6, led 327, offset 10308 */
	0x00072850, /* Controller 7, led 327, offset 10320 */
	0x0008285c, /* Controller 8, led 327, offset 10332 */
	0x00092868, /* Controller 9, led 327, offset 10344 */
	0x000a2874, /* Controller 10, led 327, offset 10356 */
	0x000b2880, /* Controller 11, led 327, offset 10368 */
	0x0000288c, /* Controller 0, led 328, offset 10380 */
	0x00012898, /* Controller 1, led 328, offset 10392 */
	0x000228a4, /* Controller 2, led 328, offset 10404 */
	0x000328b0, /* Controller 3, led 328, offset 10416 */
	0x000428bc, /* Controller 4, led 328, offset 10428 */
	0x000528c8, /* Controller 5, led 328, offset 10440 */
	0x000628d4, /* Controller 6, led 328, offset 10452 */
	0x000728e0, /* Controller 7, led 328, offset 10464 */
	0x000828ec, /* Controller 8, led 328, offset 10476 */
	0x000928f8, /* Controller 9, led 328, offset 10488 */
	0x000a2904, /* Controller 10, led 328, offset 10500 */
	0x000b2910, /* Controller 11, led 328, offset 10512 */
	0x0000291c, /* Controller 0, led 329, offset 10524 */
	0x00012928, /* Controller 1, led 329, offset 10536 */
	0x00022934, /* Controller 2, led 329, offset 10548 */
	0x00032940, /* Controller 3, led 329, offset 10560 */
	0x0004294c, /* Controller 4, led 329, offset 10572 */
	0x00052958, /* Controller 5, led 329, offset 10584 */
	0x00062964, /* Controller 6, led 329, offset 10596 */
	0x00072970, /* Controller 7, led 329, offset 10608 */
	0x0008297c, /* Controller 8, led 329, offset 10620 */
	0x00092988, /* Controller 9, led 329, offset 10632 */
	0x000a2994, /* Controller 10, led 329, offset 10644 */
	0x000b29a0, /* Controller 11, led 329, offset 10656 */
	0x000029ac, /* Controller 0, led 330, offset 10668 */
	0x000129b8, /* Controller 1, led 330, offset 10680 */
	0x000229c4, /* Controller 2, led 330, offset 10692 */
	0x000329d0, /* Controller 3, led 330, offset 10704 */
	0x000429dc, /* Controller 4, led 330, offset 10716 */
	0x000529e8, /* Controller 5, led 330, offset 10728 */
	0x000629f4, /* Controller 6, led 330, offset 10740 */
	0x00072a00, /* Controller 7, led 330, offset 10752 */
	0x00082a0c, /* Controller 8, led 330, offset 10764 */
	0x00092a18, /* Controller 9, led 330, offset 10776 */
	0x000a2a24, /* Controller 10, led 330, offset 10788 */
	0x000b2a30, /* Controller 11, led 330, offset 10800 */
	0x00002a3c, /* Controller 0, led 331, offset 10812 */
	0x00012a48, /* Controller 1, led 331, offset 10824 */
	0x00022a54, /* Controller 2, led 331, offset 10836 */
	0x00032a60, /* Controller 3, led 331, offset 10848 */
	0x00042a6c, /* Controller 4, led 331, offset 10860 */
	0x00052a78, /* Controller 5, led 331, offset 10872 */
	0x00062a84, /* Controller 6, led 331, offset 10884 */
	0x00072a90, /* Controller 7, led 331, offset 10896 */
	0x00082a9c, /* Controller 8, led 331, offset 10908 */
	0x00092aa8, /* Controller 9, led 331, offset 10920 */
	0x000a2ab4, /* Controller 10, led 331, offset 10932 */
	0x000b2ac0, /* Controller 11, led 331, offset 10944 */
	0x00002acc, /* Controller 0, led 332, offset 10956 */
	0x00012ad8, /* Controller 1, led 332, offset 10968 */
	0x00022ae4, /* Controller 2, led 332, offset 10980 */
	0x00032af0, /* Controller 3, led 332, offset 10992 */
	0x00042afc, /* Controller 4, led 332, offset 11004 */
	0x00052b08, /* Controller 5, led 332, offset 11016 */
	0x00062b14, /* Controller 6, led 332, offset 11028 */
	0x00072b20, /* Controller 7, led 332, offset 11040 */
	0x00082b2c, /* Controller 8, led 332, offset 11052 */
	0x00092b38, /* Controller 9, led 332, offset 11064 */
	0x000a2b44, /* Controller 10, led 332, offset 11076 */
	0x000b2b50, /* Controller 11, led 332, offset 11088 */
	0x00002b5c, /* Controller 0, led 333, offset 11100 */
	0x00012b68, /* Controller 1, led 333, offset 11112 */
	0x00022b74, /* Controller 2, led 333, offset 11124 */
	0x00032b80, /* Controller 3, led 333, offset 11136 */
	0x00042b8c, /* Controller 4, led 333, offset 11148 */
	0x00052b98, /* Controller 5, led 333, offset 11160 */
	0x00062ba4, /* Controller 6, led 333, offset 11172 */
	0x00072bb0, /* Controller 7, led 333, offset 11184 */
	0x00082bbc, /* Controller 8, led 333, offset 11196 */
	0x00092bc8, /* Controller 9, led 333, offset 11208 */
	0x000a2bd4, /* Controller 10, led 333, offset 11220 */
	0x000b2be0, /* Controller 11, led 333, offset 11232 */
	0x00002bec, /* Controller 0, led 334, offset 11244 */
	0x00012bf8, /* Controller 1, led 334, offset 11256 */
	0x00022c04, /* Controller 2, led 334, offset 11268 */
	0x00032c10, /* Controller 3, led 334, offset 11280 */
	0x00042c1c, /* Controller 4, led 334, offset 11292 */
	0x00052c28, /* Controller 5, led 334, offset 11304 */
	0x00062c34, /* Controller 6, led 334, offset 11316 */
	0x00072c40, /* Controller 7, led 334, offset 11328 */
	0x00082c4c, /* Controller 8, led 334, offset 11340 */
	0x00092c58, /* Controller 9, led 334, offset 11352 */
	0x000a2c64, /* Controller 10, led 334, offset 11364 */
	0x000b2c70, /* Controller 11, led 334, offset 11376 */
	0x00002c7c, /* Controller 0, led 335, offset 11388 */
	0x00012c88, /* Controller 1, led 335, offset 11400 */
	0x00022c94, /* Controller 2, led 335, offset 11412 */
	0x00032ca0, /* Controller 3, led 335, offset 11424 */
	0x00042cac, /* Controller 4, led 335, offset 11436 */
	0x00052cb8, /* Controller 5, led 335, offset 11448 */
	0x00062cc4, /* Controller 6, led 335, offset 11460 */
	0x00072cd0, /* Controller 7, led 335, offset 11472 */
	0x00082cdc, /* Controller 8, led 335, offset 11484 */
	0x00092ce8, /* Controller 9, led 335, offset 11496 */
	0x000a2cf4, /* Controller 10, led 335, offset 11508 */
	0x000b2d00, /* Controller 11, led 335, offset 11520 */
	0x00002d0c, /* Controller 0, led 336, offset 11532 */
	0x00012d18, /* Controller 1, led 336, offset 11544 */
	0x00022d24, /* Controller 2, led 336, offset 11556 */
	0x00032d30, /* Controller 3, led 336, offset 11568 */
	0x00042d3c, /* Controller 4, led 336, offset 11580 */
	0x00052d48, /* Controller 5, led 336, offset 11592 */
	0x00062d54, /* Controller 6, led 336, offset 11604 */
	0x00072d60, /* Controller 7, led 336, offset 11616 */
	0x00082d6c, /* Controller 8, led 336, offset 11628 */
	0x00092d78, /* Controller 9, led 336, offset 11640 */
	0x000a2d84, /* Controller 10, led 336, offset 11652 */
	0x000b2d90, /* Controller 11, led 336, offset 11664 */
	0x00002d9c, /* Controller 0, led 337, offset 11676 */
	0x00012da8, /* Controller 1, led 337, offset 11688 */
	0x00022db4, /* Controller 2, led 337, offset 11700 */
	0x00032dc0, /* Controller 3, led 337, offset 11712 */
	0x00042dcc, /* Controller 4, led 337, offset 11724 */
	0x00052dd8, /* Controller 5, led 337, offset 11736 */
	0x00062de4, /* Controller 6, led 337, offset 11748 */
	0x00072df0, /* Controller 7, led 337, offset 11760 */
	0x00082dfc, /* Controller 8, led 337, offset 11772 */
	0x00092e08, /* Controller 9, led 337, offset 11784 */
	0x000a2e14, /* Controller 10, led 337, offset 11796 */
	0x000b2e20, /* Controller 11, led 337, offset 11808 */
	0x00002e2c, /* Controller 0, led 338, offset 11820 */
	0x00012e38, /* Controller 1, led 338, offset 11832 */
	0x00022e44, /* Controller 2, led 338, offset 11844 */
	0x00032e50, /* Controller 3, led 338, offset 11856 */
	0x00042e5c, /* Controller 4, led 338, offset 11868 */
	0x00052e68, /* Controller 5, led 338, offset 11880 */
	0x00062e74, /* Controller 6, led 338, offset 11892 */
	0x00072e80, /* Controller 7, led 338, offset 11904 */
	0x00082e8c, /* Controller 8, led 338, offset 11916 */
	0x00092e98, /* Controller 9, led 338, offset 11928 */
	0x000a2ea4, /* Controller 10, led 338, offset 11940 */
	0x000b2eb0, /* Controller 11, led 338, offset 11952 */
	0x00002ebc, /* Controller 0, led 339, offset 11964 */
	0x00012ec8, /* Controller 1, led 339, offset 11976 */
	0x00022ed4, /* Controller 2, led 339, offset 11988 */
	0x00032ee0, /* Controller 3, led 339, offset 12000 */
	0x00042eec, /* Controller 4, led 339, offset 12012 */
	0x00052ef8, /* Controller 5, led 339, offset 12024 */
	0x00062f04, /* Controller 6, led 339, offset 12036 */
	0x00072f10, /* Controller 7, led 339, offset 12048 */
	0x00082f1c, /* Controller 8, led 339, offset 12060 */
	0x00092f28, /* Controller 9, led 339, offset 12072 */
	0x000a2f34, /* Controller 10, led 339, offset 12084 */
	0x000b2f40, /* Controller 11, led 339, offset 12096 */
	0x00002f4c, /* Controller 0, led 340, offset 12108 */
	0x00012f58, /* Controller 1, led 340, offset 12120 */
	0x00022f64, /* Controller 2, led 340, offset 12132 */
	0x00032f70, /* Controller 3, led 340, offset 12144 */
	0x00042f7c, /* Controller 4, led 340, offset 12156 */
	0x00052f88, /* Controller 5, led 340, offset 12168 */
	0x00062f94, /* Controller 6, led 340, offset 12180 */
	0x00072fa0, /* Controller 7, led 340, offset 12192 */
	0x00082fac, /* Controller 8, led 340, offset 12204 */
	0x00092fb8, /* Controller 9, led 340, offset 12216 */
	0x000a2fc4, /* Controller 10, led 340, offset 12228 */
	0x000b2fd0, /* Controller 11, led 340, offset 12240 */
	0x00002fdc, /* Controller 0, led 341, offset 12252 */
	0x00012fe8, /* Controller 1, led 341, offset 12264 */
	0x00022ff4, /* Controller 2, led 341, offset 12276 */
	0x00033000, /* Controller 3, led 341, offset 12288 */
	0x0004300c, /* Controller 4, led 341, offset 12300 */
	0x00053018, /* Controller 5, led 341, offset 12312 */
	0x00063024, /* Controller 6, led 341, offset 12324 */
	0x00073030, /* Controller 7, led 341, offset 12336 */
	0x0008303c, /* Controller 8, led 341, offset 12348 */
	0x00093048, /* Controller 9, led 341, offset 12360 */
	0x000a3054, /* Controller 10, led 341, offset 12372 */
	0x000b3060, /* Controller 11, led 341, offset 12384 */
	0x0000306c, /* Controller 0, led 342, offset 12396 */
	0x00013078, /* Controller 1, led 342, offset 12408 */
	0x00023084, /* Controller 2, led 342, offset 12420 */
	0x00033090, /* Controller 3, led 342, offset 12432 */
	0x0004309c, /* Controller 4, led 342, offset 12444 */
	0x000530a8, /* Controller 5, led 342, offset 12456 */
	0x000630b4, /* Controller 6, led 342, offset 12468 */
	0x000730c0, /* Controller 7, led 342, offset 12480 */
	0x000830cc, /* Controller 8, led 342, offset 12492 */
	0x000930d8, /* Controller 9, led 342, offset 12504 */
	0x000a30e4, /* Controller 10, led 342, offset 12516 */
	0x000b30f0, /* Controller 11, led 342, offset 12528 */
	0x000030fc, /* Controller 0, led 343, offset 12540 */
	0x00013108, /* Controller 1, led 343, offset 12552 */
	0x00023114, /* Controller 2, led 343, offset 12564 */
	0x00033120, /* Controller 3, led 343, offset 12576 */
	0x0004312c, /* Controller 4, led 343, offset 12588 */
	0x00053138, /* Controller 5, led 343, offset 12600 */
	0x00063144, /* Controller 6, led 343, offset 12612 */
	0x00073150, /* Controller 7, led 343, offset 12624 */
	0x0008315c, /* Controller 8, led 343, offset 12636 */
	0x00093168, /* Controller 9, led 343, offset 12648 */
	0x000a3174, /* Controller 10, led 343, offset 12660 */
	0x000b3180, /* Controller 11, led 343, offset 12672 */
	0x0000318c, /* Controller 0, led 344, offset 12684 */
	0x00013198, /* Controller 1, led 344, offset 12696 */
	0x000231a4, /* Controller 2, led 344, offset 12708 */
	0x000331b0, /* Controller 3, led 344, offset 12720 */
	0x000431bc, /* Controller 4, led 344, offset 12732 */
	0x000531c8, /* Controller 5, led 344, offset 12744 */
	0x000631d4, /* Controller 6, led 344, offset 12756 */
	0x000731e0, /* Controller 7, led 344, offset 12768 */
	0x000831ec, /* Controller 8, led 344, offset 12780 */
	0x000931f8, /* Controller 9, led 344, offset 12792 */
	0x000a3204, /* Controller 10, led 344, offset 12804 */
	0x000b3210, /* Controller 11, led 344, offset 12816 */
	0x0000321c, /* Controller 0, led 345, offset 12828 */
	0x00013228, /* Controller 1, led 345, offset 12840 */
	0x00023234, /* Controller 2, led 345, offset 12852 */
	0x00033240, /* Controller 3, led 345, offset 12864 */
	0x0004324c, /* Controller 4, led 345, offset 12876 */
	0x00053258, /* Controller 5, led 345, offset 12888 */
	0x00063264, /* Controller 6, led 345, offset 12900 */
	0x00073270, /* Controller 7, led 345, offset 12912 */
	0x0008327c, /* Controller 8, led 345, offset 12924 */
	0x00093288, /* Controller 9, led 345, offset 12936 */
	0x000a3294, /* Controller 10, led 345, offset 12948 */
	0x000b32a0, /* Controller 11, led 345, offset 12960 */
	0x000032ac, /* Controller 0, led 346, offset 12972 */
	0x000132b8, /* Controller 1, led 346, offset 12984 */
	0x000232c4, /* Controller 2, led 346, offset 12996 */
	0x000332d0, /* Controller 3, led 346, offset 13008 */
	0x000432dc, /* Controller 4, led 346, offset 13020 */
	0x000532e8, /* Controller 5, led 346, offset 13032 */
	0x000632f4, /* Controller 6, led 346, offset 13044 */
	0x00073300, /* Controller 7, led 346, offset 13056 */
	0x0008330c, /* Controller 8, led 346, offset 13068 */
	0x00093318, /* Controller 9, led 346, offset 13080 */
	0x000a3324, /* Controller 10, led 346, offset 13092 */
	0x000b3330, /* Controller 11, led 346, offset 13104 */
	0x0000333c, /* Controller 0, led 347, offset 13116 */
	0x00013348, /* Controller 1, led 347, offset 13128 */
	0x00023354, /* Controller 2, led 347, offset 13140 */
	0x00033360, /* Controller 3, led 347, offset 13152 */
	0x0004336c, /* Controller 4, led 347, offset 13164 */
	0x00053378, /* Controller 5, led 347, offset 13176 */
	0x00063384, /* Controller 6, led 347, offset 13188 */
	0x00073390, /* Controller 7, led 347, offset 13200 */
	0x0008339c, /* Controller 8, led 347, offset 13212 */
	0x000933a8, /* Controller 9, led 347, offset 13224 */
	0x000a33b4, /* Controller 10, led 347, offset 13236 */
	0x000b33c0, /* Controller 11, led 347, offset 13248 */
	0x000033cc, /* Controller 0, led 348, offset 13260 */
	0x000133d8, /* Controller 1, led 348, offset 13272 */
	0x000233e4, /* Controller 2, led 348, offset 13284 */
	0x000333f0, /* Controller 3, led 348, offset 13296 */
	0x000433fc, /* Controller 4, led 348, offset 13308 */
	0x00053408, /* Controller 5, led 348, offset 13320 */
	0x00063414, /* Controller 6, led 348, offset 13332 */
	0x00073420, /* Controller 7, led 348, offset 13344 */
	0x0008342c, /* Controller 8, led 348, offset 13356 */
	0x00093438, /* Controller 9, led 348, offset 13368 */
	0x000a3444, /* Controller 10, led 348, offset 13380 */
	0x000b3450, /* Controller 11, led 348, offset 13392 */
	0x0000345c, /* Controller 0, led 349, offset 13404 */
	0x00013468, /* Controller 1, led 349, offset 13416 */
	0x00023474, /* Controller 2, led 349, offset 13428 */
	0x00033480, /* Controller 3, led 349, offset 13440 */
	0x0004348c, /* Controller 4, led 349, offset 13452 */
	0x00053498, /* Controller 5, led 349, offset 13464 */
	0x000634a4, /* Controller 6, led 349, offset 13476 */
	0x000734b0, /* Controller 7, led 349, offset 13488 */
	0x000834bc, /* Controller 8, led 349, offset 13500 */
	0x000934c8, /* Controller 9, led 349, offset 13512 */
	0x000a34d4, /* Controller 10, led 349, offset 13524 */
	0x000b34e0, /* Controller 11, led 349, offset 13536 */
	0x000034ec, /* Controller 0, led 350, offset 13548 */
	0x000134f8, /* Controller 1, led 350, offset 13560 */
	0x00023504, /* Controller 2, led 350, offset 13572 */
	0x00033510, /* Controller 3, led 350, offset 13584 */
	0x0004351c, /* Controller 4, led 350, offset 13596 */
	0x00053528, /* Controller 5, led 350, offset 13608 */
	0x00063534, /* Controller 6, led 350, offset 13620 */
	0x00073540, /* Controller 7, led 350, offset 13632 */
	0x0008354c, /* Controller 8, led 350, offset 13644 */
	0x00093558, /* Controller 9, led 350, offset 13656 */
	0x000a3564, /* Controller 10, led 350, offset 13668 */
	0x000b3570, /* Controller 11, led 350, offset 13680 */
	0x0000357c, /* Controller 0, led 351, offset 13692 */
	0x00013588, /* Controller 1, led 351, offset 13704 */
	0x00023594, /* Controller 2, led 351, offset 13716 */
	0x000335a0, /* Controller 3, led 351, offset 13728 */
	0x000435ac, /* Controller 4, led 351, offset 13740 */
	0x000535b8, /* Controller 5, led 351, offset 13752 */
	0x000635c4, /* Controller 6, led 351, offset 13764 */
	0x000735d0, /* Controller 7, led 351, offset 13776 */
	0x000835dc, /* Controller 8, led 351, offset 13788 */
	0x000935e8, /* Controller 9, led 351, offset 13800 */
	0x000a35f4, /* Controller 10, led 351, offset 13812 */
	0x000b3600, /* Controller 11, led 351, offset 13824 */
	0x0000360c, /* Controller 0, led 352, offset 13836 */
	0x00013618, /* Controller 1, led 352, offset 13848 */
	0x00023624, /* Controller 2, led 352, offset 13860 */
	0x00033630, /* Controller 3, led 352, offset 13872 */
	0x0004363c, /* Controller 4, led 352, offset 13884 */
	0x00053648, /* Controller 5, led 352, offset 13896 */
	0x00063654, /* Controller 6, led 352, offset 13908 */
	0x00073660, /* Controller 7, led 352, offset 13920 */
	0x0008366c, /* Controller 8, led 352, offset 13932 */
	0x00093678, /* Controller 9, led 352, offset 13944 */
	0x000a3684, /* Controller 10, led 352, offset 13956 */
	0x000b3690, /* Controller 11, led 352, offset 13968 */
	0x0000369c, /* Controller 0, led 353, offset 13980 */
	0x000136a8, /* Controller 1, led 353, offset 13992 */
	0x000236b4, /* Controller 2, led 353, offset 14004 */
	0x000336c0, /* Controller 3, led 353, offset 14016 */
	0x000436cc, /* Controller 4, led 353, offset 14028 */
	0x000536d8, /* Controller 5, led 353, offset 14040 */
	0x000636e4, /* Controller 6, led 353, offset 14052 */
	0x000736f0, /* Controller 7, led 353, offset 14064 */
	0x000836fc, /* Controller 8, led 353, offset 14076 */
	0x00093708, /* Controller 9, led 353, offset 14088 */
	0x000a3714, /* Controller 10, led 353, offset 14100 */
	0x000b3720, /* Controller 11, led 353, offset 14112 */
	0x0000372c, /* Controller 0, led 354, offset 14124 */
	0x00013738, /* Controller 1, led 354, offset 14136 */
	0x00023744, /* Controller 2, led 354, offset 14148 */
	0x00033750, /* Controller 3, led 354, offset 14160 */
	0x0004375c, /* Controller 4, led 354, offset 14172 */
	0x00053768, /* Controller 5, led 354, offset 14184 */
	0x00063774, /* Controller 6, led 354, offset 14196 */
	0x00073780, /* Controller 7, led 354, offset 14208 */
	0x0008378c, /* Controller 8, led 354, offset 14220 */
	0x00093798, /* Controller 9, led 354, offset 14232 */
	0x000a37a4, /* Controller 10, led 354, offset 14244 */
	0x000b37b0, /* Controller 11, led 354, offset 14256 */
	0x000037bc, /* Controller 0, led 355, offset 14268 */
	0x000137c8, /* Controller 1, led 355, offset 14280 */
	0x000237d4, /* Controller 2, led 355, offset 14292 */
	0x000337e0, /* Controller 3, led 355, offset 14304 */
	0x000437ec, /* Controller 4, led 355, offset 14316 */
	0x000537f8, /* Controller 5, led 355, offset 14328 */
	0x00063804, /* Controller 6, led 355, offset 14340 */
	0x00073810, /* Controller 7, led 355, offset 14352 */
	0x0008381c, /* Controller 8, led 355, offset 14364 */
	0x00093828, /* Controller 9, led 355, offset 14376 */
	0x000a3834, /* Controller 10, led 355, offset 14388 */
	0x000b3840, /* Controller 11, led 355, offset 14400 */
	0x0000384c, /* Controller 0, led 356, offset 14412 */
	0x00013858, /* Controller 1, led 356, offset 14424 */
	0x00023864, /* Controller 2, led 356, offset 14436 */
	0x00033870, /* Controller 3, led 356, offset 14448 */
	0x0004387c, /* Controller 4, led 356, offset 14460 */
	0x00053888, /* Controller 5, led 356, offset 14472 */
	0x00063894, /* Controller 6, led 356, offset 14484 */
	0x000738a0, /* Controller 7, led 356, offset 14496 */
	0x000838ac, /* Controller 8, led 356, offset 14508 */
	0x000938b8, /* Controller 9, led 356, offset 14520 */
	0x000a38c4, /* Controller 10, led 356, offset 14532 */
	0x000b38d0, /* Controller 11, led 356, offset 14544 */
	0x000038dc, /* Controller 0, led 357, offset 14556 */
	0x000138e8, /* Controller 1, led 357, offset 14568 */
	0x000238f4, /* Controller 2, led 357, offset 14580 */
	0x00033900, /* Controller 3, led 357, offset 14592 */
	0x0004390c, /* Controller 4, led 357, offset 14604 */
	0x00053918, /* Controller 5, led 357, offset 14616 */
	0x00063924, /* Controller 6, led 357, offset 14628 */
	0x00073930, /* Controller 7, led 357, offset 14640 */
	0x0008393c, /* Controller 8, led 357, offset 14652 */
	0x00093948, /* Controller 9, led 357, offset 14664 */
	0x000a3954, /* Controller 10, led 357, offset 14676 */
	0x000b3960, /* Controller 11, led 357, offset 14688 */
	0x0000396c, /* Controller 0, led 358, offset 14700 */
	0x00013978, /* Controller 1, led 358, offset 14712 */
	0x00023984, /* Controller 2, led 358, offset 14724 */
	0x00033990, /* Controller 3, led 358, offset 14736 */
	0x0004399c, /* Controller 4, led 358, offset 14748 */
	0x000539a8, /* Controller 5, led 358, offset 14760 */
	0x000639b4, /* Controller 6, led 358, offset 14772 */
	0x000739c0, /* Controller 7, led 358, offset 14784 */
	0x000839cc, /* Controller 8, led 358, offset 14796 */
	0x000939d8, /* Controller 9, led 358, offset 14808 */
	0x000a39e4, /* Controller 10, led 358, offset 14820 */
	0x000b39f0, /* Controller 11, led 358, offset 14832 */
	0x000039fc, /* Controller 0, led 359, offset 14844 */
	0x00013a08, /* Controller 1, led 359, offset 14856 */
	0x00023a14, /* Controller 2, led 359, offset 14868 */
	0x00033a20, /* Controller 3, led 359, offset 14880 */
	0x00043a2c, /* Controller 4, led 359, offset 14892 */
	0x00053a38, /* Controller 5, led 359, offset 14904 */
	0x00063a44, /* Controller 6, led 359, offset 14916 */
	0x00073a50, /* Controller 7, led 359, offset 14928 */
	0x00083a5c, /* Controller 8, led 359, offset 14940 */
	0x00093a68, /* Controller 9, led 359, offset 14952 */
	0x000a3a74, /* Controller 10, led 359, offset 14964 */
	0x000b3a80, /* Controller 11, led 359, offset 14976 */
	0x00003a8c, /* Controller 0, led 360, offset 14988 */
	0x00013a98, /* Controller 1, led 360, offset 15000 */
	0x00023aa4, /* Controller 2, led 360, offset 15012 */
	0x00033ab0, /* Controller 3, led 360, offset 15024 */
	0x00043abc, /* Controller 4, led 360, offset 15036 */
	0x00053ac8, /* Controller 5, led 360, offset 15048 */
	0x00063ad4, /* Controller 6, led 360, offset 15060 */
	0x00073ae0, /* Controller 7, led 360, offset 15072 */
	0x00083aec, /* Controller 8, led 360, offset 15084 */
	0x00093af8, /* Controller 9, led 360, offset 15096 */
	0x000a3b04, /* Controller 10, led 360, offset 15108 */
	0x000b3b10, /* Controller 11, led 360, offset 15120 */
	0x00003b1c, /* Controller 0, led 361, offset 15132 */
	0x00013b28, /* Controller 1, led 361, offset 15144 */
	0x00023b34, /* Controller 2, led 361, offset 15156 */
	0x00033b40, /* Controller 3, led 361, offset 15168 */
	0x00043b4c, /* Controller 4, led 361, offset 15180 */
	0x00053b58, /* Controller 5, led 361, offset 15192 */
	0x00063b64, /* Controller 6, led 361, offset 15204 */
	0x00073b70, /* Controller 7, led 361, offset 15216 */
	0x00083b7c, /* Controller 8, led 361, offset 15228 */
	0x00093b88, /* Controller 9, led 361, offset 15240 */
	0x000a3b94, /* Controller 10, led 361, offset 15252 */
	0x000b3ba0, /* Controller 11, led 361, offset 15264 */
	0x00003bac, /* Controller 0, led 362, offset 15276 */
	0x00013bb8, /* Controller 1, led 362, offset 15288 */
	0x00023bc4, /* Controller 2, led 362, offset 15300 */
	0x00033bd0, /* Controller 3, led 362, offset 15312 */
	0x00043bdc, /* Controller 4, led 362, offset 15324 */
	0x00053be8, /* Controller 5, led 362, offset 15336 */
	0x00063bf4, /* Controller 6, led 362, offset 15348 */
	0x00073c00, /* Controller 7, led 362, offset 15360 */
	0x00083c0c, /* Controller 8, led 362, offset 15372 */
	0x00093c18, /* Controller 9, led 362, offset 15384 */
	0x000a3c24, /* Controller 10, led 362, offset 15396 */
	0x000b3c30, /* Controller 11, led 362, offset 15408 */
	0x00003c3c, /* Controller 0, led 363, offset 15420 */
	0x00013c48, /* Controller 1, led 363, offset 15432 */
	0x00023c54, /* Controller 2, led 363, offset 15444 */
	0x00033c60, /* Controller 3, led 363, offset 15456 */
	0x00043c6c, /* Controller 4, led 363, offset 15468 */
	0x00053c78, /* Controller 5, led 363, offset 15480 */
	0x00063c84, /* Controller 6, led 363, offset 15492 */
	0x00073c90, /* Controller 7, led 363, offset 15504 */
	0x00083c9c, /* Controller 8, led 363, offset 15516 */
	0x00093ca8, /* Controller 9, led 363, offset 15528 */
	0x000a3cb4, /* Controller 10, led 363, offset 15540 */
	0x000b3cc0, /* Controller 11, led 363, offset 15552 */
	0x00003ccc, /* Controller 0, led 364, offset 15564 */
	0x00013cd8, /* Controller 1, led 364, offset 15576 */
	0x00023ce4, /* Controller 2, led 364, offset 15588 */
	0x00033cf0, /* Controller 3, led 364, offset 15600 */
	0x00043cfc, /* Controller 4, led 364, offset 15612 */
	0x00053d08, /* Controller 5, led 364, offset 15624 */
	0x00063d14, /* Controller 6, led 364, offset 15636 */
	0x00073d20, /* Controller 7, led 364, offset 15648 */
	0x00083d2c, /* Controller 8, led 364, offset 15660 */
	0x00093d38, /* Controller 9, led 364, offset 15672 */
	0x000a3d44, /* Controller 10, led 364, offset 15684 */
	0x000b3d50, /* Controller 11, led 364, offset 15696 */
	0x00003d5c, /* Controller 0, led 365, offset 15708 */
	0x00013d68, /* Controller 1, led 365, offset 15720 */
	0x00023d74, /* Controller 2, led 365, offset 15732 */
	0x00033d80, /* Controller 3, led 365, offset 15744 */
	0x00043d8c, /* Controller 4, led 365, offset 15756 */
	0x00053d98, /* Controller 5, led 365, offset 15768 */
	0x00063da4, /* Controller 6, led 365, offset 15780 */
	0x00073db0, /* Controller 7, led 365, offset 15792 */
	0x00083dbc, /* Controller 8, led 365, offset 15804 */
	0x00093dc8, /* Controller 9, led 365, offset 15816 */
	0x000a3dd4, /* Controller 10, led 365, offset 15828 */
	0x000b3de0, /* Controller 11, led 365, offset 15840 */
	0x00003dec, /* Controller 0, led 366, offset 15852 */
	0x00013df8, /* Controller 1, led 366, offset 15864 */
	0x00023e04, /* Controller 2, led 366, offset 15876 */
	0x00033e10, /* Controller 3, led 366, offset 15888 */
	0x00043e1c, /* Controller 4, led 366, offset 15900 */
	0x00053e28, /* Controller 5, led 366, offset 15912 */
	0x00063e34, /* Controller 6, led 366, offset 15924 */
	0x00073e40, /* Controller 7, led 366, offset 15936 */
	0x00083e4c, /* Controller 8, led 366, offset 15948 */
	0x00093e58, /* Controller 9, led 366, offset 15960 */
	0x000a3e64, /* Controller 10, led 366, offset 15972 */
	0x000b3e70, /* Controller 11, led 366, offset 15984 */
	0x00003e7c, /* Controller 0, led 367, offset 15996 */
	0x00013e88, /* Controller 1, led 367, offset 16008 */
	0x00023e94, /* Controller 2, led 367, offset 16020 */
	0x00033ea0, /* Controller 3, led 367, offset 16032 */
	0x00043eac, /* Controller 4, led 367, offset 16044 */
	0x00053eb8, /* Controller 5, led 367, offset 16056 */
	0x00063ec4, /* Controller 6, led 367, offset 16068 */
	0x00073ed0, /* Controller 7, led 367, offset 16080 */
	0x00083edc, /* Controller 8, led 367, offset 16092 */
	0x00093ee8, /* Controller 9, led 367, offset 16104 */
	0x000a3ef4, /* Controller 10, led 367, offset 16116 */
	0x000b3f00, /* Controller 11, led 367, offset 16128 */
	0x00003f0c, /* Controller 0, led 368, offset 16140 */
	0x00013f18, /* Controller 1, led 368, offset 16152 */
	0x00023f24, /* Controller 2, led 368, offset 16164 */
	0x00033f30, /* Controller 3, led 368, offset 16176 */
	0x00043f3c, /* Controller 4, led 368, offset 16188 */
	0x00053f48, /* Controller 5, led 368, offset 16200 */
	0x00063f54, /* Controller 6, led 368, offset 16212 */
	0x00073f60, /* Controller 7, led 368, offset 16224 */
	0x00083f6c, /* Controller 8, led 368, offset 16236 */
	0x00093f78, /* Controller 9, led 368, offset 16248 */
	0x000a3f84, /* Controller 10, led 368, offset 16260 */
	0x000b3f90, /* Controller 11, led 368, offset 16272 */
	0x00003f9c, /* Controller 0, led 369, offset 16284 */
	0x00013fa8, /* Controller 1, led 369, offset 16296 */
	0x00023fb4, /* Controller 2, led 369, offset 16308 */
	0x00033fc0, /* Controller 3, led 369, offset 16320 */
	0x00043fcc, /* Controller 4, led 369, offset 16332 */
	0x00053fd8, /* Controller 5, led 369, offset 16344 */
	0x00063fe4, /* Controller 6, led 369, offset 16356 */
	0x00073ff0, /* Controller 7, led 369, offset 16368 */
	0x00083ffc, /* Controller 8, led 369, offset 16380 */
	0x00094008, /* Controller 9, led 369, offset 16392 */
	0x000a4014, /* Controller 10, led 369, offset 16404 */
	0x000b4020, /* Controller 11, led 369, offset 16416 */
	0x0000402c, /* Controller 0, led 370, offset 16428 */
	0x00014038, /* Controller 1, led 370, offset 16440 */
	0x00024044, /* Controller 2, led 370, offset 16452 */
	0x00034050, /* Controller 3, led 370, offset 16464 */
	0x0004405c, /* Controller 4, led 370, offset 16476 */
	0x00054068, /* Controller 5, led 370, offset 16488 */
	0x00064074, /* Controller 6, led 370, offset 16500 */
	0x00074080, /* Controller 7, led 370, offset 16512 */
	0x0008408c, /* Controller 8, led 370, offset 16524 */
	0x00094098, /* Controller 9, led 370, offset 16536 */
	0x000a40a4, /* Controller 10, led 370, offset 16548 */
	0x000b40b0, /* Controller 11, led 370, offset 16560 */
	0x000040bc, /* Controller 0, led 371, offset 16572 */
	0x000140c8, /* Controller 1, led 371, offset 16584 */
	0x000240d4, /* Controller 2, led 371, offset 16596 */
	0x000340e0, /* Controller 3, led 371, offset 16608 */
	0x000440ec, /* Controller 4, led 371, offset 16620 */
	0x000540f8, /* Controller 5, led 371, offset 16632 */
	0x00064104, /* Controller 6, led 371, offset 16644 */
	0x00074110, /* Controller 7, led 371, offset 16656 */
	0x0008411c, /* Controller 8, led 371, offset 16668 */
	0x00094128, /* Controller 9, led 371, offset 16680 */
	0x000a4134, /* Controller 10, led 371, offset 16692 */
	0x000b4140, /* Controller 11, led 371, offset 16704 */
	0x0000414c, /* Controller 0, led 372, offset 16716 */
	0x00014158, /* Controller 1, led 372, offset 16728 */
	0x00024164, /* Controller 2, led 372, offset 16740 */
	0x00034170, /* Controller 3, led 372, offset 16752 */
	0x0004417c, /* Controller 4, led 372, offset 16764 */
	0x00054188, /* Controller 5, led 372, offset 16776 */
	0x00064194, /* Controller 6, led 372, offset 16788 */
	0x000741a0, /* Controller 7, led 372, offset 16800 */
	0x000841ac, /* Controller 8, led 372, offset 16812 */
	0x000941b8, /* Controller 9, led 372, offset 16824 */
	0x000a41c4, /* Controller 10, led 372, offset 16836 */
	0x000b41d0, /* Controller 11, led 372, offset 16848 */
	0x000041dc, /* Controller 0, led 373, offset 16860 */
	0x000141e8, /* Controller 1, led 373, offset 16872 */
	0x000241f4, /* Controller 2, led 373, offset 16884 */
	0x00034200, /* Controller 3, led 373, offset 16896 */
	0x0004420c, /* Controller 4, led 373, offset 16908 */
	0x00054218, /* Controller 5, led 373, offset 16920 */
	0x00064224, /* Controller 6, led 373, offset 16932 */
	0x00074230, /* Controller 7, led 373, offset 16944 */
	0x0008423c, /* Controller 8, led 373, offset 16956 */
	0x00094248, /* Controller 9, led 373, offset 16968 */
	0x000a4254, /* Controller 10, led 373, offset 16980 */
	0x000b4260, /* Controller 11, led 373, offset 16992 */
	0x0000426c, /* Controller 0, led 374, offset 17004 */
	0x00014278, /* Controller 1, led 374, offset 17016 */
	0x00024284, /* Controller 2, led 374, offset 17028 */
	0x00034290, /* Controller 3, led 374, offset 17040 */
	0x0004429c, /* Controller 4, led 374, offset 17052 */
	0x000542a8, /* Controller 5, led 374, offset 17064 */
	0x000642b4, /* Controller 6, led 374, offset 17076 */
	0x000742c0, /* Controller 7, led 374, offset 17088 */
	0x000842cc, /* Controller 8, led 374, offset 17100 */
	0x000942d8, /* Controller 9, led 374, offset 17112 */
	0x000a42e4, /* Controller 10, led 374, offset 17124 */
	0x000b42f0, /* Controller 11, led 374, offset 17136 */
	0x000042fc, /* Controller 0, led 375, offset 17148 */
	0x00014308, /* Controller 1, led 375, offset 17160 */
	0x00024314, /* Controller 2, led 375, offset 17172 */
	0x00034320, /* Controller 3, led 375, offset 17184 */
	0x0004432c, /* Controller 4, led 375, offset 17196 */
	0x00054338, /* Controller 5, led 375, offset 17208 */
	0x00064344, /* Controller 6, led 375, offset 17220 */
	0x00074350, /* Controller 7, led 375, offset 17232 */
	0x0008435c, /* Controller 8, led 375, offset 17244 */
	0x00094368, /* Controller 9, led 375, offset 17256 */
	0x000a4374, /* Controller 10, led 375, offset 17268 */
	0x000b4380, /* Controller 11, led 375, offset 17280 */
	0x0000438c, /* Controller 0, led 376, offset 17292 */
	0x00014398, /* Controller 1, led 376, offset 17304 */
	0x000243a4, /* Controller 2, led 376, offset 17316 */
	0x000343b0, /* Controller 3, led 376, offset 17328 */
	0x000443bc, /* Controller 4, led 376, offset 17340 */
	0x000543c8, /* Controller 5, led 376, offset 17352 */
	0x000643d4, /* Controller 6, led 376, offset 17364 */
	0x000743e0, /* Controller 7, led 376, offset 17376 */
	0x000843ec, /* Controller 8, led 376, offset 17388 */
	0x000943f8, /* Controller 9, led 376, offset 17400 */
	0x000a4404, /* Controller 10, led 376, offset 17412 */
	0x000b4410, /* Controller 11, led 376, offset 17424 */
	0x0000441c, /* Controller 0, led 377, offset 17436 */
	0x00014428, /* Controller 1, led 377, offset 17448 */
	0x00024434, /* Controller 2, led 377, offset 17460 */
	0x00034440, /* Controller 3, led 377, offset 17472 */
	0x0004444c, /* Controller 4, led 377, offset 17484 */
	0x00054458, /* Controller 5, led 377, offset 17496 */
	0x00064464, /* Controller 6, led 377, offset 17508 */
	0x00074470, /* Controller 7, led 377, offset 17520 */
	0x0008447c, /* Controller 8, led 377, offset 17532 */
	0x00094488, /* Controller 9, led 377, offset 17544 */
	0x000a4494, /* Controller 10, led 377, offset 17556 */
	0x000b44a0, /* Controller 11, led 377, offset 17568 */
	0x000044ac, /* Controller 0, led 378, offset 17580 */
	0x000144b8, /* Controller 1, led 378, offset 17592 */
	0x000244c4, /* Controller 2, led 378, offset 17604 */
	0x000344d0, /* Controller 3, led 378, offset 17616 */
	0x000444dc, /* Controller 4, led 378, offset 17628 */
	0x000544e8, /* Controller 5, led 378, offset 17640 */
	0x000644f4, /* Controller 6, led 378, offset 17652 */
	0x00074500, /* Controller 7, led 378, offset 17664 */
	0x0008450c, /* Controller 8, led 378, offset 17676 */
	0x00094518, /* Controller 9, led 378, offset 17688 */
	0x000a4524, /* Controller 10, led 378, offset 17700 */
	0x000b4530, /* Controller 11, led 378, offset 17712 */
	0x0000453c, /* Controller 0, led 379, offset 17724 */
	0x00014548, /* Controller 1, led 379, offset 17736 */
	0x00024554, /* Controller 2, led 379, offset 17748 */
	0x00034560, /* Controller 3, led 379, offset 17760 */
	0x0004456c, /* Controller 4, led 379, offset 17772 */
	0x00054578, /* Controller 5, led 379, offset 17784 */
	0x00064584, /* Controller 6, led 379, offset 17796 */
	0x00074590, /* Controller 7, led 379, offset 17808 */
	0x0008459c, /* Controller 8, led 379, offset 17820 */
	0x000945a8, /* Controller 9, led 379, offset 17832 */
	0x000a45b4, /* Controller 10, led 379, offset 17844 */
	0x000b45c0, /* Controller 11, led 379, offset 17856 */
	0x000045cc, /* Controller 0, led 380, offset 17868 */
	0x000145d8, /* Controller 1, led 380, offset 17880 */
	0x000245e4, /* Controller 2, led 380, offset 17892 */
	0x000345f0, /* Controller 3, led 380, offset 17904 */
	0x000445fc, /* Controller 4, led 380, offset 17916 */
	0x00054608, /* Controller 5, led 380, offset 17928 */
	0x00064614, /* Controller 6, led 380, offset 17940 */
	0x00074620, /* Controller 7, led 380, offset 17952 */
	0x0008462c, /* Controller 8, led 380, offset 17964 */
	0x00094638, /* Controller 9, led 380, offset 17976 */
	0x000a4644, /* Controller 10, led 380, offset 17988 */
	0x000b4650, /* Controller 11, led 380, offset 18000 */
	0x0000465c, /* Controller 0, led 381, offset 18012 */
	0x00014668, /* Controller 1, led 381, offset 18024 */
	0x00024674, /* Controller 2, led 381, offset 18036 */
	0x00034680, /* Controller 3, led 381, offset 18048 */
	0x0004468c, /* Controller 4, led 381, offset 18060 */
	0x00054698, /* Controller 5, led 381, offset 18072 */
	0x000646a4, /* Controller 6, led 381, offset 18084 */
	0x000746b0, /* Controller 7, led 381, offset 18096 */
	0x000846bc, /* Controller 8, led 381, offset 18108 */
	0x000946c8, /* Controller 9, led 381, offset 18120 */
	0x000a46d4, /* Controller 10, led 381, offset 18132 */
	0x000b46e0, /* Controller 11, led 381, offset 18144 */
	0x000046ec, /* Controller 0, led 382, offset 18156 */
	0x000146f8, /* Controller 1, led 382, offset 18168 */
	0x00024704, /* Controller 2, led 382, offset 18180 */
	0x00034710, /* Controller 3, led 382, offset 18192 */
	0x0004471c, /* Controller 4, led 382, offset 18204 */
	0x00054728, /* Controller 5, led 382, offset 18216 */
	0x00064734, /* Controller 6, led 382, offset 18228 */
	0x00074740, /* Controller 7, led 382, offset 18240 */
	0x0008474c, /* Controller 8, led 382, offset 18252 */
	0x00094758, /* Controller 9, led 382, offset 18264 */
	0x000a4764, /* Controller 10, led 382, offset 18276 */
	0x000b4770, /* Controller 11, led 382, offset 18288 */
	0x0000477c, /* Controller 0, led 383, offset 18300 */
	0x00014788, /* Controller 1, led 383, offset 18312 */
	0x00024794, /* Controller 2, led 383, offset 18324 */
	0x000347a0, /* Controller 3, led 383, offset 18336 */
	0x000447ac, /* Controller 4, led 383, offset 18348 */
	0x000547b8, /* Controller 5, led 383, offset 18360 */
	0x000647c4, /* Controller 6, led 383, offset 18372 */
	0x000747d0, /* Controller 7, led 383, offset 18384 */
	0x000847dc, /* Controller 8, led 383, offset 18396 */
	0x000947e8, /* Controller 9, led 383, offset 18408 */
	0x000a47f4, /* Controller 10, led 383, offset 18420 */
	0x000b4800, /* Controller 11, led 383, offset 18432 */
	0x00000000, /* Controller 0, led 384, offset 0 */
	0x00010000, /* Controller 1, led 384, offset 0 */
	0x00020000, /* Controller 2, led 384, offset 0 */
	0x00030000, /* Controller 3, led 384, offset 0 */
	0x00040000, /* Controller 4, led 384, offset 0 */
	0x00050000, /* Controller 5, led 384, offset 0 */
	0x00060000, /* Controller 6, led 384, offset 0 */
	0x00070000, /* Controller 7, led 384, offset 0 */
	0x00080000, /* Controller 8, led 384, offset 0 */
	0x00090000, /* Controller 9, led 384, offset 0 */
	0x000a0000, /* Controller 10, led 384, offset 0 */
	0x000b0000, /* Controller 11, led 384, offset 0 */
	0x00000000, /* Controller 0, led 385, offset 0 */
	0x00010000, /* Controller 1, led 385, offset 0 */
	0x00020000, /* Controller 2, led 385, offset 0 */
	0x00030000, /* Controller 3, led 385, offset 0 */
	0x00040000, /* Controller 4, led 385, offset 0 */
	0x00050000, /* Controller 5, led 385, offset 0 */
	0x00060000, /* Controller 6, led 385, offset 0 */
	0x00070000, /* Controller 7, led 385, offset 0 */
	0x00080000, /* Controller 8, led 385, offset 0 */
	0x00090000, /* Controller 9, led 385, offset 0 */
	0x000a0000, /* Controller 10, led 385, offset 0 */
	0x000b0000, /* Controller 11, led 385, offset 0 */
	0x00000000, /* Controller 0, led 386, offset 0 */
	0x00010000, /* Controller 1, led 386, offset 0 */
	0x00020000, /* Controller 2, led 386, offset 0 */
	0x00030000, /* Controller 3, led 386, offset 0 */
	0x00040000, /* Controller 4, led 386, offset 0 */
	0x00050000, /* Controller 5, led 386, offset 0 */
	0x00060000, /* Controller 6, led 386, offset 0 */
	0x00070000, /* Controller 7, led 386, offset 0 */
	0x00080000, /* Controller 8, led 386, offset 0 */
	0x00090000, /* Controller 9, led 386, offset 0 */
	0x000a0000, /* Controller 10, led 386, offset 0 */
	0x000b0000, /* Controller 11, led 386, offset 0 */
	0x00000000, /* Controller 0, led 387, offset 0 */
	0x00010000, /* Controller 1, led 387, offset 0 */
	0x00020000, /* Controller 2, led 387, offset 0 */
	0x00030000, /* Controller 3, led 387, offset 0 */
	0x00040000, /* Controller 4, led 387, offset 0 */
	0x00050000, /* Controller 5, led 387, offset 0 */
	0x00060000, /* Controller 6, led 387, offset 0 */
	0x00070000, /* Controller 7, led 387, offset 0 */
	0x00080000, /* Controller 8, led 387, offset 0 */
	0x00090000, /* Controller 9, led 387, offset 0 */
	0x000a0000, /* Controller 10, led 387, offset 0 */
	0x000b0000, /* Controller 11, led 387, offset 0 */
	0x00000000, /* Controller 0, led 388, offset 0 */
	0x00010000, /* Controller 1, led 388, offset 0 */
	0x00020000, /* Controller 2, led 388, offset 0 */
	0x00030000, /* Controller 3, led 388, offset 0 */
	0x00040000, /* Controller 4, led 388, offset 0 */
	0x00050000, /* Controller 5, led 388, offset 0 */
	0x00060000, /* Controller 6, led 388, offset 0 */
	0x00070000, /* Controller 7, led 388, offset 0 */
	0x00080000, /* Controller 8, led 388, offset 0 */
	0x00090000, /* Controller 9, led 388, offset 0 */
	0x000a0000, /* Controller 10, led 388, offset 0 */
	0x000b0000, /* Controller 11, led 388, offset 0 */
	0x00000000, /* Controller 0, led 389, offset 0 */
	0x00010000, /* Controller 1, led 389, offset 0 */
	0x00020000, /* Controller 2, led 389, offset 0 */
	0x00030000, /* Controller 3, led 389, offset 0 */
	0x00040000, /* Controller 4, led 389, offset 0 */
	0x00050000, /* Controller 5, led 389, offset 0 */
	0x00060000, /* Controller 6, led 389, offset 0 */
	0x00070000, /* Controller 7, led 389, offset 0 */
	0x00080000, /* Controller 8, led 389, offset 0 */
	0x00090000, /* Controller 9, led 389, offset 0 */
	0x000a0000, /* Controller 10, led 389, offset 0 */
	0x000b0000, /* Controller 11, led 389, offset 0 */
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
	0x00000000, /* Controller 0, flush */ 
	0x00000000, /* Controller 0, flush */ 
	0x00000000, /* Controller 0, flush */ 
	0x00000000, /* Controller 0, flush */ 
	0x00000000, /* Controller 0, flush */ 
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
	0x00010000, /* Controller 1, flush */ 
	0x00010000, /* Controller 1, flush */ 
	0x00010000, /* Controller 1, flush */ 
	0x00010000, /* Controller 1, flush */ 
	0x00010000, /* Controller 1, flush */ 
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
	0x00020000, /* Controller 2, flush */ 
	0x00020000, /* Controller 2, flush */ 
	0x00020000, /* Controller 2, flush */ 
	0x00020000, /* Controller 2, flush */ 
	0x00020000, /* Controller 2, flush */ 
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
	0x00030000, /* Controller 3, flush */ 
	0x00030000, /* Controller 3, flush */ 
	0x00030000, /* Controller 3, flush */ 
	0x00030000, /* Controller 3, flush */ 
	0x00030000, /* Controller 3, flush */ 
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
	0x00040000, /* Controller 4, flush */ 
	0x00040000, /* Controller 4, flush */ 
	0x00040000, /* Controller 4, flush */ 
	0x00040000, /* Controller 4, flush */ 
	0x00040000, /* Controller 4, flush */ 
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
	0x00050000, /* Controller 5, flush */ 
	0x00050000, /* Controller 5, flush */ 
	0x00050000, /* Controller 5, flush */ 
	0x00050000, /* Controller 5, flush */ 
	0x00050000, /* Controller 5, flush */ 
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
	0x00060000, /* Controller 6, flush */ 
	0x00060000, /* Controller 6, flush */ 
	0x00060000, /* Controller 6, flush */ 
	0x00060000, /* Controller 6, flush */ 
	0x00060000, /* Controller 6, flush */ 
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
	0x00070000, /* Controller 7, flush */ 
	0x00070000, /* Controller 7, flush */ 
	0x00070000, /* Controller 7, flush */ 
	0x00070000, /* Controller 7, flush */ 
	0x00070000, /* Controller 7, flush */ 
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
	0x00080000, /* Controller 8, flush */ 
	0x00080000, /* Controller 8, flush */ 
	0x00080000, /* Controller 8, flush */ 
	0x00080000, /* Controller 8, flush */ 
	0x00080000, /* Controller 8, flush */ 
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
	0x00090000, /* Controller 9, flush */ 
	0x00090000, /* Controller 9, flush */ 
	0x00090000, /* Controller 9, flush */ 
	0x00090000, /* Controller 9, flush */ 
	0x00090000, /* Controller 9, flush */ 
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
	0x000a0000, /* Controller 10, flush */ 
	0x000a0000, /* Controller 10, flush */ 
	0x000a0000, /* Controller 10, flush */ 
	0x000a0000, /* Controller 10, flush */ 
	0x000a0000, /* Controller 10, flush */ 
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
	0x000b0000, /* Controller 11, flush */ 
	0x000b0000, /* Controller 11, flush */ 
	0x000b0000, /* Controller 11, flush */ 
	0x000b0000, /* Controller 11, flush */ 
	0x000b0000, /* Controller 11, flush */ 
	0x000b0000, /* Controller 11, flush */ 
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
	0x000b0000
};
