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

// Function: func_0031BE88
// Address: 0x31be88 - 0x31c1d0
void func_0031BE88_0x31be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031BE88_0x31be88");
#endif

    switch (ctx->pc) {
        case 0x31bf68u: goto label_31bf68;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfacu: goto label_31bfac;
        case 0x31bfb0u: goto label_31bfb0;
        case 0x31c044u: goto label_31c044;
        default: break;
    }

    ctx->pc = 0x31be88u;

    // 0x31be88: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31be8c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x31be8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31be94: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x31be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x31be98: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31be98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be9c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x31be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x31bea0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x31bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x31bea4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x31bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x31bea8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31bea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31beac: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x31beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x31beb0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x31beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x31beb4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x31beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x31beb8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x31beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x31bebc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31bec0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x31bec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x31bec4: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x31bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x31bec8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31bec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31becc: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x31bed0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x31bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x31bed4: 0x8ea90010  lw          $t1, 0x10($s5)
    ctx->pc = 0x31bed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x31bed8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x31bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x31bedc: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x31bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x31bee0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x31bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31bee4: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x31bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31bee8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31beec: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x31beecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x31bef0: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x31bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x31bef4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x31bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x31bef8: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x31bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x31befc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x31befcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf00: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x31bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x31bf04: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x31bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x31bf08: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x31bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x31bf0c: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x31bf0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf10: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31bf14: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x31bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31bf18: 0x3a4e823  subu        $sp, $sp, $a0
    ctx->pc = 0x31bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x31bf1c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x31bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x31bf20: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x31bf20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31bf28: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x31bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x31bf2c: 0x14e80009  bne         $a3, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BF2Cu;
    {
        const bool branch_taken_0x31bf2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x31BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF2Cu;
        // 0x31bf30: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf2c) {
            ctx->pc = 0x31BF54u;
            goto label_31bf54;
        }
    }
    ctx->pc = 0x31BF34u;
    // 0x31bf34: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BF34u;
    {
        const bool branch_taken_0x31bf34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bf34) {
            ctx->pc = 0x31BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BF34u;
            // 0x31bf38: 0xad680000  sw          $t0, 0x0($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BF3Cu;
            goto label_31bf3c;
        }
    }
    ctx->pc = 0x31BF3Cu;
label_31bf3c:
    // 0x31bf3c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x31bf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31bf40: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x31BF40u;
    {
        const bool branch_taken_0x31bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF40u;
        // 0x31bf44: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf40) {
            ctx->pc = 0x31C198u;
            goto label_31c198;
        }
    }
    ctx->pc = 0x31BF48u;
    // 0x31bf48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31bf4c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x31BF4Cu;
    {
        const bool branch_taken_0x31bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF4Cu;
        // 0x31bf50: 0xad620004  sw          $v0, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf4c) {
            ctx->pc = 0x31C198u;
            goto label_31c198;
        }
    }
    ctx->pc = 0x31BF54u;
label_31bf54:
    // 0x31bf54: 0x1920000c  blez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x31BF54u;
    {
        const bool branch_taken_0x31bf54 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x31BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF54u;
        // 0x31bf58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf54) {
            ctx->pc = 0x31BF88u;
            goto label_31bf88;
        }
    }
    ctx->pc = 0x31BF5Cu;
    // 0x31bf5c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31bf60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf64: 0xc4400e7c  lwc1        $f0, 0xE7C($v0)
    ctx->pc = 0x31bf64u;
    { uint32_t bits = FAST_READ32(0x450E7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31bf68:
    // 0x31bf68: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x31bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x31bf6c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x31bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x31bf70: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x31bf70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bf74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31bf78: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x31bf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x31bf7c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31bf80: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31BF80u;
    {
        const bool branch_taken_0x31bf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF80u;
        // 0x31bf84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf80) {
            ctx->pc = 0x31BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf68;
        }
    }
    ctx->pc = 0x31BF88u;
label_31bf88:
    // 0x31bf88: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x31bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x31bf8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31bf90: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31bf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31bf94: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x31bf94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf98: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x31bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x31bf9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31bf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bfa0: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x31bfa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x31bfa4: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x31bfa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31bfa8:
    // 0x31bfa8: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x31bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_31bfac:
    // 0x31bfac: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x31bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_31bfb0:
    // 0x31bfb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31bfb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bfb8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31bfbc: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x31bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x31bfc0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x31bfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31bfc4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x31bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x31bfc8: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x31bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x31bfcc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x31bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31bfd0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x31bfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31bfd4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x31bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x31bfd8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x31bfd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x31bfdc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x31bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x31bfe0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x31bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31bfe4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31bfe8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31bfec: 0x12080007  beq         $s0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BFECu;
    {
        const bool branch_taken_0x31bfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x31BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFECu;
        // 0x31bff0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfec) {
            ctx->pc = 0x31C00Cu;
            goto label_31c00c;
        }
    }
    ctx->pc = 0x31BFF4u;
    // 0x31bff4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x31bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x31bff8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31bff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31bffc: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x31BFFCu;
    {
        const bool branch_taken_0x31bffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bffc) {
            ctx->pc = 0x31C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BFFCu;
            // 0x31c000: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C094u;
            goto label_31c094;
        }
    }
    ctx->pc = 0x31C004u;
    // 0x31c004: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31C004u;
    {
        const bool branch_taken_0x31c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C004u;
        // 0x31c008: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c004) {
            ctx->pc = 0x31C05Cu;
            goto label_31c05c;
        }
    }
    ctx->pc = 0x31C00Cu;
