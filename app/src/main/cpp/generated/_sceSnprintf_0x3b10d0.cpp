#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceSnprintf
// Address: 0x3b10d0 - 0x3b1de8
void _sceSnprintf_0x3b10d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSnprintf_0x3b10d0");
#endif

    switch (ctx->pc) {
        case 0x3b10d0u: goto label_3b10d0;
        case 0x3b10d4u: goto label_3b10d4;
        case 0x3b10d8u: goto label_3b10d8;
        case 0x3b10dcu: goto label_3b10dc;
        case 0x3b10e0u: goto label_3b10e0;
        case 0x3b10e4u: goto label_3b10e4;
        case 0x3b10e8u: goto label_3b10e8;
        case 0x3b10ecu: goto label_3b10ec;
        case 0x3b10f0u: goto label_3b10f0;
        case 0x3b10f4u: goto label_3b10f4;
        case 0x3b10f8u: goto label_3b10f8;
        case 0x3b10fcu: goto label_3b10fc;
        case 0x3b1100u: goto label_3b1100;
        case 0x3b1104u: goto label_3b1104;
        case 0x3b1108u: goto label_3b1108;
        case 0x3b110cu: goto label_3b110c;
        case 0x3b1110u: goto label_3b1110;
        case 0x3b1114u: goto label_3b1114;
        case 0x3b1118u: goto label_3b1118;
        case 0x3b111cu: goto label_3b111c;
        case 0x3b1120u: goto label_3b1120;
        case 0x3b1124u: goto label_3b1124;
        case 0x3b1128u: goto label_3b1128;
        case 0x3b112cu: goto label_3b112c;
        case 0x3b1130u: goto label_3b1130;
        case 0x3b1134u: goto label_3b1134;
        case 0x3b1138u: goto label_3b1138;
        case 0x3b113cu: goto label_3b113c;
        case 0x3b1140u: goto label_3b1140;
        case 0x3b1144u: goto label_3b1144;
        case 0x3b1148u: goto label_3b1148;
        case 0x3b114cu: goto label_3b114c;
        case 0x3b1150u: goto label_3b1150;
        case 0x3b1154u: goto label_3b1154;
        case 0x3b1158u: goto label_3b1158;
        case 0x3b115cu: goto label_3b115c;
        case 0x3b1160u: goto label_3b1160;
        case 0x3b1164u: goto label_3b1164;
        case 0x3b1168u: goto label_3b1168;
        case 0x3b116cu: goto label_3b116c;
        case 0x3b1170u: goto label_3b1170;
        case 0x3b1174u: goto label_3b1174;
        case 0x3b1178u: goto label_3b1178;
        case 0x3b117cu: goto label_3b117c;
        case 0x3b1180u: goto label_3b1180;
        case 0x3b1184u: goto label_3b1184;
        case 0x3b1188u: goto label_3b1188;
        case 0x3b118cu: goto label_3b118c;
        case 0x3b1190u: goto label_3b1190;
        case 0x3b1194u: goto label_3b1194;
        case 0x3b1198u: goto label_3b1198;
        case 0x3b119cu: goto label_3b119c;
        case 0x3b11a0u: goto label_3b11a0;
        case 0x3b11a4u: goto label_3b11a4;
        case 0x3b11a8u: goto label_3b11a8;
        case 0x3b11acu: goto label_3b11ac;
        case 0x3b11b0u: goto label_3b11b0;
        case 0x3b11b4u: goto label_3b11b4;
        case 0x3b11b8u: goto label_3b11b8;
        case 0x3b11bcu: goto label_3b11bc;
        case 0x3b11c0u: goto label_3b11c0;
        case 0x3b11c4u: goto label_3b11c4;
        case 0x3b11c8u: goto label_3b11c8;
        case 0x3b11ccu: goto label_3b11cc;
        case 0x3b11d0u: goto label_3b11d0;
        case 0x3b11d4u: goto label_3b11d4;
        case 0x3b11d8u: goto label_3b11d8;
        case 0x3b11dcu: goto label_3b11dc;
        case 0x3b11e0u: goto label_3b11e0;
        case 0x3b11e4u: goto label_3b11e4;
        case 0x3b11e8u: goto label_3b11e8;
        case 0x3b11ecu: goto label_3b11ec;
        case 0x3b11f0u: goto label_3b11f0;
        case 0x3b11f4u: goto label_3b11f4;
        case 0x3b11f8u: goto label_3b11f8;
        case 0x3b11fcu: goto label_3b11fc;
        case 0x3b1200u: goto label_3b1200;
        case 0x3b1204u: goto label_3b1204;
        case 0x3b1208u: goto label_3b1208;
        case 0x3b120cu: goto label_3b120c;
        case 0x3b1210u: goto label_3b1210;
        case 0x3b1214u: goto label_3b1214;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b121cu: goto label_3b121c;
        case 0x3b1220u: goto label_3b1220;
        case 0x3b1224u: goto label_3b1224;
        case 0x3b1228u: goto label_3b1228;
        case 0x3b122cu: goto label_3b122c;
        case 0x3b1230u: goto label_3b1230;
        case 0x3b1234u: goto label_3b1234;
        case 0x3b1238u: goto label_3b1238;
        case 0x3b123cu: goto label_3b123c;
        case 0x3b1240u: goto label_3b1240;
        case 0x3b1244u: goto label_3b1244;
        case 0x3b1248u: goto label_3b1248;
        case 0x3b124cu: goto label_3b124c;
        case 0x3b1250u: goto label_3b1250;
        case 0x3b1254u: goto label_3b1254;
        case 0x3b1258u: goto label_3b1258;
        case 0x3b125cu: goto label_3b125c;
        case 0x3b1260u: goto label_3b1260;
        case 0x3b1264u: goto label_3b1264;
        case 0x3b1268u: goto label_3b1268;
        case 0x3b126cu: goto label_3b126c;
        case 0x3b1270u: goto label_3b1270;
        case 0x3b1274u: goto label_3b1274;
        case 0x3b1278u: goto label_3b1278;
        case 0x3b127cu: goto label_3b127c;
        case 0x3b1280u: goto label_3b1280;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b1288u: goto label_3b1288;
        case 0x3b128cu: goto label_3b128c;
        case 0x3b1290u: goto label_3b1290;
        case 0x3b1294u: goto label_3b1294;
        case 0x3b1298u: goto label_3b1298;
        case 0x3b129cu: goto label_3b129c;
        case 0x3b12a0u: goto label_3b12a0;
        case 0x3b12a4u: goto label_3b12a4;
        case 0x3b12a8u: goto label_3b12a8;
        case 0x3b12acu: goto label_3b12ac;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12b4u: goto label_3b12b4;
        case 0x3b12b8u: goto label_3b12b8;
        case 0x3b12bcu: goto label_3b12bc;
        case 0x3b12c0u: goto label_3b12c0;
        case 0x3b12c4u: goto label_3b12c4;
        case 0x3b12c8u: goto label_3b12c8;
        case 0x3b12ccu: goto label_3b12cc;
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        case 0x3b1328u: goto label_3b1328;
        case 0x3b132cu: goto label_3b132c;
        case 0x3b1330u: goto label_3b1330;
        case 0x3b1334u: goto label_3b1334;
        case 0x3b1338u: goto label_3b1338;
        case 0x3b133cu: goto label_3b133c;
        case 0x3b1340u: goto label_3b1340;
        case 0x3b1344u: goto label_3b1344;
        case 0x3b1348u: goto label_3b1348;
        case 0x3b134cu: goto label_3b134c;
        case 0x3b1350u: goto label_3b1350;
        case 0x3b1354u: goto label_3b1354;
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        case 0x3b1468u: goto label_3b1468;
        case 0x3b146cu: goto label_3b146c;
        case 0x3b1470u: goto label_3b1470;
        case 0x3b1474u: goto label_3b1474;
        case 0x3b1478u: goto label_3b1478;
        case 0x3b147cu: goto label_3b147c;
        case 0x3b1480u: goto label_3b1480;
        case 0x3b1484u: goto label_3b1484;
        case 0x3b1488u: goto label_3b1488;
        case 0x3b148cu: goto label_3b148c;
        case 0x3b1490u: goto label_3b1490;
        case 0x3b1494u: goto label_3b1494;
        case 0x3b1498u: goto label_3b1498;
        case 0x3b149cu: goto label_3b149c;
        case 0x3b14a0u: goto label_3b14a0;
        case 0x3b14a4u: goto label_3b14a4;
        case 0x3b14a8u: goto label_3b14a8;
        case 0x3b14acu: goto label_3b14ac;
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14b8u: goto label_3b14b8;
        case 0x3b14bcu: goto label_3b14bc;
        case 0x3b14c0u: goto label_3b14c0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14c8u: goto label_3b14c8;
        case 0x3b14ccu: goto label_3b14cc;
        case 0x3b14d0u: goto label_3b14d0;
        case 0x3b14d4u: goto label_3b14d4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14dcu: goto label_3b14dc;
        case 0x3b14e0u: goto label_3b14e0;
        case 0x3b14e4u: goto label_3b14e4;
        case 0x3b14e8u: goto label_3b14e8;
        case 0x3b14ecu: goto label_3b14ec;
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        case 0x3b1648u: goto label_3b1648;
        case 0x3b164cu: goto label_3b164c;
        case 0x3b1650u: goto label_3b1650;
        case 0x3b1654u: goto label_3b1654;
        case 0x3b1658u: goto label_3b1658;
        case 0x3b165cu: goto label_3b165c;
        case 0x3b1660u: goto label_3b1660;
        case 0x3b1664u: goto label_3b1664;
        case 0x3b1668u: goto label_3b1668;
        case 0x3b166cu: goto label_3b166c;
        case 0x3b1670u: goto label_3b1670;
        case 0x3b1674u: goto label_3b1674;
        case 0x3b1678u: goto label_3b1678;
        case 0x3b167cu: goto label_3b167c;
        case 0x3b1680u: goto label_3b1680;
        case 0x3b1684u: goto label_3b1684;
        case 0x3b1688u: goto label_3b1688;
        case 0x3b168cu: goto label_3b168c;
        case 0x3b1690u: goto label_3b1690;
        case 0x3b1694u: goto label_3b1694;
        case 0x3b1698u: goto label_3b1698;
        case 0x3b169cu: goto label_3b169c;
        case 0x3b16a0u: goto label_3b16a0;
        case 0x3b16a4u: goto label_3b16a4;
        case 0x3b16a8u: goto label_3b16a8;
        case 0x3b16acu: goto label_3b16ac;
        case 0x3b16b0u: goto label_3b16b0;
        case 0x3b16b4u: goto label_3b16b4;
        case 0x3b16b8u: goto label_3b16b8;
        case 0x3b16bcu: goto label_3b16bc;
        case 0x3b16c0u: goto label_3b16c0;
        case 0x3b16c4u: goto label_3b16c4;
        case 0x3b16c8u: goto label_3b16c8;
        case 0x3b16ccu: goto label_3b16cc;
        case 0x3b16d0u: goto label_3b16d0;
        case 0x3b16d4u: goto label_3b16d4;
        case 0x3b16d8u: goto label_3b16d8;
        case 0x3b16dcu: goto label_3b16dc;
        case 0x3b16e0u: goto label_3b16e0;
        case 0x3b16e4u: goto label_3b16e4;
        case 0x3b16e8u: goto label_3b16e8;
        case 0x3b16ecu: goto label_3b16ec;
        case 0x3b16f0u: goto label_3b16f0;
        case 0x3b16f4u: goto label_3b16f4;
        case 0x3b16f8u: goto label_3b16f8;
        case 0x3b16fcu: goto label_3b16fc;
        case 0x3b1700u: goto label_3b1700;
        case 0x3b1704u: goto label_3b1704;
        case 0x3b1708u: goto label_3b1708;
        case 0x3b170cu: goto label_3b170c;
        case 0x3b1710u: goto label_3b1710;
        case 0x3b1714u: goto label_3b1714;
        case 0x3b1718u: goto label_3b1718;
        case 0x3b171cu: goto label_3b171c;
        case 0x3b1720u: goto label_3b1720;
        case 0x3b1724u: goto label_3b1724;
        case 0x3b1728u: goto label_3b1728;
        case 0x3b172cu: goto label_3b172c;
        case 0x3b1730u: goto label_3b1730;
        case 0x3b1734u: goto label_3b1734;
        case 0x3b1738u: goto label_3b1738;
        case 0x3b173cu: goto label_3b173c;
        case 0x3b1740u: goto label_3b1740;
        case 0x3b1744u: goto label_3b1744;
        case 0x3b1748u: goto label_3b1748;
        case 0x3b174cu: goto label_3b174c;
        case 0x3b1750u: goto label_3b1750;
        case 0x3b1754u: goto label_3b1754;
        case 0x3b1758u: goto label_3b1758;
        case 0x3b175cu: goto label_3b175c;
        case 0x3b1760u: goto label_3b1760;
        case 0x3b1764u: goto label_3b1764;
        case 0x3b1768u: goto label_3b1768;
        case 0x3b176cu: goto label_3b176c;
        case 0x3b1770u: goto label_3b1770;
        case 0x3b1774u: goto label_3b1774;
        case 0x3b1778u: goto label_3b1778;
        case 0x3b177cu: goto label_3b177c;
        case 0x3b1780u: goto label_3b1780;
        case 0x3b1784u: goto label_3b1784;
        case 0x3b1788u: goto label_3b1788;
        case 0x3b178cu: goto label_3b178c;
        case 0x3b1790u: goto label_3b1790;
        case 0x3b1794u: goto label_3b1794;
        case 0x3b1798u: goto label_3b1798;
        case 0x3b179cu: goto label_3b179c;
        case 0x3b17a0u: goto label_3b17a0;
        case 0x3b17a4u: goto label_3b17a4;
        case 0x3b17a8u: goto label_3b17a8;
        case 0x3b17acu: goto label_3b17ac;
        case 0x3b17b0u: goto label_3b17b0;
        case 0x3b17b4u: goto label_3b17b4;
        case 0x3b17b8u: goto label_3b17b8;
        case 0x3b17bcu: goto label_3b17bc;
        case 0x3b17c0u: goto label_3b17c0;
        case 0x3b17c4u: goto label_3b17c4;
        case 0x3b17c8u: goto label_3b17c8;
        case 0x3b17ccu: goto label_3b17cc;
        case 0x3b17d0u: goto label_3b17d0;
        case 0x3b17d4u: goto label_3b17d4;
        case 0x3b17d8u: goto label_3b17d8;
        case 0x3b17dcu: goto label_3b17dc;
        case 0x3b17e0u: goto label_3b17e0;
        case 0x3b17e4u: goto label_3b17e4;
        case 0x3b17e8u: goto label_3b17e8;
        case 0x3b17ecu: goto label_3b17ec;
        case 0x3b17f0u: goto label_3b17f0;
        case 0x3b17f4u: goto label_3b17f4;
        case 0x3b17f8u: goto label_3b17f8;
        case 0x3b17fcu: goto label_3b17fc;
        case 0x3b1800u: goto label_3b1800;
        case 0x3b1804u: goto label_3b1804;
        case 0x3b1808u: goto label_3b1808;
        case 0x3b180cu: goto label_3b180c;
        case 0x3b1810u: goto label_3b1810;
        case 0x3b1814u: goto label_3b1814;
        case 0x3b1818u: goto label_3b1818;
        case 0x3b181cu: goto label_3b181c;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b1824u: goto label_3b1824;
        case 0x3b1828u: goto label_3b1828;
        case 0x3b182cu: goto label_3b182c;
        case 0x3b1830u: goto label_3b1830;
        case 0x3b1834u: goto label_3b1834;
        case 0x3b1838u: goto label_3b1838;
        case 0x3b183cu: goto label_3b183c;
        case 0x3b1840u: goto label_3b1840;
        case 0x3b1844u: goto label_3b1844;
        case 0x3b1848u: goto label_3b1848;
        case 0x3b184cu: goto label_3b184c;
        case 0x3b1850u: goto label_3b1850;
        case 0x3b1854u: goto label_3b1854;
        case 0x3b1858u: goto label_3b1858;
        case 0x3b185cu: goto label_3b185c;
        case 0x3b1860u: goto label_3b1860;
        case 0x3b1864u: goto label_3b1864;
        case 0x3b1868u: goto label_3b1868;
        case 0x3b186cu: goto label_3b186c;
        case 0x3b1870u: goto label_3b1870;
        case 0x3b1874u: goto label_3b1874;
        case 0x3b1878u: goto label_3b1878;
        case 0x3b187cu: goto label_3b187c;
        case 0x3b1880u: goto label_3b1880;
        case 0x3b1884u: goto label_3b1884;
        case 0x3b1888u: goto label_3b1888;
        case 0x3b188cu: goto label_3b188c;
        case 0x3b1890u: goto label_3b1890;
        case 0x3b1894u: goto label_3b1894;
        case 0x3b1898u: goto label_3b1898;
        case 0x3b189cu: goto label_3b189c;
        case 0x3b18a0u: goto label_3b18a0;
        case 0x3b18a4u: goto label_3b18a4;
        case 0x3b18a8u: goto label_3b18a8;
        case 0x3b18acu: goto label_3b18ac;
        case 0x3b18b0u: goto label_3b18b0;
        case 0x3b18b4u: goto label_3b18b4;
        case 0x3b18b8u: goto label_3b18b8;
        case 0x3b18bcu: goto label_3b18bc;
        case 0x3b18c0u: goto label_3b18c0;
        case 0x3b18c4u: goto label_3b18c4;
        case 0x3b18c8u: goto label_3b18c8;
        case 0x3b18ccu: goto label_3b18cc;
        case 0x3b18d0u: goto label_3b18d0;
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b18d8u: goto label_3b18d8;
        case 0x3b18dcu: goto label_3b18dc;
        case 0x3b18e0u: goto label_3b18e0;
        case 0x3b18e4u: goto label_3b18e4;
        case 0x3b18e8u: goto label_3b18e8;
        case 0x3b18ecu: goto label_3b18ec;
        case 0x3b18f0u: goto label_3b18f0;
        case 0x3b18f4u: goto label_3b18f4;
        case 0x3b18f8u: goto label_3b18f8;
        case 0x3b18fcu: goto label_3b18fc;
        case 0x3b1900u: goto label_3b1900;
        case 0x3b1904u: goto label_3b1904;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b190cu: goto label_3b190c;
        case 0x3b1910u: goto label_3b1910;
        case 0x3b1914u: goto label_3b1914;
        case 0x3b1918u: goto label_3b1918;
        case 0x3b191cu: goto label_3b191c;
        case 0x3b1920u: goto label_3b1920;
        case 0x3b1924u: goto label_3b1924;
        case 0x3b1928u: goto label_3b1928;
        case 0x3b192cu: goto label_3b192c;
        case 0x3b1930u: goto label_3b1930;
        case 0x3b1934u: goto label_3b1934;
        case 0x3b1938u: goto label_3b1938;
        case 0x3b193cu: goto label_3b193c;
        case 0x3b1940u: goto label_3b1940;
        case 0x3b1944u: goto label_3b1944;
        case 0x3b1948u: goto label_3b1948;
        case 0x3b194cu: goto label_3b194c;
        case 0x3b1950u: goto label_3b1950;
        case 0x3b1954u: goto label_3b1954;
        case 0x3b1958u: goto label_3b1958;
        case 0x3b195cu: goto label_3b195c;
        case 0x3b1960u: goto label_3b1960;
        case 0x3b1964u: goto label_3b1964;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b196cu: goto label_3b196c;
        case 0x3b1970u: goto label_3b1970;
        case 0x3b1974u: goto label_3b1974;
        case 0x3b1978u: goto label_3b1978;
        case 0x3b197cu: goto label_3b197c;
        case 0x3b1980u: goto label_3b1980;
        case 0x3b1984u: goto label_3b1984;
        case 0x3b1988u: goto label_3b1988;
        case 0x3b198cu: goto label_3b198c;
        case 0x3b1990u: goto label_3b1990;
        case 0x3b1994u: goto label_3b1994;
        case 0x3b1998u: goto label_3b1998;
        case 0x3b199cu: goto label_3b199c;
        case 0x3b19a0u: goto label_3b19a0;
        case 0x3b19a4u: goto label_3b19a4;
        case 0x3b19a8u: goto label_3b19a8;
        case 0x3b19acu: goto label_3b19ac;
        case 0x3b19b0u: goto label_3b19b0;
        case 0x3b19b4u: goto label_3b19b4;
        case 0x3b19b8u: goto label_3b19b8;
        case 0x3b19bcu: goto label_3b19bc;
        case 0x3b19c0u: goto label_3b19c0;
        case 0x3b19c4u: goto label_3b19c4;
        case 0x3b19c8u: goto label_3b19c8;
        case 0x3b19ccu: goto label_3b19cc;
        case 0x3b19d0u: goto label_3b19d0;
        case 0x3b19d4u: goto label_3b19d4;
        case 0x3b19d8u: goto label_3b19d8;
        case 0x3b19dcu: goto label_3b19dc;
        case 0x3b19e0u: goto label_3b19e0;
        case 0x3b19e4u: goto label_3b19e4;
        case 0x3b19e8u: goto label_3b19e8;
        case 0x3b19ecu: goto label_3b19ec;
        case 0x3b19f0u: goto label_3b19f0;
        case 0x3b19f4u: goto label_3b19f4;
        case 0x3b19f8u: goto label_3b19f8;
        case 0x3b19fcu: goto label_3b19fc;
        case 0x3b1a00u: goto label_3b1a00;
        case 0x3b1a04u: goto label_3b1a04;
        case 0x3b1a08u: goto label_3b1a08;
        case 0x3b1a0cu: goto label_3b1a0c;
        case 0x3b1a10u: goto label_3b1a10;
        case 0x3b1a14u: goto label_3b1a14;
        case 0x3b1a18u: goto label_3b1a18;
        case 0x3b1a1cu: goto label_3b1a1c;
        case 0x3b1a20u: goto label_3b1a20;
        case 0x3b1a24u: goto label_3b1a24;
        case 0x3b1a28u: goto label_3b1a28;
        case 0x3b1a2cu: goto label_3b1a2c;
        case 0x3b1a30u: goto label_3b1a30;
        case 0x3b1a34u: goto label_3b1a34;
        case 0x3b1a38u: goto label_3b1a38;
        case 0x3b1a3cu: goto label_3b1a3c;
        case 0x3b1a40u: goto label_3b1a40;
        case 0x3b1a44u: goto label_3b1a44;
        case 0x3b1a48u: goto label_3b1a48;
        case 0x3b1a4cu: goto label_3b1a4c;
        case 0x3b1a50u: goto label_3b1a50;
        case 0x3b1a54u: goto label_3b1a54;
        case 0x3b1a58u: goto label_3b1a58;
        case 0x3b1a5cu: goto label_3b1a5c;
        case 0x3b1a60u: goto label_3b1a60;
        case 0x3b1a64u: goto label_3b1a64;
        case 0x3b1a68u: goto label_3b1a68;
        case 0x3b1a6cu: goto label_3b1a6c;
        case 0x3b1a70u: goto label_3b1a70;
        case 0x3b1a74u: goto label_3b1a74;
        case 0x3b1a78u: goto label_3b1a78;
        case 0x3b1a7cu: goto label_3b1a7c;
        case 0x3b1a80u: goto label_3b1a80;
        case 0x3b1a84u: goto label_3b1a84;
        case 0x3b1a88u: goto label_3b1a88;
        case 0x3b1a8cu: goto label_3b1a8c;
        case 0x3b1a90u: goto label_3b1a90;
        case 0x3b1a94u: goto label_3b1a94;
        case 0x3b1a98u: goto label_3b1a98;
        case 0x3b1a9cu: goto label_3b1a9c;
        case 0x3b1aa0u: goto label_3b1aa0;
        case 0x3b1aa4u: goto label_3b1aa4;
        case 0x3b1aa8u: goto label_3b1aa8;
        case 0x3b1aacu: goto label_3b1aac;
        case 0x3b1ab0u: goto label_3b1ab0;
        case 0x3b1ab4u: goto label_3b1ab4;
        case 0x3b1ab8u: goto label_3b1ab8;
        case 0x3b1abcu: goto label_3b1abc;
        case 0x3b1ac0u: goto label_3b1ac0;
        case 0x3b1ac4u: goto label_3b1ac4;
        case 0x3b1ac8u: goto label_3b1ac8;
        case 0x3b1accu: goto label_3b1acc;
        case 0x3b1ad0u: goto label_3b1ad0;
        case 0x3b1ad4u: goto label_3b1ad4;
        case 0x3b1ad8u: goto label_3b1ad8;
        case 0x3b1adcu: goto label_3b1adc;
        case 0x3b1ae0u: goto label_3b1ae0;
        case 0x3b1ae4u: goto label_3b1ae4;
        case 0x3b1ae8u: goto label_3b1ae8;
        case 0x3b1aecu: goto label_3b1aec;
        case 0x3b1af0u: goto label_3b1af0;
        case 0x3b1af4u: goto label_3b1af4;
        case 0x3b1af8u: goto label_3b1af8;
        case 0x3b1afcu: goto label_3b1afc;
        case 0x3b1b00u: goto label_3b1b00;
        case 0x3b1b04u: goto label_3b1b04;
        case 0x3b1b08u: goto label_3b1b08;
        case 0x3b1b0cu: goto label_3b1b0c;
        case 0x3b1b10u: goto label_3b1b10;
        case 0x3b1b14u: goto label_3b1b14;
        case 0x3b1b18u: goto label_3b1b18;
        case 0x3b1b1cu: goto label_3b1b1c;
        case 0x3b1b20u: goto label_3b1b20;
        case 0x3b1b24u: goto label_3b1b24;
        case 0x3b1b28u: goto label_3b1b28;
        case 0x3b1b2cu: goto label_3b1b2c;
        case 0x3b1b30u: goto label_3b1b30;
        case 0x3b1b34u: goto label_3b1b34;
        case 0x3b1b38u: goto label_3b1b38;
        case 0x3b1b3cu: goto label_3b1b3c;
        case 0x3b1b40u: goto label_3b1b40;
        case 0x3b1b44u: goto label_3b1b44;
        case 0x3b1b48u: goto label_3b1b48;
        case 0x3b1b4cu: goto label_3b1b4c;
        case 0x3b1b50u: goto label_3b1b50;
        case 0x3b1b54u: goto label_3b1b54;
        case 0x3b1b58u: goto label_3b1b58;
        case 0x3b1b5cu: goto label_3b1b5c;
        case 0x3b1b60u: goto label_3b1b60;
        case 0x3b1b64u: goto label_3b1b64;
        case 0x3b1b68u: goto label_3b1b68;
        case 0x3b1b6cu: goto label_3b1b6c;
        case 0x3b1b70u: goto label_3b1b70;
        case 0x3b1b74u: goto label_3b1b74;
        case 0x3b1b78u: goto label_3b1b78;
        case 0x3b1b7cu: goto label_3b1b7c;
        case 0x3b1b80u: goto label_3b1b80;
        case 0x3b1b84u: goto label_3b1b84;
        case 0x3b1b88u: goto label_3b1b88;
        case 0x3b1b8cu: goto label_3b1b8c;
        case 0x3b1b90u: goto label_3b1b90;
        case 0x3b1b94u: goto label_3b1b94;
        case 0x3b1b98u: goto label_3b1b98;
        case 0x3b1b9cu: goto label_3b1b9c;
        case 0x3b1ba0u: goto label_3b1ba0;
        case 0x3b1ba4u: goto label_3b1ba4;
        case 0x3b1ba8u: goto label_3b1ba8;
        case 0x3b1bacu: goto label_3b1bac;
        case 0x3b1bb0u: goto label_3b1bb0;
        case 0x3b1bb4u: goto label_3b1bb4;
        case 0x3b1bb8u: goto label_3b1bb8;
        case 0x3b1bbcu: goto label_3b1bbc;
        case 0x3b1bc0u: goto label_3b1bc0;
        case 0x3b1bc4u: goto label_3b1bc4;
        case 0x3b1bc8u: goto label_3b1bc8;
        case 0x3b1bccu: goto label_3b1bcc;
        case 0x3b1bd0u: goto label_3b1bd0;
        case 0x3b1bd4u: goto label_3b1bd4;
        case 0x3b1bd8u: goto label_3b1bd8;
        case 0x3b1bdcu: goto label_3b1bdc;
        case 0x3b1be0u: goto label_3b1be0;
        case 0x3b1be4u: goto label_3b1be4;
        case 0x3b1be8u: goto label_3b1be8;
        case 0x3b1becu: goto label_3b1bec;
        case 0x3b1bf0u: goto label_3b1bf0;
        case 0x3b1bf4u: goto label_3b1bf4;
        case 0x3b1bf8u: goto label_3b1bf8;
        case 0x3b1bfcu: goto label_3b1bfc;
        case 0x3b1c00u: goto label_3b1c00;
        case 0x3b1c04u: goto label_3b1c04;
        case 0x3b1c08u: goto label_3b1c08;
        case 0x3b1c0cu: goto label_3b1c0c;
        case 0x3b1c10u: goto label_3b1c10;
        case 0x3b1c14u: goto label_3b1c14;
        case 0x3b1c18u: goto label_3b1c18;
        case 0x3b1c1cu: goto label_3b1c1c;
        case 0x3b1c20u: goto label_3b1c20;
        case 0x3b1c24u: goto label_3b1c24;
        case 0x3b1c28u: goto label_3b1c28;
        case 0x3b1c2cu: goto label_3b1c2c;
        case 0x3b1c30u: goto label_3b1c30;
        case 0x3b1c34u: goto label_3b1c34;
        case 0x3b1c38u: goto label_3b1c38;
        case 0x3b1c3cu: goto label_3b1c3c;
        case 0x3b1c40u: goto label_3b1c40;
        case 0x3b1c44u: goto label_3b1c44;
        case 0x3b1c48u: goto label_3b1c48;
        case 0x3b1c4cu: goto label_3b1c4c;
        case 0x3b1c50u: goto label_3b1c50;
        case 0x3b1c54u: goto label_3b1c54;
        case 0x3b1c58u: goto label_3b1c58;
        case 0x3b1c5cu: goto label_3b1c5c;
        case 0x3b1c60u: goto label_3b1c60;
        case 0x3b1c64u: goto label_3b1c64;
        case 0x3b1c68u: goto label_3b1c68;
        case 0x3b1c6cu: goto label_3b1c6c;
        case 0x3b1c70u: goto label_3b1c70;
        case 0x3b1c74u: goto label_3b1c74;
        case 0x3b1c78u: goto label_3b1c78;
        case 0x3b1c7cu: goto label_3b1c7c;
        case 0x3b1c80u: goto label_3b1c80;
        case 0x3b1c84u: goto label_3b1c84;
        case 0x3b1c88u: goto label_3b1c88;
        case 0x3b1c8cu: goto label_3b1c8c;
        case 0x3b1c90u: goto label_3b1c90;
        case 0x3b1c94u: goto label_3b1c94;
        case 0x3b1c98u: goto label_3b1c98;
        case 0x3b1c9cu: goto label_3b1c9c;
        case 0x3b1ca0u: goto label_3b1ca0;
        case 0x3b1ca4u: goto label_3b1ca4;
        case 0x3b1ca8u: goto label_3b1ca8;
        case 0x3b1cacu: goto label_3b1cac;
        case 0x3b1cb0u: goto label_3b1cb0;
        case 0x3b1cb4u: goto label_3b1cb4;
        case 0x3b1cb8u: goto label_3b1cb8;
        case 0x3b1cbcu: goto label_3b1cbc;
        case 0x3b1cc0u: goto label_3b1cc0;
        case 0x3b1cc4u: goto label_3b1cc4;
        case 0x3b1cc8u: goto label_3b1cc8;
        case 0x3b1cccu: goto label_3b1ccc;
        case 0x3b1cd0u: goto label_3b1cd0;
        case 0x3b1cd4u: goto label_3b1cd4;
        case 0x3b1cd8u: goto label_3b1cd8;
        case 0x3b1cdcu: goto label_3b1cdc;
        case 0x3b1ce0u: goto label_3b1ce0;
        case 0x3b1ce4u: goto label_3b1ce4;
        case 0x3b1ce8u: goto label_3b1ce8;
        case 0x3b1cecu: goto label_3b1cec;
        case 0x3b1cf0u: goto label_3b1cf0;
        case 0x3b1cf4u: goto label_3b1cf4;
        case 0x3b1cf8u: goto label_3b1cf8;
        case 0x3b1cfcu: goto label_3b1cfc;
        case 0x3b1d00u: goto label_3b1d00;
        case 0x3b1d04u: goto label_3b1d04;
        case 0x3b1d08u: goto label_3b1d08;
        case 0x3b1d0cu: goto label_3b1d0c;
        case 0x3b1d10u: goto label_3b1d10;
        case 0x3b1d14u: goto label_3b1d14;
        case 0x3b1d18u: goto label_3b1d18;
        case 0x3b1d1cu: goto label_3b1d1c;
        case 0x3b1d20u: goto label_3b1d20;
        case 0x3b1d24u: goto label_3b1d24;
        case 0x3b1d28u: goto label_3b1d28;
        case 0x3b1d2cu: goto label_3b1d2c;
        case 0x3b1d30u: goto label_3b1d30;
        case 0x3b1d34u: goto label_3b1d34;
        case 0x3b1d38u: goto label_3b1d38;
        case 0x3b1d3cu: goto label_3b1d3c;
        case 0x3b1d40u: goto label_3b1d40;
        case 0x3b1d44u: goto label_3b1d44;
        case 0x3b1d48u: goto label_3b1d48;
        case 0x3b1d4cu: goto label_3b1d4c;
        case 0x3b1d50u: goto label_3b1d50;
        case 0x3b1d54u: goto label_3b1d54;
        case 0x3b1d58u: goto label_3b1d58;
        case 0x3b1d5cu: goto label_3b1d5c;
        case 0x3b1d60u: goto label_3b1d60;
        case 0x3b1d64u: goto label_3b1d64;
        case 0x3b1d68u: goto label_3b1d68;
        case 0x3b1d6cu: goto label_3b1d6c;
        case 0x3b1d70u: goto label_3b1d70;
        case 0x3b1d74u: goto label_3b1d74;
        case 0x3b1d78u: goto label_3b1d78;
        case 0x3b1d7cu: goto label_3b1d7c;
        case 0x3b1d80u: goto label_3b1d80;
        case 0x3b1d84u: goto label_3b1d84;
        case 0x3b1d88u: goto label_3b1d88;
        case 0x3b1d8cu: goto label_3b1d8c;
        case 0x3b1d90u: goto label_3b1d90;
        case 0x3b1d94u: goto label_3b1d94;
        case 0x3b1d98u: goto label_3b1d98;
        case 0x3b1d9cu: goto label_3b1d9c;
        case 0x3b1da0u: goto label_3b1da0;
        case 0x3b1da4u: goto label_3b1da4;
        case 0x3b1da8u: goto label_3b1da8;
        case 0x3b1dacu: goto label_3b1dac;
        case 0x3b1db0u: goto label_3b1db0;
        case 0x3b1db4u: goto label_3b1db4;
        case 0x3b1db8u: goto label_3b1db8;
        case 0x3b1dbcu: goto label_3b1dbc;
        case 0x3b1dc0u: goto label_3b1dc0;
        case 0x3b1dc4u: goto label_3b1dc4;
        case 0x3b1dc8u: goto label_3b1dc8;
        case 0x3b1dccu: goto label_3b1dcc;
        case 0x3b1dd0u: goto label_3b1dd0;
        case 0x3b1dd4u: goto label_3b1dd4;
        case 0x3b1dd8u: goto label_3b1dd8;
        case 0x3b1ddcu: goto label_3b1ddc;
        case 0x3b1de0u: goto label_3b1de0;
        case 0x3b1de4u: goto label_3b1de4;
        default: break;
    }

    ctx->pc = 0x3b10d0u;

