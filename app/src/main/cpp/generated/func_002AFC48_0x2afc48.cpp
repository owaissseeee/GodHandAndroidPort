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

// Function: func_002AFC48
// Address: 0x2afc48 - 0x2afed0
void func_002AFC48_0x2afc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AFC48_0x2afc48");
#endif

    switch (ctx->pc) {
        case 0x2afd0cu: goto label_2afd0c;
        case 0x2afd5cu: goto label_2afd5c;
        case 0x2afd8cu: goto label_2afd8c;
        case 0x2afda0u: goto label_2afda0;
        case 0x2afdf0u: goto label_2afdf0;
        case 0x2afe24u: goto label_2afe24;
        case 0x2afe50u: goto label_2afe50;
        case 0x2afe80u: goto label_2afe80;
        case 0x2afe98u: goto label_2afe98;
        default: break;
    }

    ctx->pc = 0x2afc48u;

    // 0x2afc48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2afc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2afc4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2afc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2afc50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2afc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2afc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2afc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2afc5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2afc5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc60: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2afc60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2afc64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2afc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc68: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2afc68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2afc6c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2afc6cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2afc70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2afc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2afc74: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2afc74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2afc78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2afc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2afc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2afc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2afc80: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x2afc80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2afc84: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2AFC84u;
    {
        const bool branch_taken_0x2afc84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC84u;
        // 0x2afc88: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc84) {
            ctx->pc = 0x2AFCC4u;
            goto label_2afcc4;
        }
    }
    ctx->pc = 0x2AFC8Cu;
    // 0x2afc8c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x2afc8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2afc90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2afc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2afc94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2afc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2afc98: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFC98u;
    {
        const bool branch_taken_0x2afc98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2afc98) {
            ctx->pc = 0x2AFC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC98u;
            // 0x2afc9c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCC8u;
            goto label_2afcc8;
        }
    }
    ctx->pc = 0x2AFCA0u;
    // 0x2afca0: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x2afca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2afca4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2afca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afca8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2afca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2afcac: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2afcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2afcb0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2afcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2afcb4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x2afcb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2afcb8: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x2afcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x2afcbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFCBCu;
    {
        const bool branch_taken_0x2afcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCBCu;
        // 0x2afcc0: 0xe3a00b  movn        $s4, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcbc) {
            ctx->pc = 0x2AFCC8u;
            goto label_2afcc8;
        }
    }
    ctx->pc = 0x2AFCC4u;
label_2afcc4:
    // 0x2afcc4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2afcc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2afcc8:
    // 0x2afcc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2afcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afccc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2afcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2afcd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFCD0u;
    {
        const bool branch_taken_0x2afcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCD0u;
        // 0x2afcd4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcd0) {
            ctx->pc = 0x2AFCF4u;
            goto label_2afcf4;
        }
    }
    ctx->pc = 0x2AFCD8u;
    // 0x2afcd8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2afcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afcdc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2afcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2afce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afce4: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x2afce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2afce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2afcec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2afcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2afcf0: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2afcf0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2afcf4:
    // 0x2afcf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2afcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2afcf8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AFCF8u;
    {
        const bool branch_taken_0x2afcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCF8u;
        // 0x2afcfc: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcf8) {
            ctx->pc = 0x2AFD94u;
            goto label_2afd94;
        }
    }
    ctx->pc = 0x2AFD00u;
    // 0x2afd00: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2afd04: 0xc0a94ba  jal         func_2A52E8
    ctx->pc = 0x2AFD04u;
    SET_GPR_U32(ctx, 31, 0x2AFD0Cu);
    ctx->pc = 0x2AFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD04u;
    // 0x2afd08: 0x8e642380  lw          $a0, 0x2380($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A52E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A52E8u, 0x2AFD04u, 0x2AFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD0Cu;
