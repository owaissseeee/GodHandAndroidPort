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

// Function: SFH_Finish
// Address: 0x35d5c8 - 0x35d610
void SFH_Finish_0x35d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_Finish_0x35d5c8");
#endif

    ctx->pc = 0x35d5c8u;

    // 0x35d5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d5cc: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x35d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x35d5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d5d4: 0x24636c9c  addiu       $v1, $v1, 0x6C9C
    ctx->pc = 0x35d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27804));
    // 0x35d5d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766C9Cu));
    // 0x35d5dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35d5e0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D5E0u;
    {
        const bool branch_taken_0x35d5e0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x35D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5E0u;
        // 0x35d5e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5e0) {
            ctx->pc = 0x35D600u;
            goto label_35d600;
        }
    }
    ctx->pc = 0x35D5E8u;
    // 0x35d5e8: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x35d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x35d5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d5f0: 0x24846c90  addiu       $a0, $a0, 0x6C90
    ctx->pc = 0x35d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27792));
    // 0x35d5f4: 0x80d75c2  j           func_35D708
    ctx->pc = 0x35D5F4u;
    ctx->pc = 0x35D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5F4u;
    // 0x35d5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D708u, 0x35D5F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D5FCu;
    // 0x35d5fc: 0x0  nop
    ctx->pc = 0x35d5fcu;
    // NOP
label_35d600:
    // 0x35d600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d604: 0x3e00008  jr          $ra
    ctx->pc = 0x35D604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D604u;
        // 0x35d608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D60Cu;
    // 0x35d60c: 0x0  nop
    ctx->pc = 0x35d60cu;
    // NOP
    ctx->pc = 0x35d610u;
}
