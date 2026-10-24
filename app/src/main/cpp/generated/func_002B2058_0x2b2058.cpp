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

// Function: func_002B2058
// Address: 0x2b2058 - 0x2b2080
void func_002B2058_0x2b2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2058_0x2b2058");
#endif

    switch (ctx->pc) {
        case 0x2b206cu: goto label_2b206c;
        default: break;
    }

    ctx->pc = 0x2b2058u;

    // 0x2b2058: 0x460e6380  add.s       $f14, $f12, $f14
    ctx->pc = 0x2b2058u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x2b205c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2064: 0xc0ac7e0  jal         func_2B1F80
    ctx->pc = 0x2B2064u;
    SET_GPR_U32(ctx, 31, 0x2B206Cu);
    ctx->pc = 0x2B2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2064u;
    // 0x2b2068: 0x460f6bc0  add.s       $f15, $f13, $f15 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1F80u, 0x2B2064u, 0x2B206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B206Cu;
label_2b206c:
    // 0x2b206c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2070: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2070u;
        // 0x2b2074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2078u;
    // 0x2b2078: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b2078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b207c: 0x0  nop
    ctx->pc = 0x2b207cu;
    // NOP
    ctx->pc = 0x2b2080u;
}
