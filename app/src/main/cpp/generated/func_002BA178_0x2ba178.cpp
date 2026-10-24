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

// Function: func_002BA178
// Address: 0x2ba178 - 0x2ba1b0
void func_002BA178_0x2ba178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA178_0x2ba178");
#endif

    ctx->pc = 0x2ba178u;

    // 0x2ba178: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ba17c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2ba17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2ba180: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2ba180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2ba184: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ba184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ba188: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2ba188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ba18c: 0x2463bab0  addiu       $v1, $v1, -0x4550
    ctx->pc = 0x2ba18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949552));
    // 0x2ba190: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2ba190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2ba194: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ba194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba198: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2ba198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2ba19c: 0xa086000c  sb          $a2, 0xC($a0)
    ctx->pc = 0x2ba19cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ba1a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ba1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ba1a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ba1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ba1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1A8u;
        // 0x2ba1ac: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA1B0u;
}
