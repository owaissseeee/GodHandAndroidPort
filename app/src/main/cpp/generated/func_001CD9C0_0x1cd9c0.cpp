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

// Function: func_001CD9C0
// Address: 0x1cd9c0 - 0x1ce068
void func_001CD9C0_0x1cd9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CD9C0_0x1cd9c0");
#endif

    switch (ctx->pc) {
        case 0x1cd9f8u: goto label_1cd9f8;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdea4u: goto label_1cdea4;
        case 0x1cded8u: goto label_1cded8;
        case 0x1cdf34u: goto label_1cdf34;
        case 0x1cdf4cu: goto label_1cdf4c;
        case 0x1cdf68u: goto label_1cdf68;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdfbcu: goto label_1cdfbc;
        case 0x1cdfdcu: goto label_1cdfdc;
        case 0x1ce004u: goto label_1ce004;
        default: break;
    }

    ctx->pc = 0x1cd9c0u;

    // 0x1cd9c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1cd9c4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1cd9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1cd9c8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1cd9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1cd9cc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1cd9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1cd9d0: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1cd9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1cd9d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9d8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1cd9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x1cd9dc: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1cd9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1cd9e0: 0x261464f0  addiu       $s4, $s0, 0x64F0
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1cd9e4: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1cd9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1cd9e8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1cd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x1cd9ec: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1cd9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1cd9f0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CD9F0u;
    SET_GPR_U32(ctx, 31, 0x1CD9F8u);
    ctx->pc = 0x1CD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9F0u;
    // 0x1cd9f4: 0xe7b50158  swc1        $f21, 0x158($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CD9F0u, 0x1CD9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9F8u;
label_1cd9f8:
    // 0x1cd9f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cd9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9fc: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CD9FCu;
    SET_GPR_U32(ctx, 31, 0x1CDA04u);
    ctx->pc = 0x1CDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9FCu;
    // 0x1cda00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CD9FCu, 0x1CDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA04u;
label_1cda04:
    // 0x1cda04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cda04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cda08: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cda08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cda0c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cda10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cda10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cda14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cda14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cda18: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cda1c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1cda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cda20: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1cda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cda24: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1cda24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1cda28: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1cda2c: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDA2Cu;
    {
        const bool branch_taken_0x1cda2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA2Cu;
        // 0x1cda30: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda2c) {
            ctx->pc = 0x1CDA4Cu;
            goto label_1cda4c;
        }
    }
    ctx->pc = 0x1CDA34u;
    // 0x1cda34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cda34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda38: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cda38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1cda3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cda3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cda40: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cda40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cda44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda48: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cda48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1cda4c:
    // 0x1cda4c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cda4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda50: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1cda50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1cda54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cda54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cda58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cda58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cda5c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cda60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cda60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cda64: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cda64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cda68: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1CDA68u;
    SET_GPR_U32(ctx, 31, 0x1CDA70u);
    ctx->pc = 0x1CDA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA68u;
    // 0x1cda6c: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1CDA68u, 0x1CDA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA70u;
label_1cda70:
    // 0x1cda70: 0x923002f6  lbu         $s0, 0x2F6($s1)
    ctx->pc = 0x1cda70u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cda74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cda78: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1CDA78u;
    {
        const bool branch_taken_0x1cda78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA78u;
        // 0x1cda7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda78) {
            ctx->pc = 0x1CDBA0u;
            goto label_1cdba0;
        }
    }
    ctx->pc = 0x1CDA80u;
    // 0x1cda80: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1cda80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cda84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDA84u;
    {
        const bool branch_taken_0x1cda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda84) {
            ctx->pc = 0x1CDA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDA84u;
            // 0x1cda88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDA9Cu;
            goto label_1cda9c;
        }
    }
    ctx->pc = 0x1CDA8Cu;
    // 0x1cda8c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDA8Cu;
    {
        const bool branch_taken_0x1cda8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA8Cu;
        // 0x1cda90: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda8c) {
            ctx->pc = 0x1CDAB4u;
            goto label_1cdab4;
        }
    }
    ctx->pc = 0x1CDA94u;
    // 0x1cda94: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x1CDA94u;
    {
        const bool branch_taken_0x1cda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA94u;
        // 0x1cda98: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda94) {
            ctx->pc = 0x1CE044u;
            goto label_1ce044;
        }
    }
    ctx->pc = 0x1CDA9Cu;
