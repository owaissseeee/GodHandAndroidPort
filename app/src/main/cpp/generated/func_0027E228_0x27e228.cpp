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

// Function: func_0027E228
// Address: 0x27e228 - 0x27e348
void func_0027E228_0x27e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E228_0x27e228");
#endif

    switch (ctx->pc) {
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2fcu: goto label_27e2fc;
        default: break;
    }

    ctx->pc = 0x27e228u;

    // 0x27e228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e22c: 0x24030266  addiu       $v1, $zero, 0x266
    ctx->pc = 0x27e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
    // 0x27e230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27e234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27e238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e23c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x27e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27e240: 0x5043003d  beql        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x27E240u;
    {
        const bool branch_taken_0x27e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27e240) {
            ctx->pc = 0x27E244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E240u;
            // 0x27e244: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E248u;
    // 0x27e248: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x27e24c: 0x5840003a  blezl       $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27E24Cu;
    {
        const bool branch_taken_0x27e24c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27e24c) {
            ctx->pc = 0x27E250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E24Cu;
            // 0x27e250: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E254u;
    // 0x27e254: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x27e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x27e258: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x27E258u;
    {
        const bool branch_taken_0x27e258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e258) {
            ctx->pc = 0x27E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E258u;
            // 0x27e25c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E260u;
    // 0x27e260: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x27e260u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27e264: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27e268: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x27E268u;
    {
        const bool branch_taken_0x27e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e268) {
            ctx->pc = 0x27E26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E268u;
            // 0x27e26c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E270u;
    // 0x27e270: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x27e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27e274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e278: 0x0  nop
    ctx->pc = 0x27e278u;
    // NOP
    // 0x27e27c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27e27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e280: 0x0  nop
    ctx->pc = 0x27e280u;
    // NOP
    // 0x27e284: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x27E284u;
    {
        const bool branch_taken_0x27e284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e284) {
            ctx->pc = 0x27E288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E284u;
            // 0x27e288: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E28Cu;
    // 0x27e28c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27e290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e294: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27e298: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27e29c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27e29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27e2a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27e2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2ac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27E2ACu;
    SET_GPR_U32(ctx, 31, 0x27E2B4u);
    ctx->pc = 0x27E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2ACu;
    // 0x27e2b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27E2ACu, 0x27E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2B4u;
label_27e2b4:
    // 0x27e2b4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x27e2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27e2b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e2bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27e2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27e2c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E2C0u;
    {
        const bool branch_taken_0x27e2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C0u;
        // 0x27e2c4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2c0) {
            ctx->pc = 0x27E2D4u;
            goto label_27e2d4;
        }
    }
    ctx->pc = 0x27E2C8u;
    // 0x27e2c8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27e2cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E2CCu;
    {
        const bool branch_taken_0x27e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2CCu;
        // 0x27e2d0: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2cc) {
            ctx->pc = 0x27E2D8u;
            goto label_27e2d8;
        }
    }
    ctx->pc = 0x27E2D4u;
label_27e2d4:
    // 0x27e2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e2d8:
    // 0x27e2d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E2D8u;
    {
        const bool branch_taken_0x27e2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2D8u;
        // 0x27e2dc: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2d8) {
            ctx->pc = 0x27E2FCu;
            goto label_27e2fc;
        }
    }
    ctx->pc = 0x27E2E0u;
    // 0x27e2e0: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27e2e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27e2e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27e2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27e2ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27e2f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2f4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x27E2F4u;
    SET_GPR_U32(ctx, 31, 0x27E2FCu);
    ctx->pc = 0x27E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2F4u;
    // 0x27e2f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x27E2F4u, 0x27E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2FCu;
label_27e2fc:
    // 0x27e2fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27e2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27e300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e304: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x27e308: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x27e308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x27e30c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E30Cu;
    {
        const bool branch_taken_0x27e30c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x27E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E30Cu;
        // 0x27e310: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e30c) {
            ctx->pc = 0x27E31Cu;
            goto label_27e31c;
        }
    }
    ctx->pc = 0x27E314u;
    // 0x27e314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E314u;
    {
        const bool branch_taken_0x27e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E314u;
        // 0x27e318: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e314) {
            ctx->pc = 0x27E320u;
            goto label_27e320;
        }
    }
    ctx->pc = 0x27E31Cu;
label_27e31c:
    // 0x27e31c: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x27e31cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_27e320:
    // 0x27e320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e324: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27e324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e328: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x27e328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e32c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27e32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e330: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27e330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27e334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e338:
    // 0x27e338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27e338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E33Cu;
        // 0x27e340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E344u;
    // 0x27e344: 0x0  nop
    ctx->pc = 0x27e344u;
    // NOP
    ctx->pc = 0x27e348u;
}
