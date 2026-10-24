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

// Function: func_003A6A20
// Address: 0x3a6a20 - 0x3a6a88
void func_003A6A20_0x3a6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6A20_0x3a6a20");
#endif

    switch (ctx->pc) {
        case 0x3a6a78u: goto label_3a6a78;
        default: break;
    }

    ctx->pc = 0x3a6a20u;

    // 0x3a6a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a6a24: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x3a6a24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x3a6a28: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x3a6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x3a6a2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6a34: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x3a6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x3a6a38: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x3a6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x3a6a3c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x3a6a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3a6a40: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x3a6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x3a6a44: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x3a6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x3a6a48: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x3a6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x3a6a4c: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x3a6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x3a6a50: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x3a6a50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3a6a54: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x3a6a54u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3a6a58: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x3a6a58u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3a6a5c: 0xe7b20054  swc1        $f18, 0x54($sp)
    ctx->pc = 0x3a6a5cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3a6a60: 0x8d84a62c  lw          $a0, -0x59D4($t4)
    ctx->pc = 0x3a6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a6a64: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6a68: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x3a6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x3a6a6c: 0x8d83a62c  lw          $v1, -0x59D4($t4)
    ctx->pc = 0x3a6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a6a70: 0xc0ea762  jal         func_3A9D88
    ctx->pc = 0x3A6A70u;
    SET_GPR_U32(ctx, 31, 0x3A6A78u);
    ctx->pc = 0x3A6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A70u;
    // 0x3a6a74: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9D88u, 0x3A6A70u, 0x3A6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A78u;
label_3a6a78:
    // 0x3a6a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A7Cu;
        // 0x3a6a80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A84u;
    // 0x3a6a84: 0x0  nop
    ctx->pc = 0x3a6a84u;
    // NOP
    ctx->pc = 0x3a6a88u;
}