label_3b10d0:
    // 0x3b10d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3b10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3b10d4:
    // 0x3b10d4: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x3b10d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_3b10d8:
    // 0x3b10d8: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x3b10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_3b10dc:
    // 0x3b10dc: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x3b10dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_3b10e0:
    // 0x3b10e0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3b10e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b10e4:
    // 0x3b10e4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3b10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_3b10e8:
    // 0x3b10e8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3b10e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b10ec:
    // 0x3b10ec: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x3b10ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_3b10f0:
    // 0x3b10f0: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x3b10f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_3b10f4:
    // 0x3b10f4: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x3b10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_3b10f8:
    // 0x3b10f8: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x3b10f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_3b10fc:
    // 0x3b10fc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x3b10fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_3b1100:
    // 0x3b1100: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x3b1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_3b1104:
    // 0x3b1104: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3b1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_3b1108:
    // 0x3b1108: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x3b1108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_3b110c:
    // 0x3b110c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3b110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_3b1110:
    // 0x3b1110: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3b1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_3b1114:
    // 0x3b1114: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3b1114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b1118:
    // 0x3b1118: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3b1118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3b111c:
    // 0x3b111c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3b111cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1120:
    // 0x3b1120: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_3b1124:
    if (ctx->pc == 0x3B1124u) {
        ctx->pc = 0x3B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1120u;
        // 0x3b1124: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1128u;
        goto label_3b1128;
    }
    ctx->pc = 0x3B1120u;
    {
        const bool branch_taken_0x3b1120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1120u;
        // 0x3b1124: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1120) {
            ctx->pc = 0x3B1D94u;
            goto label_3b1d94;
        }
    }
    ctx->pc = 0x3B1128u;
