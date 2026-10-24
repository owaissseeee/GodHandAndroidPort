#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x79b648 - 0x79b720
void setHmMess__FP14_R600_MESS_HIT_0x79b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x79b648");
#endif

    switch (ctx->pc) {
        case 0x79b698u: goto label_79b698;
        case 0x79b6b4u: goto label_79b6b4;
        case 0x79b6d4u: goto label_79b6d4;
        case 0x79b6ecu: goto label_79b6ec;
        case 0x79b708u: goto label_79b708;
        default: break;
    }

    ctx->pc = 0x79b648u;

    // 0x79b648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b64c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b650: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b654: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79b658: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b65c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b660: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79b664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b66c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79b66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b670: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79b670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b674: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79b678: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b67c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x79b67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79b680: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79b680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b684: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79b684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79b688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b68c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b690: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79B690u;
    SET_GPR_U32(ctx, 31, 0x79B698u);
    ctx->pc = 0x79B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B690u;
    // 0x79b694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79B690u, 0x79B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B698u;
label_79b698:
    // 0x79b698: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79b69c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b6ac: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79B6ACu;
    SET_GPR_U32(ctx, 31, 0x79B6B4u);
    ctx->pc = 0x79B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6ACu;
    // 0x79b6b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79B6ACu, 0x79B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6B4u;
label_79b6b4:
    // 0x79b6b4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x79b6b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79b6b8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b6bc: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b6bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b6c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79b6c4: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b6c8: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x79b6cc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79B6CCu;
    SET_GPR_U32(ctx, 31, 0x79B6D4u);
    ctx->pc = 0x79B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6CCu;
    // 0x79b6d0: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B6CCu, 0x79B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6D4u;
label_79b6d4:
    // 0x79b6d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79b6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b6e4: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79B6E4u;
    SET_GPR_U32(ctx, 31, 0x79B6ECu);
    ctx->pc = 0x79B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6E4u;
    // 0x79b6e8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79B6E4u, 0x79B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6ECu;
label_79b6ec:
    // 0x79b6ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b6f0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b6f4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b6f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79b6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6fc: 0x24a5b720  addiu       $a1, $a1, -0x48E0
    ctx->pc = 0x79b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948640));
    // 0x79b700: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79B700u;
    SET_GPR_U32(ctx, 31, 0x79B708u);
    ctx->pc = 0x79B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B700u;
    // 0x79b704: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79B700u, 0x79B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B708u;
label_79b708:
    // 0x79b708: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b70c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b710: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b718: 0x3e00008  jr          $ra
    ctx->pc = 0x79B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B718u;
        // 0x79b71c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B720u;
}
} // namespace gh_r601