label_1cda9c:
    // 0x1cda9c: 0x12020143  beq         $s0, $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1CDA9Cu;
    {
        const bool branch_taken_0x1cda9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA9Cu;
        // 0x1cdaa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda9c) {
            ctx->pc = 0x1CDFACu;
            goto label_1cdfac;
        }
    }
    ctx->pc = 0x1CDAA4u;
    // 0x1cdaa4: 0x1202015b  beq         $s0, $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x1CDAA4u;
    {
        const bool branch_taken_0x1cdaa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAA4u;
        // 0x1cdaa8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaa4) {
            ctx->pc = 0x1CE014u;
            goto label_1ce014;
        }
    }
    ctx->pc = 0x1CDAACu;
    // 0x1cdaac: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x1CDAACu;
    {
        const bool branch_taken_0x1cdaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAACu;
        // 0x1cdab0: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaac) {
            ctx->pc = 0x1CE044u;
            goto label_1ce044;
        }
    }
    ctx->pc = 0x1CDAB4u;
label_1cdab4:
    // 0x1cdab4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cdab8: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1cdabc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cdac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cdac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1cdac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdacc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CDACCu;
    SET_GPR_U32(ctx, 31, 0x1CDAD4u);
    ctx->pc = 0x1CDAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDACCu;
    // 0x1cdad0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CDACCu, 0x1CDAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD4u;
label_1cdad4:
    // 0x1cdad4: 0xc6210640  lwc1        $f1, 0x640($s1)
    ctx->pc = 0x1cdad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdad8: 0xc6200648  lwc1        $f0, 0x648($s1)
    ctx->pc = 0x1cdad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdadc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1cdadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1cdae0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1cdae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1cdae4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdae8: 0x0  nop
    ctx->pc = 0x1cdae8u;
    // NOP
    // 0x1cdaec: 0x0  nop
    ctx->pc = 0x1cdaecu;
    // NOP
    // 0x1cdaf0: 0x46010344  c1          0x10344
    ctx->pc = 0x1cdaf0u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1cdaf4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CDAF4u;
    SET_GPR_U32(ctx, 31, 0x1CDAFCu);
    ctx->pc = 0x1CDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF4u;
    // 0x1cdaf8: 0xc62c0644  lwc1        $f12, 0x644($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CDAF4u, 0x1CDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAFCu;
label_1cdafc:
    // 0x1cdafc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cdafcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdb00: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1cdb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdb04: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1cdb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdb08: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CDB08u;
    SET_GPR_U32(ctx, 31, 0x1CDB10u);
    ctx->pc = 0x1CDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB08u;
    // 0x1cdb0c: 0xe6200100  swc1        $f0, 0x100($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CDB08u, 0x1CDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB10u;
label_1cdb10:
    // 0x1cdb10: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1cdb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1cdb14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdb18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdb1c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1cdb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1cdb20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cdb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cdb24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cdb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb28: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cdb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cdb2c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cdb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cdb30: 0xe6210660  swc1        $f1, 0x660($s1)
    ctx->pc = 0x1cdb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1cdb34: 0xa2220531  sb          $v0, 0x531($s1)
    ctx->pc = 0x1cdb34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cdb38: 0xc0a4c2a  jal         func_2930A8
    ctx->pc = 0x1CDB38u;
    SET_GPR_U32(ctx, 31, 0x1CDB40u);
    ctx->pc = 0x1CDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB38u;
    // 0x1cdb3c: 0xe6220674  swc1        $f2, 0x674($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930A8u, 0x1CDB38u, 0x1CDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB40u;
label_1cdb40:
    // 0x1cdb40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cdb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cdb44: 0x3c01bc8e  lui         $at, 0xBC8E
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48270 << 16));
    // 0x1cdb48: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cdb48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cdb4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdb50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB50u;
    {
        const bool branch_taken_0x1cdb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb50) {
            ctx->pc = 0x1CDB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB50u;
            // 0x1cdb54: 0xe6200678  swc1        $f0, 0x678($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB6Cu;
            goto label_1cdb6c;
        }
    }
    ctx->pc = 0x1CDB58u;
    // 0x1cdb58: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1cdb5c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cdb5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cdb60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdb64: 0x0  nop
    ctx->pc = 0x1cdb64u;
    // NOP
    // 0x1cdb68: 0xe6200678  swc1        $f0, 0x678($s1)
    ctx->pc = 0x1cdb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