label_3b1128:
    // 0x3b1128: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3b1128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b112c:
    // 0x3b112c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x3b112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_3b1130:
    // 0x3b1130: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b1130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3b1134:
    // 0x3b1134: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3b1134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1138:
    // 0x3b1138: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x3b1138u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_3b113c:
    // 0x3b113c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3b113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3b1140:
    // 0x3b1140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b1140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1144:
    // 0x3b1144: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3b1144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3b1148:
    // 0x3b1148: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_3b114c:
    if (ctx->pc == 0x3B114Cu) {
        ctx->pc = 0x3B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1148u;
        // 0x3b114c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1150u;
        goto label_3b1150;
    }
    ctx->pc = 0x3B1148u;
    {
        const bool branch_taken_0x3b1148 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1148u;
        // 0x3b114c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1148) {
            ctx->pc = 0x3B1D4Cu;
            goto label_3b1d4c;
        }
    }
    ctx->pc = 0x3B1150u;
label_3b1150:
    // 0x3b1150: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b1150u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1154:
    // 0x3b1154: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3b1154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b1158:
    // 0x3b1158: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x3b1158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_3b115c:
    // 0x3b115c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3b1160:
    // 0x3b1160: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_3b1164:
    // 0x3b1164: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x3b1164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_3b1168:
    // 0x3b1168: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_3b116c:
    if (ctx->pc == 0x3B116Cu) {
        ctx->pc = 0x3B116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1168u;
        // 0x3b116c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1170u;
        goto label_3b1170;
    }
    ctx->pc = 0x3B1168u;
    {
        const bool branch_taken_0x3b1168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1168u;
        // 0x3b116c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1168) {
            ctx->pc = 0x3B189Cu;
            goto label_3b189c;
        }
    }
    ctx->pc = 0x3B1170u;
label_3b1170:
    // 0x3b1170: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b1170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3b1174:
    // 0x3b1174: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b1174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b1178:
    // 0x3b1178: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x3b1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
label_3b117c:
    // 0x3b117c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b1180:
    // 0x3b1180: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b1180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b1184:
    // 0x3b1184: 0x800008  jr          $a0
label_3b1188:
    if (ctx->pc == 0x3B1188u) {
        ctx->pc = 0x3B118Cu;
        goto label_3b118c;
    }
    ctx->pc = 0x3B1184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B118Cu: goto label_3b118c;
            case 0x3B1194u: goto label_3b1194;
            case 0x3B119Cu: goto label_3b119c;
            case 0x3B11A4u: goto label_3b11a4;
            case 0x3B11ECu: goto label_3b11ec;
            case 0x3B1274u: goto label_3b1274;
            case 0x3B127Cu: goto label_3b127c;
            case 0x3B1284u: goto label_3b1284;
            case 0x3B128Cu: goto label_3b128c;
            case 0x3B1294u: goto label_3b1294;
            case 0x3B1348u: goto label_3b1348;
            case 0x3B1374u: goto label_3b1374;
            case 0x3B1434u: goto label_3b1434;
            case 0x3B154Cu: goto label_3b154c;
            case 0x3B1610u: goto label_3b1610;
            case 0x3B1674u: goto label_3b1674;
            case 0x3B17B8u: goto label_3b17b8;
            case 0x3B17F0u: goto label_3b17f0;
            case 0x3B189Cu: goto label_3b189c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B118Cu;
label_3b118c:
    // 0x3b118c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_3b1190:
    if (ctx->pc == 0x3B1190u) {
        ctx->pc = 0x3B1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B118Cu;
        // 0x3b1190: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1194u;
        goto label_3b1194;
    }
    ctx->pc = 0x3B118Cu;
    {
        const bool branch_taken_0x3b118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B118Cu;
        // 0x3b1190: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b118c) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B1194u;
label_3b1194:
    // 0x3b1194: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_3b1198:
    if (ctx->pc == 0x3B1198u) {
        ctx->pc = 0x3B1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1194u;
        // 0x3b1198: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B119Cu;
        goto label_3b119c;
    }
    ctx->pc = 0x3B1194u;
    {
        const bool branch_taken_0x3b1194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1194u;
        // 0x3b1198: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1194) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B119Cu;
label_3b119c:
    // 0x3b119c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_3b11a0:
    if (ctx->pc == 0x3B11A0u) {
        ctx->pc = 0x3B11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B119Cu;
        // 0x3b11a0: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11A4u;
        goto label_3b11a4;
    }
    ctx->pc = 0x3B119Cu;
    {
        const bool branch_taken_0x3b119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B119Cu;
        // 0x3b11a0: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b119c) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B11A4u;
label_3b11a4:
    // 0x3b11a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b11a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b11a8:
    // 0x3b11a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3b11a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b11ac:
    // 0x3b11ac: 0x0  nop
    ctx->pc = 0x3b11acu;
    // NOP
label_3b11b0:
    // 0x3b11b0: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x3b11b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3b11b4:
    // 0x3b11b4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x3b11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_3b11b8:
    // 0x3b11b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b11b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b11bc:
    // 0x3b11bc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3b11bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_3b11c0:
    // 0x3b11c0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3b11c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b11c4:
    // 0x3b11c4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3b11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3b11c8:
    // 0x3b11c8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3b11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3b11cc:
    // 0x3b11cc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3b11ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b11d0:
    // 0x3b11d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b11d4:
    if (ctx->pc == 0x3B11D4u) {
        ctx->pc = 0x3B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D0u;
        // 0x3b11d4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11D8u;
        goto label_3b11d8;
    }
    ctx->pc = 0x3B11D0u;
    {
        const bool branch_taken_0x3b11d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D0u;
        // 0x3b11d4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11d0) {
            ctx->pc = 0x3B11B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b11b0;
        }
    }
    ctx->pc = 0x3B11D8u;
label_3b11d8:
    // 0x3b11d8: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x3b11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_3b11dc:
    // 0x3b11dc: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_3b11e0:
    if (ctx->pc == 0x3B11E0u) {
        ctx->pc = 0x3B11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11DCu;
        // 0x3b11e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11E4u;
        goto label_3b11e4;
    }
    ctx->pc = 0x3B11DCu;
    {
        const bool branch_taken_0x3b11dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11DCu;
        // 0x3b11e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11dc) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B11E4u;
label_3b11e4:
    // 0x3b11e4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_3b11e8:
    if (ctx->pc == 0x3B11E8u) {
        ctx->pc = 0x3B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11E4u;
        // 0x3b11e8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11ECu;
        goto label_3b11ec;
    }
    ctx->pc = 0x3B11E4u;
    {
        const bool branch_taken_0x3b11e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11E4u;
        // 0x3b11e8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11e4) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B11ECu;
label_3b11ec:
    // 0x3b11ec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b11ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b11f0:
    // 0x3b11f0: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x3b11f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_3b11f4:
    // 0x3b11f4: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x3b11f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b11f8:
    // 0x3b11f8: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3b11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_3b11fc:
    // 0x3b11fc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3b1200:
    if (ctx->pc == 0x3B1200u) {
        ctx->pc = 0x3B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11FCu;
        // 0x3b1200: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1204u;
        goto label_3b1204;
    }
    ctx->pc = 0x3B11FCu;
    {
        const bool branch_taken_0x3b11fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11FCu;
        // 0x3b1200: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11fc) {
            ctx->pc = 0x3B1220u;
            goto label_3b1220;
        }
    }
    ctx->pc = 0x3B1204u;
label_3b1204:
    // 0x3b1204: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b1204u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b1208:
    // 0x3b1208: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3b1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b120c:
    // 0x3b120c: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x3b120cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b1210:
    // 0x3b1210: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3b1210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1214:
    // 0x3b1214: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3b1214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3b1218:
    // 0x3b1218: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_3b121c:
    if (ctx->pc == 0x3B121Cu) {
        ctx->pc = 0x3B121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1218u;
        // 0x3b121c: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1220u;
        goto label_3b1220;
    }
    ctx->pc = 0x3B1218u;
    {
        const bool branch_taken_0x3b1218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1218u;
        // 0x3b121c: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1218) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B1220u;
label_3b1220:
    // 0x3b1220: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3b1220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3b1224:
    // 0x3b1224: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3b1224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b1228:
    // 0x3b1228: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b122c:
    if (ctx->pc == 0x3B122Cu) {
        ctx->pc = 0x3B122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1228u;
        // 0x3b122c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1230u;
        goto label_3b1230;
    }
    ctx->pc = 0x3B1228u;
    {
        const bool branch_taken_0x3b1228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1228u;
        // 0x3b122c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1228) {
            ctx->pc = 0x3B1260u;
            goto label_3b1260;
        }
    }
    ctx->pc = 0x3B1230u;
label_3b1230:
    // 0x3b1230: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3b1230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b1234:
    // 0x3b1234: 0x0  nop
    ctx->pc = 0x3b1234u;
    // NOP
label_3b1238:
    // 0x3b1238: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x3b1238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3b123c:
    // 0x3b123c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x3b123cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_3b1240:
    // 0x3b1240: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b1240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1244:
    // 0x3b1244: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3b1244u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_3b1248:
    // 0x3b1248: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3b1248u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b124c:
    // 0x3b124c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3b124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3b1250:
    // 0x3b1250: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3b1254:
    // 0x3b1254: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3b1254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b1258:
    // 0x3b1258: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b125c:
    if (ctx->pc == 0x3B125Cu) {
        ctx->pc = 0x3B125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1258u;
        // 0x3b125c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1260u;
        goto label_3b1260;
    }
    ctx->pc = 0x3B1258u;
    {
        const bool branch_taken_0x3b1258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1258u;
        // 0x3b125c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1258) {
            ctx->pc = 0x3B1238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1238;
        }
    }
    ctx->pc = 0x3B1260u;
label_3b1260:
    // 0x3b1260: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3b1260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b1264:
    // 0x3b1264: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3b1264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1268:
    // 0x3b1268: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3b1268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3b126c:
    // 0x3b126c: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_3b1270:
    if (ctx->pc == 0x3B1270u) {
        ctx->pc = 0x3B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B126Cu;
        // 0x3b1270: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1274u;
        goto label_3b1274;
    }
    ctx->pc = 0x3B126Cu;
    {
        const bool branch_taken_0x3b126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B126Cu;
        // 0x3b1270: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b126c) {
            ctx->pc = 0x3B11DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b11dc;
        }
    }
    ctx->pc = 0x3B1274u;
label_3b1274:
    // 0x3b1274: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_3b1278:
    if (ctx->pc == 0x3B1278u) {
        ctx->pc = 0x3B1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1274u;
        // 0x3b1278: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B127Cu;
        goto label_3b127c;
    }
    ctx->pc = 0x3B1274u;
    {
        const bool branch_taken_0x3b1274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1274u;
        // 0x3b1278: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1274) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B127Cu;
label_3b127c:
    // 0x3b127c: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_3b1280:
    if (ctx->pc == 0x3B1280u) {
        ctx->pc = 0x3B1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B127Cu;
        // 0x3b1280: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1284u;
        goto label_3b1284;
    }
    ctx->pc = 0x3B127Cu;
    {
        const bool branch_taken_0x3b127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B127Cu;
        // 0x3b1280: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b127c) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B1284u;
label_3b1284:
    // 0x3b1284: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_3b1288:
    if (ctx->pc == 0x3B1288u) {
        ctx->pc = 0x3B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1284u;
        // 0x3b1288: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B128Cu;
        goto label_3b128c;
    }
    ctx->pc = 0x3B1284u;
    {
        const bool branch_taken_0x3b1284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1284u;
        // 0x3b1288: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1284) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B128Cu;
label_3b128c:
    // 0x3b128c: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_3b1290:
    if (ctx->pc == 0x3B1290u) {
        ctx->pc = 0x3B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B128Cu;
        // 0x3b1290: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1294u;
        goto label_3b1294;
    }
    ctx->pc = 0x3B128Cu;
    {
        const bool branch_taken_0x3b128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B128Cu;
        // 0x3b1290: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b128c) {
            ctx->pc = 0x3B1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1150;
        }
    }
    ctx->pc = 0x3B1294u;
label_3b1294:
    // 0x3b1294: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3b1294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3b1298:
    // 0x3b1298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b129c:
    if (ctx->pc == 0x3B129Cu) {
        ctx->pc = 0x3B129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1298u;
        // 0x3b129c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12A0u;
        goto label_3b12a0;
    }
    ctx->pc = 0x3B1298u;
    {
        const bool branch_taken_0x3b1298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1298u;
        // 0x3b129c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1298) {
            ctx->pc = 0x3B12ACu;
            goto label_3b12ac;
        }
    }
    ctx->pc = 0x3B12A0u;
label_3b12a0:
    // 0x3b12a0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b12a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b12a4:
    // 0x3b12a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b12a8:
    if (ctx->pc == 0x3B12A8u) {
        ctx->pc = 0x3B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12A4u;
        // 0x3b12a8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12ACu;
        goto label_3b12ac;
    }
    ctx->pc = 0x3B12A4u;
    {
        const bool branch_taken_0x3b12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12A4u;
        // 0x3b12a8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12a4) {
            ctx->pc = 0x3B12C0u;
            goto label_3b12c0;
        }
    }
    ctx->pc = 0x3B12ACu;
label_3b12ac:
    // 0x3b12ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b12b0:
    if (ctx->pc == 0x3B12B0u) {
        ctx->pc = 0x3B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12ACu;
        // 0x3b12b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12B4u;
        goto label_3b12b4;
    }
    ctx->pc = 0x3B12ACu;
    {
        const bool branch_taken_0x3b12ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12ACu;
        // 0x3b12b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12ac) {
            ctx->pc = 0x3B12BCu;
            goto label_3b12bc;
        }
    }
    ctx->pc = 0x3B12B4u;
label_3b12b4:
    // 0x3b12b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b12b8:
    if (ctx->pc == 0x3B12B8u) {
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12BCu;
        goto label_3b12bc;
    }
    ctx->pc = 0x3B12B4u;
    {
        const bool branch_taken_0x3b12b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12b4) {
            ctx->pc = 0x3B12C0u;
            goto label_3b12c0;
        }
    }
    ctx->pc = 0x3B12BCu;
label_3b12bc:
    // 0x3b12bc: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3b12bcu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b12c0:
    // 0x3b12c0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3b12c4:
    if (ctx->pc == 0x3B12C4u) {
        ctx->pc = 0x3B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12C0u;
        // 0x3b12c4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12C8u;
        goto label_3b12c8;
    }
    ctx->pc = 0x3B12C0u;
    {
        const bool branch_taken_0x3b12c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12C0u;
        // 0x3b12c4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12c0) {
            ctx->pc = 0x3B12F0u;
            goto label_3b12f0;
        }
    }
    ctx->pc = 0x3B12C8u;
label_3b12c8:
    // 0x3b12c8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3b12c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3b12cc:
    // 0x3b12cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b12d0:
    if (ctx->pc == 0x3B12D0u) {
        ctx->pc = 0x3B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12CCu;
        // 0x3b12d0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12D4u;
        goto label_3b12d4;
    }
    ctx->pc = 0x3B12CCu;
    {
        const bool branch_taken_0x3b12cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12CCu;
        // 0x3b12d0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12cc) {
            ctx->pc = 0x3B12DCu;
            goto label_3b12dc;
        }
    }
    ctx->pc = 0x3B12D4u;
label_3b12d4:
    // 0x3b12d4: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_3b12d8:
    if (ctx->pc == 0x3B12D8u) {
        ctx->pc = 0x3B12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12D4u;
        // 0x3b12d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12DCu;
        goto label_3b12dc;
    }
    ctx->pc = 0x3B12D4u;
    {
        const bool branch_taken_0x3b12d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12D4u;
        // 0x3b12d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12d4) {
            ctx->pc = 0x3B1334u;
            goto label_3b1334;
        }
    }
    ctx->pc = 0x3B12DCu;
label_3b12dc:
    // 0x3b12dc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b12dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b12e0:
    // 0x3b12e0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b12e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b12e4:
    // 0x3b12e4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b12e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b12e8:
    // 0x3b12e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3b12ec:
    if (ctx->pc == 0x3B12ECu) {
        ctx->pc = 0x3B12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12E8u;
        // 0x3b12ec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12F0u;
        goto label_3b12f0;
    }
    ctx->pc = 0x3B12E8u;
    {
        const bool branch_taken_0x3b12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12E8u;
        // 0x3b12ec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12e8) {
            ctx->pc = 0x3B1338u;
            goto label_3b1338;
        }
    }
    ctx->pc = 0x3B12F0u;
label_3b12f0:
    // 0x3b12f0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b12f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b12f4:
    // 0x3b12f4: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3b12f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3b12f8:
    // 0x3b12f8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b12f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b12fc:
    // 0x3b12fc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b12fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1300:
    // 0x3b1300: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3b1300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_3b1304:
    // 0x3b1304: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3b1304u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3b1308:
    // 0x3b1308: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3b1308u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_3b130c:
    // 0x3b130c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b1310:
    // 0x3b1310: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b1310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b1314:
    // 0x3b1314: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b1314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b1318:
    // 0x3b1318: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_3b131c:
    if (ctx->pc == 0x3B131Cu) {
        ctx->pc = 0x3B1320u;
        goto label_3b1320;
    }
    ctx->pc = 0x3B1318u;
    {
        const bool branch_taken_0x3b1318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1318) {
            ctx->pc = 0x3B1300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1300;
        }
    }
    ctx->pc = 0x3B1320u;
label_3b1320:
    // 0x3b1320: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3b1324:
    if (ctx->pc == 0x3B1324u) {
        ctx->pc = 0x3B1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1320u;
        // 0x3b1324: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1328u;
        goto label_3b1328;
    }
    ctx->pc = 0x3B1320u;
    {
        const bool branch_taken_0x3b1320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1320u;
        // 0x3b1324: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1320) {
            ctx->pc = 0x3B133Cu;
            goto label_3b133c;
        }
    }
    ctx->pc = 0x3B1328u;
label_3b1328:
    // 0x3b1328: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b1328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b132c:
    // 0x3b132c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b1330:
    if (ctx->pc == 0x3B1330u) {
        ctx->pc = 0x3B1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B132Cu;
        // 0x3b1330: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1334u;
        goto label_3b1334;
    }
    ctx->pc = 0x3B132Cu;
    {
        const bool branch_taken_0x3b132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B132Cu;
        // 0x3b1330: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b132c) {
            ctx->pc = 0x3B133Cu;
            goto label_3b133c;
        }
    }
    ctx->pc = 0x3B1334u;
