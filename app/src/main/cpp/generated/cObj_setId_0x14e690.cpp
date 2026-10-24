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

// Function: cObj_setId
// Address: 0x14e690 - 0x14e768
void cObj_setId_0x14e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObj_setId_0x14e690");
#endif

    ctx->pc = 0x14e690u;

    // 0x14e690: 0xa48502fe  sh          $a1, 0x2FE($a0)
    ctx->pc = 0x14e690u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 766), (uint16_t)GPR_U32(ctx, 5));
    // 0x14e694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e698: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x14e698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14e69c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x14e69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x14e6a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E6A0u;
    {
        const bool branch_taken_0x14e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6A0u;
        // 0x14e6a4: 0xac8002d0  sw          $zero, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6a0) {
            ctx->pc = 0x14E6B0u;
            goto label_14e6b0;
        }
    }
    ctx->pc = 0x14E6A8u;
    // 0x14e6a8: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x14e6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x14e6ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e6b0:
    // 0x14e6b0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14e6b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E6B4u;
    {
        const bool branch_taken_0x14e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6B4u;
        // 0x14e6b8: 0x28620200  slti        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6b4) {
            ctx->pc = 0x14E6C8u;
            goto label_14e6c8;
        }
    }
    ctx->pc = 0x14E6BCu;
    // 0x14e6bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C0u;
        // 0x14e6c4: 0xac8202d0  sw          $v0, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E6C8u;
label_14e6c8:
    // 0x14e6c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C8u;
        // 0x14e6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E6D8u;
            goto label_14e6d8;
        }
    }
    ctx->pc = 0x14E6D0u;
    // 0x14e6d0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x14e6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x14e6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e6d8:
    // 0x14e6d8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e6dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E6DCu;
    {
        const bool branch_taken_0x14e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6DCu;
        // 0x14e6e0: 0x28620300  slti        $v0, $v1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6dc) {
            ctx->pc = 0x14E6F0u;
            goto label_14e6f0;
        }
    }
    ctx->pc = 0x14E6E4u;
    // 0x14e6e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E8u;
        // 0x14e6ec: 0xac8202d0  sw          $v0, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E6F0u;
label_14e6f0:
    // 0x14e6f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E6F0u;
    {
        const bool branch_taken_0x14e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6F0u;
        // 0x14e6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6f0) {
            ctx->pc = 0x14E700u;
            goto label_14e700;
        }
    }
    ctx->pc = 0x14E6F8u;
    // 0x14e6f8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x14e6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x14e6fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e700:
    // 0x14e700: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E704u;
    {
        const bool branch_taken_0x14e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E704u;
        // 0x14e708: 0x28620500  slti        $v0, $v1, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e704) {
            ctx->pc = 0x14E718u;
            goto label_14e718;
        }
    }
    ctx->pc = 0x14E70Cu;
    // 0x14e70c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x14e710: 0x3e00008  jr          $ra
    ctx->pc = 0x14E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0xac8202d0  sw          $v0, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E718u;
    {
        const bool branch_taken_0x14e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E718u;
        // 0x14e71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e718) {
            ctx->pc = 0x14E728u;
            goto label_14e728;
        }
    }
    ctx->pc = 0x14E720u;
    // 0x14e720: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x14e720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x14e724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e728:
    // 0x14e728: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e72c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E72Cu;
    {
        const bool branch_taken_0x14e72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E72Cu;
        // 0x14e730: 0x28620600  slti        $v0, $v1, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e72c) {
            ctx->pc = 0x14E740u;
            goto label_14e740;
        }
    }
    ctx->pc = 0x14E734u;
    // 0x14e734: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14e738: 0x3e00008  jr          $ra
    ctx->pc = 0x14E738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E738u;
        // 0x14e73c: 0xac8202d0  sw          $v0, 0x2D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E740u;
    {
        const bool branch_taken_0x14e740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E740u;
        // 0x14e744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e740) {
            ctx->pc = 0x14E750u;
            goto label_14e750;
        }
    }
    ctx->pc = 0x14E748u;
    // 0x14e748: 0x28620700  slti        $v0, $v1, 0x700
    ctx->pc = 0x14e748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1792) ? 1 : 0);
    // 0x14e74c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e750:
    // 0x14e750: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14e750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e754: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E754u;
    {
        const bool branch_taken_0x14e754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E754u;
        // 0x14e758: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e754) {
            ctx->pc = 0x14E760u;
            goto label_14e760;
        }
    }
    ctx->pc = 0x14E75Cu;
    // 0x14e75c: 0xac8202d0  sw          $v0, 0x2D0($a0)
    ctx->pc = 0x14e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
label_14e760:
    // 0x14e760: 0x3e00008  jr          $ra
    ctx->pc = 0x14E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E768u;
}
