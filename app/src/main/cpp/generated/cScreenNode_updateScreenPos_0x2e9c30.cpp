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

// Function: cScreenNode_updateScreenPos
// Address: 0x2e9c30 - 0x2e9d48
void cScreenNode_updateScreenPos_0x2e9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScreenNode_updateScreenPos_0x2e9c30");
#endif

    switch (ctx->pc) {
        case 0x2e9c44u: goto label_2e9c44;
        case 0x2e9c50u: goto label_2e9c50;
        case 0x2e9c64u: goto label_2e9c64;
        default: break;
    }

    ctx->pc = 0x2e9c30u;

    // 0x2e9c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9c34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e9c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9c3c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E9C3Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C44u);
    ctx->pc = 0x2E9C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C3Cu;
    // 0x2e9c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E9C3Cu, 0x2E9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C44u;
label_2e9c44:
    // 0x2e9c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c48: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E9C48u;
    SET_GPR_U32(ctx, 31, 0x2E9C50u);
    ctx->pc = 0x2E9C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C48u;
    // 0x2e9c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E9C48u, 0x2E9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C50u;
label_2e9c50:
    // 0x2e9c50: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2e9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2e9c54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e9c58: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2e9c58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2e9c5c: 0xc04e11c  jal         func_138470
    ctx->pc = 0x2E9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C64u);
    ctx->pc = 0x2E9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C5Cu;
    // 0x2e9c60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138470u, 0x2E9C5Cu, 0x2E9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C64u;
label_2e9c64:
    // 0x2e9c64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e9c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9c68: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e9c6c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e9c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9c74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2e9c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9c78: 0x0  nop
    ctx->pc = 0x2e9c78u;
    // NOP
    // 0x2e9c7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9C7Cu;
    {
        const bool branch_taken_0x2e9c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C7Cu;
        // 0x2e9c80: 0xa062b644  sb          $v0, -0x49BC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948420), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c7c) {
            ctx->pc = 0x2E9C94u;
            goto label_2e9c94;
        }
    }
    ctx->pc = 0x2E9C84u;
    // 0x2e9c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9c8c: 0x0  nop
    ctx->pc = 0x2e9c8cu;
    // NOP
    // 0x2e9c90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e9c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2e9c94:
    // 0x2e9c94: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e9c98: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2e9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9c9c: 0x8c421180  lw          $v0, 0x1180($v0)
    ctx->pc = 0x2e9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e9ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9ca4: 0x0  nop
    ctx->pc = 0x2e9ca4u;
    // NOP
    // 0x2e9ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9cac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e9cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9cb0: 0x0  nop
    ctx->pc = 0x2e9cb0u;
    // NOP
    // 0x2e9cb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9CB4u;
    {
        const bool branch_taken_0x2e9cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CB4u;
        // 0x2e9cb8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cb4) {
            ctx->pc = 0x2E9CCCu;
            goto label_2e9ccc;
        }
    }
    ctx->pc = 0x2E9CBCu;
    // 0x2e9cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cc0: 0x0  nop
    ctx->pc = 0x2e9cc0u;
    // NOP
    // 0x2e9cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9cc8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2e9ccc:
    // 0x2e9ccc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2e9cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9cd0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2e9cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9cd4: 0x0  nop
    ctx->pc = 0x2e9cd4u;
    // NOP
    // 0x2e9cd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9CD8u;
    {
        const bool branch_taken_0x2e9cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CD8u;
        // 0x2e9cdc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cd8) {
            ctx->pc = 0x2E9CF0u;
            goto label_2e9cf0;
        }
    }
    ctx->pc = 0x2E9CE0u;
    // 0x2e9ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9ce8: 0x0  nop
    ctx->pc = 0x2e9ce8u;
    // NOP
    // 0x2e9cec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2e9cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2e9cf0:
    // 0x2e9cf0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e9cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9cf4: 0x8c42118c  lw          $v0, 0x118C($v0)
    ctx->pc = 0x2e9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4492)));
    // 0x2e9cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cfc: 0x0  nop
    ctx->pc = 0x2e9cfcu;
    // NOP
    // 0x2e9d00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e9d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9d08: 0x0  nop
    ctx->pc = 0x2e9d08u;
    // NOP
    // 0x2e9d0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D0Cu;
    {
        const bool branch_taken_0x2e9d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D0Cu;
        // 0x2e9d10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d0c) {
            ctx->pc = 0x2E9D24u;
            goto label_2e9d24;
        }
    }
    ctx->pc = 0x2E9D14u;
    // 0x2e9d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9d18: 0x0  nop
    ctx->pc = 0x2e9d18u;
    // NOP
    // 0x2e9d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9d20: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2e9d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2e9d24:
    // 0x2e9d24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e9d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9d2c: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2e9d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x2e9d30: 0xe60102c4  swc1        $f1, 0x2C4($s0)
    ctx->pc = 0x2e9d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x2e9d34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D3Cu;
        // 0x2e9d40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9D44u;
    // 0x2e9d44: 0x0  nop
    ctx->pc = 0x2e9d44u;
    // NOP
    ctx->pc = 0x2e9d48u;
}
