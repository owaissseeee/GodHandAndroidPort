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

// Function: func_002F8F30
// Address: 0x2f8f30 - 0x2f9ce0
void func_002F8F30_0x2f8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F8F30_0x2f8f30");
#endif

    switch (ctx->pc) {
        case 0x2f90b8u: goto label_2f90b8;
        case 0x2f90dcu: goto label_2f90dc;
        case 0x2f90ecu: goto label_2f90ec;
        case 0x2f93b8u: goto label_2f93b8;
        case 0x2f94ccu: goto label_2f94cc;
        case 0x2f94dcu: goto label_2f94dc;
        case 0x2f952cu: goto label_2f952c;
        case 0x2f95ccu: goto label_2f95cc;
        case 0x2f9608u: goto label_2f9608;
        case 0x2f9648u: goto label_2f9648;
        case 0x2f9680u: goto label_2f9680;
        case 0x2f9690u: goto label_2f9690;
        case 0x2f969cu: goto label_2f969c;
        case 0x2f97acu: goto label_2f97ac;
        case 0x2f97bcu: goto label_2f97bc;
        case 0x2f97c8u: goto label_2f97c8;
        case 0x2f9924u: goto label_2f9924;
        case 0x2f9934u: goto label_2f9934;
        case 0x2f9940u: goto label_2f9940;
        case 0x2f9ab0u: goto label_2f9ab0;
        case 0x2f9ac0u: goto label_2f9ac0;
        case 0x2f9accu: goto label_2f9acc;
        case 0x2f9c90u: goto label_2f9c90;
        default: break;
    }

    ctx->pc = 0x2f8f30u;

    // 0x2f8f30: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2f8f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2f8f34: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2f8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2f8f38: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2f8f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x2f8f3c: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2f8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2f8f40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f8f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f44: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2f8f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2f8f48: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2f8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2f8f4c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2f8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x2f8f50: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2f8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x2f8f54: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2f8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x2f8f58: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2f8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2f8f5c: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2f8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x2f8f60: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2f8f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2f8f64: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x2f8f64u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2f8f68: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x2f8f68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2f8f6c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x2f8f6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2f8f70: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2f8f70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2f8f74: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2f8f74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2f8f78: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2f8f78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2f8f7c: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f8f80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f8f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f8f84: 0x14400343  bnez        $v0, . + 4 + (0x343 << 2)
    ctx->pc = 0x2F8F84u;
    {
        const bool branch_taken_0x2f8f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F84u;
        // 0x2f8f88: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f84) {
            ctx->pc = 0x2F9C94u;
            goto label_2f9c94;
        }
    }
    ctx->pc = 0x2F8F8Cu;
    // 0x2f8f8c: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2f8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2f8f90: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F8F90u;
    {
        const bool branch_taken_0x2f8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f90) {
            ctx->pc = 0x2F8F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8F90u;
            // 0x2f8f94: 0x9262024c  lbu         $v0, 0x24C($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8FB8u;
            goto label_2f8fb8;
        }
    }
    ctx->pc = 0x2F8F98u;
    // 0x2f8f98: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2f8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f8f9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f8fa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8FA0u;
    {
        const bool branch_taken_0x2f8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FA0u;
        // 0x2f8fa4: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8fa0) {
            ctx->pc = 0x2F8FB4u;
            goto label_2f8fb4;
        }
    }
    ctx->pc = 0x2F8FA8u;
    // 0x2f8fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f8fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f8fac: 0x1040033a  beqz        $v0, . + 4 + (0x33A << 2)
    ctx->pc = 0x2F8FACu;
    {
        const bool branch_taken_0x2f8fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FACu;
        // 0x2f8fb0: 0x7bb10150  lq          $s1, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8fac) {
            ctx->pc = 0x2F9C98u;
            goto label_2f9c98;
        }
    }
    ctx->pc = 0x2F8FB4u;
label_2f8fb4:
    // 0x2f8fb4: 0x9262024c  lbu         $v0, 0x24C($s3)
    ctx->pc = 0x2f8fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
label_2f8fb8:
    // 0x2f8fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8fbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f8fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8fc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F8FC0u;
    {
        const bool branch_taken_0x2f8fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8fc0) {
            ctx->pc = 0x2F8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8FC0u;
            // 0x2f8fc4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8FF0u;
            goto label_2f8ff0;
        }
    }
    ctx->pc = 0x2F8FC8u;
    // 0x2f8fc8: 0x9263024d  lbu         $v1, 0x24D($s3)
    ctx->pc = 0x2f8fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
    // 0x2f8fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8fd0: 0x0  nop
    ctx->pc = 0x2f8fd0u;
    // NOP
    // 0x2f8fd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f8fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f8fd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8fe0: 0x0  nop
    ctx->pc = 0x2f8fe0u;
    // NOP
    // 0x2f8fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f8fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f8fe8: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f8fe8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f8fec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2f8ff0:
    // 0x2f8ff0: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x2f8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2f8ff4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f8ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ff8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2f8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2f8ffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f9000: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x2f9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2f9004: 0x24740030  addiu       $s4, $v1, 0x30
    ctx->pc = 0x2f9004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2f9008: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f9008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f900c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F900Cu;
    {
        const bool branch_taken_0x2f900c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F900Cu;
        // 0x2f9010: 0x246200c0  addiu       $v0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f900c) {
            ctx->pc = 0x2F9020u;
            goto label_2f9020;
        }
    }
    ctx->pc = 0x2F9014u;
    // 0x2f9014: 0x8e630364  lw          $v1, 0x364($s3)
    ctx->pc = 0x2f9014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
    // 0x2f9018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9018u;
    {
        const bool branch_taken_0x2f9018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9018u;
        // 0x2f901c: 0xafa300a8  sw          $v1, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9018) {
            ctx->pc = 0x2F9028u;
            goto label_2f9028;
        }
    }
    ctx->pc = 0x2F9020u;
