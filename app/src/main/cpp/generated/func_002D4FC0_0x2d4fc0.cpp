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

// Function: func_002D4FC0
// Address: 0x2d4fc0 - 0x2d5000
void func_002D4FC0_0x2d4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4FC0_0x2d4fc0");
#endif

    switch (ctx->pc) {
        case 0x2d4fe0u: goto label_2d4fe0;
        default: break;
    }

    ctx->pc = 0x2d4fc0u;

    // 0x2d4fc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d4fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d4fc4: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4FC4u;
    {
        const bool branch_taken_0x2d4fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4fc4) {
            ctx->pc = 0x2D4FF8u;
            goto label_2d4ff8;
        }
    }
    ctx->pc = 0x2D4FCCu;
    // 0x2d4fcc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D4FCCu;
    {
        const bool branch_taken_0x2d4fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FCCu;
        // 0x2d4fd0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4fcc) {
            ctx->pc = 0x2D4FF8u;
            goto label_2d4ff8;
        }
    }
    ctx->pc = 0x2D4FD4u;
    // 0x2d4fd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d4fd8: 0x244246c0  addiu       $v0, $v0, 0x46C0
    ctx->pc = 0x2d4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18112));
    // 0x2d4fdc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d4fe0:
    // 0x2d4fe0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d4fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d4fe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d4fe8: 0x0  nop
    ctx->pc = 0x2d4fe8u;
    // NOP
    // 0x2d4fec: 0x0  nop
    ctx->pc = 0x2d4fecu;
    // NOP
    // 0x2d4ff0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D4FF0u;
    {
        const bool branch_taken_0x2d4ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FF0u;
        // 0x2d4ff4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ff0) {
            ctx->pc = 0x2D4FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4fe0;
        }
    }
    ctx->pc = 0x2D4FF8u;
label_2d4ff8:
    // 0x2d4ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5000u;
}
