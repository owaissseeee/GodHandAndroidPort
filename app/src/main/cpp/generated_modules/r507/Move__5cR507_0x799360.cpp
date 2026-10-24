#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: Move__5cR507
// Address: 0x799360 - 0x7993a8
void Move__5cR507_0x799360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__5cR507_0x799360");
#endif

    switch (ctx->pc) {
        case 0x79937cu: goto label_79937c;
        case 0x799390u: goto label_799390;
        default: break;
    }

    ctx->pc = 0x799360u;

    // 0x799360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799364: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799368: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79936c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799374: 0xc1e66d0  jal         func_799B40
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0x2610a520  addiu       $s0, $s0, -0x5AE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B40u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799380: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799388: 0xc1e68da  jal         func_79A368
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A368u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79939c: 0x3e00008  jr          $ra
    ctx->pc = 0x79939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x0  nop
    ctx->pc = 0x7993a4u;
    // NOP
    ctx->pc = 0x7993a8u;
}
} // namespace gh_r507
