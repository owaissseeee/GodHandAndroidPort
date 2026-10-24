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

// Function: ResetGlobalStateFields_107DE0
// Address: 0x107de0 - 0x107e20
void ResetGlobalStateFields_107DE0_0x107de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetGlobalStateFields_107DE0_0x107de0");
#endif

    ctx->pc = 0x107de0u;

    // 0x107de0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x107de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x107de4: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107DE4u;
    {
        const bool branch_taken_0x107de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x107de4) {
            ctx->pc = 0x107E10u;
            goto label_107e10;
        }
    }
    ctx->pc = 0x107DECu;
    // 0x107dec: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107DECu;
    {
        const bool branch_taken_0x107dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DECu;
        // 0x107df0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dec) {
            ctx->pc = 0x107E10u;
            goto label_107e10;
        }
    }
    ctx->pc = 0x107DF4u;
    // 0x107df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x107df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107dfc: 0x244315f0  addiu       $v1, $v0, 0x15F0
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x107e00: 0xac4015f0  sw          $zero, 0x15F0($v0)
    ctx->pc = 0x107e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5616), GPR_U32(ctx, 0));
    // 0x107e04: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x107e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x107e08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x107e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x107e0c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x107e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_107e10:
    // 0x107e10: 0x3e00008  jr          $ra
    ctx->pc = 0x107E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x107e1c: 0x0  nop
    ctx->pc = 0x107e1cu;
    // NOP
    ctx->pc = 0x107e20u;
}
