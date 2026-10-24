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

// Function: func_002B1090
// Address: 0x2b1090 - 0x2b1168
void func_002B1090_0x2b1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1090_0x2b1090");
#endif

    switch (ctx->pc) {
        case 0x2b10c0u: goto label_2b10c0;
        case 0x2b10d0u: goto label_2b10d0;
        case 0x2b10dcu: goto label_2b10dc;
        case 0x2b1110u: goto label_2b1110;
        case 0x2b1118u: goto label_2b1118;
        default: break;
    }

    ctx->pc = 0x2b1090u;

    // 0x2b1090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b1094: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b1094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b109c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b109cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b10a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b10a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b10a8: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2b10a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b10ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b10acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b10b0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2b10b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b10b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b10b8: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B10B8u;
    SET_GPR_U32(ctx, 31, 0x2B10C0u);
    ctx->pc = 0x2B10BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B10B8u;
    // 0x2b10bc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B10B8u, 0x2B10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10C0u;
label_2b10c0:
    // 0x2b10c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b10c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b10c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B10C4u;
    {
        const bool branch_taken_0x2b10c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10C4u;
        // 0x2b10c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10c4) {
            ctx->pc = 0x2B1120u;
            goto label_2b1120;
        }
    }
    ctx->pc = 0x2B10CCu;
    // 0x2b10cc: 0x0  nop
    ctx->pc = 0x2b10ccu;
    // NOP
label_2b10d0:
    // 0x2b10d0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x2b10d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b10d4: 0xc0a92c8  jal         func_2A4B20
    ctx->pc = 0x2B10D4u;
    SET_GPR_U32(ctx, 31, 0x2B10DCu);
    ctx->pc = 0x2B10D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B10D4u;
    // 0x2b10d8: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B20u, 0x2B10D4u, 0x2B10DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10DCu;
label_2b10dc:
    // 0x2b10dc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b10dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b10e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b10e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b10e4: 0x0  nop
    ctx->pc = 0x2b10e4u;
    // NOP
    // 0x2b10e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b10e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b10ec: 0xc623003c  lwc1        $f3, 0x3C($s1)
    ctx->pc = 0x2b10ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b10f0: 0xc6240044  lwc1        $f4, 0x44($s1)
    ctx->pc = 0x2b10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b10f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b10f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b10f8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2b10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b10fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b10fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b1100: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b1100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b1104: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b1104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b1108: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b1108u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b110c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2b110cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_2b1110:
    // 0x2b1110: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B1110u;
    SET_GPR_U32(ctx, 31, 0x2B1118u);
    ctx->pc = 0x2B1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1110u;
    // 0x2b1114: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B1110u, 0x2B1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1118u;
label_2b1118:
    // 0x2b1118: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b1118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b111c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b111cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b1120:
    // 0x2b1120: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2b1120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1124: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b1124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b1128: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B1128u;
    {
        const bool branch_taken_0x2b1128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1128u;
        // 0x2b112c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1128) {
            ctx->pc = 0x2B10D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b10d0;
        }
    }
    ctx->pc = 0x2B1130u;
    // 0x2b1130: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b1130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b1134: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b1138: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B1138u;
    {
        const bool branch_taken_0x2b1138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1138u;
        // 0x2b113c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1138) {
            ctx->pc = 0x2B1110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1110;
        }
    }
    ctx->pc = 0x2B1140u;
    // 0x2b1140: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2b1140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1144: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2b1144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1148: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b1148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b114c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b114cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b1150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b1150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1154: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b1154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1158: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2b1158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2b115c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1160: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1160u;
        // 0x2b1164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1168u;
}
