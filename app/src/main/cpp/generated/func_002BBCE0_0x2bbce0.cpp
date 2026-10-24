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

// Function: func_002BBCE0
// Address: 0x2bbce0 - 0x2bbdb8
void func_002BBCE0_0x2bbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BBCE0_0x2bbce0");
#endif

    switch (ctx->pc) {
        case 0x2bbd20u: goto label_2bbd20;
        case 0x2bbd40u: goto label_2bbd40;
        case 0x2bbd74u: goto label_2bbd74;
        default: break;
    }

    ctx->pc = 0x2bbce0u;

    // 0x2bbce0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bbce4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bbce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2bbce8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bbce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2bbcec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bbcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcf0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bbcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bbcf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bbcf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcf8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bbcf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bbcfc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bbcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2bbd00: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bbd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2bbd04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bbd08: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bbd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbd0c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2bbd0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bbd10: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bbd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbd14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd18: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BBD18u;
    SET_GPR_U32(ctx, 31, 0x2BBD20u);
    ctx->pc = 0x2BBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD18u;
    // 0x2bbd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BBD18u, 0x2BBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD20u;
label_2bbd20:
    // 0x2bbd20: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bbd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bbd24: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2bbd24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bbd28: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbd28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbd2c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bbd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbd30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bbd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BBD38u;
    SET_GPR_U32(ctx, 31, 0x2BBD40u);
    ctx->pc = 0x2BBD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD38u;
    // 0x2bbd3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BBD38u, 0x2BBD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD40u;
label_2bbd40:
    // 0x2bbd40: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bbd40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbd44: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bbd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbd48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2bbd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbd4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bbd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd50: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bbd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbd54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bbd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bbd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbd5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bbd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd60: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bbd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bbd64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd68: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bbd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bbd6c: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BBD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBD74u);
    ctx->pc = 0x2BBD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD6Cu;
    // 0x2bbd70: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BBD6Cu, 0x2BBD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD74u;
label_2bbd74:
    // 0x2bbd74: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bbd74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbd78: 0x0  nop
    ctx->pc = 0x2bbd78u;
    // NOP
    // 0x2bbd7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBD7Cu;
    {
        const bool branch_taken_0x2bbd7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD7Cu;
        // 0x2bbd80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd7c) {
            ctx->pc = 0x2BBD88u;
            goto label_2bbd88;
        }
    }
    ctx->pc = 0x2BBD84u;
    // 0x2bbd84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd88:
    // 0x2bbd88: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bbd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bbd8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bbd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bbd90: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bbd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bbd94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bbd94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bbd98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bbd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbd9c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bbd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bbda0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDA0u;
        // 0x2bbda4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBDA8u;
    // 0x2bbda8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bbdac: 0x0  nop
    ctx->pc = 0x2bbdacu;
    // NOP
    // 0x2bbdb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bbdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbdb4: 0x0  nop
    ctx->pc = 0x2bbdb4u;
    // NOP
    ctx->pc = 0x2bbdb8u;
}
