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

// Function: cDamageUnit_AddDamageCollCylinder
// Address: 0x1fdc00 - 0x1fdd38
void cDamageUnit_AddDamageCollCylinder_0x1fdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_AddDamageCollCylinder_0x1fdc00");
#endif

    switch (ctx->pc) {
        case 0x1fdc00u: goto label_1fdc00;
        case 0x1fdc04u: goto label_1fdc04;
        case 0x1fdc08u: goto label_1fdc08;
        case 0x1fdc0cu: goto label_1fdc0c;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc14u: goto label_1fdc14;
        case 0x1fdc18u: goto label_1fdc18;
        case 0x1fdc1cu: goto label_1fdc1c;
        case 0x1fdc20u: goto label_1fdc20;
        case 0x1fdc24u: goto label_1fdc24;
        case 0x1fdc28u: goto label_1fdc28;
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc30u: goto label_1fdc30;
        case 0x1fdc34u: goto label_1fdc34;
        case 0x1fdc38u: goto label_1fdc38;
        case 0x1fdc3cu: goto label_1fdc3c;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdc44u: goto label_1fdc44;
        case 0x1fdc48u: goto label_1fdc48;
        case 0x1fdc4cu: goto label_1fdc4c;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdc54u: goto label_1fdc54;
        case 0x1fdc58u: goto label_1fdc58;
        case 0x1fdc5cu: goto label_1fdc5c;
        case 0x1fdc60u: goto label_1fdc60;
        case 0x1fdc64u: goto label_1fdc64;
        case 0x1fdc68u: goto label_1fdc68;
        case 0x1fdc6cu: goto label_1fdc6c;
        case 0x1fdc70u: goto label_1fdc70;
        case 0x1fdc74u: goto label_1fdc74;
        case 0x1fdc78u: goto label_1fdc78;
        case 0x1fdc7cu: goto label_1fdc7c;
        case 0x1fdc80u: goto label_1fdc80;
        case 0x1fdc84u: goto label_1fdc84;
        case 0x1fdc88u: goto label_1fdc88;
        case 0x1fdc8cu: goto label_1fdc8c;
        case 0x1fdc90u: goto label_1fdc90;
        case 0x1fdc94u: goto label_1fdc94;
        case 0x1fdc98u: goto label_1fdc98;
        case 0x1fdc9cu: goto label_1fdc9c;
        case 0x1fdca0u: goto label_1fdca0;
        case 0x1fdca4u: goto label_1fdca4;
        case 0x1fdca8u: goto label_1fdca8;
        case 0x1fdcacu: goto label_1fdcac;
        case 0x1fdcb0u: goto label_1fdcb0;
        case 0x1fdcb4u: goto label_1fdcb4;
        case 0x1fdcb8u: goto label_1fdcb8;
        case 0x1fdcbcu: goto label_1fdcbc;
        case 0x1fdcc0u: goto label_1fdcc0;
        case 0x1fdcc4u: goto label_1fdcc4;
        case 0x1fdcc8u: goto label_1fdcc8;
        case 0x1fdcccu: goto label_1fdccc;
        case 0x1fdcd0u: goto label_1fdcd0;
        case 0x1fdcd4u: goto label_1fdcd4;
        case 0x1fdcd8u: goto label_1fdcd8;
        case 0x1fdcdcu: goto label_1fdcdc;
        case 0x1fdce0u: goto label_1fdce0;
        case 0x1fdce4u: goto label_1fdce4;
        case 0x1fdce8u: goto label_1fdce8;
        case 0x1fdcecu: goto label_1fdcec;
        case 0x1fdcf0u: goto label_1fdcf0;
        case 0x1fdcf4u: goto label_1fdcf4;
        case 0x1fdcf8u: goto label_1fdcf8;
        case 0x1fdcfcu: goto label_1fdcfc;
        case 0x1fdd00u: goto label_1fdd00;
        case 0x1fdd04u: goto label_1fdd04;
        case 0x1fdd08u: goto label_1fdd08;
        case 0x1fdd0cu: goto label_1fdd0c;
        case 0x1fdd10u: goto label_1fdd10;
        case 0x1fdd14u: goto label_1fdd14;
        case 0x1fdd18u: goto label_1fdd18;
        case 0x1fdd1cu: goto label_1fdd1c;
        case 0x1fdd20u: goto label_1fdd20;
        case 0x1fdd24u: goto label_1fdd24;
        case 0x1fdd28u: goto label_1fdd28;
        case 0x1fdd2cu: goto label_1fdd2c;
        case 0x1fdd30u: goto label_1fdd30;
        case 0x1fdd34u: goto label_1fdd34;
        default: break;
    }

    ctx->pc = 0x1fdc00u;

