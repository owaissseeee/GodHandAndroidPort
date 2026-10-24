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

// Function: func_002FFF10
// Address: 0x2fff10 - 0x2fff50
void func_002FFF10_0x2fff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFF10_0x2fff10");
#endif

    switch (ctx->pc) {
        case 0x2fff2cu: goto label_2fff2c;
        default: break;
    }

    ctx->pc = 0x2fff10u;

    // 0x2fff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fff14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fff18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fff18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff1c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFF1Cu;
    {
        const bool branch_taken_0x2fff1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF1Cu;
        // 0x2fff20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff1c) {
            ctx->pc = 0x2FFF3Cu;
            goto label_2fff3c;
        }
    }
    ctx->pc = 0x2FFF24u;
    // 0x2fff24: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFF24u;
    SET_GPR_U32(ctx, 31, 0x2FFF2Cu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFF24u, 0x2FFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF2Cu;
label_2fff2c:
    // 0x2fff2c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2fff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2fff30: 0x2463f308  addiu       $v1, $v1, -0xCF8
    ctx->pc = 0x2fff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963976));
    // 0x2fff34: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2fff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2fff38: 0xfa0002d0  sqc2        $vf0, 0x2D0($s0)
    ctx->pc = 0x2fff38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), _mm_castps_si128(ctx->vu0_vf[0]));
label_2fff3c:
    // 0x2fff3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fff3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fff44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fff44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fff48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF48u;
        // 0x2fff4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFF50u;
}
