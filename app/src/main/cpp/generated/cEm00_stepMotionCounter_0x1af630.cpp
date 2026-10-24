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

// Function: cEm00_stepMotionCounter
// Address: 0x1af630 - 0x1af680
void cEm00_stepMotionCounter_0x1af630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepMotionCounter_0x1af630");
#endif

    switch (ctx->pc) {
        case 0x1af644u: goto label_1af644;
        default: break;
    }

    ctx->pc = 0x1af630u;

    // 0x1af630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1af634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1af638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af63c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AF63Cu;
    SET_GPR_U32(ctx, 31, 0x1AF644u);
    ctx->pc = 0x1AF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF63Cu;
    // 0x1af640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AF63Cu, 0x1AF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF644u;
label_1af644:
    // 0x1af644: 0x86030984  lh          $v1, 0x984($s0)
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2436)));
    // 0x1af648: 0x5c600006  bgtzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF648u;
    {
        const bool branch_taken_0x1af648 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x1af648) {
            ctx->pc = 0x1AF64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF648u;
            // 0x1af64c: 0x96020984  lhu         $v0, 0x984($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF664u;
            goto label_1af664;
        }
    }
    ctx->pc = 0x1AF650u;
    // 0x1af650: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af654: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1af654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af658: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1af658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af65c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1af65cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af660: 0x96020984  lhu         $v0, 0x984($s0)
    ctx->pc = 0x1af660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2436)));
label_1af664:
    // 0x1af664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af668: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af66c: 0xa6020984  sh          $v0, 0x984($s0)
    ctx->pc = 0x1af66cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2436), (uint16_t)GPR_U32(ctx, 2));
    // 0x1af670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1af670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af674: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF674u;
        // 0x1af678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF67Cu;
    // 0x1af67c: 0x0  nop
    ctx->pc = 0x1af67cu;
    // NOP
    ctx->pc = 0x1af680u;
}
