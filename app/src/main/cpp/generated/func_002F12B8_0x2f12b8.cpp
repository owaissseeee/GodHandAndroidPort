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

// Function: func_002F12B8
// Address: 0x2f12b8 - 0x2f1750
void func_002F12B8_0x2f12b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F12B8_0x2f12b8");
#endif

    switch (ctx->pc) {
        case 0x2f12b8u: goto label_2f12b8;
        case 0x2f12bcu: goto label_2f12bc;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12c4u: goto label_2f12c4;
        case 0x2f12c8u: goto label_2f12c8;
        case 0x2f12ccu: goto label_2f12cc;
        case 0x2f12d0u: goto label_2f12d0;
        case 0x2f12d4u: goto label_2f12d4;
        case 0x2f12d8u: goto label_2f12d8;
        case 0x2f12dcu: goto label_2f12dc;
        case 0x2f12e0u: goto label_2f12e0;
        case 0x2f12e4u: goto label_2f12e4;
        case 0x2f12e8u: goto label_2f12e8;
        case 0x2f12ecu: goto label_2f12ec;
        case 0x2f12f0u: goto label_2f12f0;
        case 0x2f12f4u: goto label_2f12f4;
        case 0x2f12f8u: goto label_2f12f8;
        case 0x2f12fcu: goto label_2f12fc;
        case 0x2f1300u: goto label_2f1300;
        case 0x2f1304u: goto label_2f1304;
        case 0x2f1308u: goto label_2f1308;
        case 0x2f130cu: goto label_2f130c;
        case 0x2f1310u: goto label_2f1310;
        case 0x2f1314u: goto label_2f1314;
        case 0x2f1318u: goto label_2f1318;
        case 0x2f131cu: goto label_2f131c;
        case 0x2f1320u: goto label_2f1320;
        case 0x2f1324u: goto label_2f1324;
        case 0x2f1328u: goto label_2f1328;
        case 0x2f132cu: goto label_2f132c;
        case 0x2f1330u: goto label_2f1330;
        case 0x2f1334u: goto label_2f1334;
        case 0x2f1338u: goto label_2f1338;
        case 0x2f133cu: goto label_2f133c;
        case 0x2f1340u: goto label_2f1340;
        case 0x2f1344u: goto label_2f1344;
        case 0x2f1348u: goto label_2f1348;
        case 0x2f134cu: goto label_2f134c;
        case 0x2f1350u: goto label_2f1350;
        case 0x2f1354u: goto label_2f1354;
        case 0x2f1358u: goto label_2f1358;
        case 0x2f135cu: goto label_2f135c;
        case 0x2f1360u: goto label_2f1360;
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1368u: goto label_2f1368;
        case 0x2f136cu: goto label_2f136c;
        case 0x2f1370u: goto label_2f1370;
        case 0x2f1374u: goto label_2f1374;
        case 0x2f1378u: goto label_2f1378;
        case 0x2f137cu: goto label_2f137c;
        case 0x2f1380u: goto label_2f1380;
        case 0x2f1384u: goto label_2f1384;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f138cu: goto label_2f138c;
        case 0x2f1390u: goto label_2f1390;
        case 0x2f1394u: goto label_2f1394;
        case 0x2f1398u: goto label_2f1398;
        case 0x2f139cu: goto label_2f139c;
        case 0x2f13a0u: goto label_2f13a0;
        case 0x2f13a4u: goto label_2f13a4;
        case 0x2f13a8u: goto label_2f13a8;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13b0u: goto label_2f13b0;
        case 0x2f13b4u: goto label_2f13b4;
        case 0x2f13b8u: goto label_2f13b8;
        case 0x2f13bcu: goto label_2f13bc;
        case 0x2f13c0u: goto label_2f13c0;
        case 0x2f13c4u: goto label_2f13c4;
        case 0x2f13c8u: goto label_2f13c8;
        case 0x2f13ccu: goto label_2f13cc;
        case 0x2f13d0u: goto label_2f13d0;
        case 0x2f13d4u: goto label_2f13d4;
        case 0x2f13d8u: goto label_2f13d8;
        case 0x2f13dcu: goto label_2f13dc;
        case 0x2f13e0u: goto label_2f13e0;
        case 0x2f13e4u: goto label_2f13e4;
        case 0x2f13e8u: goto label_2f13e8;
        case 0x2f13ecu: goto label_2f13ec;
        case 0x2f13f0u: goto label_2f13f0;
        case 0x2f13f4u: goto label_2f13f4;
        case 0x2f13f8u: goto label_2f13f8;
        case 0x2f13fcu: goto label_2f13fc;
        case 0x2f1400u: goto label_2f1400;
        case 0x2f1404u: goto label_2f1404;
        case 0x2f1408u: goto label_2f1408;
        case 0x2f140cu: goto label_2f140c;
        case 0x2f1410u: goto label_2f1410;
        case 0x2f1414u: goto label_2f1414;
        case 0x2f1418u: goto label_2f1418;
        case 0x2f141cu: goto label_2f141c;
        case 0x2f1420u: goto label_2f1420;
        case 0x2f1424u: goto label_2f1424;
        case 0x2f1428u: goto label_2f1428;
        case 0x2f142cu: goto label_2f142c;
        case 0x2f1430u: goto label_2f1430;
        case 0x2f1434u: goto label_2f1434;
        case 0x2f1438u: goto label_2f1438;
        case 0x2f143cu: goto label_2f143c;
        case 0x2f1440u: goto label_2f1440;
        case 0x2f1444u: goto label_2f1444;
        case 0x2f1448u: goto label_2f1448;
        case 0x2f144cu: goto label_2f144c;
        case 0x2f1450u: goto label_2f1450;
        case 0x2f1454u: goto label_2f1454;
        case 0x2f1458u: goto label_2f1458;
        case 0x2f145cu: goto label_2f145c;
        case 0x2f1460u: goto label_2f1460;
        case 0x2f1464u: goto label_2f1464;
        case 0x2f1468u: goto label_2f1468;
        case 0x2f146cu: goto label_2f146c;
        case 0x2f1470u: goto label_2f1470;
        case 0x2f1474u: goto label_2f1474;
        case 0x2f1478u: goto label_2f1478;
        case 0x2f147cu: goto label_2f147c;
        case 0x2f1480u: goto label_2f1480;
        case 0x2f1484u: goto label_2f1484;
        case 0x2f1488u: goto label_2f1488;
        case 0x2f148cu: goto label_2f148c;
        case 0x2f1490u: goto label_2f1490;
        case 0x2f1494u: goto label_2f1494;
        case 0x2f1498u: goto label_2f1498;
        case 0x2f149cu: goto label_2f149c;
        case 0x2f14a0u: goto label_2f14a0;
        case 0x2f14a4u: goto label_2f14a4;
        case 0x2f14a8u: goto label_2f14a8;
        case 0x2f14acu: goto label_2f14ac;
        case 0x2f14b0u: goto label_2f14b0;
        case 0x2f14b4u: goto label_2f14b4;
        case 0x2f14b8u: goto label_2f14b8;
        case 0x2f14bcu: goto label_2f14bc;
        case 0x2f14c0u: goto label_2f14c0;
        case 0x2f14c4u: goto label_2f14c4;
        case 0x2f14c8u: goto label_2f14c8;
        case 0x2f14ccu: goto label_2f14cc;
        case 0x2f14d0u: goto label_2f14d0;
        case 0x2f14d4u: goto label_2f14d4;
        case 0x2f14d8u: goto label_2f14d8;
        case 0x2f14dcu: goto label_2f14dc;
        case 0x2f14e0u: goto label_2f14e0;
        case 0x2f14e4u: goto label_2f14e4;
        case 0x2f14e8u: goto label_2f14e8;
        case 0x2f14ecu: goto label_2f14ec;
        case 0x2f14f0u: goto label_2f14f0;
        case 0x2f14f4u: goto label_2f14f4;
        case 0x2f14f8u: goto label_2f14f8;
        case 0x2f14fcu: goto label_2f14fc;
        case 0x2f1500u: goto label_2f1500;
        case 0x2f1504u: goto label_2f1504;
        case 0x2f1508u: goto label_2f1508;
        case 0x2f150cu: goto label_2f150c;
        case 0x2f1510u: goto label_2f1510;
        case 0x2f1514u: goto label_2f1514;
        case 0x2f1518u: goto label_2f1518;
        case 0x2f151cu: goto label_2f151c;
        case 0x2f1520u: goto label_2f1520;
        case 0x2f1524u: goto label_2f1524;
        case 0x2f1528u: goto label_2f1528;
        case 0x2f152cu: goto label_2f152c;
        case 0x2f1530u: goto label_2f1530;
        case 0x2f1534u: goto label_2f1534;
        case 0x2f1538u: goto label_2f1538;
        case 0x2f153cu: goto label_2f153c;
        case 0x2f1540u: goto label_2f1540;
        case 0x2f1544u: goto label_2f1544;
        case 0x2f1548u: goto label_2f1548;
        case 0x2f154cu: goto label_2f154c;
        case 0x2f1550u: goto label_2f1550;
        case 0x2f1554u: goto label_2f1554;
        case 0x2f1558u: goto label_2f1558;
        case 0x2f155cu: goto label_2f155c;
        case 0x2f1560u: goto label_2f1560;
        case 0x2f1564u: goto label_2f1564;
        case 0x2f1568u: goto label_2f1568;
        case 0x2f156cu: goto label_2f156c;
        case 0x2f1570u: goto label_2f1570;
        case 0x2f1574u: goto label_2f1574;
        case 0x2f1578u: goto label_2f1578;
        case 0x2f157cu: goto label_2f157c;
        case 0x2f1580u: goto label_2f1580;
        case 0x2f1584u: goto label_2f1584;
        case 0x2f1588u: goto label_2f1588;
        case 0x2f158cu: goto label_2f158c;
        case 0x2f1590u: goto label_2f1590;
        case 0x2f1594u: goto label_2f1594;
        case 0x2f1598u: goto label_2f1598;
        case 0x2f159cu: goto label_2f159c;
        case 0x2f15a0u: goto label_2f15a0;
        case 0x2f15a4u: goto label_2f15a4;
        case 0x2f15a8u: goto label_2f15a8;
        case 0x2f15acu: goto label_2f15ac;
        case 0x2f15b0u: goto label_2f15b0;
        case 0x2f15b4u: goto label_2f15b4;
        case 0x2f15b8u: goto label_2f15b8;
        case 0x2f15bcu: goto label_2f15bc;
        case 0x2f15c0u: goto label_2f15c0;
        case 0x2f15c4u: goto label_2f15c4;
        case 0x2f15c8u: goto label_2f15c8;
        case 0x2f15ccu: goto label_2f15cc;
        case 0x2f15d0u: goto label_2f15d0;
        case 0x2f15d4u: goto label_2f15d4;
        case 0x2f15d8u: goto label_2f15d8;
        case 0x2f15dcu: goto label_2f15dc;
        case 0x2f15e0u: goto label_2f15e0;
        case 0x2f15e4u: goto label_2f15e4;
        case 0x2f15e8u: goto label_2f15e8;
        case 0x2f15ecu: goto label_2f15ec;
        case 0x2f15f0u: goto label_2f15f0;
        case 0x2f15f4u: goto label_2f15f4;
        case 0x2f15f8u: goto label_2f15f8;
        case 0x2f15fcu: goto label_2f15fc;
        case 0x2f1600u: goto label_2f1600;
        case 0x2f1604u: goto label_2f1604;
        case 0x2f1608u: goto label_2f1608;
        case 0x2f160cu: goto label_2f160c;
        case 0x2f1610u: goto label_2f1610;
        case 0x2f1614u: goto label_2f1614;
        case 0x2f1618u: goto label_2f1618;
        case 0x2f161cu: goto label_2f161c;
        case 0x2f1620u: goto label_2f1620;
        case 0x2f1624u: goto label_2f1624;
        case 0x2f1628u: goto label_2f1628;
        case 0x2f162cu: goto label_2f162c;
        case 0x2f1630u: goto label_2f1630;
        case 0x2f1634u: goto label_2f1634;
        case 0x2f1638u: goto label_2f1638;
        case 0x2f163cu: goto label_2f163c;
        case 0x2f1640u: goto label_2f1640;
        case 0x2f1644u: goto label_2f1644;
        case 0x2f1648u: goto label_2f1648;
        case 0x2f164cu: goto label_2f164c;
        case 0x2f1650u: goto label_2f1650;
        case 0x2f1654u: goto label_2f1654;
        case 0x2f1658u: goto label_2f1658;
        case 0x2f165cu: goto label_2f165c;
        case 0x2f1660u: goto label_2f1660;
        case 0x2f1664u: goto label_2f1664;
        case 0x2f1668u: goto label_2f1668;
        case 0x2f166cu: goto label_2f166c;
        case 0x2f1670u: goto label_2f1670;
        case 0x2f1674u: goto label_2f1674;
        case 0x2f1678u: goto label_2f1678;
        case 0x2f167cu: goto label_2f167c;
        case 0x2f1680u: goto label_2f1680;
        case 0x2f1684u: goto label_2f1684;
        case 0x2f1688u: goto label_2f1688;
        case 0x2f168cu: goto label_2f168c;
        case 0x2f1690u: goto label_2f1690;
        case 0x2f1694u: goto label_2f1694;
        case 0x2f1698u: goto label_2f1698;
        case 0x2f169cu: goto label_2f169c;
        case 0x2f16a0u: goto label_2f16a0;
        case 0x2f16a4u: goto label_2f16a4;
        case 0x2f16a8u: goto label_2f16a8;
        case 0x2f16acu: goto label_2f16ac;
        case 0x2f16b0u: goto label_2f16b0;
        case 0x2f16b4u: goto label_2f16b4;
        case 0x2f16b8u: goto label_2f16b8;
        case 0x2f16bcu: goto label_2f16bc;
        case 0x2f16c0u: goto label_2f16c0;
        case 0x2f16c4u: goto label_2f16c4;
        case 0x2f16c8u: goto label_2f16c8;
        case 0x2f16ccu: goto label_2f16cc;
        case 0x2f16d0u: goto label_2f16d0;
        case 0x2f16d4u: goto label_2f16d4;
        case 0x2f16d8u: goto label_2f16d8;
        case 0x2f16dcu: goto label_2f16dc;
        case 0x2f16e0u: goto label_2f16e0;
        case 0x2f16e4u: goto label_2f16e4;
        case 0x2f16e8u: goto label_2f16e8;
        case 0x2f16ecu: goto label_2f16ec;
        case 0x2f16f0u: goto label_2f16f0;
        case 0x2f16f4u: goto label_2f16f4;
        case 0x2f16f8u: goto label_2f16f8;
        case 0x2f16fcu: goto label_2f16fc;
        case 0x2f1700u: goto label_2f1700;
        case 0x2f1704u: goto label_2f1704;
        case 0x2f1708u: goto label_2f1708;
        case 0x2f170cu: goto label_2f170c;
        case 0x2f1710u: goto label_2f1710;
        case 0x2f1714u: goto label_2f1714;
        case 0x2f1718u: goto label_2f1718;
        case 0x2f171cu: goto label_2f171c;
        case 0x2f1720u: goto label_2f1720;
        case 0x2f1724u: goto label_2f1724;
        case 0x2f1728u: goto label_2f1728;
        case 0x2f172cu: goto label_2f172c;
        case 0x2f1730u: goto label_2f1730;
        case 0x2f1734u: goto label_2f1734;
        case 0x2f1738u: goto label_2f1738;
        case 0x2f173cu: goto label_2f173c;
        case 0x2f1740u: goto label_2f1740;
        case 0x2f1744u: goto label_2f1744;
        case 0x2f1748u: goto label_2f1748;
        case 0x2f174cu: goto label_2f174c;
        default: break;
    }

    ctx->pc = 0x2f12b8u;