label_1fdc00:
    // 0x1fdc00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fdc04:
    // 0x1fdc04: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fdc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1fdc08:
    // 0x1fdc08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fdc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fdc0c:
    // 0x1fdc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc10:
    // 0x1fdc10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fdc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1fdc14:
    // 0x1fdc14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fdc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc18:
    // 0x1fdc18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fdc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1fdc1c:
    // 0x1fdc1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fdc1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc20:
    // 0x1fdc20: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1fdc20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1fdc24:
    // 0x1fdc24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fdc24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc28:
    // 0x1fdc28: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1fdc28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1fdc2c:
    // 0x1fdc2c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1fdc2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1fdc30:
    // 0x1fdc30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fdc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1fdc34:
    // 0x1fdc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fdc38:
    // 0x1fdc38: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1fdc38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1fdc3c:
    // 0x1fdc3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fdc40:
    if (ctx->pc == 0x1FDC40u) {
        ctx->pc = 0x1FDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC3Cu;
        // 0x1fdc40: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC44u;
        goto label_1fdc44;
    }
    ctx->pc = 0x1FDC3Cu;
    {
        const bool branch_taken_0x1fdc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC3Cu;
        // 0x1fdc40: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc3c) {
            ctx->pc = 0x1FDC74u;
            goto label_1fdc74;
        }
    }
    ctx->pc = 0x1FDC44u;
label_1fdc44:
    // 0x1fdc44: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1fdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1fdc48:
    // 0x1fdc48: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fdc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fdc4c:
    // 0x1fdc4c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fdc50:
    // 0x1fdc50: 0x40f809  jalr        $v0
label_1fdc54:
    if (ctx->pc == 0x1FDC54u) {
        ctx->pc = 0x1FDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC50u;
        // 0x1fdc54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC58u;
        goto label_1fdc58;
    }
    ctx->pc = 0x1FDC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDC58u);
        ctx->pc = 0x1FDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC50u;
        // 0x1fdc54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC50u, 0x1FDC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDC58u;
label_1fdc58:
    // 0x1fdc58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fdc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc5c:
    // 0x1fdc5c: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_1fdc60:
    if (ctx->pc == 0x1FDC60u) {
        ctx->pc = 0x1FDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC5Cu;
        // 0x1fdc60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC64u;
        goto label_1fdc64;
    }
    ctx->pc = 0x1FDC5Cu;
    {
        const bool branch_taken_0x1fdc5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC5Cu;
        // 0x1fdc60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc5c) {
            ctx->pc = 0x1FDD04u;
            goto label_1fdd04;
        }
    }
    ctx->pc = 0x1FDC64u;
label_1fdc64:
    // 0x1fdc64: 0xc07f642  jal         func_1FD908
label_1fdc68:
    if (ctx->pc == 0x1FDC68u) {
        ctx->pc = 0x1FDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC64u;
        // 0x1fdc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC6Cu;
        goto label_1fdc6c;
    }
    ctx->pc = 0x1FDC64u;
    SET_GPR_U32(ctx, 31, 0x1FDC6Cu);
    ctx->pc = 0x1FDC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC64u;
    // 0x1fdc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDC64u, 0x1FDC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC6Cu;