label_2f9020:
    // 0x2f9020: 0x8e640368  lw          $a0, 0x368($s3)
    ctx->pc = 0x2f9020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x2f9024: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2f9024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_2f9028:
    // 0x2f9028: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2f9028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2f902c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f9030: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f9034: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2f9034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9038: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f903c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2f903cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2f9040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9044: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9048: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f904c: 0x34048152  ori         $a0, $zero, 0x8152
    ctx->pc = 0x2f904cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2f9050: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2f9050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2f9054: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2f9054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2f9058: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2f9058u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2f905c: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x2f905cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2f9060: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2f9060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2f9064: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2f9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f9068: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x2f9068u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x2f906c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2f906cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2f9070: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f9070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2f9074: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2f9074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2f9078: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f907c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2f907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2f9080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9080u;
    {
        const bool branch_taken_0x2f9080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9080) {
            ctx->pc = 0x2F9098u;
            goto label_2f9098;
        }
    }
    ctx->pc = 0x2F9088u;
    // 0x2f9088: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2f908c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2f908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2f9090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9090u;
    {
        const bool branch_taken_0x2f9090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9090u;
        // 0x2f9094: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9090) {
            ctx->pc = 0x2F90A4u;
            goto label_2f90a4;
        }
    }
    ctx->pc = 0x2F9098u;
label_2f9098:
    // 0x2f9098: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2f9098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2f909c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2f909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2f90a0: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x2f90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_2f90a4:
    // 0x2f90a4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2f90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2f90a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f90a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f90ac: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x2f90acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x2f90b0: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2F90B0u;
    SET_GPR_U32(ctx, 31, 0x2F90B8u);
    ctx->pc = 0x2F90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90B0u;
    // 0x2f90b4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2F90B0u, 0x2F90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90B8u;
label_2f90b8:
    // 0x2f90b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f90bc: 0xfe200030  sd          $zero, 0x30($s1)
    ctx->pc = 0x2f90bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
    // 0x2f90c0: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x2f90c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x2f90c4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2f90c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2f90c8: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2f90c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2f90cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f90ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f90d0: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2f90d4: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2F90D4u;
    SET_GPR_U32(ctx, 31, 0x2F90DCu);
    ctx->pc = 0x2F90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90D4u;
    // 0x2f90d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2F90D4u, 0x2F90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90DCu;
label_2f90dc:
    // 0x2f90dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f90dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f90e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f90e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f90e4: 0xc0544da  jal         func_151368
    ctx->pc = 0x2F90E4u;
    SET_GPR_U32(ctx, 31, 0x2F90ECu);
    ctx->pc = 0x2F90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90E4u;
    // 0x2f90e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2F90E4u, 0x2F90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90ECu;
label_2f90ec:
    // 0x2f90ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2f90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f90f0: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x2f90f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x2f90f4: 0xfe240048  sd          $a0, 0x48($s1)
    ctx->pc = 0x2f90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 4));
    // 0x2f90f8: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2f90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2f90fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f9100: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2f9100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2f9104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9104u;
    {
        const bool branch_taken_0x2f9104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9104u;
        // 0x2f9108: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9104) {
            ctx->pc = 0x2F911Cu;
            goto label_2f911c;
        }
    }
    ctx->pc = 0x2F910Cu;
    // 0x2f910c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9110: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2f9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2f9114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9114u;
    {
        const bool branch_taken_0x2f9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9114u;
        // 0x2f9118: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9114) {
            ctx->pc = 0x2F9130u;
            goto label_2f9130;
        }
    }
    ctx->pc = 0x2F911Cu;
label_2f911c:
    // 0x2f911c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9120: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2f9120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2f9124: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2f9124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2f9128: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2f9128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2f912c: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2f912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2f9130:
    // 0x2f9130: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2f9130u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9134: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2f9134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2f9138: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2f9138u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2f913c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2f913cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2f9140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9144: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f9144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f9148: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x2f9148u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x2f914c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2f914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2f9150: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f9150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f9154: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f9154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f9158: 0xfe220078  sd          $v0, 0x78($s1)
    ctx->pc = 0x2f9158u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 2));
    // 0x2f915c: 0x6a66018f  ldl         $a2, 0x18F($s3)
    ctx->pc = 0x2f915cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f9160: 0x6e660188  ldr         $a2, 0x188($s3)
    ctx->pc = 0x2f9160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f9164: 0x6a670197  ldl         $a3, 0x197($s3)
    ctx->pc = 0x2f9164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f9168: 0x6e670190  ldr         $a3, 0x190($s3)
    ctx->pc = 0x2f9168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f916c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2f916cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9170: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2f9170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9174: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x2f9174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9178: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x2f9178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f917c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f917cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f9180: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9184: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f9184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9188: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2f9188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f918c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2f918cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2f9190: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f9190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9194: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2f9194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2f9198: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f9198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2f919c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2f919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2f91a0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2f91a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f91a4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f91a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f91a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f91a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f91ac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f91acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f91b0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2f91b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f91b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f91b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f91b8: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x2f91b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f91bc: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x2f91bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f91c0: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x2f91c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f91c4: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x2f91c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f91c8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2f91c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f91cc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2f91ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f91d0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2f91d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f91d4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2f91d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f91d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f91d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f91dc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f91dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f91e0: 0x0  nop
    ctx->pc = 0x2f91e0u;
    // NOP
    // 0x2f91e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F91E4u;
    {
        const bool branch_taken_0x2f91e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f91e4) {
            ctx->pc = 0x2F91E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91E4u;
            // 0x2f91e8: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F91ECu;
            goto label_2f91ec;
        }
    }
    ctx->pc = 0x2F91ECu;
label_2f91ec:
    // 0x2f91ec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f91ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f91f0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f91f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f91f4: 0x0  nop
    ctx->pc = 0x2f91f4u;
    // NOP
    // 0x2f91f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F91F8u;
    {
        const bool branch_taken_0x2f91f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f91f8) {
            ctx->pc = 0x2F91FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91F8u;
            // 0x2f91fc: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9200u;
            goto label_2f9200;
        }
    }
    ctx->pc = 0x2F9200u;
label_2f9200:
    // 0x2f9200: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f9200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9204: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f9204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9208: 0x0  nop
    ctx->pc = 0x2f9208u;
    // NOP
    // 0x2f920c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F920Cu;
    {
        const bool branch_taken_0x2f920c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f920c) {
            ctx->pc = 0x2F9210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F920Cu;
            // 0x2f9210: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9214u;
            goto label_2f9214;
        }
    }
    ctx->pc = 0x2F9214u;
label_2f9214:
    // 0x2f9214: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9218: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f9218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f921c: 0x0  nop
    ctx->pc = 0x2f921cu;
    // NOP
    // 0x2f9220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9220u;
    {
        const bool branch_taken_0x2f9220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9220) {
            ctx->pc = 0x2F9224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9220u;
            // 0x2f9224: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9228u;
            goto label_2f9228;
        }
    }
    ctx->pc = 0x2F9228u;
