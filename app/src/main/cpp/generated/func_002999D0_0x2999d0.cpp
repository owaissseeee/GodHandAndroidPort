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

// Function: func_002999D0
// Address: 0x2999d0 - 0x299a28
void func_002999D0_0x2999d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002999D0_0x2999d0");
#endif

    ctx->pc = 0x2999d0u;

    // 0x2999d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2999d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2999d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2999d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2999d8: 0x8c834080  lw          $v1, 0x4080($a0)
    ctx->pc = 0x2999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16512)));
    // 0x2999dc: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2999dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2999e0: 0x8c824080  lw          $v0, 0x4080($a0)
    ctx->pc = 0x2999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16512)));
    // 0x2999e4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x2999e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2999e8: 0x8c834080  lw          $v1, 0x4080($a0)
    ctx->pc = 0x2999e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16512)));
    // 0x2999ec: 0x8c824090  lw          $v0, 0x4090($a0)
    ctx->pc = 0x2999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16528)));
    // 0x2999f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2999f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2999f8: 0xac834080  sw          $v1, 0x4080($a0)
    ctx->pc = 0x2999f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16512), GPR_U32(ctx, 3));
    // 0x2999fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2999FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999FCu;
        // 0x299a00: 0xac824090  sw          $v0, 0x4090($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2999FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299A04u;
    // 0x299a04: 0x0  nop
    ctx->pc = 0x299a04u;
    // NOP
    // 0x299a08: 0xac834084  sw          $v1, 0x4084($a0)
    ctx->pc = 0x299a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16516), GPR_U32(ctx, 3));
    // 0x299a0c: 0x0  nop
    ctx->pc = 0x299a0cu;
    // NOP
    // 0x299a10: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x299a10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x299a14: 0x0  nop
    ctx->pc = 0x299a14u;
    // NOP
    // 0x299a18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x299a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299a1c: 0x0  nop
    ctx->pc = 0x299a1cu;
    // NOP
    // 0x299a20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299a24: 0x0  nop
    ctx->pc = 0x299a24u;
    // NOP
    ctx->pc = 0x299a28u;
}
