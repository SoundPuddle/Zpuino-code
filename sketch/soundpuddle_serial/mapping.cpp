unsigned int ledmapping[] = { 
	0x00000004, /* Controller 0, led 0, offset 4 */
	0x0001000c, /* Controller 1, led 0, offset 12 */
	0x00020014, /* Controller 2, led 0, offset 20 */
	0x0003001c, /* Controller 3, led 0, offset 28 */
	0x00040024, /* Controller 4, led 0, offset 36 */
	0x0005002c, /* Controller 5, led 0, offset 44 */
	0x00060034, /* Controller 6, led 0, offset 52 */
	0x0007003c, /* Controller 7, led 0, offset 60 */
	0x00080044, /* Controller 8, led 0, offset 68 */
	0x0009004c, /* Controller 9, led 0, offset 76 */
	0x000a0054, /* Controller 10, led 0, offset 84 */
	0x000b005c, /* Controller 11, led 0, offset 92 */
	0x00000064, /* Controller 0, led 1, offset 100 */
	0x0001006c, /* Controller 1, led 1, offset 108 */
	0x00020074, /* Controller 2, led 1, offset 116 */
	0x0003007c, /* Controller 3, led 1, offset 124 */
	0x00040084, /* Controller 4, led 1, offset 132 */
	0x0005008c, /* Controller 5, led 1, offset 140 */
	0x00060094, /* Controller 6, led 1, offset 148 */
	0x0007009c, /* Controller 7, led 1, offset 156 */
	0x000800a4, /* Controller 8, led 1, offset 164 */
	0x000900ac, /* Controller 9, led 1, offset 172 */
	0x000a00b4, /* Controller 10, led 1, offset 180 */
	0x000b00bc, /* Controller 11, led 1, offset 188 */
	0x000000c4, /* Controller 0, led 2, offset 196 */
	0x000100cc, /* Controller 1, led 2, offset 204 */
	0x000200d4, /* Controller 2, led 2, offset 212 */
	0x000300dc, /* Controller 3, led 2, offset 220 */
	0x000400e4, /* Controller 4, led 2, offset 228 */
	0x000500ec, /* Controller 5, led 2, offset 236 */
	0x000600f4, /* Controller 6, led 2, offset 244 */
	0x000700fc, /* Controller 7, led 2, offset 252 */
	0x00080104, /* Controller 8, led 2, offset 260 */
	0x0009010c, /* Controller 9, led 2, offset 268 */
	0x000a0114, /* Controller 10, led 2, offset 276 */
	0x000b011c, /* Controller 11, led 2, offset 284 */
	0x00000124, /* Controller 0, led 3, offset 292 */
	0x0001012c, /* Controller 1, led 3, offset 300 */
	0x00020134, /* Controller 2, led 3, offset 308 */
	0x0003013c, /* Controller 3, led 3, offset 316 */
	0x00040144, /* Controller 4, led 3, offset 324 */
	0x0005014c, /* Controller 5, led 3, offset 332 */
	0x00060154, /* Controller 6, led 3, offset 340 */
	0x0007015c, /* Controller 7, led 3, offset 348 */
	0x00080164, /* Controller 8, led 3, offset 356 */
	0x0009016c, /* Controller 9, led 3, offset 364 */
	0x000a0174, /* Controller 10, led 3, offset 372 */
	0x000b017c, /* Controller 11, led 3, offset 380 */
	0x00000184, /* Controller 0, led 4, offset 388 */
	0x0001018c, /* Controller 1, led 4, offset 396 */
	0x00020194, /* Controller 2, led 4, offset 404 */
	0x0003019c, /* Controller 3, led 4, offset 412 */
	0x000401a4, /* Controller 4, led 4, offset 420 */
	0x000501ac, /* Controller 5, led 4, offset 428 */
	0x000601b4, /* Controller 6, led 4, offset 436 */
	0x000701bc, /* Controller 7, led 4, offset 444 */
	0x000801c4, /* Controller 8, led 4, offset 452 */
	0x000901cc, /* Controller 9, led 4, offset 460 */
	0x000a01d4, /* Controller 10, led 4, offset 468 */
	0x000b01dc, /* Controller 11, led 4, offset 476 */
	0x000001e4, /* Controller 0, led 5, offset 484 */
	0x000101ec, /* Controller 1, led 5, offset 492 */
	0x000201f4, /* Controller 2, led 5, offset 500 */
	0x000301fc, /* Controller 3, led 5, offset 508 */
	0x00040204, /* Controller 4, led 5, offset 516 */
	0x0005020c, /* Controller 5, led 5, offset 524 */
	0x00060214, /* Controller 6, led 5, offset 532 */
	0x0007021c, /* Controller 7, led 5, offset 540 */
	0x00080224, /* Controller 8, led 5, offset 548 */
	0x0009022c, /* Controller 9, led 5, offset 556 */
	0x000a0234, /* Controller 10, led 5, offset 564 */
	0x000b023c, /* Controller 11, led 5, offset 572 */
	0x00000244, /* Controller 0, led 6, offset 580 */
	0x0001024c, /* Controller 1, led 6, offset 588 */
	0x00020254, /* Controller 2, led 6, offset 596 */
	0x0003025c, /* Controller 3, led 6, offset 604 */
	0x00040264, /* Controller 4, led 6, offset 612 */
	0x0005026c, /* Controller 5, led 6, offset 620 */
	0x00060274, /* Controller 6, led 6, offset 628 */
	0x0007027c, /* Controller 7, led 6, offset 636 */
	0x00080284, /* Controller 8, led 6, offset 644 */
	0x0009028c, /* Controller 9, led 6, offset 652 */
	0x000a0294, /* Controller 10, led 6, offset 660 */
	0x000b029c, /* Controller 11, led 6, offset 668 */
	0x000002a4, /* Controller 0, led 7, offset 676 */
	0x000102ac, /* Controller 1, led 7, offset 684 */
	0x000202b4, /* Controller 2, led 7, offset 692 */
	0x000302bc, /* Controller 3, led 7, offset 700 */
	0x000402c4, /* Controller 4, led 7, offset 708 */
	0x000502cc, /* Controller 5, led 7, offset 716 */
	0x000602d4, /* Controller 6, led 7, offset 724 */
	0x000702dc, /* Controller 7, led 7, offset 732 */
	0x000802e4, /* Controller 8, led 7, offset 740 */
	0x000902ec, /* Controller 9, led 7, offset 748 */
	0x000a02f4, /* Controller 10, led 7, offset 756 */
	0x000b02fc, /* Controller 11, led 7, offset 764 */
	0x00000304, /* Controller 0, led 8, offset 772 */
	0x0001030c, /* Controller 1, led 8, offset 780 */
	0x00020314, /* Controller 2, led 8, offset 788 */
	0x0003031c, /* Controller 3, led 8, offset 796 */
	0x00040324, /* Controller 4, led 8, offset 804 */
	0x0005032c, /* Controller 5, led 8, offset 812 */
	0x00060334, /* Controller 6, led 8, offset 820 */
	0x0007033c, /* Controller 7, led 8, offset 828 */
	0x00080344, /* Controller 8, led 8, offset 836 */
	0x0009034c, /* Controller 9, led 8, offset 844 */
	0x000a0354, /* Controller 10, led 8, offset 852 */
	0x000b035c, /* Controller 11, led 8, offset 860 */
	0x00000364, /* Controller 0, led 9, offset 868 */
	0x0001036c, /* Controller 1, led 9, offset 876 */
	0x00020374, /* Controller 2, led 9, offset 884 */
	0x0003037c, /* Controller 3, led 9, offset 892 */
	0x00040384, /* Controller 4, led 9, offset 900 */
	0x0005038c, /* Controller 5, led 9, offset 908 */
	0x00060394, /* Controller 6, led 9, offset 916 */
	0x0007039c, /* Controller 7, led 9, offset 924 */
	0x000803a4, /* Controller 8, led 9, offset 932 */
	0x000903ac, /* Controller 9, led 9, offset 940 */
	0x000a03b4, /* Controller 10, led 9, offset 948 */
	0x000b03bc, /* Controller 11, led 9, offset 956 */
	0x000003c4, /* Controller 0, led 10, offset 964 */
	0x000103cc, /* Controller 1, led 10, offset 972 */
	0x000203d4, /* Controller 2, led 10, offset 980 */
	0x000303dc, /* Controller 3, led 10, offset 988 */
	0x000403e4, /* Controller 4, led 10, offset 996 */
	0x000503ec, /* Controller 5, led 10, offset 1004 */
	0x000603f4, /* Controller 6, led 10, offset 1012 */
	0x000703fc, /* Controller 7, led 10, offset 1020 */
	0x00080404, /* Controller 8, led 10, offset 1028 */
	0x0009040c, /* Controller 9, led 10, offset 1036 */
	0x000a0414, /* Controller 10, led 10, offset 1044 */
	0x000b041c, /* Controller 11, led 10, offset 1052 */
	0x00000424, /* Controller 0, led 11, offset 1060 */
	0x0001042c, /* Controller 1, led 11, offset 1068 */
	0x00020434, /* Controller 2, led 11, offset 1076 */
	0x0003043c, /* Controller 3, led 11, offset 1084 */
	0x00040444, /* Controller 4, led 11, offset 1092 */
	0x0005044c, /* Controller 5, led 11, offset 1100 */
	0x00060454, /* Controller 6, led 11, offset 1108 */
	0x0007045c, /* Controller 7, led 11, offset 1116 */
	0x00080464, /* Controller 8, led 11, offset 1124 */
	0x0009046c, /* Controller 9, led 11, offset 1132 */
	0x000a0474, /* Controller 10, led 11, offset 1140 */
	0x000b047c, /* Controller 11, led 11, offset 1148 */
	0x00000484, /* Controller 0, led 12, offset 1156 */
	0x0001048c, /* Controller 1, led 12, offset 1164 */
	0x00020494, /* Controller 2, led 12, offset 1172 */
	0x0003049c, /* Controller 3, led 12, offset 1180 */
	0x000404a4, /* Controller 4, led 12, offset 1188 */
	0x000504ac, /* Controller 5, led 12, offset 1196 */
	0x000604b4, /* Controller 6, led 12, offset 1204 */
	0x000704bc, /* Controller 7, led 12, offset 1212 */
	0x000804c4, /* Controller 8, led 12, offset 1220 */
	0x000904cc, /* Controller 9, led 12, offset 1228 */
	0x000a04d4, /* Controller 10, led 12, offset 1236 */
	0x000b04dc, /* Controller 11, led 12, offset 1244 */
	0x000004e4, /* Controller 0, led 13, offset 1252 */
	0x000104ec, /* Controller 1, led 13, offset 1260 */
	0x000204f4, /* Controller 2, led 13, offset 1268 */
	0x000304fc, /* Controller 3, led 13, offset 1276 */
	0x00040504, /* Controller 4, led 13, offset 1284 */
	0x0005050c, /* Controller 5, led 13, offset 1292 */
	0x00060514, /* Controller 6, led 13, offset 1300 */
	0x0007051c, /* Controller 7, led 13, offset 1308 */
	0x00080524, /* Controller 8, led 13, offset 1316 */
	0x0009052c, /* Controller 9, led 13, offset 1324 */
	0x000a0534, /* Controller 10, led 13, offset 1332 */
	0x000b053c, /* Controller 11, led 13, offset 1340 */
	0x00000544, /* Controller 0, led 14, offset 1348 */
	0x0001054c, /* Controller 1, led 14, offset 1356 */
	0x00020554, /* Controller 2, led 14, offset 1364 */
	0x0003055c, /* Controller 3, led 14, offset 1372 */
	0x00040564, /* Controller 4, led 14, offset 1380 */
	0x0005056c, /* Controller 5, led 14, offset 1388 */
	0x00060574, /* Controller 6, led 14, offset 1396 */
	0x0007057c, /* Controller 7, led 14, offset 1404 */
	0x00080584, /* Controller 8, led 14, offset 1412 */
	0x0009058c, /* Controller 9, led 14, offset 1420 */
	0x000a0594, /* Controller 10, led 14, offset 1428 */
	0x000b059c, /* Controller 11, led 14, offset 1436 */
	0x000005a4, /* Controller 0, led 15, offset 1444 */
	0x000105ac, /* Controller 1, led 15, offset 1452 */
	0x000205b4, /* Controller 2, led 15, offset 1460 */
	0x000305bc, /* Controller 3, led 15, offset 1468 */
	0x000405c4, /* Controller 4, led 15, offset 1476 */
	0x000505cc, /* Controller 5, led 15, offset 1484 */
	0x000605d4, /* Controller 6, led 15, offset 1492 */
	0x000705dc, /* Controller 7, led 15, offset 1500 */
	0x000805e4, /* Controller 8, led 15, offset 1508 */
	0x000905ec, /* Controller 9, led 15, offset 1516 */
	0x000a05f4, /* Controller 10, led 15, offset 1524 */
	0x000b05fc, /* Controller 11, led 15, offset 1532 */
	0x00000604, /* Controller 0, led 16, offset 1540 */
	0x0001060c, /* Controller 1, led 16, offset 1548 */
	0x00020614, /* Controller 2, led 16, offset 1556 */
	0x0003061c, /* Controller 3, led 16, offset 1564 */
	0x00040624, /* Controller 4, led 16, offset 1572 */
	0x0005062c, /* Controller 5, led 16, offset 1580 */
	0x00060634, /* Controller 6, led 16, offset 1588 */
	0x0007063c, /* Controller 7, led 16, offset 1596 */
	0x00080644, /* Controller 8, led 16, offset 1604 */
	0x0009064c, /* Controller 9, led 16, offset 1612 */
	0x000a0654, /* Controller 10, led 16, offset 1620 */
	0x000b065c, /* Controller 11, led 16, offset 1628 */
	0x00000664, /* Controller 0, led 17, offset 1636 */
	0x0001066c, /* Controller 1, led 17, offset 1644 */
	0x00020674, /* Controller 2, led 17, offset 1652 */
	0x0003067c, /* Controller 3, led 17, offset 1660 */
	0x00040684, /* Controller 4, led 17, offset 1668 */
	0x0005068c, /* Controller 5, led 17, offset 1676 */
	0x00060694, /* Controller 6, led 17, offset 1684 */
	0x0007069c, /* Controller 7, led 17, offset 1692 */
	0x000806a4, /* Controller 8, led 17, offset 1700 */
	0x000906ac, /* Controller 9, led 17, offset 1708 */
	0x000a06b4, /* Controller 10, led 17, offset 1716 */
	0x000b06bc, /* Controller 11, led 17, offset 1724 */
	0x000006c4, /* Controller 0, led 18, offset 1732 */
	0x000106cc, /* Controller 1, led 18, offset 1740 */
	0x000206d4, /* Controller 2, led 18, offset 1748 */
	0x000306dc, /* Controller 3, led 18, offset 1756 */
	0x000406e4, /* Controller 4, led 18, offset 1764 */
	0x000506ec, /* Controller 5, led 18, offset 1772 */
	0x000606f4, /* Controller 6, led 18, offset 1780 */
	0x000706fc, /* Controller 7, led 18, offset 1788 */
	0x00080704, /* Controller 8, led 18, offset 1796 */
	0x0009070c, /* Controller 9, led 18, offset 1804 */
	0x000a0714, /* Controller 10, led 18, offset 1812 */
	0x000b071c, /* Controller 11, led 18, offset 1820 */
	0x00000724, /* Controller 0, led 19, offset 1828 */
	0x0001072c, /* Controller 1, led 19, offset 1836 */
	0x00020734, /* Controller 2, led 19, offset 1844 */
	0x0003073c, /* Controller 3, led 19, offset 1852 */
	0x00040744, /* Controller 4, led 19, offset 1860 */
	0x0005074c, /* Controller 5, led 19, offset 1868 */
	0x00060754, /* Controller 6, led 19, offset 1876 */
	0x0007075c, /* Controller 7, led 19, offset 1884 */
	0x00080764, /* Controller 8, led 19, offset 1892 */
	0x0009076c, /* Controller 9, led 19, offset 1900 */
	0x000a0774, /* Controller 10, led 19, offset 1908 */
	0x000b077c, /* Controller 11, led 19, offset 1916 */
	0x00000784, /* Controller 0, led 20, offset 1924 */
	0x0001078c, /* Controller 1, led 20, offset 1932 */
	0x00020794, /* Controller 2, led 20, offset 1940 */
	0x0003079c, /* Controller 3, led 20, offset 1948 */
	0x000407a4, /* Controller 4, led 20, offset 1956 */
	0x000507ac, /* Controller 5, led 20, offset 1964 */
	0x000607b4, /* Controller 6, led 20, offset 1972 */
	0x000707bc, /* Controller 7, led 20, offset 1980 */
	0x000807c4, /* Controller 8, led 20, offset 1988 */
	0x000907cc, /* Controller 9, led 20, offset 1996 */
	0x000a07d4, /* Controller 10, led 20, offset 2004 */
	0x000b07dc, /* Controller 11, led 20, offset 2012 */
	0x000007e4, /* Controller 0, led 21, offset 2020 */
	0x000107ec, /* Controller 1, led 21, offset 2028 */
	0x000207f4, /* Controller 2, led 21, offset 2036 */
	0x000307fc, /* Controller 3, led 21, offset 2044 */
	0x00040804, /* Controller 4, led 21, offset 2052 */
	0x0005080c, /* Controller 5, led 21, offset 2060 */
	0x00060814, /* Controller 6, led 21, offset 2068 */
	0x0007081c, /* Controller 7, led 21, offset 2076 */
	0x00080824, /* Controller 8, led 21, offset 2084 */
	0x0009082c, /* Controller 9, led 21, offset 2092 */
	0x000a0834, /* Controller 10, led 21, offset 2100 */
	0x000b083c, /* Controller 11, led 21, offset 2108 */
	0x00000844, /* Controller 0, led 22, offset 2116 */
	0x0001084c, /* Controller 1, led 22, offset 2124 */
	0x00020854, /* Controller 2, led 22, offset 2132 */
	0x0003085c, /* Controller 3, led 22, offset 2140 */
	0x00040864, /* Controller 4, led 22, offset 2148 */
	0x0005086c, /* Controller 5, led 22, offset 2156 */
	0x00060874, /* Controller 6, led 22, offset 2164 */
	0x0007087c, /* Controller 7, led 22, offset 2172 */
	0x00080884, /* Controller 8, led 22, offset 2180 */
	0x0009088c, /* Controller 9, led 22, offset 2188 */
	0x000a0894, /* Controller 10, led 22, offset 2196 */
	0x000b089c, /* Controller 11, led 22, offset 2204 */
	0x000008a4, /* Controller 0, led 23, offset 2212 */
	0x000108ac, /* Controller 1, led 23, offset 2220 */
	0x000208b4, /* Controller 2, led 23, offset 2228 */
	0x000308bc, /* Controller 3, led 23, offset 2236 */
	0x000408c4, /* Controller 4, led 23, offset 2244 */
	0x000508cc, /* Controller 5, led 23, offset 2252 */
	0x000608d4, /* Controller 6, led 23, offset 2260 */
	0x000708dc, /* Controller 7, led 23, offset 2268 */
	0x000808e4, /* Controller 8, led 23, offset 2276 */
	0x000908ec, /* Controller 9, led 23, offset 2284 */
	0x000a08f4, /* Controller 10, led 23, offset 2292 */
	0x000b08fc, /* Controller 11, led 23, offset 2300 */
	0x00000904, /* Controller 0, led 24, offset 2308 */
	0x0001090c, /* Controller 1, led 24, offset 2316 */
	0x00020914, /* Controller 2, led 24, offset 2324 */
	0x0003091c, /* Controller 3, led 24, offset 2332 */
	0x00040924, /* Controller 4, led 24, offset 2340 */
	0x0005092c, /* Controller 5, led 24, offset 2348 */
	0x00060934, /* Controller 6, led 24, offset 2356 */
	0x0007093c, /* Controller 7, led 24, offset 2364 */
	0x00080944, /* Controller 8, led 24, offset 2372 */
	0x0009094c, /* Controller 9, led 24, offset 2380 */
	0x000a0954, /* Controller 10, led 24, offset 2388 */
	0x000b095c, /* Controller 11, led 24, offset 2396 */
	0x00000964, /* Controller 0, led 25, offset 2404 */
	0x0001096c, /* Controller 1, led 25, offset 2412 */
	0x00020974, /* Controller 2, led 25, offset 2420 */
	0x0003097c, /* Controller 3, led 25, offset 2428 */
	0x00040984, /* Controller 4, led 25, offset 2436 */
	0x0005098c, /* Controller 5, led 25, offset 2444 */
	0x00060994, /* Controller 6, led 25, offset 2452 */
	0x0007099c, /* Controller 7, led 25, offset 2460 */
	0x000809a4, /* Controller 8, led 25, offset 2468 */
	0x000909ac, /* Controller 9, led 25, offset 2476 */
	0x000a09b4, /* Controller 10, led 25, offset 2484 */
	0x000b09bc, /* Controller 11, led 25, offset 2492 */
	0x00000968, /* Controller 0, led 26, offset 2408 */
	0x00010970, /* Controller 1, led 26, offset 2416 */
	0x00020978, /* Controller 2, led 26, offset 2424 */
	0x00030980, /* Controller 3, led 26, offset 2432 */
	0x00040988, /* Controller 4, led 26, offset 2440 */
	0x00050990, /* Controller 5, led 26, offset 2448 */
	0x00060998, /* Controller 6, led 26, offset 2456 */
	0x000709a0, /* Controller 7, led 26, offset 2464 */
	0x000809a8, /* Controller 8, led 26, offset 2472 */
	0x000909b0, /* Controller 9, led 26, offset 2480 */
	0x000a09b8, /* Controller 10, led 26, offset 2488 */
	0x000b09c0, /* Controller 11, led 26, offset 2496 */
	0x00000908, /* Controller 0, led 27, offset 2312 */
	0x00010910, /* Controller 1, led 27, offset 2320 */
	0x00020918, /* Controller 2, led 27, offset 2328 */
	0x00030920, /* Controller 3, led 27, offset 2336 */
	0x00040928, /* Controller 4, led 27, offset 2344 */
	0x00050930, /* Controller 5, led 27, offset 2352 */
	0x00060938, /* Controller 6, led 27, offset 2360 */
	0x00070940, /* Controller 7, led 27, offset 2368 */
	0x00080948, /* Controller 8, led 27, offset 2376 */
	0x00090950, /* Controller 9, led 27, offset 2384 */
	0x000a0958, /* Controller 10, led 27, offset 2392 */
	0x000b0960, /* Controller 11, led 27, offset 2400 */
	0x000008a8, /* Controller 0, led 28, offset 2216 */
	0x000108b0, /* Controller 1, led 28, offset 2224 */
	0x000208b8, /* Controller 2, led 28, offset 2232 */
	0x000308c0, /* Controller 3, led 28, offset 2240 */
	0x000408c8, /* Controller 4, led 28, offset 2248 */
	0x000508d0, /* Controller 5, led 28, offset 2256 */
	0x000608d8, /* Controller 6, led 28, offset 2264 */
	0x000708e0, /* Controller 7, led 28, offset 2272 */
	0x000808e8, /* Controller 8, led 28, offset 2280 */
	0x000908f0, /* Controller 9, led 28, offset 2288 */
	0x000a08f8, /* Controller 10, led 28, offset 2296 */
	0x000b0900, /* Controller 11, led 28, offset 2304 */
	0x00000848, /* Controller 0, led 29, offset 2120 */
	0x00010850, /* Controller 1, led 29, offset 2128 */
	0x00020858, /* Controller 2, led 29, offset 2136 */
	0x00030860, /* Controller 3, led 29, offset 2144 */
	0x00040868, /* Controller 4, led 29, offset 2152 */
	0x00050870, /* Controller 5, led 29, offset 2160 */
	0x00060878, /* Controller 6, led 29, offset 2168 */
	0x00070880, /* Controller 7, led 29, offset 2176 */
	0x00080888, /* Controller 8, led 29, offset 2184 */
	0x00090890, /* Controller 9, led 29, offset 2192 */
	0x000a0898, /* Controller 10, led 29, offset 2200 */
	0x000b08a0, /* Controller 11, led 29, offset 2208 */
	0x000007e8, /* Controller 0, led 30, offset 2024 */
	0x000107f0, /* Controller 1, led 30, offset 2032 */
	0x000207f8, /* Controller 2, led 30, offset 2040 */
	0x00030800, /* Controller 3, led 30, offset 2048 */
	0x00040808, /* Controller 4, led 30, offset 2056 */
	0x00050810, /* Controller 5, led 30, offset 2064 */
	0x00060818, /* Controller 6, led 30, offset 2072 */
	0x00070820, /* Controller 7, led 30, offset 2080 */
	0x00080828, /* Controller 8, led 30, offset 2088 */
	0x00090830, /* Controller 9, led 30, offset 2096 */
	0x000a0838, /* Controller 10, led 30, offset 2104 */
	0x000b0840, /* Controller 11, led 30, offset 2112 */
	0x00000788, /* Controller 0, led 31, offset 1928 */
	0x00010790, /* Controller 1, led 31, offset 1936 */
	0x00020798, /* Controller 2, led 31, offset 1944 */
	0x000307a0, /* Controller 3, led 31, offset 1952 */
	0x000407a8, /* Controller 4, led 31, offset 1960 */
	0x000507b0, /* Controller 5, led 31, offset 1968 */
	0x000607b8, /* Controller 6, led 31, offset 1976 */
	0x000707c0, /* Controller 7, led 31, offset 1984 */
	0x000807c8, /* Controller 8, led 31, offset 1992 */
	0x000907d0, /* Controller 9, led 31, offset 2000 */
	0x000a07d8, /* Controller 10, led 31, offset 2008 */
	0x000b07e0, /* Controller 11, led 31, offset 2016 */
	0x00000728, /* Controller 0, led 32, offset 1832 */
	0x00010730, /* Controller 1, led 32, offset 1840 */
	0x00020738, /* Controller 2, led 32, offset 1848 */
	0x00030740, /* Controller 3, led 32, offset 1856 */
	0x00040748, /* Controller 4, led 32, offset 1864 */
	0x00050750, /* Controller 5, led 32, offset 1872 */
	0x00060758, /* Controller 6, led 32, offset 1880 */
	0x00070760, /* Controller 7, led 32, offset 1888 */
	0x00080768, /* Controller 8, led 32, offset 1896 */
	0x00090770, /* Controller 9, led 32, offset 1904 */
	0x000a0778, /* Controller 10, led 32, offset 1912 */
	0x000b0780, /* Controller 11, led 32, offset 1920 */
	0x000006c8, /* Controller 0, led 33, offset 1736 */
	0x000106d0, /* Controller 1, led 33, offset 1744 */
	0x000206d8, /* Controller 2, led 33, offset 1752 */
	0x000306e0, /* Controller 3, led 33, offset 1760 */
	0x000406e8, /* Controller 4, led 33, offset 1768 */
	0x000506f0, /* Controller 5, led 33, offset 1776 */
	0x000606f8, /* Controller 6, led 33, offset 1784 */
	0x00070700, /* Controller 7, led 33, offset 1792 */
	0x00080708, /* Controller 8, led 33, offset 1800 */
	0x00090710, /* Controller 9, led 33, offset 1808 */
	0x000a0718, /* Controller 10, led 33, offset 1816 */
	0x000b0720, /* Controller 11, led 33, offset 1824 */
	0x00000668, /* Controller 0, led 34, offset 1640 */
	0x00010670, /* Controller 1, led 34, offset 1648 */
	0x00020678, /* Controller 2, led 34, offset 1656 */
	0x00030680, /* Controller 3, led 34, offset 1664 */
	0x00040688, /* Controller 4, led 34, offset 1672 */
	0x00050690, /* Controller 5, led 34, offset 1680 */
	0x00060698, /* Controller 6, led 34, offset 1688 */
	0x000706a0, /* Controller 7, led 34, offset 1696 */
	0x000806a8, /* Controller 8, led 34, offset 1704 */
	0x000906b0, /* Controller 9, led 34, offset 1712 */
	0x000a06b8, /* Controller 10, led 34, offset 1720 */
	0x000b06c0, /* Controller 11, led 34, offset 1728 */
	0x00000608, /* Controller 0, led 35, offset 1544 */
	0x00010610, /* Controller 1, led 35, offset 1552 */
	0x00020618, /* Controller 2, led 35, offset 1560 */
	0x00030620, /* Controller 3, led 35, offset 1568 */
	0x00040628, /* Controller 4, led 35, offset 1576 */
	0x00050630, /* Controller 5, led 35, offset 1584 */
	0x00060638, /* Controller 6, led 35, offset 1592 */
	0x00070640, /* Controller 7, led 35, offset 1600 */
	0x00080648, /* Controller 8, led 35, offset 1608 */
	0x00090650, /* Controller 9, led 35, offset 1616 */
	0x000a0658, /* Controller 10, led 35, offset 1624 */
	0x000b0660, /* Controller 11, led 35, offset 1632 */
	0x000005a8, /* Controller 0, led 36, offset 1448 */
	0x000105b0, /* Controller 1, led 36, offset 1456 */
	0x000205b8, /* Controller 2, led 36, offset 1464 */
	0x000305c0, /* Controller 3, led 36, offset 1472 */
	0x000405c8, /* Controller 4, led 36, offset 1480 */
	0x000505d0, /* Controller 5, led 36, offset 1488 */
	0x000605d8, /* Controller 6, led 36, offset 1496 */
	0x000705e0, /* Controller 7, led 36, offset 1504 */
	0x000805e8, /* Controller 8, led 36, offset 1512 */
	0x000905f0, /* Controller 9, led 36, offset 1520 */
	0x000a05f8, /* Controller 10, led 36, offset 1528 */
	0x000b0600, /* Controller 11, led 36, offset 1536 */
	0x00000548, /* Controller 0, led 37, offset 1352 */
	0x00010550, /* Controller 1, led 37, offset 1360 */
	0x00020558, /* Controller 2, led 37, offset 1368 */
	0x00030560, /* Controller 3, led 37, offset 1376 */
	0x00040568, /* Controller 4, led 37, offset 1384 */
	0x00050570, /* Controller 5, led 37, offset 1392 */
	0x00060578, /* Controller 6, led 37, offset 1400 */
	0x00070580, /* Controller 7, led 37, offset 1408 */
	0x00080588, /* Controller 8, led 37, offset 1416 */
	0x00090590, /* Controller 9, led 37, offset 1424 */
	0x000a0598, /* Controller 10, led 37, offset 1432 */
	0x000b05a0, /* Controller 11, led 37, offset 1440 */
	0x000004e8, /* Controller 0, led 38, offset 1256 */
	0x000104f0, /* Controller 1, led 38, offset 1264 */
	0x000204f8, /* Controller 2, led 38, offset 1272 */
	0x00030500, /* Controller 3, led 38, offset 1280 */
	0x00040508, /* Controller 4, led 38, offset 1288 */
	0x00050510, /* Controller 5, led 38, offset 1296 */
	0x00060518, /* Controller 6, led 38, offset 1304 */
	0x00070520, /* Controller 7, led 38, offset 1312 */
	0x00080528, /* Controller 8, led 38, offset 1320 */
	0x00090530, /* Controller 9, led 38, offset 1328 */
	0x000a0538, /* Controller 10, led 38, offset 1336 */
	0x000b0540, /* Controller 11, led 38, offset 1344 */
	0x00000488, /* Controller 0, led 39, offset 1160 */
	0x00010490, /* Controller 1, led 39, offset 1168 */
	0x00020498, /* Controller 2, led 39, offset 1176 */
	0x000304a0, /* Controller 3, led 39, offset 1184 */
	0x000404a8, /* Controller 4, led 39, offset 1192 */
	0x000504b0, /* Controller 5, led 39, offset 1200 */
	0x000604b8, /* Controller 6, led 39, offset 1208 */
	0x000704c0, /* Controller 7, led 39, offset 1216 */
	0x000804c8, /* Controller 8, led 39, offset 1224 */
	0x000904d0, /* Controller 9, led 39, offset 1232 */
	0x000a04d8, /* Controller 10, led 39, offset 1240 */
	0x000b04e0, /* Controller 11, led 39, offset 1248 */
	0x00000428, /* Controller 0, led 40, offset 1064 */
	0x00010430, /* Controller 1, led 40, offset 1072 */
	0x00020438, /* Controller 2, led 40, offset 1080 */
	0x00030440, /* Controller 3, led 40, offset 1088 */
	0x00040448, /* Controller 4, led 40, offset 1096 */
	0x00050450, /* Controller 5, led 40, offset 1104 */
	0x00060458, /* Controller 6, led 40, offset 1112 */
	0x00070460, /* Controller 7, led 40, offset 1120 */
	0x00080468, /* Controller 8, led 40, offset 1128 */
	0x00090470, /* Controller 9, led 40, offset 1136 */
	0x000a0478, /* Controller 10, led 40, offset 1144 */
	0x000b0480, /* Controller 11, led 40, offset 1152 */
	0x000003c8, /* Controller 0, led 41, offset 968 */
	0x000103d0, /* Controller 1, led 41, offset 976 */
	0x000203d8, /* Controller 2, led 41, offset 984 */
	0x000303e0, /* Controller 3, led 41, offset 992 */
	0x000403e8, /* Controller 4, led 41, offset 1000 */
	0x000503f0, /* Controller 5, led 41, offset 1008 */
	0x000603f8, /* Controller 6, led 41, offset 1016 */
	0x00070400, /* Controller 7, led 41, offset 1024 */
	0x00080408, /* Controller 8, led 41, offset 1032 */
	0x00090410, /* Controller 9, led 41, offset 1040 */
	0x000a0418, /* Controller 10, led 41, offset 1048 */
	0x000b0420, /* Controller 11, led 41, offset 1056 */
	0x00000368, /* Controller 0, led 42, offset 872 */
	0x00010370, /* Controller 1, led 42, offset 880 */
	0x00020378, /* Controller 2, led 42, offset 888 */
	0x00030380, /* Controller 3, led 42, offset 896 */
	0x00040388, /* Controller 4, led 42, offset 904 */
	0x00050390, /* Controller 5, led 42, offset 912 */
	0x00060398, /* Controller 6, led 42, offset 920 */
	0x000703a0, /* Controller 7, led 42, offset 928 */
	0x000803a8, /* Controller 8, led 42, offset 936 */
	0x000903b0, /* Controller 9, led 42, offset 944 */
	0x000a03b8, /* Controller 10, led 42, offset 952 */
	0x000b03c0, /* Controller 11, led 42, offset 960 */
	0x00000308, /* Controller 0, led 43, offset 776 */
	0x00010310, /* Controller 1, led 43, offset 784 */
	0x00020318, /* Controller 2, led 43, offset 792 */
	0x00030320, /* Controller 3, led 43, offset 800 */
	0x00040328, /* Controller 4, led 43, offset 808 */
	0x00050330, /* Controller 5, led 43, offset 816 */
	0x00060338, /* Controller 6, led 43, offset 824 */
	0x00070340, /* Controller 7, led 43, offset 832 */
	0x00080348, /* Controller 8, led 43, offset 840 */
	0x00090350, /* Controller 9, led 43, offset 848 */
	0x000a0358, /* Controller 10, led 43, offset 856 */
	0x000b0360, /* Controller 11, led 43, offset 864 */
	0x000002a8, /* Controller 0, led 44, offset 680 */
	0x000102b0, /* Controller 1, led 44, offset 688 */
	0x000202b8, /* Controller 2, led 44, offset 696 */
	0x000302c0, /* Controller 3, led 44, offset 704 */
	0x000402c8, /* Controller 4, led 44, offset 712 */
	0x000502d0, /* Controller 5, led 44, offset 720 */
	0x000602d8, /* Controller 6, led 44, offset 728 */
	0x000702e0, /* Controller 7, led 44, offset 736 */
	0x000802e8, /* Controller 8, led 44, offset 744 */
	0x000902f0, /* Controller 9, led 44, offset 752 */
	0x000a02f8, /* Controller 10, led 44, offset 760 */
	0x000b0300, /* Controller 11, led 44, offset 768 */
	0x00000248, /* Controller 0, led 45, offset 584 */
	0x00010250, /* Controller 1, led 45, offset 592 */
	0x00020258, /* Controller 2, led 45, offset 600 */
	0x00030260, /* Controller 3, led 45, offset 608 */
	0x00040268, /* Controller 4, led 45, offset 616 */
	0x00050270, /* Controller 5, led 45, offset 624 */
	0x00060278, /* Controller 6, led 45, offset 632 */
	0x00070280, /* Controller 7, led 45, offset 640 */
	0x00080288, /* Controller 8, led 45, offset 648 */
	0x00090290, /* Controller 9, led 45, offset 656 */
	0x000a0298, /* Controller 10, led 45, offset 664 */
	0x000b02a0, /* Controller 11, led 45, offset 672 */
	0x000001e8, /* Controller 0, led 46, offset 488 */
	0x000101f0, /* Controller 1, led 46, offset 496 */
	0x000201f8, /* Controller 2, led 46, offset 504 */
	0x00030200, /* Controller 3, led 46, offset 512 */
	0x00040208, /* Controller 4, led 46, offset 520 */
	0x00050210, /* Controller 5, led 46, offset 528 */
	0x00060218, /* Controller 6, led 46, offset 536 */
	0x00070220, /* Controller 7, led 46, offset 544 */
	0x00080228, /* Controller 8, led 46, offset 552 */
	0x00090230, /* Controller 9, led 46, offset 560 */
	0x000a0238, /* Controller 10, led 46, offset 568 */
	0x000b0240, /* Controller 11, led 46, offset 576 */
	0x00000188, /* Controller 0, led 47, offset 392 */
	0x00010190, /* Controller 1, led 47, offset 400 */
	0x00020198, /* Controller 2, led 47, offset 408 */
	0x000301a0, /* Controller 3, led 47, offset 416 */
	0x000401a8, /* Controller 4, led 47, offset 424 */
	0x000501b0, /* Controller 5, led 47, offset 432 */
	0x000601b8, /* Controller 6, led 47, offset 440 */
	0x000701c0, /* Controller 7, led 47, offset 448 */
	0x000801c8, /* Controller 8, led 47, offset 456 */
	0x000901d0, /* Controller 9, led 47, offset 464 */
	0x000a01d8, /* Controller 10, led 47, offset 472 */
	0x000b01e0, /* Controller 11, led 47, offset 480 */
	0x00000128, /* Controller 0, led 48, offset 296 */
	0x00010130, /* Controller 1, led 48, offset 304 */
	0x00020138, /* Controller 2, led 48, offset 312 */
	0x00030140, /* Controller 3, led 48, offset 320 */
	0x00040148, /* Controller 4, led 48, offset 328 */
	0x00050150, /* Controller 5, led 48, offset 336 */
	0x00060158, /* Controller 6, led 48, offset 344 */
	0x00070160, /* Controller 7, led 48, offset 352 */
	0x00080168, /* Controller 8, led 48, offset 360 */
	0x00090170, /* Controller 9, led 48, offset 368 */
	0x000a0178, /* Controller 10, led 48, offset 376 */
	0x000b0180, /* Controller 11, led 48, offset 384 */
	0x000000c8, /* Controller 0, led 49, offset 200 */
	0x000100d0, /* Controller 1, led 49, offset 208 */
	0x000200d8, /* Controller 2, led 49, offset 216 */
	0x000300e0, /* Controller 3, led 49, offset 224 */
	0x000400e8, /* Controller 4, led 49, offset 232 */
	0x000500f0, /* Controller 5, led 49, offset 240 */
	0x000600f8, /* Controller 6, led 49, offset 248 */
	0x00070100, /* Controller 7, led 49, offset 256 */
	0x00080108, /* Controller 8, led 49, offset 264 */
	0x00090110, /* Controller 9, led 49, offset 272 */
	0x000a0118, /* Controller 10, led 49, offset 280 */
	0x000b0120, /* Controller 11, led 49, offset 288 */
	0x00000068, /* Controller 0, led 50, offset 104 */
	0x00010070, /* Controller 1, led 50, offset 112 */
	0x00020078, /* Controller 2, led 50, offset 120 */
	0x00030080, /* Controller 3, led 50, offset 128 */
	0x00040088, /* Controller 4, led 50, offset 136 */
	0x00050090, /* Controller 5, led 50, offset 144 */
	0x00060098, /* Controller 6, led 50, offset 152 */
	0x000700a0, /* Controller 7, led 50, offset 160 */
	0x000800a8, /* Controller 8, led 50, offset 168 */
	0x000900b0, /* Controller 9, led 50, offset 176 */
	0x000a00b8, /* Controller 10, led 50, offset 184 */
	0x000b00c0, /* Controller 11, led 50, offset 192 */
	0x00000008, /* Controller 0, led 51, offset 8 */
	0x00010010, /* Controller 1, led 51, offset 16 */
	0x00020018, /* Controller 2, led 51, offset 24 */
	0x00030020, /* Controller 3, led 51, offset 32 */
	0x00040028, /* Controller 4, led 51, offset 40 */
	0x00050030, /* Controller 5, led 51, offset 48 */
	0x00060038, /* Controller 6, led 51, offset 56 */
	0x00070040, /* Controller 7, led 51, offset 64 */
	0x00080048, /* Controller 8, led 51, offset 72 */
	0x00090050, /* Controller 9, led 51, offset 80 */
	0x000a0058, /* Controller 10, led 51, offset 88 */
	0x000b0060, /* Controller 11, led 51, offset 96 */
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
