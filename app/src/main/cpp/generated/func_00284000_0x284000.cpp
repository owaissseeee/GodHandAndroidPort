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

// Function: func_00284000
// Address: 0x284000 - 0x284040
void func_00284000_0x284000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284000_0x284000");
#endif

    switch (ctx->pc) {
        case 0x284024u: goto label_284024;
        default: break;
    }

    ctx->pc = 0x284000u;

    // 0x284000: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x284000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x284004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284008: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x284008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x28400c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28400cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x284010: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x284010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x284014: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x284014u;
    {
        const bool branch_taken_0x284014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284014u;
        // 0x284018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284014) {
            ctx->pc = 0x28402Cu;
            goto label_28402c;
        }
    }
    ctx->pc = 0x28401Cu;
    // 0x28401c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x28401Cu;
    SET_GPR_U32(ctx, 31, 0x284024u);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x28401Cu, 0x284024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284024u;
label_284024:
    // 0x284024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284024u;
    {
        const bool branch_taken_0x284024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284024u;
        // 0x284028: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284024) {
            ctx->pc = 0x284030u;
            goto label_284030;
        }
    }
    ctx->pc = 0x28402Cu;
label_28402c:
    // 0x28402c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284030:
    // 0x284030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284034: 0x3e00008  jr          $ra
    ctx->pc = 0x284034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284034u;
        // 0x284038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28403Cu;
    // 0x28403c: 0x0  nop
    ctx->pc = 0x28403cu;
    // NOP
    ctx->pc = 0x284040u;
}
