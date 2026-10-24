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

// Function: func_002B0830
// Address: 0x2b0830 - 0x2b0908
void func_002B0830_0x2b0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0830_0x2b0830");
#endif

    switch (ctx->pc) {
        case 0x2b0868u: goto label_2b0868;
        case 0x2b0878u: goto label_2b0878;
        case 0x2b08b0u: goto label_2b08b0;
        case 0x2b08d4u: goto label_2b08d4;
        case 0x2b08dcu: goto label_2b08dc;
        default: break;
    }

    ctx->pc = 0x2b0830u;

    // 0x2b0830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b0834: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b0834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b0838: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b0838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b083c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b083cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b0840: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b0840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0844: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b0844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b0848: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b0848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b084c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b084cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b0854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b0854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b085c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b085cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B0860u;
    {
        const bool branch_taken_0x2b0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0860u;
        // 0x2b0864: 0xe6740000  swc1        $f20, 0x0($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0860) {
            ctx->pc = 0x2B08B8u;
            goto label_2b08b8;
        }
    }
    ctx->pc = 0x2B0868u;
label_2b0868:
    // 0x2b0868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b086c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b086cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0870: 0xc0ac2f8  jal         func_2B0BE0
    ctx->pc = 0x2B0870u;
    SET_GPR_U32(ctx, 31, 0x2B0878u);
    ctx->pc = 0x2B0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0870u;
    // 0x2b0874: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0BE0u, 0x2B0870u, 0x2B0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0878u;
label_2b0878:
    // 0x2b0878: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b0878u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2b087c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2b087cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0880: 0x0  nop
    ctx->pc = 0x2b0880u;
    // NOP
    // 0x2b0884: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0884u;
    {
        const bool branch_taken_0x2b0884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0884) {
            ctx->pc = 0x2B08A8u;
            goto label_2b08a8;
        }
    }
    ctx->pc = 0x2B088Cu;
    // 0x2b088c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2b088cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x2b0890: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0894: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x2b0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0898: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x2b0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b089c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b089cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b08a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b08a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b08a4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2b08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2b08a8:
    // 0x2b08a8: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B08A8u;
    SET_GPR_U32(ctx, 31, 0x2B08B0u);
    ctx->pc = 0x2B08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08A8u;
    // 0x2b08ac: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B08A8u, 0x2B08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08B0u;
label_2b08b0:
    // 0x2b08b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b08b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b08b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b08b8:
    // 0x2b08b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2b08b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b08bc: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2b08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2b08c0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B08C0u;
    {
        const bool branch_taken_0x2b08c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08C0u;
        // 0x2b08c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08c0) {
            ctx->pc = 0x2B0868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0868;
        }
    }
    ctx->pc = 0x2B08C8u;
    // 0x2b08c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b08c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b08cc: 0xc0ac130  jal         func_2B04C0
    ctx->pc = 0x2B08CCu;
    SET_GPR_U32(ctx, 31, 0x2B08D4u);
    ctx->pc = 0x2B08D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08CCu;
    // 0x2b08d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04C0u, 0x2B08CCu, 0x2B08D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08D4u;
label_2b08d4:
    // 0x2b08d4: 0xc0abc1a  jal         func_2AF068
    ctx->pc = 0x2B08D4u;
    SET_GPR_U32(ctx, 31, 0x2B08DCu);
    ctx->pc = 0x2B08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08D4u;
    // 0x2b08d8: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF068u, 0x2B08D4u, 0x2B08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08DCu;
label_2b08dc:
    // 0x2b08dc: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B08DCu;
    {
        const bool branch_taken_0x2b08dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08DCu;
        // 0x2b08e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08dc) {
            ctx->pc = 0x2B0868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0868;
        }
    }
    ctx->pc = 0x2B08E4u;
    // 0x2b08e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b08e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b08e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b08e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b08ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b08ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b08f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b08f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b08f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b08f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b08f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b08f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b08fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B08FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08FCu;
        // 0x2b0900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B08FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0904u;
    // 0x2b0904: 0x0  nop
    ctx->pc = 0x2b0904u;
    // NOP
    ctx->pc = 0x2b0908u;
}