label_2f12b8:
    // 0x2f12b8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x2f12b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_2f12bc:
    // 0x2f12bc: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x2f12bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_2f12c0:
    // 0x2f12c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f12c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f12c4:
    // 0x2f12c4: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x2f12c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_2f12c8:
    // 0x2f12c8: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x2f12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_2f12cc:
    // 0x2f12cc: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x2f12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_2f12d0:
    // 0x2f12d0: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x2f12d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_2f12d4:
    // 0x2f12d4: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x2f12d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_2f12d8:
    // 0x2f12d8: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x2f12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_2f12dc:
    // 0x2f12dc: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x2f12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_2f12e0:
    // 0x2f12e0: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x2f12e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_2f12e4:
    // 0x2f12e4: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x2f12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_2f12e8:
    // 0x2f12e8: 0xc0befb4  jal         func_2FBED0
label_2f12ec:
    if (ctx->pc == 0x2F12ECu) {
        ctx->pc = 0x2F12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E8u;
        // 0x2f12ec: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12F0u;
        goto label_2f12f0;
    }
    ctx->pc = 0x2F12E8u;
    SET_GPR_U32(ctx, 31, 0x2F12F0u);
    ctx->pc = 0x2F12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12E8u;
    // 0x2f12ec: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F12E8u, 0x2F12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12F0u;
