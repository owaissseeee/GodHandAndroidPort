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

// Function: ADXT_ClearErrCode
// Address: 0x32b148 - 0x32b188
void ADXT_ClearErrCode_0x32b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_ClearErrCode_0x32b148");
#endif

    ctx->pc = 0x32b148u;

    // 0x32b148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b14c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B14Cu;
    {
        const bool branch_taken_0x32b14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B14Cu;
        // 0x32b150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b14c) {
            ctx->pc = 0x32B168u;
            goto label_32b168;
        }
    }
    ctx->pc = 0x32B154u;
    // 0x32b154: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32b154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32b158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b15c: 0x24842500  addiu       $a0, $a0, 0x2500
    ctx->pc = 0x32b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9472));
    // 0x32b160: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32B160u;
    ctx->pc = 0x32B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B160u;
    // 0x32b164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32B160u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B168u;
label_32b168:
    // 0x32b168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b16c: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x32b16cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x32b170: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x32b170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x32b174: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x32b174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x32b178: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x32b178u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x32b17c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B17Cu;
        // 0x32b180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B184u;
    // 0x32b184: 0x0  nop
    ctx->pc = 0x32b184u;
    // NOP
    ctx->pc = 0x32b188u;
}
