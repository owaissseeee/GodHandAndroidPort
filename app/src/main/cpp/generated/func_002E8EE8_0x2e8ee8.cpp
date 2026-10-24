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

// Function: func_002E8EE8
// Address: 0x2e8ee8 - 0x2e9808
void func_002E8EE8_0x2e8ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E8EE8_0x2e8ee8");
#endif

    switch (ctx->pc) {
        case 0x2e8f70u: goto label_2e8f70;
        case 0x2e90acu: goto label_2e90ac;
        case 0x2e97d8u: goto label_2e97d8;
        default: break;
    }

    ctx->pc = 0x2e8ee8u;

    // 0x2e8ee8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e8ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e8eec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e8eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e8ef0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2e8ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2e8ef4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ef8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2e8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2e8efc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e8efcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e8f04: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2e8f04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f08: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e8f0c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e8f10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e8f14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e8f18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e8f1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8f20: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x2e8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x2e8f24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F24u;
    {
        const bool branch_taken_0x2e8f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F24u;
        // 0x2e8f28: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f24) {
            ctx->pc = 0x2E8F3Cu;
            goto label_2e8f3c;
        }
    }
    ctx->pc = 0x2E8F2Cu;
    // 0x2e8f2c: 0x24133b00  addiu       $s3, $zero, 0x3B00
    ctx->pc = 0x2e8f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2e8f30: 0x24163900  addiu       $s6, $zero, 0x3900
    ctx->pc = 0x2e8f30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2e8f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F34u;
    {
        const bool branch_taken_0x2e8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F34u;
        // 0x2e8f38: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f34) {
            ctx->pc = 0x2E8F4Cu;
            goto label_2e8f4c;
        }
    }
    ctx->pc = 0x2E8F3Cu;
label_2e8f3c:
    // 0x2e8f3c: 0x24133900  addiu       $s3, $zero, 0x3900
    ctx->pc = 0x2e8f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2e8f40: 0x24023b00  addiu       $v0, $zero, 0x3B00
    ctx->pc = 0x2e8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2e8f44: 0x47980b  movn        $s3, $v0, $a3
    ctx->pc = 0x2e8f44u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2e8f48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e8f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f4c:
    // 0x2e8f4c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e8f50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e8f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8f54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e8f58: 0xc6400194  lwc1        $f0, 0x194($s2)
    ctx->pc = 0x2e8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e8f60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e8f64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e8f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e8f68: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E8F68u;
    SET_GPR_U32(ctx, 31, 0x2E8F70u);
    ctx->pc = 0x2E8F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F68u;
    // 0x2e8f6c: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E8F68u, 0x2E8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F70u;
