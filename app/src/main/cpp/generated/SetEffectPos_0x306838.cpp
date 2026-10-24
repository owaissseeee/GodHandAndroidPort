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

// Function: SetEffectPos
// Address: 0x306838 - 0x306900
void SetEffectPos_0x306838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectPos_0x306838");
#endif

    switch (ctx->pc) {
        case 0x3068f4u: goto label_3068f4;
        default: break;
    }

    ctx->pc = 0x306838u;

    // 0x306838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30683c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30683cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x306840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x306844: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x306844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x306848: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x306848u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30684c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x30684cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306850: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x306850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x306854: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x306854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x306858: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x306858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30685c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30685cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x306860: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x306860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306864: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x306868: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x306868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30686c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x30686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x306870: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x306870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x306874: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x306874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x306878: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x306878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30687c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x30687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x306880: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x306880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x306884: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x306884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x306888: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x306888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30688c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x30688cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x306890: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x306890u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x306894: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x306894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x306898: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x306898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x30689c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x30689cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068a0: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x3068a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068a4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3068a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3068a8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x3068a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3068ac: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x3068acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x3068b0: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x3068b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x3068b4: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x3068b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068b8: 0x10a70007  beq         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3068B8u;
    {
        const bool branch_taken_0x3068b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3068BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068B8u;
        // 0x3068bc: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068b8) {
            ctx->pc = 0x3068D8u;
            goto label_3068d8;
        }
    }
    ctx->pc = 0x3068C0u;
    // 0x3068c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3068c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3068c4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3068c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3068c8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x3068c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3068cc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3068ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3068d0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3068d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3068d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3068d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3068d8:
    // 0x3068d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3068d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x3068dc: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x3068dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3068e0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3068e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068e4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3068e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3068e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068ec: 0xc0c194a  jal         func_306528
    ctx->pc = 0x3068ECu;
    SET_GPR_U32(ctx, 31, 0x3068F4u);
    ctx->pc = 0x3068F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068ECu;
    // 0x3068f0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x3068ECu, 0x3068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068F4u;
label_3068f4:
    // 0x3068f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3068f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3068f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3068F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3068FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068F8u;
        // 0x3068fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3068F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306900u;
}