label_2afd0c:
    // 0x2afd0c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2afd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afd10: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2afd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2afd14: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2afd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afd18: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2afd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2afd1c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x2afd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2afd24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2afd28: 0x8e622380  lw          $v0, 0x2380($s3)
    ctx->pc = 0x2afd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2afd30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2afd34: 0xe4412068  swc1        $f1, 0x2068($v0)
    ctx->pc = 0x2afd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8296), bits); }
    // 0x2afd38: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2afd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afd3c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2afd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afd40: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x2afd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afd44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2afd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2afd48: 0x8e622380  lw          $v0, 0x2380($s3)
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2afd50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2afd54: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2AFD54u;
    SET_GPR_U32(ctx, 31, 0x2AFD5Cu);
    ctx->pc = 0x2AFD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD54u;
    // 0x2afd58: 0xe440206c  swc1        $f0, 0x206C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2AFD54u, 0x2AFD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD5Cu;
label_2afd5c:
    // 0x2afd5c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2AFD5Cu;
    {
        const bool branch_taken_0x2afd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD5Cu;
        // 0x2afd60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd5c) {
            ctx->pc = 0x2AFE9Cu;
            goto label_2afe9c;
        }
    }
    ctx->pc = 0x2AFD64u;
    // 0x2afd64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2afd68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2afd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2afd6c: 0x8e642380  lw          $a0, 0x2380($s3)
    ctx->pc = 0x2afd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afd70: 0x460cb340  add.s       $f13, $f22, $f12
    ctx->pc = 0x2afd70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x2afd74: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2afd74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2afd78: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2afd7c: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2afd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2afd80: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2afd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2afd84: 0xc0a94ea  jal         func_2A53A8
    ctx->pc = 0x2AFD84u;
    SET_GPR_U32(ctx, 31, 0x2AFD8Cu);
    ctx->pc = 0x2AFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD84u;
    // 0x2afd88: 0x460cab00  add.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53A8u, 0x2AFD84u, 0x2AFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD8Cu;
label_2afd8c:
    // 0x2afd8c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2AFD8Cu;
    {
        const bool branch_taken_0x2afd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD8Cu;
        // 0x2afd90: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd8c) {
            ctx->pc = 0x2AFE9Cu;
            goto label_2afe9c;
        }
    }
    ctx->pc = 0x2AFD94u;
label_2afd94:
    // 0x2afd94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2afd98: 0xc0a94ba  jal         func_2A52E8
    ctx->pc = 0x2AFD98u;
    SET_GPR_U32(ctx, 31, 0x2AFDA0u);
    ctx->pc = 0x2AFD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD98u;
    // 0x2afd9c: 0x8e642380  lw          $a0, 0x2380($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A52E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A52E8u, 0x2AFD98u, 0x2AFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDA0u;
label_2afda0:
    // 0x2afda0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2afda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afda4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2afda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2afda8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2afda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afdac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2afdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2afdb0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x2afdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afdb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2afdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2afdbc: 0x8e622380  lw          $v0, 0x2380($s3)
    ctx->pc = 0x2afdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afdc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2afdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2afdc8: 0xe4412068  swc1        $f1, 0x2068($v0)
    ctx->pc = 0x2afdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8296), bits); }
    // 0x2afdcc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2afdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afdd0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2afdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afdd4: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x2afdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afdd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2afdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2afddc: 0x8e622380  lw          $v0, 0x2380($s3)
    ctx->pc = 0x2afddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afde4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2afde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2afde8: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2AFDE8u;
    SET_GPR_U32(ctx, 31, 0x2AFDF0u);
    ctx->pc = 0x2AFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDE8u;
    // 0x2afdec: 0xe440206c  swc1        $f0, 0x206C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2AFDE8u, 0x2AFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDF0u;
