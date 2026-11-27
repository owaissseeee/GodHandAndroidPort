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

// Function: func_002A1640
// Address: 0x2a1640 - 0x2a1bf8
void func_002A1640_0x2a1640(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A1640_0x2a1640");
#endif

    if (__builtin_expect(ctx->pc != 0x2a1640u, 0)) {
        switch (ctx->pc) {
            case 0x2a1698u: goto label_2a1698;
            case 0x2a16a8u: goto label_2a16a8;
            case 0x2a16f8u: goto label_2a16f8;
            case 0x2a1740u: goto label_2a1740;
            case 0x2a175cu: goto label_2a175c;
            case 0x2a178cu: goto label_2a178c;
            case 0x2a17d8u: goto label_2a17d8;
            case 0x2a17f0u: goto label_2a17f0;
            case 0x2a1800u: goto label_2a1800;
            case 0x2a1838u: goto label_2a1838;
            case 0x2a1868u: goto label_2a1868;
            case 0x2a1880u: goto label_2a1880;
            case 0x2a18bcu: goto label_2a18bc;
            case 0x2a18e8u: goto label_2a18e8;
            case 0x2a1930u: goto label_2a1930;
            case 0x2a1960u: goto label_2a1960;
            case 0x2a1978u: goto label_2a1978;
            case 0x2a1988u: goto label_2a1988;
            case 0x2a1998u: goto label_2a1998;
            case 0x2a19a8u: goto label_2a19a8;
            case 0x2a19e0u: goto label_2a19e0;
            case 0x2a1a0cu: goto label_2a1a0c;
            case 0x2a1a20u: goto label_2a1a20;
            case 0x2a1a7cu: goto label_2a1a7c;
            case 0x2a1ab0u: goto label_2a1ab0;
            case 0x2a1ad8u: goto label_2a1ad8;
            case 0x2a1af4u: goto label_2a1af4;
            case 0x2a1b30u: goto label_2a1b30;
            case 0x2a1b5cu: goto label_2a1b5c;
            case 0x2a1ba0u: goto label_2a1ba0;
            default: break;
        }
    }


    // 0x2a1640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a1644: 0x2405003f  addiu       $a1, $zero, 0x3F
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1648: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a164c: 0x240600ff  addiu       $a2, $zero, 0xFF
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1650: 0x80a02d  daddu       $s4, $a0, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1654: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a1654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a1658: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a1658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a165c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a1660: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a1664: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a1664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a1668: 0x2412ffff  addiu       $s2, $zero, -0x1
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a166c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a1670: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a1674: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2a1674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2a1678: 0x3c13003c  lui         $s3, 0x3C
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a167c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2a167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2a1680: 0x220b82d  daddu       $s7, $s1, $zero
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1684: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a1684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a1688: 0x241e0e00  addiu       $fp, $zero, 0xE00
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2a168c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1690: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1698u);
    ctx->pc = 0x2A1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1690u;
    // 0x2a1694: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1698u)) {
        return;
    }
label_2a1698:
    // 0x2a1698: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a169c: 0x24060316  addiu       $a2, $zero, 0x316
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a16a0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A16A8u);
    ctx->pc = 0x2A16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16A0u;
    // 0x2a16a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a16a8u)) {
        return;
    }
label_2a16a8:
    // 0x2a16a8: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a16ac: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a16b0: 0x8c6611ac  lw          $a2, 0x11AC($v1)
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a16b4: 0x2405004d  addiu       $a1, $zero, 0x4D
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a16b8: 0x244182a  slt         $v1, $s2, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a16bc: 0x2482003f  addiu       $v0, $a0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a16c0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a16c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a16c4: 0x63142  srl         $a2, $a2, 5
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a16c8: 0x6303c  dsll32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a16cc: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a16d0: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a16d4: 0x6303e  dsrl32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a16d8: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a16dc: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x2a16e0: 0x31d38  dsll        $v1, $v1, 20
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a16e4: 0x34638000  ori         $v1, $v1, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a16e8: 0x31ab8  dsll        $v1, $v1, 10
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x2a16ec: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a16f0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A16F8u);
    ctx->pc = 0x2A16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16F0u;
    // 0x2a16f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a16f8u)) {
        return;
    }
