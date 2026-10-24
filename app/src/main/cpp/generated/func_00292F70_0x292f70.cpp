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

// Function: func_00292F70
// Address: 0x292f70 - 0x2930a8
void func_00292F70_0x292f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00292F70_0x292f70");
#endif

    switch (ctx->pc) {
        case 0x292f90u: goto label_292f90;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fecu: goto label_292fec;
        case 0x293008u: goto label_293008;
        default: break;
    }

    ctx->pc = 0x292f70u;

    // 0x292f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292f74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292f78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x292f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x292f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x292f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x292f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292f88: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x292F88u;
    SET_GPR_U32(ctx, 31, 0x292F90u);
    ctx->pc = 0x292F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F88u;
    // 0x292f8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292F88u, 0x292F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F90u;
label_292f90:
    // 0x292f90: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x292f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x292f94: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x292F94u;
    SET_GPR_U32(ctx, 31, 0x292F9Cu);
    ctx->pc = 0x292F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F94u;
    // 0x292f98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x292F94u, 0x292F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F9Cu;
label_292f9c:
    // 0x292f9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x292f9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x292fa0: 0x3c01404f  lui         $at, 0x404F
    ctx->pc = 0x292fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16463 << 16));
    // 0x292fa4: 0x34215c28  ori         $at, $at, 0x5C28
    ctx->pc = 0x292fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23592);
    // 0x292fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292fac: 0x0  nop
    ctx->pc = 0x292facu;
    // NOP
    // 0x292fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292fb4: 0x0  nop
    ctx->pc = 0x292fb4u;
    // NOP
    // 0x292fb8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x292FB8u;
    {
        const bool branch_taken_0x292fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB8u;
        // 0x292fbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fb8) {
            ctx->pc = 0x293090u;
            goto label_293090;
        }
    }
    ctx->pc = 0x292FC0u;
    // 0x292fc0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x292fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x292fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292fc8: 0x0  nop
    ctx->pc = 0x292fc8u;
    // NOP
    // 0x292fcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292fd0: 0x0  nop
    ctx->pc = 0x292fd0u;
    // NOP
    // 0x292fd4: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
    ctx->pc = 0x292FD4u;
    {
        const bool branch_taken_0x292fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292fd4) {
            ctx->pc = 0x292FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292FD4u;
            // 0x292fd8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293094u;
            goto label_293094;
        }
    }
    ctx->pc = 0x292FDCu;
    // 0x292fdc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x292FDCu;
    SET_GPR_U32(ctx, 31, 0x292FE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292FDCu, 0x292FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FE4u;
label_292fe4:
    // 0x292fe4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x292FE4u;
    SET_GPR_U32(ctx, 31, 0x292FECu);
    ctx->pc = 0x292FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FE4u;
    // 0x292fe8: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292FE4u, 0x292FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FECu;
label_292fec:
    // 0x292fec: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x292fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ff4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x292ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x292ff8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x292ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x292ffc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x292ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293000: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x293000u;
    SET_GPR_U32(ctx, 31, 0x293008u);
    ctx->pc = 0x293004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293000u;
    // 0x293004: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x293000u, 0x293008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293008u;
label_293008:
    // 0x293008: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x293008u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x29300c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29300cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293010: 0x0  nop
    ctx->pc = 0x293010u;
    // NOP
    // 0x293014: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x293014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293018: 0x0  nop
    ctx->pc = 0x293018u;
    // NOP
    // 0x29301c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29301Cu;
    {
        const bool branch_taken_0x29301c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29301Cu;
        // 0x293020: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29301c) {
            ctx->pc = 0x293028u;
            goto label_293028;
        }
    }
    ctx->pc = 0x293024u;
    // 0x293024: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x293024u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_293028:
    // 0x293028: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x293028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x29302c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29302cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x293030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293034: 0x0  nop
    ctx->pc = 0x293034u;
    // NOP
    // 0x293038: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x293038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29303c: 0x0  nop
    ctx->pc = 0x29303cu;
    // NOP
    // 0x293040: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x293040u;
    {
        const bool branch_taken_0x293040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x293044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293040u;
        // 0x293044: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293040) {
            ctx->pc = 0x293090u;
            goto label_293090;
        }
    }
    ctx->pc = 0x293048u;
    // 0x293048: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x29304c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x29304cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x293050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293054: 0x0  nop
    ctx->pc = 0x293054u;
    // NOP
    // 0x293058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x293058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29305c: 0x0  nop
    ctx->pc = 0x29305cu;
    // NOP
    // 0x293060: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x293060u;
    {
        const bool branch_taken_0x293060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293060u;
        // 0x293064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293060) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x293068u;
    // 0x293068: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x293068u;
    {
        const bool branch_taken_0x293068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293068u;
        // 0x29306c: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293068) {
            ctx->pc = 0x293090u;
            goto label_293090;
        }
    }
    ctx->pc = 0x293070u;
label_293070:
    // 0x293070: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x293070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293074: 0x0  nop
    ctx->pc = 0x293074u;
    // NOP
    // 0x293078: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x293078u;
    {
        const bool branch_taken_0x293078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293078) {
            ctx->pc = 0x29307Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293078u;
            // 0x29307c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293088u;
            goto label_293088;
        }
    }
    ctx->pc = 0x293080u;
    // 0x293080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x293080u;
    {
        const bool branch_taken_0x293080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293080u;
        // 0x293084: 0xae220554  sw          $v0, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293080) {
            ctx->pc = 0x29308Cu;
            goto label_29308c;
        }
    }
    ctx->pc = 0x293088u;
label_293088:
    // 0x293088: 0xae220558  sw          $v0, 0x558($s1)
    ctx->pc = 0x293088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 2));
label_29308c:
    // 0x29308c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29308cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_293090:
    // 0x293090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x293090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_293094:
    // 0x293094: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x293094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29309c: 0x3e00008  jr          $ra
    ctx->pc = 0x29309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29309Cu;
        // 0x2930a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930A4u;
    // 0x2930a4: 0x0  nop
    ctx->pc = 0x2930a4u;
    // NOP
    ctx->pc = 0x2930a8u;
}
