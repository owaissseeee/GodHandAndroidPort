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

// Function: cEmWrap_setDead
// Address: 0x295c70 - 0x295ca8
void cEmWrap_setDead_0x295c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setDead_0x295c70");
#endif

    switch (ctx->pc) {
        case 0x295c84u: goto label_295c84;
        case 0x295c94u: goto label_295c94;
        default: break;
    }

    ctx->pc = 0x295c70u;

    // 0x295c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295c74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295c7c: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295C7Cu;
    SET_GPR_U32(ctx, 31, 0x295C84u);
    ctx->pc = 0x295C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C7Cu;
    // 0x295c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295C7Cu, 0x295C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C84u;
label_295c84:
    // 0x295c84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295C84u;
    {
        const bool branch_taken_0x295c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c84) {
            ctx->pc = 0x295C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C84u;
            // 0x295c88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295C98u;
            goto label_295c98;
        }
    }
    ctx->pc = 0x295C8Cu;
    // 0x295c8c: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x295C8Cu;
    SET_GPR_U32(ctx, 31, 0x295C94u);
    ctx->pc = 0x295C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C8Cu;
    // 0x295c90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x295C8Cu, 0x295C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C94u;
label_295c94:
    // 0x295c94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295c98:
    // 0x295c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x295C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C9Cu;
        // 0x295ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295CA4u;
    // 0x295ca4: 0x0  nop
    ctx->pc = 0x295ca4u;
    // NOP
    ctx->pc = 0x295ca8u;
}