label_2a16f8:
    // 0x2a16f8: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x2a16f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a16fc: 0x24080800  addiu       $t0, $zero, 0x800
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a1700: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1704: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1708: 0x63fc2  srl         $a3, $a2, 31
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a170c: 0x24050019  addiu       $a1, $zero, 0x19
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a1710: 0xc73021  addu        $a2, $a2, $a3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1714: 0x317c2  srl         $v0, $v1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1718: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a171c: 0x63043  sra         $a2, $a2, 1
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a1720: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a1724: 0x1063023  subu        $a2, $t0, $a2
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a1728: 0x1034023  subu        $t0, $t0, $v1
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a172c: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1730: 0x84100  sll         $t0, $t0, 4
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a1734: 0x6303c  dsll32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1738: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1740u);
    ctx->pc = 0x2A173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1738u;
    // 0x2a173c: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1740u)) {
        return;
    }
label_2a1740:
    // 0x2a1740: 0x3406ff00  ori         $a2, $zero, 0xFF00
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2a1744: 0x6303c  dsll32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1748: 0x34c6ff80  ori         $a2, $a2, 0xFF80
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65408);
    // 0x2a174c: 0x63278  dsll        $a2, $a2, 9
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x2a1750: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1754: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A175Cu);
    ctx->pc = 0x2A1758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1754u;
    // 0x2a1758: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a175cu)) {
        return;
    }
label_2a175c:
    // 0x2a175c: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x2a175cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a1760: 0x2403000a  addiu       $v1, $zero, 0xA
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a1764: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1768: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a176c: 0x63040  sll         $a2, $a2, 1
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a1770: 0x24050009  addiu       $a1, $zero, 0x9
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a1774: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1778: 0x630bc  dsll32      $a2, $a2, 2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x2a177c: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a1780: 0x213b8  dsll        $v0, $v0, 14
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a1784: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A178Cu);
    ctx->pc = 0x2A1788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1784u;
    // 0x2a1788: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a178cu)) {
        return;
    }
label_2a178c:
    // 0x2a178c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1790: 0x3c052420  lui         $a1, 0x2420
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9248 << 16));
    // 0x2a1794: 0x8e6211b8  lw          $v0, 0x11B8($s3)
    ctx->pc = 0x2a1794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4536)));
    // 0x2a1798: 0x3407c000  ori         $a3, $zero, 0xC000
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2a179c: 0x73d38  dsll        $a3, $a3, 20
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x2a17a0: 0x244182a  slt         $v1, $s2, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a17a4: 0x2486003f  addiu       $a2, $a0, 0x3F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a17a8: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2a17a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2a17ac: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a17b0: 0x63183  sra         $a2, $a2, 6
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a17b4: 0x217b8  dsll        $v0, $v0, 30
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2a17b8: 0x633b8  dsll        $a2, $a2, 14
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x2a17bc: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a17c0: 0x3c63025  or          $a2, $fp, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x2a17c4: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17c8: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a17cc: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a17d0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A17D8u);
    ctx->pc = 0x2A17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17D0u;
    // 0x2a17d4: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a17d8u)) {
        return;
    }
label_2a17d8:
    // 0x2a17d8: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17dc: 0x34068500  ori         $a2, $zero, 0x8500
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2a17e0: 0x63478  dsll        $a2, $a2, 17
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2a17e4: 0x34c600f8  ori         $a2, $a2, 0xF8
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2a17e8: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A17F0u);
    ctx->pc = 0x2A17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17E8u;
    // 0x2a17ec: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a17f0u)) {
        return;
    }
label_2a17f0:
    // 0x2a17f0: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17f4: 0x24050048  addiu       $a1, $zero, 0x48
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a17f8: 0xc0a6674  jal         func_2999D0
    SET_GPR_U32(ctx, 31, 0x2A1800u);
    ctx->pc = 0x2A17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17F8u;
    // 0x2a17fc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002999D0_0x2999d0, 0x2999d0u, 0x2a1800u)) {
        return;
    }
label_2a1800:
    // 0x2a1800: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1804: 0x243902a  slt         $s2, $s2, $v1
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1808: 0x2462003f  addiu       $v0, $v1, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a180c: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x2a180cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a1810: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1814: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2A1814u;
    {
        const bool branch_taken_0x2a1814 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1814u;
        // 0x2a1818: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1814) {
            ctx->pc = 0x2A1954u;
            goto label_2a1954;
        }
    }
    // 0x2a181c: 0x3c160058  lui         $s6, 0x58
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x2a1820: 0x2e0802d  daddu       $s0, $s7, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1824: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1828: 0x13983c  dsll32      $s3, $s3, 0
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2a182c: 0x2411003f  addiu       $s1, $zero, 0x3F
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1830: 0x8e46118c  lw          $a2, 0x118C($s2)
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x2a1834: 0x0  nop
    // NOP
