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

// Function: func_00381B38
// Address: 0x381b38 - 0x381bc8
void func_00381B38_0x381b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381B38_0x381b38");
#endif

    switch (ctx->pc) {
        case 0x381b4cu: goto label_381b4c;
        case 0x381b58u: goto label_381b58;
        case 0x381b6cu: goto label_381b6c;
        case 0x381b8cu: goto label_381b8c;
        case 0x381ba8u: goto label_381ba8;
        case 0x381bb0u: goto label_381bb0;
        default: break;
    }

    ctx->pc = 0x381b38u;

    // 0x381b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381b44: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x381B44u;
    SET_GPR_U32(ctx, 31, 0x381B4Cu);
    ctx->pc = 0x381B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B44u;
    // 0x381b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x381B44u, 0x381B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B4Cu;
label_381b4c:
    // 0x381b4c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x381b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x381b50: 0xc0c7224  jal         func_31C890
    ctx->pc = 0x381B50u;
    SET_GPR_U32(ctx, 31, 0x381B58u);
    ctx->pc = 0x381B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B50u;
    // 0x381b54: 0x3484c6d0  ori         $a0, $a0, 0xC6D0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)50896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C890u, 0x381B50u, 0x381B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B58u;
label_381b58:
    // 0x381b58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x381B58u;
    {
        const bool branch_taken_0x381b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B58u;
        // 0x381b5c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b58) {
            ctx->pc = 0x381B74u;
            goto label_381b74;
        }
    }
    ctx->pc = 0x381B60u;
    // 0x381b60: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x381b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x381b64: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x381B64u;
    SET_GPR_U32(ctx, 31, 0x381B6Cu);
    ctx->pc = 0x381B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B64u;
    // 0x381b68: 0x2484c7a0  addiu       $a0, $a0, -0x3860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x381B64u, 0x381B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B6Cu;
label_381b6c:
    // 0x381b6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x381B6Cu;
    {
        const bool branch_taken_0x381b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B6Cu;
        // 0x381b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b6c) {
            ctx->pc = 0x381BB4u;
            goto label_381bb4;
        }
    }
    ctx->pc = 0x381B74u;
label_381b74:
    // 0x381b74: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x381b74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x381b78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x381b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x381b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x381b80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x381b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x381b84: 0xc0cb4d0  jal         func_32D340
    ctx->pc = 0x381B84u;
    SET_GPR_U32(ctx, 31, 0x381B8Cu);
    ctx->pc = 0x381B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B84u;
    // 0x381b88: 0x34e7c6d0  ori         $a3, $a3, 0xC6D0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)50896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D340u, 0x381B84u, 0x381B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B8Cu;
label_381b8c:
    // 0x381b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x381B8Cu;
    {
        const bool branch_taken_0x381b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B8Cu;
        // 0x381b90: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b8c) {
            ctx->pc = 0x381B9Cu;
            goto label_381b9c;
        }
    }
    ctx->pc = 0x381B94u;
    // 0x381b94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x381B94u;
    {
        const bool branch_taken_0x381b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B94u;
        // 0x381b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b94) {
            ctx->pc = 0x381BB4u;
            goto label_381bb4;
        }
    }
    ctx->pc = 0x381B9Cu;
label_381b9c:
    // 0x381b9c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x381b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x381ba0: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x381BA0u;
    SET_GPR_U32(ctx, 31, 0x381BA8u);
    ctx->pc = 0x381BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BA0u;
    // 0x381ba4: 0x2484c7d0  addiu       $a0, $a0, -0x3830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x381BA0u, 0x381BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BA8u;
label_381ba8:
    // 0x381ba8: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x381BA8u;
    SET_GPR_U32(ctx, 31, 0x381BB0u);
    ctx->pc = 0x381BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BA8u;
    // 0x381bac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x381BA8u, 0x381BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BB0u;
label_381bb0:
    // 0x381bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x381bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_381bb4:
    // 0x381bb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x381BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BBCu;
        // 0x381bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381BC4u;
    // 0x381bc4: 0x0  nop
    ctx->pc = 0x381bc4u;
    // NOP
    ctx->pc = 0x381bc8u;
}
