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

// Function: func_0037E670
// Address: 0x37e670 - 0x37e8d8
void func_0037E670_0x37e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E670_0x37e670");
#endif

    switch (ctx->pc) {
        case 0x37e68cu: goto label_37e68c;
        case 0x37e6a8u: goto label_37e6a8;
        case 0x37e6b0u: goto label_37e6b0;
        case 0x37e6ecu: goto label_37e6ec;
        case 0x37e73cu: goto label_37e73c;
        case 0x37e744u: goto label_37e744;
        case 0x37e7b4u: goto label_37e7b4;
        case 0x37e7c4u: goto label_37e7c4;
        case 0x37e7fcu: goto label_37e7fc;
        case 0x37e80cu: goto label_37e80c;
        case 0x37e844u: goto label_37e844;
        case 0x37e854u: goto label_37e854;
        case 0x37e864u: goto label_37e864;
        case 0x37e898u: goto label_37e898;
        default: break;
    }

    ctx->pc = 0x37e670u;

    // 0x37e670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37e674: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37e678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37e67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37e67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37e684: 0xc0e1990  jal         func_386640
    ctx->pc = 0x37E684u;
    SET_GPR_U32(ctx, 31, 0x37E68Cu);
    ctx->pc = 0x37E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E684u;
    // 0x37e688: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386640u, 0x37E684u, 0x37E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E68Cu;
label_37e68c:
    // 0x37e68c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37E68Cu;
    {
        const bool branch_taken_0x37e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e68c) {
            ctx->pc = 0x37E690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E68Cu;
            // 0x37e690: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E6C0u;
            goto label_37e6c0;
        }
    }
    ctx->pc = 0x37E694u;
    // 0x37e694: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x37e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37e698: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37E698u;
    {
        const bool branch_taken_0x37e698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37e698) {
            ctx->pc = 0x37E69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E698u;
            // 0x37e69c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E6C4u;
            goto label_37e6c4;
        }
    }
    ctx->pc = 0x37E6A0u;
    // 0x37e6a0: 0xc0e18ee  jal         func_3863B8
    ctx->pc = 0x37E6A0u;
    SET_GPR_U32(ctx, 31, 0x37E6A8u);
    ctx->pc = 0x37E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6A0u;
    // 0x37e6a4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3863B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3863B8u, 0x37E6A0u, 0x37E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6A8u;
label_37e6a8:
    // 0x37e6a8: 0xc0dfa36  jal         func_37E8D8
    ctx->pc = 0x37E6A8u;
    SET_GPR_U32(ctx, 31, 0x37E6B0u);
    ctx->pc = 0x37E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6A8u;
    // 0x37e6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E8D8u, 0x37E6A8u, 0x37E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6B0u;
label_37e6b0:
    // 0x37e6b0: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x37E6B0u;
    {
        const bool branch_taken_0x37e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6B0u;
        // 0x37e6b4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6b0) {
            ctx->pc = 0x37E8C4u;
            goto label_37e8c4;
        }
    }
    ctx->pc = 0x37E6B8u;
    // 0x37e6b8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x37E6B8u;
    {
        const bool branch_taken_0x37e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6B8u;
        // 0x37e6bc: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6b8) {
            ctx->pc = 0x37E8C4u;
            goto label_37e8c4;
        }
    }
    ctx->pc = 0x37E6C0u;
label_37e6c0:
    // 0x37e6c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x37e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37e6c4:
    // 0x37e6c4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x37e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x37e6c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37e6cc: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x37e6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37e6d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x37e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37e6d4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37e6d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37e6dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E6DCu;
    {
        const bool branch_taken_0x37e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e6dc) {
            ctx->pc = 0x37E6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E6DCu;
            // 0x37e6e0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E6F4u;
            goto label_37e6f4;
        }
    }
    ctx->pc = 0x37E6E4u;
    // 0x37e6e4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37E6E4u;
    SET_GPR_U32(ctx, 31, 0x37E6ECu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37E6E4u, 0x37E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6ECu;
label_37e6ec:
    // 0x37e6ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37E6ECu;
    {
        const bool branch_taken_0x37e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6ECu;
        // 0x37e6f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6ec) {
            ctx->pc = 0x37E700u;
            goto label_37e700;
        }
    }
    ctx->pc = 0x37E6F4u;
