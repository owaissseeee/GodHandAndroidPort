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

// Function: SetFlagEntries21And22_1D55D0
// Address: 0x1d55d0 - 0x1d5610
void SetFlagEntries21And22_1D55D0_0x1d55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagEntries21And22_1D55D0_0x1d55d0");
#endif

    switch (ctx->pc) {
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55fcu: goto label_1d55fc;
        default: break;
    }

    ctx->pc = 0x1d55d0u;

    // 0x1d55d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d55d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d55d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d55dc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1d55e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d55e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d55e4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D55E4u;
    SET_GPR_U32(ctx, 31, 0x1D55ECu);
    ctx->pc = 0x1D55E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55E4u;
    // 0x1d55e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D55E4u, 0x1D55ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55ECu;
label_1d55ec:
    // 0x1d55ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55f0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d55f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d55f4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D55F4u;
    SET_GPR_U32(ctx, 31, 0x1D55FCu);
    ctx->pc = 0x1D55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55F4u;
    // 0x1d55f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D55F4u, 0x1D55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55FCu;
label_1d55fc:
    // 0x1d55fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d55fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5604: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5604u;
        // 0x1d5608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D560Cu;
    // 0x1d560c: 0x0  nop
    ctx->pc = 0x1d560cu;
    // NOP
    ctx->pc = 0x1d5610u;
}
