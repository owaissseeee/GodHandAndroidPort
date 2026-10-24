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

// Function: func_0035BB60
// Address: 0x35bb60 - 0x35bba0
void func_0035BB60_0x35bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BB60_0x35bb60");
#endif

    ctx->pc = 0x35bb60u;

    // 0x35bb60: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x35bb60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35bb64: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x35bb64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35bb68: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x35bb68u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35bb6c: 0xa7482a  slt         $t1, $a1, $a3
    ctx->pc = 0x35bb6cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35bb70: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x35bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x35bb74: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x35bb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35bb78: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x35bb78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x35bb7c: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x35bb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x35bb80: 0xa9380b  movn        $a3, $a1, $t1
    ctx->pc = 0x35bb80u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x35bb84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bb88: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x35bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x35bb8c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x35bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x35bb90: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x35bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x35bb94: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB94u;
        // 0x35bb98: 0xfc880010  sd          $t0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB9Cu;
    // 0x35bb9c: 0x0  nop
    ctx->pc = 0x35bb9cu;
    // NOP
    ctx->pc = 0x35bba0u;
}
