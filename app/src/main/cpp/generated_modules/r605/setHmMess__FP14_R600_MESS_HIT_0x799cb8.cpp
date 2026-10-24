#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x799cb8 - 0x799d90
void setHmMess__FP14_R600_MESS_HIT_0x799cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x799cb8");
#endif

    switch (ctx->pc) {
        case 0x799d08u: goto label_799d08;
        case 0x799d24u: goto label_799d24;
        case 0x799d44u: goto label_799d44;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d78u: goto label_799d78;
        default: break;
    }

    ctx->pc = 0x799cb8u;

    // 0x799cb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799cbc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799cc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799cc4: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x799cc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799ccc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799cd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799cdc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x799cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799ce0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x799ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x799ce4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x799ce8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799cec: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799cf0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799cf4: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799d00: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799D00u;
    SET_GPR_U32(ctx, 31, 0x799D08u);
    ctx->pc = 0x799D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D00u;
    // 0x799d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799D00u, 0x799D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D08u;
label_799d08:
    // 0x799d08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799d0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d1c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799D1Cu;
    SET_GPR_U32(ctx, 31, 0x799D24u);
    ctx->pc = 0x799D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D1Cu;
    // 0x799d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799D1Cu, 0x799D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D24u;
label_799d24:
    // 0x799d24: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x799d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x799d28: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799d2c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d30: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799d34: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799d38: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799d3c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799D3Cu;
    SET_GPR_U32(ctx, 31, 0x799D44u);
    ctx->pc = 0x799D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D3Cu;
    // 0x799d40: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799D3Cu, 0x799D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d54: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799D54u;
    SET_GPR_U32(ctx, 31, 0x799D5Cu);
    ctx->pc = 0x799D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D54u;
    // 0x799d58: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799D54u, 0x799D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D5Cu;
label_799d5c:
    // 0x799d5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d60: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d64: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799d68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x799d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d6c: 0x24a59d90  addiu       $a1, $a1, -0x6270
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942096));
    // 0x799d70: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799D70u;
    SET_GPR_U32(ctx, 31, 0x799D78u);
    ctx->pc = 0x799D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D70u;
    // 0x799d74: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799D70u, 0x799D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D78u;
label_799d78:
    // 0x799d78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d88: 0x3e00008  jr          $ra
    ctx->pc = 0x799D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D88u;
        // 0x799d8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D90u;
}
} // namespace gh_r605
