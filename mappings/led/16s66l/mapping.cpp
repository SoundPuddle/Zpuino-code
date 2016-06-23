unsigned int ledmapping[] = { 
	0x00000004, /* Controller 0, led 0, offset 4 */
	0x0001000c, /* Controller 1, led 0, offset 12 */
	0x00020014, /* Controller 2, led 0, offset 20 */
	0x0003001c, /* Controller 3, led 0, offset 28 */
	0x00040024, /* Controller 4, led 0, offset 36 */
	0x0005002c, /* Controller 5, led 0, offset 44 */
	0x00060034, /* Controller 6, led 0, offset 52 */
	0x0007003c, /* Controller 7, led 0, offset 60 */
	0x00000044, /* Controller 0, led 1, offset 68 */
	0x0001004c, /* Controller 1, led 1, offset 76 */
	0x00020054, /* Controller 2, led 1, offset 84 */
	0x0003005c, /* Controller 3, led 1, offset 92 */
	0x00040064, /* Controller 4, led 1, offset 100 */
	0x0005006c, /* Controller 5, led 1, offset 108 */
	0x00060074, /* Controller 6, led 1, offset 116 */
	0x0007007c, /* Controller 7, led 1, offset 124 */
	0x00000084, /* Controller 0, led 2, offset 132 */
	0x0001008c, /* Controller 1, led 2, offset 140 */
	0x00020094, /* Controller 2, led 2, offset 148 */
	0x0003009c, /* Controller 3, led 2, offset 156 */
	0x000400a4, /* Controller 4, led 2, offset 164 */
	0x000500ac, /* Controller 5, led 2, offset 172 */
	0x000600b4, /* Controller 6, led 2, offset 180 */
	0x000700bc, /* Controller 7, led 2, offset 188 */
	0x000000c4, /* Controller 0, led 3, offset 196 */
	0x000100cc, /* Controller 1, led 3, offset 204 */
	0x000200d4, /* Controller 2, led 3, offset 212 */
	0x000300dc, /* Controller 3, led 3, offset 220 */
	0x000400e4, /* Controller 4, led 3, offset 228 */
	0x000500ec, /* Controller 5, led 3, offset 236 */
	0x000600f4, /* Controller 6, led 3, offset 244 */
	0x000700fc, /* Controller 7, led 3, offset 252 */
	0x00000104, /* Controller 0, led 4, offset 260 */
	0x0001010c, /* Controller 1, led 4, offset 268 */
	0x00020114, /* Controller 2, led 4, offset 276 */
	0x0003011c, /* Controller 3, led 4, offset 284 */
	0x00040124, /* Controller 4, led 4, offset 292 */
	0x0005012c, /* Controller 5, led 4, offset 300 */
	0x00060134, /* Controller 6, led 4, offset 308 */
	0x0007013c, /* Controller 7, led 4, offset 316 */
	0x00000144, /* Controller 0, led 5, offset 324 */
	0x0001014c, /* Controller 1, led 5, offset 332 */
	0x00020154, /* Controller 2, led 5, offset 340 */
	0x0003015c, /* Controller 3, led 5, offset 348 */
	0x00040164, /* Controller 4, led 5, offset 356 */
	0x0005016c, /* Controller 5, led 5, offset 364 */
	0x00060174, /* Controller 6, led 5, offset 372 */
	0x0007017c, /* Controller 7, led 5, offset 380 */
	0x00000184, /* Controller 0, led 6, offset 388 */
	0x0001018c, /* Controller 1, led 6, offset 396 */
	0x00020194, /* Controller 2, led 6, offset 404 */
	0x0003019c, /* Controller 3, led 6, offset 412 */
	0x000401a4, /* Controller 4, led 6, offset 420 */
	0x000501ac, /* Controller 5, led 6, offset 428 */
	0x000601b4, /* Controller 6, led 6, offset 436 */
	0x000701bc, /* Controller 7, led 6, offset 444 */
	0x000001c4, /* Controller 0, led 7, offset 452 */
	0x000101cc, /* Controller 1, led 7, offset 460 */
	0x000201d4, /* Controller 2, led 7, offset 468 */
	0x000301dc, /* Controller 3, led 7, offset 476 */
	0x000401e4, /* Controller 4, led 7, offset 484 */
	0x000501ec, /* Controller 5, led 7, offset 492 */
	0x000601f4, /* Controller 6, led 7, offset 500 */
	0x000701fc, /* Controller 7, led 7, offset 508 */
	0x00000204, /* Controller 0, led 8, offset 516 */
	0x0001020c, /* Controller 1, led 8, offset 524 */
	0x00020214, /* Controller 2, led 8, offset 532 */
	0x0003021c, /* Controller 3, led 8, offset 540 */
	0x00040224, /* Controller 4, led 8, offset 548 */
	0x0005022c, /* Controller 5, led 8, offset 556 */
	0x00060234, /* Controller 6, led 8, offset 564 */
	0x0007023c, /* Controller 7, led 8, offset 572 */
	0x00000244, /* Controller 0, led 9, offset 580 */
	0x0001024c, /* Controller 1, led 9, offset 588 */
	0x00020254, /* Controller 2, led 9, offset 596 */
	0x0003025c, /* Controller 3, led 9, offset 604 */
	0x00040264, /* Controller 4, led 9, offset 612 */
	0x0005026c, /* Controller 5, led 9, offset 620 */
	0x00060274, /* Controller 6, led 9, offset 628 */
	0x0007027c, /* Controller 7, led 9, offset 636 */
	0x00000284, /* Controller 0, led 10, offset 644 */
	0x0001028c, /* Controller 1, led 10, offset 652 */
	0x00020294, /* Controller 2, led 10, offset 660 */
	0x0003029c, /* Controller 3, led 10, offset 668 */
	0x000402a4, /* Controller 4, led 10, offset 676 */
	0x000502ac, /* Controller 5, led 10, offset 684 */
	0x000602b4, /* Controller 6, led 10, offset 692 */
	0x000702bc, /* Controller 7, led 10, offset 700 */
	0x000002c4, /* Controller 0, led 11, offset 708 */
	0x000102cc, /* Controller 1, led 11, offset 716 */
	0x000202d4, /* Controller 2, led 11, offset 724 */
	0x000302dc, /* Controller 3, led 11, offset 732 */
	0x000402e4, /* Controller 4, led 11, offset 740 */
	0x000502ec, /* Controller 5, led 11, offset 748 */
	0x000602f4, /* Controller 6, led 11, offset 756 */
	0x000702fc, /* Controller 7, led 11, offset 764 */
	0x00000304, /* Controller 0, led 12, offset 772 */
	0x0001030c, /* Controller 1, led 12, offset 780 */
	0x00020314, /* Controller 2, led 12, offset 788 */
	0x0003031c, /* Controller 3, led 12, offset 796 */
	0x00040324, /* Controller 4, led 12, offset 804 */
	0x0005032c, /* Controller 5, led 12, offset 812 */
	0x00060334, /* Controller 6, led 12, offset 820 */
	0x0007033c, /* Controller 7, led 12, offset 828 */
	0x00000344, /* Controller 0, led 13, offset 836 */
	0x0001034c, /* Controller 1, led 13, offset 844 */
	0x00020354, /* Controller 2, led 13, offset 852 */
	0x0003035c, /* Controller 3, led 13, offset 860 */
	0x00040364, /* Controller 4, led 13, offset 868 */
	0x0005036c, /* Controller 5, led 13, offset 876 */
	0x00060374, /* Controller 6, led 13, offset 884 */
	0x0007037c, /* Controller 7, led 13, offset 892 */
	0x00000384, /* Controller 0, led 14, offset 900 */
	0x0001038c, /* Controller 1, led 14, offset 908 */
	0x00020394, /* Controller 2, led 14, offset 916 */
	0x0003039c, /* Controller 3, led 14, offset 924 */
	0x000403a4, /* Controller 4, led 14, offset 932 */
	0x000503ac, /* Controller 5, led 14, offset 940 */
	0x000603b4, /* Controller 6, led 14, offset 948 */
	0x000703bc, /* Controller 7, led 14, offset 956 */
	0x000003c4, /* Controller 0, led 15, offset 964 */
	0x000103cc, /* Controller 1, led 15, offset 972 */
	0x000203d4, /* Controller 2, led 15, offset 980 */
	0x000303dc, /* Controller 3, led 15, offset 988 */
	0x000403e4, /* Controller 4, led 15, offset 996 */
	0x000503ec, /* Controller 5, led 15, offset 1004 */
	0x000603f4, /* Controller 6, led 15, offset 1012 */
	0x000703fc, /* Controller 7, led 15, offset 1020 */
	0x00000404, /* Controller 0, led 16, offset 1028 */
	0x0001040c, /* Controller 1, led 16, offset 1036 */
	0x00020414, /* Controller 2, led 16, offset 1044 */
	0x0003041c, /* Controller 3, led 16, offset 1052 */
	0x00040424, /* Controller 4, led 16, offset 1060 */
	0x0005042c, /* Controller 5, led 16, offset 1068 */
	0x00060434, /* Controller 6, led 16, offset 1076 */
	0x0007043c, /* Controller 7, led 16, offset 1084 */
	0x00000444, /* Controller 0, led 17, offset 1092 */
	0x0001044c, /* Controller 1, led 17, offset 1100 */
	0x00020454, /* Controller 2, led 17, offset 1108 */
	0x0003045c, /* Controller 3, led 17, offset 1116 */
	0x00040464, /* Controller 4, led 17, offset 1124 */
	0x0005046c, /* Controller 5, led 17, offset 1132 */
	0x00060474, /* Controller 6, led 17, offset 1140 */
	0x0007047c, /* Controller 7, led 17, offset 1148 */
	0x00000484, /* Controller 0, led 18, offset 1156 */
	0x0001048c, /* Controller 1, led 18, offset 1164 */
	0x00020494, /* Controller 2, led 18, offset 1172 */
	0x0003049c, /* Controller 3, led 18, offset 1180 */
	0x000404a4, /* Controller 4, led 18, offset 1188 */
	0x000504ac, /* Controller 5, led 18, offset 1196 */
	0x000604b4, /* Controller 6, led 18, offset 1204 */
	0x000704bc, /* Controller 7, led 18, offset 1212 */
	0x000004c4, /* Controller 0, led 19, offset 1220 */
	0x000104cc, /* Controller 1, led 19, offset 1228 */
	0x000204d4, /* Controller 2, led 19, offset 1236 */
	0x000304dc, /* Controller 3, led 19, offset 1244 */
	0x000404e4, /* Controller 4, led 19, offset 1252 */
	0x000504ec, /* Controller 5, led 19, offset 1260 */
	0x000604f4, /* Controller 6, led 19, offset 1268 */
	0x000704fc, /* Controller 7, led 19, offset 1276 */
	0x00000504, /* Controller 0, led 20, offset 1284 */
	0x0001050c, /* Controller 1, led 20, offset 1292 */
	0x00020514, /* Controller 2, led 20, offset 1300 */
	0x0003051c, /* Controller 3, led 20, offset 1308 */
	0x00040524, /* Controller 4, led 20, offset 1316 */
	0x0005052c, /* Controller 5, led 20, offset 1324 */
	0x00060534, /* Controller 6, led 20, offset 1332 */
	0x0007053c, /* Controller 7, led 20, offset 1340 */
	0x00000544, /* Controller 0, led 21, offset 1348 */
	0x0001054c, /* Controller 1, led 21, offset 1356 */
	0x00020554, /* Controller 2, led 21, offset 1364 */
	0x0003055c, /* Controller 3, led 21, offset 1372 */
	0x00040564, /* Controller 4, led 21, offset 1380 */
	0x0005056c, /* Controller 5, led 21, offset 1388 */
	0x00060574, /* Controller 6, led 21, offset 1396 */
	0x0007057c, /* Controller 7, led 21, offset 1404 */
	0x00000584, /* Controller 0, led 22, offset 1412 */
	0x0001058c, /* Controller 1, led 22, offset 1420 */
	0x00020594, /* Controller 2, led 22, offset 1428 */
	0x0003059c, /* Controller 3, led 22, offset 1436 */
	0x000405a4, /* Controller 4, led 22, offset 1444 */
	0x000505ac, /* Controller 5, led 22, offset 1452 */
	0x000605b4, /* Controller 6, led 22, offset 1460 */
	0x000705bc, /* Controller 7, led 22, offset 1468 */
	0x000005c4, /* Controller 0, led 23, offset 1476 */
	0x000105cc, /* Controller 1, led 23, offset 1484 */
	0x000205d4, /* Controller 2, led 23, offset 1492 */
	0x000305dc, /* Controller 3, led 23, offset 1500 */
	0x000405e4, /* Controller 4, led 23, offset 1508 */
	0x000505ec, /* Controller 5, led 23, offset 1516 */
	0x000605f4, /* Controller 6, led 23, offset 1524 */
	0x000705fc, /* Controller 7, led 23, offset 1532 */
	0x00000604, /* Controller 0, led 24, offset 1540 */
	0x0001060c, /* Controller 1, led 24, offset 1548 */
	0x00020614, /* Controller 2, led 24, offset 1556 */
	0x0003061c, /* Controller 3, led 24, offset 1564 */
	0x00040624, /* Controller 4, led 24, offset 1572 */
	0x0005062c, /* Controller 5, led 24, offset 1580 */
	0x00060634, /* Controller 6, led 24, offset 1588 */
	0x0007063c, /* Controller 7, led 24, offset 1596 */
	0x00000644, /* Controller 0, led 25, offset 1604 */
	0x0001064c, /* Controller 1, led 25, offset 1612 */
	0x00020654, /* Controller 2, led 25, offset 1620 */
	0x0003065c, /* Controller 3, led 25, offset 1628 */
	0x00040664, /* Controller 4, led 25, offset 1636 */
	0x0005066c, /* Controller 5, led 25, offset 1644 */
	0x00060674, /* Controller 6, led 25, offset 1652 */
	0x0007067c, /* Controller 7, led 25, offset 1660 */
	0x00000684, /* Controller 0, led 26, offset 1668 */
	0x0001068c, /* Controller 1, led 26, offset 1676 */
	0x00020694, /* Controller 2, led 26, offset 1684 */
	0x0003069c, /* Controller 3, led 26, offset 1692 */
	0x000406a4, /* Controller 4, led 26, offset 1700 */
	0x000506ac, /* Controller 5, led 26, offset 1708 */
	0x000606b4, /* Controller 6, led 26, offset 1716 */
	0x000706bc, /* Controller 7, led 26, offset 1724 */
	0x000006c4, /* Controller 0, led 27, offset 1732 */
	0x000106cc, /* Controller 1, led 27, offset 1740 */
	0x000206d4, /* Controller 2, led 27, offset 1748 */
	0x000306dc, /* Controller 3, led 27, offset 1756 */
	0x000406e4, /* Controller 4, led 27, offset 1764 */
	0x000506ec, /* Controller 5, led 27, offset 1772 */
	0x000606f4, /* Controller 6, led 27, offset 1780 */
	0x000706fc, /* Controller 7, led 27, offset 1788 */
	0x00000704, /* Controller 0, led 28, offset 1796 */
	0x0001070c, /* Controller 1, led 28, offset 1804 */
	0x00020714, /* Controller 2, led 28, offset 1812 */
	0x0003071c, /* Controller 3, led 28, offset 1820 */
	0x00040724, /* Controller 4, led 28, offset 1828 */
	0x0005072c, /* Controller 5, led 28, offset 1836 */
	0x00060734, /* Controller 6, led 28, offset 1844 */
	0x0007073c, /* Controller 7, led 28, offset 1852 */
	0x00000744, /* Controller 0, led 29, offset 1860 */
	0x0001074c, /* Controller 1, led 29, offset 1868 */
	0x00020754, /* Controller 2, led 29, offset 1876 */
	0x0003075c, /* Controller 3, led 29, offset 1884 */
	0x00040764, /* Controller 4, led 29, offset 1892 */
	0x0005076c, /* Controller 5, led 29, offset 1900 */
	0x00060774, /* Controller 6, led 29, offset 1908 */
	0x0007077c, /* Controller 7, led 29, offset 1916 */
	0x00000784, /* Controller 0, led 30, offset 1924 */
	0x0001078c, /* Controller 1, led 30, offset 1932 */
	0x00020794, /* Controller 2, led 30, offset 1940 */
	0x0003079c, /* Controller 3, led 30, offset 1948 */
	0x000407a4, /* Controller 4, led 30, offset 1956 */
	0x000507ac, /* Controller 5, led 30, offset 1964 */
	0x000607b4, /* Controller 6, led 30, offset 1972 */
	0x000707bc, /* Controller 7, led 30, offset 1980 */
	0x000007c4, /* Controller 0, led 31, offset 1988 */
	0x000107cc, /* Controller 1, led 31, offset 1996 */
	0x000207d4, /* Controller 2, led 31, offset 2004 */
	0x000307dc, /* Controller 3, led 31, offset 2012 */
	0x000407e4, /* Controller 4, led 31, offset 2020 */
	0x000507ec, /* Controller 5, led 31, offset 2028 */
	0x000607f4, /* Controller 6, led 31, offset 2036 */
	0x000707fc, /* Controller 7, led 31, offset 2044 */
	0x00000804, /* Controller 0, led 32, offset 2052 */
	0x0001080c, /* Controller 1, led 32, offset 2060 */
	0x00020814, /* Controller 2, led 32, offset 2068 */
	0x0003081c, /* Controller 3, led 32, offset 2076 */
	0x00040824, /* Controller 4, led 32, offset 2084 */
	0x0005082c, /* Controller 5, led 32, offset 2092 */
	0x00060834, /* Controller 6, led 32, offset 2100 */
	0x0007083c, /* Controller 7, led 32, offset 2108 */
	0x00000844, /* Controller 0, led 33, offset 2116 */
	0x0001084c, /* Controller 1, led 33, offset 2124 */
	0x00020854, /* Controller 2, led 33, offset 2132 */
	0x0003085c, /* Controller 3, led 33, offset 2140 */
	0x00040864, /* Controller 4, led 33, offset 2148 */
	0x0005086c, /* Controller 5, led 33, offset 2156 */
	0x00060874, /* Controller 6, led 33, offset 2164 */
	0x0007087c, /* Controller 7, led 33, offset 2172 */
	0x00000884, /* Controller 0, led 34, offset 2180 */
	0x0001088c, /* Controller 1, led 34, offset 2188 */
	0x00020894, /* Controller 2, led 34, offset 2196 */
	0x0003089c, /* Controller 3, led 34, offset 2204 */
	0x000408a4, /* Controller 4, led 34, offset 2212 */
	0x000508ac, /* Controller 5, led 34, offset 2220 */
	0x000608b4, /* Controller 6, led 34, offset 2228 */
	0x000708bc, /* Controller 7, led 34, offset 2236 */
	0x000008c4, /* Controller 0, led 35, offset 2244 */
	0x000108cc, /* Controller 1, led 35, offset 2252 */
	0x000208d4, /* Controller 2, led 35, offset 2260 */
	0x000308dc, /* Controller 3, led 35, offset 2268 */
	0x000408e4, /* Controller 4, led 35, offset 2276 */
	0x000508ec, /* Controller 5, led 35, offset 2284 */
	0x000608f4, /* Controller 6, led 35, offset 2292 */
	0x000708fc, /* Controller 7, led 35, offset 2300 */
	0x00000904, /* Controller 0, led 36, offset 2308 */
	0x0001090c, /* Controller 1, led 36, offset 2316 */
	0x00020914, /* Controller 2, led 36, offset 2324 */
	0x0003091c, /* Controller 3, led 36, offset 2332 */
	0x00040924, /* Controller 4, led 36, offset 2340 */
	0x0005092c, /* Controller 5, led 36, offset 2348 */
	0x00060934, /* Controller 6, led 36, offset 2356 */
	0x0007093c, /* Controller 7, led 36, offset 2364 */
	0x00000944, /* Controller 0, led 37, offset 2372 */
	0x0001094c, /* Controller 1, led 37, offset 2380 */
	0x00020954, /* Controller 2, led 37, offset 2388 */
	0x0003095c, /* Controller 3, led 37, offset 2396 */
	0x00040964, /* Controller 4, led 37, offset 2404 */
	0x0005096c, /* Controller 5, led 37, offset 2412 */
	0x00060974, /* Controller 6, led 37, offset 2420 */
	0x0007097c, /* Controller 7, led 37, offset 2428 */
	0x00000984, /* Controller 0, led 38, offset 2436 */
	0x0001098c, /* Controller 1, led 38, offset 2444 */
	0x00020994, /* Controller 2, led 38, offset 2452 */
	0x0003099c, /* Controller 3, led 38, offset 2460 */
	0x000409a4, /* Controller 4, led 38, offset 2468 */
	0x000509ac, /* Controller 5, led 38, offset 2476 */
	0x000609b4, /* Controller 6, led 38, offset 2484 */
	0x000709bc, /* Controller 7, led 38, offset 2492 */
	0x000009c4, /* Controller 0, led 39, offset 2500 */
	0x000109cc, /* Controller 1, led 39, offset 2508 */
	0x000209d4, /* Controller 2, led 39, offset 2516 */
	0x000309dc, /* Controller 3, led 39, offset 2524 */
	0x000409e4, /* Controller 4, led 39, offset 2532 */
	0x000509ec, /* Controller 5, led 39, offset 2540 */
	0x000609f4, /* Controller 6, led 39, offset 2548 */
	0x000709fc, /* Controller 7, led 39, offset 2556 */
	0x00000a04, /* Controller 0, led 40, offset 2564 */
	0x00010a0c, /* Controller 1, led 40, offset 2572 */
	0x00020a14, /* Controller 2, led 40, offset 2580 */
	0x00030a1c, /* Controller 3, led 40, offset 2588 */
	0x00040a24, /* Controller 4, led 40, offset 2596 */
	0x00050a2c, /* Controller 5, led 40, offset 2604 */
	0x00060a34, /* Controller 6, led 40, offset 2612 */
	0x00070a3c, /* Controller 7, led 40, offset 2620 */
	0x00000a44, /* Controller 0, led 41, offset 2628 */
	0x00010a4c, /* Controller 1, led 41, offset 2636 */
	0x00020a54, /* Controller 2, led 41, offset 2644 */
	0x00030a5c, /* Controller 3, led 41, offset 2652 */
	0x00040a64, /* Controller 4, led 41, offset 2660 */
	0x00050a6c, /* Controller 5, led 41, offset 2668 */
	0x00060a74, /* Controller 6, led 41, offset 2676 */
	0x00070a7c, /* Controller 7, led 41, offset 2684 */
	0x00000a84, /* Controller 0, led 42, offset 2692 */
	0x00010a8c, /* Controller 1, led 42, offset 2700 */
	0x00020a94, /* Controller 2, led 42, offset 2708 */
	0x00030a9c, /* Controller 3, led 42, offset 2716 */
	0x00040aa4, /* Controller 4, led 42, offset 2724 */
	0x00050aac, /* Controller 5, led 42, offset 2732 */
	0x00060ab4, /* Controller 6, led 42, offset 2740 */
	0x00070abc, /* Controller 7, led 42, offset 2748 */
	0x00000ac4, /* Controller 0, led 43, offset 2756 */
	0x00010acc, /* Controller 1, led 43, offset 2764 */
	0x00020ad4, /* Controller 2, led 43, offset 2772 */
	0x00030adc, /* Controller 3, led 43, offset 2780 */
	0x00040ae4, /* Controller 4, led 43, offset 2788 */
	0x00050aec, /* Controller 5, led 43, offset 2796 */
	0x00060af4, /* Controller 6, led 43, offset 2804 */
	0x00070afc, /* Controller 7, led 43, offset 2812 */
	0x00000b04, /* Controller 0, led 44, offset 2820 */
	0x00010b0c, /* Controller 1, led 44, offset 2828 */
	0x00020b14, /* Controller 2, led 44, offset 2836 */
	0x00030b1c, /* Controller 3, led 44, offset 2844 */
	0x00040b24, /* Controller 4, led 44, offset 2852 */
	0x00050b2c, /* Controller 5, led 44, offset 2860 */
	0x00060b34, /* Controller 6, led 44, offset 2868 */
	0x00070b3c, /* Controller 7, led 44, offset 2876 */
	0x00000b44, /* Controller 0, led 45, offset 2884 */
	0x00010b4c, /* Controller 1, led 45, offset 2892 */
	0x00020b54, /* Controller 2, led 45, offset 2900 */
	0x00030b5c, /* Controller 3, led 45, offset 2908 */
	0x00040b64, /* Controller 4, led 45, offset 2916 */
	0x00050b6c, /* Controller 5, led 45, offset 2924 */
	0x00060b74, /* Controller 6, led 45, offset 2932 */
	0x00070b7c, /* Controller 7, led 45, offset 2940 */
	0x00000b84, /* Controller 0, led 46, offset 2948 */
	0x00010b8c, /* Controller 1, led 46, offset 2956 */
	0x00020b94, /* Controller 2, led 46, offset 2964 */
	0x00030b9c, /* Controller 3, led 46, offset 2972 */
	0x00040ba4, /* Controller 4, led 46, offset 2980 */
	0x00050bac, /* Controller 5, led 46, offset 2988 */
	0x00060bb4, /* Controller 6, led 46, offset 2996 */
	0x00070bbc, /* Controller 7, led 46, offset 3004 */
	0x00000bc4, /* Controller 0, led 47, offset 3012 */
	0x00010bcc, /* Controller 1, led 47, offset 3020 */
	0x00020bd4, /* Controller 2, led 47, offset 3028 */
	0x00030bdc, /* Controller 3, led 47, offset 3036 */
	0x00040be4, /* Controller 4, led 47, offset 3044 */
	0x00050bec, /* Controller 5, led 47, offset 3052 */
	0x00060bf4, /* Controller 6, led 47, offset 3060 */
	0x00070bfc, /* Controller 7, led 47, offset 3068 */
	0x00000c04, /* Controller 0, led 48, offset 3076 */
	0x00010c0c, /* Controller 1, led 48, offset 3084 */
	0x00020c14, /* Controller 2, led 48, offset 3092 */
	0x00030c1c, /* Controller 3, led 48, offset 3100 */
	0x00040c24, /* Controller 4, led 48, offset 3108 */
	0x00050c2c, /* Controller 5, led 48, offset 3116 */
	0x00060c34, /* Controller 6, led 48, offset 3124 */
	0x00070c3c, /* Controller 7, led 48, offset 3132 */
	0x00000c44, /* Controller 0, led 49, offset 3140 */
	0x00010c4c, /* Controller 1, led 49, offset 3148 */
	0x00020c54, /* Controller 2, led 49, offset 3156 */
	0x00030c5c, /* Controller 3, led 49, offset 3164 */
	0x00040c64, /* Controller 4, led 49, offset 3172 */
	0x00050c6c, /* Controller 5, led 49, offset 3180 */
	0x00060c74, /* Controller 6, led 49, offset 3188 */
	0x00070c7c, /* Controller 7, led 49, offset 3196 */
	0x00000c84, /* Controller 0, led 50, offset 3204 */
	0x00010c8c, /* Controller 1, led 50, offset 3212 */
	0x00020c94, /* Controller 2, led 50, offset 3220 */
	0x00030c9c, /* Controller 3, led 50, offset 3228 */
	0x00040ca4, /* Controller 4, led 50, offset 3236 */
	0x00050cac, /* Controller 5, led 50, offset 3244 */
	0x00060cb4, /* Controller 6, led 50, offset 3252 */
	0x00070cbc, /* Controller 7, led 50, offset 3260 */
	0x00000cc4, /* Controller 0, led 51, offset 3268 */
	0x00010ccc, /* Controller 1, led 51, offset 3276 */
	0x00020cd4, /* Controller 2, led 51, offset 3284 */
	0x00030cdc, /* Controller 3, led 51, offset 3292 */
	0x00040ce4, /* Controller 4, led 51, offset 3300 */
	0x00050cec, /* Controller 5, led 51, offset 3308 */
	0x00060cf4, /* Controller 6, led 51, offset 3316 */
	0x00070cfc, /* Controller 7, led 51, offset 3324 */
	0x00000d04, /* Controller 0, led 52, offset 3332 */
	0x00010d0c, /* Controller 1, led 52, offset 3340 */
	0x00020d14, /* Controller 2, led 52, offset 3348 */
	0x00030d1c, /* Controller 3, led 52, offset 3356 */
	0x00040d24, /* Controller 4, led 52, offset 3364 */
	0x00050d2c, /* Controller 5, led 52, offset 3372 */
	0x00060d34, /* Controller 6, led 52, offset 3380 */
	0x00070d3c, /* Controller 7, led 52, offset 3388 */
	0x00000d44, /* Controller 0, led 53, offset 3396 */
	0x00010d4c, /* Controller 1, led 53, offset 3404 */
	0x00020d54, /* Controller 2, led 53, offset 3412 */
	0x00030d5c, /* Controller 3, led 53, offset 3420 */
	0x00040d64, /* Controller 4, led 53, offset 3428 */
	0x00050d6c, /* Controller 5, led 53, offset 3436 */
	0x00060d74, /* Controller 6, led 53, offset 3444 */
	0x00070d7c, /* Controller 7, led 53, offset 3452 */
	0x00000d84, /* Controller 0, led 54, offset 3460 */
	0x00010d8c, /* Controller 1, led 54, offset 3468 */
	0x00020d94, /* Controller 2, led 54, offset 3476 */
	0x00030d9c, /* Controller 3, led 54, offset 3484 */
	0x00040da4, /* Controller 4, led 54, offset 3492 */
	0x00050dac, /* Controller 5, led 54, offset 3500 */
	0x00060db4, /* Controller 6, led 54, offset 3508 */
	0x00070dbc, /* Controller 7, led 54, offset 3516 */
	0x00000dc4, /* Controller 0, led 55, offset 3524 */
	0x00010dcc, /* Controller 1, led 55, offset 3532 */
	0x00020dd4, /* Controller 2, led 55, offset 3540 */
	0x00030ddc, /* Controller 3, led 55, offset 3548 */
	0x00040de4, /* Controller 4, led 55, offset 3556 */
	0x00050dec, /* Controller 5, led 55, offset 3564 */
	0x00060df4, /* Controller 6, led 55, offset 3572 */
	0x00070dfc, /* Controller 7, led 55, offset 3580 */
	0x00000e04, /* Controller 0, led 56, offset 3588 */
	0x00010e0c, /* Controller 1, led 56, offset 3596 */
	0x00020e14, /* Controller 2, led 56, offset 3604 */
	0x00030e1c, /* Controller 3, led 56, offset 3612 */
	0x00040e24, /* Controller 4, led 56, offset 3620 */
	0x00050e2c, /* Controller 5, led 56, offset 3628 */
	0x00060e34, /* Controller 6, led 56, offset 3636 */
	0x00070e3c, /* Controller 7, led 56, offset 3644 */
	0x00000e44, /* Controller 0, led 57, offset 3652 */
	0x00010e4c, /* Controller 1, led 57, offset 3660 */
	0x00020e54, /* Controller 2, led 57, offset 3668 */
	0x00030e5c, /* Controller 3, led 57, offset 3676 */
	0x00040e64, /* Controller 4, led 57, offset 3684 */
	0x00050e6c, /* Controller 5, led 57, offset 3692 */
	0x00060e74, /* Controller 6, led 57, offset 3700 */
	0x00070e7c, /* Controller 7, led 57, offset 3708 */
	0x00000e84, /* Controller 0, led 58, offset 3716 */
	0x00010e8c, /* Controller 1, led 58, offset 3724 */
	0x00020e94, /* Controller 2, led 58, offset 3732 */
	0x00030e9c, /* Controller 3, led 58, offset 3740 */
	0x00040ea4, /* Controller 4, led 58, offset 3748 */
	0x00050eac, /* Controller 5, led 58, offset 3756 */
	0x00060eb4, /* Controller 6, led 58, offset 3764 */
	0x00070ebc, /* Controller 7, led 58, offset 3772 */
	0x00000ec4, /* Controller 0, led 59, offset 3780 */
	0x00010ecc, /* Controller 1, led 59, offset 3788 */
	0x00020ed4, /* Controller 2, led 59, offset 3796 */
	0x00030edc, /* Controller 3, led 59, offset 3804 */
	0x00040ee4, /* Controller 4, led 59, offset 3812 */
	0x00050eec, /* Controller 5, led 59, offset 3820 */
	0x00060ef4, /* Controller 6, led 59, offset 3828 */
	0x00070efc, /* Controller 7, led 59, offset 3836 */
	0x00000f04, /* Controller 0, led 60, offset 3844 */
	0x00010f0c, /* Controller 1, led 60, offset 3852 */
	0x00020f14, /* Controller 2, led 60, offset 3860 */
	0x00030f1c, /* Controller 3, led 60, offset 3868 */
	0x00040f24, /* Controller 4, led 60, offset 3876 */
	0x00050f2c, /* Controller 5, led 60, offset 3884 */
	0x00060f34, /* Controller 6, led 60, offset 3892 */
	0x00070f3c, /* Controller 7, led 60, offset 3900 */
	0x00000f44, /* Controller 0, led 61, offset 3908 */
	0x00010f4c, /* Controller 1, led 61, offset 3916 */
	0x00020f54, /* Controller 2, led 61, offset 3924 */
	0x00030f5c, /* Controller 3, led 61, offset 3932 */
	0x00040f64, /* Controller 4, led 61, offset 3940 */
	0x00050f6c, /* Controller 5, led 61, offset 3948 */
	0x00060f74, /* Controller 6, led 61, offset 3956 */
	0x00070f7c, /* Controller 7, led 61, offset 3964 */
	0x00000f84, /* Controller 0, led 62, offset 3972 */
	0x00010f8c, /* Controller 1, led 62, offset 3980 */
	0x00020f94, /* Controller 2, led 62, offset 3988 */
	0x00030f9c, /* Controller 3, led 62, offset 3996 */
	0x00040fa4, /* Controller 4, led 62, offset 4004 */
	0x00050fac, /* Controller 5, led 62, offset 4012 */
	0x00060fb4, /* Controller 6, led 62, offset 4020 */
	0x00070fbc, /* Controller 7, led 62, offset 4028 */
	0x00000fc4, /* Controller 0, led 63, offset 4036 */
	0x00010fcc, /* Controller 1, led 63, offset 4044 */
	0x00020fd4, /* Controller 2, led 63, offset 4052 */
	0x00030fdc, /* Controller 3, led 63, offset 4060 */
	0x00040fe4, /* Controller 4, led 63, offset 4068 */
	0x00050fec, /* Controller 5, led 63, offset 4076 */
	0x00060ff4, /* Controller 6, led 63, offset 4084 */
	0x00070ffc, /* Controller 7, led 63, offset 4092 */
	0x00001004, /* Controller 0, led 64, offset 4100 */
	0x0001100c, /* Controller 1, led 64, offset 4108 */
	0x00021014, /* Controller 2, led 64, offset 4116 */
	0x0003101c, /* Controller 3, led 64, offset 4124 */
	0x00041024, /* Controller 4, led 64, offset 4132 */
	0x0005102c, /* Controller 5, led 64, offset 4140 */
	0x00061034, /* Controller 6, led 64, offset 4148 */
	0x0007103c, /* Controller 7, led 64, offset 4156 */
	0x00001044, /* Controller 0, led 65, offset 4164 */
	0x0001104c, /* Controller 1, led 65, offset 4172 */
	0x00021054, /* Controller 2, led 65, offset 4180 */
	0x0003105c, /* Controller 3, led 65, offset 4188 */
	0x00041064, /* Controller 4, led 65, offset 4196 */
	0x0005106c, /* Controller 5, led 65, offset 4204 */
	0x00061074, /* Controller 6, led 65, offset 4212 */
	0x0007107c, /* Controller 7, led 65, offset 4220 */
	0x00001048, /* Controller 0, led 66, offset 4168 */
	0x00011050, /* Controller 1, led 66, offset 4176 */
	0x00021058, /* Controller 2, led 66, offset 4184 */
	0x00031060, /* Controller 3, led 66, offset 4192 */
	0x00041068, /* Controller 4, led 66, offset 4200 */
	0x00051070, /* Controller 5, led 66, offset 4208 */
	0x00061078, /* Controller 6, led 66, offset 4216 */
	0x00071080, /* Controller 7, led 66, offset 4224 */
	0x00001008, /* Controller 0, led 67, offset 4104 */
	0x00011010, /* Controller 1, led 67, offset 4112 */
	0x00021018, /* Controller 2, led 67, offset 4120 */
	0x00031020, /* Controller 3, led 67, offset 4128 */
	0x00041028, /* Controller 4, led 67, offset 4136 */
	0x00051030, /* Controller 5, led 67, offset 4144 */
	0x00061038, /* Controller 6, led 67, offset 4152 */
	0x00071040, /* Controller 7, led 67, offset 4160 */
	0x00000fc8, /* Controller 0, led 68, offset 4040 */
	0x00010fd0, /* Controller 1, led 68, offset 4048 */
	0x00020fd8, /* Controller 2, led 68, offset 4056 */
	0x00030fe0, /* Controller 3, led 68, offset 4064 */
	0x00040fe8, /* Controller 4, led 68, offset 4072 */
	0x00050ff0, /* Controller 5, led 68, offset 4080 */
	0x00060ff8, /* Controller 6, led 68, offset 4088 */
	0x00071000, /* Controller 7, led 68, offset 4096 */
	0x00000f88, /* Controller 0, led 69, offset 3976 */
	0x00010f90, /* Controller 1, led 69, offset 3984 */
	0x00020f98, /* Controller 2, led 69, offset 3992 */
	0x00030fa0, /* Controller 3, led 69, offset 4000 */
	0x00040fa8, /* Controller 4, led 69, offset 4008 */
	0x00050fb0, /* Controller 5, led 69, offset 4016 */
	0x00060fb8, /* Controller 6, led 69, offset 4024 */
	0x00070fc0, /* Controller 7, led 69, offset 4032 */
	0x00000f48, /* Controller 0, led 70, offset 3912 */
	0x00010f50, /* Controller 1, led 70, offset 3920 */
	0x00020f58, /* Controller 2, led 70, offset 3928 */
	0x00030f60, /* Controller 3, led 70, offset 3936 */
	0x00040f68, /* Controller 4, led 70, offset 3944 */
	0x00050f70, /* Controller 5, led 70, offset 3952 */
	0x00060f78, /* Controller 6, led 70, offset 3960 */
	0x00070f80, /* Controller 7, led 70, offset 3968 */
	0x00000f08, /* Controller 0, led 71, offset 3848 */
	0x00010f10, /* Controller 1, led 71, offset 3856 */
	0x00020f18, /* Controller 2, led 71, offset 3864 */
	0x00030f20, /* Controller 3, led 71, offset 3872 */
	0x00040f28, /* Controller 4, led 71, offset 3880 */
	0x00050f30, /* Controller 5, led 71, offset 3888 */
	0x00060f38, /* Controller 6, led 71, offset 3896 */
	0x00070f40, /* Controller 7, led 71, offset 3904 */
	0x00000ec8, /* Controller 0, led 72, offset 3784 */
	0x00010ed0, /* Controller 1, led 72, offset 3792 */
	0x00020ed8, /* Controller 2, led 72, offset 3800 */
	0x00030ee0, /* Controller 3, led 72, offset 3808 */
	0x00040ee8, /* Controller 4, led 72, offset 3816 */
	0x00050ef0, /* Controller 5, led 72, offset 3824 */
	0x00060ef8, /* Controller 6, led 72, offset 3832 */
	0x00070f00, /* Controller 7, led 72, offset 3840 */
	0x00000e88, /* Controller 0, led 73, offset 3720 */
	0x00010e90, /* Controller 1, led 73, offset 3728 */
	0x00020e98, /* Controller 2, led 73, offset 3736 */
	0x00030ea0, /* Controller 3, led 73, offset 3744 */
	0x00040ea8, /* Controller 4, led 73, offset 3752 */
	0x00050eb0, /* Controller 5, led 73, offset 3760 */
	0x00060eb8, /* Controller 6, led 73, offset 3768 */
	0x00070ec0, /* Controller 7, led 73, offset 3776 */
	0x00000e48, /* Controller 0, led 74, offset 3656 */
	0x00010e50, /* Controller 1, led 74, offset 3664 */
	0x00020e58, /* Controller 2, led 74, offset 3672 */
	0x00030e60, /* Controller 3, led 74, offset 3680 */
	0x00040e68, /* Controller 4, led 74, offset 3688 */
	0x00050e70, /* Controller 5, led 74, offset 3696 */
	0x00060e78, /* Controller 6, led 74, offset 3704 */
	0x00070e80, /* Controller 7, led 74, offset 3712 */
	0x00000e08, /* Controller 0, led 75, offset 3592 */
	0x00010e10, /* Controller 1, led 75, offset 3600 */
	0x00020e18, /* Controller 2, led 75, offset 3608 */
	0x00030e20, /* Controller 3, led 75, offset 3616 */
	0x00040e28, /* Controller 4, led 75, offset 3624 */
	0x00050e30, /* Controller 5, led 75, offset 3632 */
	0x00060e38, /* Controller 6, led 75, offset 3640 */
	0x00070e40, /* Controller 7, led 75, offset 3648 */
	0x00000dc8, /* Controller 0, led 76, offset 3528 */
	0x00010dd0, /* Controller 1, led 76, offset 3536 */
	0x00020dd8, /* Controller 2, led 76, offset 3544 */
	0x00030de0, /* Controller 3, led 76, offset 3552 */
	0x00040de8, /* Controller 4, led 76, offset 3560 */
	0x00050df0, /* Controller 5, led 76, offset 3568 */
	0x00060df8, /* Controller 6, led 76, offset 3576 */
	0x00070e00, /* Controller 7, led 76, offset 3584 */
	0x00000d88, /* Controller 0, led 77, offset 3464 */
	0x00010d90, /* Controller 1, led 77, offset 3472 */
	0x00020d98, /* Controller 2, led 77, offset 3480 */
	0x00030da0, /* Controller 3, led 77, offset 3488 */
	0x00040da8, /* Controller 4, led 77, offset 3496 */
	0x00050db0, /* Controller 5, led 77, offset 3504 */
	0x00060db8, /* Controller 6, led 77, offset 3512 */
	0x00070dc0, /* Controller 7, led 77, offset 3520 */
	0x00000d48, /* Controller 0, led 78, offset 3400 */
	0x00010d50, /* Controller 1, led 78, offset 3408 */
	0x00020d58, /* Controller 2, led 78, offset 3416 */
	0x00030d60, /* Controller 3, led 78, offset 3424 */
	0x00040d68, /* Controller 4, led 78, offset 3432 */
	0x00050d70, /* Controller 5, led 78, offset 3440 */
	0x00060d78, /* Controller 6, led 78, offset 3448 */
	0x00070d80, /* Controller 7, led 78, offset 3456 */
	0x00000d08, /* Controller 0, led 79, offset 3336 */
	0x00010d10, /* Controller 1, led 79, offset 3344 */
	0x00020d18, /* Controller 2, led 79, offset 3352 */
	0x00030d20, /* Controller 3, led 79, offset 3360 */
	0x00040d28, /* Controller 4, led 79, offset 3368 */
	0x00050d30, /* Controller 5, led 79, offset 3376 */
	0x00060d38, /* Controller 6, led 79, offset 3384 */
	0x00070d40, /* Controller 7, led 79, offset 3392 */
	0x00000cc8, /* Controller 0, led 80, offset 3272 */
	0x00010cd0, /* Controller 1, led 80, offset 3280 */
	0x00020cd8, /* Controller 2, led 80, offset 3288 */
	0x00030ce0, /* Controller 3, led 80, offset 3296 */
	0x00040ce8, /* Controller 4, led 80, offset 3304 */
	0x00050cf0, /* Controller 5, led 80, offset 3312 */
	0x00060cf8, /* Controller 6, led 80, offset 3320 */
	0x00070d00, /* Controller 7, led 80, offset 3328 */
	0x00000c88, /* Controller 0, led 81, offset 3208 */
	0x00010c90, /* Controller 1, led 81, offset 3216 */
	0x00020c98, /* Controller 2, led 81, offset 3224 */
	0x00030ca0, /* Controller 3, led 81, offset 3232 */
	0x00040ca8, /* Controller 4, led 81, offset 3240 */
	0x00050cb0, /* Controller 5, led 81, offset 3248 */
	0x00060cb8, /* Controller 6, led 81, offset 3256 */
	0x00070cc0, /* Controller 7, led 81, offset 3264 */
	0x00000c48, /* Controller 0, led 82, offset 3144 */
	0x00010c50, /* Controller 1, led 82, offset 3152 */
	0x00020c58, /* Controller 2, led 82, offset 3160 */
	0x00030c60, /* Controller 3, led 82, offset 3168 */
	0x00040c68, /* Controller 4, led 82, offset 3176 */
	0x00050c70, /* Controller 5, led 82, offset 3184 */
	0x00060c78, /* Controller 6, led 82, offset 3192 */
	0x00070c80, /* Controller 7, led 82, offset 3200 */
	0x00000c08, /* Controller 0, led 83, offset 3080 */
	0x00010c10, /* Controller 1, led 83, offset 3088 */
	0x00020c18, /* Controller 2, led 83, offset 3096 */
	0x00030c20, /* Controller 3, led 83, offset 3104 */
	0x00040c28, /* Controller 4, led 83, offset 3112 */
	0x00050c30, /* Controller 5, led 83, offset 3120 */
	0x00060c38, /* Controller 6, led 83, offset 3128 */
	0x00070c40, /* Controller 7, led 83, offset 3136 */
	0x00000bc8, /* Controller 0, led 84, offset 3016 */
	0x00010bd0, /* Controller 1, led 84, offset 3024 */
	0x00020bd8, /* Controller 2, led 84, offset 3032 */
	0x00030be0, /* Controller 3, led 84, offset 3040 */
	0x00040be8, /* Controller 4, led 84, offset 3048 */
	0x00050bf0, /* Controller 5, led 84, offset 3056 */
	0x00060bf8, /* Controller 6, led 84, offset 3064 */
	0x00070c00, /* Controller 7, led 84, offset 3072 */
	0x00000b88, /* Controller 0, led 85, offset 2952 */
	0x00010b90, /* Controller 1, led 85, offset 2960 */
	0x00020b98, /* Controller 2, led 85, offset 2968 */
	0x00030ba0, /* Controller 3, led 85, offset 2976 */
	0x00040ba8, /* Controller 4, led 85, offset 2984 */
	0x00050bb0, /* Controller 5, led 85, offset 2992 */
	0x00060bb8, /* Controller 6, led 85, offset 3000 */
	0x00070bc0, /* Controller 7, led 85, offset 3008 */
	0x00000b48, /* Controller 0, led 86, offset 2888 */
	0x00010b50, /* Controller 1, led 86, offset 2896 */
	0x00020b58, /* Controller 2, led 86, offset 2904 */
	0x00030b60, /* Controller 3, led 86, offset 2912 */
	0x00040b68, /* Controller 4, led 86, offset 2920 */
	0x00050b70, /* Controller 5, led 86, offset 2928 */
	0x00060b78, /* Controller 6, led 86, offset 2936 */
	0x00070b80, /* Controller 7, led 86, offset 2944 */
	0x00000b08, /* Controller 0, led 87, offset 2824 */
	0x00010b10, /* Controller 1, led 87, offset 2832 */
	0x00020b18, /* Controller 2, led 87, offset 2840 */
	0x00030b20, /* Controller 3, led 87, offset 2848 */
	0x00040b28, /* Controller 4, led 87, offset 2856 */
	0x00050b30, /* Controller 5, led 87, offset 2864 */
	0x00060b38, /* Controller 6, led 87, offset 2872 */
	0x00070b40, /* Controller 7, led 87, offset 2880 */
	0x00000ac8, /* Controller 0, led 88, offset 2760 */
	0x00010ad0, /* Controller 1, led 88, offset 2768 */
	0x00020ad8, /* Controller 2, led 88, offset 2776 */
	0x00030ae0, /* Controller 3, led 88, offset 2784 */
	0x00040ae8, /* Controller 4, led 88, offset 2792 */
	0x00050af0, /* Controller 5, led 88, offset 2800 */
	0x00060af8, /* Controller 6, led 88, offset 2808 */
	0x00070b00, /* Controller 7, led 88, offset 2816 */
	0x00000a88, /* Controller 0, led 89, offset 2696 */
	0x00010a90, /* Controller 1, led 89, offset 2704 */
	0x00020a98, /* Controller 2, led 89, offset 2712 */
	0x00030aa0, /* Controller 3, led 89, offset 2720 */
	0x00040aa8, /* Controller 4, led 89, offset 2728 */
	0x00050ab0, /* Controller 5, led 89, offset 2736 */
	0x00060ab8, /* Controller 6, led 89, offset 2744 */
	0x00070ac0, /* Controller 7, led 89, offset 2752 */
	0x00000a48, /* Controller 0, led 90, offset 2632 */
	0x00010a50, /* Controller 1, led 90, offset 2640 */
	0x00020a58, /* Controller 2, led 90, offset 2648 */
	0x00030a60, /* Controller 3, led 90, offset 2656 */
	0x00040a68, /* Controller 4, led 90, offset 2664 */
	0x00050a70, /* Controller 5, led 90, offset 2672 */
	0x00060a78, /* Controller 6, led 90, offset 2680 */
	0x00070a80, /* Controller 7, led 90, offset 2688 */
	0x00000a08, /* Controller 0, led 91, offset 2568 */
	0x00010a10, /* Controller 1, led 91, offset 2576 */
	0x00020a18, /* Controller 2, led 91, offset 2584 */
	0x00030a20, /* Controller 3, led 91, offset 2592 */
	0x00040a28, /* Controller 4, led 91, offset 2600 */
	0x00050a30, /* Controller 5, led 91, offset 2608 */
	0x00060a38, /* Controller 6, led 91, offset 2616 */
	0x00070a40, /* Controller 7, led 91, offset 2624 */
	0x000009c8, /* Controller 0, led 92, offset 2504 */
	0x000109d0, /* Controller 1, led 92, offset 2512 */
	0x000209d8, /* Controller 2, led 92, offset 2520 */
	0x000309e0, /* Controller 3, led 92, offset 2528 */
	0x000409e8, /* Controller 4, led 92, offset 2536 */
	0x000509f0, /* Controller 5, led 92, offset 2544 */
	0x000609f8, /* Controller 6, led 92, offset 2552 */
	0x00070a00, /* Controller 7, led 92, offset 2560 */
	0x00000988, /* Controller 0, led 93, offset 2440 */
	0x00010990, /* Controller 1, led 93, offset 2448 */
	0x00020998, /* Controller 2, led 93, offset 2456 */
	0x000309a0, /* Controller 3, led 93, offset 2464 */
	0x000409a8, /* Controller 4, led 93, offset 2472 */
	0x000509b0, /* Controller 5, led 93, offset 2480 */
	0x000609b8, /* Controller 6, led 93, offset 2488 */
	0x000709c0, /* Controller 7, led 93, offset 2496 */
	0x00000948, /* Controller 0, led 94, offset 2376 */
	0x00010950, /* Controller 1, led 94, offset 2384 */
	0x00020958, /* Controller 2, led 94, offset 2392 */
	0x00030960, /* Controller 3, led 94, offset 2400 */
	0x00040968, /* Controller 4, led 94, offset 2408 */
	0x00050970, /* Controller 5, led 94, offset 2416 */
	0x00060978, /* Controller 6, led 94, offset 2424 */
	0x00070980, /* Controller 7, led 94, offset 2432 */
	0x00000908, /* Controller 0, led 95, offset 2312 */
	0x00010910, /* Controller 1, led 95, offset 2320 */
	0x00020918, /* Controller 2, led 95, offset 2328 */
	0x00030920, /* Controller 3, led 95, offset 2336 */
	0x00040928, /* Controller 4, led 95, offset 2344 */
	0x00050930, /* Controller 5, led 95, offset 2352 */
	0x00060938, /* Controller 6, led 95, offset 2360 */
	0x00070940, /* Controller 7, led 95, offset 2368 */
	0x000008c8, /* Controller 0, led 96, offset 2248 */
	0x000108d0, /* Controller 1, led 96, offset 2256 */
	0x000208d8, /* Controller 2, led 96, offset 2264 */
	0x000308e0, /* Controller 3, led 96, offset 2272 */
	0x000408e8, /* Controller 4, led 96, offset 2280 */
	0x000508f0, /* Controller 5, led 96, offset 2288 */
	0x000608f8, /* Controller 6, led 96, offset 2296 */
	0x00070900, /* Controller 7, led 96, offset 2304 */
	0x00000888, /* Controller 0, led 97, offset 2184 */
	0x00010890, /* Controller 1, led 97, offset 2192 */
	0x00020898, /* Controller 2, led 97, offset 2200 */
	0x000308a0, /* Controller 3, led 97, offset 2208 */
	0x000408a8, /* Controller 4, led 97, offset 2216 */
	0x000508b0, /* Controller 5, led 97, offset 2224 */
	0x000608b8, /* Controller 6, led 97, offset 2232 */
	0x000708c0, /* Controller 7, led 97, offset 2240 */
	0x00000848, /* Controller 0, led 98, offset 2120 */
	0x00010850, /* Controller 1, led 98, offset 2128 */
	0x00020858, /* Controller 2, led 98, offset 2136 */
	0x00030860, /* Controller 3, led 98, offset 2144 */
	0x00040868, /* Controller 4, led 98, offset 2152 */
	0x00050870, /* Controller 5, led 98, offset 2160 */
	0x00060878, /* Controller 6, led 98, offset 2168 */
	0x00070880, /* Controller 7, led 98, offset 2176 */
	0x00000808, /* Controller 0, led 99, offset 2056 */
	0x00010810, /* Controller 1, led 99, offset 2064 */
	0x00020818, /* Controller 2, led 99, offset 2072 */
	0x00030820, /* Controller 3, led 99, offset 2080 */
	0x00040828, /* Controller 4, led 99, offset 2088 */
	0x00050830, /* Controller 5, led 99, offset 2096 */
	0x00060838, /* Controller 6, led 99, offset 2104 */
	0x00070840, /* Controller 7, led 99, offset 2112 */
	0x000007c8, /* Controller 0, led 100, offset 1992 */
	0x000107d0, /* Controller 1, led 100, offset 2000 */
	0x000207d8, /* Controller 2, led 100, offset 2008 */
	0x000307e0, /* Controller 3, led 100, offset 2016 */
	0x000407e8, /* Controller 4, led 100, offset 2024 */
	0x000507f0, /* Controller 5, led 100, offset 2032 */
	0x000607f8, /* Controller 6, led 100, offset 2040 */
	0x00070800, /* Controller 7, led 100, offset 2048 */
	0x00000788, /* Controller 0, led 101, offset 1928 */
	0x00010790, /* Controller 1, led 101, offset 1936 */
	0x00020798, /* Controller 2, led 101, offset 1944 */
	0x000307a0, /* Controller 3, led 101, offset 1952 */
	0x000407a8, /* Controller 4, led 101, offset 1960 */
	0x000507b0, /* Controller 5, led 101, offset 1968 */
	0x000607b8, /* Controller 6, led 101, offset 1976 */
	0x000707c0, /* Controller 7, led 101, offset 1984 */
	0x00000748, /* Controller 0, led 102, offset 1864 */
	0x00010750, /* Controller 1, led 102, offset 1872 */
	0x00020758, /* Controller 2, led 102, offset 1880 */
	0x00030760, /* Controller 3, led 102, offset 1888 */
	0x00040768, /* Controller 4, led 102, offset 1896 */
	0x00050770, /* Controller 5, led 102, offset 1904 */
	0x00060778, /* Controller 6, led 102, offset 1912 */
	0x00070780, /* Controller 7, led 102, offset 1920 */
	0x00000708, /* Controller 0, led 103, offset 1800 */
	0x00010710, /* Controller 1, led 103, offset 1808 */
	0x00020718, /* Controller 2, led 103, offset 1816 */
	0x00030720, /* Controller 3, led 103, offset 1824 */
	0x00040728, /* Controller 4, led 103, offset 1832 */
	0x00050730, /* Controller 5, led 103, offset 1840 */
	0x00060738, /* Controller 6, led 103, offset 1848 */
	0x00070740, /* Controller 7, led 103, offset 1856 */
	0x000006c8, /* Controller 0, led 104, offset 1736 */
	0x000106d0, /* Controller 1, led 104, offset 1744 */
	0x000206d8, /* Controller 2, led 104, offset 1752 */
	0x000306e0, /* Controller 3, led 104, offset 1760 */
	0x000406e8, /* Controller 4, led 104, offset 1768 */
	0x000506f0, /* Controller 5, led 104, offset 1776 */
	0x000606f8, /* Controller 6, led 104, offset 1784 */
	0x00070700, /* Controller 7, led 104, offset 1792 */
	0x00000688, /* Controller 0, led 105, offset 1672 */
	0x00010690, /* Controller 1, led 105, offset 1680 */
	0x00020698, /* Controller 2, led 105, offset 1688 */
	0x000306a0, /* Controller 3, led 105, offset 1696 */
	0x000406a8, /* Controller 4, led 105, offset 1704 */
	0x000506b0, /* Controller 5, led 105, offset 1712 */
	0x000606b8, /* Controller 6, led 105, offset 1720 */
	0x000706c0, /* Controller 7, led 105, offset 1728 */
	0x00000648, /* Controller 0, led 106, offset 1608 */
	0x00010650, /* Controller 1, led 106, offset 1616 */
	0x00020658, /* Controller 2, led 106, offset 1624 */
	0x00030660, /* Controller 3, led 106, offset 1632 */
	0x00040668, /* Controller 4, led 106, offset 1640 */
	0x00050670, /* Controller 5, led 106, offset 1648 */
	0x00060678, /* Controller 6, led 106, offset 1656 */
	0x00070680, /* Controller 7, led 106, offset 1664 */
	0x00000608, /* Controller 0, led 107, offset 1544 */
	0x00010610, /* Controller 1, led 107, offset 1552 */
	0x00020618, /* Controller 2, led 107, offset 1560 */
	0x00030620, /* Controller 3, led 107, offset 1568 */
	0x00040628, /* Controller 4, led 107, offset 1576 */
	0x00050630, /* Controller 5, led 107, offset 1584 */
	0x00060638, /* Controller 6, led 107, offset 1592 */
	0x00070640, /* Controller 7, led 107, offset 1600 */
	0x000005c8, /* Controller 0, led 108, offset 1480 */
	0x000105d0, /* Controller 1, led 108, offset 1488 */
	0x000205d8, /* Controller 2, led 108, offset 1496 */
	0x000305e0, /* Controller 3, led 108, offset 1504 */
	0x000405e8, /* Controller 4, led 108, offset 1512 */
	0x000505f0, /* Controller 5, led 108, offset 1520 */
	0x000605f8, /* Controller 6, led 108, offset 1528 */
	0x00070600, /* Controller 7, led 108, offset 1536 */
	0x00000588, /* Controller 0, led 109, offset 1416 */
	0x00010590, /* Controller 1, led 109, offset 1424 */
	0x00020598, /* Controller 2, led 109, offset 1432 */
	0x000305a0, /* Controller 3, led 109, offset 1440 */
	0x000405a8, /* Controller 4, led 109, offset 1448 */
	0x000505b0, /* Controller 5, led 109, offset 1456 */
	0x000605b8, /* Controller 6, led 109, offset 1464 */
	0x000705c0, /* Controller 7, led 109, offset 1472 */
	0x00000548, /* Controller 0, led 110, offset 1352 */
	0x00010550, /* Controller 1, led 110, offset 1360 */
	0x00020558, /* Controller 2, led 110, offset 1368 */
	0x00030560, /* Controller 3, led 110, offset 1376 */
	0x00040568, /* Controller 4, led 110, offset 1384 */
	0x00050570, /* Controller 5, led 110, offset 1392 */
	0x00060578, /* Controller 6, led 110, offset 1400 */
	0x00070580, /* Controller 7, led 110, offset 1408 */
	0x00000508, /* Controller 0, led 111, offset 1288 */
	0x00010510, /* Controller 1, led 111, offset 1296 */
	0x00020518, /* Controller 2, led 111, offset 1304 */
	0x00030520, /* Controller 3, led 111, offset 1312 */
	0x00040528, /* Controller 4, led 111, offset 1320 */
	0x00050530, /* Controller 5, led 111, offset 1328 */
	0x00060538, /* Controller 6, led 111, offset 1336 */
	0x00070540, /* Controller 7, led 111, offset 1344 */
	0x000004c8, /* Controller 0, led 112, offset 1224 */
	0x000104d0, /* Controller 1, led 112, offset 1232 */
	0x000204d8, /* Controller 2, led 112, offset 1240 */
	0x000304e0, /* Controller 3, led 112, offset 1248 */
	0x000404e8, /* Controller 4, led 112, offset 1256 */
	0x000504f0, /* Controller 5, led 112, offset 1264 */
	0x000604f8, /* Controller 6, led 112, offset 1272 */
	0x00070500, /* Controller 7, led 112, offset 1280 */
	0x00000488, /* Controller 0, led 113, offset 1160 */
	0x00010490, /* Controller 1, led 113, offset 1168 */
	0x00020498, /* Controller 2, led 113, offset 1176 */
	0x000304a0, /* Controller 3, led 113, offset 1184 */
	0x000404a8, /* Controller 4, led 113, offset 1192 */
	0x000504b0, /* Controller 5, led 113, offset 1200 */
	0x000604b8, /* Controller 6, led 113, offset 1208 */
	0x000704c0, /* Controller 7, led 113, offset 1216 */
	0x00000448, /* Controller 0, led 114, offset 1096 */
	0x00010450, /* Controller 1, led 114, offset 1104 */
	0x00020458, /* Controller 2, led 114, offset 1112 */
	0x00030460, /* Controller 3, led 114, offset 1120 */
	0x00040468, /* Controller 4, led 114, offset 1128 */
	0x00050470, /* Controller 5, led 114, offset 1136 */
	0x00060478, /* Controller 6, led 114, offset 1144 */
	0x00070480, /* Controller 7, led 114, offset 1152 */
	0x00000408, /* Controller 0, led 115, offset 1032 */
	0x00010410, /* Controller 1, led 115, offset 1040 */
	0x00020418, /* Controller 2, led 115, offset 1048 */
	0x00030420, /* Controller 3, led 115, offset 1056 */
	0x00040428, /* Controller 4, led 115, offset 1064 */
	0x00050430, /* Controller 5, led 115, offset 1072 */
	0x00060438, /* Controller 6, led 115, offset 1080 */
	0x00070440, /* Controller 7, led 115, offset 1088 */
	0x000003c8, /* Controller 0, led 116, offset 968 */
	0x000103d0, /* Controller 1, led 116, offset 976 */
	0x000203d8, /* Controller 2, led 116, offset 984 */
	0x000303e0, /* Controller 3, led 116, offset 992 */
	0x000403e8, /* Controller 4, led 116, offset 1000 */
	0x000503f0, /* Controller 5, led 116, offset 1008 */
	0x000603f8, /* Controller 6, led 116, offset 1016 */
	0x00070400, /* Controller 7, led 116, offset 1024 */
	0x00000388, /* Controller 0, led 117, offset 904 */
	0x00010390, /* Controller 1, led 117, offset 912 */
	0x00020398, /* Controller 2, led 117, offset 920 */
	0x000303a0, /* Controller 3, led 117, offset 928 */
	0x000403a8, /* Controller 4, led 117, offset 936 */
	0x000503b0, /* Controller 5, led 117, offset 944 */
	0x000603b8, /* Controller 6, led 117, offset 952 */
	0x000703c0, /* Controller 7, led 117, offset 960 */
	0x00000348, /* Controller 0, led 118, offset 840 */
	0x00010350, /* Controller 1, led 118, offset 848 */
	0x00020358, /* Controller 2, led 118, offset 856 */
	0x00030360, /* Controller 3, led 118, offset 864 */
	0x00040368, /* Controller 4, led 118, offset 872 */
	0x00050370, /* Controller 5, led 118, offset 880 */
	0x00060378, /* Controller 6, led 118, offset 888 */
	0x00070380, /* Controller 7, led 118, offset 896 */
	0x00000308, /* Controller 0, led 119, offset 776 */
	0x00010310, /* Controller 1, led 119, offset 784 */
	0x00020318, /* Controller 2, led 119, offset 792 */
	0x00030320, /* Controller 3, led 119, offset 800 */
	0x00040328, /* Controller 4, led 119, offset 808 */
	0x00050330, /* Controller 5, led 119, offset 816 */
	0x00060338, /* Controller 6, led 119, offset 824 */
	0x00070340, /* Controller 7, led 119, offset 832 */
	0x000002c8, /* Controller 0, led 120, offset 712 */
	0x000102d0, /* Controller 1, led 120, offset 720 */
	0x000202d8, /* Controller 2, led 120, offset 728 */
	0x000302e0, /* Controller 3, led 120, offset 736 */
	0x000402e8, /* Controller 4, led 120, offset 744 */
	0x000502f0, /* Controller 5, led 120, offset 752 */
	0x000602f8, /* Controller 6, led 120, offset 760 */
	0x00070300, /* Controller 7, led 120, offset 768 */
	0x00000288, /* Controller 0, led 121, offset 648 */
	0x00010290, /* Controller 1, led 121, offset 656 */
	0x00020298, /* Controller 2, led 121, offset 664 */
	0x000302a0, /* Controller 3, led 121, offset 672 */
	0x000402a8, /* Controller 4, led 121, offset 680 */
	0x000502b0, /* Controller 5, led 121, offset 688 */
	0x000602b8, /* Controller 6, led 121, offset 696 */
	0x000702c0, /* Controller 7, led 121, offset 704 */
	0x00000248, /* Controller 0, led 122, offset 584 */
	0x00010250, /* Controller 1, led 122, offset 592 */
	0x00020258, /* Controller 2, led 122, offset 600 */
	0x00030260, /* Controller 3, led 122, offset 608 */
	0x00040268, /* Controller 4, led 122, offset 616 */
	0x00050270, /* Controller 5, led 122, offset 624 */
	0x00060278, /* Controller 6, led 122, offset 632 */
	0x00070280, /* Controller 7, led 122, offset 640 */
	0x00000208, /* Controller 0, led 123, offset 520 */
	0x00010210, /* Controller 1, led 123, offset 528 */
	0x00020218, /* Controller 2, led 123, offset 536 */
	0x00030220, /* Controller 3, led 123, offset 544 */
	0x00040228, /* Controller 4, led 123, offset 552 */
	0x00050230, /* Controller 5, led 123, offset 560 */
	0x00060238, /* Controller 6, led 123, offset 568 */
	0x00070240, /* Controller 7, led 123, offset 576 */
	0x000001c8, /* Controller 0, led 124, offset 456 */
	0x000101d0, /* Controller 1, led 124, offset 464 */
	0x000201d8, /* Controller 2, led 124, offset 472 */
	0x000301e0, /* Controller 3, led 124, offset 480 */
	0x000401e8, /* Controller 4, led 124, offset 488 */
	0x000501f0, /* Controller 5, led 124, offset 496 */
	0x000601f8, /* Controller 6, led 124, offset 504 */
	0x00070200, /* Controller 7, led 124, offset 512 */
	0x00000188, /* Controller 0, led 125, offset 392 */
	0x00010190, /* Controller 1, led 125, offset 400 */
	0x00020198, /* Controller 2, led 125, offset 408 */
	0x000301a0, /* Controller 3, led 125, offset 416 */
	0x000401a8, /* Controller 4, led 125, offset 424 */
	0x000501b0, /* Controller 5, led 125, offset 432 */
	0x000601b8, /* Controller 6, led 125, offset 440 */
	0x000701c0, /* Controller 7, led 125, offset 448 */
	0x00000148, /* Controller 0, led 126, offset 328 */
	0x00010150, /* Controller 1, led 126, offset 336 */
	0x00020158, /* Controller 2, led 126, offset 344 */
	0x00030160, /* Controller 3, led 126, offset 352 */
	0x00040168, /* Controller 4, led 126, offset 360 */
	0x00050170, /* Controller 5, led 126, offset 368 */
	0x00060178, /* Controller 6, led 126, offset 376 */
	0x00070180, /* Controller 7, led 126, offset 384 */
	0x00000108, /* Controller 0, led 127, offset 264 */
	0x00010110, /* Controller 1, led 127, offset 272 */
	0x00020118, /* Controller 2, led 127, offset 280 */
	0x00030120, /* Controller 3, led 127, offset 288 */
	0x00040128, /* Controller 4, led 127, offset 296 */
	0x00050130, /* Controller 5, led 127, offset 304 */
	0x00060138, /* Controller 6, led 127, offset 312 */
	0x00070140, /* Controller 7, led 127, offset 320 */
	0x000000c8, /* Controller 0, led 128, offset 200 */
	0x000100d0, /* Controller 1, led 128, offset 208 */
	0x000200d8, /* Controller 2, led 128, offset 216 */
	0x000300e0, /* Controller 3, led 128, offset 224 */
	0x000400e8, /* Controller 4, led 128, offset 232 */
	0x000500f0, /* Controller 5, led 128, offset 240 */
	0x000600f8, /* Controller 6, led 128, offset 248 */
	0x00070100, /* Controller 7, led 128, offset 256 */
	0x00000088, /* Controller 0, led 129, offset 136 */
	0x00010090, /* Controller 1, led 129, offset 144 */
	0x00020098, /* Controller 2, led 129, offset 152 */
	0x000300a0, /* Controller 3, led 129, offset 160 */
	0x000400a8, /* Controller 4, led 129, offset 168 */
	0x000500b0, /* Controller 5, led 129, offset 176 */
	0x000600b8, /* Controller 6, led 129, offset 184 */
	0x000700c0, /* Controller 7, led 129, offset 192 */
	0x00000048, /* Controller 0, led 130, offset 72 */
	0x00010050, /* Controller 1, led 130, offset 80 */
	0x00020058, /* Controller 2, led 130, offset 88 */
	0x00030060, /* Controller 3, led 130, offset 96 */
	0x00040068, /* Controller 4, led 130, offset 104 */
	0x00050070, /* Controller 5, led 130, offset 112 */
	0x00060078, /* Controller 6, led 130, offset 120 */
	0x00070080, /* Controller 7, led 130, offset 128 */
	0x00000008, /* Controller 0, led 131, offset 8 */
	0x00010010, /* Controller 1, led 131, offset 16 */
	0x00020018, /* Controller 2, led 131, offset 24 */
	0x00030020, /* Controller 3, led 131, offset 32 */
	0x00040028, /* Controller 4, led 131, offset 40 */
	0x00050030, /* Controller 5, led 131, offset 48 */
	0x00060038, /* Controller 6, led 131, offset 56 */
	0x00070040, /* Controller 7, led 131, offset 64 */
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
	0x00000000,
	0x00000000,
	0x00000000,
	0x00010000,
	0x00010000,
	0x00010000,
	0x00020000,
	0x00020000,
	0x00020000,
	0x00030000,
	0x00030000,
	0x00030000,
	0x00040000,
	0x00040000,
	0x00040000,
	0x00050000,
	0x00050000,
	0x00050000,
	0x00060000,
	0x00060000,
	0x00060000,
	0x00070000,
	0x00070000,
	0x00070000
};