label_1cdb6c:
    // 0x1cdb6c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cdb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cdb70: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1cdb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1cdb74: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cdb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cdb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdb7c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1cdb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1cdb80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cdb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cdb84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdb88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cdb8c: 0xe620067c  swc1        $f0, 0x67C($s1)
    ctx->pc = 0x1cdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1660), bits); }
    // 0x1cdb90: 0xe6210648  swc1        $f1, 0x648($s1)
    ctx->pc = 0x1cdb90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    // 0x1cdb94: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cdb94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cdb98: 0xae200640  sw          $zero, 0x640($s1)
    ctx->pc = 0x1cdb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 0));
    // 0x1cdb9c: 0xae200644  sw          $zero, 0x644($s1)
    ctx->pc = 0x1cdb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 0));
label_1cdba0:
    // 0x1cdba0: 0xc6210674  lwc1        $f1, 0x674($s1)
    ctx->pc = 0x1cdba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdba8: 0x0  nop
    ctx->pc = 0x1cdba8u;
    // NOP
    // 0x1cdbac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdbb0: 0x0  nop
    ctx->pc = 0x1cdbb0u;
    // NOP
    // 0x1cdbb4: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x1CDBB4u;
    {
        const bool branch_taken_0x1cdbb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdbb4) {
            ctx->pc = 0x1CDBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDBB4u;
            // 0x1cdbb8: 0xc621067c  lwc1        $f1, 0x67C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC4Cu;
            goto label_1cdc4c;
        }
    }
    ctx->pc = 0x1CDBBCu;
    // 0x1cdbbc: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1cdbbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1cdbc0: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x1cdbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdbc8: 0x0  nop
    ctx->pc = 0x1cdbc8u;
    // NOP
    // 0x1cdbcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cdbccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdbd0: 0x0  nop
    ctx->pc = 0x1cdbd0u;
    // NOP
    // 0x1cdbd4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDBD4u;
    {
        const bool branch_taken_0x1cdbd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBD4u;
        // 0x1cdbd8: 0xe6210674  swc1        $f1, 0x674($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbd4) {
            ctx->pc = 0x1CDC24u;
            goto label_1cdc24;
        }
    }
    ctx->pc = 0x1CDBDCu;
    // 0x1cdbdc: 0x3c013ed6  lui         $at, 0x3ED6
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16086 << 16));
    // 0x1cdbe0: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1cdbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1cdbe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdbe8: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1cdbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdbec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cdbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cdbf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cdbf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdbf4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cdbf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cdbf8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CDBF8u;
    SET_GPR_U32(ctx, 31, 0x1CDC00u);
    ctx->pc = 0x1CDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF8u;
    // 0x1cdbfc: 0xe6210100  swc1        $f1, 0x100($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CDBF8u, 0x1CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC00u;
label_1cdc00:
    // 0x1cdc00: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x1cdc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x1cdc04: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cdc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cdc08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdc0c: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1cdc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1cdc10: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cdc14: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1cdc14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1cdc18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cdc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cdc20: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cdc24:
    // 0x1cdc24: 0xc6200678  lwc1        $f0, 0x678($s1)
    ctx->pc = 0x1cdc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc28: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1cdc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cdc2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cdc30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc34: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cdc34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cdc38: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CDC38u;
    SET_GPR_U32(ctx, 31, 0x1CDC40u);
    ctx->pc = 0x1CDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC38u;
    // 0x1cdc3c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CDC38u, 0x1CDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC40u;
label_1cdc40:
    // 0x1cdc40: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cdc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cdc44: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1CDC44u;
    {
        const bool branch_taken_0x1cdc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC44u;
        // 0x1cdc48: 0x27b200d0  addiu       $s2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc44) {
            ctx->pc = 0x1CDDB0u;
            goto label_1cddb0;
        }
    }
    ctx->pc = 0x1CDC4Cu;
