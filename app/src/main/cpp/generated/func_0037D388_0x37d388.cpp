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

// Function: func_0037D388
// Address: 0x37d388 - 0x37d3b0
void func_0037D388_0x37d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D388_0x37d388");
#endif

    ctx->pc = 0x37d388u;

    // 0x37d388: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x37d388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x37d38c: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37d390: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x37d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x37d394: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37d394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37d398: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x37d398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d39c: 0x2463cf20  addiu       $v1, $v1, -0x30E0
    ctx->pc = 0x37d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
    // 0x37d3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d3a4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x37d3a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3A8u;
        // 0x37d3ac: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3B0u;
}
