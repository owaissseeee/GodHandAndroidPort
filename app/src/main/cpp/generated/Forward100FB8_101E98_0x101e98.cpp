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

// Function: Forward100FB8_101E98
// Address: 0x101e98 - 0x101eb8
void Forward100FB8_101E98_0x101e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward100FB8_101E98_0x101e98");
#endif

    switch (ctx->pc) {
        case 0x101eacu: goto label_101eac;
        default: break;
    }

    ctx->pc = 0x101e98u;

    // 0x101e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101e9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x101e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101ea4: 0xc0403ee  jal         func_100FB8
    ctx->pc = 0x101EA4u;
    SET_GPR_U32(ctx, 31, 0x101EACu);
    ctx->pc = 0x101EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EA4u;
    // 0x101ea8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100FB8u, 0x101EA4u, 0x101EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EACu;
label_101eac:
    // 0x101eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x101EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EB0u;
        // 0x101eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101EB8u;
}
