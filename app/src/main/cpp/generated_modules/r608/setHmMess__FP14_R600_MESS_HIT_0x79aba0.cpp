#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x79aba0 - 0x79ac78
void setHmMess__FP14_R600_MESS_HIT_0x79aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x79aba0");
#endif

    switch (ctx->pc) {
        case 0x79abf0u: goto label_79abf0;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac60u: goto label_79ac60;
        default: break;
    }

    ctx->pc = 0x79aba0u;

    // 0x79aba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79aba4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79aba8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79abac: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x79abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79abb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79abb4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79abb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79abbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79abbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79abc4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79abc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79abc8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79abc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79abcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79abccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79abd0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79abd4: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x79abd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79abd8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79abdc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79abe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abe4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79abe8: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79ABE8u;
    SET_GPR_U32(ctx, 31, 0x79ABF0u);
    ctx->pc = 0x79ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABE8u;
    // 0x79abec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79ABE8u, 0x79ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF0u;
label_79abf0:
    // 0x79abf0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79abf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79abf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79abf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ac04: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79AC04u;
    SET_GPR_U32(ctx, 31, 0x79AC0Cu);
    ctx->pc = 0x79AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC04u;
    // 0x79ac08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79AC04u, 0x79AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC0Cu;
label_79ac0c:
    // 0x79ac0c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x79ac0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79ac10: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79ac14: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79ac14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ac18: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79ac1c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79ac20: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x79ac24: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79AC24u;
    SET_GPR_U32(ctx, 31, 0x79AC2Cu);
    ctx->pc = 0x79AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC24u;
    // 0x79ac28: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AC24u, 0x79AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ac3c: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79AC3Cu;
    SET_GPR_U32(ctx, 31, 0x79AC44u);
    ctx->pc = 0x79AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC3Cu;
    // 0x79ac40: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79AC3Cu, 0x79AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC44u;
label_79ac44:
    // 0x79ac44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ac48: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79ac4c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79ac50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79ac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac54: 0x24a5ac78  addiu       $a1, $a1, -0x5388
    ctx->pc = 0x79ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945912));
    // 0x79ac58: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79AC58u;
    SET_GPR_U32(ctx, 31, 0x79AC60u);
    ctx->pc = 0x79AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC58u;
    // 0x79ac5c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79AC58u, 0x79AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC60u;
label_79ac60:
    // 0x79ac60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79ac60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ac64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79ac64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ac68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79ac68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ac6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC70u;
        // 0x79ac74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC78u;
}
} // namespace gh_r608
