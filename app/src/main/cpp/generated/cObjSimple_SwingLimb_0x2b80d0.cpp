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

// Function: cObjSimple_SwingLimb
// Address: 0x2b80d0 - 0x2b8320
void cObjSimple_SwingLimb_0x2b80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SwingLimb_0x2b80d0");
#endif

    switch (ctx->pc) {
        case 0x2b8160u: goto label_2b8160;
        default: break;
    }

    ctx->pc = 0x2b80d0u;

    // 0x2b80d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b80d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b80d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b80d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b80d8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2b80d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b80dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b80dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80e0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2b80e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b80e4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b80e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b80e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b80ec: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2b80ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2b80f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b80f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b80f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b80fc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2b80fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b8100: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2B8100u;
    {
        const bool branch_taken_0x2b8100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8100u;
        // 0x2b8104: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8100) {
            ctx->pc = 0x2B8300u;
            goto label_2b8300;
        }
    }
    ctx->pc = 0x2B8108u;
    // 0x2b8108: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b8108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b810c: 0x24422560  addiu       $v0, $v0, 0x2560
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9568));
    // 0x2b8110: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2b8110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8118: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x2b8118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b811c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b811cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8124: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8124u;
    {
        const bool branch_taken_0x2b8124 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2B8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8124u;
        // 0x2b8128: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8124) {
            ctx->pc = 0x2B8130u;
            goto label_2b8130;
        }
    }
    ctx->pc = 0x2B812Cu;
    // 0x2b812c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2b812cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2b8130:
    // 0x2b8130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8134u;
    {
        const bool branch_taken_0x2b8134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8134u;
        // 0x2b8138: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8134) {
            ctx->pc = 0x2B814Cu;
            goto label_2b814c;
        }
    }
    ctx->pc = 0x2B813Cu;
    // 0x2b813c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x2b813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b8140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8144u;
    {
        const bool branch_taken_0x2b8144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8144u;
        // 0x2b8148: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8144) {
            ctx->pc = 0x2B8150u;
            goto label_2b8150;
        }
    }
    ctx->pc = 0x2B814Cu;
label_2b814c:
    // 0x2b814c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b814cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8150:
    // 0x2b8150: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x2B8150u;
    {
        const bool branch_taken_0x2b8150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8150u;
        // 0x2b8154: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8150) {
            ctx->pc = 0x2B8300u;
            goto label_2b8300;
        }
    }
    ctx->pc = 0x2B8158u;
    // 0x2b8158: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2B8158u;
    SET_GPR_U32(ctx, 31, 0x2B8160u);
    ctx->pc = 0x2B815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8158u;
    // 0x2b815c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2B8158u, 0x2B8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8160u;
label_2b8160:
    // 0x2b8160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b8160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8164: 0x0  nop
    ctx->pc = 0x2b8164u;
    // NOP
    // 0x2b8168: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b8168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b816c: 0x0  nop
    ctx->pc = 0x2b816cu;
    // NOP
    // 0x2b8170: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8170u;
    {
        const bool branch_taken_0x2b8170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8170) {
            ctx->pc = 0x2B8174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8170u;
            // 0x2b8174: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B818Cu;
            goto label_2b818c;
        }
    }
    ctx->pc = 0x2B8178u;
    // 0x2b8178: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x2b817c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b8180: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8180u;
    {
        const bool branch_taken_0x2b8180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8180u;
        // 0x2b8184: 0x26043080  addiu       $a0, $s0, 0x3080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8180) {
            ctx->pc = 0x2B81A4u;
            goto label_2b81a4;
        }
    }
    ctx->pc = 0x2B8188u;
    // 0x2b8188: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2b8188u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2b818c:
    // 0x2b818c: 0x26033080  addiu       $v1, $s0, 0x3080
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12416));
    // 0x2b8190: 0xe61430a0  swc1        $f20, 0x30A0($s0)
    ctx->pc = 0x2b8190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12448), bits); }
    // 0x2b8194: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2b8194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b8198: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2b8198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b819c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81a0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2b81a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2b81a4:
    // 0x2b81a4: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x2b81a8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b81ac: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2b81acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2b81b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b81b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b81b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b81b8: 0xae430154  sw          $v1, 0x154($s2)
    ctx->pc = 0x2b81b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 3));
    // 0x2b81bc: 0xc60030a0  lwc1        $f0, 0x30A0($s0)
    ctx->pc = 0x2b81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81c0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2b81c0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2b81c4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2b81c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b81c8: 0x0  nop
    ctx->pc = 0x2b81c8u;
    // NOP
    // 0x2b81cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B81CCu;
    {
        const bool branch_taken_0x2b81cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81CCu;
        // 0x2b81d0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81cc) {
            ctx->pc = 0x2B81DCu;
            goto label_2b81dc;
        }
    }
    ctx->pc = 0x2B81D4u;
    // 0x2b81d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B81D4u;
    {
        const bool branch_taken_0x2b81d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81D4u;
        // 0x2b81d8: 0x24422580  addiu       $v0, $v0, 0x2580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81d4) {
            ctx->pc = 0x2B81E4u;
            goto label_2b81e4;
        }
    }
    ctx->pc = 0x2B81DCu;
