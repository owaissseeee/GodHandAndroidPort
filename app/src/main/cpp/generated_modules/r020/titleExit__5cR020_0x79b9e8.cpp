#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titleExit__5cR020
// Address: 0x79b9e8 - 0x79bdc0
void titleExit__5cR020_0x79b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titleExit__5cR020_0x79b9e8");
#endif

    switch (ctx->pc) {
        case 0x79ba64u: goto label_79ba64;
        case 0x79ba84u: goto label_79ba84;
        case 0x79baa4u: goto label_79baa4;
        case 0x79bab4u: goto label_79bab4;
        case 0x79bac4u: goto label_79bac4;
        case 0x79bad4u: goto label_79bad4;
        case 0x79baf4u: goto label_79baf4;
        case 0x79bb08u: goto label_79bb08;
        case 0x79bb34u: goto label_79bb34;
        case 0x79bb54u: goto label_79bb54;
        case 0x79bbb4u: goto label_79bbb4;
        case 0x79bbd0u: goto label_79bbd0;
        case 0x79bbf0u: goto label_79bbf0;
        case 0x79bc24u: goto label_79bc24;
        case 0x79bca0u: goto label_79bca0;
        case 0x79bcfcu: goto label_79bcfc;
        case 0x79bd10u: goto label_79bd10;
        case 0x79bd40u: goto label_79bd40;
        case 0x79bd50u: goto label_79bd50;
        case 0x79bd60u: goto label_79bd60;
        case 0x79bd6cu: goto label_79bd6c;
        case 0x79bd84u: goto label_79bd84;
        default: break;
    }

    ctx->pc = 0x79b9e8u;

    // 0x79b9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b9ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b9f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b9f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79b9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b9fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x79b9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79ba04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ba08: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x79ba08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79ba0c: 0x10730059  beq         $v1, $s3, . + 4 + (0x59 << 2)
    ctx->pc = 0x79BA0Cu;
    {
        const bool branch_taken_0x79ba0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA0Cu;
        // 0x79ba10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba0c) {
            ctx->pc = 0x79BB74u;
            goto label_79bb74;
        }
    }
    ctx->pc = 0x79BA14u;
    // 0x79ba14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA14u;
    {
        const bool branch_taken_0x79ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ba14) {
            ctx->pc = 0x79BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA14u;
            // 0x79ba18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA2Cu;
            goto label_79ba2c;
        }
    }
    ctx->pc = 0x79BA1Cu;
    // 0x79ba1c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BA1Cu;
    {
        const bool branch_taken_0x79ba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA1Cu;
        // 0x79ba20: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba1c) {
            ctx->pc = 0x79BA44u;
            goto label_79ba44;
        }
    }
    ctx->pc = 0x79BA24u;
    // 0x79ba24: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x79BA24u;
    {
        const bool branch_taken_0x79ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA24u;
        // 0x79ba28: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba24) {
            ctx->pc = 0x79BDACu;
            goto label_79bdac;
        }
    }
    ctx->pc = 0x79BA2Cu;
label_79ba2c:
    // 0x79ba2c: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x79BA2Cu;
    {
        const bool branch_taken_0x79ba2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA2Cu;
        // 0x79ba30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba2c) {
            ctx->pc = 0x79BC48u;
            goto label_79bc48;
        }
    }
    ctx->pc = 0x79BA34u;
    // 0x79ba34: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x79BA34u;
    {
        const bool branch_taken_0x79ba34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA34u;
        // 0x79ba38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba34) {
            ctx->pc = 0x79BCECu;
            goto label_79bcec;
        }
    }
    ctx->pc = 0x79BA3Cu;
    // 0x79ba3c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x79BA3Cu;
    {
        const bool branch_taken_0x79ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA3Cu;
        // 0x79ba40: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba3c) {
            ctx->pc = 0x79BDACu;
            goto label_79bdac;
        }
    }
    ctx->pc = 0x79BA44u;
label_79ba44:
    // 0x79ba44: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x79ba48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ba48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ba4c: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x79ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79ba50: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x79ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x79ba54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba58: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x79ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x79ba5c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BA5Cu;
    SET_GPR_U32(ctx, 31, 0x79BA64u);
    ctx->pc = 0x79BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA5Cu;
    // 0x79ba60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BA5Cu, 0x79BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA64u;
