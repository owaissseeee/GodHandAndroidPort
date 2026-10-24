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

// Function: func_002BABD0
// Address: 0x2babd0 - 0x2bac88
void func_002BABD0_0x2babd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BABD0_0x2babd0");
#endif

    switch (ctx->pc) {
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        default: break;
    }

    ctx->pc = 0x2babd0u;

label_2babd0:
    // 0x2babd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2babd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2babd4:
    // 0x2babd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2babd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2babd8:
    // 0x2babd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2babd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2babdc:
    // 0x2babdc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2babdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2babe0:
    // 0x2babe0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2babe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2babe4:
    // 0x2babe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2babe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2babe8:
    // 0x2babe8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2babe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2babec:
    // 0x2babec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2babecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2babf0:
    // 0x2babf0: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x2babf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_2babf4:
    // 0x2babf4: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2babf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2babf8:
    // 0x2babf8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2babfc:
    // 0x2babfc: 0x60f809  jalr        $v1
label_2bac00:
    if (ctx->pc == 0x2BAC00u) {
        ctx->pc = 0x2BAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABFCu;
        // 0x2bac00: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC04u;
        goto label_2bac04;
    }
    ctx->pc = 0x2BABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BAC04u);
        ctx->pc = 0x2BAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABFCu;
        // 0x2bac00: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABFCu, 0x2BAC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAC04u;
label_2bac04:
    // 0x2bac04: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2bac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bac08:
    // 0x2bac08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bac08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bac0c:
    // 0x2bac0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bac0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2bac10:
    // 0x2bac10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bac10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bac14:
    // 0x2bac14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bac14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bac18:
    // 0x2bac18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bac18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bac1c:
    // 0x2bac1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bac1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2bac20:
    // 0x2bac20: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2bac20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2bac24:
    // 0x2bac24: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2bac24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2bac28:
    // 0x2bac28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2bac28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2bac2c:
    // 0x2bac2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2bac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2bac30:
    // 0x2bac30: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bac30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2bac34:
    // 0x2bac34: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bac34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bac38:
    // 0x2bac38: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_2bac3c:
    // 0x2bac3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bac40:
    // 0x2bac40: 0xc0c28ac  jal         func_30A2B0
label_2bac44:
    if (ctx->pc == 0x2BAC44u) {
        ctx->pc = 0x2BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC40u;
        // 0x2bac44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC48u;
        goto label_2bac48;
    }
    ctx->pc = 0x2BAC40u;
    SET_GPR_U32(ctx, 31, 0x2BAC48u);
    ctx->pc = 0x2BAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC40u;
    // 0x2bac44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BAC40u, 0x2BAC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC48u;
label_2bac48:
    // 0x2bac48: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bac48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2bac4c:
    // 0x2bac4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2bac50:
    // 0x2bac50: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x2bac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_2bac54:
    // 0x2bac54: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_2bac58:
    if (ctx->pc == 0x2BAC58u) {
        ctx->pc = 0x2BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC54u;
        // 0x2bac58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC5Cu;
        goto label_2bac5c;
    }
    ctx->pc = 0x2BAC54u;
    {
        const bool branch_taken_0x2bac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC54u;
        // 0x2bac58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac54) {
            ctx->pc = 0x2BAC70u;
            goto label_2bac70;
        }
    }
    ctx->pc = 0x2BAC5Cu;
label_2bac5c:
    // 0x2bac5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bac60:
    // 0x2bac60: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x2bac60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_2bac64:
    // 0x2bac64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bac64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2bac68:
    // 0x2bac68: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2bac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bac6c:
    // 0x2bac6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2bac70:
    // 0x2bac70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bac70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bac74:
    // 0x2bac74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bac74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bac78:
    // 0x2bac78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bac7c:
    // 0x2bac7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bac80:
    // 0x2bac80: 0x3e00008  jr          $ra
label_2bac84:
    if (ctx->pc == 0x2BAC84u) {
        ctx->pc = 0x2BAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC80u;
        // 0x2bac84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC88u;
        goto label_fallthrough_0x2bac80;
    }
    ctx->pc = 0x2BAC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC80u;
        // 0x2bac84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bac80:
    ctx->pc = 0x2BAC88u;
}
