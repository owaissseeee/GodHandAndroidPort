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

// Function: func_002A8EF0
// Address: 0x2a8ef0 - 0x2a9098
void func_002A8EF0_0x2a8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A8EF0_0x2a8ef0");
#endif

    switch (ctx->pc) {
        case 0x2a8f30u: goto label_2a8f30;
        case 0x2a8f50u: goto label_2a8f50;
        case 0x2a9040u: goto label_2a9040;
        case 0x2a905cu: goto label_2a905c;
        default: break;
    }

    ctx->pc = 0x2a8ef0u;

label_2a8ef0:
    // 0x2a8ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a8ef4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a8ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a8ef8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a8efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a8efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a8f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a8f08: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x2a8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2a8f0c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a8f10: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a8f10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a8f14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a8f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a8f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8f1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a8f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f20: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2a8f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a8f24: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2A8F24u;
    {
        const bool branch_taken_0x2a8f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F24u;
        // 0x2a8f28: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f24) {
            ctx->pc = 0x2A9074u;
            goto label_2a9074;
        }
    }
    ctx->pc = 0x2A8F2Cu;
    // 0x2a8f2c: 0x0  nop
    ctx->pc = 0x2a8f2cu;
    // NOP
label_2a8f30:
    // 0x2a8f30: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8F30u;
    {
        const bool branch_taken_0x2a8f30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F30u;
        // 0x2a8f34: 0x2511023  subu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f30) {
            ctx->pc = 0x2A8F58u;
            goto label_2a8f58;
        }
    }
    ctx->pc = 0x2A8F38u;
    // 0x2a8f38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a8f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f40: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a8f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a8f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f48: 0xc0aa34c  jal         func_2A8D30
    ctx->pc = 0x2A8F48u;
    SET_GPR_U32(ctx, 31, 0x2A8F50u);
    ctx->pc = 0x2A8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F48u;
    // 0x2a8f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D30u, 0x2A8F48u, 0x2A8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F50u;
label_2a8f50:
    // 0x2a8f50: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2A8F50u;
    {
        const bool branch_taken_0x2a8f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F50u;
        // 0x2a8f54: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f50) {
            ctx->pc = 0x2A9078u;
            goto label_2a9078;
        }
    }
    ctx->pc = 0x2A8F58u;
label_2a8f58:
    // 0x2a8f58: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2a8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f5c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8f60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2a8f64: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a8f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a8f68: 0x2644fff8  addiu       $a0, $s2, -0x8
    ctx->pc = 0x2a8f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x2a8f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8f70: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8f74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a8f78: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a8f7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f80: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a8f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8f84: 0x0  nop
    ctx->pc = 0x2a8f84u;
    // NOP
    // 0x2a8f88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8F88u;
    {
        const bool branch_taken_0x2a8f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F88u;
        // 0x2a8f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f88) {
            ctx->pc = 0x2A8F94u;
            goto label_2a8f94;
        }
    }
    ctx->pc = 0x2A8F90u;
    // 0x2a8f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f94:
    // 0x2a8f94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a8f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8F98u;
    {
        const bool branch_taken_0x2a8f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F98u;
        // 0x2a8f9c: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f98) {
            ctx->pc = 0x2A8FD8u;
            goto label_2a8fd8;
        }
    }
    ctx->pc = 0x2A8FA0u;
    // 0x2a8fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fa4: 0x0  nop
    ctx->pc = 0x2a8fa4u;
    // NOP
    // 0x2a8fa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8FA8u;
    {
        const bool branch_taken_0x2a8fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA8u;
        // 0x2a8fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fa8) {
            ctx->pc = 0x2A8FB4u;
            goto label_2a8fb4;
        }
    }
    ctx->pc = 0x2A8FB0u;
    // 0x2a8fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fb4:
    // 0x2a8fb4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8FB4u;
    {
        const bool branch_taken_0x2a8fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FB4u;
        // 0x2a8fb8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fb4) {
            ctx->pc = 0x2A9010u;
            goto label_2a9010;
        }
    }
    ctx->pc = 0x2A8FBCu;
    // 0x2a8fbc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a8fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fc0: 0x0  nop
    ctx->pc = 0x2a8fc0u;
    // NOP
    // 0x2a8fc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8FC4u;
    {
        const bool branch_taken_0x2a8fc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FC4u;
        // 0x2a8fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fc4) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8FCCu;
    // 0x2a8fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fd0:
    // 0x2a8fd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A8FD0u;
    {
        const bool branch_taken_0x2a8fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FD0u;
        // 0x2a8fd4: 0x222200a  movz        $a0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fd0) {
            ctx->pc = 0x2A900Cu;
            goto label_2a900c;
        }
    }
    ctx->pc = 0x2A8FD8u;
