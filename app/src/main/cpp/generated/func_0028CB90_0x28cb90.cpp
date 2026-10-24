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

// Function: func_0028CB90
// Address: 0x28cb90 - 0x28cdd0
void func_0028CB90_0x28cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028CB90_0x28cb90");
#endif

    switch (ctx->pc) {
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cd88u: goto label_28cd88;
        default: break;
    }

    ctx->pc = 0x28cb90u;

    // 0x28cb90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28cb94: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x28cb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x28cb98: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x28cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x28cb9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28cb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cba0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x28cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x28cba4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x28cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x28cba8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x28cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x28cbac: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x28cbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x28cbb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28cbb4: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x28cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x28cbb8: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x28cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x28cbbc: 0x2c830039  sltiu       $v1, $a0, 0x39
    ctx->pc = 0x28cbbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x28cbc0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x28CBC0u;
    {
        const bool branch_taken_0x28cbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBC0u;
        // 0x28cbc4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbc0) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CBC8u;
    // 0x28cbc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28cbcc: 0x24429b70  addiu       $v0, $v0, -0x6490
    ctx->pc = 0x28cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x28cbd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cbd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28cbd8: 0x800008  jr          $a0
    ctx->pc = 0x28CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28CBE0u: goto label_28cbe0;
            case 0x28CDA8u: goto label_28cda8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CBD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28CBE0u;
label_28cbe0:
    // 0x28cbe0: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x28cbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x28cbe4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x28cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28cbe8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28cbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28cbec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBECu;
    {
        const bool branch_taken_0x28cbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBECu;
        // 0x28cbf0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbec) {
            ctx->pc = 0x28CC00u;
            goto label_28cc00;
        }
    }
    ctx->pc = 0x28CBF4u;
    // 0x28cbf4: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x28cbf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28CBF8u;
    {
        const bool branch_taken_0x28cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBF8u;
        // 0x28cbfc: 0x8c520074  lw          $s2, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbf8) {
            ctx->pc = 0x28CC04u;
            goto label_28cc04;
        }
    }
    ctx->pc = 0x28CC00u;
label_28cc00:
    // 0x28cc00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28cc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cc04:
    // 0x28cc04: 0x12400069  beqz        $s2, . + 4 + (0x69 << 2)
    ctx->pc = 0x28CC04u;
    {
        const bool branch_taken_0x28cc04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC04u;
        // 0x28cc08: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc04) {
            ctx->pc = 0x28CDACu;
            goto label_28cdac;
        }
    }
    ctx->pc = 0x28CC0Cu;
    // 0x28cc0c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x28cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28cc10: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x28cc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28cc14: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x28cc14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x28cc18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc1c: 0xc051d5a  jal         func_147568
    ctx->pc = 0x28CC1Cu;
    SET_GPR_U32(ctx, 31, 0x28CC24u);
    ctx->pc = 0x28CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC1Cu;
    // 0x28cc20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x28CC1Cu, 0x28CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC24u;
label_28cc24:
    // 0x28cc24: 0x26741590  addiu       $s4, $s3, 0x1590
    ctx->pc = 0x28cc24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 5520));
    // 0x28cc28: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x28cc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28cc2c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x28cc2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28cc30: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x28cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28cc34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc3c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x28CC3Cu;
    SET_GPR_U32(ctx, 31, 0x28CC44u);
    ctx->pc = 0x28CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC3Cu;
    // 0x28cc40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x28CC3Cu, 0x28CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC44u;
label_28cc44:
    // 0x28cc44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x28cc44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28cc48: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x28cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28cc4c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc50: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cc54: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x28cc54u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28cc58: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x28cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28cc5c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x28cc5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28cc60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28cc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28cc64: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x28cc64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28cc68: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28cc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28cc6c: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x28cc6cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x28cc70: 0x0  nop
    ctx->pc = 0x28cc70u;
    // NOP
    // 0x28cc74: 0x0  nop
    ctx->pc = 0x28cc74u;
    // NOP
    // 0x28cc78: 0x460d0344  c1          0xD0344
    ctx->pc = 0x28cc78u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x28cc7c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x28CC7Cu;
    SET_GPR_U32(ctx, 31, 0x28CC84u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x28CC7Cu, 0x28CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC84u;
label_28cc84:
    // 0x28cc84: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x28cc84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x28cc88: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x28cc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x28cc8c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x28cc8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28cc90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28cc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28cc94: 0x0  nop
    ctx->pc = 0x28cc94u;
    // NOP
    // 0x28cc98: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x28cc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cc9c: 0x0  nop
    ctx->pc = 0x28cc9cu;
    // NOP
    // 0x28cca0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28CCA0u;
    {
        const bool branch_taken_0x28cca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cca0) {
            ctx->pc = 0x28CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CCA0u;
            // 0x28cca4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCA8u;
            goto label_28cca8;
        }
    }
    ctx->pc = 0x28CCA8u;
