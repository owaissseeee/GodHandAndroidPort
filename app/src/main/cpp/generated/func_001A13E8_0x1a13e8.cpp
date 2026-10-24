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

// Function: func_001A13E8
// Address: 0x1a13e8 - 0x1a1690
void func_001A13E8_0x1a13e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A13E8_0x1a13e8");
#endif

    switch (ctx->pc) {
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a13f4u: goto label_1a13f4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1464u: goto label_1a1464;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1470u: goto label_1a1470;
        case 0x1a1474u: goto label_1a1474;
        case 0x1a1478u: goto label_1a1478;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a1488u: goto label_1a1488;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1494u: goto label_1a1494;
        case 0x1a1498u: goto label_1a1498;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14a4u: goto label_1a14a4;
        case 0x1a14a8u: goto label_1a14a8;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a14b4u: goto label_1a14b4;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14bcu: goto label_1a14bc;
        case 0x1a14c0u: goto label_1a14c0;
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14ccu: goto label_1a14cc;
        case 0x1a14d0u: goto label_1a14d0;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14d8u: goto label_1a14d8;
        case 0x1a14dcu: goto label_1a14dc;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14e4u: goto label_1a14e4;
        case 0x1a14e8u: goto label_1a14e8;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a14f0u: goto label_1a14f0;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a14f8u: goto label_1a14f8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1508u: goto label_1a1508;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1510u: goto label_1a1510;
        case 0x1a1514u: goto label_1a1514;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a151cu: goto label_1a151c;
        case 0x1a1520u: goto label_1a1520;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1528u: goto label_1a1528;
        case 0x1a152cu: goto label_1a152c;
        case 0x1a1530u: goto label_1a1530;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1538u: goto label_1a1538;
        case 0x1a153cu: goto label_1a153c;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a160cu: goto label_1a160c;
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        case 0x1a1674u: goto label_1a1674;
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        default: break;
    }

    ctx->pc = 0x1a13e8u;

label_1a13e8:
    // 0x1a13e8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a13e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a13ec:
    // 0x1a13ec: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a13ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1a13f0:
    // 0x1a13f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a13f4:
    // 0x1a13f4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1a13f8:
    // 0x1a13f8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1a13fc:
    // 0x1a13fc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a13fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1a1400:
    // 0x1a1400: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1a1404:
    // 0x1a1404: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a1404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1a1408:
    // 0x1a1408: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a1408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1a140c:
    // 0x1a140c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1a1410:
    // 0x1a1410: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a1410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1a1414:
    // 0x1a1414: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a1418:
    // 0x1a1418: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1a1418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1a141c:
    // 0x1a141c: 0xc06ddac  jal         func_1B76B0
label_1a1420:
    if (ctx->pc == 0x1A1420u) {
        ctx->pc = 0x1A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A141Cu;
        // 0x1a1420: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1424u;
        goto label_1a1424;
    }
    ctx->pc = 0x1A141Cu;
    SET_GPR_U32(ctx, 31, 0x1A1424u);
    ctx->pc = 0x1A1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A141Cu;
    // 0x1a1420: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A141Cu, 0x1A1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1424u;
label_1a1424:
    // 0x1a1424: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1a1428:
    if (ctx->pc == 0x1A1428u) {
        ctx->pc = 0x1A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1424u;
        // 0x1a1428: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A142Cu;
        goto label_1a142c;
    }
    ctx->pc = 0x1A1424u;
    {
        const bool branch_taken_0x1a1424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1424u;
        // 0x1a1428: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1424) {
            ctx->pc = 0x1A1654u;
            goto label_1a1654;
        }
    }
    ctx->pc = 0x1A142Cu;