label_2a1838:
    // 0x2a1838: 0x220102d  daddu       $v0, $s1, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a183c: 0x151980  sll         $v1, $s5, 6
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2a1840: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1844: 0x63040  sll         $a2, $a2, 1
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a1848: 0x621025  or          $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a184c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a1850: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1854: 0x6343c  dsll32      $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a1858: 0x24050041  addiu       $a1, $zero, 0x41
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a185c: 0x463025  or          $a2, $v0, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1860: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1868u);
    ctx->pc = 0x2A1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1860u;
    // 0x2a1864: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1868u)) {
        return;
    }
label_2a1868:
    // 0x2a1868: 0x26310040  addiu       $s1, $s1, 0x40
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a186c: 0x3c060008  lui         $a2, 0x8
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a1870: 0x34c60008  ori         $a2, $a2, 0x8
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a1874: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1878: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1880u);
    ctx->pc = 0x2A187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1878u;
    // 0x2a187c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1880u)) {
        return;
    }
label_2a1880:
    // 0x2a1880: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x2a1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a1884: 0x24070808  addiu       $a3, $zero, 0x808
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2a1888: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a188c: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1890: 0x21fc2  srl         $v1, $v0, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a1894: 0x2405000d  addiu       $a1, $zero, 0xD
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a1898: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a189c: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a18a0: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a18a4: 0xe23823  subu        $a3, $a3, $v0
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a18a8: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a18ac: 0x73900  sll         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a18b0: 0xe63025  or          $a2, $a3, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a18b4: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A18BCu);
    ctx->pc = 0x2A18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18B4u;
    // 0x2a18b8: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a18bcu)) {
        return;
    }
label_2a18bc:
    // 0x2a18bc: 0x8e46118c  lw          $a2, 0x118C($s2)
    ctx->pc = 0x2a18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x2a18c0: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18c4: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x2a18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a18c8: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a18cc: 0x63140  sll         $a2, $a2, 5
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2a18d0: 0x24c60009  addiu       $a2, $a2, 0x9
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a18d4: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a18d8: 0x24420009  addiu       $v0, $v0, 0x9
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a18dc: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a18e0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A18E8u);
    ctx->pc = 0x2A18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18E0u;
    // 0x2a18e4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a18e8u)) {
        return;
    }
label_2a18e8:
    // 0x2a18e8: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a18ec: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18f0: 0x8e47118c  lw          $a3, 0x118C($s2)
    ctx->pc = 0x2a18f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x2a18f4: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a18f8: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a18f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a18fc: 0x317c2  srl         $v0, $v1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1900: 0x621021  addu        $v0, $v1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1904: 0xc73021  addu        $a2, $a2, $a3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1908: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a190c: 0xc73021  addu        $a2, $a2, $a3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1910: 0x621823  subu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1914: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1918: 0x24630808  addiu       $v1, $v1, 0x808
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
    // 0x2a191c: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1920: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1924: 0x663025  or          $a2, $v1, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a1928: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1930u);
    ctx->pc = 0x2A192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1928u;
    // 0x2a192c: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1930u)) {
        return;
    }
label_2a1930:
    // 0x2a1930: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a1934: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1938: 0x64182a  slt         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a193c: 0x2482003f  addiu       $v0, $a0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1940: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1940u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a1944: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1948: 0x2a2102a  slt         $v0, $s5, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a194c: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2A194Cu;
    {
        const bool branch_taken_0x2a194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a194c) {
            ctx->pc = 0x2A1950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A194Cu;
            // 0x2a1950: 0x8e46118c  lw          $a2, 0x118C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1838;
        }
    }
label_2a1954:
    // 0x2a1954: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1958: 0xc0a6642  jal         func_299908
    SET_GPR_U32(ctx, 31, 0x2A1960u);
    ctx->pc = 0x2A195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1958u;
    // 0x2a195c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00299908_0x299908, 0x299908u, 0x2a1960u)) {
        return;
    }
