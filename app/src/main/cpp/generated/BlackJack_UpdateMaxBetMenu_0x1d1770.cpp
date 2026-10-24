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

// Function: BlackJack_UpdateMaxBetMenu
// Address: 0x1d1770 - 0x1d1aa8
void BlackJack_UpdateMaxBetMenu_0x1d1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateMaxBetMenu_0x1d1770");
#endif

    switch (ctx->pc) {
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1870u: goto label_1d1870;
        case 0x1d187cu: goto label_1d187c;
        case 0x1d18a0u: goto label_1d18a0;
        case 0x1d18ccu: goto label_1d18cc;
        case 0x1d18d8u: goto label_1d18d8;
        case 0x1d18fcu: goto label_1d18fc;
        case 0x1d1928u: goto label_1d1928;
        case 0x1d1930u: goto label_1d1930;
        case 0x1d1968u: goto label_1d1968;
        case 0x1d1988u: goto label_1d1988;
        case 0x1d1994u: goto label_1d1994;
        case 0x1d19a0u: goto label_1d19a0;
        case 0x1d19acu: goto label_1d19ac;
        case 0x1d19d8u: goto label_1d19d8;
        case 0x1d1a0cu: goto label_1d1a0c;
        case 0x1d1a24u: goto label_1d1a24;
        case 0x1d1a3cu: goto label_1d1a3c;
        case 0x1d1a50u: goto label_1d1a50;
        case 0x1d1a5cu: goto label_1d1a5c;
        case 0x1d1a8cu: goto label_1d1a8c;
        default: break;
    }

    ctx->pc = 0x1d1770u;

    // 0x1d1770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d1774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d1774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d1778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d1778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d177c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d177cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1780: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d1784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1788: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d178c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D178Cu;
    {
        const bool branch_taken_0x1d178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D178Cu;
        // 0x1d1790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d178c) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D1794u;
    // 0x1d1794: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1794u;
    {
        const bool branch_taken_0x1d1794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1794u;
        // 0x1d1798: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1794) {
            ctx->pc = 0x1D17CCu;
            goto label_1d17cc;
        }
    }
    ctx->pc = 0x1D179Cu;
    // 0x1d179c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1D179Cu;
    {
        const bool branch_taken_0x1d179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D179Cu;
        // 0x1d17a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d179c) {
            ctx->pc = 0x1D1A90u;
            goto label_1d1a90;
        }
    }
    ctx->pc = 0x1D17A4u;
label_1d17a4:
    // 0x1d17a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d17a8: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D17A8u;
    SET_GPR_U32(ctx, 31, 0x1D17B0u);
    ctx->pc = 0x1D17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17A8u;
    // 0x1d17ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D17A8u, 0x1D17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17B0u;
label_1d17b0:
    // 0x1d17b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d17b4: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D17B4u;
    SET_GPR_U32(ctx, 31, 0x1D17BCu);
    ctx->pc = 0x1D17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17B4u;
    // 0x1d17b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D17B4u, 0x1D17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17BCu;
label_1d17bc:
    // 0x1d17bc: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d17c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d17c4: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d17c8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d17cc:
    // 0x1d17cc: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1d17ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d17d0: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1d17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1d17d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d17d8: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1d17dc: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d17e0: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d17e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d17e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d17e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d17e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D17E8u;
    {
        const bool branch_taken_0x1d17e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d17e8) {
            ctx->pc = 0x1D1848u;
            goto label_1d1848;
        }
    }
    ctx->pc = 0x1D17F0u;
    // 0x1d17f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d17f4: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D17F4u;
    SET_GPR_U32(ctx, 31, 0x1D17FCu);
    ctx->pc = 0x1D17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17F4u;
    // 0x1d17f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D17F4u, 0x1D17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17FCu;
label_1d17fc:
    // 0x1d17fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1800: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D1800u;
    SET_GPR_U32(ctx, 31, 0x1D1808u);
    ctx->pc = 0x1D1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1800u;
    // 0x1d1804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D1800u, 0x1D1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1808u;
