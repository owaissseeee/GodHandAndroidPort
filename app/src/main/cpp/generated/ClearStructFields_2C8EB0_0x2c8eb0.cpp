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

// Function: ClearStructFields_2C8EB0
// Address: 0x2c8eb0 - 0x2c8ef8
void ClearStructFields_2C8EB0_0x2c8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearStructFields_2C8EB0_0x2c8eb0");
#endif

    switch (ctx->pc) {
        case 0x2c8ed4u: goto label_2c8ed4;
        case 0x2c8ee4u: goto label_2c8ee4;
        default: break;
    }

    ctx->pc = 0x2c8eb0u;

    // 0x2c8eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8eb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8ebc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c8ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ec8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c8ecc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C8ECCu;
    SET_GPR_U32(ctx, 31, 0x2C8ED4u);
    ctx->pc = 0x2C8ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8ECCu;
    // 0x2c8ed0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C8ECCu, 0x2C8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8ED4u;
label_2c8ed4:
    // 0x2c8ed4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2c8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2c8ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8edc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C8EDCu;
    SET_GPR_U32(ctx, 31, 0x2C8EE4u);
    ctx->pc = 0x2C8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EDCu;
    // 0x2c8ee0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C8EDCu, 0x2C8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EE4u;
label_2c8ee4:
    // 0x2c8ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EECu;
        // 0x2c8ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8EF4u;
    // 0x2c8ef4: 0x0  nop
    ctx->pc = 0x2c8ef4u;
    // NOP
    ctx->pc = 0x2c8ef8u;
}
