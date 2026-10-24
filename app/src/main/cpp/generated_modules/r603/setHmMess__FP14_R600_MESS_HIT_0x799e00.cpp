#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x799e00 - 0x799ed8
void setHmMess__FP14_R600_MESS_HIT_0x799e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x799e00");
#endif

    switch (ctx->pc) {
        case 0x799e50u: goto label_799e50;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e8cu: goto label_799e8c;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ec0u: goto label_799ec0;
        default: break;
    }

    ctx->pc = 0x799e00u;

    // 0x799e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799e04: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799e08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799e0c: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x799e10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799e14: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799e18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799e1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799e24: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x799e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799e28: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x799e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e2c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799e2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x799e30: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799e34: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799e38: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799e3c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799e48: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799E48u;
    SET_GPR_U32(ctx, 31, 0x799E50u);
    ctx->pc = 0x799E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E48u;
    // 0x799e4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799E48u, 0x799E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E50u;
label_799e50:
    // 0x799e50: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799e54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e64: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799E64u;
    SET_GPR_U32(ctx, 31, 0x799E6Cu);
    ctx->pc = 0x799E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E64u;
    // 0x799e68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799E64u, 0x799E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E6Cu;
label_799e6c:
    // 0x799e6c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x799e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x799e70: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799e74: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799e74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e78: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799e7c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799e80: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799e84: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e9c: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799E9Cu;
    SET_GPR_U32(ctx, 31, 0x799EA4u);
    ctx->pc = 0x799EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E9Cu;
    // 0x799ea0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799E9Cu, 0x799EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799ea8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799eac: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799eb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x799eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb4: 0x24a59ed8  addiu       $a1, $a1, -0x6128
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942424));
    // 0x799eb8: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799EB8u;
    SET_GPR_U32(ctx, 31, 0x799EC0u);
    ctx->pc = 0x799EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB8u;
    // 0x799ebc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799EB8u, 0x799EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC0u;
label_799ec0:
    // 0x799ec0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799ec4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799ec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x799ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED0u;
        // 0x799ed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799ED8u;
}
} // namespace gh_r603
