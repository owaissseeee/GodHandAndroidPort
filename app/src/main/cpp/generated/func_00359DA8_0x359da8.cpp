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

// Function: func_00359DA8
// Address: 0x359da8 - 0x359df0
void func_00359DA8_0x359da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359DA8_0x359da8");
#endif

    ctx->pc = 0x359da8u;

    // 0x359da8: 0x24851f30  addiu       $a1, $a0, 0x1F30
    ctx->pc = 0x359da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7984));
    // 0x359dac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x359dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359db0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x359db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x359db4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x359db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x359db8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x359db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x359dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x359dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x359dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x359dc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x359dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x359dcc: 0x8c831360  lw          $v1, 0x1360($a0)
    ctx->pc = 0x359dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4960)));
    // 0x359dd0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x359dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x359dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x359ddc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x359ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x359de0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x359de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x359de4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x359de4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x359de8: 0x3e00008  jr          $ra
    ctx->pc = 0x359DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359DE8u;
        // 0x359dec: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359DF0u;
}