label_2f9228:
    // 0x2f9228: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f9228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f922c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f922cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9230: 0x0  nop
    ctx->pc = 0x2f9230u;
    // NOP
    // 0x2f9234: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9234u;
    {
        const bool branch_taken_0x2f9234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9234) {
            ctx->pc = 0x2F9238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9234u;
            // 0x2f9238: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F923Cu;
            goto label_2f923c;
        }
    }
    ctx->pc = 0x2F923Cu;
label_2f923c:
    // 0x2f923c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9240: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f9240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9244: 0x0  nop
    ctx->pc = 0x2f9244u;
    // NOP
    // 0x2f9248: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9248u;
    {
        const bool branch_taken_0x2f9248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9248) {
            ctx->pc = 0x2F924Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9248u;
            // 0x2f924c: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9250u;
            goto label_2f9250;
        }
    }
    ctx->pc = 0x2F9250u;
label_2f9250:
    // 0x2f9250: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9254: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f9254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9258: 0x0  nop
    ctx->pc = 0x2f9258u;
    // NOP
    // 0x2f925c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F925Cu;
    {
        const bool branch_taken_0x2f925c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f925c) {
            ctx->pc = 0x2F9260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F925Cu;
            // 0x2f9260: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9264u;
            goto label_2f9264;
        }
    }
    ctx->pc = 0x2F9264u;
label_2f9264:
    // 0x2f9264: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9268: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f9268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f926c: 0x0  nop
    ctx->pc = 0x2f926cu;
    // NOP
    // 0x2f9270: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9270u;
    {
        const bool branch_taken_0x2f9270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9270) {
            ctx->pc = 0x2F9274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9270u;
            // 0x2f9274: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9278u;
            goto label_2f9278;
        }
    }
    ctx->pc = 0x2F9278u;
label_2f9278:
    // 0x2f9278: 0x8e650114  lw          $a1, 0x114($s3)
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2f927c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F927Cu;
    {
        const bool branch_taken_0x2f927c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F927Cu;
        // 0x2f9280: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f927c) {
            ctx->pc = 0x2F92F8u;
            goto label_2f92f8;
        }
    }
    ctx->pc = 0x2F9284u;
    // 0x2f9284: 0x9262011c  lbu         $v0, 0x11C($s3)
    ctx->pc = 0x2f9284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f9288: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2f9288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2f928c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F928Cu;
    {
        const bool branch_taken_0x2f928c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f928c) {
            ctx->pc = 0x2F9290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F928Cu;
            // 0x2f9290: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92FCu;
            goto label_2f92fc;
        }
    }
    ctx->pc = 0x2F9294u;
    // 0x2f9294: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2f9294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2f9298: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2f9298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2f929c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2f929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f92a0: 0x0  nop
    ctx->pc = 0x2f92a0u;
    // NOP
    // 0x2f92a4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2f92a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2f92a8: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2f92a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2f92ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f92acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f92b0: 0x0  nop
    ctx->pc = 0x2f92b0u;
    // NOP
    // 0x2f92b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f92b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f92b8: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2f92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f92bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f92bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f92c0: 0x0  nop
    ctx->pc = 0x2f92c0u;
    // NOP
    // 0x2f92c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f92c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f92c8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2f92c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f92cc: 0x0  nop
    ctx->pc = 0x2f92ccu;
    // NOP
    // 0x2f92d0: 0x0  nop
    ctx->pc = 0x2f92d0u;
    // NOP
    // 0x2f92d4: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x2f92d4u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[6]);
    // 0x2f92d8: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x2f92d8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[6]);
    // 0x2f92dc: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f92dcu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f92e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f92e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f92e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f92e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f92e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f92e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f92ec: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2f92ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f92f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F92F0u;
    {
        const bool branch_taken_0x2f92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92F0u;
        // 0x2f92f4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92f0) {
            ctx->pc = 0x2F9300u;
            goto label_2f9300;
        }
    }
    ctx->pc = 0x2F92F8u;
label_2f92f8:
    // 0x2f92f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f92f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2f92fc:
    // 0x2f92fc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f9300:
    // 0x2f9300: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2f9300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9304: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2f9304u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2f9308: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2f9308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2f930c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f9310: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f9310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9314: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f9314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9318: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f9318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f931c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f931cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f9320: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2f9320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9324: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f9324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f9328: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2f9328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f932c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f932cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f9330: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2f9330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f9334: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x2f9334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2f9338: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x2f9338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2f933c: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2f933cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2f9340: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f9340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f9344: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2f9344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f9348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f9348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f934c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2f934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2f9350: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9354: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f9354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f9358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f935c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f935cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f9360: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2f9360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f9364: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2f9364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f9368: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2f9368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2f936c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f9370: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2f9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f9374: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f9378: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x2f9378u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x2f937c: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x2f937cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x2f9380: 0x26a374a0  addiu       $v1, $s5, 0x74A0
    ctx->pc = 0x2f9380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x2f9384: 0xfe280058  sd          $t0, 0x58($s1)
    ctx->pc = 0x2f9384u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 8));
    // 0x2f9388: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2f9388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2f938c: 0xfe260060  sd          $a2, 0x60($s1)
    ctx->pc = 0x2f938cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 6));
    // 0x2f9390: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x2f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x2f9394: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2f9394u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2f9398: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2f9398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f939c: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x2f939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x2f93a0: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x2f93a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2f93a4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f93a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f93a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2f93a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2f93ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f93acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f93b0: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2F93B0u;
    SET_GPR_U32(ctx, 31, 0x2F93B8u);
    ctx->pc = 0x2F93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93B0u;
    // 0x2f93b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2F93B0u, 0x2F93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93B8u;
label_2f93b8:
    // 0x2f93b8: 0x92640245  lbu         $a0, 0x245($s3)
    ctx->pc = 0x2f93b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 581)));
    // 0x2f93bc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2f93bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2f93c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2f93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f93c4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F93C4u;
    {
        const bool branch_taken_0x2f93c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f93c4) {
            ctx->pc = 0x2F93C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F93C4u;
            // 0x2f93c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93CCu;
            goto label_2f93cc;
        }
    }
    ctx->pc = 0x2F93CCu;
