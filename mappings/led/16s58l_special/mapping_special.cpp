unsigned int ledmapping[] = { 
	0x00000004, /* Controller 0, led 0, offset 4 */
	0x00010004, /* Controller 1, led 0, offset 4 */
	0x0002000c, /* Controller 2, led 0, offset 12 */
	0x00030014, /* Controller 3, led 0, offset 20 */
	0x0004001c, /* Controller 4, led 0, offset 28 */
	0x00050024, /* Controller 5, led 0, offset 36 */
	0x0006002c, /* Controller 6, led 0, offset 44 */
	0x00070004, /* Controller 7, led 0, offset 4 */
	0x00080034, /* Controller 8, led 0, offset 52 */
	0x0009003c, /* Controller 9, led 0, offset 60 */
	0x00000044, /* Controller 0, led 1, offset 68 */
	0x00010004, /* Controller 1, led 1, offset 4 */
	0x0002004c, /* Controller 2, led 1, offset 76 */
	0x00030054, /* Controller 3, led 1, offset 84 */
	0x0004005c, /* Controller 4, led 1, offset 92 */
	0x00050064, /* Controller 5, led 1, offset 100 */
	0x0006006c, /* Controller 6, led 1, offset 108 */
	0x00070004, /* Controller 7, led 1, offset 4 */
	0x00080074, /* Controller 8, led 1, offset 116 */
	0x0009007c, /* Controller 9, led 1, offset 124 */
	0x00000084, /* Controller 0, led 2, offset 132 */
	0x00010004, /* Controller 1, led 2, offset 4 */
	0x0002008c, /* Controller 2, led 2, offset 140 */
	0x00030094, /* Controller 3, led 2, offset 148 */
	0x0004009c, /* Controller 4, led 2, offset 156 */
	0x000500a4, /* Controller 5, led 2, offset 164 */
	0x000600ac, /* Controller 6, led 2, offset 172 */
	0x00070004, /* Controller 7, led 2, offset 4 */
	0x000800b4, /* Controller 8, led 2, offset 180 */
	0x000900bc, /* Controller 9, led 2, offset 188 */
	0x000000c4, /* Controller 0, led 3, offset 196 */
	0x00010004, /* Controller 1, led 3, offset 4 */
	0x000200cc, /* Controller 2, led 3, offset 204 */
	0x000300d4, /* Controller 3, led 3, offset 212 */
	0x000400dc, /* Controller 4, led 3, offset 220 */
	0x000500e4, /* Controller 5, led 3, offset 228 */
	0x000600ec, /* Controller 6, led 3, offset 236 */
	0x00070004, /* Controller 7, led 3, offset 4 */
	0x000800f4, /* Controller 8, led 3, offset 244 */
	0x000900fc, /* Controller 9, led 3, offset 252 */
	0x00000104, /* Controller 0, led 4, offset 260 */
	0x00010004, /* Controller 1, led 4, offset 4 */
	0x0002010c, /* Controller 2, led 4, offset 268 */
	0x00030114, /* Controller 3, led 4, offset 276 */
	0x0004011c, /* Controller 4, led 4, offset 284 */
	0x00050124, /* Controller 5, led 4, offset 292 */
	0x0006012c, /* Controller 6, led 4, offset 300 */
	0x00070004, /* Controller 7, led 4, offset 4 */
	0x00080134, /* Controller 8, led 4, offset 308 */
	0x0009013c, /* Controller 9, led 4, offset 316 */
	0x00000144, /* Controller 0, led 5, offset 324 */
	0x00010004, /* Controller 1, led 5, offset 4 */
	0x0002014c, /* Controller 2, led 5, offset 332 */
	0x00030154, /* Controller 3, led 5, offset 340 */
	0x0004015c, /* Controller 4, led 5, offset 348 */
	0x00050164, /* Controller 5, led 5, offset 356 */
	0x0006016c, /* Controller 6, led 5, offset 364 */
	0x00070004, /* Controller 7, led 5, offset 4 */
	0x00080174, /* Controller 8, led 5, offset 372 */
	0x0009017c, /* Controller 9, led 5, offset 380 */
	0x00000184, /* Controller 0, led 6, offset 388 */
	0x00010004, /* Controller 1, led 6, offset 4 */
	0x0002018c, /* Controller 2, led 6, offset 396 */
	0x00030194, /* Controller 3, led 6, offset 404 */
	0x0004019c, /* Controller 4, led 6, offset 412 */
	0x000501a4, /* Controller 5, led 6, offset 420 */
	0x000601ac, /* Controller 6, led 6, offset 428 */
	0x00070004, /* Controller 7, led 6, offset 4 */
	0x000801b4, /* Controller 8, led 6, offset 436 */
	0x000901bc, /* Controller 9, led 6, offset 444 */
	0x000001c4, /* Controller 0, led 7, offset 452 */
	0x00010004, /* Controller 1, led 7, offset 4 */
	0x000201cc, /* Controller 2, led 7, offset 460 */
	0x000301d4, /* Controller 3, led 7, offset 468 */
	0x000401dc, /* Controller 4, led 7, offset 476 */
	0x000501e4, /* Controller 5, led 7, offset 484 */
	0x000601ec, /* Controller 6, led 7, offset 492 */
	0x00070004, /* Controller 7, led 7, offset 4 */
	0x000801f4, /* Controller 8, led 7, offset 500 */
	0x000901fc, /* Controller 9, led 7, offset 508 */
	0x00000204, /* Controller 0, led 8, offset 516 */
	0x00010004, /* Controller 1, led 8, offset 4 */
	0x0002020c, /* Controller 2, led 8, offset 524 */
	0x00030214, /* Controller 3, led 8, offset 532 */
	0x0004021c, /* Controller 4, led 8, offset 540 */
	0x00050224, /* Controller 5, led 8, offset 548 */
	0x0006022c, /* Controller 6, led 8, offset 556 */
	0x00070004, /* Controller 7, led 8, offset 4 */
	0x00080234, /* Controller 8, led 8, offset 564 */
	0x0009023c, /* Controller 9, led 8, offset 572 */
	0x00000244, /* Controller 0, led 9, offset 580 */
	0x00010004, /* Controller 1, led 9, offset 4 */
	0x0002024c, /* Controller 2, led 9, offset 588 */
	0x00030254, /* Controller 3, led 9, offset 596 */
	0x0004025c, /* Controller 4, led 9, offset 604 */
	0x00050264, /* Controller 5, led 9, offset 612 */
	0x0006026c, /* Controller 6, led 9, offset 620 */
	0x00070004, /* Controller 7, led 9, offset 4 */
	0x00080274, /* Controller 8, led 9, offset 628 */
	0x0009027c, /* Controller 9, led 9, offset 636 */
	0x00000284, /* Controller 0, led 10, offset 644 */
	0x00010004, /* Controller 1, led 10, offset 4 */
	0x0002028c, /* Controller 2, led 10, offset 652 */
	0x00030294, /* Controller 3, led 10, offset 660 */
	0x0004029c, /* Controller 4, led 10, offset 668 */
	0x000502a4, /* Controller 5, led 10, offset 676 */
	0x000602ac, /* Controller 6, led 10, offset 684 */
	0x00070004, /* Controller 7, led 10, offset 4 */
	0x000802b4, /* Controller 8, led 10, offset 692 */
	0x000902bc, /* Controller 9, led 10, offset 700 */
	0x000002c4, /* Controller 0, led 11, offset 708 */
	0x00010004, /* Controller 1, led 11, offset 4 */
	0x000202cc, /* Controller 2, led 11, offset 716 */
	0x000302d4, /* Controller 3, led 11, offset 724 */
	0x000402dc, /* Controller 4, led 11, offset 732 */
	0x000502e4, /* Controller 5, led 11, offset 740 */
	0x000602ec, /* Controller 6, led 11, offset 748 */
	0x00070004, /* Controller 7, led 11, offset 4 */
	0x000802f4, /* Controller 8, led 11, offset 756 */
	0x000902fc, /* Controller 9, led 11, offset 764 */
	0x00000304, /* Controller 0, led 12, offset 772 */
	0x00010004, /* Controller 1, led 12, offset 4 */
	0x0002030c, /* Controller 2, led 12, offset 780 */
	0x00030314, /* Controller 3, led 12, offset 788 */
	0x0004031c, /* Controller 4, led 12, offset 796 */
	0x00050324, /* Controller 5, led 12, offset 804 */
	0x0006032c, /* Controller 6, led 12, offset 812 */
	0x00070004, /* Controller 7, led 12, offset 4 */
	0x00080334, /* Controller 8, led 12, offset 820 */
	0x0009033c, /* Controller 9, led 12, offset 828 */
	0x00000344, /* Controller 0, led 13, offset 836 */
	0x00010004, /* Controller 1, led 13, offset 4 */
	0x0002034c, /* Controller 2, led 13, offset 844 */
	0x00030354, /* Controller 3, led 13, offset 852 */
	0x0004035c, /* Controller 4, led 13, offset 860 */
	0x00050364, /* Controller 5, led 13, offset 868 */
	0x0006036c, /* Controller 6, led 13, offset 876 */
	0x00070004, /* Controller 7, led 13, offset 4 */
	0x00080374, /* Controller 8, led 13, offset 884 */
	0x0009037c, /* Controller 9, led 13, offset 892 */
	0x00000384, /* Controller 0, led 14, offset 900 */
	0x00010004, /* Controller 1, led 14, offset 4 */
	0x0002038c, /* Controller 2, led 14, offset 908 */
	0x00030394, /* Controller 3, led 14, offset 916 */
	0x0004039c, /* Controller 4, led 14, offset 924 */
	0x000503a4, /* Controller 5, led 14, offset 932 */
	0x000603ac, /* Controller 6, led 14, offset 940 */
	0x00070004, /* Controller 7, led 14, offset 4 */
	0x000803b4, /* Controller 8, led 14, offset 948 */
	0x000903bc, /* Controller 9, led 14, offset 956 */
	0x000003c4, /* Controller 0, led 15, offset 964 */
	0x00010004, /* Controller 1, led 15, offset 4 */
	0x000203cc, /* Controller 2, led 15, offset 972 */
	0x000303d4, /* Controller 3, led 15, offset 980 */
	0x000403dc, /* Controller 4, led 15, offset 988 */
	0x000503e4, /* Controller 5, led 15, offset 996 */
	0x000603ec, /* Controller 6, led 15, offset 1004 */
	0x00070004, /* Controller 7, led 15, offset 4 */
	0x000803f4, /* Controller 8, led 15, offset 1012 */
	0x000903fc, /* Controller 9, led 15, offset 1020 */
	0x00000404, /* Controller 0, led 16, offset 1028 */
	0x00010004, /* Controller 1, led 16, offset 4 */
	0x0002040c, /* Controller 2, led 16, offset 1036 */
	0x00030414, /* Controller 3, led 16, offset 1044 */
	0x0004041c, /* Controller 4, led 16, offset 1052 */
	0x00050424, /* Controller 5, led 16, offset 1060 */
	0x0006042c, /* Controller 6, led 16, offset 1068 */
	0x00070004, /* Controller 7, led 16, offset 4 */
	0x00080434, /* Controller 8, led 16, offset 1076 */
	0x0009043c, /* Controller 9, led 16, offset 1084 */
	0x00000444, /* Controller 0, led 17, offset 1092 */
	0x00010004, /* Controller 1, led 17, offset 4 */
	0x0002044c, /* Controller 2, led 17, offset 1100 */
	0x00030454, /* Controller 3, led 17, offset 1108 */
	0x0004045c, /* Controller 4, led 17, offset 1116 */
	0x00050464, /* Controller 5, led 17, offset 1124 */
	0x0006046c, /* Controller 6, led 17, offset 1132 */
	0x00070004, /* Controller 7, led 17, offset 4 */
	0x00080474, /* Controller 8, led 17, offset 1140 */
	0x0009047c, /* Controller 9, led 17, offset 1148 */
	0x00000484, /* Controller 0, led 18, offset 1156 */
	0x00010004, /* Controller 1, led 18, offset 4 */
	0x0002048c, /* Controller 2, led 18, offset 1164 */
	0x00030494, /* Controller 3, led 18, offset 1172 */
	0x0004049c, /* Controller 4, led 18, offset 1180 */
	0x000504a4, /* Controller 5, led 18, offset 1188 */
	0x000604ac, /* Controller 6, led 18, offset 1196 */
	0x00070004, /* Controller 7, led 18, offset 4 */
	0x000804b4, /* Controller 8, led 18, offset 1204 */
	0x000904bc, /* Controller 9, led 18, offset 1212 */
	0x000004c4, /* Controller 0, led 19, offset 1220 */
	0x00010004, /* Controller 1, led 19, offset 4 */
	0x000204cc, /* Controller 2, led 19, offset 1228 */
	0x000304d4, /* Controller 3, led 19, offset 1236 */
	0x000404dc, /* Controller 4, led 19, offset 1244 */
	0x000504e4, /* Controller 5, led 19, offset 1252 */
	0x000604ec, /* Controller 6, led 19, offset 1260 */
	0x00070004, /* Controller 7, led 19, offset 4 */
	0x000804f4, /* Controller 8, led 19, offset 1268 */
	0x000904fc, /* Controller 9, led 19, offset 1276 */
	0x00000504, /* Controller 0, led 20, offset 1284 */
	0x00010004, /* Controller 1, led 20, offset 4 */
	0x0002050c, /* Controller 2, led 20, offset 1292 */
	0x00030514, /* Controller 3, led 20, offset 1300 */
	0x0004051c, /* Controller 4, led 20, offset 1308 */
	0x00050524, /* Controller 5, led 20, offset 1316 */
	0x0006052c, /* Controller 6, led 20, offset 1324 */
	0x00070004, /* Controller 7, led 20, offset 4 */
	0x00080534, /* Controller 8, led 20, offset 1332 */
	0x0009053c, /* Controller 9, led 20, offset 1340 */
	0x00000544, /* Controller 0, led 21, offset 1348 */
	0x00010004, /* Controller 1, led 21, offset 4 */
	0x0002054c, /* Controller 2, led 21, offset 1356 */
	0x00030554, /* Controller 3, led 21, offset 1364 */
	0x0004055c, /* Controller 4, led 21, offset 1372 */
	0x00050564, /* Controller 5, led 21, offset 1380 */
	0x0006056c, /* Controller 6, led 21, offset 1388 */
	0x00070004, /* Controller 7, led 21, offset 4 */
	0x00080574, /* Controller 8, led 21, offset 1396 */
	0x0009057c, /* Controller 9, led 21, offset 1404 */
	0x00000584, /* Controller 0, led 22, offset 1412 */
	0x00010004, /* Controller 1, led 22, offset 4 */
	0x0002058c, /* Controller 2, led 22, offset 1420 */
	0x00030594, /* Controller 3, led 22, offset 1428 */
	0x0004059c, /* Controller 4, led 22, offset 1436 */
	0x000505a4, /* Controller 5, led 22, offset 1444 */
	0x000605ac, /* Controller 6, led 22, offset 1452 */
	0x00070004, /* Controller 7, led 22, offset 4 */
	0x000805b4, /* Controller 8, led 22, offset 1460 */
	0x000905bc, /* Controller 9, led 22, offset 1468 */
	0x000005c4, /* Controller 0, led 23, offset 1476 */
	0x00010004, /* Controller 1, led 23, offset 4 */
	0x000205cc, /* Controller 2, led 23, offset 1484 */
	0x000305d4, /* Controller 3, led 23, offset 1492 */
	0x000405dc, /* Controller 4, led 23, offset 1500 */
	0x000505e4, /* Controller 5, led 23, offset 1508 */
	0x000605ec, /* Controller 6, led 23, offset 1516 */
	0x00070004, /* Controller 7, led 23, offset 4 */
	0x000805f4, /* Controller 8, led 23, offset 1524 */
	0x000905fc, /* Controller 9, led 23, offset 1532 */
	0x00000604, /* Controller 0, led 24, offset 1540 */
	0x00010004, /* Controller 1, led 24, offset 4 */
	0x0002060c, /* Controller 2, led 24, offset 1548 */
	0x00030614, /* Controller 3, led 24, offset 1556 */
	0x0004061c, /* Controller 4, led 24, offset 1564 */
	0x00050624, /* Controller 5, led 24, offset 1572 */
	0x0006062c, /* Controller 6, led 24, offset 1580 */
	0x00070004, /* Controller 7, led 24, offset 4 */
	0x00080634, /* Controller 8, led 24, offset 1588 */
	0x0009063c, /* Controller 9, led 24, offset 1596 */
	0x00000644, /* Controller 0, led 25, offset 1604 */
	0x00010004, /* Controller 1, led 25, offset 4 */
	0x0002064c, /* Controller 2, led 25, offset 1612 */
	0x00030654, /* Controller 3, led 25, offset 1620 */
	0x0004065c, /* Controller 4, led 25, offset 1628 */
	0x00050664, /* Controller 5, led 25, offset 1636 */
	0x0006066c, /* Controller 6, led 25, offset 1644 */
	0x00070004, /* Controller 7, led 25, offset 4 */
	0x00080674, /* Controller 8, led 25, offset 1652 */
	0x0009067c, /* Controller 9, led 25, offset 1660 */
	0x00000684, /* Controller 0, led 26, offset 1668 */
	0x00010004, /* Controller 1, led 26, offset 4 */
	0x0002068c, /* Controller 2, led 26, offset 1676 */
	0x00030694, /* Controller 3, led 26, offset 1684 */
	0x0004069c, /* Controller 4, led 26, offset 1692 */
	0x000506a4, /* Controller 5, led 26, offset 1700 */
	0x000606ac, /* Controller 6, led 26, offset 1708 */
	0x00070004, /* Controller 7, led 26, offset 4 */
	0x000806b4, /* Controller 8, led 26, offset 1716 */
	0x000906bc, /* Controller 9, led 26, offset 1724 */
	0x000006c4, /* Controller 0, led 27, offset 1732 */
	0x00010004, /* Controller 1, led 27, offset 4 */
	0x000206cc, /* Controller 2, led 27, offset 1740 */
	0x000306d4, /* Controller 3, led 27, offset 1748 */
	0x000406dc, /* Controller 4, led 27, offset 1756 */
	0x000506e4, /* Controller 5, led 27, offset 1764 */
	0x000606ec, /* Controller 6, led 27, offset 1772 */
	0x00070004, /* Controller 7, led 27, offset 4 */
	0x000806f4, /* Controller 8, led 27, offset 1780 */
	0x000906fc, /* Controller 9, led 27, offset 1788 */
	0x00000704, /* Controller 0, led 28, offset 1796 */
	0x00010004, /* Controller 1, led 28, offset 4 */
	0x0002070c, /* Controller 2, led 28, offset 1804 */
	0x00030714, /* Controller 3, led 28, offset 1812 */
	0x0004071c, /* Controller 4, led 28, offset 1820 */
	0x00050724, /* Controller 5, led 28, offset 1828 */
	0x0006072c, /* Controller 6, led 28, offset 1836 */
	0x00070004, /* Controller 7, led 28, offset 4 */
	0x00080734, /* Controller 8, led 28, offset 1844 */
	0x0009073c, /* Controller 9, led 28, offset 1852 */
	0x00000744, /* Controller 0, led 29, offset 1860 */
	0x00010004, /* Controller 1, led 29, offset 4 */
	0x0002074c, /* Controller 2, led 29, offset 1868 */
	0x00030754, /* Controller 3, led 29, offset 1876 */
	0x0004075c, /* Controller 4, led 29, offset 1884 */
	0x00050764, /* Controller 5, led 29, offset 1892 */
	0x0006076c, /* Controller 6, led 29, offset 1900 */
	0x00070004, /* Controller 7, led 29, offset 4 */
	0x00080774, /* Controller 8, led 29, offset 1908 */
	0x0009077c, /* Controller 9, led 29, offset 1916 */
	0x00000784, /* Controller 0, led 30, offset 1924 */
	0x00010004, /* Controller 1, led 30, offset 4 */
	0x0002078c, /* Controller 2, led 30, offset 1932 */
	0x00030794, /* Controller 3, led 30, offset 1940 */
	0x0004079c, /* Controller 4, led 30, offset 1948 */
	0x000507a4, /* Controller 5, led 30, offset 1956 */
	0x000607ac, /* Controller 6, led 30, offset 1964 */
	0x00070004, /* Controller 7, led 30, offset 4 */
	0x000807b4, /* Controller 8, led 30, offset 1972 */
	0x000907bc, /* Controller 9, led 30, offset 1980 */
	0x000007c4, /* Controller 0, led 31, offset 1988 */
	0x00010004, /* Controller 1, led 31, offset 4 */
	0x000207cc, /* Controller 2, led 31, offset 1996 */
	0x000307d4, /* Controller 3, led 31, offset 2004 */
	0x000407dc, /* Controller 4, led 31, offset 2012 */
	0x000507e4, /* Controller 5, led 31, offset 2020 */
	0x000607ec, /* Controller 6, led 31, offset 2028 */
	0x00070004, /* Controller 7, led 31, offset 4 */
	0x000807f4, /* Controller 8, led 31, offset 2036 */
	0x000907fc, /* Controller 9, led 31, offset 2044 */
	0x00000804, /* Controller 0, led 32, offset 2052 */
	0x00010004, /* Controller 1, led 32, offset 4 */
	0x0002080c, /* Controller 2, led 32, offset 2060 */
	0x00030814, /* Controller 3, led 32, offset 2068 */
	0x0004081c, /* Controller 4, led 32, offset 2076 */
	0x00050824, /* Controller 5, led 32, offset 2084 */
	0x0006082c, /* Controller 6, led 32, offset 2092 */
	0x00070004, /* Controller 7, led 32, offset 4 */
	0x00080834, /* Controller 8, led 32, offset 2100 */
	0x0009083c, /* Controller 9, led 32, offset 2108 */
	0x00000844, /* Controller 0, led 33, offset 2116 */
	0x00010004, /* Controller 1, led 33, offset 4 */
	0x0002084c, /* Controller 2, led 33, offset 2124 */
	0x00030854, /* Controller 3, led 33, offset 2132 */
	0x0004085c, /* Controller 4, led 33, offset 2140 */
	0x00050864, /* Controller 5, led 33, offset 2148 */
	0x0006086c, /* Controller 6, led 33, offset 2156 */
	0x00070004, /* Controller 7, led 33, offset 4 */
	0x00080874, /* Controller 8, led 33, offset 2164 */
	0x0009087c, /* Controller 9, led 33, offset 2172 */
	0x00000884, /* Controller 0, led 34, offset 2180 */
	0x00010004, /* Controller 1, led 34, offset 4 */
	0x0002088c, /* Controller 2, led 34, offset 2188 */
	0x00030894, /* Controller 3, led 34, offset 2196 */
	0x0004089c, /* Controller 4, led 34, offset 2204 */
	0x000508a4, /* Controller 5, led 34, offset 2212 */
	0x000608ac, /* Controller 6, led 34, offset 2220 */
	0x00070004, /* Controller 7, led 34, offset 4 */
	0x000808b4, /* Controller 8, led 34, offset 2228 */
	0x000908bc, /* Controller 9, led 34, offset 2236 */
	0x000008c4, /* Controller 0, led 35, offset 2244 */
	0x00010004, /* Controller 1, led 35, offset 4 */
	0x000208cc, /* Controller 2, led 35, offset 2252 */
	0x000308d4, /* Controller 3, led 35, offset 2260 */
	0x000408dc, /* Controller 4, led 35, offset 2268 */
	0x000508e4, /* Controller 5, led 35, offset 2276 */
	0x000608ec, /* Controller 6, led 35, offset 2284 */
	0x00070004, /* Controller 7, led 35, offset 4 */
	0x000808f4, /* Controller 8, led 35, offset 2292 */
	0x000908fc, /* Controller 9, led 35, offset 2300 */
	0x00000904, /* Controller 0, led 36, offset 2308 */
	0x00010004, /* Controller 1, led 36, offset 4 */
	0x0002090c, /* Controller 2, led 36, offset 2316 */
	0x00030914, /* Controller 3, led 36, offset 2324 */
	0x0004091c, /* Controller 4, led 36, offset 2332 */
	0x00050924, /* Controller 5, led 36, offset 2340 */
	0x0006092c, /* Controller 6, led 36, offset 2348 */
	0x00070004, /* Controller 7, led 36, offset 4 */
	0x00080934, /* Controller 8, led 36, offset 2356 */
	0x0009093c, /* Controller 9, led 36, offset 2364 */
	0x00000944, /* Controller 0, led 37, offset 2372 */
	0x00010004, /* Controller 1, led 37, offset 4 */
	0x0002094c, /* Controller 2, led 37, offset 2380 */
	0x00030954, /* Controller 3, led 37, offset 2388 */
	0x0004095c, /* Controller 4, led 37, offset 2396 */
	0x00050964, /* Controller 5, led 37, offset 2404 */
	0x0006096c, /* Controller 6, led 37, offset 2412 */
	0x00070004, /* Controller 7, led 37, offset 4 */
	0x00080974, /* Controller 8, led 37, offset 2420 */
	0x0009097c, /* Controller 9, led 37, offset 2428 */
	0x00000984, /* Controller 0, led 38, offset 2436 */
	0x00010004, /* Controller 1, led 38, offset 4 */
	0x0002098c, /* Controller 2, led 38, offset 2444 */
	0x00030994, /* Controller 3, led 38, offset 2452 */
	0x0004099c, /* Controller 4, led 38, offset 2460 */
	0x000509a4, /* Controller 5, led 38, offset 2468 */
	0x000609ac, /* Controller 6, led 38, offset 2476 */
	0x00070004, /* Controller 7, led 38, offset 4 */
	0x000809b4, /* Controller 8, led 38, offset 2484 */
	0x000909bc, /* Controller 9, led 38, offset 2492 */
	0x000009c4, /* Controller 0, led 39, offset 2500 */
	0x00010004, /* Controller 1, led 39, offset 4 */
	0x000209cc, /* Controller 2, led 39, offset 2508 */
	0x000309d4, /* Controller 3, led 39, offset 2516 */
	0x000409dc, /* Controller 4, led 39, offset 2524 */
	0x000509e4, /* Controller 5, led 39, offset 2532 */
	0x000609ec, /* Controller 6, led 39, offset 2540 */
	0x00070004, /* Controller 7, led 39, offset 4 */
	0x000809f4, /* Controller 8, led 39, offset 2548 */
	0x000909fc, /* Controller 9, led 39, offset 2556 */
	0x00000a04, /* Controller 0, led 40, offset 2564 */
	0x00010004, /* Controller 1, led 40, offset 4 */
	0x00020a0c, /* Controller 2, led 40, offset 2572 */
	0x00030a14, /* Controller 3, led 40, offset 2580 */
	0x00040a1c, /* Controller 4, led 40, offset 2588 */
	0x00050a24, /* Controller 5, led 40, offset 2596 */
	0x00060a2c, /* Controller 6, led 40, offset 2604 */
	0x00070004, /* Controller 7, led 40, offset 4 */
	0x00080a34, /* Controller 8, led 40, offset 2612 */
	0x00090a3c, /* Controller 9, led 40, offset 2620 */
	0x00000a44, /* Controller 0, led 41, offset 2628 */
	0x00010004, /* Controller 1, led 41, offset 4 */
	0x00020a4c, /* Controller 2, led 41, offset 2636 */
	0x00030a54, /* Controller 3, led 41, offset 2644 */
	0x00040a5c, /* Controller 4, led 41, offset 2652 */
	0x00050a64, /* Controller 5, led 41, offset 2660 */
	0x00060a6c, /* Controller 6, led 41, offset 2668 */
	0x00070004, /* Controller 7, led 41, offset 4 */
	0x00080a74, /* Controller 8, led 41, offset 2676 */
	0x00090a7c, /* Controller 9, led 41, offset 2684 */
	0x00000a84, /* Controller 0, led 42, offset 2692 */
	0x00010004, /* Controller 1, led 42, offset 4 */
	0x00020a8c, /* Controller 2, led 42, offset 2700 */
	0x00030a94, /* Controller 3, led 42, offset 2708 */
	0x00040a9c, /* Controller 4, led 42, offset 2716 */
	0x00050aa4, /* Controller 5, led 42, offset 2724 */
	0x00060aac, /* Controller 6, led 42, offset 2732 */
	0x00070004, /* Controller 7, led 42, offset 4 */
	0x00080ab4, /* Controller 8, led 42, offset 2740 */
	0x00090abc, /* Controller 9, led 42, offset 2748 */
	0x00000ac4, /* Controller 0, led 43, offset 2756 */
	0x00010004, /* Controller 1, led 43, offset 4 */
	0x00020acc, /* Controller 2, led 43, offset 2764 */
	0x00030ad4, /* Controller 3, led 43, offset 2772 */
	0x00040adc, /* Controller 4, led 43, offset 2780 */
	0x00050ae4, /* Controller 5, led 43, offset 2788 */
	0x00060aec, /* Controller 6, led 43, offset 2796 */
	0x00070004, /* Controller 7, led 43, offset 4 */
	0x00080af4, /* Controller 8, led 43, offset 2804 */
	0x00090afc, /* Controller 9, led 43, offset 2812 */
	0x00000b04, /* Controller 0, led 44, offset 2820 */
	0x00010004, /* Controller 1, led 44, offset 4 */
	0x00020b0c, /* Controller 2, led 44, offset 2828 */
	0x00030b14, /* Controller 3, led 44, offset 2836 */
	0x00040b1c, /* Controller 4, led 44, offset 2844 */
	0x00050b24, /* Controller 5, led 44, offset 2852 */
	0x00060b2c, /* Controller 6, led 44, offset 2860 */
	0x00070004, /* Controller 7, led 44, offset 4 */
	0x00080b34, /* Controller 8, led 44, offset 2868 */
	0x00090b3c, /* Controller 9, led 44, offset 2876 */
	0x00000b44, /* Controller 0, led 45, offset 2884 */
	0x00010004, /* Controller 1, led 45, offset 4 */
	0x00020b4c, /* Controller 2, led 45, offset 2892 */
	0x00030b54, /* Controller 3, led 45, offset 2900 */
	0x00040b5c, /* Controller 4, led 45, offset 2908 */
	0x00050b64, /* Controller 5, led 45, offset 2916 */
	0x00060b6c, /* Controller 6, led 45, offset 2924 */
	0x00070004, /* Controller 7, led 45, offset 4 */
	0x00080b74, /* Controller 8, led 45, offset 2932 */
	0x00090b7c, /* Controller 9, led 45, offset 2940 */
	0x00000b84, /* Controller 0, led 46, offset 2948 */
	0x00010004, /* Controller 1, led 46, offset 4 */
	0x00020b8c, /* Controller 2, led 46, offset 2956 */
	0x00030b94, /* Controller 3, led 46, offset 2964 */
	0x00040b9c, /* Controller 4, led 46, offset 2972 */
	0x00050ba4, /* Controller 5, led 46, offset 2980 */
	0x00060bac, /* Controller 6, led 46, offset 2988 */
	0x00070004, /* Controller 7, led 46, offset 4 */
	0x00080bb4, /* Controller 8, led 46, offset 2996 */
	0x00090bbc, /* Controller 9, led 46, offset 3004 */
	0x00000bc4, /* Controller 0, led 47, offset 3012 */
	0x00010004, /* Controller 1, led 47, offset 4 */
	0x00020bcc, /* Controller 2, led 47, offset 3020 */
	0x00030bd4, /* Controller 3, led 47, offset 3028 */
	0x00040bdc, /* Controller 4, led 47, offset 3036 */
	0x00050be4, /* Controller 5, led 47, offset 3044 */
	0x00060bec, /* Controller 6, led 47, offset 3052 */
	0x00070004, /* Controller 7, led 47, offset 4 */
	0x00080bf4, /* Controller 8, led 47, offset 3060 */
	0x00090bfc, /* Controller 9, led 47, offset 3068 */
	0x00000c04, /* Controller 0, led 48, offset 3076 */
	0x00010004, /* Controller 1, led 48, offset 4 */
	0x00020c0c, /* Controller 2, led 48, offset 3084 */
	0x00030c14, /* Controller 3, led 48, offset 3092 */
	0x00040c1c, /* Controller 4, led 48, offset 3100 */
	0x00050c24, /* Controller 5, led 48, offset 3108 */
	0x00060c2c, /* Controller 6, led 48, offset 3116 */
	0x00070004, /* Controller 7, led 48, offset 4 */
	0x00080c34, /* Controller 8, led 48, offset 3124 */
	0x00090c3c, /* Controller 9, led 48, offset 3132 */
	0x00000c44, /* Controller 0, led 49, offset 3140 */
	0x00010004, /* Controller 1, led 49, offset 4 */
	0x00020c4c, /* Controller 2, led 49, offset 3148 */
	0x00030c54, /* Controller 3, led 49, offset 3156 */
	0x00040c5c, /* Controller 4, led 49, offset 3164 */
	0x00050c64, /* Controller 5, led 49, offset 3172 */
	0x00060c6c, /* Controller 6, led 49, offset 3180 */
	0x00070004, /* Controller 7, led 49, offset 4 */
	0x00080c74, /* Controller 8, led 49, offset 3188 */
	0x00090c7c, /* Controller 9, led 49, offset 3196 */
	0x00000c84, /* Controller 0, led 50, offset 3204 */
	0x00010004, /* Controller 1, led 50, offset 4 */
	0x00020c8c, /* Controller 2, led 50, offset 3212 */
	0x00030c94, /* Controller 3, led 50, offset 3220 */
	0x00040c9c, /* Controller 4, led 50, offset 3228 */
	0x00050ca4, /* Controller 5, led 50, offset 3236 */
	0x00060cac, /* Controller 6, led 50, offset 3244 */
	0x00070004, /* Controller 7, led 50, offset 4 */
	0x00080cb4, /* Controller 8, led 50, offset 3252 */
	0x00090cbc, /* Controller 9, led 50, offset 3260 */
	0x00000cc4, /* Controller 0, led 51, offset 3268 */
	0x00010004, /* Controller 1, led 51, offset 4 */
	0x00020ccc, /* Controller 2, led 51, offset 3276 */
	0x00030cd4, /* Controller 3, led 51, offset 3284 */
	0x00040cdc, /* Controller 4, led 51, offset 3292 */
	0x00050ce4, /* Controller 5, led 51, offset 3300 */
	0x00060cec, /* Controller 6, led 51, offset 3308 */
	0x00070004, /* Controller 7, led 51, offset 4 */
	0x00080cf4, /* Controller 8, led 51, offset 3316 */
	0x00090cfc, /* Controller 9, led 51, offset 3324 */
	0x00000d04, /* Controller 0, led 52, offset 3332 */
	0x00010004, /* Controller 1, led 52, offset 4 */
	0x00020d0c, /* Controller 2, led 52, offset 3340 */
	0x00030d14, /* Controller 3, led 52, offset 3348 */
	0x00040d1c, /* Controller 4, led 52, offset 3356 */
	0x00050d24, /* Controller 5, led 52, offset 3364 */
	0x00060d2c, /* Controller 6, led 52, offset 3372 */
	0x00070004, /* Controller 7, led 52, offset 4 */
	0x00080d34, /* Controller 8, led 52, offset 3380 */
	0x00090d3c, /* Controller 9, led 52, offset 3388 */
	0x00000d44, /* Controller 0, led 53, offset 3396 */
	0x00010004, /* Controller 1, led 53, offset 4 */
	0x00020d4c, /* Controller 2, led 53, offset 3404 */
	0x00030d54, /* Controller 3, led 53, offset 3412 */
	0x00040d5c, /* Controller 4, led 53, offset 3420 */
	0x00050d64, /* Controller 5, led 53, offset 3428 */
	0x00060d6c, /* Controller 6, led 53, offset 3436 */
	0x00070004, /* Controller 7, led 53, offset 4 */
	0x00080d74, /* Controller 8, led 53, offset 3444 */
	0x00090d7c, /* Controller 9, led 53, offset 3452 */
	0x00000d84, /* Controller 0, led 54, offset 3460 */
	0x00010004, /* Controller 1, led 54, offset 4 */
	0x00020d8c, /* Controller 2, led 54, offset 3468 */
	0x00030d94, /* Controller 3, led 54, offset 3476 */
	0x00040d9c, /* Controller 4, led 54, offset 3484 */
	0x00050da4, /* Controller 5, led 54, offset 3492 */
	0x00060dac, /* Controller 6, led 54, offset 3500 */
	0x00070004, /* Controller 7, led 54, offset 4 */
	0x00080db4, /* Controller 8, led 54, offset 3508 */
	0x00090dbc, /* Controller 9, led 54, offset 3516 */
	0x00000dc4, /* Controller 0, led 55, offset 3524 */
	0x00010004, /* Controller 1, led 55, offset 4 */
	0x00020dcc, /* Controller 2, led 55, offset 3532 */
	0x00030dd4, /* Controller 3, led 55, offset 3540 */
	0x00040ddc, /* Controller 4, led 55, offset 3548 */
	0x00050de4, /* Controller 5, led 55, offset 3556 */
	0x00060dec, /* Controller 6, led 55, offset 3564 */
	0x00070004, /* Controller 7, led 55, offset 4 */
	0x00080df4, /* Controller 8, led 55, offset 3572 */
	0x00090dfc, /* Controller 9, led 55, offset 3580 */
	0x00000e04, /* Controller 0, led 56, offset 3588 */
	0x00010004, /* Controller 1, led 56, offset 4 */
	0x00020e0c, /* Controller 2, led 56, offset 3596 */
	0x00030e14, /* Controller 3, led 56, offset 3604 */
	0x00040e1c, /* Controller 4, led 56, offset 3612 */
	0x00050e24, /* Controller 5, led 56, offset 3620 */
	0x00060e2c, /* Controller 6, led 56, offset 3628 */
	0x00070004, /* Controller 7, led 56, offset 4 */
	0x00080e34, /* Controller 8, led 56, offset 3636 */
	0x00090e3c, /* Controller 9, led 56, offset 3644 */
	0x00000e44, /* Controller 0, led 57, offset 3652 */
	0x00010004, /* Controller 1, led 57, offset 4 */
	0x00020e4c, /* Controller 2, led 57, offset 3660 */
	0x00030e54, /* Controller 3, led 57, offset 3668 */
	0x00040e5c, /* Controller 4, led 57, offset 3676 */
	0x00050e64, /* Controller 5, led 57, offset 3684 */
	0x00060e6c, /* Controller 6, led 57, offset 3692 */
	0x00070004, /* Controller 7, led 57, offset 4 */
	0x00080e74, /* Controller 8, led 57, offset 3700 */
	0x00090e7c, /* Controller 9, led 57, offset 3708 */
	0x00000e48, /* Controller 0, led 58, offset 3656 */
	0x00010004, /* Controller 1, led 58, offset 4 */
	0x00020e50, /* Controller 2, led 58, offset 3664 */
	0x00030e58, /* Controller 3, led 58, offset 3672 */
	0x00040e60, /* Controller 4, led 58, offset 3680 */
	0x00050e68, /* Controller 5, led 58, offset 3688 */
	0x00060e70, /* Controller 6, led 58, offset 3696 */
	0x00070004, /* Controller 7, led 58, offset 4 */
	0x00080e78, /* Controller 8, led 58, offset 3704 */
	0x00090e80, /* Controller 9, led 58, offset 3712 */
	0x00000e08, /* Controller 0, led 59, offset 3592 */
	0x00010004, /* Controller 1, led 59, offset 4 */
	0x00020e10, /* Controller 2, led 59, offset 3600 */
	0x00030e18, /* Controller 3, led 59, offset 3608 */
	0x00040e20, /* Controller 4, led 59, offset 3616 */
	0x00050e28, /* Controller 5, led 59, offset 3624 */
	0x00060e30, /* Controller 6, led 59, offset 3632 */
	0x00070004, /* Controller 7, led 59, offset 4 */
	0x00080e38, /* Controller 8, led 59, offset 3640 */
	0x00090e40, /* Controller 9, led 59, offset 3648 */
	0x00000dc8, /* Controller 0, led 60, offset 3528 */
	0x00010004, /* Controller 1, led 60, offset 4 */
	0x00020dd0, /* Controller 2, led 60, offset 3536 */
	0x00030dd8, /* Controller 3, led 60, offset 3544 */
	0x00040de0, /* Controller 4, led 60, offset 3552 */
	0x00050de8, /* Controller 5, led 60, offset 3560 */
	0x00060df0, /* Controller 6, led 60, offset 3568 */
	0x00070004, /* Controller 7, led 60, offset 4 */
	0x00080df8, /* Controller 8, led 60, offset 3576 */
	0x00090e00, /* Controller 9, led 60, offset 3584 */
	0x00000d88, /* Controller 0, led 61, offset 3464 */
	0x00010004, /* Controller 1, led 61, offset 4 */
	0x00020d90, /* Controller 2, led 61, offset 3472 */
	0x00030d98, /* Controller 3, led 61, offset 3480 */
	0x00040da0, /* Controller 4, led 61, offset 3488 */
	0x00050da8, /* Controller 5, led 61, offset 3496 */
	0x00060db0, /* Controller 6, led 61, offset 3504 */
	0x00070004, /* Controller 7, led 61, offset 4 */
	0x00080db8, /* Controller 8, led 61, offset 3512 */
	0x00090dc0, /* Controller 9, led 61, offset 3520 */
	0x00000d48, /* Controller 0, led 62, offset 3400 */
	0x00010004, /* Controller 1, led 62, offset 4 */
	0x00020d50, /* Controller 2, led 62, offset 3408 */
	0x00030d58, /* Controller 3, led 62, offset 3416 */
	0x00040d60, /* Controller 4, led 62, offset 3424 */
	0x00050d68, /* Controller 5, led 62, offset 3432 */
	0x00060d70, /* Controller 6, led 62, offset 3440 */
	0x00070004, /* Controller 7, led 62, offset 4 */
	0x00080d78, /* Controller 8, led 62, offset 3448 */
	0x00090d80, /* Controller 9, led 62, offset 3456 */
	0x00000d08, /* Controller 0, led 63, offset 3336 */
	0x00010004, /* Controller 1, led 63, offset 4 */
	0x00020d10, /* Controller 2, led 63, offset 3344 */
	0x00030d18, /* Controller 3, led 63, offset 3352 */
	0x00040d20, /* Controller 4, led 63, offset 3360 */
	0x00050d28, /* Controller 5, led 63, offset 3368 */
	0x00060d30, /* Controller 6, led 63, offset 3376 */
	0x00070004, /* Controller 7, led 63, offset 4 */
	0x00080d38, /* Controller 8, led 63, offset 3384 */
	0x00090d40, /* Controller 9, led 63, offset 3392 */
	0x00000cc8, /* Controller 0, led 64, offset 3272 */
	0x00010004, /* Controller 1, led 64, offset 4 */
	0x00020cd0, /* Controller 2, led 64, offset 3280 */
	0x00030cd8, /* Controller 3, led 64, offset 3288 */
	0x00040ce0, /* Controller 4, led 64, offset 3296 */
	0x00050ce8, /* Controller 5, led 64, offset 3304 */
	0x00060cf0, /* Controller 6, led 64, offset 3312 */
	0x00070004, /* Controller 7, led 64, offset 4 */
	0x00080cf8, /* Controller 8, led 64, offset 3320 */
	0x00090d00, /* Controller 9, led 64, offset 3328 */
	0x00000c88, /* Controller 0, led 65, offset 3208 */
	0x00010004, /* Controller 1, led 65, offset 4 */
	0x00020c90, /* Controller 2, led 65, offset 3216 */
	0x00030c98, /* Controller 3, led 65, offset 3224 */
	0x00040ca0, /* Controller 4, led 65, offset 3232 */
	0x00050ca8, /* Controller 5, led 65, offset 3240 */
	0x00060cb0, /* Controller 6, led 65, offset 3248 */
	0x00070004, /* Controller 7, led 65, offset 4 */
	0x00080cb8, /* Controller 8, led 65, offset 3256 */
	0x00090cc0, /* Controller 9, led 65, offset 3264 */
	0x00000c48, /* Controller 0, led 66, offset 3144 */
	0x00010004, /* Controller 1, led 66, offset 4 */
	0x00020c50, /* Controller 2, led 66, offset 3152 */
	0x00030c58, /* Controller 3, led 66, offset 3160 */
	0x00040c60, /* Controller 4, led 66, offset 3168 */
	0x00050c68, /* Controller 5, led 66, offset 3176 */
	0x00060c70, /* Controller 6, led 66, offset 3184 */
	0x00070004, /* Controller 7, led 66, offset 4 */
	0x00080c78, /* Controller 8, led 66, offset 3192 */
	0x00090c80, /* Controller 9, led 66, offset 3200 */
	0x00000c08, /* Controller 0, led 67, offset 3080 */
	0x00010004, /* Controller 1, led 67, offset 4 */
	0x00020c10, /* Controller 2, led 67, offset 3088 */
	0x00030c18, /* Controller 3, led 67, offset 3096 */
	0x00040c20, /* Controller 4, led 67, offset 3104 */
	0x00050c28, /* Controller 5, led 67, offset 3112 */
	0x00060c30, /* Controller 6, led 67, offset 3120 */
	0x00070004, /* Controller 7, led 67, offset 4 */
	0x00080c38, /* Controller 8, led 67, offset 3128 */
	0x00090c40, /* Controller 9, led 67, offset 3136 */
	0x00000bc8, /* Controller 0, led 68, offset 3016 */
	0x00010004, /* Controller 1, led 68, offset 4 */
	0x00020bd0, /* Controller 2, led 68, offset 3024 */
	0x00030bd8, /* Controller 3, led 68, offset 3032 */
	0x00040be0, /* Controller 4, led 68, offset 3040 */
	0x00050be8, /* Controller 5, led 68, offset 3048 */
	0x00060bf0, /* Controller 6, led 68, offset 3056 */
	0x00070004, /* Controller 7, led 68, offset 4 */
	0x00080bf8, /* Controller 8, led 68, offset 3064 */
	0x00090c00, /* Controller 9, led 68, offset 3072 */
	0x00000b88, /* Controller 0, led 69, offset 2952 */
	0x00010004, /* Controller 1, led 69, offset 4 */
	0x00020b90, /* Controller 2, led 69, offset 2960 */
	0x00030b98, /* Controller 3, led 69, offset 2968 */
	0x00040ba0, /* Controller 4, led 69, offset 2976 */
	0x00050ba8, /* Controller 5, led 69, offset 2984 */
	0x00060bb0, /* Controller 6, led 69, offset 2992 */
	0x00070004, /* Controller 7, led 69, offset 4 */
	0x00080bb8, /* Controller 8, led 69, offset 3000 */
	0x00090bc0, /* Controller 9, led 69, offset 3008 */
	0x00000b48, /* Controller 0, led 70, offset 2888 */
	0x00010004, /* Controller 1, led 70, offset 4 */
	0x00020b50, /* Controller 2, led 70, offset 2896 */
	0x00030b58, /* Controller 3, led 70, offset 2904 */
	0x00040b60, /* Controller 4, led 70, offset 2912 */
	0x00050b68, /* Controller 5, led 70, offset 2920 */
	0x00060b70, /* Controller 6, led 70, offset 2928 */
	0x00070004, /* Controller 7, led 70, offset 4 */
	0x00080b78, /* Controller 8, led 70, offset 2936 */
	0x00090b80, /* Controller 9, led 70, offset 2944 */
	0x00000b08, /* Controller 0, led 71, offset 2824 */
	0x00010004, /* Controller 1, led 71, offset 4 */
	0x00020b10, /* Controller 2, led 71, offset 2832 */
	0x00030b18, /* Controller 3, led 71, offset 2840 */
	0x00040b20, /* Controller 4, led 71, offset 2848 */
	0x00050b28, /* Controller 5, led 71, offset 2856 */
	0x00060b30, /* Controller 6, led 71, offset 2864 */
	0x00070004, /* Controller 7, led 71, offset 4 */
	0x00080b38, /* Controller 8, led 71, offset 2872 */
	0x00090b40, /* Controller 9, led 71, offset 2880 */
	0x00000ac8, /* Controller 0, led 72, offset 2760 */
	0x00010004, /* Controller 1, led 72, offset 4 */
	0x00020ad0, /* Controller 2, led 72, offset 2768 */
	0x00030ad8, /* Controller 3, led 72, offset 2776 */
	0x00040ae0, /* Controller 4, led 72, offset 2784 */
	0x00050ae8, /* Controller 5, led 72, offset 2792 */
	0x00060af0, /* Controller 6, led 72, offset 2800 */
	0x00070004, /* Controller 7, led 72, offset 4 */
	0x00080af8, /* Controller 8, led 72, offset 2808 */
	0x00090b00, /* Controller 9, led 72, offset 2816 */
	0x00000a88, /* Controller 0, led 73, offset 2696 */
	0x00010004, /* Controller 1, led 73, offset 4 */
	0x00020a90, /* Controller 2, led 73, offset 2704 */
	0x00030a98, /* Controller 3, led 73, offset 2712 */
	0x00040aa0, /* Controller 4, led 73, offset 2720 */
	0x00050aa8, /* Controller 5, led 73, offset 2728 */
	0x00060ab0, /* Controller 6, led 73, offset 2736 */
	0x00070004, /* Controller 7, led 73, offset 4 */
	0x00080ab8, /* Controller 8, led 73, offset 2744 */
	0x00090ac0, /* Controller 9, led 73, offset 2752 */
	0x00000a48, /* Controller 0, led 74, offset 2632 */
	0x00010004, /* Controller 1, led 74, offset 4 */
	0x00020a50, /* Controller 2, led 74, offset 2640 */
	0x00030a58, /* Controller 3, led 74, offset 2648 */
	0x00040a60, /* Controller 4, led 74, offset 2656 */
	0x00050a68, /* Controller 5, led 74, offset 2664 */
	0x00060a70, /* Controller 6, led 74, offset 2672 */
	0x00070004, /* Controller 7, led 74, offset 4 */
	0x00080a78, /* Controller 8, led 74, offset 2680 */
	0x00090a80, /* Controller 9, led 74, offset 2688 */
	0x00000a08, /* Controller 0, led 75, offset 2568 */
	0x00010004, /* Controller 1, led 75, offset 4 */
	0x00020a10, /* Controller 2, led 75, offset 2576 */
	0x00030a18, /* Controller 3, led 75, offset 2584 */
	0x00040a20, /* Controller 4, led 75, offset 2592 */
	0x00050a28, /* Controller 5, led 75, offset 2600 */
	0x00060a30, /* Controller 6, led 75, offset 2608 */
	0x00070004, /* Controller 7, led 75, offset 4 */
	0x00080a38, /* Controller 8, led 75, offset 2616 */
	0x00090a40, /* Controller 9, led 75, offset 2624 */
	0x000009c8, /* Controller 0, led 76, offset 2504 */
	0x00010004, /* Controller 1, led 76, offset 4 */
	0x000209d0, /* Controller 2, led 76, offset 2512 */
	0x000309d8, /* Controller 3, led 76, offset 2520 */
	0x000409e0, /* Controller 4, led 76, offset 2528 */
	0x000509e8, /* Controller 5, led 76, offset 2536 */
	0x000609f0, /* Controller 6, led 76, offset 2544 */
	0x00070004, /* Controller 7, led 76, offset 4 */
	0x000809f8, /* Controller 8, led 76, offset 2552 */
	0x00090a00, /* Controller 9, led 76, offset 2560 */
	0x00000988, /* Controller 0, led 77, offset 2440 */
	0x00010004, /* Controller 1, led 77, offset 4 */
	0x00020990, /* Controller 2, led 77, offset 2448 */
	0x00030998, /* Controller 3, led 77, offset 2456 */
	0x000409a0, /* Controller 4, led 77, offset 2464 */
	0x000509a8, /* Controller 5, led 77, offset 2472 */
	0x000609b0, /* Controller 6, led 77, offset 2480 */
	0x00070004, /* Controller 7, led 77, offset 4 */
	0x000809b8, /* Controller 8, led 77, offset 2488 */
	0x000909c0, /* Controller 9, led 77, offset 2496 */
	0x00000948, /* Controller 0, led 78, offset 2376 */
	0x00010004, /* Controller 1, led 78, offset 4 */
	0x00020950, /* Controller 2, led 78, offset 2384 */
	0x00030958, /* Controller 3, led 78, offset 2392 */
	0x00040960, /* Controller 4, led 78, offset 2400 */
	0x00050968, /* Controller 5, led 78, offset 2408 */
	0x00060970, /* Controller 6, led 78, offset 2416 */
	0x00070004, /* Controller 7, led 78, offset 4 */
	0x00080978, /* Controller 8, led 78, offset 2424 */
	0x00090980, /* Controller 9, led 78, offset 2432 */
	0x00000908, /* Controller 0, led 79, offset 2312 */
	0x00010004, /* Controller 1, led 79, offset 4 */
	0x00020910, /* Controller 2, led 79, offset 2320 */
	0x00030918, /* Controller 3, led 79, offset 2328 */
	0x00040920, /* Controller 4, led 79, offset 2336 */
	0x00050928, /* Controller 5, led 79, offset 2344 */
	0x00060930, /* Controller 6, led 79, offset 2352 */
	0x00070004, /* Controller 7, led 79, offset 4 */
	0x00080938, /* Controller 8, led 79, offset 2360 */
	0x00090940, /* Controller 9, led 79, offset 2368 */
	0x000008c8, /* Controller 0, led 80, offset 2248 */
	0x00010004, /* Controller 1, led 80, offset 4 */
	0x000208d0, /* Controller 2, led 80, offset 2256 */
	0x000308d8, /* Controller 3, led 80, offset 2264 */
	0x000408e0, /* Controller 4, led 80, offset 2272 */
	0x000508e8, /* Controller 5, led 80, offset 2280 */
	0x000608f0, /* Controller 6, led 80, offset 2288 */
	0x00070004, /* Controller 7, led 80, offset 4 */
	0x000808f8, /* Controller 8, led 80, offset 2296 */
	0x00090900, /* Controller 9, led 80, offset 2304 */
	0x00000888, /* Controller 0, led 81, offset 2184 */
	0x00010004, /* Controller 1, led 81, offset 4 */
	0x00020890, /* Controller 2, led 81, offset 2192 */
	0x00030898, /* Controller 3, led 81, offset 2200 */
	0x000408a0, /* Controller 4, led 81, offset 2208 */
	0x000508a8, /* Controller 5, led 81, offset 2216 */
	0x000608b0, /* Controller 6, led 81, offset 2224 */
	0x00070004, /* Controller 7, led 81, offset 4 */
	0x000808b8, /* Controller 8, led 81, offset 2232 */
	0x000908c0, /* Controller 9, led 81, offset 2240 */
	0x00000848, /* Controller 0, led 82, offset 2120 */
	0x00010004, /* Controller 1, led 82, offset 4 */
	0x00020850, /* Controller 2, led 82, offset 2128 */
	0x00030858, /* Controller 3, led 82, offset 2136 */
	0x00040860, /* Controller 4, led 82, offset 2144 */
	0x00050868, /* Controller 5, led 82, offset 2152 */
	0x00060870, /* Controller 6, led 82, offset 2160 */
	0x00070004, /* Controller 7, led 82, offset 4 */
	0x00080878, /* Controller 8, led 82, offset 2168 */
	0x00090880, /* Controller 9, led 82, offset 2176 */
	0x00000808, /* Controller 0, led 83, offset 2056 */
	0x00010004, /* Controller 1, led 83, offset 4 */
	0x00020810, /* Controller 2, led 83, offset 2064 */
	0x00030818, /* Controller 3, led 83, offset 2072 */
	0x00040820, /* Controller 4, led 83, offset 2080 */
	0x00050828, /* Controller 5, led 83, offset 2088 */
	0x00060830, /* Controller 6, led 83, offset 2096 */
	0x00070004, /* Controller 7, led 83, offset 4 */
	0x00080838, /* Controller 8, led 83, offset 2104 */
	0x00090840, /* Controller 9, led 83, offset 2112 */
	0x000007c8, /* Controller 0, led 84, offset 1992 */
	0x00010004, /* Controller 1, led 84, offset 4 */
	0x000207d0, /* Controller 2, led 84, offset 2000 */
	0x000307d8, /* Controller 3, led 84, offset 2008 */
	0x000407e0, /* Controller 4, led 84, offset 2016 */
	0x000507e8, /* Controller 5, led 84, offset 2024 */
	0x000607f0, /* Controller 6, led 84, offset 2032 */
	0x00070004, /* Controller 7, led 84, offset 4 */
	0x000807f8, /* Controller 8, led 84, offset 2040 */
	0x00090800, /* Controller 9, led 84, offset 2048 */
	0x00000788, /* Controller 0, led 85, offset 1928 */
	0x00010004, /* Controller 1, led 85, offset 4 */
	0x00020790, /* Controller 2, led 85, offset 1936 */
	0x00030798, /* Controller 3, led 85, offset 1944 */
	0x000407a0, /* Controller 4, led 85, offset 1952 */
	0x000507a8, /* Controller 5, led 85, offset 1960 */
	0x000607b0, /* Controller 6, led 85, offset 1968 */
	0x00070004, /* Controller 7, led 85, offset 4 */
	0x000807b8, /* Controller 8, led 85, offset 1976 */
	0x000907c0, /* Controller 9, led 85, offset 1984 */
	0x00000748, /* Controller 0, led 86, offset 1864 */
	0x00010004, /* Controller 1, led 86, offset 4 */
	0x00020750, /* Controller 2, led 86, offset 1872 */
	0x00030758, /* Controller 3, led 86, offset 1880 */
	0x00040760, /* Controller 4, led 86, offset 1888 */
	0x00050768, /* Controller 5, led 86, offset 1896 */
	0x00060770, /* Controller 6, led 86, offset 1904 */
	0x00070004, /* Controller 7, led 86, offset 4 */
	0x00080778, /* Controller 8, led 86, offset 1912 */
	0x00090780, /* Controller 9, led 86, offset 1920 */
	0x00000708, /* Controller 0, led 87, offset 1800 */
	0x00010004, /* Controller 1, led 87, offset 4 */
	0x00020710, /* Controller 2, led 87, offset 1808 */
	0x00030718, /* Controller 3, led 87, offset 1816 */
	0x00040720, /* Controller 4, led 87, offset 1824 */
	0x00050728, /* Controller 5, led 87, offset 1832 */
	0x00060730, /* Controller 6, led 87, offset 1840 */
	0x00070004, /* Controller 7, led 87, offset 4 */
	0x00080738, /* Controller 8, led 87, offset 1848 */
	0x00090740, /* Controller 9, led 87, offset 1856 */
	0x000006c8, /* Controller 0, led 88, offset 1736 */
	0x00010004, /* Controller 1, led 88, offset 4 */
	0x000206d0, /* Controller 2, led 88, offset 1744 */
	0x000306d8, /* Controller 3, led 88, offset 1752 */
	0x000406e0, /* Controller 4, led 88, offset 1760 */
	0x000506e8, /* Controller 5, led 88, offset 1768 */
	0x000606f0, /* Controller 6, led 88, offset 1776 */
	0x00070004, /* Controller 7, led 88, offset 4 */
	0x000806f8, /* Controller 8, led 88, offset 1784 */
	0x00090700, /* Controller 9, led 88, offset 1792 */
	0x00000688, /* Controller 0, led 89, offset 1672 */
	0x00010004, /* Controller 1, led 89, offset 4 */
	0x00020690, /* Controller 2, led 89, offset 1680 */
	0x00030698, /* Controller 3, led 89, offset 1688 */
	0x000406a0, /* Controller 4, led 89, offset 1696 */
	0x000506a8, /* Controller 5, led 89, offset 1704 */
	0x000606b0, /* Controller 6, led 89, offset 1712 */
	0x00070004, /* Controller 7, led 89, offset 4 */
	0x000806b8, /* Controller 8, led 89, offset 1720 */
	0x000906c0, /* Controller 9, led 89, offset 1728 */
	0x00000648, /* Controller 0, led 90, offset 1608 */
	0x00010004, /* Controller 1, led 90, offset 4 */
	0x00020650, /* Controller 2, led 90, offset 1616 */
	0x00030658, /* Controller 3, led 90, offset 1624 */
	0x00040660, /* Controller 4, led 90, offset 1632 */
	0x00050668, /* Controller 5, led 90, offset 1640 */
	0x00060670, /* Controller 6, led 90, offset 1648 */
	0x00070004, /* Controller 7, led 90, offset 4 */
	0x00080678, /* Controller 8, led 90, offset 1656 */
	0x00090680, /* Controller 9, led 90, offset 1664 */
	0x00000608, /* Controller 0, led 91, offset 1544 */
	0x00010004, /* Controller 1, led 91, offset 4 */
	0x00020610, /* Controller 2, led 91, offset 1552 */
	0x00030618, /* Controller 3, led 91, offset 1560 */
	0x00040620, /* Controller 4, led 91, offset 1568 */
	0x00050628, /* Controller 5, led 91, offset 1576 */
	0x00060630, /* Controller 6, led 91, offset 1584 */
	0x00070004, /* Controller 7, led 91, offset 4 */
	0x00080638, /* Controller 8, led 91, offset 1592 */
	0x00090640, /* Controller 9, led 91, offset 1600 */
	0x000005c8, /* Controller 0, led 92, offset 1480 */
	0x00010004, /* Controller 1, led 92, offset 4 */
	0x000205d0, /* Controller 2, led 92, offset 1488 */
	0x000305d8, /* Controller 3, led 92, offset 1496 */
	0x000405e0, /* Controller 4, led 92, offset 1504 */
	0x000505e8, /* Controller 5, led 92, offset 1512 */
	0x000605f0, /* Controller 6, led 92, offset 1520 */
	0x00070004, /* Controller 7, led 92, offset 4 */
	0x000805f8, /* Controller 8, led 92, offset 1528 */
	0x00090600, /* Controller 9, led 92, offset 1536 */
	0x00000588, /* Controller 0, led 93, offset 1416 */
	0x00010004, /* Controller 1, led 93, offset 4 */
	0x00020590, /* Controller 2, led 93, offset 1424 */
	0x00030598, /* Controller 3, led 93, offset 1432 */
	0x000405a0, /* Controller 4, led 93, offset 1440 */
	0x000505a8, /* Controller 5, led 93, offset 1448 */
	0x000605b0, /* Controller 6, led 93, offset 1456 */
	0x00070004, /* Controller 7, led 93, offset 4 */
	0x000805b8, /* Controller 8, led 93, offset 1464 */
	0x000905c0, /* Controller 9, led 93, offset 1472 */
	0x00000548, /* Controller 0, led 94, offset 1352 */
	0x00010004, /* Controller 1, led 94, offset 4 */
	0x00020550, /* Controller 2, led 94, offset 1360 */
	0x00030558, /* Controller 3, led 94, offset 1368 */
	0x00040560, /* Controller 4, led 94, offset 1376 */
	0x00050568, /* Controller 5, led 94, offset 1384 */
	0x00060570, /* Controller 6, led 94, offset 1392 */
	0x00070004, /* Controller 7, led 94, offset 4 */
	0x00080578, /* Controller 8, led 94, offset 1400 */
	0x00090580, /* Controller 9, led 94, offset 1408 */
	0x00000508, /* Controller 0, led 95, offset 1288 */
	0x00010004, /* Controller 1, led 95, offset 4 */
	0x00020510, /* Controller 2, led 95, offset 1296 */
	0x00030518, /* Controller 3, led 95, offset 1304 */
	0x00040520, /* Controller 4, led 95, offset 1312 */
	0x00050528, /* Controller 5, led 95, offset 1320 */
	0x00060530, /* Controller 6, led 95, offset 1328 */
	0x00070004, /* Controller 7, led 95, offset 4 */
	0x00080538, /* Controller 8, led 95, offset 1336 */
	0x00090540, /* Controller 9, led 95, offset 1344 */
	0x000004c8, /* Controller 0, led 96, offset 1224 */
	0x00010004, /* Controller 1, led 96, offset 4 */
	0x000204d0, /* Controller 2, led 96, offset 1232 */
	0x000304d8, /* Controller 3, led 96, offset 1240 */
	0x000404e0, /* Controller 4, led 96, offset 1248 */
	0x000504e8, /* Controller 5, led 96, offset 1256 */
	0x000604f0, /* Controller 6, led 96, offset 1264 */
	0x00070004, /* Controller 7, led 96, offset 4 */
	0x000804f8, /* Controller 8, led 96, offset 1272 */
	0x00090500, /* Controller 9, led 96, offset 1280 */
	0x00000488, /* Controller 0, led 97, offset 1160 */
	0x00010004, /* Controller 1, led 97, offset 4 */
	0x00020490, /* Controller 2, led 97, offset 1168 */
	0x00030498, /* Controller 3, led 97, offset 1176 */
	0x000404a0, /* Controller 4, led 97, offset 1184 */
	0x000504a8, /* Controller 5, led 97, offset 1192 */
	0x000604b0, /* Controller 6, led 97, offset 1200 */
	0x00070004, /* Controller 7, led 97, offset 4 */
	0x000804b8, /* Controller 8, led 97, offset 1208 */
	0x000904c0, /* Controller 9, led 97, offset 1216 */
	0x00000448, /* Controller 0, led 98, offset 1096 */
	0x00010004, /* Controller 1, led 98, offset 4 */
	0x00020450, /* Controller 2, led 98, offset 1104 */
	0x00030458, /* Controller 3, led 98, offset 1112 */
	0x00040460, /* Controller 4, led 98, offset 1120 */
	0x00050468, /* Controller 5, led 98, offset 1128 */
	0x00060470, /* Controller 6, led 98, offset 1136 */
	0x00070004, /* Controller 7, led 98, offset 4 */
	0x00080478, /* Controller 8, led 98, offset 1144 */
	0x00090480, /* Controller 9, led 98, offset 1152 */
	0x00000408, /* Controller 0, led 99, offset 1032 */
	0x00010004, /* Controller 1, led 99, offset 4 */
	0x00020410, /* Controller 2, led 99, offset 1040 */
	0x00030418, /* Controller 3, led 99, offset 1048 */
	0x00040420, /* Controller 4, led 99, offset 1056 */
	0x00050428, /* Controller 5, led 99, offset 1064 */
	0x00060430, /* Controller 6, led 99, offset 1072 */
	0x00070004, /* Controller 7, led 99, offset 4 */
	0x00080438, /* Controller 8, led 99, offset 1080 */
	0x00090440, /* Controller 9, led 99, offset 1088 */
	0x000003c8, /* Controller 0, led 100, offset 968 */
	0x00010004, /* Controller 1, led 100, offset 4 */
	0x000203d0, /* Controller 2, led 100, offset 976 */
	0x000303d8, /* Controller 3, led 100, offset 984 */
	0x000403e0, /* Controller 4, led 100, offset 992 */
	0x000503e8, /* Controller 5, led 100, offset 1000 */
	0x000603f0, /* Controller 6, led 100, offset 1008 */
	0x00070004, /* Controller 7, led 100, offset 4 */
	0x000803f8, /* Controller 8, led 100, offset 1016 */
	0x00090400, /* Controller 9, led 100, offset 1024 */
	0x00000388, /* Controller 0, led 101, offset 904 */
	0x00010004, /* Controller 1, led 101, offset 4 */
	0x00020390, /* Controller 2, led 101, offset 912 */
	0x00030398, /* Controller 3, led 101, offset 920 */
	0x000403a0, /* Controller 4, led 101, offset 928 */
	0x000503a8, /* Controller 5, led 101, offset 936 */
	0x000603b0, /* Controller 6, led 101, offset 944 */
	0x00070004, /* Controller 7, led 101, offset 4 */
	0x000803b8, /* Controller 8, led 101, offset 952 */
	0x000903c0, /* Controller 9, led 101, offset 960 */
	0x00000348, /* Controller 0, led 102, offset 840 */
	0x00010004, /* Controller 1, led 102, offset 4 */
	0x00020350, /* Controller 2, led 102, offset 848 */
	0x00030358, /* Controller 3, led 102, offset 856 */
	0x00040360, /* Controller 4, led 102, offset 864 */
	0x00050368, /* Controller 5, led 102, offset 872 */
	0x00060370, /* Controller 6, led 102, offset 880 */
	0x00070004, /* Controller 7, led 102, offset 4 */
	0x00080378, /* Controller 8, led 102, offset 888 */
	0x00090380, /* Controller 9, led 102, offset 896 */
	0x00000308, /* Controller 0, led 103, offset 776 */
	0x00010004, /* Controller 1, led 103, offset 4 */
	0x00020310, /* Controller 2, led 103, offset 784 */
	0x00030318, /* Controller 3, led 103, offset 792 */
	0x00040320, /* Controller 4, led 103, offset 800 */
	0x00050328, /* Controller 5, led 103, offset 808 */
	0x00060330, /* Controller 6, led 103, offset 816 */
	0x00070004, /* Controller 7, led 103, offset 4 */
	0x00080338, /* Controller 8, led 103, offset 824 */
	0x00090340, /* Controller 9, led 103, offset 832 */
	0x000002c8, /* Controller 0, led 104, offset 712 */
	0x00010004, /* Controller 1, led 104, offset 4 */
	0x000202d0, /* Controller 2, led 104, offset 720 */
	0x000302d8, /* Controller 3, led 104, offset 728 */
	0x000402e0, /* Controller 4, led 104, offset 736 */
	0x000502e8, /* Controller 5, led 104, offset 744 */
	0x000602f0, /* Controller 6, led 104, offset 752 */
	0x00070004, /* Controller 7, led 104, offset 4 */
	0x000802f8, /* Controller 8, led 104, offset 760 */
	0x00090300, /* Controller 9, led 104, offset 768 */
	0x00000288, /* Controller 0, led 105, offset 648 */
	0x00010004, /* Controller 1, led 105, offset 4 */
	0x00020290, /* Controller 2, led 105, offset 656 */
	0x00030298, /* Controller 3, led 105, offset 664 */
	0x000402a0, /* Controller 4, led 105, offset 672 */
	0x000502a8, /* Controller 5, led 105, offset 680 */
	0x000602b0, /* Controller 6, led 105, offset 688 */
	0x00070004, /* Controller 7, led 105, offset 4 */
	0x000802b8, /* Controller 8, led 105, offset 696 */
	0x000902c0, /* Controller 9, led 105, offset 704 */
	0x00000248, /* Controller 0, led 106, offset 584 */
	0x00010004, /* Controller 1, led 106, offset 4 */
	0x00020250, /* Controller 2, led 106, offset 592 */
	0x00030258, /* Controller 3, led 106, offset 600 */
	0x00040260, /* Controller 4, led 106, offset 608 */
	0x00050268, /* Controller 5, led 106, offset 616 */
	0x00060270, /* Controller 6, led 106, offset 624 */
	0x00070004, /* Controller 7, led 106, offset 4 */
	0x00080278, /* Controller 8, led 106, offset 632 */
	0x00090280, /* Controller 9, led 106, offset 640 */
	0x00000208, /* Controller 0, led 107, offset 520 */
	0x00010004, /* Controller 1, led 107, offset 4 */
	0x00020210, /* Controller 2, led 107, offset 528 */
	0x00030218, /* Controller 3, led 107, offset 536 */
	0x00040220, /* Controller 4, led 107, offset 544 */
	0x00050228, /* Controller 5, led 107, offset 552 */
	0x00060230, /* Controller 6, led 107, offset 560 */
	0x00070004, /* Controller 7, led 107, offset 4 */
	0x00080238, /* Controller 8, led 107, offset 568 */
	0x00090240, /* Controller 9, led 107, offset 576 */
	0x000001c8, /* Controller 0, led 108, offset 456 */
	0x00010004, /* Controller 1, led 108, offset 4 */
	0x000201d0, /* Controller 2, led 108, offset 464 */
	0x000301d8, /* Controller 3, led 108, offset 472 */
	0x000401e0, /* Controller 4, led 108, offset 480 */
	0x000501e8, /* Controller 5, led 108, offset 488 */
	0x000601f0, /* Controller 6, led 108, offset 496 */
	0x00070004, /* Controller 7, led 108, offset 4 */
	0x000801f8, /* Controller 8, led 108, offset 504 */
	0x00090200, /* Controller 9, led 108, offset 512 */
	0x00000188, /* Controller 0, led 109, offset 392 */
	0x00010004, /* Controller 1, led 109, offset 4 */
	0x00020190, /* Controller 2, led 109, offset 400 */
	0x00030198, /* Controller 3, led 109, offset 408 */
	0x000401a0, /* Controller 4, led 109, offset 416 */
	0x000501a8, /* Controller 5, led 109, offset 424 */
	0x000601b0, /* Controller 6, led 109, offset 432 */
	0x00070004, /* Controller 7, led 109, offset 4 */
	0x000801b8, /* Controller 8, led 109, offset 440 */
	0x000901c0, /* Controller 9, led 109, offset 448 */
	0x00000148, /* Controller 0, led 110, offset 328 */
	0x00010004, /* Controller 1, led 110, offset 4 */
	0x00020150, /* Controller 2, led 110, offset 336 */
	0x00030158, /* Controller 3, led 110, offset 344 */
	0x00040160, /* Controller 4, led 110, offset 352 */
	0x00050168, /* Controller 5, led 110, offset 360 */
	0x00060170, /* Controller 6, led 110, offset 368 */
	0x00070004, /* Controller 7, led 110, offset 4 */
	0x00080178, /* Controller 8, led 110, offset 376 */
	0x00090180, /* Controller 9, led 110, offset 384 */
	0x00000108, /* Controller 0, led 111, offset 264 */
	0x00010004, /* Controller 1, led 111, offset 4 */
	0x00020110, /* Controller 2, led 111, offset 272 */
	0x00030118, /* Controller 3, led 111, offset 280 */
	0x00040120, /* Controller 4, led 111, offset 288 */
	0x00050128, /* Controller 5, led 111, offset 296 */
	0x00060130, /* Controller 6, led 111, offset 304 */
	0x00070004, /* Controller 7, led 111, offset 4 */
	0x00080138, /* Controller 8, led 111, offset 312 */
	0x00090140, /* Controller 9, led 111, offset 320 */
	0x000000c8, /* Controller 0, led 112, offset 200 */
	0x00010004, /* Controller 1, led 112, offset 4 */
	0x000200d0, /* Controller 2, led 112, offset 208 */
	0x000300d8, /* Controller 3, led 112, offset 216 */
	0x000400e0, /* Controller 4, led 112, offset 224 */
	0x000500e8, /* Controller 5, led 112, offset 232 */
	0x000600f0, /* Controller 6, led 112, offset 240 */
	0x00070004, /* Controller 7, led 112, offset 4 */
	0x000800f8, /* Controller 8, led 112, offset 248 */
	0x00090100, /* Controller 9, led 112, offset 256 */
	0x00000088, /* Controller 0, led 113, offset 136 */
	0x00010004, /* Controller 1, led 113, offset 4 */
	0x00020090, /* Controller 2, led 113, offset 144 */
	0x00030098, /* Controller 3, led 113, offset 152 */
	0x000400a0, /* Controller 4, led 113, offset 160 */
	0x000500a8, /* Controller 5, led 113, offset 168 */
	0x000600b0, /* Controller 6, led 113, offset 176 */
	0x00070004, /* Controller 7, led 113, offset 4 */
	0x000800b8, /* Controller 8, led 113, offset 184 */
	0x000900c0, /* Controller 9, led 113, offset 192 */
	0x00000048, /* Controller 0, led 114, offset 72 */
	0x00010004, /* Controller 1, led 114, offset 4 */
	0x00020050, /* Controller 2, led 114, offset 80 */
	0x00030058, /* Controller 3, led 114, offset 88 */
	0x00040060, /* Controller 4, led 114, offset 96 */
	0x00050068, /* Controller 5, led 114, offset 104 */
	0x00060070, /* Controller 6, led 114, offset 112 */
	0x00070004, /* Controller 7, led 114, offset 4 */
	0x00080078, /* Controller 8, led 114, offset 120 */
	0x00090080, /* Controller 9, led 114, offset 128 */
	0x00000008, /* Controller 0, led 115, offset 8 */
	0x00010004, /* Controller 1, led 115, offset 4 */
	0x00020010, /* Controller 2, led 115, offset 16 */
	0x00030018, /* Controller 3, led 115, offset 24 */
	0x00040020, /* Controller 4, led 115, offset 32 */
	0x00050028, /* Controller 5, led 115, offset 40 */
	0x00060030, /* Controller 6, led 115, offset 48 */
	0x00070004, /* Controller 7, led 115, offset 4 */
	0x00080038, /* Controller 8, led 115, offset 56 */
	0x00090040, /* Controller 9, led 115, offset 64 */
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
	0x00000000,
	0x00000000,
	0x00010000,
	0x00010000,
	0x00020000,
	0x00020000,
	0x00030000,
	0x00030000,
	0x00040000,
	0x00040000,
	0x00050000,
	0x00050000,
	0x00060000,
	0x00060000,
	0x00070000,
	0x00070000,
	0x00080000,
	0x00080000,
	0x00090000,
	0x00090000
};
