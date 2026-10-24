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

// Function: cSceAtManager_isHit
// Address: 0x2c2a98 - 0x2c2ae0
void cSceAtManager_isHit_0x2c2a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_isHit_0x2c2a98");
#endif

    switch (ctx->pc) {
        case 0x2c2aacu: goto label_2c2aac;
        case 0x2c2abcu: goto label_2c2abc;
        default: break;
    }

    ctx->pc = 0x2c2a98u;

    // 0x2c2a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2aa4: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C2AA4u;
    SET_GPR_U32(ctx, 31, 0x2C2AACu);
    ctx->pc = 0x2C2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AA4u;
    // 0x2c2aa8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C2AA4u, 0x2C2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AACu;
label_2c2aac:
    // 0x2c2aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2AACu;
    {
        const bool branch_taken_0x2c2aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AACu;
        // 0x2c2ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2aac) {
            ctx->pc = 0x2C2AC4u;
            goto label_2c2ac4;
        }
    }
    ctx->pc = 0x2C2AB4u;
    // 0x2c2ab4: 0xc0b03b4  jal         func_2C0ED0
    ctx->pc = 0x2C2AB4u;
    SET_GPR_U32(ctx, 31, 0x2C2ABCu);
    ctx->pc = 0x2C2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AB4u;
    // 0x2c2ab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0ED0u, 0x2C2AB4u, 0x2C2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2ABCu;
label_2c2abc:
    // 0x2c2abc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2ABCu;
    {
        const bool branch_taken_0x2c2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2ABCu;
        // 0x2c2ac0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2abc) {
            ctx->pc = 0x2C2ACCu;
            goto label_2c2acc;
        }
    }
    ctx->pc = 0x2C2AC4u;
label_2c2ac4:
    // 0x2c2ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2acc:
    // 0x2c2acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AD0u;
        // 0x2c2ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2AD8u;
    // 0x2c2ad8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2adc: 0x0  nop
    ctx->pc = 0x2c2adcu;
    // NOP
    ctx->pc = 0x2c2ae0u;
}
