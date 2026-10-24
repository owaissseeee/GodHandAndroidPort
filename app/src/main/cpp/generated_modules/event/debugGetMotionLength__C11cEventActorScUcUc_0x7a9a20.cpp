#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: debugGetMotionLength__C11cEventActorScUcUc
// Address: 0x7a9a20 - 0x7a9a80
void debugGetMotionLength__C11cEventActorScUcUc_0x7a9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetMotionLength__C11cEventActorScUcUc_0x7a9a20");
#endif

    switch (ctx->pc) {
        case 0x7a9a58u: goto label_7a9a58;
        case 0x7a9a68u: goto label_7a9a68;
        default: break;
    }

    ctx->pc = 0x7a9a20u;

    // 0x7a9a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a9a24: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a9a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a9a2c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9a2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a9a30: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x7a9a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x7a9a34: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7A9A34u;
    {
        const bool branch_taken_0x7a9a34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9A34u;
        // 0x7a9a38: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9a34) {
            ctx->pc = 0x7A9A50u;
            goto label_7a9a50;
        }
    }
    ctx->pc = 0x7A9A3Cu;
    // 0x7a9a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a9a40: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7A9A40u;
    {
        const bool branch_taken_0x7a9a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a9a40) {
            ctx->pc = 0x7A9A60u;
            goto label_7a9a60;
        }
    }
    ctx->pc = 0x7A9A48u;
    // 0x7a9a48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7A9A48u;
    {
        const bool branch_taken_0x7a9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9A48u;
        // 0x7a9a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9a48) {
            ctx->pc = 0x7A9A70u;
            goto label_7a9a70;
        }
    }
    ctx->pc = 0x7A9A50u;
label_7a9a50:
    // 0x7a9a50: 0xc1ea620  jal         func_7A9880
    ctx->pc = 0x7A9A50u;
    SET_GPR_U32(ctx, 31, 0x7A9A58u);
    ctx->pc = 0x7A9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9880u, 0x7A9A50u, 0x7A9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9A58u;
label_7a9a58:
    // 0x7a9a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7A9A58u;
    {
        const bool branch_taken_0x7a9a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9A58u;
        // 0x7a9a5c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9a58) {
            ctx->pc = 0x7A9A6Cu;
            goto label_7a9a6c;
        }
    }
    ctx->pc = 0x7A9A60u;
label_7a9a60:
    // 0x7a9a60: 0xc1ea644  jal         func_7A9910
    ctx->pc = 0x7A9A60u;
    SET_GPR_U32(ctx, 31, 0x7A9A68u);
    ctx->pc = 0x7A9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9910u, 0x7A9A60u, 0x7A9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9A68u;
label_7a9a68:
    // 0x7a9a68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7a9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_7a9a6c:
    // 0x7a9a6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x7a9a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_7a9a70:
    // 0x7a9a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a9a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a9a74: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9A74u;
        // 0x7a9a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9A7Cu;
    // 0x7a9a7c: 0x0  nop
    ctx->pc = 0x7a9a7cu;
    // NOP
    ctx->pc = 0x7a9a80u;
}
} // namespace gh_event