label_3b1334:
    // 0x3b1334: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1334u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b1338:
    // 0x3b1338: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b1338u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b133c:
    // 0x3b133c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3b133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b1340:
    // 0x3b1340: 0x10000162  b           . + 4 + (0x162 << 2)
label_3b1344:
    if (ctx->pc == 0x3B1344u) {
        ctx->pc = 0x3B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1340u;
        // 0x3b1344: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1348u;
        goto label_3b1348;
    }
    ctx->pc = 0x3B1340u;
    {
        const bool branch_taken_0x3b1340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1340u;
        // 0x3b1344: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1340) {
            ctx->pc = 0x3B18CCu;
            goto label_3b18cc;
        }
    }
    ctx->pc = 0x3B1348u;
label_3b1348:
    // 0x3b1348: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3b134c:
    // 0x3b134c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3b134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3b1350:
    // 0x3b1350: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3b1354:
    if (ctx->pc == 0x3B1354u) {
        ctx->pc = 0x3B1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1350u;
        // 0x3b1354: 0x2444fe90  addiu       $a0, $v0, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1358u;
        goto label_3b1358;
    }
    ctx->pc = 0x3B1350u;
    {
        const bool branch_taken_0x3b1350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1350u;
        // 0x3b1354: 0x2444fe90  addiu       $a0, $v0, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1350) {
            ctx->pc = 0x3B139Cu;
            goto label_3b139c;
        }
    }
    ctx->pc = 0x3B1358u;
label_3b1358:
    // 0x3b1358: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b135c:
    // 0x3b135c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3b135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3b1360:
    // 0x3b1360: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3b1360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3b1364:
    // 0x3b1364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b1364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1368:
    // 0x3b1368: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3b1368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3b136c:
    // 0x3b136c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3b1370:
    if (ctx->pc == 0x3B1370u) {
        ctx->pc = 0x3B1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B136Cu;
        // 0x3b1370: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1374u;
        goto label_3b1374;
    }
    ctx->pc = 0x3B136Cu;
    {
        const bool branch_taken_0x3b136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B136Cu;
        // 0x3b1370: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b136c) {
            ctx->pc = 0x3B139Cu;
            goto label_3b139c;
        }
    }
    ctx->pc = 0x3B1374u;
label_3b1374:
    // 0x3b1374: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b1374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3b1378:
    // 0x3b1378: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3b1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3b137c:
    // 0x3b137c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3b1380:
    if (ctx->pc == 0x3B1380u) {
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0x2444fea8  addiu       $a0, $v0, -0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1384u;
        goto label_3b1384;
    }
    ctx->pc = 0x3B137Cu;
    {
        const bool branch_taken_0x3b137c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0x2444fea8  addiu       $a0, $v0, -0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b137c) {
            ctx->pc = 0x3B139Cu;
            goto label_3b139c;
        }
    }
    ctx->pc = 0x3B1384u;
label_3b1384:
    // 0x3b1384: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3b1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1388:
    // 0x3b1388: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x3b1388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3b138c:
    // 0x3b138c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1390:
    // 0x3b1390: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3b1390u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3b1394:
    // 0x3b1394: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x3b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_3b1398:
    // 0x3b1398: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3b1398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3b139c:
    // 0x3b139c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3b139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3b13a0:
    // 0x3b13a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b13a4:
    if (ctx->pc == 0x3B13A4u) {
        ctx->pc = 0x3B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13A0u;
        // 0x3b13a4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13A8u;
        goto label_3b13a8;
    }
    ctx->pc = 0x3B13A0u;
    {
        const bool branch_taken_0x3b13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13A0u;
        // 0x3b13a4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13a0) {
            ctx->pc = 0x3B13B4u;
            goto label_3b13b4;
        }
    }
    ctx->pc = 0x3B13A8u;
label_3b13a8:
    // 0x3b13a8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b13a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b13ac:
    // 0x3b13ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b13b0:
    if (ctx->pc == 0x3B13B0u) {
        ctx->pc = 0x3B13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13ACu;
        // 0x3b13b0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13B4u;
        goto label_3b13b4;
    }
    ctx->pc = 0x3B13ACu;
    {
        const bool branch_taken_0x3b13ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13ACu;
        // 0x3b13b0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13ac) {
            ctx->pc = 0x3B13C8u;
            goto label_3b13c8;
        }
    }
    ctx->pc = 0x3B13B4u;
label_3b13b4:
    // 0x3b13b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b13b8:
    if (ctx->pc == 0x3B13B8u) {
        ctx->pc = 0x3B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B4u;
        // 0x3b13b8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13BCu;
        goto label_3b13bc;
    }
    ctx->pc = 0x3B13B4u;
    {
        const bool branch_taken_0x3b13b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B4u;
        // 0x3b13b8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13b4) {
            ctx->pc = 0x3B13C4u;
            goto label_3b13c4;
        }
    }
    ctx->pc = 0x3B13BCu;
label_3b13bc:
    // 0x3b13bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b13c0:
    if (ctx->pc == 0x3B13C0u) {
        ctx->pc = 0x3B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13BCu;
        // 0x3b13c0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13C4u;
        goto label_3b13c4;
    }
    ctx->pc = 0x3B13BCu;
    {
        const bool branch_taken_0x3b13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13BCu;
        // 0x3b13c0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13bc) {
            ctx->pc = 0x3B13C8u;
            goto label_3b13c8;
        }
    }
    ctx->pc = 0x3B13C4u;
label_3b13c4:
    // 0x3b13c4: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3b13c4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b13c8:
    // 0x3b13c8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_3b13cc:
    if (ctx->pc == 0x3B13CCu) {
        ctx->pc = 0x3B13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13C8u;
        // 0x3b13cc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13D0u;
        goto label_3b13d0;
    }
    ctx->pc = 0x3B13C8u;
    {
        const bool branch_taken_0x3b13c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13C8u;
        // 0x3b13cc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13c8) {
            ctx->pc = 0x3B13FCu;
            goto label_3b13fc;
        }
    }
    ctx->pc = 0x3B13D0u;
label_3b13d0:
    // 0x3b13d0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3b13d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3b13d4:
    // 0x3b13d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b13d8:
    if (ctx->pc == 0x3B13D8u) {
        ctx->pc = 0x3B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D4u;
        // 0x3b13d8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13DCu;
        goto label_3b13dc;
    }
    ctx->pc = 0x3B13D4u;
    {
        const bool branch_taken_0x3b13d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D4u;
        // 0x3b13d8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13d4) {
            ctx->pc = 0x3B13E4u;
            goto label_3b13e4;
        }
    }
    ctx->pc = 0x3B13DCu;
label_3b13dc:
    // 0x3b13dc: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_3b13e0:
    if (ctx->pc == 0x3B13E0u) {
        ctx->pc = 0x3B13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13DCu;
        // 0x3b13e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13E4u;
        goto label_3b13e4;
    }
    ctx->pc = 0x3B13DCu;
    {
        const bool branch_taken_0x3b13dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13DCu;
        // 0x3b13e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13dc) {
            ctx->pc = 0x3B15F8u;
            goto label_3b15f8;
        }
    }
    ctx->pc = 0x3B13E4u;
label_3b13e4:
    // 0x3b13e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3b13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b13e8:
    // 0x3b13e8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b13e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b13ec:
    // 0x3b13ec: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b13ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b13f0:
    // 0x3b13f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b13f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b13f4:
    // 0x3b13f4: 0x10000081  b           . + 4 + (0x81 << 2)
label_3b13f8:
    if (ctx->pc == 0x3B13F8u) {
        ctx->pc = 0x3B13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13F4u;
        // 0x3b13f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13FCu;
        goto label_3b13fc;
    }
    ctx->pc = 0x3B13F4u;
    {
        const bool branch_taken_0x3b13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13F4u;
        // 0x3b13f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13f4) {
            ctx->pc = 0x3B15FCu;
            goto label_3b15fc;
        }
    }
    ctx->pc = 0x3B13FCu;
label_3b13fc:
    // 0x3b13fc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b13fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1400:
    // 0x3b1400: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1400u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b1404:
    // 0x3b1404: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b1404u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1408:
    // 0x3b1408: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3b1408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_3b140c:
    // 0x3b140c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3b1410:
    // 0x3b1410: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b1410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3b1414:
    // 0x3b1414: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3b1414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_3b1418:
    // 0x3b1418: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b1418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b141c:
    // 0x3b141c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b141cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1420:
    // 0x3b1420: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3b1420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b1424:
    // 0x3b1424: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_3b1428:
    if (ctx->pc == 0x3B1428u) {
        ctx->pc = 0x3B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1424u;
        // 0x3b1428: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B142Cu;
        goto label_3b142c;
    }
    ctx->pc = 0x3B1424u;
    {
        const bool branch_taken_0x3b1424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1424u;
        // 0x3b1428: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1424) {
            ctx->pc = 0x3B1408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1408;
        }
    }
    ctx->pc = 0x3B142Cu;
label_3b142c:
    // 0x3b142c: 0x10000075  b           . + 4 + (0x75 << 2)
label_3b1430:
    if (ctx->pc == 0x3B1430u) {
        ctx->pc = 0x3B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B142Cu;
        // 0x3b1430: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1434u;
        goto label_3b1434;
    }
    ctx->pc = 0x3B142Cu;
    {
        const bool branch_taken_0x3b142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B142Cu;
        // 0x3b1430: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b142c) {
            ctx->pc = 0x3B1604u;
            goto label_3b1604;
        }
    }
    ctx->pc = 0x3B1434u;
label_3b1434:
    // 0x3b1434: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3b1434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3b1438:
    // 0x3b1438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b143c:
    if (ctx->pc == 0x3B143Cu) {
        ctx->pc = 0x3B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1438u;
        // 0x3b143c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1440u;
        goto label_3b1440;
    }
    ctx->pc = 0x3B1438u;
    {
        const bool branch_taken_0x3b1438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1438u;
        // 0x3b143c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1438) {
            ctx->pc = 0x3B144Cu;
            goto label_3b144c;
        }
    }
    ctx->pc = 0x3B1440u;
label_3b1440:
    // 0x3b1440: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b1440u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b1444:
    // 0x3b1444: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b1448:
    if (ctx->pc == 0x3B1448u) {
        ctx->pc = 0x3B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1444u;
        // 0x3b1448: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B144Cu;
        goto label_3b144c;
    }
    ctx->pc = 0x3B1444u;
    {
        const bool branch_taken_0x3b1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1444u;
        // 0x3b1448: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1444) {
            ctx->pc = 0x3B1460u;
            goto label_3b1460;
        }
    }
    ctx->pc = 0x3B144Cu;
label_3b144c:
    // 0x3b144c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b1450:
    if (ctx->pc == 0x3B1450u) {
        ctx->pc = 0x3B1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B144Cu;
        // 0x3b1450: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1454u;
        goto label_3b1454;
    }
    ctx->pc = 0x3B144Cu;
    {
        const bool branch_taken_0x3b144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B144Cu;
        // 0x3b1450: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b144c) {
            ctx->pc = 0x3B145Cu;
            goto label_3b145c;
        }
    }
    ctx->pc = 0x3B1454u;
label_3b1454:
    // 0x3b1454: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b1458:
    if (ctx->pc == 0x3B1458u) {
        ctx->pc = 0x3B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1454u;
        // 0x3b1458: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B145Cu;
        goto label_3b145c;
    }
    ctx->pc = 0x3B1454u;
    {
        const bool branch_taken_0x3b1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1454u;
        // 0x3b1458: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1454) {
            ctx->pc = 0x3B1460u;
            goto label_3b1460;
        }
    }
    ctx->pc = 0x3B145Cu;
label_3b145c:
    // 0x3b145c: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x3b145cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b1460:
    // 0x3b1460: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_3b1464:
    if (ctx->pc == 0x3B1464u) {
        ctx->pc = 0x3B1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1460u;
        // 0x3b1464: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1468u;
        goto label_3b1468;
    }
    ctx->pc = 0x3B1460u;
    {
        const bool branch_taken_0x3b1460 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3B1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1460u;
        // 0x3b1464: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1460) {
            ctx->pc = 0x3B1498u;
            goto label_3b1498;
        }
    }
    ctx->pc = 0x3B1468u;
label_3b1468:
    // 0x3b1468: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3b1468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_3b146c:
    // 0x3b146c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b1470:
    if (ctx->pc == 0x3B1470u) {
        ctx->pc = 0x3B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B146Cu;
        // 0x3b1470: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1474u;
        goto label_3b1474;
    }
    ctx->pc = 0x3B146Cu;
    {
        const bool branch_taken_0x3b146c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B146Cu;
        // 0x3b1470: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b146c) {
            ctx->pc = 0x3B1480u;
            goto label_3b1480;
        }
    }
    ctx->pc = 0x3B1474u;
label_3b1474:
    // 0x3b1474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1478:
    // 0x3b1478: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b147c:
    if (ctx->pc == 0x3B147Cu) {
        ctx->pc = 0x3B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1478u;
        // 0x3b147c: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1480u;
        goto label_3b1480;
    }
    ctx->pc = 0x3B1478u;
    {
        const bool branch_taken_0x3b1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1478u;
        // 0x3b147c: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1478) {
            ctx->pc = 0x3B14A4u;
            goto label_3b14a4;
        }
    }
    ctx->pc = 0x3B1480u;
label_3b1480:
    // 0x3b1480: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x3b1480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_3b1484:
    // 0x3b1484: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b1488:
    if (ctx->pc == 0x3B1488u) {
        ctx->pc = 0x3B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1484u;
        // 0x3b1488: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B148Cu;
        goto label_3b148c;
    }
    ctx->pc = 0x3B1484u;
    {
        const bool branch_taken_0x3b1484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1484u;
        // 0x3b1488: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1484) {
            ctx->pc = 0x3B14A8u;
            goto label_3b14a8;
        }
    }
    ctx->pc = 0x3B148Cu;
label_3b148c:
    // 0x3b148c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1490:
    // 0x3b1490: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b1494:
    if (ctx->pc == 0x3B1494u) {
        ctx->pc = 0x3B1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1490u;
        // 0x3b1494: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1498u;
        goto label_3b1498;
    }
    ctx->pc = 0x3B1490u;
    {
        const bool branch_taken_0x3b1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1490u;
        // 0x3b1494: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1490) {
            ctx->pc = 0x3B14A4u;
            goto label_3b14a4;
        }
    }
    ctx->pc = 0x3B1498u;
label_3b1498:
    // 0x3b1498: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3b1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3b149c:
    // 0x3b149c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b14a0:
    // 0x3b14a0: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x3b14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_3b14a4:
    // 0x3b14a4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3b14a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3b14a8:
    // 0x3b14a8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_3b14ac:
    if (ctx->pc == 0x3B14ACu) {
        ctx->pc = 0x3B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14A8u;
        // 0x3b14ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14B0u;
        goto label_3b14b0;
    }
    ctx->pc = 0x3B14A8u;
    {
        const bool branch_taken_0x3b14a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14A8u;
        // 0x3b14ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14a8) {
            ctx->pc = 0x3B14DCu;
            goto label_3b14dc;
        }
    }
    ctx->pc = 0x3B14B0u;
label_3b14b0:
    // 0x3b14b0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3b14b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3b14b4:
    // 0x3b14b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b14b8:
    if (ctx->pc == 0x3B14B8u) {
        ctx->pc = 0x3B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B4u;
        // 0x3b14b8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14BCu;
        goto label_3b14bc;
    }
    ctx->pc = 0x3B14B4u;
    {
        const bool branch_taken_0x3b14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B4u;
        // 0x3b14b8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14b4) {
            ctx->pc = 0x3B14C4u;
            goto label_3b14c4;
        }
    }
    ctx->pc = 0x3B14BCu;
label_3b14bc:
    // 0x3b14bc: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_3b14c0:
    if (ctx->pc == 0x3B14C0u) {
        ctx->pc = 0x3B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14BCu;
        // 0x3b14c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14C4u;
        goto label_3b14c4;
    }
    ctx->pc = 0x3B14BCu;
    {
        const bool branch_taken_0x3b14bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14BCu;
        // 0x3b14c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14bc) {
            ctx->pc = 0x3B1538u;
            goto label_3b1538;
        }
    }
    ctx->pc = 0x3B14C4u;
label_3b14c4:
    // 0x3b14c4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b14c8:
    // 0x3b14c8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b14c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b14cc:
    // 0x3b14cc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b14ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b14d0:
    // 0x3b14d0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x3b14d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b14d4:
    // 0x3b14d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3b14d8:
    if (ctx->pc == 0x3B14D8u) {
        ctx->pc = 0x3B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14D4u;
        // 0x3b14d8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14DCu;
        goto label_3b14dc;
    }
    ctx->pc = 0x3B14D4u;
    {
        const bool branch_taken_0x3b14d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14D4u;
        // 0x3b14d8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14d4) {
            ctx->pc = 0x3B153Cu;
            goto label_3b153c;
        }
    }
    ctx->pc = 0x3B14DCu;
label_3b14dc:
    // 0x3b14dc: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x3b14dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_3b14e0:
    // 0x3b14e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3b14e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3b14e4:
    // 0x3b14e4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3b14e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3b14e8:
    // 0x3b14e8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3b14ec:
    if (ctx->pc == 0x3B14ECu) {
        ctx->pc = 0x3B14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14E8u;
        // 0x3b14ec: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14F0u;
        goto label_3b14f0;
    }
    ctx->pc = 0x3B14E8u;
    {
        const bool branch_taken_0x3b14e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14E8u;
        // 0x3b14ec: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14e8) {
            ctx->pc = 0x3B1538u;
            goto label_3b1538;
        }
    }
    ctx->pc = 0x3B14F0u;
label_3b14f0:
    // 0x3b14f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b14f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b14f4:
    // 0x3b14f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b14f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b14f8:
    // 0x3b14f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b14fc:
    // 0x3b14fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b1500:
    // 0x3b1500: 0xc0ee208  jal         func_3B8820
label_3b1504:
    if (ctx->pc == 0x3B1504u) {
        ctx->pc = 0x3B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1500u;
        // 0x3b1504: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1508u;
        goto label_3b1508;
    }
    ctx->pc = 0x3B1500u;
    SET_GPR_U32(ctx, 31, 0x3B1508u);
    ctx->pc = 0x3B1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1500u;
    // 0x3b1504: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8820u, 0x3B1500u, 0x3B1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1508u;
label_3b1508:
    // 0x3b1508: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3b1508u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3b150c:
    // 0x3b150c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1510:
    // 0x3b1510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b1514:
    // 0x3b1514: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b1514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b1518:
    // 0x3b1518: 0xc0edff8  jal         func_3B7FE0