label_2f93cc:
    // 0x2f93cc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f93ccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f93d0: 0x92650246  lbu         $a1, 0x246($s3)
    ctx->pc = 0x2f93d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 582)));
    // 0x2f93d4: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2f93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2f93d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f93d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f93dc: 0x0  nop
    ctx->pc = 0x2f93dcu;
    // NOP
    // 0x2f93e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2f93e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2f93e4: 0x82620244  lb          $v0, 0x244($s3)
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x2f93e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f93e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f93ec: 0x0  nop
    ctx->pc = 0x2f93ecu;
    // NOP
    // 0x2f93f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f93f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f93f4: 0x8e68011c  lw          $t0, 0x11C($s3)
    ctx->pc = 0x2f93f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f93f8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2f93f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f93fc: 0x3812  mflo        $a3
    ctx->pc = 0x2f93fcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f9400: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2f9400u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f9404: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f9404u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9408: 0x0  nop
    ctx->pc = 0x2f9408u;
    // NOP
    // 0x2f940c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f940cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f9410: 0x46030643  div.s       $f25, $f0, $f3
    ctx->pc = 0x2f9410u;
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2f9414: 0x2812  mflo        $a1
    ctx->pc = 0x2f9414u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2f9418: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f9418u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f941c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f941cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9420: 0x0  nop
    ctx->pc = 0x2f9420u;
    // NOP
    // 0x2f9424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f9424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f9428: 0x46020e03  div.s       $f24, $f1, $f2
    ctx->pc = 0x2f9428u;
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f942c: 0x1012  mflo        $v0
    ctx->pc = 0x2f942cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9430: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9430u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f9434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9438: 0x0  nop
    ctx->pc = 0x2f9438u;
    // NOP
    // 0x2f943c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f943cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f9440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f9440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9444: 0x0  nop
    ctx->pc = 0x2f9444u;
    // NOP
    // 0x2f9448: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f9448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f944c: 0x46190582  mul.s       $f22, $f0, $f25
    ctx->pc = 0x2f944cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x2f9450: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9450u;
    {
        const bool branch_taken_0x2f9450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9450u;
        // 0x2f9454: 0x46180d42  mul.s       $f21, $f1, $f24 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9450) {
            ctx->pc = 0x2F9460u;
            goto label_2f9460;
        }
    }
    ctx->pc = 0x2F9458u;
    // 0x2f9458: 0x4619b580  add.s       $f22, $f22, $f25
    ctx->pc = 0x2f9458u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
    // 0x2f945c: 0x4600ce47  neg.s       $f25, $f25
    ctx->pc = 0x2f945cu;
    ctx->f[25] = FPU_NEG_S(ctx->f[25]);
label_2f9460:
    // 0x2f9460: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9464: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2f9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2f9468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9468u;
    {
        const bool branch_taken_0x2f9468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9468u;
        // 0x2f946c: 0x141102  srl         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9468) {
            ctx->pc = 0x2F9478u;
            goto label_2f9478;
        }
    }
    ctx->pc = 0x2F9470u;
    // 0x2f9470: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x2f9470u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x2f9474: 0x4600c607  neg.s       $f24, $f24
    ctx->pc = 0x2f9474u;
    ctx->f[24] = FPU_NEG_S(ctx->f[24]);
label_2f9478:
    // 0x2f9478: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2f9478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f947c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9480: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2f9480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f9484: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2f9488: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x2f9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2f948c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9490: 0x3403816e  ori         $v1, $zero, 0x816E
    ctx->pc = 0x2f9490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33134);
    // 0x2f9494: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2f9494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2f9498: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f949c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2f949cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x2f94a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f94a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f94a4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f94a8: 0xfcc20090  sd          $v0, 0x90($a2)
    ctx->pc = 0x2f94a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 2));
    // 0x2f94ac: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2f94acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2f94b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f94b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f94b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f94b8: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x2f94b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2f94bc: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x2f94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x2f94c0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2f94c4: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2F94C4u;
    SET_GPR_U32(ctx, 31, 0x2F94CCu);
    ctx->pc = 0x2F94C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94C4u;
    // 0x2f94c8: 0x8e05aff0  lw          $a1, -0x5010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2F94C4u, 0x2F94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94CCu;
label_2f94cc:
    // 0x2f94cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f94d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f94d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94d4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F94D4u;
    SET_GPR_U32(ctx, 31, 0x2F94DCu);
    ctx->pc = 0x2F94D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94D4u;
    // 0x2f94d8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F94D4u, 0x2F94DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94DCu;
label_2f94dc:
    // 0x2f94dc: 0xc6600254  lwc1        $f0, 0x254($s3)
    ctx->pc = 0x2f94dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f94e0: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2f94e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f94e4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2f94e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f94e8: 0x0  nop
    ctx->pc = 0x2f94e8u;
    // NOP
    // 0x2f94ec: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x2F94ECu;
    {
        const bool branch_taken_0x2f94ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94ECu;
        // 0x2f94f0: 0xafa900c0  sw          $t1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94ec) {
            ctx->pc = 0x2F95BCu;
            goto label_2f95bc;
        }
    }
    ctx->pc = 0x2F94F4u;
    // 0x2f94f4: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2f94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2f94f8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2f94f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f94fc: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2f94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2f9500: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f9500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f9504: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2f9504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2f9508: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f9508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f950c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f950cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f9510: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f9514: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f9514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9518: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f951c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f9520: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2f9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f9524: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2F9524u;
    SET_GPR_U32(ctx, 31, 0x2F952Cu);
    ctx->pc = 0x2F9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9524u;
    // 0x2f9528: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2F9524u, 0x2F952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F952Cu;
label_2f952c:
    // 0x2f952c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f952cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9530: 0x0  nop
    ctx->pc = 0x2f9530u;
    // NOP
    // 0x2f9534: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9534u;
    {
        const bool branch_taken_0x2f9534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9534u;
        // 0x2f9538: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9534) {
            ctx->pc = 0x2F9578u;
            goto label_2f9578;
        }
    }
    ctx->pc = 0x2F953Cu;
    // 0x2f953c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f9540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9544: 0x0  nop
    ctx->pc = 0x2f9544u;
    // NOP
    // 0x2f9548: 0x0  nop
    ctx->pc = 0x2f9548u;
    // NOP
    // 0x2f954c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f954cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f9550: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x2f9550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f9554: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2f9554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9558: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f9558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f955c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f955cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2f9560: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2f9560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f9564: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2f9564u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2f9568: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2f9568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2f956c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2f956cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2f9570: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2f9570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2f9574: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2f9574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2f9578:
    // 0x2f9578: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2f9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f957c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f957cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9580: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f9580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f9584: 0xc6600254  lwc1        $f0, 0x254($s3)
    ctx->pc = 0x2f9584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9588: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f9588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f958c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f9590: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f9590u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f9594: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f9594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f9598: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f9598u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f959c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f959cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f95a0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f95a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f95a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f95a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f95a8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f95a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f95ac: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f95acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f95b0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2f95b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f95b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f95b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f95b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f95b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f95bc:
    // 0x2f95bc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2f95bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f95c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f95c4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F95C4u;
    SET_GPR_U32(ctx, 31, 0x2F95CCu);
    ctx->pc = 0x2F95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F95C4u;
    // 0x2f95c8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F95C4u, 0x2F95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95CCu;