label_2f12f0:
    // 0x2f12f0: 0x8e4602b4  lw          $a2, 0x2B4($s2)
    ctx->pc = 0x2f12f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 692)));
label_2f12f4:
    // 0x2f12f4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2f12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2f12f8:
    // 0x2f12f8: 0x8e4502b0  lw          $a1, 0x2B0($s2)
    ctx->pc = 0x2f12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
label_2f12fc:
    // 0x2f12fc: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2f12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
label_2f1300:
    // 0x2f1300: 0xc0c180c  jal         func_306030
label_2f1304:
    if (ctx->pc == 0x2F1304u) {
        ctx->pc = 0x2F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1300u;
        // 0x2f1304: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1308u;
        goto label_2f1308;
    }
    ctx->pc = 0x2F1300u;
    SET_GPR_U32(ctx, 31, 0x2F1308u);
    ctx->pc = 0x2F1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1300u;
    // 0x2f1304: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2F1300u, 0x2F1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1308u;
label_2f1308:
    // 0x2f1308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f1308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f130c:
    // 0x2f130c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2f1310:
    if (ctx->pc == 0x2F1310u) {
        ctx->pc = 0x2F1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F130Cu;
        // 0x2f1310: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1314u;
        goto label_2f1314;
    }
    ctx->pc = 0x2F130Cu;
    {
        const bool branch_taken_0x2f130c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F130Cu;
        // 0x2f1310: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f130c) {
            ctx->pc = 0x2F1328u;
            goto label_2f1328;
        }
    }
    ctx->pc = 0x2F1314u;