label_1d1808:
    // 0x1d1808: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d180c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1810: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1814: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d1814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d1818: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d181c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1820: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1824: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1824u;
    SET_GPR_U32(ctx, 31, 0x1D182Cu);
    ctx->pc = 0x1D1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1824u;
    // 0x1d1828: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1824u, 0x1D182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D182Cu;
label_1d182c:
    // 0x1d182c: 0x8e031814  lw          $v1, 0x1814($s0)
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1830: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1830u;
    {
        const bool branch_taken_0x1d1830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1830u;
        // 0x1d1834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1830) {
            ctx->pc = 0x1D183Cu;
            goto label_1d183c;
        }
    }
    ctx->pc = 0x1D1838u;
    // 0x1d1838: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d183c:
    // 0x1d183c: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1840: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1D1840u;
    {
        const bool branch_taken_0x1d1840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1840u;
        // 0x1d1844: 0xae021804  sw          $v0, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1840) {
            ctx->pc = 0x1D1A8Cu;
            goto label_1d1a8c;
        }
    }
    ctx->pc = 0x1D1848u;
label_1d1848:
    // 0x1d1848: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1d1848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d184c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1d184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1d1850: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d1854: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d1858: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d1858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d185c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D185Cu;
    {
        const bool branch_taken_0x1d185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d185c) {
            ctx->pc = 0x1D18A8u;
            goto label_1d18a8;
        }
    }
    ctx->pc = 0x1D1864u;
    // 0x1d1864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1868: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D1868u;
    SET_GPR_U32(ctx, 31, 0x1D1870u);
    ctx->pc = 0x1D186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1868u;
    // 0x1d186c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D1868u, 0x1D1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1870u;
label_1d1870:
    // 0x1d1870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1874: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D1874u;
    SET_GPR_U32(ctx, 31, 0x1D187Cu);
    ctx->pc = 0x1D1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1874u;
    // 0x1d1878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D1874u, 0x1D187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D187Cu;
label_1d187c:
    // 0x1d187c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d187cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1884: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1888: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d188c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d188cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1890: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1898: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1898u;
    SET_GPR_U32(ctx, 31, 0x1D18A0u);
    ctx->pc = 0x1D189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1898u;
    // 0x1d189c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1898u, 0x1D18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18A0u;
label_1d18a0:
    // 0x1d18a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D18A0u;
    {
        const bool branch_taken_0x1d18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18A0u;
        // 0x1d18a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18a0) {
            ctx->pc = 0x1D1900u;
            goto label_1d1900;
        }
    }
    ctx->pc = 0x1D18A8u;
label_1d18a8:
    // 0x1d18a8: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d18a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d18ac: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d18acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d18b0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d18b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d18b4: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d18b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d18b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d18bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18BCu;
        // 0x1d18c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D190Cu;
            goto label_1d190c;
        }
    }
    ctx->pc = 0x1D18C4u;
    // 0x1d18c4: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D18C4u;
    SET_GPR_U32(ctx, 31, 0x1D18CCu);
    ctx->pc = 0x1D18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18C4u;
    // 0x1d18c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D18C4u, 0x1D18CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18CCu;
label_1d18cc:
    // 0x1d18cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d18ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18d0: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D18D0u;
    SET_GPR_U32(ctx, 31, 0x1D18D8u);
    ctx->pc = 0x1D18D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18D0u;
    // 0x1d18d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D18D0u, 0x1D18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18D8u;
label_1d18d8:
    // 0x1d18d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d18dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d18dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d18e4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d18e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d18ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d18f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d18f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D18F4u;
    SET_GPR_U32(ctx, 31, 0x1D18FCu);
    ctx->pc = 0x1D18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18F4u;
    // 0x1d18f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D18F4u, 0x1D18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18FCu;
label_1d18fc:
    // 0x1d18fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1900:
    // 0x1d1900: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1904: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1D1904u;
    {
        const bool branch_taken_0x1d1904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1904u;
        // 0x1d1908: 0xae031804  sw          $v1, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1904) {
            ctx->pc = 0x1D1A8Cu;
            goto label_1d1a8c;
        }
    }
    ctx->pc = 0x1D190Cu;