label_31c00c:
    // 0x31c00c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x31c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31c010: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x31c010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c014: 0x2e2182b  sltu        $v1, $s7, $v0
    ctx->pc = 0x31c014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31c018: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x31c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c01c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x31c01cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x31c020: 0x7fc80010  sq          $t0, 0x10($fp)
    ctx->pc = 0x31c020u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 8));
    // 0x31c024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c028: 0x7fc90020  sq          $t1, 0x20($fp)
    ctx->pc = 0x31c028u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), GPR_VEC(ctx, 9));
    // 0x31c02c: 0x7fca0030  sq          $t2, 0x30($fp)
    ctx->pc = 0x31c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), GPR_VEC(ctx, 10));
    // 0x31c030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c034: 0x7fcb0040  sq          $t3, 0x40($fp)
    ctx->pc = 0x31c034u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 64), GPR_VEC(ctx, 11));
    // 0x31c038: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31c038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31c03c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x31C03Cu;
    SET_GPR_U32(ctx, 31, 0x31C044u);
    ctx->pc = 0x31C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C03Cu;
    // 0x31c040: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x31C03Cu, 0x31C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C044u;
label_31c044:
    // 0x31c044: 0x7bcb0040  lq          $t3, 0x40($fp)
    ctx->pc = 0x31c044u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x31c048: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x31c048u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x31c04c: 0x7bca0030  lq          $t2, 0x30($fp)
    ctx->pc = 0x31c04cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x31c050: 0x7bc90020  lq          $t1, 0x20($fp)
    ctx->pc = 0x31c050u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x31c054: 0x7bc80010  lq          $t0, 0x10($fp)
    ctx->pc = 0x31c054u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x31c058: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x31c058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_31c05c:
    // 0x31c05c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x31c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x31c060: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x31c060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c064: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x31c068: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x31c068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c06c: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x31C06Cu;
    {
        const bool branch_taken_0x31c06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C06Cu;
        // 0x31c070: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c06c) {
            ctx->pc = 0x31C180u;
            goto label_31c180;
        }
    }
    ctx->pc = 0x31C074u;
    // 0x31c074: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x31c074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x31c078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31c078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31c07c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31c080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31c084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31c088: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x31c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x31c08c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x31C08Cu;
    {
        const bool branch_taken_0x31c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C08Cu;
        // 0x31c090: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c08c) {
            ctx->pc = 0x31BFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfa8;
        }
    }
    ctx->pc = 0x31C094u;