label_1cdc4c:
    // 0x1cdc4c: 0x3c013ae4  lui         $at, 0x3AE4
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15076 << 16));
    // 0x1cdc50: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x1cdc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x1cdc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc58: 0x0  nop
    ctx->pc = 0x1cdc58u;
    // NOP
    // 0x1cdc5c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cdc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cdc60: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
    // 0x1cdc64: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1cdc64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1cdc68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cdc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cdc6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdc6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1cdc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc74: 0x0  nop
    ctx->pc = 0x1cdc74u;
    // NOP
    // 0x1cdc78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDC78u;
    {
        const bool branch_taken_0x1cdc78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC78u;
        // 0x1cdc7c: 0xe621067c  swc1        $f1, 0x67C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1660), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc78) {
            ctx->pc = 0x1CDC84u;
            goto label_1cdc84;
        }
    }
    ctx->pc = 0x1CDC80u;
    // 0x1cdc80: 0xe622067c  swc1        $f2, 0x67C($s1)
    ctx->pc = 0x1cdc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1660), bits); }
label_1cdc84:
    // 0x1cdc84: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1cdc88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc8c: 0x0  nop
    ctx->pc = 0x1cdc8cu;
    // NOP
    // 0x1cdc90: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1cdc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc94: 0x0  nop
    ctx->pc = 0x1cdc94u;
    // NOP
    // 0x1cdc98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDC98u;
    {
        const bool branch_taken_0x1cdc98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC98u;
        // 0x1cdc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc98) {
            ctx->pc = 0x1CDCB0u;
            goto label_1cdcb0;
        }
    }
    ctx->pc = 0x1CDCA0u;
    // 0x1cdca0: 0xc62c067c  lwc1        $f12, 0x67C($s1)
    ctx->pc = 0x1cdca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdca4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cdca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdca8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1CDCA8u;
    SET_GPR_U32(ctx, 31, 0x1CDCB0u);
    ctx->pc = 0x1CDCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCA8u;
    // 0x1cdcac: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1CDCA8u, 0x1CDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCB0u;
label_1cdcb0:
    // 0x1cdcb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1cdcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1cdcb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdcb8: 0x0  nop
    ctx->pc = 0x1cdcb8u;
    // NOP
    // 0x1cdcbc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1cdcbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdcc0: 0x0  nop
    ctx->pc = 0x1cdcc0u;
    // NOP
    // 0x1cdcc4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1CDCC4u;
    {
        const bool branch_taken_0x1cdcc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC4u;
        // 0x1cdcc8: 0x27b200d0  addiu       $s2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcc4) {
            ctx->pc = 0x1CDD50u;
            goto label_1cdd50;
        }
    }
    ctx->pc = 0x1CDCCCu;
    // 0x1cdccc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cdcd0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1cdcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cdcd4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1cdcd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cdcd8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cdcd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdcdc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cdcdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cdce0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1cdce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cdce4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cdce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdce8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1cdce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cdcec: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1cdcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdcf0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1cdcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdcf4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1cdcf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1cdcf8: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1cdcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdcfc: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x1cdcfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1cdd00: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1cdd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1cdd04: 0xe7ac00b4  swc1        $f12, 0xB4($sp)
    ctx->pc = 0x1cdd04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1cdd08: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1cdd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1cdd0c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cdd0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cdd10: 0x0  nop
    ctx->pc = 0x1cdd10u;
    // NOP
    // 0x1cdd14: 0x0  nop
    ctx->pc = 0x1cdd14u;
    // NOP
    // 0x1cdd18: 0x46020344  c1          0x20344
    ctx->pc = 0x1cdd18u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x1cdd1c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CDD1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD24u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CDD1Cu, 0x1CDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD24u;
label_1cdd24:
    // 0x1cdd24: 0xc62e067c  lwc1        $f14, 0x67C($s1)
    ctx->pc = 0x1cdd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cdd28: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1cdd28u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdd2c: 0xc62c0100  lwc1        $f12, 0x100($s1)
    ctx->pc = 0x1cdd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdd30: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x1CDD30u;
    SET_GPR_U32(ctx, 31, 0x1CDD38u);
    ctx->pc = 0x1CDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD30u;
    // 0x1cdd34: 0x46147382  mul.s       $f14, $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x1CDD30u, 0x1CDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD38u;
