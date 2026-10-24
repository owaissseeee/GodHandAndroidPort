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

// Function: cSnd_BgmEventStart
// Address: 0x2d1610 - 0x2d1768
void cSnd_BgmEventStart_0x2d1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEventStart_0x2d1610");
#endif

    switch (ctx->pc) {
        case 0x2d1648u: goto label_2d1648;
        case 0x2d166cu: goto label_2d166c;
        case 0x2d167cu: goto label_2d167c;
        case 0x2d1694u: goto label_2d1694;
        case 0x2d16bcu: goto label_2d16bc;
        case 0x2d1700u: goto label_2d1700;
        case 0x2d1738u: goto label_2d1738;
        default: break;
    }

    ctx->pc = 0x2d1610u;

    // 0x2d1610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1614: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d1618: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d161c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d161cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1620: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d1624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1628: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d162c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d162cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1630: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d1630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d1634: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d1634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d163c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d163cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1640: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D1640u;
    SET_GPR_U32(ctx, 31, 0x2D1648u);
    ctx->pc = 0x2D1644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1640u;
    // 0x2d1644: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D1640u, 0x2D1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1648u;
label_2d1648:
    // 0x2d1648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d164c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D164Cu;
    {
        const bool branch_taken_0x2d164c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d164c) {
            ctx->pc = 0x2D1674u;
            goto label_2d1674;
        }
    }
    ctx->pc = 0x2D1654u;
    // 0x2d1654: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2d1658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d1658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d165c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D165Cu;
    {
        const bool branch_taken_0x2d165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d165c) {
            ctx->pc = 0x2D1674u;
            goto label_2d1674;
        }
    }
    ctx->pc = 0x2D1664u;
    // 0x2d1664: 0xc0b32b2  jal         func_2CCAC8
    ctx->pc = 0x2D1664u;
    SET_GPR_U32(ctx, 31, 0x2D166Cu);
    ctx->pc = 0x2D1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1664u;
    // 0x2d1668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAC8u, 0x2D1664u, 0x2D166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D166Cu;
label_2d166c:
    // 0x2d166c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D166Cu;
    {
        const bool branch_taken_0x2d166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D166Cu;
        // 0x2d1670: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d166c) {
            ctx->pc = 0x2D16C0u;
            goto label_2d16c0;
        }
    }
    ctx->pc = 0x2D1674u;
label_2d1674:
    // 0x2d1674: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D1674u;
    SET_GPR_U32(ctx, 31, 0x2D167Cu);
    ctx->pc = 0x2D1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1674u;
    // 0x2d1678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D1674u, 0x2D167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D167Cu;
label_2d167c:
    // 0x2d167c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d167cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1680: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1680u;
    {
        const bool branch_taken_0x2d1680 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1680u;
        // 0x2d1684: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1680) {
            ctx->pc = 0x2D169Cu;
            goto label_2d169c;
        }
    }
    ctx->pc = 0x2D1688u;
    // 0x2d1688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d168c: 0xc0b4600  jal         func_2D1800
    ctx->pc = 0x2D168Cu;
    SET_GPR_U32(ctx, 31, 0x2D1694u);
    ctx->pc = 0x2D1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D168Cu;
    // 0x2d1690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1800u, 0x2D168Cu, 0x2D1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1694u;
label_2d1694:
    // 0x2d1694: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D1694u;
    {
        const bool branch_taken_0x2d1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1694u;
        // 0x2d1698: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1694) {
            ctx->pc = 0x2D1748u;
            goto label_2d1748;
        }
    }
    ctx->pc = 0x2D169Cu;
label_2d169c:
    // 0x2d169c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d169cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d16a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2d16a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16a4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2d16a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d16acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d16b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d16b4: 0xc0b3240  jal         func_2CC900
    ctx->pc = 0x2D16B4u;
    SET_GPR_U32(ctx, 31, 0x2D16BCu);
    ctx->pc = 0x2D16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16B4u;
    // 0x2d16b8: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC900u, 0x2D16B4u, 0x2D16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16BCu;
label_2d16bc:
    // 0x2d16bc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2d16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d16c0:
    // 0x2d16c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d16c4: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2d16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2d16c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d16c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d16cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d16d0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x2d16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x2d16d4: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x2d16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x2d16d8: 0x9223005e  lbu         $v1, 0x5E($s1)
    ctx->pc = 0x2d16d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d16dc: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D16DCu;
    {
        const bool branch_taken_0x2d16dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d16dc) {
            ctx->pc = 0x2D16E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D16DCu;
            // 0x2d16e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1748u;
            goto label_2d1748;
        }
    }
    ctx->pc = 0x2D16E4u;
    // 0x2d16e4: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x2d16e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d16e8: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D16E8u;
    {
        const bool branch_taken_0x2d16e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16E8u;
        // 0x2d16ec: 0x3c140018  lui         $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16e8) {
            ctx->pc = 0x2D1744u;
            goto label_2d1744;
        }
    }
    ctx->pc = 0x2D16F0u;
    // 0x2d16f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d16f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d16f4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2d16f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d16f8: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d16fc: 0x0  nop
    ctx->pc = 0x2d16fcu;
    // NOP
label_2d1700:
    // 0x2d1700: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2d1700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2d1704: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1704u;
    {
        const bool branch_taken_0x2d1704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1704) {
            ctx->pc = 0x2D1708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1704u;
            // 0x2d1708: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D173Cu;
            goto label_2d173c;
        }
    }
    ctx->pc = 0x2D170Cu;
    // 0x2d170c: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D170Cu;
    {
        const bool branch_taken_0x2d170c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D170Cu;
        // 0x2d1710: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d170c) {
            ctx->pc = 0x2D1738u;
            goto label_2d1738;
        }
    }
    ctx->pc = 0x2D1714u;
    // 0x2d1714: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1714u;
    {
        const bool branch_taken_0x2d1714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2D1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1714u;
        // 0x2d1718: 0x34621000  ori         $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1714) {
            ctx->pc = 0x2D1738u;
            goto label_2d1738;
        }
    }
    ctx->pc = 0x2D171Cu;
    // 0x2d171c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d1720: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1720u;
    {
        const bool branch_taken_0x2d1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1720u;
        // 0x2d1724: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1720) {
            ctx->pc = 0x2D1738u;
            goto label_2d1738;
        }
    }
    ctx->pc = 0x2D1728u;
    // 0x2d1728: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d1728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d172c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d172cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1730: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D1730u;
    SET_GPR_U32(ctx, 31, 0x2D1738u);
    ctx->pc = 0x2D1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1730u;
    // 0x2d1734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D1730u, 0x2D1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1738u;
label_2d1738:
    // 0x2d1738: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d173c:
    // 0x2d173c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D173Cu;
    {
        const bool branch_taken_0x2d173c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d173c) {
            ctx->pc = 0x2D1740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D173Cu;
            // 0x2d1740: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1700;
        }
    }
    ctx->pc = 0x2D1744u;
label_2d1744:
    // 0x2d1744: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d1744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d1748:
    // 0x2d1748: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d1748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d174c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d174cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1750: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d1750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1754: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d1754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d175c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D175Cu;
        // 0x2d1760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1764u;
    // 0x2d1764: 0x0  nop
    ctx->pc = 0x2d1764u;
    // NOP
    ctx->pc = 0x2d1768u;
}
