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

// Function: func_002AE940
// Address: 0x2ae940 - 0x2ae970
void func_002AE940_0x2ae940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AE940_0x2ae940");
#endif

    switch (ctx->pc) {
        case 0x2ae964u: goto label_2ae964;
        default: break;
    }

    ctx->pc = 0x2ae940u;

    // 0x2ae940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae944: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ae944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ae948: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE948u;
    {
        const bool branch_taken_0x2ae948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE948u;
        // 0x2ae94c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae948) {
            ctx->pc = 0x2AE964u;
            goto label_2ae964;
        }
    }
    ctx->pc = 0x2AE950u;
    // 0x2ae950: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE950u;
    {
        const bool branch_taken_0x2ae950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE950u;
        // 0x2ae954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae950) {
            ctx->pc = 0x2AE968u;
            goto label_2ae968;
        }
    }
    ctx->pc = 0x2AE958u;
    // 0x2ae958: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2ae958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2ae95c: 0xc0ab8f4  jal         func_2AE3D0
    ctx->pc = 0x2AE95Cu;
    SET_GPR_U32(ctx, 31, 0x2AE964u);
    ctx->pc = 0x2AE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE95Cu;
    // 0x2ae960: 0x24846900  addiu       $a0, $a0, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE3D0u, 0x2AE95Cu, 0x2AE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE964u;
label_2ae964:
    // 0x2ae964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ae968:
    // 0x2ae968: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE968u;
        // 0x2ae96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE970u;
}