label_1cdd38:
    // 0x1cdd38: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1cdd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdd3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdd3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdd40: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cdd40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cdd44: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CDD44u;
    SET_GPR_U32(ctx, 31, 0x1CDD4Cu);
    ctx->pc = 0x1CDD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD44u;
    // 0x1cdd48: 0xe6210100  swc1        $f1, 0x100($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CDD44u, 0x1CDD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD4Cu;
label_1cdd4c:
    // 0x1cdd4c: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1cdd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1cdd50:
    // 0x1cdd50: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1cdd54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cdd54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cdd58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdd5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1cdd60: 0xc6200648  lwc1        $f0, 0x648($s1)
    ctx->pc = 0x1cdd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd64: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1cdd68: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1cdd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1cdd6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cdd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cdd70: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1CDD70u;
    SET_GPR_U32(ctx, 31, 0x1CDD78u);
    ctx->pc = 0x1CDD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD70u;
    // 0x1cdd74: 0xe6200648  swc1        $f0, 0x648($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1CDD70u, 0x1CDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD78u;
label_1cdd78:
    // 0x1cdd78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdd7c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDD7Cu;
    {
        const bool branch_taken_0x1cdd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7Cu;
        // 0x1cdd80: 0xc6200648  lwc1        $f0, 0x648($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd7c) {
            ctx->pc = 0x1CDD94u;
            goto label_1cdd94;
        }
    }
    ctx->pc = 0x1CDD84u;
    // 0x1cdd84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cdd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdd88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdd8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD8Cu;
    {
        const bool branch_taken_0x1cdd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd8c) {
            ctx->pc = 0x1CDD9Cu;
            goto label_1cdd9c;
        }
    }
    ctx->pc = 0x1CDD94u;
label_1cdd94:
    // 0x1cdd94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cdd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cdd98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdd9c:
    // 0x1cdd9c: 0x0  nop
    ctx->pc = 0x1cdd9cu;
    // NOP
    // 0x1cdda0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdda4: 0x0  nop
    ctx->pc = 0x1cdda4u;
    // NOP
    // 0x1cdda8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDDA8u;
    {
        const bool branch_taken_0x1cdda8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdda8) {
            ctx->pc = 0x1CDDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDDA8u;
            // 0x1cddac: 0xe6210648  swc1        $f1, 0x648($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDDB0u;
            goto label_1cddb0;
        }
    }
    ctx->pc = 0x1CDDB0u;
label_1cddb0:
    // 0x1cddb0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1cddb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cddb4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1cddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1cddb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddbc: 0xc051dca  jal         func_147728
    ctx->pc = 0x1CDDBCu;
    SET_GPR_U32(ctx, 31, 0x1CDDC4u);
    ctx->pc = 0x1CDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDBCu;
    // 0x1cddc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1CDDBCu, 0x1CDDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDC4u;
label_1cddc4:
    // 0x1cddc4: 0x26220640  addiu       $v0, $s1, 0x640
    ctx->pc = 0x1cddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cddc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cddc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cddcc: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1cddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cddd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cddd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddd8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CDDD8u;
    SET_GPR_U32(ctx, 31, 0x1CDDE0u);
    ctx->pc = 0x1CDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDD8u;
    // 0x1cdddc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CDDD8u, 0x1CDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDE0u;
