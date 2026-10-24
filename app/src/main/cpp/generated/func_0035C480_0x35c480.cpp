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

// Function: func_0035C480
// Address: 0x35c480 - 0x35c4c0
void func_0035C480_0x35c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C480_0x35c480");
#endif

    switch (ctx->pc) {
        case 0x35c4a0u: goto label_35c4a0;
        default: break;
    }

    ctx->pc = 0x35c480u;

    // 0x35c480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c490: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x35c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x35c494: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35c498: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x35C498u;
    SET_GPR_U32(ctx, 31, 0x35C4A0u);
    ctx->pc = 0x35C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C498u;
    // 0x35c49c: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35C498u, 0x35C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4A0u;
label_35c4a0:
    // 0x35c4a0: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x35c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x35c4a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x35c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x35c4a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c4ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c4b0: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x35c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x35c4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4B8u;
        // 0x35c4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C4C0u;
}
