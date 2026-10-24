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

// Function: func_00270160
// Address: 0x270160 - 0x270338
void func_00270160_0x270160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00270160_0x270160");
#endif

    ctx->pc = 0x270160u;

    // 0x270160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270164: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x270164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x270168: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x270168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x27016c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x27016Cu;
    {
        const bool branch_taken_0x27016c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27016Cu;
        // 0x270170: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27016c) {
            ctx->pc = 0x27032Cu;
            goto label_27032c;
        }
    }
    ctx->pc = 0x270174u;
    // 0x270174: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x270174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x270178: 0x2442f8b8  addiu       $v0, $v0, -0x748
    ctx->pc = 0x270178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965432));
    // 0x27017c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x27017cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270184: 0x908602b4  lbu         $a2, 0x2B4($a0)
    ctx->pc = 0x270184u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x270188: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x270188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27018c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27018cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270190: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x270190u;
    {
        const bool branch_taken_0x270190 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x270194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270190u;
        // 0x270194: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270190) {
            ctx->pc = 0x27019Cu;
            goto label_27019c;
        }
    }
    ctx->pc = 0x270198u;
    // 0x270198: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x270198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_27019c:
    // 0x27019c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2701a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2701A0u;
    {
        const bool branch_taken_0x2701a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701A0u;
        // 0x2701a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a0) {
            ctx->pc = 0x2701B8u;
            goto label_2701b8;
        }
    }
    ctx->pc = 0x2701A8u;
    // 0x2701a8: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2701a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2701ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2701acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2701b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2701B0u;
    {
        const bool branch_taken_0x2701b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701B0u;
        // 0x2701b4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701b0) {
            ctx->pc = 0x2701BCu;
            goto label_2701bc;
        }
    }
    ctx->pc = 0x2701B8u;
label_2701b8:
    // 0x2701b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2701b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2701bc:
    // 0x2701bc: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2701BCu;
    {
        const bool branch_taken_0x2701bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701BCu;
        // 0x2701c0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701bc) {
            ctx->pc = 0x27032Cu;
            goto label_27032c;
        }
    }
    ctx->pc = 0x2701C4u;
    // 0x2701c4: 0x8ca30154  lw          $v1, 0x154($a1)
    ctx->pc = 0x2701c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x2701c8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2701c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2701cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2701ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2701d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2701d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2701d4: 0xaca30154  sw          $v1, 0x154($a1)
    ctx->pc = 0x2701d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 3));
    // 0x2701d8: 0xc4801940  lwc1        $f0, 0x1940($a0)
    ctx->pc = 0x2701d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2701dc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2701dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2701e0: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2701e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2701e4: 0x0  nop
    ctx->pc = 0x2701e4u;
    // NOP
    // 0x2701e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2701E8u;
    {
        const bool branch_taken_0x2701e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2701ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701E8u;
        // 0x2701ec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701e8) {
            ctx->pc = 0x2701F8u;
            goto label_2701f8;
        }
    }
    ctx->pc = 0x2701F0u;
    // 0x2701f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2701F0u;
    {
        const bool branch_taken_0x2701f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701F0u;
        // 0x2701f4: 0x2442f8d8  addiu       $v0, $v0, -0x728 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701f0) {
            ctx->pc = 0x270200u;
            goto label_270200;
        }
    }
    ctx->pc = 0x2701F8u;
label_2701f8:
    // 0x2701f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2701fc: 0x2442f8f8  addiu       $v0, $v0, -0x708
    ctx->pc = 0x2701fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965496));
label_270200:
    // 0x270200: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x270200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x270204: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x270204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270208: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x270208u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27020c: 0x24821920  addiu       $v0, $a0, 0x1920
    ctx->pc = 0x27020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6432));
    // 0x270210: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x270210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270214: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x270214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270218: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x270218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27021c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x27021cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270220: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x270220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270224: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x270224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x270228: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x270228u;
    {
        const bool branch_taken_0x270228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270228u;
        // 0x27022c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270228) {
            ctx->pc = 0x27023Cu;
            goto label_27023c;
        }
    }
    ctx->pc = 0x270230u;
    // 0x270230: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x270234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270234u;
    {
        const bool branch_taken_0x270234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270234u;
        // 0x270238: 0x2442f8d8  addiu       $v0, $v0, -0x728 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270234) {
            ctx->pc = 0x270244u;
            goto label_270244;
        }
    }
    ctx->pc = 0x27023Cu;
label_27023c:
    // 0x27023c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x270240: 0x2442f8f8  addiu       $v0, $v0, -0x708
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965496));
label_270244:
    // 0x270244: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x270248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x270248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27024c: 0x46006b02  mul.s       $f12, $f13, $f0
    ctx->pc = 0x27024cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x270250: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x270250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x270254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270258: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x270258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27025c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270260: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x270260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270264: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x270264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x270268: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x270268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27026c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x27026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270270: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x270270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270274: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x270274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270278: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x270278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27027c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270280: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x270280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270284: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270284u;
    {
        const bool branch_taken_0x270284 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x270288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270284u;
        // 0x270288: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270284) {
            ctx->pc = 0x2702A4u;
            goto label_2702a4;
        }
    }
    ctx->pc = 0x27028Cu;
    // 0x27028c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270290: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x270290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270294: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x270294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270298: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x270298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27029c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27029cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2702a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2702a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2702a4:
    // 0x2702a4: 0xc48205a8  lwc1        $f2, 0x5A8($a0)
    ctx->pc = 0x2702a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2702a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2702a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2702ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2702acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2702b0: 0x2442f918  addiu       $v0, $v0, -0x6E8
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965528));
    // 0x2702b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2702b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2702b8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2702b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2702bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2702bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2702c0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2702c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2702c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2702c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2702c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2702c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2702cc: 0x0  nop
    ctx->pc = 0x2702ccu;
    // NOP
    // 0x2702d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2702D0u;
    {
        const bool branch_taken_0x2702d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702D0u;
        // 0x2702d4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702d0) {
            ctx->pc = 0x2702E0u;
            goto label_2702e0;
        }
    }
    ctx->pc = 0x2702D8u;
    // 0x2702d8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2702d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2702dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2702dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2702e0:
    // 0x2702e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2702e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2702e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2702e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2702e8: 0x2442f938  addiu       $v0, $v0, -0x6C8
    ctx->pc = 0x2702e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965560));
    // 0x2702ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2702ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2702f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2702f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2702f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2702f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2702f8: 0x0  nop
    ctx->pc = 0x2702f8u;
    // NOP
    // 0x2702fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2702FCu;
    {
        const bool branch_taken_0x2702fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2702fc) {
            ctx->pc = 0x270300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702FCu;
            // 0x270300: 0x8ca200d0  lw          $v0, 0xD0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x270304u;
    // 0x270304: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x270304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270308: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x270308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x27030c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x27030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
label_270310:
    // 0x270310: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x270310u;
    {
        const bool branch_taken_0x270310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x270314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270310u;
        // 0x270314: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270310) {
            ctx->pc = 0x27032Cu;
            goto label_27032c;
        }
    }
    ctx->pc = 0x270318u;
    // 0x270318: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x270318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27031c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270320: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x270320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x270324: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x270324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270328: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x270328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27032c:
    // 0x27032c: 0x3e00008  jr          $ra
    ctx->pc = 0x27032Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27032Cu;
        // 0x270330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27032Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270334u;
    // 0x270334: 0x0  nop
    ctx->pc = 0x270334u;
    // NOP
    ctx->pc = 0x270338u;
}
