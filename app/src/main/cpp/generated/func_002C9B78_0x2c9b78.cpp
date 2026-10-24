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

// Function: func_002C9B78
// Address: 0x2c9b78 - 0x2c9bb0
void func_002C9B78_0x2c9b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9B78_0x2c9b78");
#endif

    switch (ctx->pc) {
        case 0x2c9ba0u: goto label_2c9ba0;
        default: break;
    }

    ctx->pc = 0x2c9b78u;

    // 0x2c9b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9b80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9B84u;
    {
        const bool branch_taken_0x2c9b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B84u;
        // 0x2c9b88: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b84) {
            ctx->pc = 0x2C9BA0u;
            goto label_2c9ba0;
        }
    }
    ctx->pc = 0x2C9B8Cu;
    // 0x2c9b8c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2c9b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2c9b90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c9b94: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2c9b98: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9B98u;
    SET_GPR_U32(ctx, 31, 0x2C9BA0u);
    ctx->pc = 0x2C9B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B98u;
    // 0x2c9b9c: 0x63603  sra         $a2, $a2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9B98u, 0x2C9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BA0u;
label_2c9ba0:
    // 0x2c9ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BA4u;
        // 0x2c9ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9BACu;
    // 0x2c9bac: 0x0  nop
    ctx->pc = 0x2c9bacu;
    // NOP
    ctx->pc = 0x2c9bb0u;
}
