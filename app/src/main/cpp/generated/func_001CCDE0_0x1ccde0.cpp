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

// Function: func_001CCDE0
// Address: 0x1ccde0 - 0x1cd1a0
void func_001CCDE0_0x1ccde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CCDE0_0x1ccde0");
#endif

    switch (ctx->pc) {
        case 0x1cce0cu: goto label_1cce0c;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cced4u: goto label_1cced4;
        case 0x1ccfa8u: goto label_1ccfa8;
        case 0x1ccff8u: goto label_1ccff8;
        case 0x1cd018u: goto label_1cd018;
        case 0x1cd020u: goto label_1cd020;
        case 0x1cd034u: goto label_1cd034;
        case 0x1cd094u: goto label_1cd094;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd100u: goto label_1cd100;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd13cu: goto label_1cd13c;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd180u: goto label_1cd180;
        default: break;
    }

    ctx->pc = 0x1ccde0u;

    // 0x1ccde0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ccde4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ccde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1ccde8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ccde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1ccdec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1ccdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdf4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ccdf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ccdf8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ccdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1ccdfc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ccdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1cce00: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cce04: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CCE04u;
    SET_GPR_U32(ctx, 31, 0x1CCE0Cu);
    ctx->pc = 0x1CCE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE04u;
    // 0x1cce08: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CCE04u, 0x1CCE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE0Cu;
label_1cce0c:
    // 0x1cce0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cce0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cce10: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cce14: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cce18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cce18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cce1c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cce20: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cce24: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1cce24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cce28: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1cce28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE2Cu;
    {
        const bool branch_taken_0x1cce2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE2Cu;
        // 0x1cce30: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce2c) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCE34u;
    // 0x1cce34: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cce38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCE38u;
    {
        const bool branch_taken_0x1cce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE38u;
        // 0x1cce3c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce38) {
            ctx->pc = 0x1CCE44u;
            goto label_1cce44;
        }
    }
    ctx->pc = 0x1CCE40u;
label_1cce40:
    // 0x1cce40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cce40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cce44:
    // 0x1cce44: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cce44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cce48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCE48u;
    {
        const bool branch_taken_0x1cce48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE48u;
        // 0x1cce4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce48) {
            ctx->pc = 0x1CCE60u;
            goto label_1cce60;
        }
    }
    ctx->pc = 0x1CCE50u;
    // 0x1cce50: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CCE50u;
    {
        const bool branch_taken_0x1cce50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cce50) {
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCE58u;
    // 0x1cce58: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1CCE58u;
    {
        const bool branch_taken_0x1cce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE58u;
        // 0x1cce5c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce58) {
            ctx->pc = 0x1CD184u;
            goto label_1cd184;
        }
    }
    ctx->pc = 0x1CCE60u;
label_1cce60:
    // 0x1cce60: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1cce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cce64: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1cce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cce68: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1cce68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1cce6c: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x1cce6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1cce70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cce70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cce74: 0x0  nop
    ctx->pc = 0x1cce74u;
    // NOP
    // 0x1cce78: 0x0  nop
    ctx->pc = 0x1cce78u;
    // NOP
    // 0x1cce7c: 0x46000004  c1          0x4
    ctx->pc = 0x1cce7cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1cce80: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CCE80u;
    SET_GPR_U32(ctx, 31, 0x1CCE88u);
    ctx->pc = 0x1CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE80u;
    // 0x1cce84: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CCE80u, 0x1CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE88u;
label_1cce88:
    // 0x1cce88: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1cce8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cce8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cce90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cce94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce98: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cce98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cce9c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ccea0: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x1ccea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccea4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1ccea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1ccea8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cceac: 0xe6210660  swc1        $f1, 0x660($s1)
    ctx->pc = 0x1cceacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1cceb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cceb4: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x1cceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cceb8: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1ccebc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ccebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccec0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccec4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccec8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCECCu;
    // 0x1cced0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CCECCu, 0x1CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cced8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ccedc: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1ccedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1ccee0:
    // 0x1ccee0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCEE0u;
    {
        const bool branch_taken_0x1ccee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEE0u;
        // 0x1ccee4: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccee0) {
            ctx->pc = 0x1CCF04u;
            goto label_1ccf04;
        }
    }
    ctx->pc = 0x1CCEE8u;
    // 0x1ccee8: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cceec: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cceecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1ccef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccef4: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1ccef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccef8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ccef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ccefc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ccefcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ccf00: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x1ccf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1ccf04:
    // 0x1ccf04: 0x26240640  addiu       $a0, $s1, 0x640
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1ccf08: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ccf08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccf0c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ccf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccf10: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ccf10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ccf14: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ccf14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ccf18: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ccf18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ccf1c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ccf1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccf20: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ccf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccf24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ccf24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf28: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ccf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccf2c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccf30: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ccf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ccf34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ccf34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccf38: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ccf38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ccf3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ccf40: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ccf40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccf44: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccf48: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ccf4c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCF4Cu;
    {
        const bool branch_taken_0x1ccf4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF4Cu;
        // 0x1ccf50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf4c) {
            ctx->pc = 0x1CCF6Cu;
            goto label_1ccf6c;
        }
    }
    ctx->pc = 0x1CCF54u;
    // 0x1ccf54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ccf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ccf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ccf5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ccf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccf60: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1ccf60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1ccf64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ccf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf68: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ccf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ccf6c:
    // 0x1ccf6c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1ccf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ccf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ccf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ccf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ccf78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccf7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ccf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ccf80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccf80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf84: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ccf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ccf88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ccf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ccf90: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ccf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ccf94: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ccf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ccf98: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1ccf9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfa0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CCFA0u;
    SET_GPR_U32(ctx, 31, 0x1CCFA8u);
    ctx->pc = 0x1CCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA0u;
    // 0x1ccfa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CCFA0u, 0x1CCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFA8u;