label_1a142c:
    // 0x1a142c: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x1a142cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1a1430:
    // 0x1a1430: 0x24476e40  addiu       $a3, $v0, 0x6E40
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28224));
label_1a1434:
    // 0x1a1434: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1a1434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a1438:
    // 0x1a1438: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1a1438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a143c:
    // 0x1a143c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1a143cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a1440:
    // 0x1a1440: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1a1440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a1444:
    // 0x1a1444: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1a1444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a1448:
    // 0x1a1448: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1a1448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a144c:
    // 0x1a144c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1a144cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1450:
    // 0x1a1450: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1a1450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1454:
    // 0x1a1454: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1a1454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1458:
    // 0x1a1458: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1a1458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a145c:
    // 0x1a145c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a145cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1460:
    // 0x1a1460: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a1460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1464:
    // 0x1a1464: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1a1464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a1468:
    // 0x1a1468: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1a1468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a146c:
    // 0x1a146c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1a146cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1470:
    // 0x1a1470: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1a1470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1474:
    // 0x1a1474: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a1478:
    // 0x1a1478: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1a147c:
    // 0x1a147c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a147cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a1480:
    // 0x1a1480: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a1484:
    // 0x1a1484: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1a1488:
    // 0x1a1488: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1a148c:
    if (ctx->pc == 0x1A148Cu) {
        ctx->pc = 0x1A148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1488u;
        // 0x1a148c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1490u;
        goto label_1a1490;
    }
    ctx->pc = 0x1A1488u;
    {
        const bool branch_taken_0x1a1488 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1488u;
        // 0x1a148c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1488) {
            ctx->pc = 0x1A14BCu;
            goto label_1a14bc;
        }
    }
    ctx->pc = 0x1A1490u;
label_1a1490:
    // 0x1a1490: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1a1490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1494:
    // 0x1a1494: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a1498:
    // 0x1a1498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a149c:
    // 0x1a149c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a14a0:
    // 0x1a14a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a14a4:
    // 0x1a14a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a14a8:
    // 0x1a14a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a14ac:
    // 0x1a14ac: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x1a14acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1a14b0:
    // 0x1a14b0: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1a14b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1a14b4:
    // 0x1a14b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a14b8:
    if (ctx->pc == 0x1A14B8u) {
        ctx->pc = 0x1A14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14B4u;
        // 0x1a14b8: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14BCu;
        goto label_1a14bc;
    }
    ctx->pc = 0x1A14B4u;
    {
        const bool branch_taken_0x1a14b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14B4u;
        // 0x1a14b8: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14b4) {
            ctx->pc = 0x1A14C8u;
            goto label_1a14c8;
        }
    }
    ctx->pc = 0x1A14BCu;
label_1a14bc:
    // 0x1a14bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a14c0:
    // 0x1a14c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a14c4:
    // 0x1a14c4: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x1a14c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1a14c8:
    // 0x1a14c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a14cc:
    // 0x1a14cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a14d0:
    // 0x1a14d0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a14d4:
    if (ctx->pc == 0x1A14D4u) {
        ctx->pc = 0x1A14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14D0u;
        // 0x1a14d4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14D8u;
        goto label_1a14d8;
    }
    ctx->pc = 0x1A14D0u;
    {
        const bool branch_taken_0x1a14d0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14D0u;
        // 0x1a14d4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14d0) {
            ctx->pc = 0x1A14ECu;
            goto label_1a14ec;
        }
    }
    ctx->pc = 0x1A14D8u;
label_1a14d8:
    // 0x1a14d8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1a14d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1a14dc:
    // 0x1a14dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a14e0:
    // 0x1a14e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a14e4:
    // 0x1a14e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a14e8:
    if (ctx->pc == 0x1A14E8u) {
        ctx->pc = 0x1A14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E4u;
        // 0x1a14e8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14ECu;
        goto label_1a14ec;
    }
    ctx->pc = 0x1A14E4u;
    {
        const bool branch_taken_0x1a14e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E4u;
        // 0x1a14e8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14e4) {
            ctx->pc = 0x1A14F0u;
            goto label_1a14f0;
        }
    }
    ctx->pc = 0x1A14ECu;
label_1a14ec:
    // 0x1a14ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a14f0:
    // 0x1a14f0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a14f4:
    // 0x1a14f4: 0xc0f809  jalr        $a2