label_37e6f4:
    // 0x37e6f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x37e6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e6f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37e6fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37e700:
    // 0x37e700: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x37e700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x37e704: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x37e704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37e708: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37e708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e70c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x37E70Cu;
    {
        const bool branch_taken_0x37e70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E70Cu;
        // 0x37e710: 0xa3a20004  sb          $v0, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e70c) {
            ctx->pc = 0x37E784u;
            goto label_37e784;
        }
    }
    ctx->pc = 0x37E714u;
    // 0x37e714: 0x8ca2fff0  lw          $v0, -0x10($a1)
    ctx->pc = 0x37e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x37e718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E718u;
    {
        const bool branch_taken_0x37e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E718u;
        // 0x37e71c: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e718) {
            ctx->pc = 0x37E72Cu;
            goto label_37e72c;
        }
    }
    ctx->pc = 0x37E720u;
    // 0x37e720: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37e724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37E724u;
    {
        const bool branch_taken_0x37e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E724u;
        // 0x37e728: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e724) {
            ctx->pc = 0x37E734u;
            goto label_37e734;
        }
    }
    ctx->pc = 0x37E72Cu;
label_37e72c:
    // 0x37e72c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e730: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37e730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e734:
    // 0x37e734: 0xc0e1948  jal         func_386520
    ctx->pc = 0x37E734u;
    SET_GPR_U32(ctx, 31, 0x37E73Cu);
    ctx->pc = 0x37E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E734u;
    // 0x37e738: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386520u, 0x37E734u, 0x37E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E73Cu;
label_37e73c:
    // 0x37e73c: 0xc0dfa36  jal         func_37E8D8
    ctx->pc = 0x37E73Cu;
    SET_GPR_U32(ctx, 31, 0x37E744u);
    ctx->pc = 0x37E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E73Cu;
    // 0x37e740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E8D8u, 0x37E73Cu, 0x37E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E744u;
label_37e744:
    // 0x37e744: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37E744u;
    {
        const bool branch_taken_0x37e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E744u;
        // 0x37e748: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e744) {
            ctx->pc = 0x37E750u;
            goto label_37e750;
        }
    }
    ctx->pc = 0x37E74Cu;
    // 0x37e74c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x37e74cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_37e750:
    // 0x37e750: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37e750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e754: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37e758: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37e75c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e760: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x37E760u;
    {
        const bool branch_taken_0x37e760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E760u;
        // 0x37e764: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e760) {
            ctx->pc = 0x37E8C4u;
            goto label_37e8c4;
        }
    }
    ctx->pc = 0x37E768u;
    // 0x37e768: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37e76c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37e770: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37e770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37e774: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x37E774u;
    {
        const bool branch_taken_0x37e774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E774u;
        // 0x37e778: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e774) {
            ctx->pc = 0x37E890u;
            goto label_37e890;
        }
    }
    ctx->pc = 0x37E77Cu;
    // 0x37e77c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x37E77Cu;
    {
        const bool branch_taken_0x37e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E77Cu;
        // 0x37e780: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e77c) {
            ctx->pc = 0x37E8A4u;
            goto label_37e8a4;
        }
    }
    ctx->pc = 0x37E784u;
label_37e784:
    // 0x37e784: 0x8ca2fff0  lw          $v0, -0x10($a1)
    ctx->pc = 0x37e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x37e788: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E788u;
    {
        const bool branch_taken_0x37e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E788u;
        // 0x37e78c: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e788) {
            ctx->pc = 0x37E79Cu;
            goto label_37e79c;
        }
    }
    ctx->pc = 0x37E790u;
    // 0x37e790: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37e794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37E794u;
    {
        const bool branch_taken_0x37e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E794u;
        // 0x37e798: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e794) {
            ctx->pc = 0x37E7A4u;
            goto label_37e7a4;
        }
    }
    ctx->pc = 0x37E79Cu;