label_1ccfa8:
    // 0x1ccfa8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CCFA8u;
    {
        const bool branch_taken_0x1ccfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccfa8) {
            ctx->pc = 0x1CCFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCFA8u;
            // 0x1ccfac: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD024u;
            goto label_1cd024;
        }
    }
    ctx->pc = 0x1CCFB0u;
    // 0x1ccfb0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccfb4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCFB4u;
    {
        const bool branch_taken_0x1ccfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFB4u;
        // 0x1ccfb8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfb4) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCFBCu;
    // 0x1ccfbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ccfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ccfc0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ccfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccfc4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ccfc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ccfc8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ccfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccfcc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ccfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ccfd0:
    // 0x1ccfd0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ccfd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccfd8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ccfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ccfdc: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ccfe0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ccfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccfe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccfecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccff0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CCFF0u;
    SET_GPR_U32(ctx, 31, 0x1CCFF8u);
    ctx->pc = 0x1CCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFF0u;
    // 0x1ccff4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CCFF0u, 0x1CCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFF8u;
label_1ccff8:
    // 0x1ccff8: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ccffc: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1ccffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd008: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd00c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd010: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD010u;
    SET_GPR_U32(ctx, 31, 0x1CD018u);
    ctx->pc = 0x1CD014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD010u;
    // 0x1cd014: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD010u, 0x1CD018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD018u;
label_1cd018:
    // 0x1cd018: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD018u;
    SET_GPR_U32(ctx, 31, 0x1CD020u);
    ctx->pc = 0x1CD01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD018u;
    // 0x1cd01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD018u, 0x1CD020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD020u;
label_1cd020:
    // 0x1cd020: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1cd024:
    // 0x1cd024: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CD024u;
    {
        const bool branch_taken_0x1cd024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd024) {
            ctx->pc = 0x1CD028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD024u;
            // 0x1cd028: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD0CCu;
            goto label_1cd0cc;
        }
    }
    ctx->pc = 0x1CD02Cu;
    // 0x1cd02c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CD02Cu;
    SET_GPR_U32(ctx, 31, 0x1CD034u);
    ctx->pc = 0x1CD030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD02Cu;
    // 0x1cd030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CD02Cu, 0x1CD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD034u;
label_1cd034:
    // 0x1cd034: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cd034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cd038: 0x240203b9  addiu       $v0, $zero, 0x3B9
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
    // 0x1cd03c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD03Cu;
    {
        const bool branch_taken_0x1cd03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD03Cu;
        // 0x1cd040: 0x286203ba  slti        $v0, $v1, 0x3BA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)954) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd03c) {
            ctx->pc = 0x1CD064u;
            goto label_1cd064;
        }
    }
    ctx->pc = 0x1CD044u;
    // 0x1cd044: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD044u;
    {
        const bool branch_taken_0x1cd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD044u;
        // 0x1cd048: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd044) {
            ctx->pc = 0x1CD058u;
            goto label_1cd058;
        }
    }
    ctx->pc = 0x1CD04Cu;
    // 0x1cd04c: 0x240203ba  addiu       $v0, $zero, 0x3BA
    ctx->pc = 0x1cd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
    // 0x1cd050: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD050u;
    {
        const bool branch_taken_0x1cd050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd050) {
            ctx->pc = 0x1CD074u;
            goto label_1cd074;
        }
    }
    ctx->pc = 0x1CD058u;
label_1cd058:
    // 0x1cd058: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1cd05c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD05Cu;
    {
        const bool branch_taken_0x1cd05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD05Cu;
        // 0x1cd060: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd05c) {
            ctx->pc = 0x1CD07Cu;
            goto label_1cd07c;
        }
    }
    ctx->pc = 0x1CD064u;
