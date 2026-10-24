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

// Function: func_002B3050
// Address: 0x2b3050 - 0x2b3078
void func_002B3050_0x2b3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3050_0x2b3050");
#endif

    switch (ctx->pc) {
        case 0x2b3064u: goto label_2b3064;
        default: break;
    }

    ctx->pc = 0x2b3050u;

    // 0x2b3050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3058: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x2b3058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b305c: 0xc0ad14a  jal         func_2B4528
    ctx->pc = 0x2B305Cu;
    SET_GPR_U32(ctx, 31, 0x2B3064u);
    ctx->pc = 0x2B3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B305Cu;
    // 0x2b3060: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4528u, 0x2B305Cu, 0x2B3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3064u;
label_2b3064:
    // 0x2b3064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b306c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B306Cu;
        // 0x2b3070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3074u;
    // 0x2b3074: 0x0  nop
    ctx->pc = 0x2b3074u;
    // NOP
    ctx->pc = 0x2b3078u;
}