label_37e79c:
    // 0x37e79c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37e79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e7a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e7a4:
    // 0x37e7a4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x37e7a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x37e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37e7ac: 0xc0e19ae  jal         func_3866B8
    ctx->pc = 0x37E7ACu;
    SET_GPR_U32(ctx, 31, 0x37E7B4u);
    ctx->pc = 0x37E7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7ACu;
    // 0x37e7b0: 0x24c6c118  addiu       $a2, $a2, -0x3EE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3866B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3866B8u, 0x37E7ACu, 0x37E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7B4u;
label_37e7b4:
    // 0x37e7b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E7B4u;
    {
        const bool branch_taken_0x37e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7B4u;
        // 0x37e7b8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7b4) {
            ctx->pc = 0x37E7CCu;
            goto label_37e7cc;
        }
    }
    ctx->pc = 0x37E7BCu;
    // 0x37e7bc: 0xc0dfb6a  jal         func_37EDA8
    ctx->pc = 0x37E7BCu;
    SET_GPR_U32(ctx, 31, 0x37E7C4u);
    ctx->pc = 0x37E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7BCu;
    // 0x37e7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37EDA8u, 0x37E7BCu, 0x37E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7C4u;
label_37e7c4:
    // 0x37e7c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x37E7C4u;
    {
        const bool branch_taken_0x37e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7C4u;
        // 0x37e7c8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7c4) {
            ctx->pc = 0x37E868u;
            goto label_37e868;
        }
    }
    ctx->pc = 0x37E7CCu;
label_37e7cc:
    // 0x37e7cc: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37e7d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E7D0u;
    {
        const bool branch_taken_0x37e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7D0u;
        // 0x37e7d4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7d0) {
            ctx->pc = 0x37E7E4u;
            goto label_37e7e4;
        }
    }
    ctx->pc = 0x37E7D8u;
    // 0x37e7d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37e7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37E7DCu;
    {
        const bool branch_taken_0x37e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7DCu;
        // 0x37e7e0: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7dc) {
            ctx->pc = 0x37E7ECu;
            goto label_37e7ec;
        }
    }
    ctx->pc = 0x37E7E4u;
label_37e7e4:
    // 0x37e7e4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37e7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e7e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e7ec:
    // 0x37e7ec: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x37e7f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x37e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37e7f4: 0xc0e19ae  jal         func_3866B8
    ctx->pc = 0x37E7F4u;
    SET_GPR_U32(ctx, 31, 0x37E7FCu);
    ctx->pc = 0x37E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7F4u;
    // 0x37e7f8: 0x24c6c110  addiu       $a2, $a2, -0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3866B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3866B8u, 0x37E7F4u, 0x37E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7FCu;
label_37e7fc:
    // 0x37e7fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E7FCu;
    {
        const bool branch_taken_0x37e7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7FCu;
        // 0x37e800: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7fc) {
            ctx->pc = 0x37E814u;
            goto label_37e814;
        }
    }
    ctx->pc = 0x37E804u;
    // 0x37e804: 0xc0dfa42  jal         func_37E908
    ctx->pc = 0x37E804u;
    SET_GPR_U32(ctx, 31, 0x37E80Cu);
    ctx->pc = 0x37E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E804u;
    // 0x37e808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E908u, 0x37E804u, 0x37E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E80Cu;
label_37e80c:
    // 0x37e80c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x37E80Cu;
    {
        const bool branch_taken_0x37e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E80Cu;
        // 0x37e810: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e80c) {
            ctx->pc = 0x37E868u;
            goto label_37e868;
        }
    }
    ctx->pc = 0x37E814u;
