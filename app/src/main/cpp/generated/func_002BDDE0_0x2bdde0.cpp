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

// Function: func_002BDDE0
// Address: 0x2bdde0 - 0x2bdee8
void func_002BDDE0_0x2bdde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDDE0_0x2bdde0");
#endif

    switch (ctx->pc) {
        case 0x2bde10u: goto label_2bde10;
        case 0x2bde28u: goto label_2bde28;
        default: break;
    }

    ctx->pc = 0x2bdde0u;

    // 0x2bdde0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bdde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bdde4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bdde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bdde8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bdde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2bddec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bddecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bddf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bddf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bddf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bddf8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bddf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bddfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bddfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2bde00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2bde04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bde04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bde08: 0xc0af7ba  jal         func_2BDEE8
    ctx->pc = 0x2BDE08u;
    SET_GPR_U32(ctx, 31, 0x2BDE10u);
    ctx->pc = 0x2BDE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE08u;
    // 0x2bde0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDEE8u, 0x2BDE08u, 0x2BDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE10u;
label_2bde10:
    // 0x2bde10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bde10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bde14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bde18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bde1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde20: 0xc0af7cc  jal         func_2BDF30
    ctx->pc = 0x2BDE20u;
    SET_GPR_U32(ctx, 31, 0x2BDE28u);
    ctx->pc = 0x2BDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE20u;
    // 0x2bde24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDF30u, 0x2BDE20u, 0x2BDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE28u;
label_2bde28:
    // 0x2bde28: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE28u;
    {
        const bool branch_taken_0x2bde28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE28u;
        // 0x2bde2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde28) {
            ctx->pc = 0x2BDE38u;
            goto label_2bde38;
        }
    }
    ctx->pc = 0x2BDE30u;
    // 0x2bde30: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE30u;
    {
        const bool branch_taken_0x2bde30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde30) {
            ctx->pc = 0x2BDE40u;
            goto label_2bde40;
        }
    }
    ctx->pc = 0x2BDE38u;
label_2bde38:
    // 0x2bde38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2BDE38u;
    {
        const bool branch_taken_0x2bde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE38u;
        // 0x2bde3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde38) {
            ctx->pc = 0x2BDEC8u;
            goto label_2bdec8;
        }
    }
    ctx->pc = 0x2BDE40u;
label_2bde40:
    // 0x2bde40: 0x12640020  beq         $s3, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BDE40u;
    {
        const bool branch_taken_0x2bde40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE40u;
        // 0x2bde44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde40) {
            ctx->pc = 0x2BDEC4u;
            goto label_2bdec4;
        }
    }
    ctx->pc = 0x2BDE48u;
    // 0x2bde48: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x2bde48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bde4c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2bde4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2bde50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2bde50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bde54: 0x0  nop
    ctx->pc = 0x2bde54u;
    // NOP
    // 0x2bde58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bde58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bde5c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2bde5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bde60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bde60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bde64: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2bde64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bde68: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2bde68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bde6c: 0x0  nop
    ctx->pc = 0x2bde6cu;
    // NOP
    // 0x2bde70: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2bde70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bde74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bde78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bde78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bde7c: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x2bde7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2bde80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2bde80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bde84: 0x0  nop
    ctx->pc = 0x2bde84u;
    // NOP
    // 0x2bde88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bde88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bde8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2bde8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bde90: 0x0  nop
    ctx->pc = 0x2bde90u;
    // NOP
    // 0x2bde94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bde94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bde98: 0x0  nop
    ctx->pc = 0x2bde98u;
    // NOP
    // 0x2bde9c: 0x0  nop
    ctx->pc = 0x2bde9cu;
    // NOP
    // 0x2bdea0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2bdea0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2bdea4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bdea4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bdea8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdeac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdeb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdeb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdeb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdeb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bdeb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bdebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDEBCu;
    {
        const bool branch_taken_0x2bdebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEBCu;
        // 0x2bdec0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdebc) {
            ctx->pc = 0x2BDED0u;
            goto label_2bded0;
        }
    }
    ctx->pc = 0x2BDEC4u;
label_2bdec4:
    // 0x2bdec4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2bdec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2bdec8:
    // 0x2bdec8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bdec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdecc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bdeccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bded0:
    // 0x2bded0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bded0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bded4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2bded4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bded8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdedc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2bdedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bdee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE0u;
        // 0x2bdee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDEE8u;
}