label_2f95cc:
    // 0x2f95cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f95ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f95d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f95d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f95d4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f95d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f95d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f95dc: 0x0  nop
    ctx->pc = 0x2f95dcu;
    // NOP
    // 0x2f95e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F95E0u;
    {
        const bool branch_taken_0x2f95e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f95e0) {
            ctx->pc = 0x2F95E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F95E0u;
            // 0x2f95e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F95E8u;
            goto label_2f95e8;
        }
    }
    ctx->pc = 0x2F95E8u;
label_2f95e8:
    // 0x2f95e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f95e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f95ec: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2f95ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f95f0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f95f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f95f4: 0x8e620310  lw          $v0, 0x310($s3)
    ctx->pc = 0x2f95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 784)));
    // 0x2f95f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95fc: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x2F95FCu;
    {
        const bool branch_taken_0x2f95fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95FCu;
        // 0x2f9600: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95fc) {
            ctx->pc = 0x2F9C20u;
            goto label_2f9c20;
        }
    }
    ctx->pc = 0x2F9604u;
    // 0x2f9604: 0x8e630300  lw          $v1, 0x300($s3)
    ctx->pc = 0x2f9604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
label_2f9608:
    // 0x2f9608: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2f9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f960c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2f960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2f9610: 0x8e62030c  lw          $v0, 0x30C($s3)
    ctx->pc = 0x2f9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x2f9614: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f9614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f9618: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x2F9618u;
    {
        const bool branch_taken_0x2f9618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9618u;
        // 0x2f961c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9618) {
            ctx->pc = 0x2F9C0Cu;
            goto label_2f9c0c;
        }
    }
    ctx->pc = 0x2F9620u;
    // 0x2f9620: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x2f9620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f9624: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2f9624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2f9628: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2f9628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2f962c: 0x2455b7a8  addiu       $s5, $v0, -0x4858
    ctx->pc = 0x2f962cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948776));
    // 0x2f9630: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x2f9630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f9634: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x2f9634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2f9638: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x2f9638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f963c: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x2f963cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f9640: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x2f9640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
    // 0x2f9644: 0x668021  addu        $s0, $v1, $a2
    ctx->pc = 0x2f9644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f9648:
    // 0x2f9648: 0x8e6202bc  lw          $v0, 0x2BC($s3)
    ctx->pc = 0x2f9648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
    // 0x2f964c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f9650: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9650u;
    {
        const bool branch_taken_0x2f9650 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9650u;
        // 0x2f9654: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9650) {
            ctx->pc = 0x2F9670u;
            goto label_2f9670;
        }
    }
    ctx->pc = 0x2F9658u;
    // 0x2f9658: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f965c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f965cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f9660: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9664: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f9664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f9668: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f9668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f966c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f9670:
    // 0x2f9670: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9674: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f9674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9678: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F9678u;
    SET_GPR_U32(ctx, 31, 0x2F9680u);
    ctx->pc = 0x2F967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9678u;
    // 0x2f967c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F9678u, 0x2F9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9680u;
label_2f9680:
    // 0x2f9680: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f9684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9688: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2F9688u;
    SET_GPR_U32(ctx, 31, 0x2F9690u);
    ctx->pc = 0x2F968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9688u;
    // 0x2f968c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2F9688u, 0x2F9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9690u;
label_2f9690:
    // 0x2f9690: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f9690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f9694: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2F9694u;
    SET_GPR_U32(ctx, 31, 0x2F969Cu);
    ctx->pc = 0x2F9698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9694u;
    // 0x2f9698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2F9694u, 0x2F969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F969Cu;
label_2f969c:
    // 0x2f969c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f96a0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F96A0u;
    {
        const bool branch_taken_0x2f96a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96A0u;
        // 0x2f96a4: 0x3c09003c  lui         $t1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96a0) {
            ctx->pc = 0x2F9720u;
            goto label_2f9720;
        }
    }
    ctx->pc = 0x2F96A8u;
    // 0x2f96a8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f96ac: 0x8d261180  lw          $a2, 0x1180($t1)
    ctx->pc = 0x2f96acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x2f96b0: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f96b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f96b4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f96b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f96b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f96bc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2f96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2f96c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f96c4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2f96c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f96c8: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2f96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f96cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f96ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f96d0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F96D0u;
    {
        const bool branch_taken_0x2f96d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D0u;
        // 0x2f96d4: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96d0) {
            ctx->pc = 0x2F9720u;
            goto label_2f9720;
        }
    }
    ctx->pc = 0x2F96D8u;
    // 0x2f96d8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2f96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f96dc: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2f96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2f96e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f96e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f96e4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F96E4u;
    {
        const bool branch_taken_0x2f96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f96e4) {
            ctx->pc = 0x2F96E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F96E4u;
            // 0x2f96e8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9724u;
            goto label_2f9724;
        }
    }
    ctx->pc = 0x2F96ECu;
    // 0x2f96ec: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2f96ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2f96f0: 0x8d236b80  lw          $v1, 0x6B80($t1)
    ctx->pc = 0x2f96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2f96f4: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2f96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2f96f8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f96f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f96fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F96FCu;
    {
        const bool branch_taken_0x2f96fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f96fc) {
            ctx->pc = 0x2F9700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F96FCu;
            // 0x2f9700: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9724u;
            goto label_2f9724;
        }
    }
    ctx->pc = 0x2F9704u;
    // 0x2f9704: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f9704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f9708: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2f9708u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2f970c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9710: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2f9710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2f9714: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f9714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f9718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9718u;
    {
        const bool branch_taken_0x2f9718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9718u;
        // 0x2f971c: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9718) {
            ctx->pc = 0x2F9728u;
            goto label_2f9728;
        }
    }
    ctx->pc = 0x2F9720u;
