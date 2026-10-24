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

// Function: cOmDoor2_setCloseFix
// Address: 0x1bdce8 - 0x1bdd88
void cOmDoor2_setCloseFix_0x1bdce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor2_setCloseFix_0x1bdce8");
#endif

    switch (ctx->pc) {
        case 0x1bdce8u: goto label_1bdce8;
        case 0x1bdcecu: goto label_1bdcec;
        case 0x1bdcf0u: goto label_1bdcf0;
        case 0x1bdcf4u: goto label_1bdcf4;
        case 0x1bdcf8u: goto label_1bdcf8;
        case 0x1bdcfcu: goto label_1bdcfc;
        case 0x1bdd00u: goto label_1bdd00;
        case 0x1bdd04u: goto label_1bdd04;
        case 0x1bdd08u: goto label_1bdd08;
        case 0x1bdd0cu: goto label_1bdd0c;
        case 0x1bdd10u: goto label_1bdd10;
        case 0x1bdd14u: goto label_1bdd14;
        case 0x1bdd18u: goto label_1bdd18;
        case 0x1bdd1cu: goto label_1bdd1c;
        case 0x1bdd20u: goto label_1bdd20;
        case 0x1bdd24u: goto label_1bdd24;
        case 0x1bdd28u: goto label_1bdd28;
        case 0x1bdd2cu: goto label_1bdd2c;
        case 0x1bdd30u: goto label_1bdd30;
        case 0x1bdd34u: goto label_1bdd34;
        case 0x1bdd38u: goto label_1bdd38;
        case 0x1bdd3cu: goto label_1bdd3c;
        case 0x1bdd40u: goto label_1bdd40;
        case 0x1bdd44u: goto label_1bdd44;
        case 0x1bdd48u: goto label_1bdd48;
        case 0x1bdd4cu: goto label_1bdd4c;
        case 0x1bdd50u: goto label_1bdd50;
        case 0x1bdd54u: goto label_1bdd54;
        case 0x1bdd58u: goto label_1bdd58;
        case 0x1bdd5cu: goto label_1bdd5c;
        case 0x1bdd60u: goto label_1bdd60;
        case 0x1bdd64u: goto label_1bdd64;
        case 0x1bdd68u: goto label_1bdd68;
        case 0x1bdd6cu: goto label_1bdd6c;
        case 0x1bdd70u: goto label_1bdd70;
        case 0x1bdd74u: goto label_1bdd74;
        case 0x1bdd78u: goto label_1bdd78;
        case 0x1bdd7cu: goto label_1bdd7c;
        case 0x1bdd80u: goto label_1bdd80;
        case 0x1bdd84u: goto label_1bdd84;
        default: break;
    }

    ctx->pc = 0x1bdce8u;

label_1bdce8:
    // 0x1bdce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bdcec:
    // 0x1bdcec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdcf0:
    // 0x1bdcf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bdcf4:
    // 0x1bdcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bdcf8:
    // 0x1bdcf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcfc:
    // 0x1bdcfc: 0x92020774  lbu         $v0, 0x774($s0)
    ctx->pc = 0x1bdcfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1908)));
label_1bdd00:
    // 0x1bdd00: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
label_1bdd04:
    if (ctx->pc == 0x1BDD04u) {
        ctx->pc = 0x1BDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD00u;
        // 0x1bdd04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD08u;
        goto label_1bdd08;
    }
    ctx->pc = 0x1BDD00u;
    {
        const bool branch_taken_0x1bdd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdd00) {
            ctx->pc = 0x1BDD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDD00u;
            // 0x1bdd04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDD78u;
            goto label_1bdd78;
        }
    }
    ctx->pc = 0x1BDD08u;
label_1bdd08:
    // 0x1bdd08: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bdd0c:
    // 0x1bdd0c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bdd0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bdd10:
    // 0x1bdd10: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bdd14:
    // 0x1bdd14: 0x40f809  jalr        $v0