label_3b151c:
    if (ctx->pc == 0x3B151Cu) {
        ctx->pc = 0x3B151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1518u;
        // 0x3b151c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1520u;
        goto label_3b1520;
    }
    ctx->pc = 0x3B1518u;
    SET_GPR_U32(ctx, 31, 0x3B1520u);
    ctx->pc = 0x3B151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1518u;
    // 0x3b151c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x3B1518u, 0x3B1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1520u;
label_3b1520:
    // 0x3b1520: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b1520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b1524:
    // 0x3b1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1528:
    // 0x3b1528: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3b152c:
    if (ctx->pc == 0x3B152Cu) {
        ctx->pc = 0x3B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1528u;
        // 0x3b152c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1530u;
        goto label_3b1530;
    }
    ctx->pc = 0x3B1528u;
    {
        const bool branch_taken_0x3b1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1528u;
        // 0x3b152c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1528) {
            ctx->pc = 0x3B14F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b14f8;
        }
    }
    ctx->pc = 0x3B1530u;
label_3b1530:
    // 0x3b1530: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b1534:
    if (ctx->pc == 0x3B1534u) {
        ctx->pc = 0x3B1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1530u;
        // 0x3b1534: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1538u;
        goto label_3b1538;
    }
    ctx->pc = 0x3B1530u;
    {
        const bool branch_taken_0x3b1530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1530u;
        // 0x3b1534: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1530) {
            ctx->pc = 0x3B1544u;
            goto label_3b1544;
        }
    }
    ctx->pc = 0x3B1538u;
label_3b1538:
    // 0x3b1538: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1538u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b153c:
    // 0x3b153c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b153cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1540:
    // 0x3b1540: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3b1540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b1544:
    // 0x3b1544: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_3b1548:
    if (ctx->pc == 0x3B1548u) {
        ctx->pc = 0x3B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1544u;
        // 0x3b1548: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B154Cu;
        goto label_3b154c;
    }
    ctx->pc = 0x3B1544u;
    {
        const bool branch_taken_0x3b1544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1544u;
        // 0x3b1548: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1544) {
            ctx->pc = 0x3B18CCu;
            goto label_3b18cc;
        }
    }
    ctx->pc = 0x3B154Cu;
label_3b154c:
    // 0x3b154c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3b154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3b1550:
    // 0x3b1550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b1554:
    if (ctx->pc == 0x3B1554u) {
        ctx->pc = 0x3B1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1550u;
        // 0x3b1554: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1558u;
        goto label_3b1558;
    }
    ctx->pc = 0x3B1550u;
    {
        const bool branch_taken_0x3b1550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1550u;
        // 0x3b1554: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1550) {
            ctx->pc = 0x3B1564u;
            goto label_3b1564;
        }
    }
    ctx->pc = 0x3B1558u;
label_3b1558:
    // 0x3b1558: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b1558u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b155c:
    // 0x3b155c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b1560:
    if (ctx->pc == 0x3B1560u) {
        ctx->pc = 0x3B1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B155Cu;
        // 0x3b1560: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1564u;
        goto label_3b1564;
    }
    ctx->pc = 0x3B155Cu;
    {
        const bool branch_taken_0x3b155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B155Cu;
        // 0x3b1560: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b155c) {
            ctx->pc = 0x3B1578u;
            goto label_3b1578;
        }
    }
    ctx->pc = 0x3B1564u;
label_3b1564:
    // 0x3b1564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b1568:
    if (ctx->pc == 0x3B1568u) {
        ctx->pc = 0x3B1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1564u;
        // 0x3b1568: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B156Cu;
        goto label_3b156c;
    }
    ctx->pc = 0x3B1564u;
    {
        const bool branch_taken_0x3b1564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1564u;
        // 0x3b1568: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1564) {
            ctx->pc = 0x3B1574u;
            goto label_3b1574;
        }
    }
    ctx->pc = 0x3B156Cu;
label_3b156c:
    // 0x3b156c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b1570:
    if (ctx->pc == 0x3B1570u) {
        ctx->pc = 0x3B1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B156Cu;
        // 0x3b1570: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1574u;
        goto label_3b1574;
    }
    ctx->pc = 0x3B156Cu;
    {
        const bool branch_taken_0x3b156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B156Cu;
        // 0x3b1570: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b156c) {
            ctx->pc = 0x3B1578u;
            goto label_3b1578;
        }
    }
    ctx->pc = 0x3B1574u;
label_3b1574:
    // 0x3b1574: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3b1574u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b1578:
    // 0x3b1578: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3b157c:
    if (ctx->pc == 0x3B157Cu) {
        ctx->pc = 0x3B157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1578u;
        // 0x3b157c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1580u;
        goto label_3b1580;
    }
    ctx->pc = 0x3B1578u;
    {
        const bool branch_taken_0x3b1578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1578u;
        // 0x3b157c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1578) {
            ctx->pc = 0x3B15A8u;
            goto label_3b15a8;
        }
    }
    ctx->pc = 0x3B1580u;
label_3b1580:
    // 0x3b1580: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3b1580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3b1584:
    // 0x3b1584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b1588:
    if (ctx->pc == 0x3B1588u) {
        ctx->pc = 0x3B1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1584u;
        // 0x3b1588: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B158Cu;
        goto label_3b158c;
    }
    ctx->pc = 0x3B1584u;
    {
        const bool branch_taken_0x3b1584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1584u;
        // 0x3b1588: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1584) {
            ctx->pc = 0x3B1594u;
            goto label_3b1594;
        }
    }
    ctx->pc = 0x3B158Cu;
label_3b158c:
    // 0x3b158c: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_3b1590:
    if (ctx->pc == 0x3B1590u) {
        ctx->pc = 0x3B1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B158Cu;
        // 0x3b1590: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1594u;
        goto label_3b1594;
    }
    ctx->pc = 0x3B158Cu;
    {
        const bool branch_taken_0x3b158c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B158Cu;
        // 0x3b1590: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b158c) {
            ctx->pc = 0x3B15F8u;
            goto label_3b15f8;
        }
    }
    ctx->pc = 0x3B1594u;
label_3b1594:
    // 0x3b1594: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1598:
    // 0x3b1598: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b1598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b159c:
    // 0x3b159c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b159cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b15a0:
    // 0x3b15a0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3b15a4:
    if (ctx->pc == 0x3B15A4u) {
        ctx->pc = 0x3B15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15A0u;
        // 0x3b15a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15A8u;
        goto label_3b15a8;
    }
    ctx->pc = 0x3B15A0u;
    {
        const bool branch_taken_0x3b15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15A0u;
        // 0x3b15a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15a0) {
            ctx->pc = 0x3B15FCu;
            goto label_3b15fc;
        }
    }
    ctx->pc = 0x3B15A8u;
label_3b15a8:
    // 0x3b15a8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b15a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b15ac:
    // 0x3b15ac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b15acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b15b0:
    // 0x3b15b0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b15b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b15b4:
    // 0x3b15b4: 0x0  nop
    ctx->pc = 0x3b15b4u;
    // NOP
label_3b15b8:
    // 0x3b15b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b15bc:
    // 0x3b15bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b15c0:
    // 0x3b15c0: 0xc0ee516  jal         func_3B9458
label_3b15c4:
    if (ctx->pc == 0x3B15C4u) {
        ctx->pc = 0x3B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15C0u;
        // 0x3b15c4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15C8u;
        goto label_3b15c8;
    }
    ctx->pc = 0x3B15C0u;
    SET_GPR_U32(ctx, 31, 0x3B15C8u);
    ctx->pc = 0x3B15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B15C0u;
    // 0x3b15c4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x3B15C0u, 0x3B15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B15C8u;
label_3b15c8:
    // 0x3b15c8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3b15c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3b15cc:
    // 0x3b15cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b15d0:
    // 0x3b15d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b15d4:
    // 0x3b15d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b15d8:
    // 0x3b15d8: 0xc0ee3a2  jal         func_3B8E88
label_3b15dc:
    if (ctx->pc == 0x3B15DCu) {
        ctx->pc = 0x3B15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15D8u;
        // 0x3b15dc: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15E0u;
        goto label_3b15e0;
    }
    ctx->pc = 0x3B15D8u;
    SET_GPR_U32(ctx, 31, 0x3B15E0u);
    ctx->pc = 0x3B15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B15D8u;
    // 0x3b15dc: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3B15D8u, 0x3B15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B15E0u;
label_3b15e0:
    // 0x3b15e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b15e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b15e4:
    // 0x3b15e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b15e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b15e8:
    // 0x3b15e8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3b15ec:
    if (ctx->pc == 0x3B15ECu) {
        ctx->pc = 0x3B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15E8u;
        // 0x3b15ec: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15F0u;
        goto label_3b15f0;
    }
    ctx->pc = 0x3B15E8u;
    {
        const bool branch_taken_0x3b15e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15E8u;
        // 0x3b15ec: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15e8) {
            ctx->pc = 0x3B15B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b15b8;
        }
    }
    ctx->pc = 0x3B15F0u;
label_3b15f0:
    // 0x3b15f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b15f4:
    if (ctx->pc == 0x3B15F4u) {
        ctx->pc = 0x3B15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15F0u;
        // 0x3b15f4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15F8u;
        goto label_3b15f8;
    }
    ctx->pc = 0x3B15F0u;
    {
        const bool branch_taken_0x3b15f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15F0u;
        // 0x3b15f4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15f0) {
            ctx->pc = 0x3B1604u;
            goto label_3b1604;
        }
    }
    ctx->pc = 0x3B15F8u;
label_3b15f8:
    // 0x3b15f8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b15f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b15fc:
    // 0x3b15fc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b15fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1600:
    // 0x3b1600: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b1604:
    // 0x3b1604: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3b1604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b1608:
    // 0x3b1608: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3b160c:
    if (ctx->pc == 0x3B160Cu) {
        ctx->pc = 0x3B160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1608u;
        // 0x3b160c: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1610u;
        goto label_3b1610;
    }
    ctx->pc = 0x3B1608u;
    {
        const bool branch_taken_0x3b1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1608u;
        // 0x3b160c: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1608) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B1610u;
label_3b1610:
    // 0x3b1610: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b1610u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b1614:
    // 0x3b1614: 0xc0c7ab8  jal         func_31EAE0
label_3b1618:
    if (ctx->pc == 0x3B1618u) {
        ctx->pc = 0x3B1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1614u;
        // 0x3b1618: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B161Cu;
        goto label_3b161c;
    }
    ctx->pc = 0x3B1614u;
    SET_GPR_U32(ctx, 31, 0x3B161Cu);
    ctx->pc = 0x3B1618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1614u;
    // 0x3b1618: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3B1614u, 0x3B161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B161Cu;
label_3b161c:
    // 0x3b161c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b161cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b1620:
    // 0x3b1620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b1624:
    // 0x3b1624: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3b1624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b1628:
    // 0x3b1628: 0x0  nop
    ctx->pc = 0x3b1628u;
    // NOP
label_3b162c:
    // 0x3b162c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3b1630:
    if (ctx->pc == 0x3B1630u) {
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B162Cu;
        // 0x3b1630: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1634u;
        goto label_3b1634;
    }
    ctx->pc = 0x3B162Cu;
    {
        const bool branch_taken_0x3b162c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B162Cu;
        // 0x3b1630: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b162c) {
            ctx->pc = 0x3B1644u;
            goto label_3b1644;
        }
    }
    ctx->pc = 0x3B1634u;
label_3b1634:
    // 0x3b1634: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b1634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1638:
    // 0x3b1638: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b163c:
    // 0x3b163c: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_3b1640:
    if (ctx->pc == 0x3B1640u) {
        ctx->pc = 0x3B1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B163Cu;
        // 0x3b1640: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1644u;
        goto label_3b1644;
    }
    ctx->pc = 0x3B163Cu;
    {
        const bool branch_taken_0x3b163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B163Cu;
        // 0x3b1640: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b163c) {
            ctx->pc = 0x3B1D5Cu;
            goto label_3b1d5c;
        }
    }
    ctx->pc = 0x3B1644u;
label_3b1644:
    // 0x3b1644: 0xc0c7b74  jal         func_31EDD0
label_3b1648:
    if (ctx->pc == 0x3B1648u) {
        ctx->pc = 0x3B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1644u;
        // 0x3b1648: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B164Cu;
        goto label_3b164c;
    }
    ctx->pc = 0x3B1644u;
    SET_GPR_U32(ctx, 31, 0x3B164Cu);
    ctx->pc = 0x3B1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1644u;
    // 0x3b1648: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3B1644u, 0x3B164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B164Cu;
label_3b164c:
    // 0x3b164c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1650:
    // 0x3b1650: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b1650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1654:
    // 0x3b1654: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3b1654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1658:
    // 0x3b1658: 0xc0ec3be  jal         func_3B0EF8
label_3b165c:
    if (ctx->pc == 0x3B165Cu) {
        ctx->pc = 0x3B165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1658u;
        // 0x3b165c: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1660u;
        goto label_3b1660;
    }
    ctx->pc = 0x3B1658u;
    SET_GPR_U32(ctx, 31, 0x3B1660u);
    ctx->pc = 0x3B165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1658u;
    // 0x3b165c: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0EF8u, 0x3B1658u, 0x3B1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1660u;
label_3b1660:
    // 0x3b1660: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3b1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1664:
    // 0x3b1664: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3b1664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b1668:
    // 0x3b1668: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3b1668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_3b166c:
    // 0x3b166c: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_3b1670:
    if (ctx->pc == 0x3B1670u) {
        ctx->pc = 0x3B1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B166Cu;
        // 0x3b1670: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1674u;
        goto label_3b1674;
    }
    ctx->pc = 0x3B166Cu;
    {
        const bool branch_taken_0x3b166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B166Cu;
        // 0x3b1670: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b166c) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1674u;
label_3b1674:
    // 0x3b1674: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b1674u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b1678:
    // 0x3b1678: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x3b1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b167c:
    // 0x3b167c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_3b1680:
    if (ctx->pc == 0x3B1680u) {
        ctx->pc = 0x3B1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B167Cu;
        // 0x3b1680: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1684u;
        goto label_3b1684;
    }
    ctx->pc = 0x3B167Cu;
    {
        const bool branch_taken_0x3b167c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B167Cu;
        // 0x3b1680: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b167c) {
            ctx->pc = 0x3B1708u;
            goto label_3b1708;
        }
    }
    ctx->pc = 0x3B1684u;
label_3b1684:
    // 0x3b1684: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1688:
    // 0x3b1688: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3b1688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b168c:
    // 0x3b168c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b168cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1690:
    // 0x3b1690: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1694:
    // 0x3b1694: 0x60f809  jalr        $v1
label_3b1698:
    if (ctx->pc == 0x3B1698u) {
        ctx->pc = 0x3B1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1694u;
        // 0x3b1698: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B169Cu;
        goto label_3b169c;
    }
    ctx->pc = 0x3B1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B169Cu);
        ctx->pc = 0x3B1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1694u;
        // 0x3b1698: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1694u, 0x3B169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B169Cu;
label_3b169c:
    // 0x3b169c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b169cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b16a0:
    // 0x3b16a0: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x3b16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_3b16a4:
    // 0x3b16a4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b16a8:
    // 0x3b16a8: 0x60f809  jalr        $v1
label_3b16ac:
    if (ctx->pc == 0x3B16ACu) {
        ctx->pc = 0x3B16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16A8u;
        // 0x3b16ac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16B0u;
        goto label_3b16b0;
    }
    ctx->pc = 0x3B16A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B16B0u);
        ctx->pc = 0x3B16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16A8u;
        // 0x3b16ac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16A8u, 0x3B16B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B16B0u;
label_3b16b0:
    // 0x3b16b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b16b4:
    // 0x3b16b4: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x3b16b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_3b16b8:
    // 0x3b16b8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b16bc:
    // 0x3b16bc: 0x60f809  jalr        $v1
label_3b16c0:
    if (ctx->pc == 0x3B16C0u) {
        ctx->pc = 0x3B16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16BCu;
        // 0x3b16c0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16C4u;
        goto label_3b16c4;
    }
    ctx->pc = 0x3B16BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B16C4u);
        ctx->pc = 0x3B16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16BCu;
        // 0x3b16c0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16BCu, 0x3B16C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B16C4u;
label_3b16c4:
    // 0x3b16c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b16c8:
    // 0x3b16c8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x3b16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3b16cc:
    // 0x3b16cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b16ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b16d0:
    // 0x3b16d0: 0x60f809  jalr        $v1
label_3b16d4:
    if (ctx->pc == 0x3B16D4u) {
        ctx->pc = 0x3B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16D0u;
        // 0x3b16d4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16D8u;
        goto label_3b16d8;
    }
    ctx->pc = 0x3B16D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B16D8u);
        ctx->pc = 0x3B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16D0u;
        // 0x3b16d4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16D0u, 0x3B16D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B16D8u;
label_3b16d8:
    // 0x3b16d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b16d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b16dc:
    // 0x3b16dc: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x3b16dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3b16e0:
    // 0x3b16e0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b16e4:
    // 0x3b16e4: 0x60f809  jalr        $v1
label_3b16e8:
    if (ctx->pc == 0x3B16E8u) {
        ctx->pc = 0x3B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16E4u;
        // 0x3b16e8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16ECu;
        goto label_3b16ec;
    }
    ctx->pc = 0x3B16E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B16ECu);
        ctx->pc = 0x3B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16E4u;
        // 0x3b16e8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16E4u, 0x3B16ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B16ECu;
label_3b16ec:
    // 0x3b16ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b16f0:
    // 0x3b16f0: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x3b16f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_3b16f4:
    // 0x3b16f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b16f8:
    // 0x3b16f8: 0x60f809  jalr        $v1
label_3b16fc:
    if (ctx->pc == 0x3B16FCu) {
        ctx->pc = 0x3B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16F8u;
        // 0x3b16fc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1700u;
        goto label_3b1700;
    }
    ctx->pc = 0x3B16F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1700u);
        ctx->pc = 0x3B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16F8u;
        // 0x3b16fc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16F8u, 0x3B1700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1700u;
label_3b1700:
    // 0x3b1700: 0x1000019e  b           . + 4 + (0x19E << 2)
label_3b1704:
    if (ctx->pc == 0x3B1704u) {
        ctx->pc = 0x3B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1700u;
        // 0x3b1704: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1708u;
        goto label_3b1708;
    }
    ctx->pc = 0x3B1700u;
    {
        const bool branch_taken_0x3b1700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1700u;
        // 0x3b1704: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1700) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1708u;
label_3b1708:
    // 0x3b1708: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3b170c:
    if (ctx->pc == 0x3B170Cu) {
        ctx->pc = 0x3B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1708u;
        // 0x3b170c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1710u;
        goto label_3b1710;
    }
    ctx->pc = 0x3B1708u;
    {
        const bool branch_taken_0x3b1708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1708u;
        // 0x3b170c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1708) {
            ctx->pc = 0x3B1768u;
            goto label_3b1768;
        }
    }
    ctx->pc = 0x3B1710u;
