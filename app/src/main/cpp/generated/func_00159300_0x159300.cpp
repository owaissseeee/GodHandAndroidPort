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

// Function: func_00159300
// Address: 0x159300 - 0x159490
void func_00159300_0x159300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00159300_0x159300");
#endif

    switch (ctx->pc) {
        case 0x159320u: goto label_159320;
        case 0x159388u: goto label_159388;
        default: break;
    }

    ctx->pc = 0x159300u;

    // 0x159300: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x159300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x159304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x159304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159308: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x159308u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15930c: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15930Cu;
    {
        const bool branch_taken_0x15930c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x159310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15930Cu;
        // 0x159310: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15930c) {
            ctx->pc = 0x159360u;
            goto label_159360;
        }
    }
    ctx->pc = 0x159314u;
    // 0x159314: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x159314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159318: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x159318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15931c: 0x0  nop
    ctx->pc = 0x15931cu;
    // NOP
label_159320:
    // 0x159320: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x159320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159328: 0x0  nop
    ctx->pc = 0x159328u;
    // NOP
    // 0x15932c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15932cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159330: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x159330u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159334: 0x0  nop
    ctx->pc = 0x159334u;
    // NOP
    // 0x159338: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x159338u;
    {
        const bool branch_taken_0x159338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159338u;
        // 0x15933c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159338) {
            ctx->pc = 0x1593E0u;
            goto label_1593e0;
        }
    }
    ctx->pc = 0x159340u;
    // 0x159340: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x159340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159344: 0x0  nop
    ctx->pc = 0x159344u;
    // NOP
    // 0x159348: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x159348u;
    {
        const bool branch_taken_0x159348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159348u;
        // 0x15934c: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159348) {
            ctx->pc = 0x159370u;
            goto label_159370;
        }
    }
    ctx->pc = 0x159350u;
    // 0x159350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159354: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x159354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159358: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x159358u;
    {
        const bool branch_taken_0x159358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159358u;
        // 0x15935c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159358) {
            ctx->pc = 0x159320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159320;
        }
    }
    ctx->pc = 0x159360u;
label_159360:
    // 0x159360: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x159364: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x159368: 0x3e00008  jr          $ra
    ctx->pc = 0x159368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159368u;
        // 0x15936c: 0xc440fff4  lwc1        $f0, -0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159370u;
label_159370:
    // 0x159370: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x159370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159374: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x159374u;
    {
        const bool branch_taken_0x159374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159374u;
        // 0x159378: 0x246bffff  addiu       $t3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159374) {
            ctx->pc = 0x1593D0u;
            goto label_1593d0;
        }
    }
    ctx->pc = 0x15937Cu;
    // 0x15937c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15937cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x159380: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x159380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x159384: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x159384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159388:
    // 0x159388: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x159388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15938c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159394: 0x0  nop
    ctx->pc = 0x159394u;
    // NOP
    // 0x159398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15939c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x15939cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593a0: 0x0  nop
    ctx->pc = 0x1593a0u;
    // NOP
    // 0x1593a4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1593A4u;
    {
        const bool branch_taken_0x1593a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1593A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A4u;
        // 0x1593a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a4) {
            ctx->pc = 0x1593E8u;
            goto label_1593e8;
        }
    }
    ctx->pc = 0x1593ACu;
    // 0x1593ac: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1593acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593b0: 0x0  nop
    ctx->pc = 0x1593b0u;
    // NOP
    // 0x1593b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1593B4u;
    {
        const bool branch_taken_0x1593b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1593B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593B4u;
        // 0x1593b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593b4) {
            ctx->pc = 0x1593F0u;
            goto label_1593f0;
        }
    }
    ctx->pc = 0x1593BCu;
    // 0x1593bc: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1593c0: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1593c4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1593c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1593c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1593C8u;
    {
        const bool branch_taken_0x1593c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593C8u;
        // 0x1593cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593c8) {
            ctx->pc = 0x159388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159388;
        }
    }
    ctx->pc = 0x1593D0u;
label_1593d0:
    // 0x1593d0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1593d4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1593d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1593D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1593DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593D8u;
        // 0x1593dc: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593E0u;
label_1593e0:
    // 0x1593e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1593E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E0u;
        // 0x1593e4: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593E8u;
label_1593e8:
    // 0x1593e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1593E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1593ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E8u;
        // 0x1593ec: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593F0u;
label_1593f0:
    // 0x1593f0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1593f4: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1593f8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1593fc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1593fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159400: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x159400u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159408: 0x0  nop
    ctx->pc = 0x159408u;
    // NOP
    // 0x15940c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15940cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159410: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x159414: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x159414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x159418: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x159418u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15941c: 0x0  nop
    ctx->pc = 0x15941cu;
    // NOP
    // 0x159420: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x159420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x159424: 0xc4490004  lwc1        $f9, 0x4($v0)
    ctx->pc = 0x159424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x159428: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x159428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15942c: 0xc448000c  lwc1        $f8, 0xC($v0)
    ctx->pc = 0x15942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x159430: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x159430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x159434: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x159434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159438: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x159438u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x15943c: 0x0  nop
    ctx->pc = 0x15943cu;
    // NOP
    // 0x159440: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x159440u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x159444: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x159444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x159448: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x159448u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15944c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x15944cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x159450: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x159450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x159454: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x159454u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x159458: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x159458u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x15945c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15945cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159460: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x159460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x159464: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x159464u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x159468: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x159468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x15946c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15946cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x159470: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x159470u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x159474: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x159474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x159478: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x159478u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x15947c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x15947cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x159480: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x159480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x159484: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x159484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x159488: 0x3e00008  jr          $ra
    ctx->pc = 0x159488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159488u;
        // 0x15948c: 0x46060000  add.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159490u;
}