label_1cd064:
    // 0x1cd064: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd068: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cd068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cd06c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD06Cu;
    {
        const bool branch_taken_0x1cd06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD06Cu;
        // 0x1cd070: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd06c) {
            ctx->pc = 0x1CD07Cu;
            goto label_1cd07c;
        }
    }
    ctx->pc = 0x1CD074u;
label_1cd074:
    // 0x1cd074: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cd078: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cd078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cd07c:
    // 0x1cd07c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1cd07cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd080: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd084: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1cd084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1cd088: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd08c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CD08Cu;
    SET_GPR_U32(ctx, 31, 0x1CD094u);
    ctx->pc = 0x1CD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD08Cu;
    // 0x1cd090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CD08Cu, 0x1CD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD094u;
label_1cd094:
    // 0x1cd094: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd098: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1cd098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1cd09c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd0a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd0a4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CD0A4u;
    SET_GPR_U32(ctx, 31, 0x1CD0ACu);
    ctx->pc = 0x1CD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0A4u;
    // 0x1cd0a8: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CD0A4u, 0x1CD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0ACu;
label_1cd0ac:
    // 0x1cd0ac: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd0b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd0b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0b8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cd0bc: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cd0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd0c0: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CD0C0u;
    SET_GPR_U32(ctx, 31, 0x1CD0C8u);
    ctx->pc = 0x1CD0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0C0u;
    // 0x1cd0c4: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CD0C0u, 0x1CD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0C8u;
label_1cd0c8:
    // 0x1cd0c8: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_1cd0cc:
    // 0x1cd0cc: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD0CCu;
    {
        const bool branch_taken_0x1cd0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0cc) {
            ctx->pc = 0x1CD0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD0CCu;
            // 0x1cd0d0: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD134u;
            goto label_1cd134;
        }
    }
    ctx->pc = 0x1CD0D4u;
    // 0x1cd0d4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CD0D4u;
    SET_GPR_U32(ctx, 31, 0x1CD0DCu);
    ctx->pc = 0x1CD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0D4u;
    // 0x1cd0d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CD0D4u, 0x1CD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0DCu;
label_1cd0dc:
    // 0x1cd0dc: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd0e0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1cd0e4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cd0e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd0ec: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1cd0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd0f0: 0x8e220658  lw          $v0, 0x658($s1)
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd0f4: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1cd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1cd0f8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CD0F8u;
    SET_GPR_U32(ctx, 31, 0x1CD100u);
    ctx->pc = 0x1CD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0F8u;
    // 0x1cd0fc: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CD0F8u, 0x1CD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD100u;
label_1cd100:
    // 0x1cd100: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd104: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd10c: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CD10Cu;
    SET_GPR_U32(ctx, 31, 0x1CD114u);
    ctx->pc = 0x1CD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD10Cu;
    // 0x1cd110: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CD10Cu, 0x1CD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD114u;
label_1cd114:
    // 0x1cd114: 0x8e230658  lw          $v1, 0x658($s1)
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd11c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd120: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cd120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cd124: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cd124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd128: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CD128u;
    SET_GPR_U32(ctx, 31, 0x1CD130u);
    ctx->pc = 0x1CD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD128u;
    // 0x1cd12c: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CD128u, 0x1CD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD130u;
label_1cd130:
    // 0x1cd130: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cd134:
    // 0x1cd134: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CD134u;
    SET_GPR_U32(ctx, 31, 0x1CD13Cu);
    ctx->pc = 0x1CD138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD134u;
    // 0x1cd138: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CD134u, 0x1CD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD13Cu;
label_1cd13c:
    // 0x1cd13c: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1cd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd140: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cd140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd144: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cd144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cd148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd14c: 0x0  nop
    ctx->pc = 0x1cd14cu;
    // NOP
    // 0x1cd150: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CD150u;
    {
        const bool branch_taken_0x1cd150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD150u;
        // 0x1cd154: 0xe6200660  swc1        $f0, 0x660($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd150) {
            ctx->pc = 0x1CD180u;
            goto label_1cd180;
        }
    }
    ctx->pc = 0x1CD158u;
    // 0x1cd158: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD158u;
    SET_GPR_U32(ctx, 31, 0x1CD160u);
    ctx->pc = 0x1CD15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD158u;
    // 0x1cd15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD158u, 0x1CD160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD160u;
label_1cd160:
    // 0x1cd160: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd164: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd16c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd170: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd178: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD178u;
    SET_GPR_U32(ctx, 31, 0x1CD180u);
    ctx->pc = 0x1CD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD178u;
    // 0x1cd17c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD178u, 0x1CD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD180u;
label_1cd180:
    // 0x1cd180: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1cd180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cd184:
    // 0x1cd184: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1cd184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cd188: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1cd188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd18c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1cd18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd190: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cd190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd194: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cd194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd198: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD198u;
        // 0x1cd19c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD1A0u;
}
