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

// Function: get_iob
// Address: 0x3b3a48 - 0x3b3ab8
void get_iob_0x3b3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_iob_0x3b3a48");
#endif

    switch (ctx->pc) {
        case 0x3b3a64u: goto label_3b3a64;
        case 0x3b3a6cu: goto label_3b3a6c;
        case 0x3b3a80u: goto label_3b3a80;
        case 0x3b3a9cu: goto label_3b3a9c;
        default: break;
    }

    ctx->pc = 0x3b3a48u;

    // 0x3b3a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b3a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b3a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b3a5c: 0xc0ece16  jal         func_3B3858
    ctx->pc = 0x3B3A5Cu;
    SET_GPR_U32(ctx, 31, 0x3B3A64u);
    ctx->pc = 0x3B3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A5Cu;
    // 0x3b3a60: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3858u, 0x3B3A5Cu, 0x3B3A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A64u;
label_3b3a64:
    // 0x3b3a64: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B3A64u;
    SET_GPR_U32(ctx, 31, 0x3B3A6Cu);
    ctx->pc = 0x3B3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A64u;
    // 0x3b3a68: 0x8e24aee8  lw          $a0, -0x5118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B3A64u, 0x3B3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A6Cu;
label_3b3a6c:
    // 0x3b3a6c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x3b3a6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b3a70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3A70u;
    {
        const bool branch_taken_0x3b3a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A70u;
        // 0x3b3a74: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a70) {
            ctx->pc = 0x3B3A88u;
            goto label_3b3a88;
        }
    }
    ctx->pc = 0x3B3A78u;
    // 0x3b3a78: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B3A78u;
    SET_GPR_U32(ctx, 31, 0x3B3A80u);
    ctx->pc = 0x3B3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A78u;
    // 0x3b3a7c: 0x8e24aee8  lw          $a0, -0x5118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B3A78u, 0x3B3A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A80u;
label_3b3a80:
    // 0x3b3a80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3A80u;
    {
        const bool branch_taken_0x3b3a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A80u;
        // 0x3b3a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a80) {
            ctx->pc = 0x3B3AA0u;
            goto label_3b3aa0;
        }
    }
    ctx->pc = 0x3B3A88u;
label_3b3a88:
    // 0x3b3a88: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3b3a88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3b3a8c: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b3a90: 0x8e24aee8  lw          $a0, -0x5118($s1)
    ctx->pc = 0x3b3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    // 0x3b3a94: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B3A94u;
    SET_GPR_U32(ctx, 31, 0x3B3A9Cu);
    ctx->pc = 0x3B3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A94u;
    // 0x3b3a98: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B3A94u, 0x3B3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A9Cu;
label_3b3a9c:
    // 0x3b3a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3aa0:
    // 0x3b3aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b3aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3aa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b3aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3aac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AACu;
        // 0x3b3ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3AB4u;
    // 0x3b3ab4: 0x0  nop
    ctx->pc = 0x3b3ab4u;
    // NOP
    ctx->pc = 0x3b3ab8u;
}