label_2f1314:
    // 0x2f1314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1318:
    // 0x2f1318: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f131c:
    // 0x2f131c: 0x8c8602b0  lw          $a2, 0x2B0($a0)
    ctx->pc = 0x2f131cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_2f1320:
    // 0x2f1320: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f1324:
    if (ctx->pc == 0x2F1324u) {
        ctx->pc = 0x2F1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1320u;
        // 0x2f1324: 0x24a5ec08  addiu       $a1, $a1, -0x13F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1328u;
        goto label_2f1328;
    }
    ctx->pc = 0x2F1320u;
    {
        const bool branch_taken_0x2f1320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1320u;
        // 0x2f1324: 0x24a5ec08  addiu       $a1, $a1, -0x13F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1320) {
            ctx->pc = 0x2F1344u;
            goto label_2f1344;
        }
    }
    ctx->pc = 0x2F1328u;
label_2f1328:
    // 0x2f1328: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f1328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f132c:
    // 0x2f132c: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2f132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
label_2f1330:
    // 0x2f1330: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2f1334:
    if (ctx->pc == 0x2F1334u) {
        ctx->pc = 0x2F1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1330u;
        // 0x2f1334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1338u;
        goto label_2f1338;
    }
    ctx->pc = 0x2F1330u;
    {
        const bool branch_taken_0x2f1330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1330u;
        // 0x2f1334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1330) {
            ctx->pc = 0x2F1354u;
            goto label_2f1354;
        }
    }
    ctx->pc = 0x2F1338u;
label_2f1338:
    // 0x2f1338: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f133c:
    // 0x2f133c: 0x8c8602b0  lw          $a2, 0x2B0($a0)
    ctx->pc = 0x2f133cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_2f1340:
    // 0x2f1340: 0x24a5ec28  addiu       $a1, $a1, -0x13D8
    ctx->pc = 0x2f1340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962216));
label_2f1344:
    // 0x2f1344: 0xc0b67da  jal         func_2D9F68
label_2f1348:
    if (ctx->pc == 0x2F1348u) {
        ctx->pc = 0x2F1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1344u;
        // 0x2f1348: 0x8c8702b4  lw          $a3, 0x2B4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F134Cu;
        goto label_2f134c;
    }
    ctx->pc = 0x2F1344u;
    SET_GPR_U32(ctx, 31, 0x2F134Cu);
    ctx->pc = 0x2F1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1344u;
    // 0x2f1348: 0x8c8702b4  lw          $a3, 0x2B4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F1344u, 0x2F134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F134Cu;
label_2f134c:
    // 0x2f134c: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_2f1350:
    if (ctx->pc == 0x2F1350u) {
        ctx->pc = 0x2F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F134Cu;
        // 0x2f1350: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1354u;
        goto label_2f1354;
    }
    ctx->pc = 0x2F134Cu;
    {
        const bool branch_taken_0x2f134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F134Cu;
        // 0x2f1350: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f134c) {
            ctx->pc = 0x2F1720u;
            goto label_2f1720;
        }
    }
    ctx->pc = 0x2F1354u;
label_2f1354:
    // 0x2f1354: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f1354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2f1358:
    // 0x2f1358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f135c:
    // 0x2f135c: 0xa062b670  sb          $v0, -0x4990($v1)
    ctx->pc = 0x2f135cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948464), (uint8_t)GPR_U32(ctx, 2));
label_2f1360:
    // 0x2f1360: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2f1360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2f1364:
    // 0x2f1364: 0x24b4000c  addiu       $s4, $a1, 0xC
    ctx->pc = 0x2f1364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2f1368:
    // 0x2f1368: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f1368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f136c:
    // 0x2f136c: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x2f136cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1370:
    // 0x2f1370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f1370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f1374:
    // 0x2f1374: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f1374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f1378:
    // 0x2f1378: 0xc0ad8c4  jal         func_2B6310
label_2f137c:
    if (ctx->pc == 0x2F137Cu) {
        ctx->pc = 0x2F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1378u;
        // 0x2f137c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1380u;
        goto label_2f1380;
    }
    ctx->pc = 0x2F1378u;
    SET_GPR_U32(ctx, 31, 0x2F1380u);
    ctx->pc = 0x2F137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1378u;
    // 0x2f137c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F1378u, 0x2F1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1380u;
label_2f1380:
    // 0x2f1380: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2f1380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2f1384:
    // 0x2f1384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1388:
    // 0x2f1388: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2f1388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f138c:
    // 0x2f138c: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2f138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
label_2f1390:
    // 0x2f1390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1394:
    // 0x2f1394: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f1394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f1398:
    // 0x2f1398: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2f1398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2f139c:
    // 0x2f139c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2f139cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2f13a0:
    // 0x2f13a0: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2f13a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f13a4:
    // 0x2f13a4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2f13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f13a8:
    // 0x2f13a8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2f13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2f13ac:
    // 0x2f13ac: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2f13acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f13b0:
    // 0x2f13b0: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2f13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_2f13b4:
    // 0x2f13b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f13b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f13b8:
    // 0x2f13b8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2f13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_2f13bc:
    // 0x2f13bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f13bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f13c0:
    // 0x2f13c0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2f13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_2f13c4:
    // 0x2f13c4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2f13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_2f13c8:
    // 0x2f13c8: 0xc0c28ac  jal         func_30A2B0
label_2f13cc:
    if (ctx->pc == 0x2F13CCu) {
        ctx->pc = 0x2F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13C8u;
        // 0x2f13cc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13D0u;
        goto label_2f13d0;
    }
    ctx->pc = 0x2F13C8u;
    SET_GPR_U32(ctx, 31, 0x2F13D0u);
    ctx->pc = 0x2F13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13C8u;
    // 0x2f13cc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F13C8u, 0x2F13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13D0u;
label_2f13d0:
    // 0x2f13d0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f13d4:
    // 0x2f13d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f13d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f13d8:
    // 0x2f13d8: 0x0  nop
    ctx->pc = 0x2f13d8u;
    // NOP
label_2f13dc:
    // 0x2f13dc: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x2f13dcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[12]);
label_2f13e0:
    // 0x2f13e0: 0xc0c2ae8  jal         func_30ABA0
label_2f13e4:
    if (ctx->pc == 0x2F13E4u) {
        ctx->pc = 0x2F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13E0u;
        // 0x2f13e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13E8u;
        goto label_2f13e8;
    }
    ctx->pc = 0x2F13E0u;
    SET_GPR_U32(ctx, 31, 0x2F13E8u);
    ctx->pc = 0x2F13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13E0u;
    // 0x2f13e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x2F13E0u, 0x2F13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13E8u;
