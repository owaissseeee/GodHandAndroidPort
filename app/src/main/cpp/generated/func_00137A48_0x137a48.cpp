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

// Function: func_00137A48
// Address: 0x137a48 - 0x137aa0
void func_00137A48_0x137a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00137A48_0x137a48");
#endif

    switch (ctx->pc) {
        case 0x137a70u: goto label_137a70;
        default: break;
    }

    ctx->pc = 0x137a48u;

    // 0x137a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137a54: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x137a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x137a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137a60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x137a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x137a64: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x137a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x137a68: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x137A68u;
    SET_GPR_U32(ctx, 31, 0x137A70u);
    ctx->pc = 0x137A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A68u;
    // 0x137a6c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x137A68u, 0x137A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A70u;
label_137a70:
    // 0x137a70: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x137a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x137a74: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x137a78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a84: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x137a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x137a88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x137A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A8Cu;
        // 0x137a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A94u;
    // 0x137a94: 0x0  nop
    ctx->pc = 0x137a94u;
    // NOP
    // 0x137a98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137a9c: 0x0  nop
    ctx->pc = 0x137a9cu;
    // NOP
    ctx->pc = 0x137aa0u;
}
