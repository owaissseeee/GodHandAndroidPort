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

// Function: func_002C9A90
// Address: 0x2c9a90 - 0x2c9ad0
void func_002C9A90_0x2c9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9A90_0x2c9a90");
#endif

    switch (ctx->pc) {
        case 0x2c9ab4u: goto label_2c9ab4;
        default: break;
    }

    ctx->pc = 0x2c9a90u;

    // 0x2c9a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9a98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9a9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A9Cu;
    {
        const bool branch_taken_0x2c9a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A9Cu;
        // 0x2c9aa0: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a9c) {
            ctx->pc = 0x2C9ABCu;
            goto label_2c9abc;
        }
    }
    ctx->pc = 0x2C9AA4u;
    // 0x2c9aa4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c9aa8: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x2c9aa8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c9aac: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9AACu;
    SET_GPR_U32(ctx, 31, 0x2C9AB4u);
    ctx->pc = 0x2C9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AACu;
    // 0x2c9ab0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9AACu, 0x2C9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AB4u;
label_2c9ab4:
    // 0x2c9ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9AB4u;
    {
        const bool branch_taken_0x2c9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AB4u;
        // 0x2c9ab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ab4) {
            ctx->pc = 0x2C9AC4u;
            goto label_2c9ac4;
        }
    }
    ctx->pc = 0x2C9ABCu;
label_2c9abc:
    // 0x2c9abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9ac4:
    // 0x2c9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AC4u;
        // 0x2c9ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9ACCu;
    // 0x2c9acc: 0x0  nop
    ctx->pc = 0x2c9accu;
    // NOP
    ctx->pc = 0x2c9ad0u;
}
