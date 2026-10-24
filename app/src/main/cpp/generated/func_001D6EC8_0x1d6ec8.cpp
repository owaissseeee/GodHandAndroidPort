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

// Function: func_001D6EC8
// Address: 0x1d6ec8 - 0x1d6f30
void func_001D6EC8_0x1d6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6EC8_0x1d6ec8");
#endif

    ctx->pc = 0x1d6ec8u;

    // 0x1d6ec8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d6ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ecc: 0x9cc30004  lwu         $v1, 0x4($a2)
    ctx->pc = 0x1d6eccu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d6ed0: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x1d6ed4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6ed8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6ED8u;
    {
        const bool branch_taken_0x1d6ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED8u;
        // 0x1d6edc: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ed8) {
            ctx->pc = 0x1D6F28u;
            goto label_1d6f28;
        }
    }
    ctx->pc = 0x1D6EE0u;
    // 0x1d6ee0: 0x3113b  dsra        $v0, $v1, 4
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
    // 0x1d6ee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6ee8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6EE8u;
    {
        const bool branch_taken_0x1d6ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ee8) {
            ctx->pc = 0x1D6F28u;
            goto label_1d6f28;
        }
    }
    ctx->pc = 0x1D6EF0u;
    // 0x1d6ef0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6EF0u;
    {
        const bool branch_taken_0x1d6ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ef0) {
            ctx->pc = 0x1D6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6EF0u;
            // 0x1d6ef4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6F04u;
            goto label_1d6f04;
        }
    }
    ctx->pc = 0x1D6EF8u;
    // 0x1d6ef8: 0x34820010  ori         $v0, $a0, 0x10
    ctx->pc = 0x1d6ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1d6efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EFCu;
        // 0x1d6f00: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F04u;
label_1d6f04:
    // 0x1d6f04: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x1d6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1d6f08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1d6f0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1d6f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1d6f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f14: 0x0  nop
    ctx->pc = 0x1d6f14u;
    // NOP
    // 0x1d6f18: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1d6f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1d6f1c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d6f20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d6f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d6f24: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1d6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1d6f28:
    // 0x1d6f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F30u;
}
