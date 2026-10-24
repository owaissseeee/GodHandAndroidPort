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

// Function: func_001D0D90
// Address: 0x1d0d90 - 0x1d0df8
void func_001D0D90_0x1d0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0D90_0x1d0d90");
#endif

    ctx->pc = 0x1d0d90u;

    // 0x1d0d90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d0d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d94: 0x9cc30004  lwu         $v1, 0x4($a2)
    ctx->pc = 0x1d0d94u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d0d98: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1d0d98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1d0d9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0da0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0DA0u;
    {
        const bool branch_taken_0x1d0da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DA0u;
        // 0x1d0da4: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0da0) {
            ctx->pc = 0x1D0DF0u;
            goto label_1d0df0;
        }
    }
    ctx->pc = 0x1D0DA8u;
    // 0x1d0da8: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x1d0da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
    // 0x1d0dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0db0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0DB0u;
    {
        const bool branch_taken_0x1d0db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0db0) {
            ctx->pc = 0x1D0DF0u;
            goto label_1d0df0;
        }
    }
    ctx->pc = 0x1D0DB8u;
    // 0x1d0db8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0DB8u;
    {
        const bool branch_taken_0x1d0db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0db8) {
            ctx->pc = 0x1D0DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0DB8u;
            // 0x1d0dbc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0DCCu;
            goto label_1d0dcc;
        }
    }
    ctx->pc = 0x1D0DC0u;
    // 0x1d0dc0: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x1d0dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1d0dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DC4u;
        // 0x1d0dc8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DCCu;
label_1d0dcc:
    // 0x1d0dcc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x1d0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d0dd0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1d0dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1d0dd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1d0dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1d0dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0ddc: 0x0  nop
    ctx->pc = 0x1d0ddcu;
    // NOP
    // 0x1d0de0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1d0de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1d0de4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d0de8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d0dec: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1d0decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1d0df0:
    // 0x1d0df0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DF8u;
}
