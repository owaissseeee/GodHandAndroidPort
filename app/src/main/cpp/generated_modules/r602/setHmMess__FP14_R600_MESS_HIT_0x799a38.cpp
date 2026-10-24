#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x799a38 - 0x799b10
void setHmMess__FP14_R600_MESS_HIT_0x799a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x799a38");
#endif

    switch (ctx->pc) {
        case 0x799a88u: goto label_799a88;
        case 0x799aa4u: goto label_799aa4;
        case 0x799ac4u: goto label_799ac4;
        case 0x799adcu: goto label_799adc;
        case 0x799af8u: goto label_799af8;
        default: break;
    }

    ctx->pc = 0x799a38u;

    // 0x799a38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799a3c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799a40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799a44: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x799a48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799a4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799a50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799a5c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x799a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799a60: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x799a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x799a64: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x799a68: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a6c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799a70: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799a74: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a80: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799A80u;
    SET_GPR_U32(ctx, 31, 0x799A88u);
    ctx->pc = 0x799A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A80u;
    // 0x799a84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799A80u, 0x799A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799a8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a9c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x799aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x799aa8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799aac: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799aacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ab0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799ab4: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799ab8: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799abc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799ABCu;
    SET_GPR_U32(ctx, 31, 0x799AC4u);
    ctx->pc = 0x799AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ABCu;
    // 0x799ac0: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799ABCu, 0x799AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC4u;
label_799ac4:
    // 0x799ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799acc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ad4: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799AD4u;
    SET_GPR_U32(ctx, 31, 0x799ADCu);
    ctx->pc = 0x799AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD4u;
    // 0x799ad8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799AD4u, 0x799ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ADCu;
label_799adc:
    // 0x799adc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799ae0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ae4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799ae8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aec: 0x24a59b10  addiu       $a1, $a1, -0x64F0
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941456));
    // 0x799af0: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799afc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799b08: 0x3e00008  jr          $ra
    ctx->pc = 0x799B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B08u;
        // 0x799b0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B10u;
}
} // namespace gh_r602
