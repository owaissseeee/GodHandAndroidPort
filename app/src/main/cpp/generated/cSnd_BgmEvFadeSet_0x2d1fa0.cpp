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

// Function: cSnd_BgmEvFadeSet
// Address: 0x2d1fa0 - 0x2d2088
void cSnd_BgmEvFadeSet_0x2d1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvFadeSet_0x2d1fa0");
#endif

    switch (ctx->pc) {
        case 0x2d1ff0u: goto label_2d1ff0;
        case 0x2d202cu: goto label_2d202c;
        case 0x2d203cu: goto label_2d203c;
        case 0x2d204cu: goto label_2d204c;
        default: break;
    }

    ctx->pc = 0x2d1fa0u;

    // 0x2d1fa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1fa4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d1fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1fac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d1facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fb0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2d1fb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d1fb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fb8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d1fb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d1fbc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2d1fbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1fc0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d1fc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d1fc4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2d1fc4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2d1fc8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d1fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d1fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1fd0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x2d1fd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d1fd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d1fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d1fd8: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d1fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1fdc: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1FDCu;
    {
        const bool branch_taken_0x2d1fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FDCu;
        // 0x2d1fe0: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fdc) {
            ctx->pc = 0x2D2058u;
            goto label_2d2058;
        }
    }
    ctx->pc = 0x2D1FE4u;
    // 0x2d1fe4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2d1fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d1fe8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d1fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1fec: 0x0  nop
    ctx->pc = 0x2d1fecu;
    // NOP
label_2d1ff0:
    // 0x2d1ff0: 0x12330008  beq         $s1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1FF0u;
    {
        const bool branch_taken_0x2d1ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d1ff0) {
            ctx->pc = 0x2D2014u;
            goto label_2d2014;
        }
    }
    ctx->pc = 0x2D1FF8u;
    // 0x2d1ff8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d1ffc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d2000: 0x54520013  bnel        $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2000u;
    {
        const bool branch_taken_0x2d2000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d2000) {
            ctx->pc = 0x2D2004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2000u;
            // 0x2d2004: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2050u;
            goto label_2d2050;
        }
    }
    ctx->pc = 0x2D2008u;
    // 0x2d2008: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d200c: 0x54510010  bnel        $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D200Cu;
    {
        const bool branch_taken_0x2d200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d200c) {
            ctx->pc = 0x2D2010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D200Cu;
            // 0x2d2010: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2050u;
            goto label_2d2050;
        }
    }
    ctx->pc = 0x2D2014u;
label_2d2014:
    // 0x2d2014: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x2d2014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2018: 0x0  nop
    ctx->pc = 0x2d2018u;
    // NOP
    // 0x2d201c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D201Cu;
    {
        const bool branch_taken_0x2d201c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D201Cu;
        // 0x2d2020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d201c) {
            ctx->pc = 0x2D203Cu;
            goto label_2d203c;
        }
    }
    ctx->pc = 0x2D2024u;
    // 0x2d2024: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2D2024u;
    SET_GPR_U32(ctx, 31, 0x2D202Cu);
    ctx->pc = 0x2D2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2024u;
    // 0x2d2028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2D2024u, 0x2D202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D202Cu;
label_2d202c:
    // 0x2d202c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2d202cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d2030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2034: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x2D2034u;
    SET_GPR_U32(ctx, 31, 0x2D203Cu);
    ctx->pc = 0x2D2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2034u;
    // 0x2d2038: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x2D2034u, 0x2D203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D203Cu;
label_2d203c:
    // 0x2d203c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2040: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2d2040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2d2044: 0xc0b3538  jal         func_2CD4E0
    ctx->pc = 0x2D2044u;
    SET_GPR_U32(ctx, 31, 0x2D204Cu);
    ctx->pc = 0x2D2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2044u;
    // 0x2d2048: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4E0u, 0x2D2044u, 0x2D204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D204Cu;
label_2d204c:
    // 0x2d204c: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d204cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d2050:
    // 0x2d2050: 0x1600ffe7  bnez        $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D2050u;
    {
        const bool branch_taken_0x2d2050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2050) {
            ctx->pc = 0x2D1FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1ff0;
        }
    }
    ctx->pc = 0x2D2058u;
label_2d2058:
    // 0x2d2058: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d2058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d205c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d205cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2064: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d2064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d206c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2d206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d2070: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2d2070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d2074: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2d2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d2078: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d207c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D207Cu;
        // 0x2d2080: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2084u;
    // 0x2d2084: 0x0  nop
    ctx->pc = 0x2d2084u;
    // NOP
    ctx->pc = 0x2d2088u;
}