label_1fdc6c:
    // 0x1fdc6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fdc70:
    if (ctx->pc == 0x1FDC70u) {
        ctx->pc = 0x1FDC74u;
        goto label_1fdc74;
    }
    ctx->pc = 0x1FDC6Cu;
    {
        const bool branch_taken_0x1fdc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc6c) {
            ctx->pc = 0x1FDC7Cu;
            goto label_1fdc7c;
        }
    }
    ctx->pc = 0x1FDC74u;
label_1fdc74:
    // 0x1fdc74: 0x10000023  b           . + 4 + (0x23 << 2)
label_1fdc78:
    if (ctx->pc == 0x1FDC78u) {
        ctx->pc = 0x1FDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC74u;
        // 0x1fdc78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC7Cu;
        goto label_1fdc7c;
    }
    ctx->pc = 0x1FDC74u;
    {
        const bool branch_taken_0x1fdc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC74u;
        // 0x1fdc78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc74) {
            ctx->pc = 0x1FDD04u;
            goto label_1fdd04;
        }
    }
    ctx->pc = 0x1FDC7Cu;
label_1fdc7c:
    // 0x1fdc7c: 0xc07f642  jal         func_1FD908
label_1fdc80:
    if (ctx->pc == 0x1FDC80u) {
        ctx->pc = 0x1FDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC7Cu;
        // 0x1fdc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC84u;
        goto label_1fdc84;
    }
    ctx->pc = 0x1FDC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FDC84u);
    ctx->pc = 0x1FDC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC7Cu;
    // 0x1fdc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDC7Cu, 0x1FDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC84u;
label_1fdc84:
    // 0x1fdc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc88:
    // 0x1fdc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc8c:
    // 0x1fdc8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fdc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc90:
    // 0x1fdc90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1fdc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc94:
    // 0x1fdc94: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fdc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc98:
    // 0x1fdc98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fdc98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fdc9c:
    // 0x1fdc9c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1fdc9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1fdca0:
    // 0x1fdca0: 0xc07f2ba  jal         func_1FCAE8
label_1fdca4:
    if (ctx->pc == 0x1FDCA4u) {
        ctx->pc = 0x1FDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCA0u;
        // 0x1fdca4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCA8u;
        goto label_1fdca8;
    }
    ctx->pc = 0x1FDCA0u;
    SET_GPR_U32(ctx, 31, 0x1FDCA8u);
    ctx->pc = 0x1FDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDCA0u;
    // 0x1fdca4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCAE8u, 0x1FDCA0u, 0x1FDCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDCA8u;
label_1fdca8:
    // 0x1fdca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdcac:
    // 0x1fdcac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdcb0:
    // 0x1fdcb0: 0x50820015  beql        $a0, $v0, . + 4 + (0x15 << 2)
label_1fdcb4:
    if (ctx->pc == 0x1FDCB4u) {
        ctx->pc = 0x1FDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCB0u;
        // 0x1fdcb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCB8u;
        goto label_1fdcb8;
    }
    ctx->pc = 0x1FDCB0u;
    {
        const bool branch_taken_0x1fdcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdcb0) {
            ctx->pc = 0x1FDCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDCB0u;
            // 0x1fdcb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD08u;
            goto label_1fdd08;
        }
    }
    ctx->pc = 0x1FDCB8u;
label_1fdcb8:
    // 0x1fdcb8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fdcbc:
    // 0x1fdcbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1fdcc0:
    if (ctx->pc == 0x1FDCC0u) {
        ctx->pc = 0x1FDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCBCu;
        // 0x1fdcc0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCC4u;
        goto label_1fdcc4;
    }
    ctx->pc = 0x1FDCBCu;
    {
        const bool branch_taken_0x1fdcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCBCu;
        // 0x1fdcc0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcbc) {
            ctx->pc = 0x1FDCFCu;
            goto label_1fdcfc;
        }
    }
    ctx->pc = 0x1FDCC4u;