label_37e814:
    // 0x37e814: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37e818: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E818u;
    {
        const bool branch_taken_0x37e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E818u;
        // 0x37e81c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e818) {
            ctx->pc = 0x37E82Cu;
            goto label_37e82c;
        }
    }
    ctx->pc = 0x37E820u;
    // 0x37e820: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37e824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37E824u;
    {
        const bool branch_taken_0x37e824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E824u;
        // 0x37e828: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e824) {
            ctx->pc = 0x37E834u;
            goto label_37e834;
        }
    }
    ctx->pc = 0x37E82Cu;
label_37e82c:
    // 0x37e82c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37e82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e830: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e834:
    // 0x37e834: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37e834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x37e838: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x37e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37e83c: 0xc0e19ae  jal         func_3866B8
    ctx->pc = 0x37E83Cu;
    SET_GPR_U32(ctx, 31, 0x37E844u);
    ctx->pc = 0x37E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E83Cu;
    // 0x37e840: 0x24c6c120  addiu       $a2, $a2, -0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3866B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3866B8u, 0x37E83Cu, 0x37E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E844u;
label_37e844:
    // 0x37e844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E844u;
    {
        const bool branch_taken_0x37e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e844) {
            ctx->pc = 0x37E85Cu;
            goto label_37e85c;
        }
    }
    ctx->pc = 0x37E84Cu;
    // 0x37e84c: 0xc0dfc38  jal         func_37F0E0
    ctx->pc = 0x37E84Cu;
    SET_GPR_U32(ctx, 31, 0x37E854u);
    ctx->pc = 0x37E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E84Cu;
    // 0x37e850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F0E0u, 0x37E84Cu, 0x37E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E854u;
label_37e854:
    // 0x37e854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37E854u;
    {
        const bool branch_taken_0x37e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E854u;
        // 0x37e858: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e854) {
            ctx->pc = 0x37E868u;
            goto label_37e868;
        }
    }
    ctx->pc = 0x37E85Cu;
label_37e85c:
    // 0x37e85c: 0xc0dfd3e  jal         func_37F4F8
    ctx->pc = 0x37E85Cu;
    SET_GPR_U32(ctx, 31, 0x37E864u);
    ctx->pc = 0x37E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E85Cu;
    // 0x37e860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F4F8u, 0x37E85Cu, 0x37E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E864u;
label_37e864:
    // 0x37e864: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37e864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e868:
    // 0x37e868: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37e86c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37e870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e874: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37E874u;
    {
        const bool branch_taken_0x37e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E874u;
        // 0x37e878: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e874) {
            ctx->pc = 0x37E8C4u;
            goto label_37e8c4;
        }
    }
    ctx->pc = 0x37E87Cu;
    // 0x37e87c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37e880: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37e884: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37e884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37e888: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E888u;
    {
        const bool branch_taken_0x37e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E888u;
        // 0x37e88c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e888) {
            ctx->pc = 0x37E8A0u;
            goto label_37e8a0;
        }
    }
    ctx->pc = 0x37E890u;
label_37e890:
    // 0x37e890: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37E890u;
    SET_GPR_U32(ctx, 31, 0x37E898u);
    ctx->pc = 0x37E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E890u;
    // 0x37e894: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37E890u, 0x37E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E898u;
label_37e898:
    // 0x37e898: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37E898u;
    {
        const bool branch_taken_0x37e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E898u;
        // 0x37e89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e898) {
            ctx->pc = 0x37E8C8u;
            goto label_37e8c8;
        }
    }
    ctx->pc = 0x37E8A0u;
label_37e8a0:
    // 0x37e8a0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37e8a4:
    // 0x37e8a4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37e8a8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37e8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e8b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37e8b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37e8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e8bc: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37e8c0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37e8c4:
    // 0x37e8c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37e8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e8c8:
    // 0x37e8c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37e8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e8cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x37E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8D0u;
        // 0x37e8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E8D8u;
}