label_1a14f8:
    if (ctx->pc == 0x1A14F8u) {
        ctx->pc = 0x1A14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14F4u;
        // 0x1a14f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14FCu;
        goto label_1a14fc;
    }
    ctx->pc = 0x1A14F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A14FCu);
        ctx->pc = 0x1A14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14F4u;
        // 0x1a14f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A14F4u, 0x1A14FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A14FCu;
label_1a14fc:
    // 0x1a14fc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a14fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a1500:
    // 0x1a1500: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_1a1504:
    if (ctx->pc == 0x1A1504u) {
        ctx->pc = 0x1A1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1500u;
        // 0x1a1504: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1508u;
        goto label_1a1508;
    }
    ctx->pc = 0x1A1500u;
    {
        const bool branch_taken_0x1a1500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1500u;
        // 0x1a1504: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1500) {
            ctx->pc = 0x1A164Cu;
            goto label_1a164c;
        }
    }
    ctx->pc = 0x1A1508u;
label_1a1508:
    // 0x1a1508: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1a150c:
    // 0x1a150c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a150cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a1510:
    // 0x1a1510: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a1514:
    // 0x1a1514: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_1a1518:
    // 0x1a1518: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x1a1518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_1a151c:
    // 0x1a151c: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x1a151cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_1a1520:
    // 0x1a1520: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1a1524:
    // 0x1a1524: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_1a1528:
    // 0x1a1528: 0xc05ce40  jal         func_173900
label_1a152c:
    if (ctx->pc == 0x1A152Cu) {
        ctx->pc = 0x1A152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1528u;
        // 0x1a152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1530u;
        goto label_1a1530;
    }
    ctx->pc = 0x1A1528u;
    SET_GPR_U32(ctx, 31, 0x1A1530u);
    ctx->pc = 0x1A152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1528u;
    // 0x1a152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1A1528u, 0x1A1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1530u;
label_1a1530:
    // 0x1a1530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1534:
    // 0x1a1534: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1a1538:
    if (ctx->pc == 0x1A1538u) {
        ctx->pc = 0x1A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1534u;
        // 0x1a1538: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A153Cu;
        goto label_1a153c;
    }
    ctx->pc = 0x1A1534u;
    {
        const bool branch_taken_0x1a1534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1534) {
            ctx->pc = 0x1A1538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1534u;
            // 0x1a1538: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1624u;
            goto label_1a1624;
        }
    }
    ctx->pc = 0x1A153Cu;
label_1a153c:
    // 0x1a153c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x1a153cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_1a1540:
    // 0x1a1540: 0xc0a4bd4  jal         func_292F50
label_1a1544:
    if (ctx->pc == 0x1A1544u) {
        ctx->pc = 0x1A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1540u;
        // 0x1a1544: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1548u;
        goto label_1a1548;
    }
    ctx->pc = 0x1A1540u;
    SET_GPR_U32(ctx, 31, 0x1A1548u);
    ctx->pc = 0x1A1544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1540u;
    // 0x1a1544: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A1540u, 0x1A1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1548u;
label_1a1548:
    // 0x1a1548: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a1548u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a154c:
    // 0x1a154c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1a154cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1a1550:
    // 0x1a1550: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a1554:
    // 0x1a1554: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1558:
    // 0x1a1558: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a1558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a155c:
    // 0x1a155c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a155cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a1560:
    // 0x1a1560: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a1560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a1564:
    // 0x1a1564: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a1568:
    // 0x1a1568: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a1568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a156c:
    // 0x1a156c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a1570:
    // 0x1a1570: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a1570u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1a1574:
    // 0x1a1574: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a1574u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a1578:
    // 0x1a1578: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a1578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a157c:
    // 0x1a157c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a157cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a1580:
    // 0x1a1580: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1a1580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1a1584:
    // 0x1a1584: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a1588:
    // 0x1a1588: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a158c:
    // 0x1a158c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a158cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a1590:
    // 0x1a1590: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a1590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a1594:
    // 0x1a1594: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a1594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a1598:
    // 0x1a1598: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a159c:
    // 0x1a159c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a159cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a15a0:
    // 0x1a15a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a15a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a15a4:
    // 0x1a15a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a15a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a15a8:
    // 0x1a15a8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a15a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a15ac:
    // 0x1a15ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a15acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a15b0:
    // 0x1a15b0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a15b4:
    // 0x1a15b4: 0xc07df68  jal         func_1F7DA0
