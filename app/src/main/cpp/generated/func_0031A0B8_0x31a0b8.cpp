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

// Function: func_0031A0B8
// Address: 0x31a0b8 - 0x31a0e8
void func_0031A0B8_0x31a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A0B8_0x31a0b8");
#endif

    ctx->pc = 0x31a0b8u;

    // 0x31a0b8: 0x53142  srl         $a2, $a1, 5
    ctx->pc = 0x31a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x31a0bc: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x31a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x31a0c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31a0c4: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x31a0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x31a0c8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x31a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x31a0cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31a0d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31a0d4: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x31a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x31a0d8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31a0d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31a0dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0E0u;
        // 0x31a0e4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A0E8u;
}
