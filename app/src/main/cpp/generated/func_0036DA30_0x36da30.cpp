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

// Function: func_0036DA30
// Address: 0x36da30 - 0x36da80
void func_0036DA30_0x36da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DA30_0x36da30");
#endif

    switch (ctx->pc) {
        case 0x36da44u: goto label_36da44;
        default: break;
    }

    ctx->pc = 0x36da30u;

    // 0x36da30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36da34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36da38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36da3c: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DA3Cu;
    SET_GPR_U32(ctx, 31, 0x36DA44u);
    ctx->pc = 0x36DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA3Cu;
    // 0x36da40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DA3Cu, 0x36DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA44u;
label_36da44:
    // 0x36da44: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36da44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36da48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36DA4Cu;
    {
        const bool branch_taken_0x36da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA4Cu;
        // 0x36da50: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da4c) {
            ctx->pc = 0x36DA68u;
            goto label_36da68;
        }
    }
    ctx->pc = 0x36DA54u;
    // 0x36da54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36da54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36da58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36da58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36da5c: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DA5Cu;
    ctx->pc = 0x36DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA5Cu;
    // 0x36da60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DA5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DA64u;
    // 0x36da64: 0x0  nop
    ctx->pc = 0x36da64u;
    // NOP
label_36da68:
    // 0x36da68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36da6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36da6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36da70: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x36da70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x36da74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36da74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36da78: 0x3e00008  jr          $ra
    ctx->pc = 0x36DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA78u;
        // 0x36da7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DA80u;
}