label_2afdf0:
    // 0x2afdf0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AFDF0u;
    {
        const bool branch_taken_0x2afdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDF0u;
        // 0x2afdf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdf0) {
            ctx->pc = 0x2AFE2Cu;
            goto label_2afe2c;
        }
    }
    ctx->pc = 0x2AFDF8u;
    // 0x2afdf8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2afdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2afdfc: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AFDFCu;
    {
        const bool branch_taken_0x2afdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDFCu;
        // 0x2afe00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdfc) {
            ctx->pc = 0x2AFE98u;
            goto label_2afe98;
        }
    }
    ctx->pc = 0x2AFE04u;
    // 0x2afe04: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2afe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2afe08: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2afe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afe0c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2afe0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2afe10: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2afe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afe14: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2afe14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2afe18: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x2afe18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2afe1c: 0xc0ac4c0  jal         func_2B1300
    ctx->pc = 0x2AFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE24u);
    ctx->pc = 0x2AFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE1Cu;
    // 0x2afe20: 0x46007382  mul.s       $f14, $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1300u, 0x2AFE1Cu, 0x2AFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE24u;
label_2afe24:
    // 0x2afe24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AFE24u;
    {
        const bool branch_taken_0x2afe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE24u;
        // 0x2afe28: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe24) {
            ctx->pc = 0x2AFE9Cu;
            goto label_2afe9c;
        }
    }
    ctx->pc = 0x2AFE2Cu;
label_2afe2c:
    // 0x2afe2c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2afe2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2afe30: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2afe30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2afe34: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2afe34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2afe38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2afe38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2afe3c: 0x8e642380  lw          $a0, 0x2380($s3)
    ctx->pc = 0x2afe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afe40: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2afe40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2afe44: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2afe44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2afe48: 0xc0a94ea  jal         func_2A53A8
    ctx->pc = 0x2AFE48u;
    SET_GPR_U32(ctx, 31, 0x2AFE50u);
    ctx->pc = 0x2AFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE48u;
    // 0x2afe4c: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53A8u, 0x2AFE48u, 0x2AFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE50u;
label_2afe50:
    // 0x2afe50: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2afe54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2afe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2afe58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AFE58u;
    {
        const bool branch_taken_0x2afe58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE58u;
        // 0x2afe5c: 0x8e642380  lw          $a0, 0x2380($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe58) {
            ctx->pc = 0x2AFE98u;
            goto label_2afe98;
        }
    }
    ctx->pc = 0x2AFE60u;
    // 0x2afe60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2afe64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2afe64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2afe68: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2afe68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x2afe6c: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x2afe6cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2afe70: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2afe70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2afe74: 0x4614b340  add.s       $f13, $f22, $f20
    ctx->pc = 0x2afe74u;
    ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x2afe78: 0xc0a94ea  jal         func_2A53A8
    ctx->pc = 0x2AFE78u;
    SET_GPR_U32(ctx, 31, 0x2AFE80u);
    ctx->pc = 0x2AFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE78u;
    // 0x2afe7c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53A8u, 0x2AFE78u, 0x2AFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE80u;
label_2afe80:
    // 0x2afe80: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x2afe80u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2afe84: 0x8e642380  lw          $a0, 0x2380($s3)
    ctx->pc = 0x2afe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9088)));
    // 0x2afe88: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2afe88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2afe8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2afe8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2afe90: 0xc0a94ea  jal         func_2A53A8
    ctx->pc = 0x2AFE90u;
    SET_GPR_U32(ctx, 31, 0x2AFE98u);
    ctx->pc = 0x2AFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE90u;
    // 0x2afe94: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53A8u, 0x2AFE90u, 0x2AFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE98u;
label_2afe98:
    // 0x2afe98: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2afe98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2afe9c:
    // 0x2afe9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2afe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afea0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2afea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2afea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afea8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2afea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afeac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2afeacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afeb4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x2afeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2afeb8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2afeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2afebc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2afebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2afec0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2afec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2afec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEC4u;
        // 0x2afec8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFECCu;
    // 0x2afecc: 0x0  nop
    ctx->pc = 0x2afeccu;
    // NOP
    ctx->pc = 0x2afed0u;
}