label_2e8f70:
    // 0x2e8f70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e8f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f74: 0x12a00218  beqz        $s5, . + 4 + (0x218 << 2)
    ctx->pc = 0x2E8F74u;
    {
        const bool branch_taken_0x2e8f74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F74u;
        // 0x2e8f78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f74) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E8F7Cu;
    // 0x2e8f7c: 0xfea00008  sd          $zero, 0x8($s5)
    ctx->pc = 0x2e8f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 0));
    // 0x2e8f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e8f84: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x2e8f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8f88: 0x73f38  dsll        $a3, $a3, 28
    ctx->pc = 0x2e8f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 28);
    // 0x2e8f8c: 0x34e7a000  ori         $a3, $a3, 0xA000
    ctx->pc = 0x2e8f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
    // 0x2e8f90: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x2e8f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x2e8f94: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2e8f94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8f98: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x2e8f98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x2e8f9c: 0x35298004  ori         $t1, $t1, 0x8004
    ctx->pc = 0x2e8f9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32772);
    // 0x2e8fa0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8fa4: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x2e8fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8fa8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e8fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e8fac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e8facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8fb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e8fb4: 0x340bff00  ori         $t3, $zero, 0xFF00
    ctx->pc = 0x2e8fb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2e8fb8: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x2e8fb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x2e8fbc: 0x356b0070  ori         $t3, $t3, 0x70
    ctx->pc = 0x2e8fbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)112);
    // 0x2e8fc0: 0x240c004c  addiu       $t4, $zero, 0x4C
    ctx->pc = 0x2e8fc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e8fc4: 0x340d9d00  ori         $t5, $zero, 0x9D00
    ctx->pc = 0x2e8fc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x2e8fc8: 0xd6c78  dsll        $t5, $t5, 17
    ctx->pc = 0x2e8fc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 17);
    // 0x2e8fcc: 0x35ad00f8  ori         $t5, $t5, 0xF8
    ctx->pc = 0x2e8fccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)248);
    // 0x2e8fd0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2e8fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8fd4: 0x240e004e  addiu       $t6, $zero, 0x4E
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e8fd8: 0x3c0f0003  lui         $t7, 0x3
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)3 << 16));
    // 0x2e8fdc: 0x35ef000a  ori         $t7, $t7, 0xA
    ctx->pc = 0x2e8fdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)10);
    // 0x2e8fe0: 0x24110047  addiu       $s1, $zero, 0x47
    ctx->pc = 0x2e8fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2e8fe4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x2e8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2e8fe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e8fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e8ff0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e8ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e8ff4: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x2e8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x2e8ff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ffc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2e8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e9000: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9004: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x2e9004u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x2e9008: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2e9008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e900c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2e900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e9010: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9014: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x2e9014u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x2e9018: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2e9018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e901c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2e9020: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9024: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x2e9024u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
    // 0x2e9028: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x2e9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2e902c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2e902cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9030: 0x103402a  slt         $t0, $t0, $v1
    ctx->pc = 0x2e9030u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e9034: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e9038: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x2e9038u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e903c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2e9040: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e9040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e9044: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2e9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2e9048: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e904c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2e904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2e9050: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2e9050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2e9054: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e9054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9058: 0xfc6c0000  sd          $t4, 0x0($v1)
    ctx->pc = 0x2e9058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
    // 0x2e905c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2e905cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9060: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2e9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e9064: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9068: 0xfccd0008  sd          $t5, 0x8($a2)
    ctx->pc = 0x2e9068u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 13));
    // 0x2e906c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9070: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2e9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e9074: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9078: 0xfc6e0008  sd          $t6, 0x8($v1)
    ctx->pc = 0x2e9078u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 14));
    // 0x2e907c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2e907cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9080: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2e9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e9084: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9088: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x2e9088u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x2e908c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9090: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2e9090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e9094: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9098: 0xfc710008  sd          $s1, 0x8($v1)
    ctx->pc = 0x2e9098u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 17));
    // 0x2e909c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e90a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e90a4: 0xc0be93c  jal         func_2FA4F0
    ctx->pc = 0x2E90A4u;
    SET_GPR_U32(ctx, 31, 0x2E90ACu);
    ctx->pc = 0x2E90A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90A4u;
    // 0x2e90a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA4F0u, 0x2E90A4u, 0x2E90ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90ACu;
