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

// Function: func_003603D8
// Address: 0x3603d8 - 0x360428
void func_003603D8_0x3603d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003603D8_0x3603d8");
#endif

    switch (ctx->pc) {
        case 0x3603fcu: goto label_3603fc;
        case 0x360410u: goto label_360410;
        default: break;
    }

    ctx->pc = 0x3603d8u;

    // 0x3603d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3603d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3603dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3603dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3603e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3603e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603e4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x3603e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3603e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3603e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3603ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3603f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3603f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3603f4: 0xc0d803a  jal         func_3600E8
    ctx->pc = 0x3603F4u;
    SET_GPR_U32(ctx, 31, 0x3603FCu);
    ctx->pc = 0x3603F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603F4u;
    // 0x3603f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3600E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3600E8u, 0x3603F4u, 0x3603FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603FCu;
label_3603fc:
    // 0x3603fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3603fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360404: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x360404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x360408: 0xc0d810a  jal         func_360428
    ctx->pc = 0x360408u;
    SET_GPR_U32(ctx, 31, 0x360410u);
    ctx->pc = 0x36040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360408u;
    // 0x36040c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360428u, 0x360408u, 0x360410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360410u;
label_360410:
    // 0x360410: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x360410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360414: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x360414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x360418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36041c: 0x3e00008  jr          $ra
    ctx->pc = 0x36041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36041Cu;
        // 0x360420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360424u;
    // 0x360424: 0x0  nop
    ctx->pc = 0x360424u;
    // NOP
    ctx->pc = 0x360428u;
}
