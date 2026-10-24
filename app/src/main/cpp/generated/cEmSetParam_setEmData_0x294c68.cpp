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

// Function: cEmSetParam_setEmData
// Address: 0x294c68 - 0x294ca0
void cEmSetParam_setEmData_0x294c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_setEmData_0x294c68");
#endif

    switch (ctx->pc) {
        case 0x294c7cu: goto label_294c7c;
        case 0x294c8cu: goto label_294c8c;
        default: break;
    }

    ctx->pc = 0x294c68u;

    // 0x294c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294c6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x294c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294c74: 0xc0a52e6  jal         func_294B98
    ctx->pc = 0x294C74u;
    SET_GPR_U32(ctx, 31, 0x294C7Cu);
    ctx->pc = 0x294C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C74u;
    // 0x294c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B98u, 0x294C74u, 0x294C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C7Cu;
label_294c7c:
    // 0x294c7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x294C7Cu;
    {
        const bool branch_taken_0x294c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294c7c) {
            ctx->pc = 0x294C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294C7Cu;
            // 0x294c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294C90u;
            goto label_294c90;
        }
    }
    ctx->pc = 0x294C84u;
    // 0x294c84: 0xc0a5328  jal         func_294CA0
    ctx->pc = 0x294C84u;
    SET_GPR_U32(ctx, 31, 0x294C8Cu);
    ctx->pc = 0x294C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C84u;
    // 0x294c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x294C84u, 0x294C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C8Cu;
label_294c8c:
    // 0x294c8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x294c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_294c90:
    // 0x294c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294c94: 0x3e00008  jr          $ra
    ctx->pc = 0x294C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C94u;
        // 0x294c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C9Cu;
    // 0x294c9c: 0x0  nop
    ctx->pc = 0x294c9cu;
    // NOP
    ctx->pc = 0x294ca0u;
}
