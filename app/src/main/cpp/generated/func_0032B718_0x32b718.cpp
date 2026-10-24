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

// Function: func_0032B718
// Address: 0x32b718 - 0x32b758
void func_0032B718_0x32b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B718_0x32b718");
#endif

    switch (ctx->pc) {
        case 0x32b730u: goto label_32b730;
        default: break;
    }

    ctx->pc = 0x32b718u;

    // 0x32b718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b71c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32B71Cu;
    {
        const bool branch_taken_0x32b71c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B71Cu;
        // 0x32b720: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b71c) {
            ctx->pc = 0x32B740u;
            goto label_32b740;
        }
    }
    ctx->pc = 0x32B724u;
    // 0x32b724: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32b724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32b728: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32B728u;
    SET_GPR_U32(ctx, 31, 0x32B730u);
    ctx->pc = 0x32B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B728u;
    // 0x32b72c: 0x24842688  addiu       $a0, $a0, 0x2688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32B728u, 0x32B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B730u;
label_32b730:
    // 0x32b730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32b734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b738: 0x3e00008  jr          $ra
    ctx->pc = 0x32B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B738u;
        // 0x32b73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B740u;
label_32b740:
    // 0x32b740: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32b740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b748: 0x80c9dc4  j           func_327710
    ctx->pc = 0x32B748u;
    ctx->pc = 0x32B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B748u;
    // 0x32b74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327710u, 0x32B748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B750u;
    // 0x32b750: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32b754: 0x0  nop
    ctx->pc = 0x32b754u;
    // NOP
    ctx->pc = 0x32b758u;
}