label_2f9720:
    // 0x2f9720: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2f9720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9724:
    // 0x2f9724: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f9724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2f9728:
    // 0x2f9728: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f972c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f9730: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2f9730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2f9734: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f9734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9738: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f9738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f973c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f973cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f9740: 0xfe060028  sd          $a2, 0x28($s0)
    ctx->pc = 0x2f9740u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 6));
    // 0x2f9744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9748: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f974c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f9750: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f9750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9754: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2f9754u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2f9758: 0xc4e0b7a8  lwc1        $f0, -0x4858($a3)
    ctx->pc = 0x2f9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f975c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2f975cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2f9760: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2f9760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2f9764: 0xc4e1b7a8  lwc1        $f1, -0x4858($a3)
    ctx->pc = 0x2f9764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9768: 0xfe090018  sd          $t1, 0x18($s0)
    ctx->pc = 0x2f9768u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 9));
    // 0x2f976c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2f976cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2f9770: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2f9770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2f9774: 0x8e6202bc  lw          $v0, 0x2BC($s3)
    ctx->pc = 0x2f9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
    // 0x2f9778: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f9778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f977c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2f977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2f9780: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9780u;
    {
        const bool branch_taken_0x2f9780 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9780u;
        // 0x2f9784: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9780) {
            ctx->pc = 0x2F97A0u;
            goto label_2f97a0;
        }
    }
    ctx->pc = 0x2F9788u;
    // 0x2f9788: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f978c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f9790: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f9790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9794: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f9794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f9798: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f979c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f97a0:
    // 0x2f97a0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f97a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97a4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F97A4u;
    SET_GPR_U32(ctx, 31, 0x2F97ACu);
    ctx->pc = 0x2F97A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F97A4u;
    // 0x2f97a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F97A4u, 0x2F97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F97ACu;
label_2f97ac:
    // 0x2f97ac: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f97acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f97b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f97b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97b4: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2F97B4u;
    SET_GPR_U32(ctx, 31, 0x2F97BCu);
    ctx->pc = 0x2F97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F97B4u;
    // 0x2f97b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2F97B4u, 0x2F97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F97BCu;
label_2f97bc:
    // 0x2f97bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f97bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f97c0: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2F97C0u;
    SET_GPR_U32(ctx, 31, 0x2F97C8u);
    ctx->pc = 0x2F97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F97C0u;
    // 0x2f97c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2F97C0u, 0x2F97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F97C8u;
label_2f97c8:
    // 0x2f97c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f97cc: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F97CCu;
    {
        const bool branch_taken_0x2f97cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97CCu;
        // 0x2f97d0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97cc) {
            ctx->pc = 0x2F984Cu;
            goto label_2f984c;
        }
    }
    ctx->pc = 0x2F97D4u;
    // 0x2f97d4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f97d8: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2f97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2f97dc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f97dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f97e0: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f97e4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f97e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f97e8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2f97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2f97ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f97f0: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2f97f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f97f4: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2f97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f97f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f97f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f97fc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F97FCu;
    {
        const bool branch_taken_0x2f97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97FCu;
        // 0x2f9800: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97fc) {
            ctx->pc = 0x2F984Cu;
            goto label_2f984c;
        }
    }
    ctx->pc = 0x2F9804u;
    // 0x2f9804: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f9808: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2f9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2f980c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f980cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9810: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9810u;
    {
        const bool branch_taken_0x2f9810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9810) {
            ctx->pc = 0x2F9814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9810u;
            // 0x2f9814: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9850u;
            goto label_2f9850;
        }
    }
    ctx->pc = 0x2F9818u;
    // 0x2f9818: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2f9818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2f981c: 0x8d236b80  lw          $v1, 0x6B80($t1)
    ctx->pc = 0x2f981cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2f9820: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2f9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2f9824: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f9824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f9828: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9828u;
    {
        const bool branch_taken_0x2f9828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9828) {
            ctx->pc = 0x2F982Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9828u;
            // 0x2f982c: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9850u;
            goto label_2f9850;
        }
    }
    ctx->pc = 0x2F9830u;
    // 0x2f9830: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f9830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f9834: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2f9834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2f9838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f983c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2f983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2f9840: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f9840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f9844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9844u;
    {
        const bool branch_taken_0x2f9844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9844u;
        // 0x2f9848: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9844) {
            ctx->pc = 0x2F9854u;
            goto label_2f9854;
        }
    }
    ctx->pc = 0x2F984Cu;
label_2f984c:
    // 0x2f984c: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x2f984cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_2f9850:
    // 0x2f9850: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f9850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2f9854:
    // 0x2f9854: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f9854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f9858: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f985c: 0x4618a880  add.s       $f2, $f21, $f24
    ctx->pc = 0x2f985cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x2f9860: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f9860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9864: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f9864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f9868: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f9868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f986c: 0x8fb700c4  lw          $s7, 0xC4($sp)
    ctx->pc = 0x2f986cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2f9870: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f9870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9878: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f987c: 0xfe060048  sd          $a2, 0x48($s0)
    ctx->pc = 0x2f987cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 6));
    // 0x2f9880: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x2f9880u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x2f9884: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f9884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9888: 0x460015c6  mov.s       $f23, $f2
    ctx->pc = 0x2f9888u;
    ctx->f[23] = FPU_MOV_S(ctx->f[2]);
    // 0x2f988c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2f988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9890: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2f9890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2f9894: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f9898: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x2f9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f989c: 0xfe070038  sd          $a3, 0x38($s0)
    ctx->pc = 0x2f989cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 7));
    // 0x2f98a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f98a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f98a4: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x2f98a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
    // 0x2f98a8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2f98a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2f98ac: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f98acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f98b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f98b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f98b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f98b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f98bc: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f98bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f98c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f98c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f98c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f98c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f98cc: 0xfe030080  sd          $v1, 0x80($s0)
    ctx->pc = 0x2f98ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 3));
    // 0x2f98d0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2f98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f98d4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2f98d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2f98d8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f98d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f98dc: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x2f98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f98e0: 0xfe070078  sd          $a3, 0x78($s0)
    ctx->pc = 0x2f98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 7));
    // 0x2f98e4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2f98e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f98e8: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x2f98e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f98ec: 0x8e6202bc  lw          $v0, 0x2BC($s3)
    ctx->pc = 0x2f98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
    // 0x2f98f0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f98f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2f98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2f98f8: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F98F8u;
    {
        const bool branch_taken_0x2f98f8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F98F8u;
        // 0x2f98fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98f8) {
            ctx->pc = 0x2F9918u;
            goto label_2f9918;
        }
    }
    ctx->pc = 0x2F9900u;
    // 0x2f9900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f9900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9904: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f9904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f9908: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f990c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f990cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f9910: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9914: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f9914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f9918:
    // 0x2f9918: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f9918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f991c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F991Cu;
    SET_GPR_U32(ctx, 31, 0x2F9924u);
    ctx->pc = 0x2F9920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F991Cu;
    // 0x2f9920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F991Cu, 0x2F9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9924u;
