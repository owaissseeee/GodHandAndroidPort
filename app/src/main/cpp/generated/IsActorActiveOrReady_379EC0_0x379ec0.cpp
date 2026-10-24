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

// Function: IsActorActiveOrReady_379EC0
// Address: 0x379ec0 - 0x379f00
void IsActorActiveOrReady_379EC0_0x379ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsActorActiveOrReady_379EC0_0x379ec0");
#endif

    switch (ctx->pc) {
        case 0x379ed4u: goto label_379ed4;
        case 0x379ee4u: goto label_379ee4;
        default: break;
    }

    ctx->pc = 0x379ec0u;

    // 0x379ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x379ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x379ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379ecc: 0xc0de7c0  jal         func_379F00
    ctx->pc = 0x379ECCu;
    SET_GPR_U32(ctx, 31, 0x379ED4u);
    ctx->pc = 0x379ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379ECCu;
    // 0x379ed0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379F00u, 0x379ECCu, 0x379ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379ED4u;
label_379ed4:
    // 0x379ed4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379ED4u;
    {
        const bool branch_taken_0x379ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ED4u;
        // 0x379ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ed4) {
            ctx->pc = 0x379EECu;
            goto label_379eec;
        }
    }
    ctx->pc = 0x379EDCu;
    // 0x379edc: 0xc0de808  jal         func_37A020
    ctx->pc = 0x379EDCu;
    SET_GPR_U32(ctx, 31, 0x379EE4u);
    ctx->pc = 0x379EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379EDCu;
    // 0x379ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A020u, 0x379EDCu, 0x379EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379EE4u;
label_379ee4:
    // 0x379ee4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x379EE4u;
    {
        const bool branch_taken_0x379ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EE4u;
        // 0x379ee8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ee4) {
            ctx->pc = 0x379EF0u;
            goto label_379ef0;
        }
    }
    ctx->pc = 0x379EECu;
label_379eec:
    // 0x379eec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x379eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379ef0:
    // 0x379ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x379EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EF4u;
        // 0x379ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379EFCu;
    // 0x379efc: 0x0  nop
    ctx->pc = 0x379efcu;
    // NOP
    ctx->pc = 0x379f00u;
}