label_2e90ac:
    // 0x2e90ac: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x2e90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x2e90b0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2E90B0u;
    {
        const bool branch_taken_0x2e90b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90B0u;
        // 0x2e90b4: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90b0) {
            ctx->pc = 0x2E92E0u;
            goto label_2e92e0;
        }
    }
    ctx->pc = 0x2E90B8u;
    // 0x2e90b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e90bc: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2e90bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2e90c0: 0x41a38  dsll        $v1, $a0, 8
    ctx->pc = 0x2e90c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 8);
    // 0x2e90c4: 0x3406a000  ori         $a2, $zero, 0xA000
    ctx->pc = 0x2e90c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e90c8: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x2e90c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x2e90cc: 0x34c69110  ori         $a2, $a2, 0x9110
    ctx->pc = 0x2e90ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37136);
    // 0x2e90d0: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x2e90d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x2e90d4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2e90d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2e90d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e90d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e90dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e90e0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e90e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e90e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e90e8: 0x24470088  addiu       $a3, $v0, 0x88
    ctx->pc = 0x2e90e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x2e90ec: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x2e90ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x2e90f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e90f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e90f4: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x2e90f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x2e90f8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2e90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2e90fc: 0x3406e400  ori         $a2, $zero, 0xE400
    ctx->pc = 0x2e90fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2e9100: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2e9100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2e9104: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x2e9104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2e9108: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x2e9108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e910c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x2e910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x2e9110: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2e9110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2e9114: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e9114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e9118: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2e9118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2e911c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x2e911cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x2e9120: 0x24580008  addiu       $t8, $v0, 0x8
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e9124: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e9124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e9128: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2e9128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e912c: 0x73ef8  dsll        $a3, $a3, 27
    ctx->pc = 0x2e912cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 27);
    // 0x2e9130: 0x34e7b800  ori         $a3, $a3, 0xB800
    ctx->pc = 0x2e9130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)47104);
    // 0x2e9134: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x2e9134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x2e9138: 0x2652825  or          $a1, $s3, $a1
    ctx->pc = 0x2e9138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x2e913c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2e913cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2e9140: 0x3404a26a  ori         $a0, $zero, 0xA26A
    ctx->pc = 0x2e9140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41578);
    // 0x2e9144: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2e9144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2e9148: 0x34849e89  ori         $a0, $a0, 0x9E89
    ctx->pc = 0x2e9148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40585);
    // 0x2e914c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e914cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e9150: 0x3484e89b  ori         $a0, $a0, 0xE89B
    ctx->pc = 0x2e9150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59547);
    // 0x2e9154: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x2e9154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x2e9158: 0x2402015c  addiu       $v0, $zero, 0x15C
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2e915c: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x2e915cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x2e9160: 0xff050018  sd          $a1, 0x18($t8)
    ctx->pc = 0x2e9160u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 5));
    // 0x2e9164: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2e9168: 0xff020010  sd          $v0, 0x10($t8)
    ctx->pc = 0x2e9168u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 2));
    // 0x2e916c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2e916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e9170: 0xff030070  sd          $v1, 0x70($t8)
    ctx->pc = 0x2e9170u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 3));
    // 0x2e9174: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x2e9178: 0x35ad0008  ori         $t5, $t5, 0x8
    ctx->pc = 0x2e9178u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8);
    // 0x2e917c: 0xff030028  sd          $v1, 0x28($t8)
    ctx->pc = 0x2e917cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 3));
    // 0x2e9180: 0x3c0b0008  lui         $t3, 0x8
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8 << 16));
    // 0x2e9184: 0x356b07f8  ori         $t3, $t3, 0x7F8
    ctx->pc = 0x2e9184u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2040);
    // 0x2e9188: 0xff030040  sd          $v1, 0x40($t8)
    ctx->pc = 0x2e9188u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 3));
    // 0x2e918c: 0x3c0a0708  lui         $t2, 0x708
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1800 << 16));
    // 0x2e9190: 0x354a0008  ori         $t2, $t2, 0x8
    ctx->pc = 0x2e9190u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8);
    // 0x2e9194: 0xff030058  sd          $v1, 0x58($t8)
    ctx->pc = 0x2e9194u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 3));
    // 0x2e9198: 0x3c090708  lui         $t1, 0x708
    ctx->pc = 0x2e9198u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1800 << 16));
    // 0x2e919c: 0x352907f8  ori         $t1, $t1, 0x7F8
    ctx->pc = 0x2e919cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2040);
    // 0x2e91a0: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2e91a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e91a4: 0xc62fc  dsll32      $t4, $t4, 11
    ctx->pc = 0x2e91a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 11));
    // 0x2e91a8: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x2e91a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x2e91ac: 0x8d02118c  lw          $v0, 0x118C($t0)
    ctx->pc = 0x2e91acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e91b0: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e91b4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e91b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e91bc: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e91bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e91c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e91c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e91c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e91c8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e91cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e91d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e91d4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e91d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e91dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e91dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e91e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e91e4: 0xff020030  sd          $v0, 0x30($t8)
    ctx->pc = 0x2e91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 2));
    // 0x2e91e8: 0x8d03118c  lw          $v1, 0x118C($t0)
    ctx->pc = 0x2e91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e91ec: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e91f0: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e91f4: 0x87221180  lh          $v0, 0x1180($t9)
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e91f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e91fc: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x2e91fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e9200: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e9200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e9204: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e9208: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x2e9208u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e920c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e920cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e9210: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e9210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e9214: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9218: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2e9218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e921c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e9220: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e9220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e9224: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2e9224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9228: 0xff030048  sd          $v1, 0x48($t8)
    ctx->pc = 0x2e9228u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 3));
    // 0x2e922c: 0x8d04118c  lw          $a0, 0x118C($t0)
    ctx->pc = 0x2e922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e9230: 0x8f251180  lw          $a1, 0x1180($t9)
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9234: 0x8502118c  lh          $v0, 0x118C($t0)
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e9238: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2e9238u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e923c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e9240: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x2e9240u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e9244: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e9248: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e924c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e9250: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2e9250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9254: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e9254u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9258: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e925c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2e925cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e9260: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2e9260u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2e9264: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9268: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2e9268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e926c: 0xff020060  sd          $v0, 0x60($t8)
    ctx->pc = 0x2e926cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 2));
    // 0x2e9270: 0x8d05118c  lw          $a1, 0x118C($t0)
    ctx->pc = 0x2e9270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e9274: 0x8f261180  lw          $a2, 0x1180($t9)
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9278: 0x8502118c  lh          $v0, 0x118C($t0)
    ctx->pc = 0x2e9278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4492)));
    // 0x2e927c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x2e927cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e9280: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2e9280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9284: 0x87241180  lh          $a0, 0x1180($t9)
    ctx->pc = 0x2e9284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9288: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e928c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e9290: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e9290u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9294: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2e9294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e9298: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2e9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e929c: 0x24840800  addiu       $a0, $a0, 0x800
    ctx->pc = 0x2e929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x2e92a0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2e92a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2e92a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e92a8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2e92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e92ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e92acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e92b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e92b4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e92b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e92b8: 0xff090068  sd          $t1, 0x68($t8)
    ctx->pc = 0x2e92b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 9));
    // 0x2e92bc: 0xff020078  sd          $v0, 0x78($t8)
    ctx->pc = 0x2e92bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 2));
    // 0x2e92c0: 0xff0d0020  sd          $t5, 0x20($t8)
    ctx->pc = 0x2e92c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 13));
    // 0x2e92c4: 0xff0b0038  sd          $t3, 0x38($t8)
    ctx->pc = 0x2e92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 11));
    // 0x2e92c8: 0xff0a0050  sd          $t2, 0x50($t8)
    ctx->pc = 0x2e92c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 10));
    // 0x2e92cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e92d0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2e92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e92d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e92d8: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2E92D8u;
    {
        const bool branch_taken_0x2e92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92D8u;
        // 0x2e92dc: 0xfc6c0000  sd          $t4, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92d8) {
            ctx->pc = 0x2E96D8u;
            goto label_2e96d8;
        }
    }
    ctx->pc = 0x2E92E0u;
