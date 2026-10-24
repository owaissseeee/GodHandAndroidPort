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

// Function: Box_growToContain
// Address: 0x1f91d0 - 0x1f92c0
void Box_growToContain_0x1f91d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Box_growToContain_0x1f91d0");
#endif

    switch (ctx->pc) {
        case 0x1f92a8u: goto label_1f92a8;
        default: break;
    }

    ctx->pc = 0x1f91d0u;

    // 0x1f91d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f91d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f91d4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1f91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f91d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f91d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f91dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f91dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f91e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f91e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e4: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1f91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f91e8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1f91e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f91ec: 0xc4ad000c  lwc1        $f13, 0xC($a1)
    ctx->pc = 0x1f91ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f91f0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1f91f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1f91f4: 0x460d1301  sub.s       $f12, $f2, $f13
    ctx->pc = 0x1f91f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x1f91f8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1f91f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f91fc: 0x0  nop
    ctx->pc = 0x1f91fcu;
    // NOP
    // 0x1f9200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9200u;
    {
        const bool branch_taken_0x1f9200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9200) {
            ctx->pc = 0x1F9204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9200u;
            // 0x1f9204: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9208u;
            goto label_1f9208;
        }
    }
    ctx->pc = 0x1F9208u;
label_1f9208:
    // 0x1f9208: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1f9208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1f920c: 0x460d1340  add.s       $f13, $f2, $f13
    ctx->pc = 0x1f920cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x1f9210: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1f9210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9214: 0x0  nop
    ctx->pc = 0x1f9214u;
    // NOP
    // 0x1f9218: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9218u;
    {
        const bool branch_taken_0x1f9218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9218) {
            ctx->pc = 0x1F921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9218u;
            // 0x1f921c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9220u;
            goto label_1f9220;
        }
    }
    ctx->pc = 0x1F9220u;
label_1f9220:
    // 0x1f9220: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1f9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9224: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1f9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9228: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f9228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f922c: 0xc4af0010  lwc1        $f15, 0x10($a1)
    ctx->pc = 0x1f922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1f9230: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1f9230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1f9234: 0x460f1381  sub.s       $f14, $f2, $f15
    ctx->pc = 0x1f9234u;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1f9238: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x1f9238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f923c: 0x0  nop
    ctx->pc = 0x1f923cu;
    // NOP
    // 0x1f9240: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9240u;
    {
        const bool branch_taken_0x1f9240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9240) {
            ctx->pc = 0x1F9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9240u;
            // 0x1f9244: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9248u;
            goto label_1f9248;
        }
    }
    ctx->pc = 0x1F9248u;
label_1f9248:
    // 0x1f9248: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1f9248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1f924c: 0x460f13c0  add.s       $f15, $f2, $f15
    ctx->pc = 0x1f924cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x1f9250: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x1f9250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9254: 0x0  nop
    ctx->pc = 0x1f9254u;
    // NOP
    // 0x1f9258: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9258u;
    {
        const bool branch_taken_0x1f9258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9258) {
            ctx->pc = 0x1F925Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9258u;
            // 0x1f925c: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
            ctx->f[15] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9260u;
            goto label_1f9260;
        }
    }
    ctx->pc = 0x1F9260u;
label_1f9260:
    // 0x1f9260: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x1f9260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9264: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1f9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9268: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1f9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f926c: 0xc4b10008  lwc1        $f17, 0x8($a1)
    ctx->pc = 0x1f926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1f9270: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1f9270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f9274: 0x46038c01  sub.s       $f16, $f17, $f3
    ctx->pc = 0x1f9274u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x1f9278: 0x46100034  c.lt.s      $f0, $f16
    ctx->pc = 0x1f9278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f927c: 0x0  nop
    ctx->pc = 0x1f927cu;
    // NOP
    // 0x1f9280: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9280u;
    {
        const bool branch_taken_0x1f9280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9280) {
            ctx->pc = 0x1F9284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9280u;
            // 0x1f9284: 0x46000406  mov.s       $f16, $f0 (Delay Slot)
            ctx->f[16] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9288u;
            goto label_1f9288;
        }
    }
    ctx->pc = 0x1F9288u;
label_1f9288:
    // 0x1f9288: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1f9288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f928c: 0x46038c40  add.s       $f17, $f17, $f3
    ctx->pc = 0x1f928cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
    // 0x1f9290: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x1f9290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9294: 0x0  nop
    ctx->pc = 0x1f9294u;
    // NOP
    // 0x1f9298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9298u;
    {
        const bool branch_taken_0x1f9298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9298) {
            ctx->pc = 0x1F929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9298u;
            // 0x1f929c: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
            ctx->f[17] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F92A0u;
            goto label_1f92a0;
        }
    }
    ctx->pc = 0x1F92A0u;
label_1f92a0:
    // 0x1f92a0: 0xc07e2a2  jal         func_1F8A88
    ctx->pc = 0x1F92A0u;
    SET_GPR_U32(ctx, 31, 0x1F92A8u);
    ctx->pc = 0x1F92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92A0u;
    // 0x1f92a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A88u, 0x1F92A0u, 0x1F92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92A8u;
label_1f92a8:
    // 0x1f92a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f92a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f92acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f92b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f92b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f92b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F92B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B4u;
        // 0x1f92b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F92BCu;
    // 0x1f92bc: 0x0  nop
    ctx->pc = 0x1f92bcu;
    // NOP
    ctx->pc = 0x1f92c0u;
}
