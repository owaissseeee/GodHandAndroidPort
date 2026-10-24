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

// Function: func_002BAB30
// Address: 0x2bab30 - 0x2babc8
void func_002BAB30_0x2bab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAB30_0x2bab30");
#endif

    switch (ctx->pc) {
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        default: break;
    }

    ctx->pc = 0x2bab30u;

label_2bab30:
    // 0x2bab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bab34:
    // 0x2bab34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2bab38:
    // 0x2bab38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bab3c:
    // 0x2bab3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bab3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bab40:
    // 0x2bab40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bab44:
    // 0x2bab44: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2bab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2bab48:
    // 0x2bab48: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2bab48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2bab4c:
    // 0x2bab4c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2bab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2bab50:
    // 0x2bab50: 0x60f809  jalr        $v1
label_2bab54:
    if (ctx->pc == 0x2BAB54u) {
        ctx->pc = 0x2BAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB50u;
        // 0x2bab54: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB58u;
        goto label_2bab58;
    }
    ctx->pc = 0x2BAB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BAB58u);
        ctx->pc = 0x2BAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB50u;
        // 0x2bab54: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAB50u, 0x2BAB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAB58u;
label_2bab58:
    // 0x2bab58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2bab5c:
    // 0x2bab5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bab60:
    // 0x2bab60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bab64:
    // 0x2bab64: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2bab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bab68:
    // 0x2bab68: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2bab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bab6c:
    // 0x2bab6c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2bab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bab70:
    // 0x2bab70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bab70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2bab74:
    // 0x2bab74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bab74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2bab78:
    // 0x2bab78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bab78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2bab7c:
    // 0x2bab7c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2bab7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2bab80:
    // 0x2bab80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bab80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2bab84:
    // 0x2bab84: 0xc07df8a  jal         func_1F7E28
label_2bab88:
    if (ctx->pc == 0x2BAB88u) {
        ctx->pc = 0x2BAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB84u;
        // 0x2bab88: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB8Cu;
        goto label_2bab8c;
    }
    ctx->pc = 0x2BAB84u;
    SET_GPR_U32(ctx, 31, 0x2BAB8Cu);
    ctx->pc = 0x2BAB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB84u;
    // 0x2bab88: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BAB84u, 0x2BAB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB8Cu;
label_2bab8c:
    // 0x2bab8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bab8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bab90:
    // 0x2bab90: 0x0  nop
    ctx->pc = 0x2bab90u;
    // NOP
label_2bab94:
    // 0x2bab94: 0x0  nop
    ctx->pc = 0x2bab94u;
    // NOP
label_2bab98:
    // 0x2bab98: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bab98u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
label_2bab9c:
    // 0x2bab9c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bab9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2baba0:
    // 0x2baba0: 0x0  nop
    ctx->pc = 0x2baba0u;
    // NOP
label_2baba4:
    // 0x2baba4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_2baba8:
    if (ctx->pc == 0x2BABA8u) {
        ctx->pc = 0x2BABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABA4u;
        // 0x2baba8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABACu;
        goto label_2babac;
    }
    ctx->pc = 0x2BABA4u;
    {
        const bool branch_taken_0x2baba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baba4) {
            ctx->pc = 0x2BABA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BABA4u;
            // 0x2baba8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BABB8u;
            goto label_2babb8;
        }
    }
    ctx->pc = 0x2BABACu;
label_2babac:
    // 0x2babac: 0xc0e8910  jal         func_3A2440
label_2babb0:
    if (ctx->pc == 0x2BABB0u) {
        ctx->pc = 0x2BABB4u;
        goto label_2babb4;
    }
    ctx->pc = 0x2BABACu;
    SET_GPR_U32(ctx, 31, 0x2BABB4u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2BABACu, 0x2BABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABB4u;
label_2babb4:
    // 0x2babb4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x2babb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_2babb8:
    // 0x2babb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2babb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2babbc:
    // 0x2babbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2babbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2babc0:
    // 0x2babc0: 0x3e00008  jr          $ra
label_2babc4:
    if (ctx->pc == 0x2BABC4u) {
        ctx->pc = 0x2BABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABC0u;
        // 0x2babc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABC8u;
        goto label_fallthrough_0x2babc0;
    }
    ctx->pc = 0x2BABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABC0u;
        // 0x2babc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2babc0:
    ctx->pc = 0x2BABC8u;
}