label_2f13e8:
    // 0x2f13e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2f13ec:
    // 0x2f13ec: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f13f0:
    // 0x2f13f0: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2f13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
label_2f13f4:
    // 0x2f13f4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x2f13f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_2f13f8:
    // 0x2f13f8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2f13f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f13fc:
    // 0x2f13fc: 0x3404fff0  ori         $a0, $zero, 0xFFF0
    ctx->pc = 0x2f13fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_2f1400:
    // 0x2f1400: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2f1400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2f1404:
    // 0x2f1404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f1408:
    // 0x2f1408: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f1408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f140c:
    // 0x2f140c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f140cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f1410:
    // 0x2f1410: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2f1410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2f1414:
    // 0x2f1414: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x2f1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_2f1418:
    // 0x2f1418: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f141c:
    // 0x2f141c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f141cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f1420:
    // 0x2f1420: 0x0  nop
    ctx->pc = 0x2f1420u;
    // NOP
label_2f1424:
    // 0x2f1424: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f1424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2f1428:
    // 0x2f1428: 0x3c01c4e4  lui         $at, 0xC4E4
    ctx->pc = 0x2f1428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50404 << 16));
label_2f142c:
    // 0x2f142c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1430:
    // 0x2f1430: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2f1430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2f1434:
    // 0x2f1434: 0xa4c5b672  sh          $a1, -0x498E($a2)
    ctx->pc = 0x2f1434u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294948466), (uint16_t)GPR_U32(ctx, 5));
label_2f1438:
    // 0x2f1438: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f1438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f143c:
    // 0x2f143c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2f143cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f1440:
    // 0x2f1440: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2f1440u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2f1444:
    // 0x2f1444: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2f1444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f1448:
    // 0x2f1448: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2f144c:
    if (ctx->pc == 0x2F144Cu) {
        ctx->pc = 0x2F144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1448u;
        // 0x2f144c: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1450u;
        goto label_2f1450;
    }
    ctx->pc = 0x2F1448u;
    {
        const bool branch_taken_0x2f1448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1448u;
        // 0x2f144c: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1448) {
            ctx->pc = 0x2F1458u;
            goto label_2f1458;
        }
    }
    ctx->pc = 0x2F1450u;
label_2f1450:
    // 0x2f1450: 0x24a20005  addiu       $v0, $a1, 0x5
    ctx->pc = 0x2f1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_2f1454:
    // 0x2f1454: 0xa4c2b672  sh          $v0, -0x498E($a2)
    ctx->pc = 0x2f1454u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294948466), (uint16_t)GPR_U32(ctx, 2));
label_2f1458:
    // 0x2f1458: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f1458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f145c:
    // 0x2f145c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f145cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2f1460:
    // 0x2f1460: 0x2462b660  addiu       $v0, $v1, -0x49A0
    ctx->pc = 0x2f1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948448));
label_2f1464:
    // 0x2f1464: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f1464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f1468:
    // 0x2f1468: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_2f146c:
    if (ctx->pc == 0x2F146Cu) {
        ctx->pc = 0x2F146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1468u;
        // 0x2f146c: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1470u;
        goto label_2f1470;
    }
    ctx->pc = 0x2F1468u;
    {
        const bool branch_taken_0x2f1468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1468u;
        // 0x2f146c: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1468) {
            ctx->pc = 0x2F147Cu;
            goto label_2f147c;
        }
    }
    ctx->pc = 0x2F1470u;
label_2f1470:
    // 0x2f1470: 0xe463b660  swc1        $f3, -0x49A0($v1)
    ctx->pc = 0x2f1470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294948448), bits); }
label_2f1474:
    // 0x2f1474: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f1478:
    // 0x2f1478: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f1478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f147c:
    // 0x2f147c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2f147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f1480:
    // 0x2f1480: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2f1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1484:
    // 0x2f1484: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f1484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f1488:
    // 0x2f1488: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f1488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f148c:
    // 0x2f148c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2f148cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1490:
    // 0x2f1490: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f1490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2f1494:
    // 0x2f1494: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f1494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f1498:
    // 0x2f1498: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f1498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f149c:
    // 0x2f149c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f14a0:
    // 0x2f14a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2f14a4:
    // 0x2f14a4: 0x90623bb0  lbu         $v0, 0x3BB0($v1)
    ctx->pc = 0x2f14a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15280)));
label_2f14a8:
    // 0x2f14a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f14ac:
    if (ctx->pc == 0x2F14ACu) {
        ctx->pc = 0x2F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A8u;
        // 0x2f14ac: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14B0u;
        goto label_2f14b0;
    }
    ctx->pc = 0x2F14A8u;
    {
        const bool branch_taken_0x2f14a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A8u;
        // 0x2f14ac: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14a8) {
            ctx->pc = 0x2F14CCu;
            goto label_2f14cc;
        }
    }
    ctx->pc = 0x2F14B0u;
label_2f14b0:
    // 0x2f14b0: 0xc7c03bb4  lwc1        $f0, 0x3BB4($fp)
    ctx->pc = 0x2f14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 15284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f14b4:
    // 0x2f14b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2f14b8:
    // 0x2f14b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f14b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f14bc:
    // 0x2f14bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f14bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f14c0:
    // 0x2f14c0: 0x0  nop
    ctx->pc = 0x2f14c0u;
    // NOP
label_2f14c4:
    // 0x2f14c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f14c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f14c8:
    // 0x2f14c8: 0xe7c03bb4  swc1        $f0, 0x3BB4($fp)
    ctx->pc = 0x2f14c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 15284), bits); }
label_2f14cc:
    // 0x2f14cc: 0xc7c03bb4  lwc1        $f0, 0x3BB4($fp)
    ctx->pc = 0x2f14ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 15284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f14d0:
    // 0x2f14d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f14d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f14d4:
    // 0x2f14d4: 0x0  nop
    ctx->pc = 0x2f14d4u;
    // NOP
label_2f14d8:
    // 0x2f14d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f14d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f14dc:
    // 0x2f14dc: 0x0  nop
    ctx->pc = 0x2f14dcu;
    // NOP