label_79ba64:
    // 0x79ba64: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x79ba64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba68: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ba6c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79ba6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79ba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79ba78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79ba7c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BA7Cu;
    SET_GPR_U32(ctx, 31, 0x79BA84u);
    ctx->pc = 0x79BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA7Cu;
    // 0x79ba80: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BA7Cu, 0x79BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA84u;
label_79ba84:
    // 0x79ba84: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x79ba84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ba88: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79ba8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba94: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79ba94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79ba98: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79ba9c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BA9Cu;
    SET_GPR_U32(ctx, 31, 0x79BAA4u);
    ctx->pc = 0x79BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA9Cu;
    // 0x79baa0: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BA9Cu, 0x79BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAA4u;
label_79baa4:
    // 0x79baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79baa8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79baac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BAACu;
    SET_GPR_U32(ctx, 31, 0x79BAB4u);
    ctx->pc = 0x79BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAACu;
    // 0x79bab0: 0xa040004f  sb          $zero, 0x4F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BAACu, 0x79BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAB4u;
label_79bab4:
    // 0x79bab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bab8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79babc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BABCu;
    SET_GPR_U32(ctx, 31, 0x79BAC4u);
    ctx->pc = 0x79BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BABCu;
    // 0x79bac0: 0xa053002b  sb          $s3, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BABCu, 0x79BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAC4u;
label_79bac4:
    // 0x79bac4: 0xa053002b  sb          $s3, 0x2B($v0)
    ctx->pc = 0x79bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 19));
    // 0x79bac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bacc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BACCu;
    SET_GPR_U32(ctx, 31, 0x79BAD4u);
    ctx->pc = 0x79BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BACCu;
    // 0x79bad0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BACCu, 0x79BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAD4u;
label_79bad4:
    // 0x79bad4: 0xa053002b  sb          $s3, 0x2B($v0)
    ctx->pc = 0x79bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 19));
    // 0x79bad8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79badc: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x79bae0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79bae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79bae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BAE4u;
    {
        const bool branch_taken_0x79bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAE4u;
        // 0x79bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bae4) {
            ctx->pc = 0x79BAFCu;
            goto label_79bafc;
        }
    }
    ctx->pc = 0x79BAECu;
    // 0x79baec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BAECu;
    SET_GPR_U32(ctx, 31, 0x79BAF4u);
    ctx->pc = 0x79BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAECu;
    // 0x79baf0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BAECu, 0x79BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAF4u;
label_79baf4:
    // 0x79baf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79BAF4u;
    {
        const bool branch_taken_0x79baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAF4u;
        // 0x79baf8: 0xa053002b  sb          $s3, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baf4) {
            ctx->pc = 0x79BB0Cu;
            goto label_79bb0c;
        }
    }
    ctx->pc = 0x79BAFCu;
label_79bafc:
    // 0x79bafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb00: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BB00u;
    SET_GPR_U32(ctx, 31, 0x79BB08u);
    ctx->pc = 0x79BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB00u;
    // 0x79bb04: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BB00u, 0x79BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB08u;
label_79bb08:
    // 0x79bb08: 0xa040002b  sb          $zero, 0x2B($v0)
    ctx->pc = 0x79bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
label_79bb0c:
    // 0x79bb0c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79bb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79bb10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bb14: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x79bb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x79bb18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79bb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bb24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79bb24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bb28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bb28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb2c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79BB2Cu;
    SET_GPR_U32(ctx, 31, 0x79BB34u);
    ctx->pc = 0x79BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB2Cu;
    // 0x79bb30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79BB2Cu, 0x79BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB34u;
label_79bb34:
    // 0x79bb34: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x79bb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x79bb38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79bb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb40: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x79bb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79bb44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x79bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x79bb48: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x79bb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x79bb4c: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x79BB4Cu;
    SET_GPR_U32(ctx, 31, 0x79BB54u);
    ctx->pc = 0x79BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB4Cu;
    // 0x79bb50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x79BB4Cu, 0x79BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB54u;
