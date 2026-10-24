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

// Function: func_002C0A28
// Address: 0x2c0a28 - 0x2c0a78
void func_002C0A28_0x2c0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0A28_0x2c0a28");
#endif

    switch (ctx->pc) {
        case 0x2c0a50u: goto label_2c0a50;
        default: break;
    }

    ctx->pc = 0x2c0a28u;

    // 0x2c0a28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c0a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c0a2c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C0A2Cu;
    {
        const bool branch_taken_0x2c0a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0a2c) {
            ctx->pc = 0x2C0A6Cu;
            goto label_2c0a6c;
        }
    }
    ctx->pc = 0x2C0A34u;
    // 0x2c0a34: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C0A34u;
    {
        const bool branch_taken_0x2c0a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A34u;
        // 0x2c0a38: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a34) {
            ctx->pc = 0x2C0A6Cu;
            goto label_2c0a6c;
        }
    }
    ctx->pc = 0x2C0A3Cu;
    // 0x2c0a3c: 0x24423970  addiu       $v0, $v0, 0x3970
    ctx->pc = 0x2c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14704));
    // 0x2c0a40: 0xf8400190  sqc2        $vf0, 0x190($v0)
    ctx->pc = 0x2c0a40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c0a44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0a48: 0x2444028a  addiu       $a0, $v0, 0x28A
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 650));
    // 0x2c0a4c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2c0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2c0a50:
    // 0x2c0a50: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c0a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c0a58: 0x0  nop
    ctx->pc = 0x2c0a58u;
    // NOP
    // 0x2c0a5c: 0x0  nop
    ctx->pc = 0x2c0a5cu;
    // NOP
    // 0x2c0a60: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C0A60u;
    {
        const bool branch_taken_0x2c0a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A60u;
        // 0x2c0a64: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a60) {
            ctx->pc = 0x2C0A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0a50;
        }
    }
    ctx->pc = 0x2C0A68u;
    // 0x2c0a68: 0xac400b8c  sw          $zero, 0xB8C($v0)
    ctx->pc = 0x2c0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2956), GPR_U32(ctx, 0));
label_2c0a6c:
    // 0x2c0a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0A74u;
    // 0x2c0a74: 0x0  nop
    ctx->pc = 0x2c0a74u;
    // NOP
    ctx->pc = 0x2c0a78u;
}
