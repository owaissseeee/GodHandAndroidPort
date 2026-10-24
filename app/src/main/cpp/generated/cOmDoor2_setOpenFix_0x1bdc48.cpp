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

// Function: cOmDoor2_setOpenFix
// Address: 0x1bdc48 - 0x1bdce8
void cOmDoor2_setOpenFix_0x1bdc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor2_setOpenFix_0x1bdc48");
#endif

    switch (ctx->pc) {
        case 0x1bdc48u: goto label_1bdc48;
        case 0x1bdc4cu: goto label_1bdc4c;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc54u: goto label_1bdc54;
        case 0x1bdc58u: goto label_1bdc58;
        case 0x1bdc5cu: goto label_1bdc5c;
        case 0x1bdc60u: goto label_1bdc60;
        case 0x1bdc64u: goto label_1bdc64;
        case 0x1bdc68u: goto label_1bdc68;
        case 0x1bdc6cu: goto label_1bdc6c;
        case 0x1bdc70u: goto label_1bdc70;
        case 0x1bdc74u: goto label_1bdc74;
        case 0x1bdc78u: goto label_1bdc78;
        case 0x1bdc7cu: goto label_1bdc7c;
        case 0x1bdc80u: goto label_1bdc80;
        case 0x1bdc84u: goto label_1bdc84;
        case 0x1bdc88u: goto label_1bdc88;
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdc90u: goto label_1bdc90;
        case 0x1bdc94u: goto label_1bdc94;
        case 0x1bdc98u: goto label_1bdc98;
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdca4u: goto label_1bdca4;
        case 0x1bdca8u: goto label_1bdca8;
        case 0x1bdcacu: goto label_1bdcac;
        case 0x1bdcb0u: goto label_1bdcb0;
        case 0x1bdcb4u: goto label_1bdcb4;
        case 0x1bdcb8u: goto label_1bdcb8;
        case 0x1bdcbcu: goto label_1bdcbc;
        case 0x1bdcc0u: goto label_1bdcc0;
        case 0x1bdcc4u: goto label_1bdcc4;
        case 0x1bdcc8u: goto label_1bdcc8;
        case 0x1bdcccu: goto label_1bdccc;
        case 0x1bdcd0u: goto label_1bdcd0;
        case 0x1bdcd4u: goto label_1bdcd4;
        case 0x1bdcd8u: goto label_1bdcd8;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdce0u: goto label_1bdce0;
        case 0x1bdce4u: goto label_1bdce4;
        default: break;
    }

    ctx->pc = 0x1bdc48u;

label_1bdc48:
    // 0x1bdc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bdc4c:
    // 0x1bdc4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bdc50:
    // 0x1bdc50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bdc54:
    // 0x1bdc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bdc58:
    // 0x1bdc58: 0x92020774  lbu         $v0, 0x774($s0)
    ctx->pc = 0x1bdc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1908)));
label_1bdc5c:
    // 0x1bdc5c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1bdc60:
    if (ctx->pc == 0x1BDC60u) {
        ctx->pc = 0x1BDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC5Cu;
        // 0x1bdc60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC64u;
        goto label_1bdc64;
    }
    ctx->pc = 0x1BDC5Cu;
    {
        const bool branch_taken_0x1bdc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc5c) {
            ctx->pc = 0x1BDC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDC5Cu;
            // 0x1bdc60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDCD8u;
            goto label_1bdcd8;
        }
    }
    ctx->pc = 0x1BDC64u;
label_1bdc64:
    // 0x1bdc64: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bdc68:
    // 0x1bdc68: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bdc6c:
    // 0x1bdc6c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bdc70:
    // 0x1bdc70: 0x40f809  jalr        $v0
label_1bdc74:
    if (ctx->pc == 0x1BDC74u) {
        ctx->pc = 0x1BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC70u;
        // 0x1bdc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC78u;
        goto label_1bdc78;
    }
    ctx->pc = 0x1BDC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDC78u);
        ctx->pc = 0x1BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC70u;
        // 0x1bdc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC70u, 0x1BDC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDC78u;
label_1bdc78:
    // 0x1bdc78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bdc78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bdc7c:
    // 0x1bdc7c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bdc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bdc80:
    // 0x1bdc80: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
label_1bdc84:
    // 0x1bdc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bdc88:
    if (ctx->pc == 0x1BDC88u) {
        ctx->pc = 0x1BDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC84u;
        // 0x1bdc88: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC8Cu;
        goto label_1bdc8c;
    }
    ctx->pc = 0x1BDC84u;
    {
        const bool branch_taken_0x1bdc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC84u;
        // 0x1bdc88: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc84) {
            ctx->pc = 0x1BDC98u;
            goto label_1bdc98;
        }
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0xc6010770  lwc1        $f1, 0x770($s0)
    ctx->pc = 0x1bdc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bdc90:
    // 0x1bdc90: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bdc94:
    if (ctx->pc == 0x1BDC94u) {
        ctx->pc = 0x1BDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC90u;
        // 0x1bdc94: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC98u;
        goto label_1bdc98;
    }
    ctx->pc = 0x1BDC90u;
    {
        const bool branch_taken_0x1bdc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC90u;
        // 0x1bdc94: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc90) {
            ctx->pc = 0x1BDCA0u;
            goto label_1bdca0;
        }
    }
    ctx->pc = 0x1BDC98u;
label_1bdc98:
    // 0x1bdc98: 0xc6010770  lwc1        $f1, 0x770($s0)
    ctx->pc = 0x1bdc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bdc9c:
    // 0x1bdc9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bdc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bdca0:
    // 0x1bdca0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bdca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bdca4:
    // 0x1bdca4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bdca8:
    // 0x1bdca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bdca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcac:
    // 0x1bdcac: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1bdcb0:
    // 0x1bdcb0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1bdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1bdcb4:
    // 0x1bdcb4: 0x60f809  jalr        $v1
label_1bdcb8:
    if (ctx->pc == 0x1BDCB8u) {
        ctx->pc = 0x1BDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCB4u;
        // 0x1bdcb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCBCu;
        goto label_1bdcbc;
    }
    ctx->pc = 0x1BDCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDCBCu);
        ctx->pc = 0x1BDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCB4u;
        // 0x1bdcb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCB4u, 0x1BDCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDCBCu;
label_1bdcbc:
    // 0x1bdcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdcc0:
    // 0x1bdcc0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bdcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bdcc4:
    // 0x1bdcc4: 0xa2020774  sb          $v0, 0x774($s0)
    ctx->pc = 0x1bdcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1908), (uint8_t)GPR_U32(ctx, 2));
label_1bdcc8:
    // 0x1bdcc8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bdcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1bdccc:
    // 0x1bdccc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bdcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bdcd0:
    // 0x1bdcd0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bdcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bdcd4:
    // 0x1bdcd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bdcd8:
    // 0x1bdcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdcdc:
    // 0x1bdcdc: 0x3e00008  jr          $ra
label_1bdce0:
    if (ctx->pc == 0x1BDCE0u) {
        ctx->pc = 0x1BDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCDCu;
        // 0x1bdce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCE4u;
        goto label_1bdce4;
    }
    ctx->pc = 0x1BDCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCDCu;
        // 0x1bdce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDCE4u;
label_1bdce4:
    // 0x1bdce4: 0x0  nop
    ctx->pc = 0x1bdce4u;
    // NOP
    ctx->pc = 0x1bdce8u;
}
