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

// Function: func_0026EB20
// Address: 0x26eb20 - 0x26ec60
void func_0026EB20_0x26eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EB20_0x26eb20");
#endif

    switch (ctx->pc) {
        case 0x26eb78u: goto label_26eb78;
        case 0x26eb80u: goto label_26eb80;
        case 0x26eba8u: goto label_26eba8;
        case 0x26ebb4u: goto label_26ebb4;
        case 0x26ebccu: goto label_26ebcc;
        case 0x26ebd8u: goto label_26ebd8;
        default: break;
    }

    ctx->pc = 0x26eb20u;

    // 0x26eb20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26eb24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26eb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26eb28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26eb2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26eb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26eb34: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26eb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26eb38: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x26eb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x26eb3c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x26eb40: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26EB40u;
    {
        const bool branch_taken_0x26eb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb40) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26EB48u;
    // 0x26eb48: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26eb4c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26eb50: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x26eb54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26eb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb58: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x26eb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x26eb5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26eb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26eb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb64: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26eb68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26eb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26eb70: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26EB70u;
    SET_GPR_U32(ctx, 31, 0x26EB78u);
    ctx->pc = 0x26EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB70u;
    // 0x26eb74: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26EB70u, 0x26EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB78u;
label_26eb78:
    // 0x26eb78: 0xc0b6db4  jal         func_2DB6D0
    ctx->pc = 0x26EB78u;
    SET_GPR_U32(ctx, 31, 0x26EB80u);
    ctx->pc = 0x26EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB78u;
    // 0x26eb7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6D0u, 0x26EB78u, 0x26EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB80u;
label_26eb80:
    // 0x26eb80: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x26eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x26eb84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26eb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26eb88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26eb8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26eb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb90: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26eb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26eb94: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26eb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26eb98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26eb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb9c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26eba0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26EBA0u;
    SET_GPR_U32(ctx, 31, 0x26EBA8u);
    ctx->pc = 0x26EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBA0u;
    // 0x26eba4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26EBA0u, 0x26EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBA8u;
label_26eba8:
    // 0x26eba8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26eba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ebac: 0xc0b6db4  jal         func_2DB6D0
    ctx->pc = 0x26EBACu;
    SET_GPR_U32(ctx, 31, 0x26EBB4u);
    ctx->pc = 0x26EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBACu;
    // 0x26ebb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6D0u, 0x26EBACu, 0x26EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBB4u;
label_26ebb4:
    // 0x26ebb4: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x26ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebbc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ebc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebc4: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26EBC4u;
    SET_GPR_U32(ctx, 31, 0x26EBCCu);
    ctx->pc = 0x26EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBC4u;
    // 0x26ebc8: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26EBC4u, 0x26EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBCCu;
label_26ebcc:
    // 0x26ebcc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x26ebccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x26ebd0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26EBD0u;
    SET_GPR_U32(ctx, 31, 0x26EBD8u);
    ctx->pc = 0x26EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBD0u;
    // 0x26ebd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26EBD0u, 0x26EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBD8u;
label_26ebd8:
    // 0x26ebd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EBD8u;
    {
        const bool branch_taken_0x26ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBD8u;
        // 0x26ebdc: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebd8) {
            ctx->pc = 0x26EBE4u;
            goto label_26ebe4;
        }
    }
    ctx->pc = 0x26EBE0u;
label_26ebe0:
    // 0x26ebe0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x26ebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26ebe4:
    // 0x26ebe4: 0xc6201708  lwc1        $f0, 0x1708($s1)
    ctx->pc = 0x26ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ebe8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x26ebe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x26ebec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26ebecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x26ebf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26ebf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ebf4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26ebf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ebf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26ebfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ebfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ec00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26ec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26ec04: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x26ec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x26ec08: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x26ec08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26ec0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26ec0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ec10: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x26ec10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec14: 0xe6211708  swc1        $f1, 0x1708($s1)
    ctx->pc = 0x26ec14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5896), bits); }
    // 0x26ec18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26EC18u;
    {
        const bool branch_taken_0x26ec18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC18u;
        // 0x26ec1c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec18) {
            ctx->pc = 0x26EC24u;
            goto label_26ec24;
        }
    }
    ctx->pc = 0x26EC20u;
    // 0x26ec20: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x26ec20u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_26ec24:
    // 0x26ec24: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26ec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26ec28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ec28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26ec2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ec2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec30: 0x0  nop
    ctx->pc = 0x26ec30u;
    // NOP
    // 0x26ec34: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26ec34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec38: 0x0  nop
    ctx->pc = 0x26ec38u;
    // NOP
    // 0x26ec3c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x26EC3Cu;
    {
        const bool branch_taken_0x26ec3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ec3c) {
            ctx->pc = 0x26EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EC3Cu;
            // 0x26ec40: 0xe6210100  swc1        $f1, 0x100($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC48u;
            goto label_26ec48;
        }
    }
    ctx->pc = 0x26EC44u;
    // 0x26ec44: 0xe6231708  swc1        $f3, 0x1708($s1)
    ctx->pc = 0x26ec44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5896), bits); }
label_26ec48:
    // 0x26ec48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26ec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ec4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26ec4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ec50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ec50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ec54: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC58u;
        // 0x26ec5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EC60u;
}
