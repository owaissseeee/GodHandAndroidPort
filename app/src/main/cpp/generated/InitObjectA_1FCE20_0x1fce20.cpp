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

// Function: InitObjectA_1FCE20
// Address: 0x1fce20 - 0x1fce80
void InitObjectA_1FCE20_0x1fce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectA_1FCE20_0x1fce20");
#endif

    switch (ctx->pc) {
        case 0x1fce68u: goto label_1fce68;
        default: break;
    }

    ctx->pc = 0x1fce20u;

    // 0x1fce20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fce24: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1fce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1fce28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fce2c: 0x2442c4d8  addiu       $v0, $v0, -0x3B28
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952152));
    // 0x1fce30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fce34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fce34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce38: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1fce38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1fce3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fce40: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1fce40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fce44: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1fce44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fce48: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1fce4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce50: 0x2442c4b8  addiu       $v0, $v0, -0x3B48
    ctx->pc = 0x1fce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952120));
    // 0x1fce54: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1fce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1fce58: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1fce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1fce5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fce5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce60: 0xc07f36e  jal         func_1FCDB8
    ctx->pc = 0x1FCE60u;
    SET_GPR_U32(ctx, 31, 0x1FCE68u);
    ctx->pc = 0x1FCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE60u;
    // 0x1fce64: 0xa2030049  sb          $v1, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDB8u, 0x1FCE60u, 0x1FCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE68u;
label_1fce68:
    // 0x1fce68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fce68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fce70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fce70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fce74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE74u;
        // 0x1fce78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCE7Cu;
    // 0x1fce7c: 0x0  nop
    ctx->pc = 0x1fce7cu;
    // NOP
    ctx->pc = 0x1fce80u;
}