label_1d190c:
    // 0x1d190c: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d190cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d1910: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d1914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1918: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D1918u;
    {
        const bool branch_taken_0x1d1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1918u;
        // 0x1d191c: 0x3c120060  lui         $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1918) {
            ctx->pc = 0x1D19E0u;
            goto label_1d19e0;
        }
    }
    ctx->pc = 0x1D1920u;
    // 0x1d1920: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D1920u;
    {
        const bool branch_taken_0x1d1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1920u;
        // 0x1d1924: 0x8e021814  lw          $v0, 0x1814($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1920) {
            ctx->pc = 0x1D194Cu;
            goto label_1d194c;
        }
    }
    ctx->pc = 0x1D1928u;
label_1d1928:
    // 0x1d1928: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1D1928u;
    SET_GPR_U32(ctx, 31, 0x1D1930u);
    ctx->pc = 0x1D192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1928u;
    // 0x1d192c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1D1928u, 0x1D1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1930u;
label_1d1930:
    // 0x1d1930: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1934: 0x8e031800  lw          $v1, 0x1800($s0)
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d1938: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1d1938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d193c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1d193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1d1940: 0xae021814  sw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    // 0x1d1944: 0xae031800  sw          $v1, 0x1800($s0)
    ctx->pc = 0x1d1944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 3));
    // 0x1d1948: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
label_1d194c:
    // 0x1d194c: 0x8e031810  lw          $v1, 0x1810($s0)
    ctx->pc = 0x1d194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6160)));
    // 0x1d1950: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d1950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1954: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1954u;
    {
        const bool branch_taken_0x1d1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1954u;
        // 0x1d1958: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1954) {
            ctx->pc = 0x1D1974u;
            goto label_1d1974;
        }
    }
    ctx->pc = 0x1D195Cu;
    // 0x1d195c: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1d195cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1d1960: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1D1960u;
    SET_GPR_U32(ctx, 31, 0x1D1968u);
    ctx->pc = 0x1D1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1960u;
    // 0x1d1964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D1960u, 0x1D1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1968u;
label_1d1968:
    // 0x1d1968: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1d196c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D196Cu;
    {
        const bool branch_taken_0x1d196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D196Cu;
        // 0x1d1970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d196c) {
            ctx->pc = 0x1D1928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1928;
        }
    }
    ctx->pc = 0x1D1974u;
label_1d1974:
    // 0x1d1974: 0x8e051814  lw          $a1, 0x1814($s0)
    ctx->pc = 0x1d1974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1978: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1978u;
    {
        const bool branch_taken_0x1d1978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1978u;
        // 0x1d197c: 0x2644ee00  addiu       $a0, $s2, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1978) {
            ctx->pc = 0x1D19BCu;
            goto label_1d19bc;
        }
    }
    ctx->pc = 0x1D1980u;
    // 0x1d1980: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1980u;
    SET_GPR_U32(ctx, 31, 0x1D1988u);
    ctx->pc = 0x1D1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1980u;
    // 0x1d1984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1980u, 0x1D1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1988u;
label_1d1988:
    // 0x1d1988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d198c: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D198Cu;
    SET_GPR_U32(ctx, 31, 0x1D1994u);
    ctx->pc = 0x1D1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D198Cu;
    // 0x1d1990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D198Cu, 0x1D1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1994u;
label_1d1994:
    // 0x1d1994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1998: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D1998u;
    SET_GPR_U32(ctx, 31, 0x1D19A0u);
    ctx->pc = 0x1D199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1998u;
    // 0x1d199c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D1998u, 0x1D19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19A0u;
label_1d19a0:
    // 0x1d19a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19a4: 0xc0754d8  jal         func_1D5360
    ctx->pc = 0x1D19A4u;
    SET_GPR_U32(ctx, 31, 0x1D19ACu);
    ctx->pc = 0x1D19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19A4u;
    // 0x1d19a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5360u, 0x1D19A4u, 0x1D19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19ACu;
label_1d19ac:
    // 0x1d19ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d19b0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d19b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d19b4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d19b8: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