label_2a1960:
    // 0x2a1960: 0x902d  daddu       $s2, $zero, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1964: 0x3c06003c  lui         $a2, 0x3C
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a1968: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a196c: 0x24c61200  addiu       $a2, $a2, 0x1200
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4608));
    // 0x2a1970: 0xc0a668a  jal         func_299A28
    SET_GPR_U32(ctx, 31, 0x2A1978u);
    ctx->pc = 0x2A1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1970u;
    // 0x2a1974: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00299A28_0x299a28, 0x299a28u, 0x2a1978u)) {
        return;
    }
label_2a1978:
    // 0x2a1978: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a197c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1980: 0xc0a6636  jal         func_2998D8
    SET_GPR_U32(ctx, 31, 0x2A1988u);
    ctx->pc = 0x2A1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1980u;
    // 0x2a1984: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002998D8_0x2998d8, 0x2998d8u, 0x2a1988u)) {
        return;
    }
label_2a1988:
    // 0x2a1988: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a198c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1990: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1998u);
    ctx->pc = 0x2A1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1990u;
    // 0x2a1994: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1998u)) {
        return;
    }
label_2a1998:
    // 0x2a1998: 0x2405003f  addiu       $a1, $zero, 0x3F
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a199c: 0x240600ff  addiu       $a2, $zero, 0xFF
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a19a0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A19A8u);
    ctx->pc = 0x2A19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19A0u;
    // 0x2a19a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a19a8u)) {
        return;
    }
label_2a19a8:
    // 0x2a19a8: 0x8ee51180  lw          $a1, 0x1180($s7)
    ctx->pc = 0x2a19a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a19ac: 0x1e3142  srl         $a2, $fp, 5
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 30), 5));
    // 0x2a19b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a19b4: 0x73e3c  dsll32      $a3, $a3, 24
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a19b8: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19bc: 0x205182a  slt         $v1, $s0, $a1
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a19c0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2a19c4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a19c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a19c8: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a19cc: 0x2405004d  addiu       $a1, $zero, 0x4D
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a19d0: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a19d4: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a19d8: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A19E0u);
    ctx->pc = 0x2A19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19D8u;
    // 0x2a19dc: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a19e0u)) {
        return;
    }
label_2a19e0:
    // 0x2a19e0: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a19e4: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x2a19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a19e8: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x2a19e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a19ec: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a19f4: 0x24050041  addiu       $a1, $zero, 0x41
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a19f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a19fc: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1a00: 0x6343c  dsll32      $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a1a04: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1A0Cu);
    ctx->pc = 0x2A1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A04u;
    // 0x2a1a08: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1a0cu)) {
        return;
    }
label_2a1a0c:
    // 0x2a1a0c: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a10: 0x34068000  ori         $a2, $zero, 0x8000
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a1a14: 0x63638  dsll        $a2, $a2, 24
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a1a18: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1A20u);
    ctx->pc = 0x2A1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A18u;
    // 0x2a1a1c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1a20u)) {
        return;
    }
label_2a1a20:
    // 0x2a1a20: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x2a1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a1a24: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a1a28: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x2a1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x2a1a2c: 0x3c0725b0  lui         $a3, 0x25B0
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x2a1a30: 0x204182a  slt         $v1, $s0, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1a34: 0x2482003f  addiu       $v0, $a0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1a38: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1a38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a1a3c: 0x52fb8  dsll        $a1, $a1, 30
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a1a40: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1a44: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1a48: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x2a1a48u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x2a1a4c: 0x213b8  dsll        $v0, $v0, 14
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a1a50: 0xa72825  or          $a1, $a1, $a3
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2a1a54: 0x3408800e  ori         $t0, $zero, 0x800E
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a1a58: 0x845b8  dsll        $t0, $t0, 22
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x2a1a5c: 0x35088800  ori         $t0, $t0, 0x8800
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)34816);
    // 0x2a1a60: 0x84638  dsll        $t0, $t0, 24
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x2a1a64: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1a68: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a6c: 0xc53025  or          $a2, $a2, $a1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a1a70: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1a74: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1A7Cu);
    ctx->pc = 0x2A1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A74u;
    // 0x2a1a78: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1a7cu)) {
        return;
    }