label_2f14e0:
    // 0x2f14e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f14e4:
    if (ctx->pc == 0x2F14E4u) {
        ctx->pc = 0x2F14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14E0u;
        // 0x2f14e4: 0x2ae30015  slti        $v1, $s7, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14E8u;
        goto label_2f14e8;
    }
    ctx->pc = 0x2F14E0u;
    {
        const bool branch_taken_0x2f14e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14E0u;
        // 0x2f14e4: 0x2ae30015  slti        $v1, $s7, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14e0) {
            ctx->pc = 0x2F14F0u;
            goto label_2f14f0;
        }
    }
    ctx->pc = 0x2F14E8u;
label_2f14e8:
    // 0x2f14e8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2f14ec:
    if (ctx->pc == 0x2F14ECu) {
        ctx->pc = 0x2F14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14E8u;
        // 0x2f14ec: 0xe7c13bb4  swc1        $f1, 0x3BB4($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 15284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14F0u;
        goto label_2f14f0;
    }
    ctx->pc = 0x2F14E8u;
    {
        const bool branch_taken_0x2f14e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14E8u;
        // 0x2f14ec: 0xe7c13bb4  swc1        $f1, 0x3BB4($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 15284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14e8) {
            ctx->pc = 0x2F171Cu;
            goto label_2f171c;
        }
    }
    ctx->pc = 0x2F14F0u;
label_2f14f0:
    // 0x2f14f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2f14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2f14f4:
    // 0x2f14f4: 0x43b80a  movz        $s7, $v0, $v1
    ctx->pc = 0x2f14f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2f14f8:
    // 0x2f14f8: 0x1ae00088  blez        $s7, . + 4 + (0x88 << 2)
label_2f14fc:
    if (ctx->pc == 0x2F14FCu) {
        ctx->pc = 0x2F14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14F8u;
        // 0x2f14fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1500u;
        goto label_2f1500;
    }
    ctx->pc = 0x2F14F8u;
    {
        const bool branch_taken_0x2f14f8 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x2F14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14F8u;
        // 0x2f14fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14f8) {
            ctx->pc = 0x2F171Cu;
            goto label_2f171c;
        }
    }
    ctx->pc = 0x2F1500u;
label_2f1500:
    // 0x2f1500: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f1504:
    // 0x2f1504: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2f1504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f1508:
    // 0x2f1508: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x2f1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_2f150c:
    // 0x2f150c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2f150cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f1510:
    // 0x2f1510: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x2f1510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_2f1514:
    // 0x2f1514: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x2f1514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f1518:
    // 0x2f1518: 0x27b60130  addiu       $s6, $sp, 0x130
    ctx->pc = 0x2f1518u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2f151c:
    // 0x2f151c: 0x0  nop
    ctx->pc = 0x2f151cu;
    // NOP
label_2f1520:
    // 0x2f1520: 0xc0beae2  jal         func_2FAB88
label_2f1524:
    if (ctx->pc == 0x2F1524u) {
        ctx->pc = 0x2F1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1520u;
        // 0x2f1524: 0x92840133  lbu         $a0, 0x133($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 307)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1528u;
        goto label_2f1528;
    }
    ctx->pc = 0x2F1520u;
    SET_GPR_U32(ctx, 31, 0x2F1528u);
    ctx->pc = 0x2F1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1520u;
    // 0x2f1524: 0x92840133  lbu         $a0, 0x133($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 307)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB88u, 0x2F1520u, 0x2F1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1528u;
label_2f1528:
    // 0x2f1528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f152c:
    // 0x2f152c: 0x52000078  beql        $s0, $zero, . + 4 + (0x78 << 2)
label_2f1530:
    if (ctx->pc == 0x2F1530u) {
        ctx->pc = 0x2F1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F152Cu;
        // 0x2f1530: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1534u;
        goto label_2f1534;
    }
    ctx->pc = 0x2F152Cu;
    {
        const bool branch_taken_0x2f152c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f152c) {
            ctx->pc = 0x2F1530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F152Cu;
            // 0x2f1530: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1710u;
            goto label_2f1710;
        }
    }
    ctx->pc = 0x2F1534u;
label_2f1534:
    // 0x2f1534: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2f1534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2f1538:
    // 0x2f1538: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2f1538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2f153c:
    // 0x2f153c: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x2f153cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2f1540:
    // 0x2f1540: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2f1540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f1544:
    // 0x2f1544: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2f1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1548:
    // 0x2f1548: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2f1548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f154c:
    // 0x2f154c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f154cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f1550:
    // 0x2f1550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f1550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1554:
    // 0x2f1554: 0xe6b40004  swc1        $f20, 0x4($s5)
    ctx->pc = 0x2f1554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_2f1558:
    // 0x2f1558: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2f1558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f155c:
    // 0x2f155c: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x2f155cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2f1560:
    // 0x2f1560: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x2f1560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_2f1564:
    // 0x2f1564: 0xe6340040  swc1        $f20, 0x40($s1)
    ctx->pc = 0x2f1564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_2f1568:
    // 0x2f1568: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2f1568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_2f156c:
    // 0x2f156c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f156cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f1570:
    // 0x2f1570: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x2f1570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_2f1574:
    // 0x2f1574: 0xa3a000dd  sb          $zero, 0xDD($sp)
    ctx->pc = 0x2f1574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 0));
label_2f1578:
    // 0x2f1578: 0xa3a000de  sb          $zero, 0xDE($sp)
    ctx->pc = 0x2f1578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 0));
label_2f157c:
    // 0x2f157c: 0xa223004f  sb          $v1, 0x4F($s1)
    ctx->pc = 0x2f157cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 3));
label_2f1580:
    // 0x2f1580: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2f1580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2f1584:
    // 0x2f1584: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x2f1584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1588:
    // 0x2f1588: 0xa7a00100  sh          $zero, 0x100($sp)
    ctx->pc = 0x2f1588u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 0));
label_2f158c:
    // 0x2f158c: 0xa7a00102  sh          $zero, 0x102($sp)
    ctx->pc = 0x2f158cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 0));
label_2f1590:
    // 0x2f1590: 0xa3a00104  sb          $zero, 0x104($sp)
    ctx->pc = 0x2f1590u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 0));
