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

// Function: cIDBase_restartAnim
// Address: 0x2abbe8 - 0x2abc18
void cIDBase_restartAnim_0x2abbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_restartAnim_0x2abbe8");
#endif

    switch (ctx->pc) {
        case 0x2abbfcu: goto label_2abbfc;
        default: break;
    }

    ctx->pc = 0x2abbe8u;

    // 0x2abbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abbec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2abbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2abbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abbf4: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x2ABBF4u;
    SET_GPR_U32(ctx, 31, 0x2ABBFCu);
    ctx->pc = 0x2ABBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBF4u;
    // 0x2abbf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x2ABBF4u, 0x2ABBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBFCu;
label_2abbfc:
    // 0x2abbfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abc04: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x2abc04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x2abc08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2abc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC0Cu;
        // 0x2abc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABC14u;
    // 0x2abc14: 0x0  nop
    ctx->pc = 0x2abc14u;
    // NOP
    ctx->pc = 0x2abc18u;
}