label_1a15b8:
    if (ctx->pc == 0x1A15B8u) {
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15BCu;
        goto label_1a15bc;
    }
    ctx->pc = 0x1A15B4u;
    SET_GPR_U32(ctx, 31, 0x1A15BCu);
    ctx->pc = 0x1A15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15B4u;
    // 0x1a15b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1A15B4u, 0x1A15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15BCu;
label_1a15bc:
    // 0x1a15bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a15c0:
    // 0x1a15c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a15c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a15c4:
    // 0x1a15c4: 0xc051dca  jal         func_147728
label_1a15c8:
    if (ctx->pc == 0x1A15C8u) {
        ctx->pc = 0x1A15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C4u;
        // 0x1a15c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15CCu;
        goto label_1a15cc;
    }
    ctx->pc = 0x1A15C4u;
    SET_GPR_U32(ctx, 31, 0x1A15CCu);
    ctx->pc = 0x1A15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15C4u;
    // 0x1a15c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1A15C4u, 0x1A15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15CCu;
label_1a15cc:
    // 0x1a15cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a15d0:
    // 0x1a15d0: 0xc051f10  jal         func_147C40
label_1a15d4:
    if (ctx->pc == 0x1A15D4u) {
        ctx->pc = 0x1A15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15D0u;
        // 0x1a15d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15D8u;
        goto label_1a15d8;
    }
    ctx->pc = 0x1A15D0u;
    SET_GPR_U32(ctx, 31, 0x1A15D8u);
    ctx->pc = 0x1A15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15D0u;
    // 0x1a15d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A15D0u, 0x1A15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15D8u;
label_1a15d8:
    // 0x1a15d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a15dc:
    // 0x1a15dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a15dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a15e0:
    // 0x1a15e0: 0xc051efe  jal         func_147BF8
label_1a15e4:
    if (ctx->pc == 0x1A15E4u) {
        ctx->pc = 0x1A15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15E0u;
        // 0x1a15e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15E8u;
        goto label_1a15e8;
    }
    ctx->pc = 0x1A15E0u;
    SET_GPR_U32(ctx, 31, 0x1A15E8u);
    ctx->pc = 0x1A15E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15E0u;
    // 0x1a15e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1A15E0u, 0x1A15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15E8u;
label_1a15e8:
    // 0x1a15e8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1a15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a15ec:
    // 0x1a15ec: 0xc051d4a  jal         func_147528
label_1a15f0:
    if (ctx->pc == 0x1A15F0u) {
        ctx->pc = 0x1A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ECu;
        // 0x1a15f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15F4u;
        goto label_1a15f4;
    }
    ctx->pc = 0x1A15ECu;
    SET_GPR_U32(ctx, 31, 0x1A15F4u);
    ctx->pc = 0x1A15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15ECu;
    // 0x1a15f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1A15ECu, 0x1A15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15F4u;
label_1a15f4:
    // 0x1a15f4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1a15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a15f8:
    // 0x1a15f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a15f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a15fc:
    // 0x1a15fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a15fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a1600:
    // 0x1a1600: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a1604:
    // 0x1a1604: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1a1604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a1608:
    // 0x1a1608: 0x0  nop
    ctx->pc = 0x1a1608u;
    // NOP
