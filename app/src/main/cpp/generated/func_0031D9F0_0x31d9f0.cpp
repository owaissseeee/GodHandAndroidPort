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

// Function: func_0031D9F0
// Address: 0x31d9f0 - 0x31da28
void func_0031D9F0_0x31d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D9F0_0x31d9f0");
#endif

    ctx->pc = 0x31d9f0u;

    // 0x31d9f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d9f4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D9F4u;
    {
        const bool branch_taken_0x31d9f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x31d9f4) {
            ctx->pc = 0x31DA18u;
            goto label_31da18;
        }
    }
    ctx->pc = 0x31D9FCu;
    // 0x31d9fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D9FCu;
    {
        const bool branch_taken_0x31d9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9FCu;
        // 0x31da00: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9fc) {
            ctx->pc = 0x31DA18u;
            goto label_31da18;
        }
    }
    ctx->pc = 0x31DA04u;
    // 0x31da04: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31da08: 0x24425bc0  addiu       $v0, $v0, 0x5BC0
    ctx->pc = 0x31da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23488));
    // 0x31da0c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x31da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x31da10: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x31da10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x31da14: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x31da14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_31da18:
    // 0x31da18: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA20u;
    // 0x31da20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31da24: 0x0  nop
    ctx->pc = 0x31da24u;
    // NOP
    ctx->pc = 0x31da28u;
}
