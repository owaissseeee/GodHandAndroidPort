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

// Function: classPAD_WORK_Pad_act_all_stop
// Address: 0x31bd88 - 0x31bdc8
void classPAD_WORK_Pad_act_all_stop_0x31bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classPAD_WORK_Pad_act_all_stop_0x31bd88");
#endif

    switch (ctx->pc) {
        case 0x31bd98u: goto label_31bd98;
        default: break;
    }

    ctx->pc = 0x31bd88u;

    // 0x31bd88: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x31bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x31bd8c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x31bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31bd90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31bd94: 0x0  nop
    ctx->pc = 0x31bd94u;
    // NOP
label_31bd98:
    // 0x31bd98: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x31bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bd9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31bda0: 0x0  nop
    ctx->pc = 0x31bda0u;
    // NOP
    // 0x31bda4: 0x0  nop
    ctx->pc = 0x31bda4u;
    // NOP
    // 0x31bda8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31BDA8u;
    {
        const bool branch_taken_0x31bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDA8u;
        // 0x31bdac: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bda8) {
            ctx->pc = 0x31BD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bd98;
        }
    }
    ctx->pc = 0x31BDB0u;
    // 0x31bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BDB8u;
    // 0x31bdb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31bdbc: 0x0  nop
    ctx->pc = 0x31bdbcu;
    // NOP
    // 0x31bdc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31bdc4: 0x0  nop
    ctx->pc = 0x31bdc4u;
    // NOP
    ctx->pc = 0x31bdc8u;
}
