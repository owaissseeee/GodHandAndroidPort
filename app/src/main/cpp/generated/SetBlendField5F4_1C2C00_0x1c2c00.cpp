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

// Function: SetBlendField5F4_1C2C00
// Address: 0x1c2c00 - 0x1c2c40
void SetBlendField5F4_1C2C00_0x1c2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField5F4_1C2C00_0x1c2c00");
#endif

    switch (ctx->pc) {
        case 0x1c2c34u: goto label_1c2c34;
        default: break;
    }

    ctx->pc = 0x1c2c00u;

    // 0x1c2c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2c04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c2c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2c0c: 0x84e605f4  lh          $a2, 0x5F4($a3)
    ctx->pc = 0x1c2c0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1524)));
    // 0x1c2c10: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2C10u;
    {
        const bool branch_taken_0x1c2c10 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C10u;
        // 0x1c2c14: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c10) {
            ctx->pc = 0x1C2C34u;
            goto label_1c2c34;
        }
    }
    ctx->pc = 0x1C2C18u;
    // 0x1c2c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2c1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c2c20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c2c28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c2c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1C2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C34u);
    ctx->pc = 0x1C2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C2Cu;
    // 0x1c2c30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C2C2Cu, 0x1C2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C34u;
label_1c2c34:
    // 0x1c2c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C38u;
        // 0x1c2c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C40u;
}
