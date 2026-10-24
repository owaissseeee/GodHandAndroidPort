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

// Function: func_002F6B40
// Address: 0x2f6b40 - 0x2f6bb8
void func_002F6B40_0x2f6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6B40_0x2f6b40");
#endif

    switch (ctx->pc) {
        case 0x2f6b5cu: goto label_2f6b5c;
        default: break;
    }

    ctx->pc = 0x2f6b40u;

    // 0x2f6b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6b44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f6b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f6b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6b50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b54: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F6B54u;
    SET_GPR_U32(ctx, 31, 0x2F6B5Cu);
    ctx->pc = 0x2F6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B54u;
    // 0x2f6b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F6B54u, 0x2F6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B5Cu;
label_2f6b5c:
    // 0x2f6b5c: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x2f6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f6b60: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6B60u;
    {
        const bool branch_taken_0x2f6b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B60u;
        // 0x2f6b64: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b60) {
            ctx->pc = 0x2F6B7Cu;
            goto label_2f6b7c;
        }
    }
    ctx->pc = 0x2F6B68u;
    // 0x2f6b68: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6b6c: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x2f6b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x2f6b70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f6b74: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6b78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6b7c:
    // 0x2f6b7c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f6b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f6b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6b84: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f6b88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f6b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f6b8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6b90: 0x9083018c  lbu         $v1, 0x18C($a0)
    ctx->pc = 0x2f6b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x2f6b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6b9c: 0x0  nop
    ctx->pc = 0x2f6b9cu;
    // NOP
    // 0x2f6ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f6ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f6ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f6ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f6ba8: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2f6ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x2f6bac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f6bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6BB8u;
}
