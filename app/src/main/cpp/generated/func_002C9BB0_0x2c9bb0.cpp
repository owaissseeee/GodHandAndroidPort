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

// Function: func_002C9BB0
// Address: 0x2c9bb0 - 0x2c9bf8
void func_002C9BB0_0x2c9bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9BB0_0x2c9bb0");
#endif

    switch (ctx->pc) {
        case 0x2c9be0u: goto label_2c9be0;
        default: break;
    }

    ctx->pc = 0x2c9bb0u;

    // 0x2c9bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9bbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9BBCu;
    {
        const bool branch_taken_0x2c9bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BBCu;
        // 0x2c9bc0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bbc) {
            ctx->pc = 0x2C9BE0u;
            goto label_2c9be0;
        }
    }
    ctx->pc = 0x2C9BC4u;
    // 0x2c9bc4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c9bc8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2c9bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2c9bcc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c9bd0: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x2c9bd0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c9bd4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2c9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2c9bd8: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9BD8u;
    SET_GPR_U32(ctx, 31, 0x2C9BE0u);
    ctx->pc = 0x2C9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9BD8u;
    // 0x2c9bdc: 0x63603  sra         $a2, $a2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9BD8u, 0x2C9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BE0u;
label_2c9be0:
    // 0x2c9be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BE4u;
        // 0x2c9be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9BECu;
    // 0x2c9bec: 0x0  nop
    ctx->pc = 0x2c9becu;
    // NOP
    // 0x2c9bf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9bf4: 0x0  nop
    ctx->pc = 0x2c9bf4u;
    // NOP
    ctx->pc = 0x2c9bf8u;
}