label_2f1594:
    // 0x2f1594: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x2f1594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_2f1598:
    // 0x2f1598: 0x6a44018f  ldl         $a0, 0x18F($s2)
    ctx->pc = 0x2f1598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2f159c:
    // 0x2f159c: 0x6e440188  ldr         $a0, 0x188($s2)
    ctx->pc = 0x2f159cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2f15a0:
    // 0x2f15a0: 0x6a450197  ldl         $a1, 0x197($s2)
    ctx->pc = 0x2f15a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2f15a4:
    // 0x2f15a4: 0x6e450190  ldr         $a1, 0x190($s2)
    ctx->pc = 0x2f15a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2f15a8:
    // 0x2f15a8: 0xb3a400c7  sdl         $a0, 0xC7($sp)
    ctx->pc = 0x2f15a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f15ac:
    // 0x2f15ac: 0xb7a400c0  sdr         $a0, 0xC0($sp)
    ctx->pc = 0x2f15acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f15b0:
    // 0x2f15b0: 0xb3a500cf  sdl         $a1, 0xCF($sp)
    ctx->pc = 0x2f15b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f15b4:
    // 0x2f15b4: 0xb7a500c8  sdr         $a1, 0xC8($sp)
    ctx->pc = 0x2f15b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f15b8:
    // 0x2f15b8: 0xc7c03bb4  lwc1        $f0, 0x3BB4($fp)
    ctx->pc = 0x2f15b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 15284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f15bc:
    // 0x2f15bc: 0xc0c73f8  jal         func_31CFE0
label_2f15c0:
    if (ctx->pc == 0x2F15C0u) {
        ctx->pc = 0x2F15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15BCu;
        // 0x2f15c0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15C4u;
        goto label_2f15c4;
    }
    ctx->pc = 0x2F15BCu;
    SET_GPR_U32(ctx, 31, 0x2F15C4u);
    ctx->pc = 0x2F15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15BCu;
    // 0x2f15c0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2F15BCu, 0x2F15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15C4u;
label_2f15c4:
    // 0x2f15c4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f15c8:
    // 0x2f15c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f15c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f15cc:
    // 0x2f15cc: 0x8647023a  lh          $a3, 0x23A($s2)
    ctx->pc = 0x2f15ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 570)));
label_2f15d0:
    // 0x2f15d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f15d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f15d4:
    // 0x2f15d4: 0x8e490108  lw          $t1, 0x108($s2)
    ctx->pc = 0x2f15d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_2f15d8:
    // 0x2f15d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f15d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f15dc:
    // 0x2f15dc: 0x8e4b010c  lw          $t3, 0x10C($s2)
    ctx->pc = 0x2f15dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f15e0:
    // 0x2f15e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f15e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f15e4:
    // 0x2f15e4: 0x9648023c  lhu         $t0, 0x23C($s2)
    ctx->pc = 0x2f15e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 572)));
label_2f15e8:
    // 0x2f15e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2f15ec:
    // 0x2f15ec: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2f15ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_2f15f0:
    // 0x2f15f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f15f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2f15f4:
    // 0x2f15f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f15f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f15f8:
    // 0x2f15f8: 0xae420220  sw          $v0, 0x220($s2)
    ctx->pc = 0x2f15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 2));
label_2f15fc:
    // 0x2f15fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2f1600:
    // 0x2f1600: 0xc0c03be  jal         func_300EF8
label_2f1604:
    if (ctx->pc == 0x2F1604u) {
        ctx->pc = 0x2F1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1600u;
        // 0x2f1604: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1608u;
        goto label_2f1608;
    }
    ctx->pc = 0x2F1600u;
    SET_GPR_U32(ctx, 31, 0x2F1608u);
    ctx->pc = 0x2F1604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1600u;
    // 0x2f1604: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EF8u, 0x2F1600u, 0x2F1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1608u;
label_2f1608:
    // 0x2f1608: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2f1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f160c:
    // 0x2f160c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1610:
    // 0x2f1610: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x2f1610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2f1614:
    // 0x2f1614: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2f1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2f1618:
    // 0x2f1618: 0x40f809  jalr        $v0
label_2f161c:
    if (ctx->pc == 0x2F161Cu) {
        ctx->pc = 0x2F161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1618u;
        // 0x2f161c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1620u;
        goto label_2f1620;
    }
    ctx->pc = 0x2F1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1620u);
        ctx->pc = 0x2F161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1618u;
        // 0x2f161c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1618u, 0x2F1620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1620u;
label_2f1620:
    // 0x2f1620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f1624:
    if (ctx->pc == 0x2F1624u) {
        ctx->pc = 0x2F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1620u;
        // 0x2f1624: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1628u;
        goto label_2f1628;
    }
    ctx->pc = 0x2F1620u;
    {
        const bool branch_taken_0x2f1620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1620u;
        // 0x2f1624: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1620) {
            ctx->pc = 0x2F1638u;
            goto label_2f1638;
        }
    }
    ctx->pc = 0x2F1628u;
label_2f1628:
    // 0x2f1628: 0xc0bef94  jal         func_2FBE50
label_2f162c:
    if (ctx->pc == 0x2F162Cu) {
        ctx->pc = 0x2F162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1628u;
        // 0x2f162c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1630u;
        goto label_2f1630;
    }
    ctx->pc = 0x2F1628u;
    SET_GPR_U32(ctx, 31, 0x2F1630u);
    ctx->pc = 0x2F162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1628u;
    // 0x2f162c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F1628u, 0x2F1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1630u;
label_2f1630:
    // 0x2f1630: 0x10000037  b           . + 4 + (0x37 << 2)
label_2f1634:
    if (ctx->pc == 0x2F1634u) {
        ctx->pc = 0x2F1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1630u;
        // 0x2f1634: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1638u;
        goto label_2f1638;
    }
    ctx->pc = 0x2F1630u;
    {
        const bool branch_taken_0x2f1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1630u;
        // 0x2f1634: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1630) {
            ctx->pc = 0x2F1710u;
            goto label_2f1710;
        }
    }
    ctx->pc = 0x2F1638u;
label_2f1638:
    // 0x2f1638: 0xc0ad8c4  jal         func_2B6310
label_2f163c:
    if (ctx->pc == 0x2F163Cu) {
        ctx->pc = 0x2F163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1638u;
        // 0x2f163c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1640u;
        goto label_2f1640;
    }
    ctx->pc = 0x2F1638u;
    SET_GPR_U32(ctx, 31, 0x2F1640u);
    ctx->pc = 0x2F163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1638u;
    // 0x2f163c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F1638u, 0x2F1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1640u;
