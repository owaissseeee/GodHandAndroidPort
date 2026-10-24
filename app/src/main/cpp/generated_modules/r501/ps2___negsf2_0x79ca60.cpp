#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __negsf2
// Address: 0x79ca60 - 0x79ca98
void ps2___negsf2_0x79ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negsf2_0x79ca60");
#endif

    switch (ctx->pc) {
        case 0x79ca78u: goto label_79ca78;
        case 0x79ca8cu: goto label_79ca8c;
        default: break;
    }

    ctx->pc = 0x79ca60u;

    // 0x79ca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79ca64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79ca68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ca6c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79ca6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79ca70: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79CA70u;
    SET_GPR_U32(ctx, 31, 0x79CA78u);
    ctx->pc = 0x79CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CA70u;
    // 0x79ca74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79CA70u, 0x79CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CA78u;
label_79ca78:
    // 0x79ca78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79ca7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ca80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79ca80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79ca84: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79CA84u;
    SET_GPR_U32(ctx, 31, 0x79CA8Cu);
    ctx->pc = 0x79CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CA84u;
    // 0x79ca88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79CA84u, 0x79CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CA8Cu;
label_79ca8c:
    // 0x79ca8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x79CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA90u;
        // 0x79ca94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CA98u;
}
} // namespace gh_r501
