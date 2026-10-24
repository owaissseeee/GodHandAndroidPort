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

// Function: func_0031CE98
// Address: 0x31ce98 - 0x31ceb8
void func_0031CE98_0x31ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CE98_0x31ce98");
#endif

    switch (ctx->pc) {
        case 0x31ceacu: goto label_31ceac;
        default: break;
    }

    ctx->pc = 0x31ce98u;

    // 0x31ce98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ce9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cea4: 0xc0c73a4  jal         func_31CE90
    ctx->pc = 0x31CEA4u;
    SET_GPR_U32(ctx, 31, 0x31CEACu);
    ctx->pc = 0x31CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEA4u;
    // 0x31cea8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE90u, 0x31CEA4u, 0x31CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEACu;
label_31ceac:
    // 0x31ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEB0u;
        // 0x31ceb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CEB8u;
}