label_3b1710:
    // 0x3b1710: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_3b1714:
    if (ctx->pc == 0x3B1714u) {
        ctx->pc = 0x3B1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1710u;
        // 0x3b1714: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1718u;
        goto label_3b1718;
    }
    ctx->pc = 0x3B1710u;
    {
        const bool branch_taken_0x3b1710 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x3B1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1710u;
        // 0x3b1714: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1710) {
            ctx->pc = 0x3B1754u;
            goto label_3b1754;
        }
    }
    ctx->pc = 0x3B1718u;
label_3b1718:
    // 0x3b1718: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b1718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b171c:
    // 0x3b171c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b1720:
    if (ctx->pc == 0x3B1720u) {
        ctx->pc = 0x3B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B171Cu;
        // 0x3b1720: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1724u;
        goto label_3b1724;
    }
    ctx->pc = 0x3B171Cu;
    {
        const bool branch_taken_0x3b171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B171Cu;
        // 0x3b1720: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b171c) {
            ctx->pc = 0x3B1754u;
            goto label_3b1754;
        }
    }
    ctx->pc = 0x3B1724u;
label_3b1724:
    // 0x3b1724: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1728:
    // 0x3b1728: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1728u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b172c:
    // 0x3b172c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b172cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1730:
    // 0x3b1730: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1734:
    // 0x3b1734: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x3b1734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b1738:
    // 0x3b1738: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3b173c:
    if (ctx->pc == 0x3B173Cu) {
        ctx->pc = 0x3B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1738u;
        // 0x3b173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1740u;
        goto label_3b1740;
    }
    ctx->pc = 0x3B1738u;
    {
        const bool branch_taken_0x3b1738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1738u;
        // 0x3b173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1738) {
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B1740u;
label_3b1740:
    // 0x3b1740: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b1740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1744:
    // 0x3b1744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b1748:
    if (ctx->pc == 0x3B1748u) {
        ctx->pc = 0x3B1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1744u;
        // 0x3b1748: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B174Cu;
        goto label_3b174c;
    }
    ctx->pc = 0x3B1744u;
    {
        const bool branch_taken_0x3b1744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1744u;
        // 0x3b1748: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1744) {
            ctx->pc = 0x3B1730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1730;
        }
    }
    ctx->pc = 0x3B174Cu;
label_3b174c:
    // 0x3b174c: 0x10000060  b           . + 4 + (0x60 << 2)
label_3b1750:
    if (ctx->pc == 0x3B1750u) {
        ctx->pc = 0x3B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B174Cu;
        // 0x3b1750: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1754u;
        goto label_3b1754;
    }
    ctx->pc = 0x3B174Cu;
    {
        const bool branch_taken_0x3b174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B174Cu;
        // 0x3b1750: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b174c) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B1754u;
label_3b1754:
    // 0x3b1754: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1754u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1758:
    // 0x3b1758: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1758u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b175c:
    // 0x3b175c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b175cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1760:
    // 0x3b1760: 0x10000013  b           . + 4 + (0x13 << 2)
label_3b1764:
    if (ctx->pc == 0x3B1764u) {
        ctx->pc = 0x3B1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1760u;
        // 0x3b1764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1768u;
        goto label_3b1768;
    }
    ctx->pc = 0x3B1760u;
    {
        const bool branch_taken_0x3b1760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1760u;
        // 0x3b1764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1760) {
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B1768u;
label_3b1768:
    // 0x3b1768: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b1768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b176c:
    // 0x3b176c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b1770:
    if (ctx->pc == 0x3B1770u) {
        ctx->pc = 0x3B1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B176Cu;
        // 0x3b1770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1774u;
        goto label_3b1774;
    }
    ctx->pc = 0x3B176Cu;
    {
        const bool branch_taken_0x3b176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B176Cu;
        // 0x3b1770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b176c) {
            ctx->pc = 0x3B17A4u;
            goto label_3b17a4;
        }
    }
    ctx->pc = 0x3B1774u;
label_3b1774:
    // 0x3b1774: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1774u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1778:
    // 0x3b1778: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1778u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b177c:
    // 0x3b177c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b177cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1780:
    // 0x3b1780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b1780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b1784:
    // 0x3b1784: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b1788:
    // 0x3b1788: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b1788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b178c:
    // 0x3b178c: 0x0  nop
    ctx->pc = 0x3b178cu;
    // NOP
label_3b1790:
    // 0x3b1790: 0x0  nop
    ctx->pc = 0x3b1790u;
    // NOP
label_3b1794:
    // 0x3b1794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b1798:
    if (ctx->pc == 0x3B1798u) {
        ctx->pc = 0x3B179Cu;
        goto label_3b179c;
    }
    ctx->pc = 0x3B1794u;
    {
        const bool branch_taken_0x3b1794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1794) {
            ctx->pc = 0x3B1780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1780;
        }
    }
    ctx->pc = 0x3B179Cu;
label_3b179c:
    // 0x3b179c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3b17a0:
    if (ctx->pc == 0x3B17A0u) {
        ctx->pc = 0x3B17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B179Cu;
        // 0x3b17a0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17A4u;
        goto label_3b17a4;
    }
    ctx->pc = 0x3B179Cu;
    {
        const bool branch_taken_0x3b179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B179Cu;
        // 0x3b17a0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b179c) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B17A4u;
label_3b17a4:
    // 0x3b17a4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b17a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b17a8:
    // 0x3b17a8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b17a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b17ac:
    // 0x3b17ac: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b17acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b17b0:
    // 0x3b17b0: 0x10000047  b           . + 4 + (0x47 << 2)
label_3b17b4:
    if (ctx->pc == 0x3B17B4u) {
        ctx->pc = 0x3B17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17B0u;
        // 0x3b17b4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17B8u;
        goto label_3b17b8;
    }
    ctx->pc = 0x3B17B0u;
    {
        const bool branch_taken_0x3b17b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17B0u;
        // 0x3b17b4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17b0) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B17B8u;
label_3b17b8:
    // 0x3b17b8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b17b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b17bc:
    // 0x3b17bc: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x3b17bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b17c0:
    // 0x3b17c0: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x3b17c0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b17c4:
    // 0x3b17c4: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x3b17c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_3b17c8:
    // 0x3b17c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3b17c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b17cc:
    // 0x3b17cc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b17ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b17d0:
    // 0x3b17d0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3b17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3b17d4:
    // 0x3b17d4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b17d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b17d8:
    // 0x3b17d8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b17d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b17dc:
    // 0x3b17dc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b17dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b17e0:
    // 0x3b17e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b17e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b17e4:
    // 0x3b17e4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3b17e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b17e8:
    // 0x3b17e8: 0x10000038  b           . + 4 + (0x38 << 2)
label_3b17ec:
    if (ctx->pc == 0x3B17ECu) {
        ctx->pc = 0x3B17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17E8u;
        // 0x3b17ec: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17F0u;
        goto label_3b17f0;
    }
    ctx->pc = 0x3B17E8u;
    {
        const bool branch_taken_0x3b17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17E8u;
        // 0x3b17ec: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17e8) {
            ctx->pc = 0x3B18CCu;
            goto label_3b18cc;
        }
    }
    ctx->pc = 0x3B17F0u;
label_3b17f0:
    // 0x3b17f0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3b17f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3b17f4:
    // 0x3b17f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3b17f8:
    // 0x3b17f8: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3b17f8u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3b17fc:
    // 0x3b17fc: 0x2444fe90  addiu       $a0, $v0, -0x170
    ctx->pc = 0x3b17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_3b1800:
    // 0x3b1800: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3b1804:
    if (ctx->pc == 0x3B1804u) {
        ctx->pc = 0x3B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1800u;
        // 0x3b1804: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1808u;
        goto label_3b1808;
    }
    ctx->pc = 0x3B1800u;
    {
        const bool branch_taken_0x3b1800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1800u;
        // 0x3b1804: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1800) {
            ctx->pc = 0x3B1830u;
            goto label_3b1830;
        }
    }
    ctx->pc = 0x3B1808u;
label_3b1808:
    // 0x3b1808: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3b1808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3b180c:
    // 0x3b180c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b1810:
    if (ctx->pc == 0x3B1810u) {
        ctx->pc = 0x3B1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B180Cu;
        // 0x3b1810: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1814u;
        goto label_3b1814;
    }
    ctx->pc = 0x3B180Cu;
    {
        const bool branch_taken_0x3b180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B180Cu;
        // 0x3b1810: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b180c) {
            ctx->pc = 0x3B181Cu;
            goto label_3b181c;
        }
    }
    ctx->pc = 0x3B1814u;
label_3b1814:
    // 0x3b1814: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_3b1818:
    if (ctx->pc == 0x3B1818u) {
        ctx->pc = 0x3B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1814u;
        // 0x3b1818: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B181Cu;
        goto label_3b181c;
    }
    ctx->pc = 0x3B1814u;
    {
        const bool branch_taken_0x3b1814 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1814u;
        // 0x3b1818: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1814) {
            ctx->pc = 0x3B186Cu;
            goto label_3b186c;
        }
    }
    ctx->pc = 0x3B181Cu;
label_3b181c:
    // 0x3b181c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b181cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1820:
    // 0x3b1820: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b1820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3b1824:
    // 0x3b1824: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1824u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b1828:
    // 0x3b1828: 0x10000011  b           . + 4 + (0x11 << 2)
label_3b182c:
    if (ctx->pc == 0x3B182Cu) {
        ctx->pc = 0x3B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1828u;
        // 0x3b182c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1830u;
        goto label_3b1830;
    }
    ctx->pc = 0x3B1828u;
    {
        const bool branch_taken_0x3b1828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1828u;
        // 0x3b182c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1828) {
            ctx->pc = 0x3B1870u;
            goto label_3b1870;
        }
    }
    ctx->pc = 0x3B1830u;
label_3b1830:
    // 0x3b1830: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1834:
    // 0x3b1834: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b1834u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b1838:
    // 0x3b1838: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b1838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b183c:
    // 0x3b183c: 0x0  nop
    ctx->pc = 0x3b183cu;
    // NOP
label_3b1840:
    // 0x3b1840: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3b1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_3b1844:
    // 0x3b1844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b1844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3b1848:
    // 0x3b1848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b1848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3b184c:
    // 0x3b184c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3b184cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_3b1850:
    // 0x3b1850: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b1850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1854:
    // 0x3b1854: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b1854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1858:
    // 0x3b1858: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3b1858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b185c:
    // 0x3b185c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_3b1860:
    if (ctx->pc == 0x3B1860u) {
        ctx->pc = 0x3B1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B185Cu;
        // 0x3b1860: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1864u;
        goto label_3b1864;
    }
    ctx->pc = 0x3B185Cu;
    {
        const bool branch_taken_0x3b185c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B185Cu;
        // 0x3b1860: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b185c) {
            ctx->pc = 0x3B1840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1840;
        }
    }
    ctx->pc = 0x3B1864u;
label_3b1864:
    // 0x3b1864: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b1868:
    if (ctx->pc == 0x3B1868u) {
        ctx->pc = 0x3B1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1864u;
        // 0x3b1868: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B186Cu;
        goto label_3b186c;
    }
    ctx->pc = 0x3B1864u;
    {
        const bool branch_taken_0x3b1864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1864u;
        // 0x3b1868: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1864) {
            ctx->pc = 0x3B1878u;
            goto label_3b1878;
        }
    }
    ctx->pc = 0x3B186Cu;
label_3b186c:
    // 0x3b186c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b186cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b1870:
    // 0x3b1870: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b1870u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b1874:
    // 0x3b1874: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3b1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1878:
    // 0x3b1878: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3b1878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3b187c:
    // 0x3b187c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3b187cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3b1880:
    // 0x3b1880: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3b1880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b1884:
    // 0x3b1884: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3b1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b1888:
    // 0x3b1888: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3b1888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3b188c:
    // 0x3b188c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1890:
    // 0x3b1890: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x3b1890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3b1894:
    // 0x3b1894: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b1898:
    if (ctx->pc == 0x3B1898u) {
        ctx->pc = 0x3B1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1894u;
        // 0x3b1898: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B189Cu;
        goto label_3b189c;
    }
    ctx->pc = 0x3B1894u;
    {
        const bool branch_taken_0x3b1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1894u;
        // 0x3b1898: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1894) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B189Cu;
label_3b189c:
    // 0x3b189c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3b189cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_3b18a0:
    // 0x3b18a0: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_3b18a4:
    if (ctx->pc == 0x3B18A4u) {
        ctx->pc = 0x3B18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18A0u;
        // 0x3b18a4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18A8u;
        goto label_3b18a8;
    }
    ctx->pc = 0x3B18A0u;
    {
        const bool branch_taken_0x3b18a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18A0u;
        // 0x3b18a4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18a0) {
            ctx->pc = 0x3B1D78u;
            goto label_3b1d78;
        }
    }
    ctx->pc = 0x3B18A8u;
label_3b18a8:
    // 0x3b18a8: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x3b18a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_3b18ac:
    // 0x3b18ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3b18acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b18b0:
    // 0x3b18b0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b18b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b18b4:
    // 0x3b18b4: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x3b18b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_3b18b8:
    // 0x3b18b8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3b18b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3b18bc:
    // 0x3b18bc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3b18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3b18c0:
    // 0x3b18c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b18c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b18c4:
    // 0x3b18c4: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3b18c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b18c8:
    // 0x3b18c8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3b18c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3b18cc:
    // 0x3b18cc: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x3b18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3b18d0:
    // 0x3b18d0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3b18d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b18d4:
    // 0x3b18d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b18d8:
    // 0x3b18d8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3b18d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b18dc:
    // 0x3b18dc: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x3b18dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3b18e0:
    // 0x3b18e0: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x3b18e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_3b18e4:
    // 0x3b18e4: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x3b18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3b18e8:
    // 0x3b18e8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3b18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b18ec:
    // 0x3b18ec: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x3b18ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3b18f0:
    // 0x3b18f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b18f4:
    // 0x3b18f4: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x3b18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3b18f8:
    // 0x3b18f8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3b18fc:
    if (ctx->pc == 0x3B18FCu) {
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1900u;
        goto label_3b1900;
    }
    ctx->pc = 0x3B18F8u;
    {
        const bool branch_taken_0x3b18f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18f8) {
            ctx->pc = 0x3B191Cu;
            goto label_3b191c;
        }
    }
    ctx->pc = 0x3B1900u;
label_3b1900:
    // 0x3b1900: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3b1900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3b1904:
    // 0x3b1904: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b1908:
    if (ctx->pc == 0x3B1908u) {
        ctx->pc = 0x3B1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1904u;
        // 0x3b1908: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B190Cu;
        goto label_3b190c;
    }
    ctx->pc = 0x3B1904u;
    {
        const bool branch_taken_0x3b1904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1904u;
        // 0x3b1908: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1904) {
            ctx->pc = 0x3B193Cu;
            goto label_3b193c;
        }
    }
    ctx->pc = 0x3B190Cu;
label_3b190c:
    // 0x3b190c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3b190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1910:
    // 0x3b1910: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b1910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1914:
    // 0x3b1914: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b1918:
    if (ctx->pc == 0x3B1918u) {
        ctx->pc = 0x3B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1914u;
        // 0x3b1918: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B191Cu;
        goto label_3b191c;
    }
    ctx->pc = 0x3B1914u;
    {
        const bool branch_taken_0x3b1914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1914u;
        // 0x3b1918: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1914) {
            ctx->pc = 0x3B1938u;
            goto label_3b1938;
        }
    }
    ctx->pc = 0x3B191Cu;
label_3b191c:
    // 0x3b191c: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x3b191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_3b1920:
    // 0x3b1920: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b1920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b1924:
    // 0x3b1924: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b1928:
    if (ctx->pc == 0x3B1928u) {
        ctx->pc = 0x3B1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1924u;
        // 0x3b1928: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B192Cu;
        goto label_3b192c;
    }
    ctx->pc = 0x3B1924u;
    {
        const bool branch_taken_0x3b1924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1924u;
        // 0x3b1928: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1924) {
            ctx->pc = 0x3B193Cu;
            goto label_3b193c;
        }
    }
    ctx->pc = 0x3B192Cu;
label_3b192c:
    // 0x3b192c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b192cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1930:
    // 0x3b1930: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b1930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1934:
    // 0x3b1934: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x3b1934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_3b1938:
    // 0x3b1938: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x3b1938u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_3b193c:
    // 0x3b193c: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_3b1940:
    if (ctx->pc == 0x3B1940u) {
        ctx->pc = 0x3B1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B193Cu;
        // 0x3b1940: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1944u;
        goto label_3b1944;
    }
    ctx->pc = 0x3B193Cu;
    {
        const bool branch_taken_0x3b193c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B193Cu;
        // 0x3b1940: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b193c) {
            ctx->pc = 0x3B1A48u;
            goto label_3b1a48;
        }
    }
    ctx->pc = 0x3B1944u;
label_3b1944:
    // 0x3b1944: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3b1948:
    if (ctx->pc == 0x3B1948u) {
        ctx->pc = 0x3B1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1944u;
        // 0x3b1948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B194Cu;
        goto label_3b194c;
    }
    ctx->pc = 0x3B1944u;
    {
        const bool branch_taken_0x3b1944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1944u;
        // 0x3b1948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1944) {
            ctx->pc = 0x3B199Cu;
            goto label_3b199c;
        }
    }
    ctx->pc = 0x3B194Cu;
label_3b194c:
    // 0x3b194c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3b194cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1950:
    // 0x3b1950: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1950u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1954:
    // 0x3b1954: 0x0  nop
    ctx->pc = 0x3b1954u;
    // NOP
label_3b1958:
    // 0x3b1958: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3b1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3b195c:
    // 0x3b195c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1960:
    // 0x3b1960: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3b1960u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1964:
    // 0x3b1964: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1968:
    // 0x3b1968: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b196c:
    // 0x3b196c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1970:
    // 0x3b1970: 0x60f809  jalr        $v1
label_3b1974:
    if (ctx->pc == 0x3B1974u) {
        ctx->pc = 0x3B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1970u;
        // 0x3b1974: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1978u;
        goto label_3b1978;
    }
    ctx->pc = 0x3B1970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1978u);
        ctx->pc = 0x3B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1970u;
        // 0x3b1974: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1970u, 0x3B1978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1978u;
