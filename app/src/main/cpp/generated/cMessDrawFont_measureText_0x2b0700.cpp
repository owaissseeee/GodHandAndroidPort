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

// Function: cMessDrawFont_measureText
// Address: 0x2b0700 - 0x2b0830
void cMessDrawFont_measureText_0x2b0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_measureText_0x2b0700");
#endif

    switch (ctx->pc) {
        case 0x2b0748u: goto label_2b0748;
        case 0x2b0760u: goto label_2b0760;
        case 0x2b0770u: goto label_2b0770;
        case 0x2b0784u: goto label_2b0784;
        case 0x2b07bcu: goto label_2b07bc;
        case 0x2b07e0u: goto label_2b07e0;
        case 0x2b07e8u: goto label_2b07e8;
        default: break;
    }

    ctx->pc = 0x2b0700u;

    // 0x2b0700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b0700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b0704: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b0704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b0708: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b0708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b070c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b070cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0710: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b0714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b0714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0718: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b0718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b071c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b071cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0720: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b0720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b0724: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b0724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b072c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2b072cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0730: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2b0730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b0734: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b0734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b0738: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2b0738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2b073c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2b073cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2b0740: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B0740u;
    {
        const bool branch_taken_0x2b0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0740u;
        // 0x2b0744: 0xc6950000  lwc1        $f21, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0740) {
            ctx->pc = 0x2B07C4u;
            goto label_2b07c4;
        }
    }
    ctx->pc = 0x2B0748u;
label_2b0748:
    // 0x2b0748: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2b0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b074c: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x2b074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0750: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0754: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b0754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b0758: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b075c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2b075cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2b0760:
    // 0x2b0760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0768: 0xc0ac242  jal         func_2B0908
    ctx->pc = 0x2B0768u;
    SET_GPR_U32(ctx, 31, 0x2B0770u);
    ctx->pc = 0x2B076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0768u;
    // 0x2b076c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0908u, 0x2B0768u, 0x2B0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0770u;
label_2b0770:
    // 0x2b0770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b0770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b0774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b077c: 0xc0ac296  jal         func_2B0A58
    ctx->pc = 0x2B077Cu;
    SET_GPR_U32(ctx, 31, 0x2B0784u);
    ctx->pc = 0x2B0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B077Cu;
    // 0x2b0780: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0A58u, 0x2B077Cu, 0x2B0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0784u;
label_2b0784:
    // 0x2b0784: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2b0784u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0788: 0x0  nop
    ctx->pc = 0x2b0788u;
    // NOP
    // 0x2b078c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B078Cu;
    {
        const bool branch_taken_0x2b078c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B078Cu;
        // 0x2b0790: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b078c) {
            ctx->pc = 0x2B07A0u;
            goto label_2b07a0;
        }
    }
    ctx->pc = 0x2B0794u;
    // 0x2b0794: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0798: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2b0798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b079c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2b079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2b07a0:
    // 0x2b07a0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2b07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b07a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b07a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b07a8: 0x0  nop
    ctx->pc = 0x2b07a8u;
    // NOP
    // 0x2b07ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B07ACu;
    {
        const bool branch_taken_0x2b07ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b07ac) {
            ctx->pc = 0x2B07B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B07ACu;
            // 0x2b07b0: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B07B4u;
            goto label_2b07b4;
        }
    }
    ctx->pc = 0x2B07B4u;
label_2b07b4:
    // 0x2b07b4: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B07B4u;
    SET_GPR_U32(ctx, 31, 0x2B07BCu);
    ctx->pc = 0x2B07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B07B4u;
    // 0x2b07b8: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B07B4u, 0x2B07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07BCu;
label_2b07bc:
    // 0x2b07bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b07c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b07c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b07c4:
    // 0x2b07c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2b07c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b07c8: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2b07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2b07cc: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2B07CCu;
    {
        const bool branch_taken_0x2b07cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07CCu;
        // 0x2b07d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07cc) {
            ctx->pc = 0x2B0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0748;
        }
    }
    ctx->pc = 0x2B07D4u;
    // 0x2b07d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b07d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07d8: 0xc0ac130  jal         func_2B04C0
    ctx->pc = 0x2B07D8u;
    SET_GPR_U32(ctx, 31, 0x2B07E0u);
    ctx->pc = 0x2B07DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B07D8u;
    // 0x2b07dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04C0u, 0x2B07D8u, 0x2B07E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07E0u;
label_2b07e0:
    // 0x2b07e0: 0xc0abc1a  jal         func_2AF068
    ctx->pc = 0x2B07E0u;
    SET_GPR_U32(ctx, 31, 0x2B07E8u);
    ctx->pc = 0x2B07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B07E0u;
    // 0x2b07e4: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF068u, 0x2B07E0u, 0x2B07E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07E8u;
label_2b07e8:
    // 0x2b07e8: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2B07E8u;
    {
        const bool branch_taken_0x2b07e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07E8u;
        // 0x2b07ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07e8) {
            ctx->pc = 0x2B0760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0760;
        }
    }
    ctx->pc = 0x2B07F0u;
    // 0x2b07f0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2b07f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b07f4: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2b07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b07f8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2b07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b07fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b07fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0800: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b0800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0804: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b0804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0808: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b0808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b080c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b080cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0810: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b0810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0818: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2b0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b081c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2b081cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2b0820: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b0820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0824: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0828: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0828u;
        // 0x2b082c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0830u;
}