label_2f9924:
    // 0x2f9924: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f9928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f992c: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2F992Cu;
    SET_GPR_U32(ctx, 31, 0x2F9934u);
    ctx->pc = 0x2F9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F992Cu;
    // 0x2f9930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2F992Cu, 0x2F9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9934u;
label_2f9934:
    // 0x2f9934: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f9934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f9938: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2F9938u;
    SET_GPR_U32(ctx, 31, 0x2F9940u);
    ctx->pc = 0x2F993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9938u;
    // 0x2f993c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2F9938u, 0x2F9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9940u;
label_2f9940:
    // 0x2f9940: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f9944: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9944u;
    {
        const bool branch_taken_0x2f9944 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9944u;
        // 0x2f9948: 0x3c09003c  lui         $t1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9944) {
            ctx->pc = 0x2F99C4u;
            goto label_2f99c4;
        }
    }
    ctx->pc = 0x2F994Cu;
    // 0x2f994c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9950: 0x8d261180  lw          $a2, 0x1180($t1)
    ctx->pc = 0x2f9950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x2f9954: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f9954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f9958: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f995c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f995cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f9960: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2f9964: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9968: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2f9968u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f996c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2f996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f9970: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f9970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f9974: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9974u;
    {
        const bool branch_taken_0x2f9974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9974u;
        // 0x2f9978: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9974) {
            ctx->pc = 0x2F99C4u;
            goto label_2f99c4;
        }
    }
    ctx->pc = 0x2F997Cu;
    // 0x2f997c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2f997cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f9980: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2f9980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2f9984: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f9984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9988: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9988u;
    {
        const bool branch_taken_0x2f9988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9988) {
            ctx->pc = 0x2F998Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9988u;
            // 0x2f998c: 0x36520008  ori         $s2, $s2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F99C8u;
            goto label_2f99c8;
        }
    }
    ctx->pc = 0x2F9990u;
    // 0x2f9990: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2f9990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2f9994: 0x8d236b80  lw          $v1, 0x6B80($t1)
    ctx->pc = 0x2f9994u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2f9998: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2f9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2f999c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f999cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f99a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F99A0u;
    {
        const bool branch_taken_0x2f99a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f99a0) {
            ctx->pc = 0x2F99A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F99A0u;
            // 0x2f99a4: 0x36520008  ori         $s2, $s2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F99C8u;
            goto label_2f99c8;
        }
    }
    ctx->pc = 0x2F99A8u;
    // 0x2f99a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f99ac: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2f99b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f99b4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2f99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2f99b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f99b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f99bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F99BCu;
    {
        const bool branch_taken_0x2f99bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99BCu;
        // 0x2f99c0: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99bc) {
            ctx->pc = 0x2F99CCu;
            goto label_2f99cc;
        }
    }
    ctx->pc = 0x2F99C4u;
label_2f99c4:
    // 0x2f99c4: 0x36520008  ori         $s2, $s2, 0x8
    ctx->pc = 0x2f99c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_2f99c8:
    // 0x2f99c8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2f99cc:
    // 0x2f99cc: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x2f99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x2f99d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f99d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2f99d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f99d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f99dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f99dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f99e0: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2f99e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2f99e4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f99e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f99e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f99e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f99ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f99f0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2f99f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f99f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f99f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f99f8: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x2f99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x2f99fc: 0x4619b080  add.s       $f2, $f22, $f25
    ctx->pc = 0x2f99fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
    // 0x2f9a00: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x2f9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x2f9a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9a08: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2f9a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a0c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2f9a0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2f9a10: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x2f9a10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f9a14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f9a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f9a18: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2f9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2f9a1c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2f9a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9a20: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x2f9a20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x2f9a24: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2f9a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2f9a28: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2f9a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2f9a2c: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f9a30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f9a34: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9a38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2f9a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f9a3c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f9a3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f9a40: 0xfe0700a8  sd          $a3, 0xA8($s0)
    ctx->pc = 0x2f9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 7));
    // 0x2f9a44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f9a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f9a50: 0xfe0300a0  sd          $v1, 0xA0($s0)
    ctx->pc = 0x2f9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 3));
    // 0x2f9a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9a58: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2f9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a5c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f9a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f9a60: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x2f9a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f9a64: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2f9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a68: 0xfe030098  sd          $v1, 0x98($s0)
    ctx->pc = 0x2f9a68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 3));
    // 0x2f9a6c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2f9a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2f9a70: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f9a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f9a74: 0x8e6202bc  lw          $v0, 0x2BC($s3)
    ctx->pc = 0x2f9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
    // 0x2f9a78: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f9a7c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f9a80: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9A80u;
    {
        const bool branch_taken_0x2f9a80 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A80u;
        // 0x2f9a84: 0x25360002  addiu       $s6, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a80) {
            ctx->pc = 0x2F9AA0u;
            goto label_2f9aa0;
        }
    }
    ctx->pc = 0x2F9A88u;
    // 0x2f9a88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a8c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f9a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f9a90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9a94: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f9a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f9a98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f9a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f9a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f9aa0:
    // 0x2f9aa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9aa4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f9aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9aa8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F9AA8u;
    SET_GPR_U32(ctx, 31, 0x2F9AB0u);
    ctx->pc = 0x2F9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AA8u;
    // 0x2f9aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F9AA8u, 0x2F9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AB0u;
label_2f9ab0:
    // 0x2f9ab0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f9ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ab8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2F9AB8u;
    SET_GPR_U32(ctx, 31, 0x2F9AC0u);
    ctx->pc = 0x2F9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AB8u;
    // 0x2f9abc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2F9AB8u, 0x2F9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AC0u;
label_2f9ac0:
    // 0x2f9ac0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f9ac4: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2F9AC4u;
    SET_GPR_U32(ctx, 31, 0x2F9ACCu);
    ctx->pc = 0x2F9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AC4u;
    // 0x2f9ac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2F9AC4u, 0x2F9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9ACCu;
