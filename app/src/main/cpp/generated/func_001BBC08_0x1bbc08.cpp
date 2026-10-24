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

// Function: func_001BBC08
// Address: 0x1bbc08 - 0x1bbe48
void func_001BBC08_0x1bbc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBC08_0x1bbc08");
#endif

    switch (ctx->pc) {
        case 0x1bbcd8u: goto label_1bbcd8;
        case 0x1bbce0u: goto label_1bbce0;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbe10u: goto label_1bbe10;
        default: break;
    }

    ctx->pc = 0x1bbc08u;

    // 0x1bbc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbc18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc1c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1bbc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1bbc20: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BBC20u;
    {
        const bool branch_taken_0x1bbc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC20u;
        // 0x1bbc24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc20) {
            ctx->pc = 0x1BBC68u;
            goto label_1bbc68;
        }
    }
    ctx->pc = 0x1BBC28u;
    // 0x1bbc28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC28u;
    {
        const bool branch_taken_0x1bbc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc28) {
            ctx->pc = 0x1BBC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBC28u;
            // 0x1bbc2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBC40u;
            goto label_1bbc40;
        }
    }
    ctx->pc = 0x1BBC30u;
    // 0x1bbc30: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBC30u;
    {
        const bool branch_taken_0x1bbc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc30) {
            ctx->pc = 0x1BBC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBC30u;
            // 0x1bbc34: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBC58u;
            goto label_1bbc58;
        }
    }
    ctx->pc = 0x1BBC38u;
    // 0x1bbc38: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1BBC38u;
    {
        const bool branch_taken_0x1bbc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC38u;
        // 0x1bbc3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc38) {
            ctx->pc = 0x1BBE38u;
            goto label_1bbe38;
        }
    }
    ctx->pc = 0x1BBC40u;
label_1bbc40:
    // 0x1bbc40: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BBC40u;
    {
        const bool branch_taken_0x1bbc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC40u;
        // 0x1bbc44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc40) {
            ctx->pc = 0x1BBCA0u;
            goto label_1bbca0;
        }
    }
    ctx->pc = 0x1BBC48u;
    // 0x1bbc48: 0x50620036  beql        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BBC48u;
    {
        const bool branch_taken_0x1bbc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbc48) {
            ctx->pc = 0x1BBC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBC48u;
            // 0x1bbc4c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBD24u;
            goto label_1bbd24;
        }
    }
    ctx->pc = 0x1BBC50u;
    // 0x1bbc50: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1BBC50u;
    {
        const bool branch_taken_0x1bbc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC50u;
        // 0x1bbc54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc50) {
            ctx->pc = 0x1BBE38u;
            goto label_1bbe38;
        }
    }
    ctx->pc = 0x1BBC58u;
label_1bbc58:
    // 0x1bbc58: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bbc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bbc5c: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x1bbc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bbc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbc64: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1bbc64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1bbc68:
    // 0x1bbc68: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1bbc6c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bbc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bbc70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbc70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbc74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbc74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbc78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1bbc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbc7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bbc7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bbc80: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1bbc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bbc84: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x1bbc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x1bbc88: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1BBC88u;
    {
        const bool branch_taken_0x1bbc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC88u;
        // 0x1bbc8c: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc88) {
            ctx->pc = 0x1BBE1Cu;
            goto label_1bbe1c;
        }
    }
    ctx->pc = 0x1BBC90u;
    // 0x1bbc90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1bbc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1bbc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbc98: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1BBC98u;
    {
        const bool branch_taken_0x1bbc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC98u;
        // 0x1bbc9c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc98) {
            ctx->pc = 0x1BBE34u;
            goto label_1bbe34;
        }
    }
    ctx->pc = 0x1BBCA0u;
label_1bbca0:
    // 0x1bbca0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bbca4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bbca8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1bbcac: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x1bbcacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bbcb0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bbcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcb8: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1bbcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1bbcbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bbcbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bbcc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bbcc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bbcc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbccc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bbcccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcd0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BBCD0u;
    SET_GPR_U32(ctx, 31, 0x1BBCD8u);
    ctx->pc = 0x1BBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCD0u;
    // 0x1bbcd4: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BBCD0u, 0x1BBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCD8u;