label_1bdd18:
    if (ctx->pc == 0x1BDD18u) {
        ctx->pc = 0x1BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD14u;
        // 0x1bdd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD1Cu;
        goto label_1bdd1c;
    }
    ctx->pc = 0x1BDD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDD1Cu);
        ctx->pc = 0x1BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD14u;
        // 0x1bdd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD14u, 0x1BDD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDD1Cu;
label_1bdd1c:
    // 0x1bdd1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bdd1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bdd20:
    // 0x1bdd20: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bdd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bdd24:
    // 0x1bdd24: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x1bdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
label_1bdd28:
    // 0x1bdd28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bdd2c:
    if (ctx->pc == 0x1BDD2Cu) {
        ctx->pc = 0x1BDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD28u;
        // 0x1bdd2c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD30u;
        goto label_1bdd30;
    }
    ctx->pc = 0x1BDD28u;
    {
        const bool branch_taken_0x1bdd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD28u;
        // 0x1bdd2c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd28) {
            ctx->pc = 0x1BDD3Cu;
            goto label_1bdd3c;
        }
    }
    ctx->pc = 0x1BDD30u;
label_1bdd30:
    // 0x1bdd30: 0xc6010770  lwc1        $f1, 0x770($s0)
    ctx->pc = 0x1bdd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bdd34:
    // 0x1bdd34: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bdd38:
    if (ctx->pc == 0x1BDD38u) {
        ctx->pc = 0x1BDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD34u;
        // 0x1bdd38: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD3Cu;
        goto label_1bdd3c;
    }
    ctx->pc = 0x1BDD34u;
    {
        const bool branch_taken_0x1bdd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD34u;
        // 0x1bdd38: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd34) {
            ctx->pc = 0x1BDD44u;
            goto label_1bdd44;
        }
    }
    ctx->pc = 0x1BDD3Cu;
label_1bdd3c:
    // 0x1bdd3c: 0xc6010770  lwc1        $f1, 0x770($s0)
    ctx->pc = 0x1bdd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bdd40:
    // 0x1bdd40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bdd44:
    // 0x1bdd44: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bdd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bdd48:
    // 0x1bdd48: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bdd4c:
    // 0x1bdd4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bdd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bdd50:
    // 0x1bdd50: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1bdd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1bdd54:
    // 0x1bdd54: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1bdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1bdd58:
    // 0x1bdd58: 0x60f809  jalr        $v1
label_1bdd5c:
    if (ctx->pc == 0x1BDD5Cu) {
        ctx->pc = 0x1BDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD58u;
        // 0x1bdd5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD60u;
        goto label_1bdd60;
    }
    ctx->pc = 0x1BDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDD60u);
        ctx->pc = 0x1BDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD58u;
        // 0x1bdd5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD58u, 0x1BDD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDD60u;
label_1bdd60:
    // 0x1bdd60: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bdd60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bdd64:
    // 0x1bdd64: 0xa2000774  sb          $zero, 0x774($s0)
    ctx->pc = 0x1bdd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1908), (uint8_t)GPR_U32(ctx, 0));
label_1bdd68:
    // 0x1bdd68: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bdd68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1bdd6c:
    // 0x1bdd6c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bdd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bdd70:
    // 0x1bdd70: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bdd70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bdd74:
    // 0x1bdd74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdd74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bdd78:
    // 0x1bdd78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdd7c:
    // 0x1bdd7c: 0x3e00008  jr          $ra
label_1bdd80:
    if (ctx->pc == 0x1BDD80u) {
        ctx->pc = 0x1BDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD7Cu;
        // 0x1bdd80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD84u;
        goto label_1bdd84;
    }
    ctx->pc = 0x1BDD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD7Cu;
        // 0x1bdd80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD84u;
label_1bdd84:
    // 0x1bdd84: 0x0  nop
    ctx->pc = 0x1bdd84u;
    // NOP
    ctx->pc = 0x1bdd88u;
}