label_2f9acc:
    // 0x2f9acc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f9accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f9ad0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9AD0u;
    {
        const bool branch_taken_0x2f9ad0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD0u;
        // 0x2f9ad4: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ad0) {
            ctx->pc = 0x2F9B50u;
            goto label_2f9b50;
        }
    }
    ctx->pc = 0x2F9AD8u;
    // 0x2f9ad8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2f9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9adc: 0x8c861180  lw          $a2, 0x1180($a0)
    ctx->pc = 0x2f9adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4480)));
    // 0x2f9ae0: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f9ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f9ae4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2f9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2f9ae8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f9ae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f9aec: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2f9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2f9af0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9af4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2f9af4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f9af8: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2f9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f9afc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f9afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f9b00: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9B00u;
    {
        const bool branch_taken_0x2f9b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B00u;
        // 0x2f9b04: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b00) {
            ctx->pc = 0x2F9B50u;
            goto label_2f9b50;
        }
    }
    ctx->pc = 0x2F9B08u;
    // 0x2f9b08: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2f9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f9b0c: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2f9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2f9b10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f9b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9b14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9B14u;
    {
        const bool branch_taken_0x2f9b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b14) {
            ctx->pc = 0x2F9B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9B14u;
            // 0x2f9b18: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B54u;
            goto label_2f9b54;
        }
    }
    ctx->pc = 0x2F9B1Cu;
    // 0x2f9b1c: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2f9b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2f9b20: 0x8d236b80  lw          $v1, 0x6B80($t1)
    ctx->pc = 0x2f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2f9b24: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2f9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2f9b28: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f9b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f9b2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9B2Cu;
    {
        const bool branch_taken_0x2f9b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b2c) {
            ctx->pc = 0x2F9B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9B2Cu;
            // 0x2f9b30: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B54u;
            goto label_2f9b54;
        }
    }
    ctx->pc = 0x2F9B34u;
    // 0x2f9b34: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f9b38: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2f9b3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9b40: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2f9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2f9b44: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f9b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f9b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9B48u;
    {
        const bool branch_taken_0x2f9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B48u;
        // 0x2f9b4c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b48) {
            ctx->pc = 0x2F9B58u;
            goto label_2f9b58;
        }
    }
    ctx->pc = 0x2F9B50u;
label_2f9b50:
    // 0x2f9b50: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x2f9b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_2f9b54:
    // 0x2f9b54: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2f9b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2f9b58:
    // 0x2f9b58: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x2f9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x2f9b5c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2f9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f9b60: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f9b64: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9b68: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2f9b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2f9b6c: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2f9b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2f9b70: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2f9b70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2f9b74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f9b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f9b78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9b7c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2f9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f9b80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f9b84: 0xfc870048  sd          $a3, 0x48($a0)
    ctx->pc = 0x2f9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 7));
    // 0x2f9b88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9b8c: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x2f9b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
    // 0x2f9b90: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2f9b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9b94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f9b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2f9b98: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2f9b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2f9b9c: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2f9b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9ba0: 0xfc890038  sd          $t1, 0x38($a0)
    ctx->pc = 0x2f9ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 9));
    // 0x2f9ba4: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x2f9ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2f9ba8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9BA8u;
    {
        const bool branch_taken_0x2f9ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BA8u;
        // 0x2f9bac: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ba8) {
            ctx->pc = 0x2F9BD4u;
            goto label_2f9bd4;
        }
    }
    ctx->pc = 0x2F9BB0u;
    // 0x2f9bb0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f9bb4: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x2f9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x2f9bb8: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x2f9bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x2f9bbc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9bc0: 0xfe030048  sd          $v1, 0x48($s0)
    ctx->pc = 0x2f9bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
    // 0x2f9bc4: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x2f9bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x2f9bc8: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x2f9bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x2f9bcc: 0xfc830048  sd          $v1, 0x48($a0)
    ctx->pc = 0x2f9bccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
    // 0x2f9bd0: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x2f9bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_2f9bd4:
    // 0x2f9bd4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x2f9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2f9bd8: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x2f9bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2f9bdc: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2f9be0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2f9be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2f9be4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f9be8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f9bec: 0x8e62030c  lw          $v0, 0x30C($s3)
    ctx->pc = 0x2f9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x2f9bf0: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x2f9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2f9bf4: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2f9bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2f9bf8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x2f9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x2f9bfc: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x2f9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
    // 0x2f9c00: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2f9c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9c04: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x2F9C04u;
    {
        const bool branch_taken_0x2f9c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C04u;
        // 0x2f9c08: 0xafa600b8  sw          $a2, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c04) {
            ctx->pc = 0x2F9648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9648;
        }
    }
    ctx->pc = 0x2F9C0Cu;
label_2f9c0c:
    // 0x2f9c0c: 0x8e620310  lw          $v0, 0x310($s3)
    ctx->pc = 0x2f9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 784)));
    // 0x2f9c10: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2f9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2f9c14: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2f9c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9c18: 0x5440fe7b  bnel        $v0, $zero, . + 4 + (-0x185 << 2)
    ctx->pc = 0x2F9C18u;
    {
        const bool branch_taken_0x2f9c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c18) {
            ctx->pc = 0x2F9C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C18u;
            // 0x2f9c1c: 0x8e630300  lw          $v1, 0x300($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9608;
        }
    }
    ctx->pc = 0x2F9C20u;
label_2f9c20:
    // 0x2f9c20: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2f9c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f9c24: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x2f9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x2f9c28: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2f9c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2f9c2c: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x2f9c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f9c30: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f9c34: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x2f9c34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2f9c38: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2f9c38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2f9c3c: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2f9c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2f9c40: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x2f9c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2f9c44: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2f9c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f9c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c4c: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2f9c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2f9c50: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9c54: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x2f9c54u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x2f9c58: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2f9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2f9c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c60: 0x8cc31180  lw          $v1, 0x1180($a2)
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f9c64: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2f9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f9c68: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f9c6c: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2f9c6cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9c70: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x2f9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x2f9c74: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2f9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2f9c78: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2f9c78u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2f9c7c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2f9c7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2f9c80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9c84: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2f9c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2f9c88: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2F9C88u;
    SET_GPR_U32(ctx, 31, 0x2F9C90u);
    ctx->pc = 0x2F9C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C88u;
    // 0x2f9c8c: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2F9C88u, 0x2F9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C90u;
label_2f9c90:
    // 0x2f9c90: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2f9c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2f9c94:
    // 0x2f9c94: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2f9c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2f9c98:
    // 0x2f9c98: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2f9c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f9c9c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2f9c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2f9ca0: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2f9ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f9ca4: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2f9ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f9ca8: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2f9ca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f9cac: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2f9cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f9cb0: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2f9cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f9cb4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2f9cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f9cb8: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x2f9cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2f9cbc: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x2f9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2f9cc0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x2f9cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2f9cc4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2f9cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f9cc8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2f9cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f9ccc: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2f9cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f9cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CD0u;
        // 0x2f9cd4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9CD8u;
    // 0x2f9cd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f9cdc: 0x0  nop
    ctx->pc = 0x2f9cdcu;
    // NOP
    ctx->pc = 0x2f9ce0u;
}