label_1bbcd8:
    // 0x1bbcd8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BBCD8u;
    SET_GPR_U32(ctx, 31, 0x1BBCE0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BBCD8u, 0x1BBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCE0u;
label_1bbce0:
    // 0x1bbce0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bbce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bbce4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbce8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbcec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1bbcecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1bbcf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bbcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bbcf4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bbcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bbcf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbcfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bbcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bbd00: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1bbd04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbd08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbd0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbd10: 0xe6020334  swc1        $f2, 0x334($s0)
    ctx->pc = 0x1bbd10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x1bbd14: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x1bbd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x1bbd18: 0xe6010338  swc1        $f1, 0x338($s0)
    ctx->pc = 0x1bbd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1bbd1c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1bbd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbd20: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x1bbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbd24:
    // 0x1bbd24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbd28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bbd28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bbd2c: 0xc053e98  jal         func_14FA60
    ctx->pc = 0x1BBD2Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD34u);
    ctx->pc = 0x1BBD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD2Cu;
    // 0x1bbd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FA60u, 0x1BBD2Cu, 0x1BBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD34u;
label_1bbd34:
    // 0x1bbd34: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1bbd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbd38: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
    // 0x1bbd3c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bbd3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bbd40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbd44: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1bbd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1bbd48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bbd48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bbd4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bbd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bbd50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bbd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bbd54: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1bbd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1bbd58: 0xda040330  lqc2        $vf4, 0x330($s0)
    ctx->pc = 0x1bbd58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x1bbd5c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1bbd5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1bbd60: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bbd60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1bbd64: 0x4bc52104  vsubx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bbd64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bbd68: 0xfa040330  sqc2        $vf4, 0x330($s0)
    ctx->pc = 0x1bbd68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bbd6c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x1bbd70: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x1bbd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1bbd74: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BBD74u;
    {
        const bool branch_taken_0x1bbd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd74) {
            ctx->pc = 0x1BBD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBD74u;
            // 0x1bbd78: 0x8602056a  lh          $v0, 0x56A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBDD0u;
            goto label_1bbdd0;
        }
    }
    ctx->pc = 0x1BBD7Cu;
    // 0x1bbd7c: 0xc600024c  lwc1        $f0, 0x24C($s0)
    ctx->pc = 0x1bbd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbd80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bbd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bbd84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbd84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbd88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbd8c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1bbd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1bbd90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bbd90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bbd94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bbd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bbd98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bbd98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bbd9c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1bbda0: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1bbda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1bbda4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1bbda4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbda8: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1bbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1bbdac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBDACu;
    {
        const bool branch_taken_0x1bbdac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDACu;
        // 0x1bbdb0: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdac) {
            ctx->pc = 0x1BBDCCu;
            goto label_1bbdcc;
        }
    }
    ctx->pc = 0x1BBDB4u;
    // 0x1bbdb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bbdb8: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x1bbdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x1bbdbc: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1bbdc0: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1bbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1bbdc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bbdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bbdc8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1bbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1bbdcc:
    // 0x1bbdcc: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x1bbdccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_1bbdd0:
    // 0x1bbdd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BBDD0u;
    {
        const bool branch_taken_0x1bbdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDD0u;
        // 0x1bbdd4: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdd0) {
            ctx->pc = 0x1BBE10u;
            goto label_1bbe10;
        }
    }
    ctx->pc = 0x1BBDD8u;
    // 0x1bbdd8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bbddc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1bbde0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBDE0u;
    {
        const bool branch_taken_0x1bbde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDE0u;
        // 0x1bbde4: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbde0) {
            ctx->pc = 0x1BBE10u;
            goto label_1bbe10;
        }
    }
    ctx->pc = 0x1BBDE8u;
    // 0x1bbde8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1bbdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdf0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bbdf4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1bbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bbdf8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bbdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bbdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bbe00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe08: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BBE08u;
    SET_GPR_U32(ctx, 31, 0x1BBE10u);
    ctx->pc = 0x1BBE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE08u;
    // 0x1bbe0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BBE08u, 0x1BBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE10u;
label_1bbe10:
    // 0x1bbe10: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x1bbe14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBE14u;
    {
        const bool branch_taken_0x1bbe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE14u;
        // 0x1bbe18: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe14) {
            ctx->pc = 0x1BBE28u;
            goto label_1bbe28;
        }
    }
    ctx->pc = 0x1BBE1Cu;
label_1bbe1c:
    // 0x1bbe1c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bbe20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBE20u;
    {
        const bool branch_taken_0x1bbe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE20u;
        // 0x1bbe24: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe20) {
            ctx->pc = 0x1BBE34u;
            goto label_1bbe34;
        }
    }
    ctx->pc = 0x1BBE28u;
label_1bbe28:
    // 0x1bbe28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbe2c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bbe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbe30: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1bbe30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_1bbe34:
    // 0x1bbe34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbe34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbe38:
    // 0x1bbe38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE3Cu;
        // 0x1bbe40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBE44u;
    // 0x1bbe44: 0x0  nop
    ctx->pc = 0x1bbe44u;
    // NOP
    ctx->pc = 0x1bbe48u;
}