label_2e92e0:
    // 0x2e92e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e92e4: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2e92e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2e92e8: 0x33a38  dsll        $a3, $v1, 8
    ctx->pc = 0x2e92e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 8);
    // 0x2e92ec: 0x340ea000  ori         $t6, $zero, 0xA000
    ctx->pc = 0x2e92ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e92f0: 0xe76f8  dsll        $t6, $t6, 27
    ctx->pc = 0x2e92f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 27);
    // 0x2e92f4: 0x35ce9110  ori         $t6, $t6, 0x9110
    ctx->pc = 0x2e92f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)37136);
    // 0x2e92f8: 0xe7538  dsll        $t6, $t6, 20
    ctx->pc = 0x2e92f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 20);
    // 0x2e92fc: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2e92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2e9300: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x2e9300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2e9304: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e9308: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e9308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e930c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9310: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x2e9310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x2e9314: 0xfc4e0000  sd          $t6, 0x0($v0)
    ctx->pc = 0x2e9314u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 14));
    // 0x2e9318: 0x3c0a1c00  lui         $t2, 0x1C00
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7168 << 16));
    // 0x2e931c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e9320: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x2e9320u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x2e9324: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2e9324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e9328: 0x340de400  ori         $t5, $zero, 0xE400
    ctx->pc = 0x2e9328u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2e932c: 0xd6c3c  dsll32      $t5, $t5, 16
    ctx->pc = 0x2e932cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 16));
    // 0x2e9330: 0x35ad0001  ori         $t5, $t5, 0x1
    ctx->pc = 0x2e9330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
    // 0x2e9334: 0xfc4d0008  sd          $t5, 0x8($v0)
    ctx->pc = 0x2e9334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 13));
    // 0x2e9338: 0x24580008  addiu       $t8, $v0, 0x8
    ctx->pc = 0x2e9338u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e933c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2e933cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9340: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x2e9340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x2e9344: 0x34c6b800  ori         $a2, $a2, 0xB800
    ctx->pc = 0x2e9344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47104);
    // 0x2e9348: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x2e9348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x2e934c: 0x26a2825  or          $a1, $s3, $t2
    ctx->pc = 0x2e934cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 10));
    // 0x2e9350: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x2e9350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e9354: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2e9354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2e9358: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2e9358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2e935c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e9360: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e9360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2e9364: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2e9364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e9368: 0x340ca26a  ori         $t4, $zero, 0xA26A
    ctx->pc = 0x2e9368u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41578);
    // 0x2e936c: 0xc64b8  dsll        $t4, $t4, 18
    ctx->pc = 0x2e936cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 18);
    // 0x2e9370: 0x358c9e89  ori         $t4, $t4, 0x9E89
    ctx->pc = 0x2e9370u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)40585);
    // 0x2e9374: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2e9374u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x2e9378: 0x358ce89b  ori         $t4, $t4, 0xE89B
    ctx->pc = 0x2e9378u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)59547);
    // 0x2e937c: 0xc6178  dsll        $t4, $t4, 5
    ctx->pc = 0x2e937cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 5);
    // 0x2e9380: 0x2402015c  addiu       $v0, $zero, 0x15C
    ctx->pc = 0x2e9380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2e9384: 0xff050018  sd          $a1, 0x18($t8)
    ctx->pc = 0x2e9384u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 5));
    // 0x2e9388: 0xff020010  sd          $v0, 0x10($t8)
    ctx->pc = 0x2e9388u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 2));
    // 0x2e938c: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2e9390: 0xff0c0008  sd          $t4, 0x8($t8)
    ctx->pc = 0x2e9390u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 12));
    // 0x2e9394: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e9398: 0xff070028  sd          $a3, 0x28($t8)
    ctx->pc = 0x2e9398u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 7));
    // 0x2e939c: 0x2ca5025  or          $t2, $s6, $t2
    ctx->pc = 0x2e939cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 22) | GPR_U64(ctx, 10));
    // 0x2e93a0: 0xff070040  sd          $a3, 0x40($t8)
    ctx->pc = 0x2e93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 7));
    // 0x2e93a4: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x2e93a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x2e93a8: 0xff070058  sd          $a3, 0x58($t8)
    ctx->pc = 0x2e93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 7));
    // 0x2e93ac: 0x3c110008  lui         $s1, 0x8
    ctx->pc = 0x2e93acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8 << 16));
    // 0x2e93b0: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x2e93b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x2e93b4: 0xff070070  sd          $a3, 0x70($t8)
    ctx->pc = 0x2e93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 7));
    // 0x2e93b8: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x2e93b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
    // 0x2e93bc: 0x365207f8  ori         $s2, $s2, 0x7F8
    ctx->pc = 0x2e93bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2040);
    // 0x2e93c0: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2e93c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x2e93c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e93c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e93c8: 0x3c130708  lui         $s3, 0x708
    ctx->pc = 0x2e93c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1800 << 16));
    // 0x2e93cc: 0x36730008  ori         $s3, $s3, 0x8
    ctx->pc = 0x2e93ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
    // 0x2e93d0: 0x8d64118c  lw          $a0, 0x118C($t3)
    ctx->pc = 0x2e93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e93d4: 0x3c100708  lui         $s0, 0x708
    ctx->pc = 0x2e93d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1800 << 16));
    // 0x2e93d8: 0x361007f8  ori         $s0, $s0, 0x7F8
    ctx->pc = 0x2e93d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2040);
    // 0x2e93dc: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e93e0: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x2e93e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e93e4: 0x14a2fc  dsll32      $s4, $s4, 11
    ctx->pc = 0x2e93e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 11));
    // 0x2e93e8: 0x36948000  ori         $s4, $s4, 0x8000
    ctx->pc = 0x2e93e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32768);
    // 0x2e93ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e93ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93f0: 0x0  nop
    ctx->pc = 0x2e93f0u;
    // NOP
    // 0x2e93f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e93f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e93f8: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e93fc: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e93fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e9400: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e9408: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e940c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e940cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e9410: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e9410u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e9414: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2e9414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2e9418: 0x240f011c  addiu       $t7, $zero, 0x11C
    ctx->pc = 0x2e9418u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x2e941c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9420: 0x240808e0  addiu       $t0, $zero, 0x8E0
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2272));
    // 0x2e9424: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e9428: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e9428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e942c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e9430: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e9430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e9434: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e9438: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2e9438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e943c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e9440: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9444: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e9444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9448: 0xff020030  sd          $v0, 0x30($t8)
    ctx->pc = 0x2e9448u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 2));
    // 0x2e944c: 0x8d65118c  lw          $a1, 0x118C($t3)
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e9450: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9454: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e9454u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9458: 0x0  nop
    ctx->pc = 0x2e9458u;
    // NOP
    // 0x2e945c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e945cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9460: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2e9460u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e9464: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e9464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e9468: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2e9468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e946c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e9470: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9474: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e9474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e9478: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e947c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x2e947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e9480: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2e9480u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2e9484: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e9488: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e9488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e948c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2e948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2e9490: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e9490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9494: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e9498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e949c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e94a0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e94a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2e94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e94a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e94ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e94b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e94b4: 0xff020048  sd          $v0, 0x48($t8)
    ctx->pc = 0x2e94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 2));
    // 0x2e94b8: 0x8d65118c  lw          $a1, 0x118C($t3)
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e94bc: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e94c0: 0x8562118c  lh          $v0, 0x118C($t3)
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e94c4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e94c8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2e94c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e94cc: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e94d0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e94d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e94d4: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e94d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e94dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2e94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e94e0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e94e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e94e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e94e8: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2e94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2e94ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e94f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e94f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e94f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e94f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e94f8: 0xff020060  sd          $v0, 0x60($t8)
    ctx->pc = 0x2e94f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 2));
    // 0x2e94fc: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9500: 0x8d65118c  lw          $a1, 0x118C($t3)
    ctx->pc = 0x2e9500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e9504: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x2e9504u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e9508: 0x8563118c  lh          $v1, 0x118C($t3)
    ctx->pc = 0x2e9508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e950c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e9510: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2e9510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e9514: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e9518: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e951c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9520: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e9524: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2e9528: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e9528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e952c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2e952cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e9530: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e9534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e9534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9538: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2e9538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e953c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e9540: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e9540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e9544: 0xff100068  sd          $s0, 0x68($t8)
    ctx->pc = 0x2e9544u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 16));
    // 0x2e9548: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2e9548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e954c: 0xff110020  sd          $s1, 0x20($t8)
    ctx->pc = 0x2e954cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 17));
    // 0x2e9550: 0xff030078  sd          $v1, 0x78($t8)
    ctx->pc = 0x2e9550u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 3));
    // 0x2e9554: 0xff120038  sd          $s2, 0x38($t8)
    ctx->pc = 0x2e9554u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 18));
    // 0x2e9558: 0xff130050  sd          $s3, 0x50($t8)
    ctx->pc = 0x2e9558u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 19));
    // 0x2e955c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9560: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2e9560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e9564: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9568: 0xfc740000  sd          $s4, 0x0($v1)
    ctx->pc = 0x2e9568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 20));
    // 0x2e956c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x2e956cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x2e9570: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e9570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9574: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2e9574u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2e9578: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e957c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9580: 0x24430088  addiu       $v1, $v0, 0x88
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x2e9584: 0xfc4e0000  sd          $t6, 0x0($v0)
    ctx->pc = 0x2e9584u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 14));
    // 0x2e9588: 0x24580008  addiu       $t8, $v0, 0x8
    ctx->pc = 0x2e9588u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e958c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2e958cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e9590: 0xfc4d0008  sd          $t5, 0x8($v0)
    ctx->pc = 0x2e9590u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 13));
    // 0x2e9594: 0xff0c0008  sd          $t4, 0x8($t8)
    ctx->pc = 0x2e9594u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 12));
    // 0x2e9598: 0xff0f0010  sd          $t7, 0x10($t8)
    ctx->pc = 0x2e9598u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 15));
    // 0x2e959c: 0xff0a0018  sd          $t2, 0x18($t8)
    ctx->pc = 0x2e959cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 10));
    // 0x2e95a0: 0xff070070  sd          $a3, 0x70($t8)
    ctx->pc = 0x2e95a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 7));
    // 0x2e95a4: 0xff070028  sd          $a3, 0x28($t8)
    ctx->pc = 0x2e95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 7));
    // 0x2e95a8: 0xff070040  sd          $a3, 0x40($t8)
    ctx->pc = 0x2e95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 7));
    // 0x2e95ac: 0xff070058  sd          $a3, 0x58($t8)
    ctx->pc = 0x2e95acu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 7));
    // 0x2e95b0: 0x8d62118c  lw          $v0, 0x118C($t3)
    ctx->pc = 0x2e95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e95b4: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e95b8: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e95bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e95c0: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e95c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e95c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e95c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e95cc: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x2e95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2e95d0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e95d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e95d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e95d8: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2e95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2e95dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e95e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e95e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e95e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e95e8: 0xff020030  sd          $v0, 0x30($t8)
    ctx->pc = 0x2e95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 2));
    // 0x2e95ec: 0x8f251180  lw          $a1, 0x1180($t9)
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e95f0: 0x8d63118c  lw          $v1, 0x118C($t3)
    ctx->pc = 0x2e95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e95f4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2e95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e95f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e95f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e95fc: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e9600: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e9600u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e9604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9608: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x2e9608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2e960c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e960cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e9610: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2e9610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2e9614: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e9614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e9618: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e961c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e961cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9620: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e9624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e9628: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e9628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e962c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2e962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9630: 0xff030048  sd          $v1, 0x48($t8)
    ctx->pc = 0x2e9630u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 3));
    // 0x2e9634: 0x8d62118c  lw          $v0, 0x118C($t3)
    ctx->pc = 0x2e9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e9638: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e9638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e963c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e963cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e9640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9644: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e9644u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e9648: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e9648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e964c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e9650: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x2e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2e9654: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9654u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e9658: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e965c: 0x1244823  subu        $t1, $t1, $a0
    ctx->pc = 0x2e965cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2e9660: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2e9660u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2e9664: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9668: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x2e9668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2e966c: 0xff020060  sd          $v0, 0x60($t8)
    ctx->pc = 0x2e966cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 2));
    // 0x2e9670: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9674: 0x8d64118c  lw          $a0, 0x118C($t3)
    ctx->pc = 0x2e9674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4492)));
    // 0x2e9678: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e9678u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e967c: 0xff100068  sd          $s0, 0x68($t8)
    ctx->pc = 0x2e967cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 16));
    // 0x2e9680: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e9684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e9684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e9688: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e9688u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e968c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9690: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2e9690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e9694: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e9694u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e9698: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x2e9698u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2e969c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e969cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e96a0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e96a4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2e96a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e96a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e96ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e96b0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2e96b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2e96b4: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x2e96b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2e96b8: 0xff110020  sd          $s1, 0x20($t8)
    ctx->pc = 0x2e96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 17));
    // 0x2e96bc: 0xff080078  sd          $t0, 0x78($t8)
    ctx->pc = 0x2e96bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 8));
    // 0x2e96c0: 0xff120038  sd          $s2, 0x38($t8)
    ctx->pc = 0x2e96c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 18));
    // 0x2e96c4: 0xff130050  sd          $s3, 0x50($t8)
    ctx->pc = 0x2e96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 19));
    // 0x2e96c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e96cc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2e96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e96d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e96d4: 0xfc740000  sd          $s4, 0x0($v1)
    ctx->pc = 0x2e96d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 20));
