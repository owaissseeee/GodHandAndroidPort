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

// Function: SetEffectParts
// Address: 0x306900 - 0x3069a8
void SetEffectParts_0x306900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectParts_0x306900");
#endif

    switch (ctx->pc) {
        case 0x30699cu: goto label_30699c;
        default: break;
    }

    ctx->pc = 0x306900u;

    // 0x306900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x306904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x306904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306908: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x306908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30690c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x306910: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x306910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x306914: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x306914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x306918: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x306918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30691c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x306920: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x306920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306924: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x306924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306928: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x306928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30692c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x30692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x306930: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x306930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x306934: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x306934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x306938: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x306938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x30693c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x30693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x306940: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x306940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x306944: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x306944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x306948: 0xa3a9004c  sb          $t1, 0x4C($sp)
    ctx->pc = 0x306948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 9));
    // 0x30694c: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x30694cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x306950: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x306950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x306954: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x306954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x306958: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x306958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x30695c: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x30695cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x306960: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x306960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x306964: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x306964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306968: 0xa3a7004c  sb          $a3, 0x4C($sp)
    ctx->pc = 0x306968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 7));
    // 0x30696c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x30696cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x306970: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x306970u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x306974: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x306974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306978: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x306978u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30697c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x30697cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x306980: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x306980u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x306984: 0xe7af0040  swc1        $f15, 0x40($sp)
    ctx->pc = 0x306984u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x306988: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x306988u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x30698c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x30698cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x306990: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x306990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x306994: 0xc0c194a  jal         func_306528
    ctx->pc = 0x306994u;
    SET_GPR_U32(ctx, 31, 0x30699Cu);
    ctx->pc = 0x306998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306994u;
    // 0x306998: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x306994u, 0x30699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30699Cu;
label_30699c:
    // 0x30699c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3069a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3069A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069A0u;
        // 0x3069a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3069A8u;
}