label_28cca8:
    // 0x28cca8: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x28ccac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x28ccacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28ccb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28ccb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28ccb4: 0x0  nop
    ctx->pc = 0x28ccb4u;
    // NOP
    // 0x28ccb8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x28ccb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ccbc: 0x0  nop
    ctx->pc = 0x28ccbcu;
    // NOP
    // 0x28ccc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28CCC0u;
    {
        const bool branch_taken_0x28ccc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ccc0) {
            ctx->pc = 0x28CCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CCC0u;
            // 0x28ccc4: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCC8u;
            goto label_28ccc8;
        }
    }
    ctx->pc = 0x28CCC8u;
label_28ccc8:
    // 0x28ccc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28cccc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28ccccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28ccd0: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x28ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ccd4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x28ccd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x28ccd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28ccd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ccdc: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x28ccdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x28cce0: 0xc66115a0  lwc1        $f1, 0x15A0($s3)
    ctx->pc = 0x28cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cce4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cce8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28cce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ccec: 0x0  nop
    ctx->pc = 0x28ccecu;
    // NOP
    // 0x28ccf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28CCF0u;
    {
        const bool branch_taken_0x28ccf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCF0u;
        // 0x28ccf4: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccf0) {
            ctx->pc = 0x28CD00u;
            goto label_28cd00;
        }
    }
    ctx->pc = 0x28CCF8u;
    // 0x28ccf8: 0xe6420100  swc1        $f2, 0x100($s2)
    ctx->pc = 0x28ccf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x28ccfc: 0xae6015a0  sw          $zero, 0x15A0($s3)
    ctx->pc = 0x28ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5536), GPR_U32(ctx, 0));
label_28cd00:
    // 0x28cd00: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x28cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cd04: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28cd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cd08: 0x0  nop
    ctx->pc = 0x28cd08u;
    // NOP
    // 0x28cd0c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x28CD0Cu;
    {
        const bool branch_taken_0x28cd0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cd0c) {
            ctx->pc = 0x28CD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CD0Cu;
            // 0x28cd10: 0xc66405a8  lwc1        $f4, 0x5A8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CD20u;
            goto label_28cd20;
        }
    }
    ctx->pc = 0x28CD14u;
    // 0x28cd14: 0xe6430100  swc1        $f3, 0x100($s2)
    ctx->pc = 0x28cd14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x28cd18: 0xae6015a0  sw          $zero, 0x15A0($s3)
    ctx->pc = 0x28cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5536), GPR_U32(ctx, 0));
    // 0x28cd1c: 0xc66405a8  lwc1        $f4, 0x5A8($s3)
    ctx->pc = 0x28cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28cd20:
    // 0x28cd20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28cd24: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28cd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28cd28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28cd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28cd2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28cd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28cd30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28cd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28cd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28cd38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28cd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28cd3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28cd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd40: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28cd40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28cd44: 0xc66215a0  lwc1        $f2, 0x15A0($s3)
    ctx->pc = 0x28cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28cd48: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x28cd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x28cd4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28cd4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28cd50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28cd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28cd54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28cd54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28cd58: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x28cd58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28cd5c: 0xe66215a0  swc1        $f2, 0x15A0($s3)
    ctx->pc = 0x28cd5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5536), bits); }
    // 0x28cd60: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x28cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cd64: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x28cd64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28cd68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28cd68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28cd6c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x28cd70: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28cd74: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28cd74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28cd78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28cd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28cd7c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28cd7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28cd80: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x28CD80u;
    SET_GPR_U32(ctx, 31, 0x28CD88u);
    ctx->pc = 0x28CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD80u;
    // 0x28cd84: 0xe66215a0  swc1        $f2, 0x15A0($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x28CD80u, 0x28CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD88u;
label_28cd88:
    // 0x28cd88: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x28cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28cd8c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CD8Cu;
    {
        const bool branch_taken_0x28cd8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD8Cu;
        // 0x28cd90: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd8c) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CD94u;
    // 0x28cd94: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cd98: 0xe6601590  swc1        $f0, 0x1590($s3)
    ctx->pc = 0x28cd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5520), bits); }
    // 0x28cd9c: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x28cd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x28cda0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x28cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cda4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x28cda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_28cda8:
    // 0x28cda8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28cda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28cdac:
    // 0x28cdac: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28cdacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28cdb0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28cdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28cdb4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28cdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28cdb8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28cdb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28cdbc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28cdbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28cdc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28cdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28cdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDC4u;
        // 0x28cdc8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CDCCu;
    // 0x28cdcc: 0x0  nop
    ctx->pc = 0x28cdccu;
    // NOP
    ctx->pc = 0x28cdd0u;
}