label_2e96d8:
    // 0x2e96d8: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x2e96d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x2e96dc: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x2e96dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e96e0: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x2e96e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e96e4: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x2e96e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
    // 0x2e96e8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2e96e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2e96ec: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x2e96ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x2e96f0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2e96f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e96f4: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2e96f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2e96f8: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x2e96f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x2e96fc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2e96fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e9700: 0xfd200000  sd          $zero, 0x0($t1)
    ctx->pc = 0x2e9700u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 0));
    // 0x2e9704: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9708: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2e9708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e970c: 0x240d0070  addiu       $t5, $zero, 0x70
    ctx->pc = 0x2e970cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e9710: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2e9710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2e9714: 0x25220008  addiu       $v0, $t1, 0x8
    ctx->pc = 0x2e9714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e9718: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x2e9718u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x2e971c: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x2e971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2e9720: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e9720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e9724: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2e9728: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x2e9728u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x2e972c: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2e972cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e9730: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2e9730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e9734: 0x3c0b3a00  lui         $t3, 0x3A00
    ctx->pc = 0x2e9734u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)14848 << 16));
    // 0x2e9738: 0x356b00f8  ori         $t3, $t3, 0xF8
    ctx->pc = 0x2e9738u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)248);
    // 0x2e973c: 0xfd270010  sd          $a3, 0x10($t1)
    ctx->pc = 0x2e973cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 7));
    // 0x2e9740: 0x240c004e  addiu       $t4, $zero, 0x4E
    ctx->pc = 0x2e9740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e9744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e9744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e9748: 0x240e003f  addiu       $t6, $zero, 0x3F
    ctx->pc = 0x2e9748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e974c: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9750: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2e9750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2e9754: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2e9754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2e9758: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e9758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e975c: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x2e975cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e9760: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e9760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e9764: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2e9764u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e9768: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e9768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e976c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e976cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e9770: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2e9770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e977c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x2e977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x2e9780: 0xfd220018  sd          $v0, 0x18($t1)
    ctx->pc = 0x2e9780u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 2));
    // 0x2e9784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e9784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9788: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2e9788u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x2e978c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e9790: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2e9790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e9794: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e9798: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x2e9798u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x2e979c: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e97a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e97a4: 0x246b0020  addiu       $t3, $v1, 0x20
    ctx->pc = 0x2e97a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e97a8: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x2e97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x2e97ac: 0x246a0018  addiu       $t2, $v1, 0x18
    ctx->pc = 0x2e97acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2e97b0: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2e97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2e97b4: 0x1751023  subu        $v0, $t3, $s5
    ctx->pc = 0x2e97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
    // 0x2e97b8: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x2e97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x2e97bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2e97bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2e97c0: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x2e97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x2e97c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e97c8: 0xfc6e0018  sd          $t6, 0x18($v1)
    ctx->pc = 0x2e97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 14));
    // 0x2e97cc: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2e97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2e97d0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2E97D0u;
    SET_GPR_U32(ctx, 31, 0x2E97D8u);
    ctx->pc = 0x2E97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97D0u;
    // 0x2e97d4: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2E97D0u, 0x2E97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97D8u;
label_2e97d8:
    // 0x2e97d8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e97d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e97dc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e97dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e97e0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e97e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e97e4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e97e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e97e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e97e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e97ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e97ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e97f0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e97f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e97f4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e97f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e97f8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e97f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e97fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e97fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9800: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9800u;
        // 0x2e9804: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9808u;
}
