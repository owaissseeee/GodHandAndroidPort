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

// Function: func_001B1630
// Address: 0x1b1630 - 0x1b1760
void func_001B1630_0x1b1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1630_0x1b1630");
#endif

    switch (ctx->pc) {
        case 0x1b16b4u: goto label_1b16b4;
        case 0x1b1724u: goto label_1b1724;
        case 0x1b174cu: goto label_1b174c;
        default: break;
    }

    ctx->pc = 0x1b1630u;

    // 0x1b1630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b1638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b163c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b163cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1640: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b1644: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B1644u;
    {
        const bool branch_taken_0x1b1644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1644u;
        // 0x1b1648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1644) {
            ctx->pc = 0x1B1750u;
            goto label_1b1750;
        }
    }
    ctx->pc = 0x1B164Cu;
    // 0x1b164c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x1b164cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x1b1650: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b1654: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1654u;
    {
        const bool branch_taken_0x1b1654 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1B1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1654u;
        // 0x1b1658: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1654) {
            ctx->pc = 0x1B1660u;
            goto label_1b1660;
        }
    }
    ctx->pc = 0x1B165Cu;
    // 0x1b165c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1b165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b1660:
    // 0x1b1660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1664u;
    {
        const bool branch_taken_0x1b1664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1664u;
        // 0x1b1668: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1664) {
            ctx->pc = 0x1B167Cu;
            goto label_1b167c;
        }
    }
    ctx->pc = 0x1B166Cu;
    // 0x1b166c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x1b166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x1b1670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1674u;
    {
        const bool branch_taken_0x1b1674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1674u;
        // 0x1b1678: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1674) {
            ctx->pc = 0x1B1680u;
            goto label_1b1680;
        }
    }
    ctx->pc = 0x1B167Cu;
label_1b167c:
    // 0x1b167c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1680:
    // 0x1b1680: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b1684: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x1b1684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1b1688: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1688u;
    {
        const bool branch_taken_0x1b1688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1688u;
        // 0x1b168c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1688) {
            ctx->pc = 0x1B16ACu;
            goto label_1b16ac;
        }
    }
    ctx->pc = 0x1B1690u;
    // 0x1b1690: 0xc6000610  lwc1        $f0, 0x610($s0)
    ctx->pc = 0x1b1690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1694: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b1694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b1698: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b1698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b169c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b169cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b16a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b16a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b16a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1b16a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b16a8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1b16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b16ac:
    // 0x1b16ac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B16ACu;
    SET_GPR_U32(ctx, 31, 0x1B16B4u);
    ctx->pc = 0x1B16B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16ACu;
    // 0x1b16b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B16ACu, 0x1B16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16B4u;
label_1b16b4:
    // 0x1b16b4: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b16b8: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x1b16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b16bc: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1b16bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1b16c0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1b16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1b16c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b16c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B16C8u;
    {
        const bool branch_taken_0x1b16c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16c8) {
            ctx->pc = 0x1B16CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16C8u;
            // 0x1b16cc: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B16E0u;
            goto label_1b16e0;
        }
    }
    ctx->pc = 0x1B16D0u;
    // 0x1b16d0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1b16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1b16d4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b16d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b16d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B16D8u;
    {
        const bool branch_taken_0x1b16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D8u;
        // 0x1b16dc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d8) {
            ctx->pc = 0x1B16F0u;
            goto label_1b16f0;
        }
    }
    ctx->pc = 0x1B16E0u;
label_1b16e0:
    // 0x1b16e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b16e4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1b16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1b16e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b16e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b16ec: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1b16ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1b16f0:
    // 0x1b16f0: 0x92020667  lbu         $v0, 0x667($s0)
    ctx->pc = 0x1b16f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1639)));
    // 0x1b16f4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B16F4u;
    {
        const bool branch_taken_0x1b16f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b16f4) {
            ctx->pc = 0x1B16F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B16F4u;
            // 0x1b16f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1754u;
            goto label_1b1754;
        }
    }
    ctx->pc = 0x1B16FCu;
    // 0x1b16fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1700: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1704: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1b1704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b1708: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b170c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1714: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1718: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1b1718u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1b171c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B171Cu;
    SET_GPR_U32(ctx, 31, 0x1B1724u);
    ctx->pc = 0x1B1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B171Cu;
    // 0x1b1720: 0xa2020667  sb          $v0, 0x667($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1639), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B171Cu, 0x1B1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1724u;
label_1b1724:
    // 0x1b1724: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b1724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b1728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b172c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b1730: 0x24060117  addiu       $a2, $zero, 0x117
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x1b1734: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b173c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b173cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1740: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1744: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B1744u;
    SET_GPR_U32(ctx, 31, 0x1B174Cu);
    ctx->pc = 0x1B1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1744u;
    // 0x1b1748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B1744u, 0x1B174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B174Cu;
label_1b174c:
    // 0x1b174c: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x1b174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
label_1b1750:
    // 0x1b1750: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1754:
    // 0x1b1754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1758: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1758u;
        // 0x1b175c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1760u;
}
