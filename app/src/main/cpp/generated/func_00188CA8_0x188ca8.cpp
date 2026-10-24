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

// Function: func_00188CA8
// Address: 0x188ca8 - 0x188cf8
void func_00188CA8_0x188ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188CA8_0x188ca8");
#endif

    switch (ctx->pc) {
        case 0x188cccu: goto label_188ccc;
        case 0x188ce4u: goto label_188ce4;
        default: break;
    }

    ctx->pc = 0x188ca8u;

    // 0x188ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188cac: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x188cb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188cb4: 0x8c625b28  lw          $v0, 0x5B28($v1)
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B28u));
    // 0x188cb8: 0x24705b28  addiu       $s0, $v1, 0x5B28
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23336));
    // 0x188cbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188CBCu;
    {
        const bool branch_taken_0x188cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CBCu;
        // 0x188cc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cbc) {
            ctx->pc = 0x188CE4u;
            goto label_188ce4;
        }
    }
    ctx->pc = 0x188CC4u;
    // 0x188cc4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x188CC4u;
    SET_GPR_U32(ctx, 31, 0x188CCCu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x188CC4u, 0x188CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CCCu;
label_188ccc:
    // 0x188ccc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x188cd0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x188cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x188cd4: 0x24a534d0  addiu       $a1, $a1, 0x34D0
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13520));
    // 0x188cd8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x188cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x188cdc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x188CDCu;
    SET_GPR_U32(ctx, 31, 0x188CE4u);
    ctx->pc = 0x188CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CDCu;
    // 0x188ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x188CDCu, 0x188CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CE4u;
label_188ce4:
    // 0x188ce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x188CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188CF8u;
}