label_3b1978:
    // 0x3b1978: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b197c:
    // 0x3b197c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1980:
    // 0x3b1980: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1984:
    // 0x3b1984: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3b1984u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1988:
    // 0x3b1988: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b198c:
    // 0x3b198c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3b1990:
    if (ctx->pc == 0x3B1990u) {
        ctx->pc = 0x3B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B198Cu;
        // 0x3b1990: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1994u;
        goto label_3b1994;
    }
    ctx->pc = 0x3B198Cu;
    {
        const bool branch_taken_0x3b198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B198Cu;
        // 0x3b1990: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b198c) {
            ctx->pc = 0x3B1958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1958;
        }
    }
    ctx->pc = 0x3B1994u;
label_3b1994:
    // 0x3b1994: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b1998:
    if (ctx->pc == 0x3B1998u) {
        ctx->pc = 0x3B199Cu;
        goto label_3b199c;
    }
    ctx->pc = 0x3B1994u;
    {
        const bool branch_taken_0x3b1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1994) {
            ctx->pc = 0x3B19A0u;
            goto label_3b19a0;
        }
    }
    ctx->pc = 0x3B199Cu;
label_3b199c:
    // 0x3b199c: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b199cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b19a0:
    // 0x3b19a0: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_3b19a4:
    if (ctx->pc == 0x3B19A4u) {
        ctx->pc = 0x3B19A8u;
        goto label_3b19a8;
    }
    ctx->pc = 0x3B19A0u;
    {
        const bool branch_taken_0x3b19a0 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x3b19a0) {
            ctx->pc = 0x3B19D8u;
            goto label_3b19d8;
        }
    }
    ctx->pc = 0x3B19A8u;
label_3b19a8:
    // 0x3b19a8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3b19a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b19ac:
    // 0x3b19ac: 0x0  nop
    ctx->pc = 0x3b19acu;
    // NOP
label_3b19b0:
    // 0x3b19b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b19b4:
    // 0x3b19b4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b19b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b19b8:
    // 0x3b19b8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b19b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b19bc:
    // 0x3b19bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b19c0:
    // 0x3b19c0: 0x60f809  jalr        $v1
label_3b19c4:
    if (ctx->pc == 0x3B19C4u) {
        ctx->pc = 0x3B19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19C0u;
        // 0x3b19c4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19C8u;
        goto label_3b19c8;
    }
    ctx->pc = 0x3B19C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B19C8u);
        ctx->pc = 0x3B19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19C0u;
        // 0x3b19c4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B19C0u, 0x3B19C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B19C8u;
label_3b19c8:
    // 0x3b19c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b19cc:
    // 0x3b19cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b19d0:
    // 0x3b19d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3b19d4:
    if (ctx->pc == 0x3B19D4u) {
        ctx->pc = 0x3B19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19D0u;
        // 0x3b19d4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19D8u;
        goto label_3b19d8;
    }
    ctx->pc = 0x3B19D0u;
    {
        const bool branch_taken_0x3b19d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19D0u;
        // 0x3b19d4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19d0) {
            ctx->pc = 0x3B19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b19b0;
        }
    }
    ctx->pc = 0x3B19D8u;
label_3b19d8:
    // 0x3b19d8: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_3b19dc:
    if (ctx->pc == 0x3B19DCu) {
        ctx->pc = 0x3B19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19D8u;
        // 0x3b19dc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19E0u;
        goto label_3b19e0;
    }
    ctx->pc = 0x3B19D8u;
    {
        const bool branch_taken_0x3b19d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19D8u;
        // 0x3b19dc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19d8) {
            ctx->pc = 0x3B1A10u;
            goto label_3b1a10;
        }
    }
    ctx->pc = 0x3B19E0u;
label_3b19e0:
    // 0x3b19e0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3b19e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b19e4:
    // 0x3b19e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b19e8:
    // 0x3b19e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b19e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b19ec:
    // 0x3b19ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b19f0:
    // 0x3b19f0: 0x60f809  jalr        $v1
label_3b19f4:
    if (ctx->pc == 0x3B19F4u) {
        ctx->pc = 0x3B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19F0u;
        // 0x3b19f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19F8u;
        goto label_3b19f8;
    }
    ctx->pc = 0x3B19F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B19F8u);
        ctx->pc = 0x3B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19F0u;
        // 0x3b19f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B19F0u, 0x3B19F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B19F8u;
label_3b19f8:
    // 0x3b19f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b19fc:
    // 0x3b19fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b19fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1a00:
    // 0x3b1a00: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3b1a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1a04:
    // 0x3b1a04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3b1a08:
    if (ctx->pc == 0x3B1A08u) {
        ctx->pc = 0x3B1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A04u;
        // 0x3b1a08: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A0Cu;
        goto label_3b1a0c;
    }
    ctx->pc = 0x3B1A04u;
    {
        const bool branch_taken_0x3b1a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A04u;
        // 0x3b1a08: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a04) {
            ctx->pc = 0x3B19E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b19e0;
        }
    }
    ctx->pc = 0x3B1A0Cu;
label_3b1a0c:
    // 0x3b1a0c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1a10:
    // 0x3b1a10: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_3b1a14:
    if (ctx->pc == 0x3B1A14u) {
        ctx->pc = 0x3B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A10u;
        // 0x3b1a14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A18u;
        goto label_3b1a18;
    }
    ctx->pc = 0x3B1A10u;
    {
        const bool branch_taken_0x3b1a10 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A10u;
        // 0x3b1a14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a10) {
            ctx->pc = 0x3B166Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b166c;
        }
    }
    ctx->pc = 0x3B1A18u;
label_3b1a18:
    // 0x3b1a18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1a1c:
    // 0x3b1a1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b1a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b1a20:
    // 0x3b1a20: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1a24:
    // 0x3b1a24: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1a28:
    // 0x3b1a28: 0x60f809  jalr        $v1
label_3b1a2c:
    if (ctx->pc == 0x3B1A2Cu) {
        ctx->pc = 0x3B1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A28u;
        // 0x3b1a2c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A30u;
        goto label_3b1a30;
    }
    ctx->pc = 0x3B1A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1A30u);
        ctx->pc = 0x3B1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A28u;
        // 0x3b1a2c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A28u, 0x3B1A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A30u;
label_3b1a30:
    // 0x3b1a30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1a34:
    // 0x3b1a34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1a38:
    // 0x3b1a38: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3b1a3c:
    if (ctx->pc == 0x3B1A3Cu) {
        ctx->pc = 0x3B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A38u;
        // 0x3b1a3c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A40u;
        goto label_3b1a40;
    }
    ctx->pc = 0x3B1A38u;
    {
        const bool branch_taken_0x3b1a38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A38u;
        // 0x3b1a3c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a38) {
            ctx->pc = 0x3B1A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1a18;
        }
    }
    ctx->pc = 0x3B1A40u;
label_3b1a40:
    // 0x3b1a40: 0x100000ce  b           . + 4 + (0xCE << 2)
label_3b1a44:
    if (ctx->pc == 0x3B1A44u) {
        ctx->pc = 0x3B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A40u;
        // 0x3b1a44: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A48u;
        goto label_3b1a48;
    }
    ctx->pc = 0x3B1A40u;
    {
        const bool branch_taken_0x3b1a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A40u;
        // 0x3b1a44: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a40) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1A48u;
label_3b1a48:
    // 0x3b1a48: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3b1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3b1a4c:
    // 0x3b1a4c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_3b1a50:
    if (ctx->pc == 0x3B1A50u) {
        ctx->pc = 0x3B1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A4Cu;
        // 0x3b1a50: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A54u;
        goto label_3b1a54;
    }
    ctx->pc = 0x3B1A4Cu;
    {
        const bool branch_taken_0x3b1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A4Cu;
        // 0x3b1a50: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a4c) {
            ctx->pc = 0x3B1C2Cu;
            goto label_3b1c2c;
        }
    }
    ctx->pc = 0x3B1A54u;
label_3b1a54:
    // 0x3b1a54: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_3b1a58:
    if (ctx->pc == 0x3B1A58u) {
        ctx->pc = 0x3B1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A54u;
        // 0x3b1a58: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A5Cu;
        goto label_3b1a5c;
    }
    ctx->pc = 0x3B1A54u;
    {
        const bool branch_taken_0x3b1a54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A54u;
        // 0x3b1a58: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a54) {
            ctx->pc = 0x3B1B10u;
            goto label_3b1b10;
        }
    }
    ctx->pc = 0x3B1A5Cu;
label_3b1a5c:
    // 0x3b1a5c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b1a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1a60:
    // 0x3b1a60: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_3b1a64:
    if (ctx->pc == 0x3B1A64u) {
        ctx->pc = 0x3B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A60u;
        // 0x3b1a64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A68u;
        goto label_3b1a68;
    }
    ctx->pc = 0x3B1A60u;
    {
        const bool branch_taken_0x3b1a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A60u;
        // 0x3b1a64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a60) {
            ctx->pc = 0x3B1ABCu;
            goto label_3b1abc;
        }
    }
    ctx->pc = 0x3B1A68u;
label_3b1a68:
    // 0x3b1a68: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3b1a68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1a6c:
    // 0x3b1a6c: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1a6cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1a70:
    // 0x3b1a70: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3b1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3b1a74:
    // 0x3b1a74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1a78:
    // 0x3b1a78: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3b1a78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1a7c:
    // 0x3b1a7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1a80:
    // 0x3b1a80: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1a84:
    // 0x3b1a84: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1a88:
    // 0x3b1a88: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3b1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3b1a8c:
    // 0x3b1a8c: 0x60f809  jalr        $v1
label_3b1a90:
    if (ctx->pc == 0x3B1A90u) {
        ctx->pc = 0x3B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A8Cu;
        // 0x3b1a90: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A94u;
        goto label_3b1a94;
    }
    ctx->pc = 0x3B1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1A94u);
        ctx->pc = 0x3B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A8Cu;
        // 0x3b1a90: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A8Cu, 0x3B1A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A94u;
label_3b1a94:
    // 0x3b1a94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1a98:
    // 0x3b1a98: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1a9c:
    // 0x3b1a9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1aa0:
    // 0x3b1aa0: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3b1aa0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1aa4:
    // 0x3b1aa4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3b1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3b1aa8:
    // 0x3b1aa8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1aac:
    // 0x3b1aac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3b1ab0:
    if (ctx->pc == 0x3B1AB0u) {
        ctx->pc = 0x3B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AACu;
        // 0x3b1ab0: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AB4u;
        goto label_3b1ab4;
    }
    ctx->pc = 0x3B1AACu;
    {
        const bool branch_taken_0x3b1aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AACu;
        // 0x3b1ab0: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1aac) {
            ctx->pc = 0x3B1A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1a70;
        }
    }
    ctx->pc = 0x3B1AB4u;
label_3b1ab4:
    // 0x3b1ab4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b1ab8:
    if (ctx->pc == 0x3B1AB8u) {
        ctx->pc = 0x3B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AB4u;
        // 0x3b1ab8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1ABCu;
        goto label_3b1abc;
    }
    ctx->pc = 0x3B1AB4u;
    {
        const bool branch_taken_0x3b1ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AB4u;
        // 0x3b1ab8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ab4) {
            ctx->pc = 0x3B1AC4u;
            goto label_3b1ac4;
        }
    }
    ctx->pc = 0x3B1ABCu;
label_3b1abc:
    // 0x3b1abc: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1abcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1ac0:
    // 0x3b1ac0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3b1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1ac4:
    // 0x3b1ac4: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_3b1ac8:
    if (ctx->pc == 0x3B1AC8u) {
        ctx->pc = 0x3B1ACCu;
        goto label_3b1acc;
    }
    ctx->pc = 0x3B1AC4u;
    {
        const bool branch_taken_0x3b1ac4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3b1ac4) {
            ctx->pc = 0x3B1BBCu;
            goto label_3b1bbc;
        }
    }
    ctx->pc = 0x3B1ACCu;
label_3b1acc:
    // 0x3b1acc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1ad0:
    // 0x3b1ad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1ad4:
    // 0x3b1ad4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3b1ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b1ad8:
    // 0x3b1ad8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1adc:
    // 0x3b1adc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3b1adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3b1ae0:
    // 0x3b1ae0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1ae4:
    // 0x3b1ae4: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3b1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3b1ae8:
    // 0x3b1ae8: 0x60f809  jalr        $v1
label_3b1aec:
    if (ctx->pc == 0x3B1AECu) {
        ctx->pc = 0x3B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE8u;
        // 0x3b1aec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AF0u;
        goto label_3b1af0;
    }
    ctx->pc = 0x3B1AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1AF0u);
        ctx->pc = 0x3B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE8u;
        // 0x3b1aec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1AE8u, 0x3B1AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1AF0u;
label_3b1af0:
    // 0x3b1af0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1af4:
    // 0x3b1af4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3b1af4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1af8:
    // 0x3b1af8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1afc:
    // 0x3b1afc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3b1afcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1b00:
    // 0x3b1b00: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3b1b04:
    if (ctx->pc == 0x3B1B04u) {
        ctx->pc = 0x3B1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B00u;
        // 0x3b1b04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B08u;
        goto label_3b1b08;
    }
    ctx->pc = 0x3B1B00u;
    {
        const bool branch_taken_0x3b1b00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B00u;
        // 0x3b1b04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b00) {
            ctx->pc = 0x3B1AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1B08u;
label_3b1b08:
    // 0x3b1b08: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3b1b0c:
    if (ctx->pc == 0x3B1B0Cu) {
        ctx->pc = 0x3B1B10u;
        goto label_3b1b10;
    }
    ctx->pc = 0x3B1B08u;
    {
        const bool branch_taken_0x3b1b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1b08) {
            ctx->pc = 0x3B1BBCu;
            goto label_3b1bbc;
        }
    }
    ctx->pc = 0x3B1B10u;
label_3b1b10:
    // 0x3b1b10: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3b1b14:
    if (ctx->pc == 0x3B1B14u) {
        ctx->pc = 0x3B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B10u;
        // 0x3b1b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B18u;
        goto label_3b1b18;
    }
    ctx->pc = 0x3B1B10u;
    {
        const bool branch_taken_0x3b1b10 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B10u;
        // 0x3b1b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b10) {
            ctx->pc = 0x3B1B68u;
            goto label_3b1b68;
        }
    }
    ctx->pc = 0x3B1B18u;
label_3b1b18:
    // 0x3b1b18: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1b18u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1b1c:
    // 0x3b1b1c: 0x0  nop
    ctx->pc = 0x3b1b1cu;
    // NOP
label_3b1b20:
    // 0x3b1b20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1b24:
    // 0x3b1b24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3b1b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b1b28:
    // 0x3b1b28: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1b2c:
    // 0x3b1b2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1b30:
    // 0x3b1b30: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1b34:
    // 0x3b1b34: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3b1b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3b1b38:
    // 0x3b1b38: 0x60f809  jalr        $v1
label_3b1b3c:
    if (ctx->pc == 0x3B1B3Cu) {
        ctx->pc = 0x3B1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B38u;
        // 0x3b1b3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B40u;
        goto label_3b1b40;
    }
    ctx->pc = 0x3B1B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1B40u);
        ctx->pc = 0x3B1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B38u;
        // 0x3b1b3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B38u, 0x3B1B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1B40u;
label_3b1b40:
    // 0x3b1b40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1b44:
    // 0x3b1b44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1b48:
    // 0x3b1b48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1b4c:
    // 0x3b1b4c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3b1b4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1b50:
    // 0x3b1b50: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3b1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3b1b54:
    // 0x3b1b54: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1b58:
    // 0x3b1b58: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3b1b5c:
    if (ctx->pc == 0x3B1B5Cu) {
        ctx->pc = 0x3B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B58u;
        // 0x3b1b5c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B60u;
        goto label_3b1b60;
    }
    ctx->pc = 0x3B1B58u;
    {
        const bool branch_taken_0x3b1b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B58u;
        // 0x3b1b5c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b58) {
            ctx->pc = 0x3B1B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1b20;
        }
    }
    ctx->pc = 0x3B1B60u;
label_3b1b60:
    // 0x3b1b60: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b1b64:
    if (ctx->pc == 0x3B1B64u) {
        ctx->pc = 0x3B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B60u;
        // 0x3b1b64: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B68u;
        goto label_3b1b68;
    }
    ctx->pc = 0x3B1B60u;
    {
        const bool branch_taken_0x3b1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B60u;
        // 0x3b1b64: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b60) {
            ctx->pc = 0x3B1B70u;
            goto label_3b1b70;
        }
    }
    ctx->pc = 0x3B1B68u;
label_3b1b68:
    // 0x3b1b68: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1b68u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1b6c:
    // 0x3b1b6c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3b1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1b70:
    // 0x3b1b70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3b1b74:
    if (ctx->pc == 0x3B1B74u) {
        ctx->pc = 0x3B1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B70u;
        // 0x3b1b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1B78u;
        goto label_3b1b78;
    }
    ctx->pc = 0x3B1B70u;
    {
        const bool branch_taken_0x3b1b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B70u;
        // 0x3b1b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b70) {
            ctx->pc = 0x3B1BBCu;
            goto label_3b1bbc;
        }
    }
    ctx->pc = 0x3B1B78u;
label_3b1b78:
    // 0x3b1b78: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3b1b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1b7c:
    // 0x3b1b7c: 0x0  nop
    ctx->pc = 0x3b1b7cu;
    // NOP
label_3b1b80:
    // 0x3b1b80: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3b1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3b1b84:
    // 0x3b1b84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1b88:
    // 0x3b1b88: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3b1b88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1b8c:
    // 0x3b1b8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1b90:
    // 0x3b1b90: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1b94:
    // 0x3b1b94: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1b98:
    // 0x3b1b98: 0x60f809  jalr        $v1
label_3b1b9c:
    if (ctx->pc == 0x3B1B9Cu) {
        ctx->pc = 0x3B1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B98u;
        // 0x3b1b9c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BA0u;
        goto label_3b1ba0;
    }
    ctx->pc = 0x3B1B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1BA0u);
        ctx->pc = 0x3B1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B98u;
        // 0x3b1b9c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B98u, 0x3B1BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1BA0u;
label_3b1ba0:
    // 0x3b1ba0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1ba4:
    // 0x3b1ba4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b1ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1ba8:
    // 0x3b1ba8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1bac:
    // 0x3b1bac: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3b1bacu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1bb0:
    // 0x3b1bb0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1bb4:
    // 0x3b1bb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3b1bb8:
    if (ctx->pc == 0x3B1BB8u) {
        ctx->pc = 0x3B1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BB4u;
        // 0x3b1bb8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BBCu;
        goto label_3b1bbc;
    }
    ctx->pc = 0x3B1BB4u;
    {
        const bool branch_taken_0x3b1bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BB4u;
        // 0x3b1bb8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bb4) {
            ctx->pc = 0x3B1B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1b80;
        }
    }
    ctx->pc = 0x3B1BBCu;
