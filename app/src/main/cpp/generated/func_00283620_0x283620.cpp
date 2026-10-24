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

// Function: func_00283620
// Address: 0x283620 - 0x283660
void func_00283620_0x283620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283620_0x283620");
#endif

    switch (ctx->pc) {
        case 0x283644u: goto label_283644;
        default: break;
    }

    ctx->pc = 0x283620u;

    // 0x283620: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x283620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x283624: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283628: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x283628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x28362c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28362cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x283630: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x283630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x283634: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x283634u;
    {
        const bool branch_taken_0x283634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283634u;
        // 0x283638: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283634) {
            ctx->pc = 0x28364Cu;
            goto label_28364c;
        }
    }
    ctx->pc = 0x28363Cu;
    // 0x28363c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x28363Cu;
    SET_GPR_U32(ctx, 31, 0x283644u);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x28363Cu, 0x283644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283644u;
label_283644:
    // 0x283644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283644u;
    {
        const bool branch_taken_0x283644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283644u;
        // 0x283648: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283644) {
            ctx->pc = 0x283650u;
            goto label_283650;
        }
    }
    ctx->pc = 0x28364Cu;
label_28364c:
    // 0x28364c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283650:
    // 0x283650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283654: 0x3e00008  jr          $ra
    ctx->pc = 0x283654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283654u;
        // 0x283658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28365Cu;
    // 0x28365c: 0x0  nop
    ctx->pc = 0x28365cu;
    // NOP
    ctx->pc = 0x283660u;
}