label_79bb54:
    // 0x79bb54: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x79bb54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79bb58: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79bb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79bb5c: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79bb5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79bb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79bb64: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x79bb64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79bb68: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79bb6c: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x79bb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79bb70: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79bb70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_79bb74:
    // 0x79bb74: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x79bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79bb78: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79bb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79bb7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bb80: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x79bb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x79bb84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79bb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79bb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79bb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79bb8c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x79bb8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bb90: 0x0  nop
    ctx->pc = 0x79bb90u;
    // NOP
    // 0x79bb94: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x79BB94u;
    {
        const bool branch_taken_0x79bb94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB94u;
        // 0x79bb98: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb94) {
            ctx->pc = 0x79BDA4u;
            goto label_79bda4;
        }
    }
    ctx->pc = 0x79BB9Cu;
    // 0x79bb9c: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x79bb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79bba0: 0xa2400025  sb          $zero, 0x25($s2)
    ctx->pc = 0x79bba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bba4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x79bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x79bba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BBACu;
    SET_GPR_U32(ctx, 31, 0x79BBB4u);
    ctx->pc = 0x79BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBACu;
    // 0x79bbb0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BBACu, 0x79BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBB4u;
label_79bbb4:
    // 0x79bbb4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79bbb8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79bbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbc0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79bbc4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79bbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79bbc8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BBC8u;
    SET_GPR_U32(ctx, 31, 0x79BBD0u);
    ctx->pc = 0x79BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBC8u;
    // 0x79bbcc: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BBC8u, 0x79BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBD0u;
label_79bbd0:
    // 0x79bbd0: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x79bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79bbd4: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79bbd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79bbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79bbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbe0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79bbe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79bbe4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79bbe8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BBE8u;
    SET_GPR_U32(ctx, 31, 0x79BBF0u);
    ctx->pc = 0x79BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBE8u;
    // 0x79bbec: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BBE8u, 0x79BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBF0u;
label_79bbf0:
    // 0x79bbf0: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x79bbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bbf4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79bbf8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79bbfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bc00: 0x9646001c  lhu         $a2, 0x1C($s2)
    ctx->pc = 0x79bc00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x79bc04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bc08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bc0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bc0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc10: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x79bc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x79bc14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79bc14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc18: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x79bc18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x79bc1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79BC1Cu;
    SET_GPR_U32(ctx, 31, 0x79BC24u);
    ctx->pc = 0x79BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC1Cu;
    // 0x79bc20: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79BC1Cu, 0x79BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC24u;
label_79bc24:
    // 0x79bc24: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x79bc24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79bc28: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x79bc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79bc2c: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79bc2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79bc30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79bc34: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x79bc34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79bc38: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79bc38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79bc3c: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x79bc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x79bc40: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x79BC40u;
    {
        const bool branch_taken_0x79bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC40u;
        // 0x79bc44: 0xa2400003  sb          $zero, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc40) {
            ctx->pc = 0x79BDA4u;
            goto label_79bda4;
        }
    }
    ctx->pc = 0x79BC48u;
label_79bc48:
    // 0x79bc48: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x79bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79bc4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79bc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79bc50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bc54: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x79bc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x79bc58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79bc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79bc5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79bc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79bc60: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x79bc60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bc64: 0x0  nop
    ctx->pc = 0x79bc64u;
    // NOP
    // 0x79bc68: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x79BC68u;
    {
        const bool branch_taken_0x79bc68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC68u;
        // 0x79bc6c: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc68) {
            ctx->pc = 0x79BCA4u;
            goto label_79bca4;
        }
    }
    ctx->pc = 0x79BC70u;
    // 0x79bc70: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x79bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x79bc74: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79BC74u;
    {
        const bool branch_taken_0x79bc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bc74) {
            ctx->pc = 0x79BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC74u;
            // 0x79bc78: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCA8u;
            goto label_79bca8;
        }
    }
    ctx->pc = 0x79BC7Cu;
    // 0x79bc7c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79bc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc84: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79bc88: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79bc8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bc90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc94: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79bc94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79bc98: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79BC98u;
    SET_GPR_U32(ctx, 31, 0x79BCA0u);
    ctx->pc = 0x79BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC98u;
    // 0x79bc9c: 0x240a0025  addiu       $t2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BC98u, 0x79BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCA0u;
label_79bca0:
    // 0x79bca0: 0xa2530025  sb          $s3, 0x25($s2)
    ctx->pc = 0x79bca0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 19));
