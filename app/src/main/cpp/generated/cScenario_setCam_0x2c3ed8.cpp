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

// Function: cScenario_setCam
// Address: 0x2c3ed8 - 0x2c3f10
void cScenario_setCam_0x2c3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_setCam_0x2c3ed8");
#endif

    switch (ctx->pc) {
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3efcu: goto label_2c3efc;
        default: break;
    }

    ctx->pc = 0x2c3ed8u;

    // 0x2c3ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3edc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c3ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3ee8: 0xc0c738e  jal         func_31CE38
    ctx->pc = 0x2C3EE8u;
    SET_GPR_U32(ctx, 31, 0x2C3EF0u);
    ctx->pc = 0x2C3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EE8u;
    // 0x2c3eec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE38u, 0x2C3EE8u, 0x2C3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EF0u;
label_2c3ef0:
    // 0x2c3ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ef4: 0xc0b0fc4  jal         func_2C3F10
    ctx->pc = 0x2C3EF4u;
    SET_GPR_U32(ctx, 31, 0x2C3EFCu);
    ctx->pc = 0x2C3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EF4u;
    // 0x2c3ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F10u, 0x2C3EF4u, 0x2C3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EFCu;
label_2c3efc:
    // 0x2c3efc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c3efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F04u;
        // 0x2c3f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3F0Cu;
    // 0x2c3f0c: 0x0  nop
    ctx->pc = 0x2c3f0cu;
    // NOP
    ctx->pc = 0x2c3f10u;
}