label_1cdde0:
    // 0x1cdde0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cdde0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdde4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1cdde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cdde8: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1cdde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cddec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1cddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1cddf0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1cddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cddf4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1cddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cddf8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1cddf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1cddfc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1cddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1cde00: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1cde00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1cde04: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1cde04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cde08: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1cde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cde0c: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1cde0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cde10: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cde10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cde14: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cde14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cde18: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cde18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cde1c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1cde1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cde20: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cde20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cde24: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1cde24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cde28: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cde28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cde2c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1cde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1cde30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cde30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cde34: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cde34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cde38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cde38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cde3c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cde3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cde40: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cde44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cde44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cde48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE48u;
    {
        const bool branch_taken_0x1cde48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE48u;
        // 0x1cde4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde48) {
            ctx->pc = 0x1CDE68u;
            goto label_1cde68;
        }
    }
    ctx->pc = 0x1CDE50u;
    // 0x1cde50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cde50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde54: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cde54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cde58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cde58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde5c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1cde5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1cde60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cde60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde64: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1cde64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1cde68:
    // 0x1cde68: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1cde68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cde6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cde70: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cde70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1cde74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cde74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cde78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cde78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cde7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cde7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cde80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cde84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cde84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cde88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cde8c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cde8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cde90: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cde90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cde94: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cde98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cde98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde9c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDEA4u);
    ctx->pc = 0x1CDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE9Cu;
    // 0x1cdea0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CDE9Cu, 0x1CDEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDEA4u;
label_1cdea4:
    // 0x1cdea4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CDEA4u;
    {
        const bool branch_taken_0x1cdea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdea4) {
            ctx->pc = 0x1CDEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDEA4u;
            // 0x1cdea8: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDED0u;
            goto label_1cded0;
        }
    }
    ctx->pc = 0x1CDEACu;
    // 0x1cdeac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cdeb0: 0x1050003b  beq         $v0, $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CDEB0u;
    {
        const bool branch_taken_0x1cdeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEB0u;
        // 0x1cdeb4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeb0) {
            ctx->pc = 0x1CDFA0u;
            goto label_1cdfa0;
        }
    }
    ctx->pc = 0x1CDEB8u;
    // 0x1cdeb8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cdeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cdebc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1cdebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdec0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cdec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cdec4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cdec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdec8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1CDEC8u;
    {
        const bool branch_taken_0x1cdec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEC8u;
        // 0x1cdecc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdec8) {
            ctx->pc = 0x1CDFA0u;
            goto label_1cdfa0;
        }
    }
    ctx->pc = 0x1CDED0u;
label_1cded0:
    // 0x1cded0: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CDED0u;
    SET_GPR_U32(ctx, 31, 0x1CDED8u);
    ctx->pc = 0x1CDED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDED0u;
    // 0x1cded4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CDED0u, 0x1CDED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDED8u;
label_1cded8:
    // 0x1cded8: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdedc: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cdee0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1cdee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1cdee4: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x1cdee4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cdee8: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdeec: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x1cdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x1cdef0: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1cdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1cdef4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CDEF4u;
    {
        const bool branch_taken_0x1cdef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdef4) {
            ctx->pc = 0x1CDEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDEF4u;
            // 0x1cdef8: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDF2Cu;
            goto label_1cdf2c;
        }
    }
    ctx->pc = 0x1CDEFCu;
    // 0x1cdefc: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x1cdefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x1cdf00: 0x24020275  addiu       $v0, $zero, 0x275
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x1cdf04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDF04u;
    {
        const bool branch_taken_0x1cdf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF04u;
        // 0x1cdf08: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf04) {
            ctx->pc = 0x1CDF14u;
            goto label_1cdf14;
        }
    }
    ctx->pc = 0x1CDF0Cu;
    // 0x1cdf0c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDF0Cu;
    {
        const bool branch_taken_0x1cdf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cdf0c) {
            ctx->pc = 0x1CDF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDF0Cu;
            // 0x1cdf10: 0x8e230650  lw          $v1, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDF20u;
            goto label_1cdf20;
        }
    }
    ctx->pc = 0x1CDF14u;
label_1cdf14:
    // 0x1cdf14: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cdf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdf18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDF18u;
    {
        const bool branch_taken_0x1cdf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF18u;
        // 0x1cdf1c: 0xac45004c  sw          $a1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf18) {
            ctx->pc = 0x1CDF28u;
            goto label_1cdf28;
        }
    }
    ctx->pc = 0x1CDF20u;
label_1cdf20:
    // 0x1cdf20: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1cdf24: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1cdf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_1cdf28:
    // 0x1cdf28: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1cdf2c:
    // 0x1cdf2c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF34u);
    ctx->pc = 0x1CDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF2Cu;
    // 0x1cdf30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CDF2Cu, 0x1CDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF34u;
