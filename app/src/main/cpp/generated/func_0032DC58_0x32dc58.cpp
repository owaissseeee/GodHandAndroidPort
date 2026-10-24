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

// Function: func_0032DC58
// Address: 0x32dc58 - 0x32dc90
void func_0032DC58_0x32dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DC58_0x32dc58");
#endif

    switch (ctx->pc) {
        case 0x32dc6cu: goto label_32dc6c;
        case 0x32dc74u: goto label_32dc74;
        case 0x32dc7cu: goto label_32dc7c;
        default: break;
    }

    ctx->pc = 0x32dc58u;

    // 0x32dc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32dc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32dc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32dc60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32dc64: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DC64u;
    SET_GPR_U32(ctx, 31, 0x32DC6Cu);
    ctx->pc = 0x32DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC64u;
    // 0x32dc68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DC64u, 0x32DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC6Cu;
label_32dc6c:
    // 0x32dc6c: 0xc0cb724  jal         func_32DC90
    ctx->pc = 0x32DC6Cu;
    SET_GPR_U32(ctx, 31, 0x32DC74u);
    ctx->pc = 0x32DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC6Cu;
    // 0x32dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC90u, 0x32DC6Cu, 0x32DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC74u;
label_32dc74:
    // 0x32dc74: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32DC74u;
    SET_GPR_U32(ctx, 31, 0x32DC7Cu);
    ctx->pc = 0x32DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC74u;
    // 0x32dc78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DC74u, 0x32DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC7Cu;
label_32dc7c:
    // 0x32dc7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32dc80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32dc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dc88: 0x3e00008  jr          $ra
    ctx->pc = 0x32DC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC88u;
        // 0x32dc8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DC90u;
}