label_3b1bbc:
    // 0x3b1bbc: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3b1bc0:
    if (ctx->pc == 0x3B1BC0u) {
        ctx->pc = 0x3B1BC4u;
        goto label_3b1bc4;
    }
    ctx->pc = 0x3B1BBCu;
    {
        const bool branch_taken_0x3b1bbc = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x3b1bbc) {
            ctx->pc = 0x3B1BF0u;
            goto label_3b1bf0;
        }
    }
    ctx->pc = 0x3B1BC4u;
label_3b1bc4:
    // 0x3b1bc4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3b1bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b1bc8:
    // 0x3b1bc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1bcc:
    // 0x3b1bcc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b1bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1bd0:
    // 0x3b1bd0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1bd4:
    // 0x3b1bd4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1bd8:
    // 0x3b1bd8: 0x60f809  jalr        $v1
label_3b1bdc:
    if (ctx->pc == 0x3B1BDCu) {
        ctx->pc = 0x3B1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BD8u;
        // 0x3b1bdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BE0u;
        goto label_3b1be0;
    }
    ctx->pc = 0x3B1BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1BE0u);
        ctx->pc = 0x3B1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BD8u;
        // 0x3b1bdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1BD8u, 0x3B1BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1BE0u;
label_3b1be0:
    // 0x3b1be0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1be4:
    // 0x3b1be4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1be8:
    // 0x3b1be8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3b1bec:
    if (ctx->pc == 0x3B1BECu) {
        ctx->pc = 0x3B1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BE8u;
        // 0x3b1bec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BF0u;
        goto label_3b1bf0;
    }
    ctx->pc = 0x3B1BE8u;
    {
        const bool branch_taken_0x3b1be8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BE8u;
        // 0x3b1bec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1be8) {
            ctx->pc = 0x3B1BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1bc8;
        }
    }
    ctx->pc = 0x3B1BF0u;
label_3b1bf0:
    // 0x3b1bf0: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_3b1bf4:
    if (ctx->pc == 0x3B1BF4u) {
        ctx->pc = 0x3B1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BF0u;
        // 0x3b1bf4: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1BF8u;
        goto label_3b1bf8;
    }
    ctx->pc = 0x3B1BF0u;
    {
        const bool branch_taken_0x3b1bf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1bf0) {
            ctx->pc = 0x3B1BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1BF0u;
            // 0x3b1bf4: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1BF8u;
label_3b1bf8:
    // 0x3b1bf8: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3b1bf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b1bfc:
    // 0x3b1bfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1c00:
    // 0x3b1c00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b1c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b1c04:
    // 0x3b1c04: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1c08:
    // 0x3b1c08: 0x60f809  jalr        $v1
label_3b1c0c:
    if (ctx->pc == 0x3B1C0Cu) {
        ctx->pc = 0x3B1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C08u;
        // 0x3b1c0c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C10u;
        goto label_3b1c10;
    }
    ctx->pc = 0x3B1C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1C10u);
        ctx->pc = 0x3B1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C08u;
        // 0x3b1c0c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C08u, 0x3B1C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1C10u;
label_3b1c10:
    // 0x3b1c10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1c14:
    // 0x3b1c14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1c18:
    // 0x3b1c18: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3b1c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1c1c:
    // 0x3b1c1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3b1c20:
    if (ctx->pc == 0x3B1C20u) {
        ctx->pc = 0x3B1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C1Cu;
        // 0x3b1c20: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C24u;
        goto label_3b1c24;
    }
    ctx->pc = 0x3B1C1Cu;
    {
        const bool branch_taken_0x3b1c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C1Cu;
        // 0x3b1c20: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c1c) {
            ctx->pc = 0x3B1BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1bf8;
        }
    }
    ctx->pc = 0x3B1C24u;
label_3b1c24:
    // 0x3b1c24: 0x10000055  b           . + 4 + (0x55 << 2)
label_3b1c28:
    if (ctx->pc == 0x3B1C28u) {
        ctx->pc = 0x3B1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C24u;
        // 0x3b1c28: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C2Cu;
        goto label_3b1c2c;
    }
    ctx->pc = 0x3B1C24u;
    {
        const bool branch_taken_0x3b1c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C24u;
        // 0x3b1c28: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c24) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1C2Cu;
label_3b1c2c:
    // 0x3b1c2c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b1c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1c30:
    // 0x3b1c30: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3b1c34:
    if (ctx->pc == 0x3B1C34u) {
        ctx->pc = 0x3B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C30u;
        // 0x3b1c34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C38u;
        goto label_3b1c38;
    }
    ctx->pc = 0x3B1C30u;
    {
        const bool branch_taken_0x3b1c30 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C30u;
        // 0x3b1c34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c30) {
            ctx->pc = 0x3B1C88u;
            goto label_3b1c88;
        }
    }
    ctx->pc = 0x3B1C38u;
label_3b1c38:
    // 0x3b1c38: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1c38u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1c3c:
    // 0x3b1c3c: 0x0  nop
    ctx->pc = 0x3b1c3cu;
    // NOP
label_3b1c40:
    // 0x3b1c40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1c44:
    // 0x3b1c44: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3b1c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b1c48:
    // 0x3b1c48: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1c4c:
    // 0x3b1c4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1c50:
    // 0x3b1c50: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1c54:
    // 0x3b1c54: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3b1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3b1c58:
    // 0x3b1c58: 0x60f809  jalr        $v1
label_3b1c5c:
    if (ctx->pc == 0x3B1C5Cu) {
        ctx->pc = 0x3B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C58u;
        // 0x3b1c5c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C60u;
        goto label_3b1c60;
    }
    ctx->pc = 0x3B1C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1C60u);
        ctx->pc = 0x3B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C58u;
        // 0x3b1c5c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C58u, 0x3B1C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1C60u;
label_3b1c60:
    // 0x3b1c60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1c64:
    // 0x3b1c64: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1c68:
    // 0x3b1c68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1c6c:
    // 0x3b1c6c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3b1c6cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1c70:
    // 0x3b1c70: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3b1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3b1c74:
    // 0x3b1c74: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1c78:
    // 0x3b1c78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3b1c7c:
    if (ctx->pc == 0x3B1C7Cu) {
        ctx->pc = 0x3B1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C78u;
        // 0x3b1c7c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C80u;
        goto label_3b1c80;
    }
    ctx->pc = 0x3B1C78u;
    {
        const bool branch_taken_0x3b1c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C78u;
        // 0x3b1c7c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c78) {
            ctx->pc = 0x3B1C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1c40;
        }
    }
    ctx->pc = 0x3B1C80u;
label_3b1c80:
    // 0x3b1c80: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b1c84:
    if (ctx->pc == 0x3B1C84u) {
        ctx->pc = 0x3B1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C80u;
        // 0x3b1c84: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C88u;
        goto label_3b1c88;
    }
    ctx->pc = 0x3B1C80u;
    {
        const bool branch_taken_0x3b1c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C80u;
        // 0x3b1c84: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c80) {
            ctx->pc = 0x3B1C90u;
            goto label_3b1c90;
        }
    }
    ctx->pc = 0x3B1C88u;
label_3b1c88:
    // 0x3b1c88: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3b1c88u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1c8c:
    // 0x3b1c8c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3b1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1c90:
    // 0x3b1c90: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3b1c94:
    if (ctx->pc == 0x3B1C94u) {
        ctx->pc = 0x3B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C90u;
        // 0x3b1c94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C98u;
        goto label_3b1c98;
    }
    ctx->pc = 0x3B1C90u;
    {
        const bool branch_taken_0x3b1c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C90u;
        // 0x3b1c94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c90) {
            ctx->pc = 0x3B1CDCu;
            goto label_3b1cdc;
        }
    }
    ctx->pc = 0x3B1C98u;
label_3b1c98:
    // 0x3b1c98: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3b1c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1c9c:
    // 0x3b1c9c: 0x0  nop
    ctx->pc = 0x3b1c9cu;
    // NOP
label_3b1ca0:
    // 0x3b1ca0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3b1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3b1ca4:
    // 0x3b1ca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1ca8:
    // 0x3b1ca8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3b1ca8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1cac:
    // 0x3b1cac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b1cb0:
    // 0x3b1cb0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1cb4:
    // 0x3b1cb4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1cb8:
    // 0x3b1cb8: 0x60f809  jalr        $v1
label_3b1cbc:
    if (ctx->pc == 0x3B1CBCu) {
        ctx->pc = 0x3B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CB8u;
        // 0x3b1cbc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1CC0u;
        goto label_3b1cc0;
    }
    ctx->pc = 0x3B1CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1CC0u);
        ctx->pc = 0x3B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CB8u;
        // 0x3b1cbc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1CB8u, 0x3B1CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1CC0u;
label_3b1cc0:
    // 0x3b1cc0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1cc4:
    // 0x3b1cc4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b1cc8:
    // 0x3b1cc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1ccc:
    // 0x3b1ccc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3b1cccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b1cd0:
    // 0x3b1cd0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3b1cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1cd4:
    // 0x3b1cd4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3b1cd8:
    if (ctx->pc == 0x3B1CD8u) {
        ctx->pc = 0x3B1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CD4u;
        // 0x3b1cd8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1CDCu;
        goto label_3b1cdc;
    }
    ctx->pc = 0x3B1CD4u;
    {
        const bool branch_taken_0x3b1cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CD4u;
        // 0x3b1cd8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1cd4) {
            ctx->pc = 0x3B1CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1ca0;
        }
    }
    ctx->pc = 0x3B1CDCu;
label_3b1cdc:
    // 0x3b1cdc: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3b1ce0:
    if (ctx->pc == 0x3B1CE0u) {
        ctx->pc = 0x3B1CE4u;
        goto label_3b1ce4;
    }
    ctx->pc = 0x3B1CDCu;
    {
        const bool branch_taken_0x3b1cdc = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x3b1cdc) {
            ctx->pc = 0x3B1D10u;
            goto label_3b1d10;
        }
    }
    ctx->pc = 0x3B1CE4u;
label_3b1ce4:
    // 0x3b1ce4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3b1ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b1ce8:
    // 0x3b1ce8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1cec:
    // 0x3b1cec: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b1cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b1cf0:
    // 0x3b1cf0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1cf4:
    // 0x3b1cf4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1cf8:
    // 0x3b1cf8: 0x60f809  jalr        $v1
label_3b1cfc:
    if (ctx->pc == 0x3B1CFCu) {
        ctx->pc = 0x3B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CF8u;
        // 0x3b1cfc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D00u;
        goto label_3b1d00;
    }
    ctx->pc = 0x3B1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1D00u);
        ctx->pc = 0x3B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CF8u;
        // 0x3b1cfc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1CF8u, 0x3B1D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1D00u;
label_3b1d00:
    // 0x3b1d00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1d04:
    // 0x3b1d04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1d08:
    // 0x3b1d08: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3b1d0c:
    if (ctx->pc == 0x3B1D0Cu) {
        ctx->pc = 0x3B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D08u;
        // 0x3b1d0c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D10u;
        goto label_3b1d10;
    }
    ctx->pc = 0x3B1D08u;
    {
        const bool branch_taken_0x3b1d08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D08u;
        // 0x3b1d0c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d08) {
            ctx->pc = 0x3B1CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1ce8;
        }
    }
    ctx->pc = 0x3B1D10u;
label_3b1d10:
    // 0x3b1d10: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_3b1d14:
    if (ctx->pc == 0x3B1D14u) {
        ctx->pc = 0x3B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D10u;
        // 0x3b1d14: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D18u;
        goto label_3b1d18;
    }
    ctx->pc = 0x3B1D10u;
    {
        const bool branch_taken_0x3b1d10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d10) {
            ctx->pc = 0x3B1D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1D10u;
            // 0x3b1d14: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1D18u;
label_3b1d18:
    // 0x3b1d18: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3b1d18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b1d1c:
    // 0x3b1d1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1d20:
    // 0x3b1d20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b1d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b1d24:
    // 0x3b1d24: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1d28:
    // 0x3b1d28: 0x60f809  jalr        $v1
label_3b1d2c:
    if (ctx->pc == 0x3B1D2Cu) {
        ctx->pc = 0x3B1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D28u;
        // 0x3b1d2c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D30u;
        goto label_3b1d30;
    }
    ctx->pc = 0x3B1D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1D30u);
        ctx->pc = 0x3B1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D28u;
        // 0x3b1d2c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D28u, 0x3B1D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1D30u;
label_3b1d30:
    // 0x3b1d30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1d34:
    // 0x3b1d34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1d38:
    // 0x3b1d38: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3b1d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b1d3c:
    // 0x3b1d3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3b1d40:
    if (ctx->pc == 0x3B1D40u) {
        ctx->pc = 0x3B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D3Cu;
        // 0x3b1d40: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D44u;
        goto label_3b1d44;
    }
    ctx->pc = 0x3B1D3Cu;
    {
        const bool branch_taken_0x3b1d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D3Cu;
        // 0x3b1d40: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d3c) {
            ctx->pc = 0x3B1D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1d18;
        }
    }
    ctx->pc = 0x3B1D44u;
label_3b1d44:
    // 0x3b1d44: 0x1000000d  b           . + 4 + (0xD << 2)
label_3b1d48:
    if (ctx->pc == 0x3B1D48u) {
        ctx->pc = 0x3B1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D44u;
        // 0x3b1d48: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D4Cu;
        goto label_3b1d4c;
    }
    ctx->pc = 0x3B1D44u;
    {
        const bool branch_taken_0x3b1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D44u;
        // 0x3b1d48: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d44) {
            ctx->pc = 0x3B1D7Cu;
            goto label_3b1d7c;
        }
    }
    ctx->pc = 0x3B1D4Cu;
label_3b1d4c:
    // 0x3b1d4c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_3b1d50:
    if (ctx->pc == 0x3B1D50u) {
        ctx->pc = 0x3B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D4Cu;
        // 0x3b1d50: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D54u;
        goto label_3b1d54;
    }
    ctx->pc = 0x3B1D4Cu;
    {
        const bool branch_taken_0x3b1d4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D4Cu;
        // 0x3b1d50: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d4c) {
            ctx->pc = 0x3B1D78u;
            goto label_3b1d78;
        }
    }
    ctx->pc = 0x3B1D54u;
label_3b1d54:
    // 0x3b1d54: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1d58:
    // 0x3b1d58: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3b1d5c:
    // 0x3b1d5c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1d60:
    // 0x3b1d60: 0x60f809  jalr        $v1
label_3b1d64:
    if (ctx->pc == 0x3B1D64u) {
        ctx->pc = 0x3B1D68u;
        goto label_3b1d68;
    }
    ctx->pc = 0x3B1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1D68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D60u, 0x3B1D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1D68u;
label_3b1d68:
    // 0x3b1d68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1d6c:
    // 0x3b1d6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b1d70:
    // 0x3b1d70: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_3b1d74:
    if (ctx->pc == 0x3B1D74u) {
        ctx->pc = 0x3B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D70u;
        // 0x3b1d74: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D78u;
        goto label_3b1d78;
    }
    ctx->pc = 0x3B1D70u;
    {
        const bool branch_taken_0x3b1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D70u;
        // 0x3b1d74: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d70) {
            ctx->pc = 0x3B166Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b166c;
        }
    }
    ctx->pc = 0x3B1D78u;
label_3b1d78:
    // 0x3b1d78: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3b1d78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b1d7c:
    // 0x3b1d7c: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x3b1d7cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_3b1d80:
    // 0x3b1d80: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3b1d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3b1d84:
    // 0x3b1d84: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_3b1d88:
    if (ctx->pc == 0x3B1D88u) {
        ctx->pc = 0x3B1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D84u;
        // 0x3b1d88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D8Cu;
        goto label_3b1d8c;
    }
    ctx->pc = 0x3B1D84u;
    {
        const bool branch_taken_0x3b1d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D84u;
        // 0x3b1d88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d84) {
            ctx->pc = 0x3B1130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1130;
        }
    }
    ctx->pc = 0x3B1D8Cu;
label_3b1d8c:
    // 0x3b1d8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b1d90:
    if (ctx->pc == 0x3B1D90u) {
        ctx->pc = 0x3B1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D8Cu;
        // 0x3b1d90: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D94u;
        goto label_3b1d94;
    }
    ctx->pc = 0x3B1D8Cu;
    {
        const bool branch_taken_0x3b1d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D8Cu;
        // 0x3b1d90: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d8c) {
            ctx->pc = 0x3B1DA0u;
            goto label_3b1da0;
        }
    }
    ctx->pc = 0x3B1D94u;
label_3b1d94:
    // 0x3b1d94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3b1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b1d98:
    // 0x3b1d98: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x3b1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_3b1d9c:
    // 0x3b1d9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3b1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b1da0:
    // 0x3b1da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b1da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1da4:
    // 0x3b1da4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b1da8:
    // 0x3b1da8: 0x60f809  jalr        $v1
label_3b1dac:
    if (ctx->pc == 0x3B1DACu) {
        ctx->pc = 0x3B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DA8u;
        // 0x3b1dac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1DB0u;
        goto label_3b1db0;
    }
    ctx->pc = 0x3B1DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B1DB0u);
        ctx->pc = 0x3B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DA8u;
        // 0x3b1dac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1DA8u, 0x3B1DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1DB0u;
label_3b1db0:
    // 0x3b1db0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3b1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b1db4:
    // 0x3b1db4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3b1db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3b1db8:
    // 0x3b1db8: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x3b1db8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3b1dbc:
    // 0x3b1dbc: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x3b1dbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3b1dc0:
    // 0x3b1dc0: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x3b1dc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3b1dc4:
    // 0x3b1dc4: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x3b1dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3b1dc8:
    // 0x3b1dc8: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x3b1dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3b1dcc:
    // 0x3b1dcc: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x3b1dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3b1dd0:
    // 0x3b1dd0: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x3b1dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b1dd4:
    // 0x3b1dd4: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x3b1dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b1dd8:
    // 0x3b1dd8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3b1dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3b1ddc:
    // 0x3b1ddc: 0x3e00008  jr          $ra
label_3b1de0:
    if (ctx->pc == 0x3B1DE0u) {
        ctx->pc = 0x3B1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DDCu;
        // 0x3b1de0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1DE4u;
        goto label_3b1de4;
    }
    ctx->pc = 0x3B1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DDCu;
        // 0x3b1de0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1DE4u;
label_3b1de4:
    // 0x3b1de4: 0x0  nop
    ctx->pc = 0x3b1de4u;
    // NOP
    ctx->pc = 0x3b1de8u;
}
