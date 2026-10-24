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

// Function: SetEventCutEffect
// Address: 0x2fa158 - 0x2fa240
void SetEventCutEffect_0x2fa158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEventCutEffect_0x2fa158");
#endif

    switch (ctx->pc) {
        case 0x2fa174u: goto label_2fa174;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa228u: goto label_2fa228;
        default: break;
    }

    ctx->pc = 0x2fa158u;

    // 0x2fa158: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2fa15c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fa15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa160: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fa160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2fa164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa168: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2fa168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2fa16c: 0xc0c18cc  jal         func_306330
    ctx->pc = 0x2FA16Cu;
    SET_GPR_U32(ctx, 31, 0x2FA174u);
    ctx->pc = 0x2FA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA16Cu;
    // 0x2fa170: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306330u, 0x2FA16Cu, 0x2FA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA174u;
label_2fa174:
    // 0x2fa174: 0xc0be84a  jal         func_2FA128
    ctx->pc = 0x2FA174u;
    SET_GPR_U32(ctx, 31, 0x2FA17Cu);
    ctx->pc = 0x2FA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA174u;
    // 0x2fa178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA128u, 0x2FA174u, 0x2FA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA17Cu;
label_2fa17c:
    // 0x2fa17c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa180: 0x5443002a  bnel        $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FA180u;
    {
        const bool branch_taken_0x2fa180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa180) {
            ctx->pc = 0x2FA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA180u;
            // 0x2fa184: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA22Cu;
            goto label_2fa22c;
        }
    }
    ctx->pc = 0x2FA188u;
    // 0x2fa188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fa18c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fa18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa190: 0x0  nop
    ctx->pc = 0x2fa190u;
    // NOP
    // 0x2fa194: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fa194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fa198: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fa198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fa19c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2fa19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fa1a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2fa1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fa1a4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2fa1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fa1a8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2fa1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fa1ac: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2fa1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fa1b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2fa1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fa1b4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2fa1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2fa1b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fa1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa1bc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2fa1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2fa1c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa1c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2fa1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2fa1c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2fa1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fa1cc: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2fa1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fa1d0: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2fa1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fa1d4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2fa1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2fa1d8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2fa1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2fa1dc: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2fa1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa1e0: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2fa1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa1e4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2fa1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2fa1e8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2fa1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fa1ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2fa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2fa1f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2fa1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa1f4: 0x26082500  addiu       $t0, $s0, 0x2500
    ctx->pc = 0x2fa1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9472));
    // 0x2fa1f8: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x2fa1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fa1fc: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x2fa1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x2fa200: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x2fa200u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fa204: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2fa204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2fa208: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2fa208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fa20c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x2fa20cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa210: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2fa210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fa214: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2fa214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2fa218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa21c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2fa21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa220: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2FA220u;
    SET_GPR_U32(ctx, 31, 0x2FA228u);
    ctx->pc = 0x2FA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA220u;
    // 0x2fa224: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2FA220u, 0x2FA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA228u;
label_2fa228:
    // 0x2fa228: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fa228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fa22c:
    // 0x2fa22c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2fa22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fa230: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA230u;
        // 0x2fa234: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA238u;
    // 0x2fa238: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa23c: 0x0  nop
    ctx->pc = 0x2fa23cu;
    // NOP
    ctx->pc = 0x2fa240u;
}
