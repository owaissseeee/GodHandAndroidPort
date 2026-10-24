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

// Function: cGameObj_findBurningPos
// Address: 0x12a2e0 - 0x12a3c0
void cGameObj_findBurningPos_0x12a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_findBurningPos_0x12a2e0");
#endif

    switch (ctx->pc) {
        case 0x12a318u: goto label_12a318;
        case 0x12a320u: goto label_12a320;
        case 0x12a334u: goto label_12a334;
        case 0x12a344u: goto label_12a344;
        case 0x12a370u: goto label_12a370;
        case 0x12a388u: goto label_12a388;
        default: break;
    }

    ctx->pc = 0x12a2e0u;

    // 0x12a2e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12a2e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12a2e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12a2ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12a2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12a2f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12a2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a2fc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x12a2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12a300: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a304: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x12a304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x12a308: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12a308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12a30c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x12a30cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x12a310: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a314: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x12a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
label_12a318:
    // 0x12a318: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x12A318u;
    SET_GPR_U32(ctx, 31, 0x12A320u);
    ctx->pc = 0x12A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A318u;
    // 0x12a31c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x12A318u, 0x12A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A320u;
label_12a320:
    // 0x12a320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a324: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A324u;
    {
        const bool branch_taken_0x12a324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a324) {
            ctx->pc = 0x12A328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A324u;
            // 0x12a328: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A390u;
            goto label_12a390;
        }
    }
    ctx->pc = 0x12A32Cu;
    // 0x12a32c: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x12A32Cu;
    SET_GPR_U32(ctx, 31, 0x12A334u);
    ctx->pc = 0x12A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A32Cu;
    // 0x12a330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x12A32Cu, 0x12A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A334u;
label_12a334:
    // 0x12a334: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x12A334u;
    {
        const bool branch_taken_0x12a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a334) {
            ctx->pc = 0x12A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A334u;
            // 0x12a338: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A390u;
            goto label_12a390;
        }
    }
    ctx->pc = 0x12A33Cu;
    // 0x12a33c: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x12A33Cu;
    SET_GPR_U32(ctx, 31, 0x12A344u);
    ctx->pc = 0x12A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A33Cu;
    // 0x12a340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x12A33Cu, 0x12A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A344u;
label_12a344:
    // 0x12a344: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A344u;
    {
        const bool branch_taken_0x12a344 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a344) {
            ctx->pc = 0x12A348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A344u;
            // 0x12a348: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A368u;
            goto label_12a368;
        }
    }
    ctx->pc = 0x12A34Cu;
    // 0x12a34c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a350: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12a350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12a354: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a358: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12a358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12a35c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a360: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12a364: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_12a368:
    // 0x12a368: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x12A368u;
    SET_GPR_U32(ctx, 31, 0x12A370u);
    ctx->pc = 0x12A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A368u;
    // 0x12a36c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x12A368u, 0x12A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A370u;
label_12a370:
    // 0x12a370: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a374: 0x0  nop
    ctx->pc = 0x12a374u;
    // NOP
    // 0x12a378: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12A378u;
    {
        const bool branch_taken_0x12a378 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A378u;
        // 0x12a37c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a378) {
            ctx->pc = 0x12A390u;
            goto label_12a390;
        }
    }
    ctx->pc = 0x12A380u;
    // 0x12a380: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x12A380u;
    SET_GPR_U32(ctx, 31, 0x12A388u);
    ctx->pc = 0x12A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A380u;
    // 0x12a384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x12A380u, 0x12A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A388u;
label_12a388:
    // 0x12a388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A388u;
    {
        const bool branch_taken_0x12a388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A388u;
        // 0x12a38c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a388) {
            ctx->pc = 0x12A3A4u;
            goto label_12a3a4;
        }
    }
    ctx->pc = 0x12A390u;
label_12a390:
    // 0x12a390: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x12a390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12a394: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x12A394u;
    {
        const bool branch_taken_0x12a394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A394u;
        // 0x12a398: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a394) {
            ctx->pc = 0x12A318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a318;
        }
    }
    ctx->pc = 0x12A39Cu;
    // 0x12a39c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12a3a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12a3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12a3a4:
    // 0x12a3a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12a3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a3a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12a3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a3ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12a3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a3b4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B8u;
        // 0x12a3bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A3C0u;
}
