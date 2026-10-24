#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayInter__C14cEventObjLightPC17cEventSeqObjLightT1
// Address: 0x7b0828 - 0x7b0928
void movePlayInter__C14cEventObjLightPC17cEventSeqObjLightT1_0x7b0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayInter__C14cEventObjLightPC17cEventSeqObjLightT1_0x7b0828");
#endif

    switch (ctx->pc) {
        case 0x7b0874u: goto label_7b0874;
        case 0x7b0894u: goto label_7b0894;
        case 0x7b08a8u: goto label_7b08a8;
        case 0x7b08d8u: goto label_7b08d8;
        case 0x7b08ecu: goto label_7b08ec;
        case 0x7b0900u: goto label_7b0900;
        default: break;
    }

    ctx->pc = 0x7b0828u;

    // 0x7b0828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b0828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b082c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b0830: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b0830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b0834: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b0834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b0838: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7b0838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7b083c: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7b083cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7b0840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7b0844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0848: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x7b0848u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x7b084c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7b084cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0850: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x7b0850u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x7b0854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0858: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x7b0858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x7b085c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x7b085cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x7b0860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b0860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b0864: 0x0  nop
    ctx->pc = 0x7b0864u;
    // NOP
    // 0x7b0868: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b0868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b086c: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B086Cu;
    SET_GPR_U32(ctx, 31, 0x7B0874u);
    ctx->pc = 0x7B0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B086Cu;
    // 0x7b0870: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B086Cu, 0x7B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0874u;
label_7b0874:
    // 0x7b0874: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x7b0874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x7b0878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b087c: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x7b087cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7b0880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b0880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b0884: 0x0  nop
    ctx->pc = 0x7b0884u;
    // NOP
    // 0x7b0888: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b0888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b088c: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B088Cu;
    SET_GPR_U32(ctx, 31, 0x7B0894u);
    ctx->pc = 0x7B0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B088Cu;
    // 0x7b0890: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B088Cu, 0x7B0894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0894u;
label_7b0894:
    // 0x7b0894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0898: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7b0898u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7b089c: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x7b089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b08a0: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B08A0u;
    SET_GPR_U32(ctx, 31, 0x7B08A8u);
    ctx->pc = 0x7B08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B08A0u;
    // 0x7b08a4: 0x84850006  lh          $a1, 0x6($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B08A0u, 0x7B08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B08A8u;
label_7b08a8:
    // 0x7b08a8: 0x4616a581  sub.s       $f22, $f20, $f22
    ctx->pc = 0x7b08a8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x7b08ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7b08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7b08b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7b08b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7b08b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7b08b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7b08b8: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x7b08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b08bc: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x7b08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x7b08c0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7b08c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7b08c4: 0x26104700  addiu       $s0, $s0, 0x4700
    ctx->pc = 0x7b08c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18176));
    // 0x7b08c8: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x7b08c8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[22]);
    // 0x7b08cc: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x7b08ccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x7b08d0: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B08D0u;
    SET_GPR_U32(ctx, 31, 0x7B08D8u);
    ctx->pc = 0x7B08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B08D0u;
    // 0x7b08d4: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B08D0u, 0x7B08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B08D8u;
label_7b08d8:
    // 0x7b08d8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x7b08d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x7b08dc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x7b08dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x7b08e0: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x7b08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b08e4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B08E4u;
    SET_GPR_U32(ctx, 31, 0x7B08ECu);
    ctx->pc = 0x7B08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B08E4u;
    // 0x7b08e8: 0xc62d0010  lwc1        $f13, 0x10($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B08E4u, 0x7B08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B08ECu;
label_7b08ec:
    // 0x7b08ec: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x7b08ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x7b08f0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x7b08f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x7b08f4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x7b08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b08f8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B08F8u;
    SET_GPR_U32(ctx, 31, 0x7B0900u);
    ctx->pc = 0x7B08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B08F8u;
    // 0x7b08fc: 0xc62d0014  lwc1        $f13, 0x14($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B08F8u, 0x7B0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0900u;
label_7b0900:
    // 0x7b0900: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x7b0900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x7b0904: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b0904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b0908: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b0908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b090c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7b090cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0914: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x7b0914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7b0918: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x7b0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7b091c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x7b091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7b0920: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0920u;
        // 0x7b0924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0928u;
}
} // namespace gh_event
