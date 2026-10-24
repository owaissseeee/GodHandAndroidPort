#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: setHmMess__FP14_R600_MESS_HIT
// Address: 0x79b218 - 0x79b2f0
void setHmMess__FP14_R600_MESS_HIT_0x79b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setHmMess__FP14_R600_MESS_HIT_0x79b218");
#endif

    switch (ctx->pc) {
        case 0x79b268u: goto label_79b268;
        case 0x79b284u: goto label_79b284;
        case 0x79b2a4u: goto label_79b2a4;
        case 0x79b2bcu: goto label_79b2bc;
        case 0x79b2d8u: goto label_79b2d8;
        default: break;
    }

    ctx->pc = 0x79b218u;

    // 0x79b218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b21c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b220: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b224: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79b228: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b22c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b230: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79b234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b23c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79b23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b240: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79b240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b244: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79b248: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b24c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79b250: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b254: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79b254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79b258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b25c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b260: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79B260u;
    SET_GPR_U32(ctx, 31, 0x79B268u);
    ctx->pc = 0x79B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B260u;
    // 0x79b264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79B260u, 0x79B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B268u;
label_79b268:
    // 0x79b268: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79b26c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b278: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b27c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79B27Cu;
    SET_GPR_U32(ctx, 31, 0x79B284u);
    ctx->pc = 0x79B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B27Cu;
    // 0x79b280: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79B27Cu, 0x79B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B284u;
label_79b284:
    // 0x79b284: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x79b284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79b288: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b28c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b28cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b290: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79b294: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b298: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79b298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x79b29c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79B29Cu;
    SET_GPR_U32(ctx, 31, 0x79B2A4u);
    ctx->pc = 0x79B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B29Cu;
    // 0x79b2a0: 0xa6420066  sh          $v0, 0x66($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B29Cu, 0x79B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2A4u;
label_79b2a4:
    // 0x79b2a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79b2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b2b4: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79B2B4u;
    SET_GPR_U32(ctx, 31, 0x79B2BCu);
    ctx->pc = 0x79B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B4u;
    // 0x79b2b8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79B2B4u, 0x79B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2BCu;
label_79b2bc:
    // 0x79b2bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b2c0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b2c4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b2c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2cc: 0x24a5b2f0  addiu       $a1, $a1, -0x4D10
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947568));
    // 0x79b2d0: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79B2D0u;
    SET_GPR_U32(ctx, 31, 0x79B2D8u);
    ctx->pc = 0x79B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2D0u;
    // 0x79b2d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79B2D0u, 0x79B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b2dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b2e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E8u;
        // 0x79b2ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2F0u;
}
} // namespace gh_r607