label_2b81dc:
    // 0x2b81dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b81e0: 0x244225a0  addiu       $v0, $v0, 0x25A0
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9632));
label_2b81e4:
    // 0x2b81e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b81e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81ec: 0x4600ab02  mul.s       $f12, $f21, $f0
    ctx->pc = 0x2b81ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b81f0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2b81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b81f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b81f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b81f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b81f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81fc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2b81fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8200: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2b8200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2b8204: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8204u;
    {
        const bool branch_taken_0x2b8204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8204u;
        // 0x2b8208: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8204) {
            ctx->pc = 0x2B8218u;
            goto label_2b8218;
        }
    }
    ctx->pc = 0x2B820Cu;
    // 0x2b820c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b8210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8210u;
    {
        const bool branch_taken_0x2b8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8210u;
        // 0x2b8214: 0x24422580  addiu       $v0, $v0, 0x2580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8210) {
            ctx->pc = 0x2B8220u;
            goto label_2b8220;
        }
    }
    ctx->pc = 0x2B8218u;
label_2b8218:
    // 0x2b8218: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b8218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b821c: 0x244225a0  addiu       $v0, $v0, 0x25A0
    ctx->pc = 0x2b821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9632));
label_2b8220:
    // 0x2b8220: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b8224: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8228: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x2b8228u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b822c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2b822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b8230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8234: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b8234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8238: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b823c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8240: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2b8240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2b8244: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b8248: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2b8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b824c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2b824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8250: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2b8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8254: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2b8254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b8258: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2b8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b825c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2b825cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b8260: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8260u;
    {
        const bool branch_taken_0x2b8260 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8260u;
        // 0x2b8264: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8260) {
            ctx->pc = 0x2B8280u;
            goto label_2b8280;
        }
    }
    ctx->pc = 0x2B8268u;
    // 0x2b8268: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b826c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2b826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8270: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2b8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8274: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b8274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b8278: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b8278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b827c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2b827cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2b8280:
    // 0x2b8280: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8284: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b8288: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b828c: 0x244225c0  addiu       $v0, $v0, 0x25C0
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9664));
    // 0x2b8290: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b8294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8298: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b829c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b829cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b82a0: 0x0  nop
    ctx->pc = 0x2b82a0u;
    // NOP
    // 0x2b82a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B82A4u;
    {
        const bool branch_taken_0x2b82a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82A4u;
        // 0x2b82a8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82a4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B82ACu;
    // 0x2b82ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b82acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b82b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2b82b4:
    // 0x2b82b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b82b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b82b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b82bc: 0x244225e0  addiu       $v0, $v0, 0x25E0
    ctx->pc = 0x2b82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9696));
    // 0x2b82c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b82c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b82c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b82c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b82cc: 0x0  nop
    ctx->pc = 0x2b82ccu;
    // NOP
    // 0x2b82d0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B82D0u;
    {
        const bool branch_taken_0x2b82d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b82d0) {
            ctx->pc = 0x2B82D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82D0u;
            // 0x2b82d4: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82E4u;
            goto label_2b82e4;
        }
    }
    ctx->pc = 0x2B82D8u;
    // 0x2b82d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b82d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b82dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b82dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b82e0: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2b82e4:
    // 0x2b82e4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B82E4u;
    {
        const bool branch_taken_0x2b82e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82E4u;
        // 0x2b82e8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82e4) {
            ctx->pc = 0x2B8300u;
            goto label_2b8300;
        }
    }
    ctx->pc = 0x2B82ECu;
    // 0x2b82ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b82ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b82f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b82f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b82f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b82f8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2b82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b82fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b82fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b8300:
    // 0x2b8300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b8300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b8304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8308: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b8308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b830c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8310: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2b8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b8314: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2b8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8318: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8318u;
        // 0x2b831c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8320u;
}
