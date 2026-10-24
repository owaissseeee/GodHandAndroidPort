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

// Function: SFMPVP_Init
// Address: 0x356368 - 0x3563b8
void SFMPVP_Init_0x356368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFMPVP_Init_0x356368");
#endif

    switch (ctx->pc) {
        case 0x356384u: goto label_356384;
        default: break;
    }

    ctx->pc = 0x356368u;

    // 0x356368: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x356368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35636c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35636cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356370: 0x8c43e2f4  lw          $v1, -0x1D0C($v0)
    ctx->pc = 0x356370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE2F4u));
    // 0x356374: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x356374u;
    {
        const bool branch_taken_0x356374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356374u;
        // 0x356378: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356374) {
            ctx->pc = 0x3563A0u;
            goto label_3563a0;
        }
    }
    ctx->pc = 0x35637Cu;
    // 0x35637c: 0xc0e6a3a  jal         func_39A8E8
    ctx->pc = 0x35637Cu;
    SET_GPR_U32(ctx, 31, 0x356384u);
    ctx->pc = 0x39A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A8E8u, 0x35637Cu, 0x356384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356384u;
label_356384:
    // 0x356384: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x356384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x356388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35638c: 0x24846c28  addiu       $a0, $a0, 0x6C28
    ctx->pc = 0x35638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27688));
    // 0x356390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356394: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x356394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x356398: 0x80d9ae0  j           func_366B80
    ctx->pc = 0x356398u;
    ctx->pc = 0x35639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356398u;
    // 0x35639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366B80u, 0x356398u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3563A0u;
label_3563a0:
    // 0x3563a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3563a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3563a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3563A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3563A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563A4u;
        // 0x3563a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3563A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3563ACu;
    // 0x3563ac: 0x0  nop
    ctx->pc = 0x3563acu;
    // NOP
    // 0x3563b0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3563b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3563b4: 0x0  nop
    ctx->pc = 0x3563b4u;
    // NOP
    ctx->pc = 0x3563b8u;
}