label_1fdcc4:
    // 0x1fdcc4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdcc8:
    // 0x1fdcc8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1fdccc:
    if (ctx->pc == 0x1FDCCCu) {
        ctx->pc = 0x1FDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCC8u;
        // 0x1fdccc: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCD0u;
        goto label_1fdcd0;
    }
    ctx->pc = 0x1FDCC8u;
    {
        const bool branch_taken_0x1fdcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcc8) {
            ctx->pc = 0x1FDCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDCC8u;
            // 0x1fdccc: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDCF4u;
            goto label_1fdcf4;
        }
    }
    ctx->pc = 0x1FDCD0u;
label_1fdcd0:
    // 0x1fdcd0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdcd4:
    // 0x1fdcd4: 0x0  nop
    ctx->pc = 0x1fdcd4u;
    // NOP
label_1fdcd8:
    // 0x1fdcd8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdcdc:
    // 0x1fdcdc: 0x0  nop
    ctx->pc = 0x1fdcdcu;
    // NOP
label_1fdce0:
    // 0x1fdce0: 0x0  nop
    ctx->pc = 0x1fdce0u;
    // NOP
label_1fdce4:
    // 0x1fdce4: 0x0  nop
    ctx->pc = 0x1fdce4u;
    // NOP
label_1fdce8:
    // 0x1fdce8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1fdcec:
    if (ctx->pc == 0x1FDCECu) {
        ctx->pc = 0x1FDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCE8u;
        // 0x1fdcec: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCF0u;
        goto label_1fdcf0;
    }
    ctx->pc = 0x1FDCE8u;
    {
        const bool branch_taken_0x1fdce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdce8) {
            ctx->pc = 0x1FDCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDCE8u;
            // 0x1fdcec: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdcd8;
        }
    }
    ctx->pc = 0x1FDCF0u;
label_1fdcf0:
    // 0x1fdcf0: 0xac710024  sw          $s1, 0x24($v1)
    ctx->pc = 0x1fdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
label_1fdcf4:
    // 0x1fdcf4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdcf8:
    if (ctx->pc == 0x1FDCF8u) {
        ctx->pc = 0x1FDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF4u;
        // 0x1fdcf8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCFCu;
        goto label_1fdcfc;
    }
    ctx->pc = 0x1FDCF4u;
    {
        const bool branch_taken_0x1fdcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF4u;
        // 0x1fdcf8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf4) {
            ctx->pc = 0x1FDD00u;
            goto label_1fdd00;
        }
    }
    ctx->pc = 0x1FDCFCu;
label_1fdcfc:
    // 0x1fdcfc: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1fdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_1fdd00:
    // 0x1fdd00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fdd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd04:
    // 0x1fdd04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fdd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdd08:
    // 0x1fdd08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fdd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdd0c:
    // 0x1fdd0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fdd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdd10:
    // 0x1fdd10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fdd10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdd14:
    // 0x1fdd14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fdd14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdd18:
    // 0x1fdd18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdd1c:
    // 0x1fdd1c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1fdd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fdd20:
    // 0x1fdd20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1fdd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fdd24:
    // 0x1fdd24: 0x3e00008  jr          $ra
label_1fdd28:
    if (ctx->pc == 0x1FDD28u) {
        ctx->pc = 0x1FDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD24u;
        // 0x1fdd28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD2Cu;
        goto label_1fdd2c;
    }
    ctx->pc = 0x1FDD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD24u;
        // 0x1fdd28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDD2Cu;
label_1fdd2c:
    // 0x1fdd2c: 0x0  nop
    ctx->pc = 0x1fdd2cu;
    // NOP
label_1fdd30:
    // 0x1fdd30: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fdd34:
    // 0x1fdd34: 0x0  nop
    ctx->pc = 0x1fdd34u;
    // NOP
    ctx->pc = 0x1fdd38u;
}
