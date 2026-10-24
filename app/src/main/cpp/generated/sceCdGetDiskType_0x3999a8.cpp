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

// Function: sceCdGetDiskType
// Address: 0x3999a8 - 0x3999d0
void sceCdGetDiskType_0x3999a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdGetDiskType_0x3999a8");
#endif

    switch (ctx->pc) {
        case 0x3999b8u: goto label_3999b8;
        default: break;
    }

    ctx->pc = 0x3999a8u;

    // 0x3999a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3999a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3999ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3999acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3999b0: 0xc0e6644  jal         func_399910
    ctx->pc = 0x3999B0u;
    SET_GPR_U32(ctx, 31, 0x3999B8u);
    ctx->pc = 0x399910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399910u, 0x3999B0u, 0x3999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999B8u;
label_3999b8:
    // 0x3999b8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3999b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3999bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3999bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3999c0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3999c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3999c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3999C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999C4u;
        // 0x3999c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3999C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3999CCu;
    // 0x3999cc: 0x0  nop
    ctx->pc = 0x3999ccu;
    // NOP
    ctx->pc = 0x3999d0u;
}
