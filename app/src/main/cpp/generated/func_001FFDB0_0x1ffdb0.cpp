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

// Function: func_001FFDB0
// Address: 0x1ffdb0 - 0x1ffde0
void func_001FFDB0_0x1ffdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFDB0_0x1ffdb0");
#endif

    switch (ctx->pc) {
        case 0x1ffdd4u: goto label_1ffdd4;
        default: break;
    }

    ctx->pc = 0x1ffdb0u;

    // 0x1ffdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ffdb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ffdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ffdb8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFDB8u;
    {
        const bool branch_taken_0x1ffdb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDB8u;
        // 0x1ffdbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdb8) {
            ctx->pc = 0x1FFDD4u;
            goto label_1ffdd4;
        }
    }
    ctx->pc = 0x1FFDC0u;
    // 0x1ffdc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFDC0u;
    {
        const bool branch_taken_0x1ffdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDC0u;
        // 0x1ffdc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdc0) {
            ctx->pc = 0x1FFDD8u;
            goto label_1ffdd8;
        }
    }
    ctx->pc = 0x1FFDC8u;
    // 0x1ffdc8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ffdcc: 0xc07fe00  jal         func_1FF800
    ctx->pc = 0x1FFDCCu;
    SET_GPR_U32(ctx, 31, 0x1FFDD4u);
    ctx->pc = 0x1FFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDCCu;
    // 0x1ffdd0: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF800u, 0x1FFDCCu, 0x1FFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDD4u;
label_1ffdd4:
    // 0x1ffdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffdd8:
    // 0x1ffdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDD8u;
        // 0x1ffddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFDE0u;
}