label_2a1a7c:
    // 0x2a1a7c: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x2a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a1a80: 0x203802a  slt         $s0, $s0, $v1
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1a84: 0x2462003f  addiu       $v0, $v1, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a1a88: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a1a88u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a1a8c: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1a90: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2A1A90u;
    {
        const bool branch_taken_0x2a1a90 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A90u;
        // 0x2a1a94: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a90) {
            ctx->pc = 0x2A1BC4u;
            goto label_2a1bc4;
        }
    }
    // 0x2a1a98: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a1a9c: 0x3c160058  lui         $s6, 0x58
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x2a1aa0: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1aa4: 0x15a83c  dsll32      $s5, $s5, 0
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2a1aa8: 0x2413003f  addiu       $s3, $zero, 0x3F
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1aac: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x2a1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
label_2a1ab0:
    // 0x2a1ab0: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ab4: 0x121980  sll         $v1, $s2, 6
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a1ab8: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1ac0: 0x663025  or          $a2, $v1, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a1ac4: 0x2143c  dsll32      $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1ac8: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1acc: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1ad0: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1AD8u);
    ctx->pc = 0x2A1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AD0u;
    // 0x2a1ad4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1ad8u)) {
        return;
    }
label_2a1ad8:
    // 0x2a1ad8: 0x26520001  addiu       $s2, $s2, 0x1
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1adc: 0x3c060008  lui         $a2, 0x8
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a1ae0: 0x34c60008  ori         $a2, $a2, 0x8
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a1ae4: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ae8: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1aec: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1AF4u);
    ctx->pc = 0x2A1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AECu;
    // 0x2a1af0: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1af4u)) {
        return;
    }
label_2a1af4:
    // 0x2a1af4: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1af8: 0x24070800  addiu       $a3, $zero, 0x800
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a1afc: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a1b00: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b04: 0x21fc2  srl         $v1, $v0, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a1b08: 0x2405000d  addiu       $a1, $zero, 0xD
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a1b0c: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1b10: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1b14: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a1b18: 0xe23823  subu        $a3, $a3, $v0
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a1b1c: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1b20: 0x73900  sll         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a1b24: 0xe63025  or          $a2, $a3, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a1b28: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1B30u);
    ctx->pc = 0x2A1B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B28u;
    // 0x2a1b2c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1b30u)) {
        return;
    }
label_2a1b30:
    // 0x2a1b30: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x2a1b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a1b34: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b38: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1b3c: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1b40: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1b44: 0x24c60009  addiu       $a2, $a2, 0x9
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a1b48: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1b4c: 0x24420009  addiu       $v0, $v0, 0x9
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a1b50: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1b54: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1B5Cu);
    ctx->pc = 0x2A1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B54u;
    // 0x2a1b58: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1b5cu)) {
        return;
    }
label_2a1b5c:
    // 0x2a1b5c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1b60: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b64: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a1b68: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1b6c: 0x8e07118c  lw          $a3, 0x118C($s0)
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a1b70: 0x317c2  srl         $v0, $v1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1b74: 0x621021  addu        $v0, $v1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1b78: 0xc73021  addu        $a2, $a2, $a3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1b7c: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a1b80: 0x24630800  addiu       $v1, $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2a1b84: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1b88: 0x621823  subu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1b8c: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1b90: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1b94: 0x663025  or          $a2, $v1, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a1b98: 0xc0a661a  jal         func_299868
    SET_GPR_U32(ctx, 31, 0x2A1BA0u);
    ctx->pc = 0x2A1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B98u;
    // 0x2a1b9c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PushEntryAtField10000_299868_0x299868, 0x299868u, 0x2a1ba0u)) {
        return;
    }
label_2a1ba0:
    // 0x2a1ba0: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a1ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1ba8: 0x64182a  slt         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1bac: 0x2482003f  addiu       $v0, $a0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1bb0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1bb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a1bb4: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1bb8: 0x242102a  slt         $v0, $s2, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1bbc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2A1BBCu;
    {
        const bool branch_taken_0x2a1bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BBCu;
        // 0x2a1bc0: 0x8e02118c  lw          $v0, 0x118C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bbc) {
            ctx->pc = 0x2A1AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1ab0;
        }
    }
label_2a1bc4:
    // 0x2a1bc4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a1bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1bc8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a1bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1bcc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a1bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1bd0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a1bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1bd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a1bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1bd8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a1bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1bdc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a1bdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1be0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2a1be0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1be4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2a1be4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BECu;
        // 0x2a1bf0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2a1bf4: 0x0  nop
    // NOP
    ctx->pc = 0x2a1bf8u;
}