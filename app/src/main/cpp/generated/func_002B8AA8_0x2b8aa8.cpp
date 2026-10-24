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

// Function: func_002B8AA8
// Address: 0x2b8aa8 - 0x2b8ae0
void func_002B8AA8_0x2b8aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8AA8_0x2b8aa8");
#endif

    switch (ctx->pc) {
        case 0x2b8ad0u: goto label_2b8ad0;
        default: break;
    }

    ctx->pc = 0x2b8aa8u;

    // 0x2b8aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8ab0: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x2b8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x2b8ab4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8ab8: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x2b8ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
    // 0x2b8abc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b8abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b8ac0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8AC0u;
    {
        const bool branch_taken_0x2b8ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac0) {
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B8AC8u;
    // 0x2b8ac8: 0xc0aec7c  jal         func_2BB1F0
    ctx->pc = 0x2B8AC8u;
    SET_GPR_U32(ctx, 31, 0x2B8AD0u);
    ctx->pc = 0x2B8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AC8u;
    // 0x2b8acc: 0x8c840034  lw          $a0, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB1F0u, 0x2B8AC8u, 0x2B8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AD0u;
label_2b8ad0:
    // 0x2b8ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8ad4:
    // 0x2b8ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD4u;
        // 0x2b8ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8ADCu;
    // 0x2b8adc: 0x0  nop
    ctx->pc = 0x2b8adcu;
    // NOP
    ctx->pc = 0x2b8ae0u;
}