label_1a160c:
    // 0x1a160c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a1610:
    if (ctx->pc == 0x1A1610u) {
        ctx->pc = 0x1A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A160Cu;
        // 0x1a1610: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1614u;
        goto label_1a1614;
    }
    ctx->pc = 0x1A160Cu;
    {
        const bool branch_taken_0x1a160c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A160Cu;
        // 0x1a1610: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a160c) {
            ctx->pc = 0x1A1620u;
            goto label_1a1620;
        }
    }
    ctx->pc = 0x1A1614u;
label_1a1614:
    // 0x1a1614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1618:
    // 0x1a1618: 0xc05bd90  jal         func_16F640
label_1a161c:
    if (ctx->pc == 0x1A161Cu) {
        ctx->pc = 0x1A161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1618u;
        // 0x1a161c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1620u;
        goto label_1a1620;
    }
    ctx->pc = 0x1A1618u;
    SET_GPR_U32(ctx, 31, 0x1A1620u);
    ctx->pc = 0x1A161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1618u;
    // 0x1a161c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A1618u, 0x1A1620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1620u;
label_1a1620:
    // 0x1a1620: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a1620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a1624:
    // 0x1a1624: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1a1624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1a1628:
    // 0x1a1628: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1a1628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1a162c:
    // 0x1a162c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1a162cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1a1630:
    // 0x1a1630: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1a1634:
    // 0x1a1634: 0x2ac20014  slti        $v0, $s6, 0x14
    ctx->pc = 0x1a1634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)20) ? 1 : 0);
label_1a1638:
    // 0x1a1638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a163c:
    if (ctx->pc == 0x1A163Cu) {
        ctx->pc = 0x1A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1638u;
        // 0x1a163c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1640u;
        goto label_1a1640;
    }
    ctx->pc = 0x1A1638u;
    {
        const bool branch_taken_0x1a1638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1638u;
        // 0x1a163c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1638) {
            ctx->pc = 0x1A164Cu;
            goto label_1a164c;
        }
    }
    ctx->pc = 0x1A1640u;
label_1a1640:
    // 0x1a1640: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a1640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a1644:
    // 0x1a1644: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1a1648:
    if (ctx->pc == 0x1A1648u) {
        ctx->pc = 0x1A164Cu;
        goto label_1a164c;
    }
    ctx->pc = 0x1A1644u;
    {
        const bool branch_taken_0x1a1644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a1644) {
            ctx->pc = 0x1A1528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1528;
        }
    }
    ctx->pc = 0x1A164Cu;
label_1a164c:
    // 0x1a164c: 0xc06ddb6  jal         func_1B76D8
label_1a1650:
    if (ctx->pc == 0x1A1650u) {
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1654u;
        goto label_1a1654;
    }
    ctx->pc = 0x1A164Cu;
    SET_GPR_U32(ctx, 31, 0x1A1654u);
    ctx->pc = 0x1A1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A164Cu;
    // 0x1a1650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A164Cu, 0x1A1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1654u;
label_1a1654:
    // 0x1a1654: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a1654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a1658:
    // 0x1a1658: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a1658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a165c:
    // 0x1a165c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a165cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a1660:
    // 0x1a1660: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a1660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a1664:
    // 0x1a1664: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a1664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a1668:
    // 0x1a1668: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a1668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a166c:
    // 0x1a166c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a166cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a1670:
    // 0x1a1670: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a1670u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1674:
    // 0x1a1674: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a1674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a1678:
    // 0x1a1678: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a1678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a167c:
    // 0x1a167c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a1680:
    // 0x1a1680: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a1684:
    // 0x1a1684: 0x3e00008  jr          $ra
label_1a1688:
    if (ctx->pc == 0x1A1688u) {
        ctx->pc = 0x1A1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1684u;
        // 0x1a1688: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A168Cu;
        goto label_1a168c;
    }
    ctx->pc = 0x1A1684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1684u;
        // 0x1a1688: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A168Cu;
label_1a168c:
    // 0x1a168c: 0x0  nop
    ctx->pc = 0x1a168cu;
    // NOP
    ctx->pc = 0x1a1690u;
}