label_31c094:
    // 0x31c094: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c098: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x31c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31c09c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x31c09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x31c0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c0a4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31c0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c0a8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x31c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x31c0ac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x31c0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31c0b0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x31c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c0b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x31c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31c0b8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x31c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31c0bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C0BCu;
    {
        const bool branch_taken_0x31c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0BCu;
        // 0x31c0c0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0bc) {
            ctx->pc = 0x31C0D0u;
            goto label_31c0d0;
        }
    }
    ctx->pc = 0x31C0C4u;
    // 0x31c0c4: 0x460ffb9  bltz        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x31C0C4u;
    {
        const bool branch_taken_0x31c0c4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x31C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0C4u;
        // 0x31c0c8: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0c4) {
            ctx->pc = 0x31BFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfac;
        }
    }
    ctx->pc = 0x31C0CCu;
    // 0x31c0cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_31c0d0:
    // 0x31c0d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31c0d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C0D4u;
    {
        const bool branch_taken_0x31c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0D4u;
        // 0x31c0d8: 0x94a40002  lhu         $a0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0d4) {
            ctx->pc = 0x31C0E4u;
            goto label_31c0e4;
        }
    }
    ctx->pc = 0x31C0DCu;
    // 0x31c0dc: 0x5090ffb3  beql        $a0, $s0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x31C0DCu;
    {
        const bool branch_taken_0x31c0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x31c0dc) {
            ctx->pc = 0x31C0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C0DCu;
            // 0x31c0e0: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfac;
        }
    }
    ctx->pc = 0x31C0E4u;
label_31c0e4:
    // 0x31c0e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x31c0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c0e8: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C0E8u;
    {
        const bool branch_taken_0x31c0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x31C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0E8u;
        // 0x31c0ec: 0x901026  xor         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0e8) {
            ctx->pc = 0x31C0F8u;
            goto label_31c0f8;
        }
    }
    ctx->pc = 0x31C0F0u;
    // 0x31c0f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31C0F0u;
    {
        const bool branch_taken_0x31c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0F0u;
        // 0x31c0f4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0f0) {
            ctx->pc = 0x31C100u;
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C0F8u;
label_31c0f8:
    // 0x31c0f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c0fc: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x31c0fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_31c100:
    // 0x31c100: 0x2871021  addu        $v0, $s4, $a3
    ctx->pc = 0x31c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x31c104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31c104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c108: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31c108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c10c: 0x1064ffa7  beq         $v1, $a0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x31C10Cu;
    {
        const bool branch_taken_0x31c10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x31C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C10Cu;
        // 0x31c110: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c10c) {
            ctx->pc = 0x31BFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfac;
        }
    }
    ctx->pc = 0x31C114u;
    // 0x31c114: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c118: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x31c118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31c11c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x31c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x31c120: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x31c120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x31c124: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c12c: 0x0  nop
    ctx->pc = 0x31c12cu;
    // NOP
    // 0x31c130: 0x4503ff9f  bc1tl       . + 4 + (-0x61 << 2)
    ctx->pc = 0x31C130u;
    {
        const bool branch_taken_0x31c130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c130) {
            ctx->pc = 0x31C134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C130u;
            // 0x31c134: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfb0;
        }
    }
    ctx->pc = 0x31C138u;
    // 0x31c138: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x31c138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31c13c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x31c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31c140: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31c140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31c144: 0x5040ff9a  beql        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x31C144u;
    {
        const bool branch_taken_0x31c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c144) {
            ctx->pc = 0x31C148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C144u;
            // 0x31c148: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfb0;
        }
    }
    ctx->pc = 0x31C14Cu;
    // 0x31c14c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x31c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31c150: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x31c150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31c154: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x31c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x31c158: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31c158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31c15c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x31c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x31c160: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31c164: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x31c164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x31c168: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x31c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x31c16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c170: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31c170u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x31c174: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31c174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x31c178: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x31C178u;
    {
        const bool branch_taken_0x31c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C178u;
        // 0x31c17c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c178) {
            ctx->pc = 0x31BFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfa8;
        }
    }
    ctx->pc = 0x31C180u;
label_31c180:
    // 0x31c180: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x31c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x31c184: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C184u;
    {
        const bool branch_taken_0x31c184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C184u;
        // 0x31c188: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c184) {
            ctx->pc = 0x31C198u;
            goto label_31c198;
        }
    }
    ctx->pc = 0x31C18Cu;
    // 0x31c18c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31c190: 0xc4420e7c  lwc1        $f2, 0xE7C($v0)
    ctx->pc = 0x31c190u;
    { uint32_t bits = FAST_READ32(0x450E7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31c194: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x31c194u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_31c198:
    // 0x31c198: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31c198u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c19c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x31c19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31c1a0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x31c1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31c1a4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x31c1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31c1a8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x31c1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31c1ac: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x31c1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31c1b0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x31c1b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31c1b4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x31c1b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31c1b8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x31c1b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31c1bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31c1bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31c1c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31c1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c1c4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x31c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31C1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1C8u;
        // 0x31c1cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C1D0u;
}