label_79bca4:
    // 0x79bca4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x79bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79bca8:
    // 0x79bca8: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x79bca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x79bcac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bcb0: 0x0  nop
    ctx->pc = 0x79bcb0u;
    // NOP
    // 0x79bcb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x79bcb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bcb8: 0x0  nop
    ctx->pc = 0x79bcb8u;
    // NOP
    // 0x79bcbc: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x79BCBCu;
    {
        const bool branch_taken_0x79bcbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCBCu;
        // 0x79bcc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcbc) {
            ctx->pc = 0x79BDA8u;
            goto label_79bda8;
        }
    }
    ctx->pc = 0x79BCC4u;
    // 0x79bcc4: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x79bcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79bcc8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79bcc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79bccc: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79bcccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79bcd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79bcd4: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x79bcd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x79bcd8: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x79bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79bcdc: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79bce0: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x79bce0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79bce4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79BCE4u;
    {
        const bool branch_taken_0x79bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE4u;
        // 0x79bce8: 0xa2400003  sb          $zero, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bce4) {
            ctx->pc = 0x79BDA8u;
            goto label_79bda8;
        }
    }
    ctx->pc = 0x79BCECu;
label_79bcec:
    // 0x79bcec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79bcf0: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79bcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79bcf4: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BCF4u;
    SET_GPR_U32(ctx, 31, 0x79BCFCu);
    ctx->pc = 0x79BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCF4u;
    // 0x79bcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BCF4u, 0x79BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCFCu;
label_79bcfc:
    // 0x79bcfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79bd00: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x79BD00u;
    {
        const bool branch_taken_0x79bd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bd00) {
            ctx->pc = 0x79BD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD00u;
            // 0x79bd04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDA8u;
            goto label_79bda8;
        }
    }
    ctx->pc = 0x79BD08u;
    // 0x79bd08: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BD08u;
    SET_GPR_U32(ctx, 31, 0x79BD10u);
    ctx->pc = 0x79BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD08u;
    // 0x79bd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BD08u, 0x79BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD10u;
label_79bd10:
    // 0x79bd10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79bd14: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x79BD14u;
    {
        const bool branch_taken_0x79bd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD14u;
        // 0x79bd18: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd14) {
            ctx->pc = 0x79BDA4u;
            goto label_79bda4;
        }
    }
    ctx->pc = 0x79BD1Cu;
    // 0x79bd1c: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x79bd1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79bd20: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x79bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x79bd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd30: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x79bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x79bd34: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x79bd34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x79bd38: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79BD38u;
    SET_GPR_U32(ctx, 31, 0x79BD40u);
    ctx->pc = 0x79BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD38u;
    // 0x79bd3c: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79BD38u, 0x79BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD40u;
label_79bd40:
    // 0x79bd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bd48: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79BD48u;
    SET_GPR_U32(ctx, 31, 0x79BD50u);
    ctx->pc = 0x79BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD48u;
    // 0x79bd4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79BD48u, 0x79BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD50u;
label_79bd50:
    // 0x79bd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd58: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79BD58u;
    SET_GPR_U32(ctx, 31, 0x79BD60u);
    ctx->pc = 0x79BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD58u;
    // 0x79bd5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79BD58u, 0x79BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD60u;
label_79bd60:
    // 0x79bd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd64: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BD64u;
    SET_GPR_U32(ctx, 31, 0x79BD6Cu);
    ctx->pc = 0x79BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD64u;
    // 0x79bd68: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BD64u, 0x79BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD6Cu;
label_79bd6c:
    // 0x79bd6c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79bd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd74: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x79bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79bd78: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79bd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79bd7c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BD7Cu;
    SET_GPR_U32(ctx, 31, 0x79BD84u);
    ctx->pc = 0x79BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD7Cu;
    // 0x79bd80: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BD7Cu, 0x79BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD84u;
label_79bd84:
    // 0x79bd84: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79bd88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79bd8c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79bd90: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79bd94: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x79bd94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79bd98: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bd9c: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x79bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bda0: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x79bda0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_79bda4:
    // 0x79bda4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79bda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79bda8:
    // 0x79bda8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79bda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79bdac:
    // 0x79bdac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79bdacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bdb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79bdb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDB8u;
        // 0x79bdbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDC0u;
}
} // namespace gh_r020
