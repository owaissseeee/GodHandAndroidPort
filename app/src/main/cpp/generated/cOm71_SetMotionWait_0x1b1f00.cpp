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

// Function: cOm71_SetMotionWait
// Address: 0x1b1f00 - 0x1b1f58
void cOm71_SetMotionWait_0x1b1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm71_SetMotionWait_0x1b1f00");
#endif

    switch (ctx->pc) {
        case 0x1b1f34u: goto label_1b1f34;
        case 0x1b1f44u: goto label_1b1f44;
        default: break;
    }

    ctx->pc = 0x1b1f00u;

    // 0x1b1f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1f04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1f08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1f1c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1b1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b1f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1f24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f28: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1b1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b1f2c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B1F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F34u);
    ctx->pc = 0x1B1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F2Cu;
    // 0x1b1f30: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B1F2Cu, 0x1B1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F34u;
label_1b1f34:
    // 0x1b1f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1f3c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1B1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F44u);
    ctx->pc = 0x1B1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F3Cu;
    // 0x1b1f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1B1F3Cu, 0x1B1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F44u;
label_1b1f44:
    // 0x1b1f44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F4Cu;
        // 0x1b1f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1F54u;
    // 0x1b1f54: 0x0  nop
    ctx->pc = 0x1b1f54u;
    // NOP
    ctx->pc = 0x1b1f58u;
}