label_2f1640:
    // 0x2f1640: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_2f1644:
    if (ctx->pc == 0x2F1644u) {
        ctx->pc = 0x2F1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1640u;
        // 0x2f1644: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1648u;
        goto label_2f1648;
    }
    ctx->pc = 0x2F1640u;
    {
        const bool branch_taken_0x2f1640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1640u;
        // 0x2f1644: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1640) {
            ctx->pc = 0x2F1674u;
            goto label_2f1674;
        }
    }
    ctx->pc = 0x2F1648u;
label_2f1648:
    // 0x2f1648: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x2f1648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f164c:
    // 0x2f164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1650:
    // 0x2f1650: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2f1650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1654:
    // 0x2f1654: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f1654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f1658:
    // 0x2f1658: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2f1658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f165c:
    // 0x2f165c: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2f165cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f1660:
    // 0x2f1660: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2f1660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f1664:
    // 0x2f1664: 0xc0ad8a2  jal         func_2B6288
label_2f1668:
    if (ctx->pc == 0x2F1668u) {
        ctx->pc = 0x2F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1664u;
        // 0x2f1668: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F166Cu;
        goto label_2f166c;
    }
    ctx->pc = 0x2F1664u;
    SET_GPR_U32(ctx, 31, 0x2F166Cu);
    ctx->pc = 0x2F1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1664u;
    // 0x2f1668: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F1664u, 0x2F166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F166Cu;
label_2f166c:
    // 0x2f166c: 0x10000026  b           . + 4 + (0x26 << 2)
label_2f1670:
    if (ctx->pc == 0x2F1670u) {
        ctx->pc = 0x2F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F166Cu;
        // 0x2f1670: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1674u;
        goto label_2f1674;
    }
    ctx->pc = 0x2F166Cu;
    {
        const bool branch_taken_0x2f166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F166Cu;
        // 0x2f1670: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f166c) {
            ctx->pc = 0x2F1708u;
            goto label_2f1708;
        }
    }
    ctx->pc = 0x2F1674u;
label_2f1674:
    // 0x2f1674: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f1674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1678:
    // 0x2f1678: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2f1678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2f167c:
    // 0x2f167c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1680:
    // 0x2f1680: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2f1680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2f1684:
    // 0x2f1684: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2f1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2f1688:
    // 0x2f1688: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f1688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2f168c:
    // 0x2f168c: 0x0  nop
    ctx->pc = 0x2f168cu;
    // NOP
label_2f1690:
    // 0x2f1690: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f1690u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2f1694:
    // 0x2f1694: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f1694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1698:
    // 0x2f1698: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f169c:
    // 0x2f169c: 0xdba40130  lqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f169cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2f16a0:
    // 0x2f16a0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2f16a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2f16a4:
    // 0x2f16a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f16a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2f16a8:
    // 0x2f16a8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f16a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2f16ac:
    // 0x2f16ac: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f16b0:
    // 0x2f16b0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f16b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2f16b4:
    // 0x2f16b4: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x2f16b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f16b8:
    // 0x2f16b8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f16bc:
    // 0x2f16bc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f16bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f16c0:
    // 0x2f16c0: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f16c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f16c4:
    // 0x2f16c4: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2f16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2f16c8:
    // 0x2f16c8: 0xdba40130  lqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f16c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2f16cc:
    // 0x2f16cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f16ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f16d0:
    // 0x2f16d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f16d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2f16d4:
    // 0x2f16d4: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x2f16d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f16d8:
    // 0x2f16d8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f16d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2f16dc:
    // 0x2f16dc: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x2f16dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f16e0:
    // 0x2f16e0: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x2f16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f16e4:
    // 0x2f16e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f16e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f16e8:
    // 0x2f16e8: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2f16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f16ec:
    // 0x2f16ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f16ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f16f0:
    // 0x2f16f0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2f16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f16f4:
    // 0x2f16f4: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2f16f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f16f8:
    // 0x2f16f8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2f16f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f16fc:
    // 0x2f16fc: 0xc0ad8a2  jal         func_2B6288
label_2f1700:
    if (ctx->pc == 0x2F1700u) {
        ctx->pc = 0x2F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16FCu;
        // 0x2f1700: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1704u;
        goto label_2f1704;
    }
    ctx->pc = 0x2F16FCu;
    SET_GPR_U32(ctx, 31, 0x2F1704u);
    ctx->pc = 0x2F1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16FCu;
    // 0x2f1700: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F16FCu, 0x2F1704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1704u;
label_2f1704:
    // 0x2f1704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1708:
    // 0x2f1708: 0xa6030238  sh          $v1, 0x238($s0)
    ctx->pc = 0x2f1708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 568), (uint16_t)GPR_U32(ctx, 3));
label_2f170c:
    // 0x2f170c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f170cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f1710:
    // 0x2f1710: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x2f1710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2f1714:
    // 0x2f1714: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_2f1718:
    if (ctx->pc == 0x2F1718u) {
        ctx->pc = 0x2F1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1714u;
        // 0x2f1718: 0x269402f0  addiu       $s4, $s4, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F171Cu;
        goto label_2f171c;
    }
    ctx->pc = 0x2F1714u;
    {
        const bool branch_taken_0x2f1714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1714u;
        // 0x2f1718: 0x269402f0  addiu       $s4, $s4, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1714) {
            ctx->pc = 0x2F1520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1520;
        }
    }
    ctx->pc = 0x2F171Cu;
label_2f171c:
    // 0x2f171c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x2f171cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f1720:
    // 0x2f1720: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x2f1720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f1724:
    // 0x2f1724: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x2f1724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f1728:
    // 0x2f1728: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x2f1728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f172c:
    // 0x2f172c: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x2f172cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f1730:
    // 0x2f1730: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x2f1730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f1734:
    // 0x2f1734: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x2f1734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f1738:
    // 0x2f1738: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x2f1738u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f173c:
    // 0x2f173c: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x2f173cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2f1740:
    // 0x2f1740: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x2f1740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2f1744:
    // 0x2f1744: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2f1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f1748:
    // 0x2f1748: 0x3e00008  jr          $ra
label_2f174c:
    if (ctx->pc == 0x2F174Cu) {
        ctx->pc = 0x2F174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1748u;
        // 0x2f174c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1750u;
        goto label_fallthrough_0x2f1748;
    }
    ctx->pc = 0x2F1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1748u;
        // 0x2f174c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1748:
    ctx->pc = 0x2F1750u;
}
