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

// Function: Pos_getGroundY
// Address: 0x2ddd18 - 0x2dddf8
void Pos_getGroundY_0x2ddd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pos_getGroundY_0x2ddd18");
#endif

    switch (ctx->pc) {
        case 0x2dddd8u: goto label_2dddd8;
        default: break;
    }

    ctx->pc = 0x2ddd18u;

    // 0x2ddd18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ddd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ddd1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ddd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ddd20: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ddd24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ddd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ddd28: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2ddd28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ddd2c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2ddd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ddd30: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2ddd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ddd34: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2ddd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ddd38: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDD38u;
    {
        const bool branch_taken_0x2ddd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD38u;
        // 0x2ddd3c: 0xc4940004  lwc1        $f20, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd38) {
            ctx->pc = 0x2DDD54u;
            goto label_2ddd54;
        }
    }
    ctx->pc = 0x2DDD40u;
    // 0x2ddd40: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ddd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddd44: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ddd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd48: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ddd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ddd4c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2ddd4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ddd50: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2ddd50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2ddd54:
    // 0x2ddd54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ddd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ddd58: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDD58u;
    {
        const bool branch_taken_0x2ddd58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD58u;
        // 0x2ddd5c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd58) {
            ctx->pc = 0x2DDD7Cu;
            goto label_2ddd7c;
        }
    }
    ctx->pc = 0x2DDD60u;
    // 0x2ddd60: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2ddd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddd64: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ddd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd68: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2ddd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddd6c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2ddd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ddd70: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2ddd70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ddd74: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2ddd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ddd78: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ddd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddd7c:
    // 0x2ddd7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ddd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddd80: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ddd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ddd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ddd8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ddd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddd90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ddd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddd94: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2ddd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2ddd98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ddd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ddd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ddd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddda0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ddda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ddda4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ddda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ddda8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ddda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2dddac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dddacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2dddb0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2dddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2dddb4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2dddb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dddb8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dddbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dddbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddc0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2dddc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2dddc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dddc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2dddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2dddcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2dddccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddd0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2DDDD0u;
    SET_GPR_U32(ctx, 31, 0x2DDDD8u);
    ctx->pc = 0x2DDDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDD0u;
    // 0x2dddd4: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2DDDD0u, 0x2DDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDD8u;
label_2dddd8:
    // 0x2dddd8: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDDD8u;
    {
        const bool branch_taken_0x2dddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2dddd8) {
            ctx->pc = 0x2DDDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDDD8u;
            // 0x2ddddc: 0xc7b40054  lwc1        $f20, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDDE0u;
            goto label_2ddde0;
        }
    }
    ctx->pc = 0x2DDDE0u;
label_2ddde0:
    // 0x2ddde0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2ddde0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2ddde4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ddde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddde8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ddde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dddec: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2dddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF0u;
        // 0x2dddf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDF8u;
}