label_1cdf34:
    // 0x1cdf34: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1cdf38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cdf38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cdf3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cdf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdf40: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdf44: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CDF44u;
    SET_GPR_U32(ctx, 31, 0x1CDF4Cu);
    ctx->pc = 0x1CDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF44u;
    // 0x1cdf48: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CDF44u, 0x1CDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF4Cu;
label_1cdf4c:
    // 0x1cdf4c: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdf50: 0x24020123  addiu       $v0, $zero, 0x123
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1cdf54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf58: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1cdf58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cdf5c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1cdf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1cdf60: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CDF60u;
    SET_GPR_U32(ctx, 31, 0x1CDF68u);
    ctx->pc = 0x1CDF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF60u;
    // 0x1cdf64: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CDF60u, 0x1CDF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF68u;
label_1cdf68:
    // 0x1cdf68: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cdf6c: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0x26a464f0  addiu       $a0, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cdf78: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1cdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cdf7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDF7Cu;
    {
        const bool branch_taken_0x1cdf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF7Cu;
        // 0x1cdf80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf7c) {
            ctx->pc = 0x1CDFA4u;
            goto label_1cdfa4;
        }
    }
    ctx->pc = 0x1CDF84u;
    // 0x1cdf84: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1cdf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cdf88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdf8c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cdf8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cdf90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cdf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdf94: 0x0  nop
    ctx->pc = 0x1cdf94u;
    // NOP
    // 0x1cdf98: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1CDF98u;
    {
        const bool branch_taken_0x1cdf98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF98u;
        // 0x1cdf9c: 0xe6200660  swc1        $f0, 0x660($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf98) {
            ctx->pc = 0x1CE03Cu;
            goto label_1ce03c;
        }
    }
    ctx->pc = 0x1CDFA0u;
label_1cdfa0:
    // 0x1cdfa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cdfa4:
    // 0x1cdfa4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA4u;
        // 0x1cdfa8: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CE03Cu;
            goto label_1ce03c;
        }
    }
    ctx->pc = 0x1CDFACu;
label_1cdfac:
    // 0x1cdfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfb0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdfb4: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1CDFB4u;
    SET_GPR_U32(ctx, 31, 0x1CDFBCu);
    ctx->pc = 0x1CDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFB4u;
    // 0x1cdfb8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1CDFB4u, 0x1CDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFBCu;
label_1cdfbc:
    // 0x1cdfbc: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cdfc0: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x1cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1cdfc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdfc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cdfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdfcc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1cdfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cdfd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfd4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CDFD4u;
    SET_GPR_U32(ctx, 31, 0x1CDFDCu);
    ctx->pc = 0x1CDFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFD4u;
    // 0x1cdfd8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CDFD4u, 0x1CDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFDCu;
label_1cdfdc:
    // 0x1cdfdc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cdfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cdfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfe4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cdfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cdfe8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cdfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdfec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cdfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cdff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdffc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CDFFCu;
    SET_GPR_U32(ctx, 31, 0x1CE004u);
    ctx->pc = 0x1CE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFFCu;
    // 0x1ce000: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CDFFCu, 0x1CE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE004u;
label_1ce004:
    // 0x1ce004: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ce004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ce008: 0xa6300568  sh          $s0, 0x568($s1)
    ctx->pc = 0x1ce008u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ce00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ce010: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1ce010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1ce014:
    // 0x1ce014: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x1ce014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x1ce018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce01c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ce020: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE020u;
    {
        const bool branch_taken_0x1ce020 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1CE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE020u;
        // 0x1ce024: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce020) {
            ctx->pc = 0x1CE03Cu;
            goto label_1ce03c;
        }
    }
    ctx->pc = 0x1CE028u;
    // 0x1ce028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce02c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ce02cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce030: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1ce030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce034: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1ce034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce038: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ce038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ce03c:
    // 0x1ce03c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1ce03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1ce040: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1ce040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1ce044:
    // 0x1ce044: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1ce044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ce048: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1ce048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ce04c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1ce04cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ce050: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1ce050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ce054: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1ce054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ce058: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1ce058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce05c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1ce05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce060: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE060u;
        // 0x1ce064: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE068u;
}
