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

// Function: func_002ACBE8
// Address: 0x2acbe8 - 0x2acc28
void func_002ACBE8_0x2acbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ACBE8_0x2acbe8");
#endif

    switch (ctx->pc) {
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc18u: goto label_2acc18;
        default: break;
    }

    ctx->pc = 0x2acbe8u;

    // 0x2acbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acbec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2acbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2acbf0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACBF0u;
    {
        const bool branch_taken_0x2acbf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBF0u;
        // 0x2acbf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbf0) {
            ctx->pc = 0x2ACC18u;
            goto label_2acc18;
        }
    }
    ctx->pc = 0x2ACBF8u;
    // 0x2acbf8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACBF8u;
    {
        const bool branch_taken_0x2acbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBF8u;
        // 0x2acbfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbf8) {
            ctx->pc = 0x2ACC1Cu;
            goto label_2acc1c;
        }
    }
    ctx->pc = 0x2ACC00u;
    // 0x2acc00: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2acc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2acc04: 0xc0c23c6  jal         func_308F18
    ctx->pc = 0x2ACC04u;
    SET_GPR_U32(ctx, 31, 0x2ACC0Cu);
    ctx->pc = 0x2ACC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC04u;
    // 0x2acc08: 0x2484b020  addiu       $a0, $a0, -0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F18u, 0x2ACC04u, 0x2ACC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC0Cu;
label_2acc0c:
    // 0x2acc0c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2acc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2acc10: 0xc0c2400  jal         func_309000
    ctx->pc = 0x2ACC10u;
    SET_GPR_U32(ctx, 31, 0x2ACC18u);
    ctx->pc = 0x2ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC10u;
    // 0x2acc14: 0x2484b300  addiu       $a0, $a0, -0x4D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309000u, 0x2ACC10u, 0x2ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC18u;
label_2acc18:
    // 0x2acc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2acc1c:
    // 0x2acc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC1Cu;
        // 0x2acc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC24u;
    // 0x2acc24: 0x0  nop
    ctx->pc = 0x2acc24u;
    // NOP
    ctx->pc = 0x2acc28u;
}
