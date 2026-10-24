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

// Function: func_002A5AD0
// Address: 0x2a5ad0 - 0x2a5b00
void func_002A5AD0_0x2a5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A5AD0_0x2a5ad0");
#endif

    switch (ctx->pc) {
        case 0x2a5ae8u: goto label_2a5ae8;
        default: break;
    }

    ctx->pc = 0x2a5ad0u;

    // 0x2a5ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5ae0: 0xc0c6f96  jal         func_31BE58
    ctx->pc = 0x2A5AE0u;
    SET_GPR_U32(ctx, 31, 0x2A5AE8u);
    ctx->pc = 0x2A5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AE0u;
    // 0x2a5ae4: 0x2604018c  addiu       $a0, $s0, 0x18C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BE58u, 0x2A5AE0u, 0x2A5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AE8u;
label_2a5ae8:
    // 0x2a5ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a5ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5af0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5af4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AF4u;
        // 0x2a5af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5AFCu;
    // 0x2a5afc: 0x0  nop
    ctx->pc = 0x2a5afcu;
    // NOP
    ctx->pc = 0x2a5b00u;
}
