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

// Function: func_0030E598
// Address: 0x30e598 - 0x30e5c0
void func_0030E598_0x30e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030E598_0x30e598");
#endif

    switch (ctx->pc) {
        case 0x30e5acu: goto label_30e5ac;
        default: break;
    }

    ctx->pc = 0x30e598u;

    // 0x30e598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e59c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e5a4: 0xc0c395a  jal         func_30E568
    ctx->pc = 0x30E5A4u;
    SET_GPR_U32(ctx, 31, 0x30E5ACu);
    ctx->pc = 0x30E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E5A4u;
    // 0x30e5a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E568u, 0x30E5A4u, 0x30E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5ACu;
label_30e5ac:
    // 0x30e5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5B0u;
        // 0x30e5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E5B8u;
    // 0x30e5b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30e5bc: 0x0  nop
    ctx->pc = 0x30e5bcu;
    // NOP
    ctx->pc = 0x30e5c0u;
}