label_2a8fd8:
    // 0x2a8fd8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a8fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fdc: 0x0  nop
    ctx->pc = 0x2a8fdcu;
    // NOP
    // 0x2a8fe0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8FE0u;
    {
        const bool branch_taken_0x2a8fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FE0u;
        // 0x2a8fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fe0) {
            ctx->pc = 0x2A8FECu;
            goto label_2a8fec;
        }
    }
    ctx->pc = 0x2A8FE8u;
    // 0x2a8fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fec:
    // 0x2a8fec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8FECu;
    {
        const bool branch_taken_0x2a8fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FECu;
        // 0x2a8ff0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fec) {
            ctx->pc = 0x2A9010u;
            goto label_2a9010;
        }
    }
    ctx->pc = 0x2A8FF4u;
    // 0x2a8ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8ff8: 0x0  nop
    ctx->pc = 0x2a8ff8u;
    // NOP
    // 0x2a8ffc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8FFCu;
    {
        const bool branch_taken_0x2a8ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FFCu;
        // 0x2a9000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ffc) {
            ctx->pc = 0x2A9008u;
            goto label_2a9008;
        }
    }
    ctx->pc = 0x2A9004u;
    // 0x2a9004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9008:
    // 0x2a9008: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2a9008u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2a900c:
    // 0x2a900c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a900cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9010:
    // 0x2a9010: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2a9010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a9014: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2a9014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a9018: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2a9018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a901c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a901cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9020: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2a9020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9024: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a9028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a902c: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x2a902cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9034: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a9034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a9038: 0xc0aa392  jal         func_2A8E48
    ctx->pc = 0x2A9038u;
    SET_GPR_U32(ctx, 31, 0x2A9040u);
    ctx->pc = 0x2A903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9038u;
    // 0x2a903c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E48u, 0x2A9038u, 0x2A9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9040u;
label_2a9040:
    // 0x2a9040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9044: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a904c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a904cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9050: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a9050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9054: 0xc0aa3bc  jal         func_2A8EF0
    ctx->pc = 0x2A9054u;
    SET_GPR_U32(ctx, 31, 0x2A905Cu);
    ctx->pc = 0x2A9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9054u;
    // 0x2a9058: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EF0u;
    goto label_2a8ef0;
    ctx->pc = 0x2A905Cu;
label_2a905c:
    // 0x2a905c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a905cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9060: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x2a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2a9064: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a9064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a9068: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2a9068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a906c: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2A906Cu;
    {
        const bool branch_taken_0x2a906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a906c) {
            ctx->pc = 0x2A8F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8f30;
        }
    }
    ctx->pc = 0x2A9074u;
label_2a9074:
    // 0x2a9074: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a9074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9078:
    // 0x2a9078: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a9078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a907c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a907cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9080: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9084: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a9084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a908c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A908Cu;
        // 0x2a9090: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9094u;
    // 0x2a9094: 0x0  nop
    ctx->pc = 0x2a9094u;
    // NOP
    ctx->pc = 0x2a9098u;
}