label_1d19bc:
    // 0x1d19bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d19c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d19c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d19c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d19ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D19D0u;
    SET_GPR_U32(ctx, 31, 0x1D19D8u);
    ctx->pc = 0x1D19D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19D0u;
    // 0x1d19d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D19D0u, 0x1D19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19D8u;
label_1d19d8:
    // 0x1d19d8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D19D8u;
    {
        const bool branch_taken_0x1d19d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19D8u;
        // 0x1d19dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19d8) {
            ctx->pc = 0x1D1A90u;
            goto label_1d1a90;
        }
    }
    ctx->pc = 0x1D19E0u;
label_1d19e0:
    // 0x1d19e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d19e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d19e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d19e8: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D19E8u;
    {
        const bool branch_taken_0x1d19e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19e8) {
            ctx->pc = 0x1D19ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D19E8u;
            // 0x1d19ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A90u;
            goto label_1d1a90;
        }
    }
    ctx->pc = 0x1D19F0u;
    // 0x1d19f0: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d19f4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D19F4u;
    {
        const bool branch_taken_0x1d19f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19F4u;
        // 0x1d19f8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19f4) {
            ctx->pc = 0x1D1A44u;
            goto label_1d1a44;
        }
    }
    ctx->pc = 0x1D19FCu;
    // 0x1d19fc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1d19fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d1a00: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d1a04: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D1A04u;
    SET_GPR_U32(ctx, 31, 0x1D1A0Cu);
    ctx->pc = 0x1D1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A04u;
    // 0x1d1a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D1A04u, 0x1D1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A0Cu;
label_1d1a0c:
    // 0x1d1a0c: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a14: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d1a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1c: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A24u);
    ctx->pc = 0x1D1A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A1Cu;
    // 0x1d1a20: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1A1Cu, 0x1D1A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A24u;
label_1d1a24:
    // 0x1d1a24: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1a28: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1A28u;
    {
        const bool branch_taken_0x1d1a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A28u;
        // 0x1d1a2c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a28) {
            ctx->pc = 0x1D1A6Cu;
            goto label_1d1a6c;
        }
    }
    ctx->pc = 0x1D1A30u;
    // 0x1d1a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a34: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1A34u;
    SET_GPR_U32(ctx, 31, 0x1D1A3Cu);
    ctx->pc = 0x1D1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A34u;
    // 0x1d1a38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1A34u, 0x1D1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A3Cu;
label_1d1a3c:
    // 0x1d1a3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1A3Cu;
    {
        const bool branch_taken_0x1d1a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A3Cu;
        // 0x1d1a40: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a3c) {
            ctx->pc = 0x1D1A6Cu;
            goto label_1d1a6c;
        }
    }
    ctx->pc = 0x1D1A44u;
label_1d1a44:
    // 0x1d1a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a48: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D1A48u;
    SET_GPR_U32(ctx, 31, 0x1D1A50u);
    ctx->pc = 0x1D1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A48u;
    // 0x1d1a4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D1A48u, 0x1D1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A50u;
label_1d1a50:
    // 0x1d1a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a54: 0xc075612  jal         func_1D5848
    ctx->pc = 0x1D1A54u;
    SET_GPR_U32(ctx, 31, 0x1D1A5Cu);
    ctx->pc = 0x1D1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A54u;
    // 0x1d1a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5848u, 0x1D1A54u, 0x1D1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A5Cu;
label_1d1a5c:
    // 0x1d1a5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1a60: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1a64: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1a68: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d1a6c:
    // 0x1d1a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a70: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1a74: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d1a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d1a78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1a7c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1a80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a84: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1A84u;
    SET_GPR_U32(ctx, 31, 0x1D1A8Cu);
    ctx->pc = 0x1D1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A84u;
    // 0x1d1a88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1A84u, 0x1D1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A8Cu;
label_1d1a8c:
    // 0x1d1a8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1a90:
    // 0x1d1a90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d1a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d1a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A9Cu;
        // 0x1d1aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AA4u;
    // 0x1d1aa4: 0x0  nop
    ctx->pc = 0x1d1aa4u;
    // NOP
    ctx->pc = 0x1d1aa8u;
}
