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

// Function: func_001AA058
// Address: 0x1aa058 - 0x1aa188
void func_001AA058_0x1aa058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA058_0x1aa058");
#endif

    switch (ctx->pc) {
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        case 0x1aa150u: goto label_1aa150;
        case 0x1aa154u: goto label_1aa154;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa15cu: goto label_1aa15c;
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        default: break;
    }

    ctx->pc = 0x1aa058u;

label_1aa058:
    // 0x1aa058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aa058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1aa05c:
    // 0x1aa05c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aa05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1aa060:
    // 0x1aa060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aa064:
    // 0x1aa064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa068:
    // 0x1aa068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa06c:
    // 0x1aa06c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1aa06cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1aa070:
    // 0x1aa070: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1aa074:
    // 0x1aa074: 0x5080003a  beql        $a0, $zero, . + 4 + (0x3A << 2)
label_1aa078:
    if (ctx->pc == 0x1AA078u) {
        ctx->pc = 0x1AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA074u;
        // 0x1aa078: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA07Cu;
        goto label_1aa07c;
    }
    ctx->pc = 0x1AA074u;
    {
        const bool branch_taken_0x1aa074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa074) {
            ctx->pc = 0x1AA078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA074u;
            // 0x1aa078: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA160u;
            goto label_1aa160;
        }
    }
    ctx->pc = 0x1AA07Cu;
label_1aa07c:
    // 0x1aa07c: 0xc07f636  jal         func_1FD8D8
label_1aa080:
    if (ctx->pc == 0x1AA080u) {
        ctx->pc = 0x1AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA07Cu;
        // 0x1aa080: 0x8e050618  lw          $a1, 0x618($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA084u;
        goto label_1aa084;
    }
    ctx->pc = 0x1AA07Cu;
    SET_GPR_U32(ctx, 31, 0x1AA084u);
    ctx->pc = 0x1AA080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA07Cu;
    // 0x1aa080: 0x8e050618  lw          $a1, 0x618($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8D8u, 0x1AA07Cu, 0x1AA084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA084u;
label_1aa084:
    // 0x1aa084: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa088:
    // 0x1aa088: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
label_1aa08c:
    if (ctx->pc == 0x1AA08Cu) {
        ctx->pc = 0x1AA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA088u;
        // 0x1aa08c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA090u;
        goto label_1aa090;
    }
    ctx->pc = 0x1AA088u;
    {
        const bool branch_taken_0x1aa088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa088) {
            ctx->pc = 0x1AA08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA088u;
            // 0x1aa08c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA160u;
            goto label_1aa160;
        }
    }
    ctx->pc = 0x1AA090u;
label_1aa090:
    // 0x1aa090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aa094:
    // 0x1aa094: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x1aa094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
label_1aa098:
    // 0x1aa098: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1aa098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_1aa09c:
    // 0x1aa09c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_1aa0a0:
    if (ctx->pc == 0x1AA0A0u) {
        ctx->pc = 0x1AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA09Cu;
        // 0x1aa0a0: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0A4u;
        goto label_1aa0a4;
    }
    ctx->pc = 0x1AA09Cu;
    {
        const bool branch_taken_0x1aa09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa09c) {
            ctx->pc = 0x1AA0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA09Cu;
            // 0x1aa0a0: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA160u;
            goto label_1aa160;
        }
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1aa0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1aa0a8:
    // 0x1aa0a8: 0x26110630  addiu       $s1, $s0, 0x630
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
label_1aa0ac:
    // 0x1aa0ac: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x1aa0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_1aa0b0:
    // 0x1aa0b0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1aa0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1aa0b4:
    // 0x1aa0b4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1aa0b8:
    // 0x1aa0b8: 0x40f809  jalr        $v0
label_1aa0bc:
    if (ctx->pc == 0x1AA0BCu) {
        ctx->pc = 0x1AA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0B8u;
        // 0x1aa0bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0C0u;
        goto label_1aa0c0;
    }
    ctx->pc = 0x1AA0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA0C0u);
        ctx->pc = 0x1AA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0B8u;
        // 0x1aa0bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0B8u, 0x1AA0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0C0u;
label_1aa0c0:
    // 0x1aa0c0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_1aa0c4:
    if (ctx->pc == 0x1AA0C4u) {
        ctx->pc = 0x1AA0C8u;
        goto label_1aa0c8;
    }
    ctx->pc = 0x1AA0C0u;
    {
        const bool branch_taken_0x1aa0c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa0c0) {
            ctx->pc = 0x1AA0E0u;
            goto label_1aa0e0;
        }
    }
    ctx->pc = 0x1AA0C8u;
label_1aa0c8:
    // 0x1aa0c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1aa0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa0cc:
    // 0x1aa0cc: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1aa0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
label_1aa0d0:
    // 0x1aa0d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aa0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa0d4:
    // 0x1aa0d4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1aa0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1aa0d8:
    // 0x1aa0d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aa0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa0dc:
    // 0x1aa0dc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1aa0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1aa0e0:
    // 0x1aa0e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1aa0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1aa0e4:
    // 0x1aa0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aa0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aa0e8:
    // 0x1aa0e8: 0xc6000634  lwc1        $f0, 0x634($s0)
    ctx->pc = 0x1aa0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa0ec:
    // 0x1aa0ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1aa0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1aa0f0:
    // 0x1aa0f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aa0f4:
    // 0x1aa0f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aa0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1aa0f8:
    // 0x1aa0f8: 0xc0b6dac  jal         func_2DB6B0
label_1aa0fc:
    if (ctx->pc == 0x1AA0FCu) {
        ctx->pc = 0x1AA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0F8u;
        // 0x1aa0fc: 0xe6000634  swc1        $f0, 0x634($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA100u;
        goto label_1aa100;
    }
    ctx->pc = 0x1AA0F8u;
    SET_GPR_U32(ctx, 31, 0x1AA100u);
    ctx->pc = 0x1AA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0F8u;
    // 0x1aa0fc: 0xe6000634  swc1        $f0, 0x634($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AA0F8u, 0x1AA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA100u;
label_1aa100:
    // 0x1aa100: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1aa104:
    // 0x1aa104: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1aa104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1aa108:
    // 0x1aa108: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1aa10c:
    // 0x1aa10c: 0xa0f809  jalr        $a1
label_1aa110:
    if (ctx->pc == 0x1AA110u) {
        ctx->pc = 0x1AA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA10Cu;
        // 0x1aa110: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA114u;
        goto label_1aa114;
    }
    ctx->pc = 0x1AA10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AA114u);
        ctx->pc = 0x1AA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA10Cu;
        // 0x1aa110: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA10Cu, 0x1AA114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA114u;
label_1aa114:
    // 0x1aa114: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aa114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa118:
    // 0x1aa118: 0xc6010634  lwc1        $f1, 0x634($s0)
    ctx->pc = 0x1aa118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa11c:
    // 0x1aa11c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1aa11cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1aa120:
    // 0x1aa120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa124:
    // 0x1aa124: 0x0  nop
    ctx->pc = 0x1aa124u;
    // NOP
label_1aa128:
    // 0x1aa128: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_1aa12c:
    if (ctx->pc == 0x1AA12Cu) {
        ctx->pc = 0x1AA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA128u;
        // 0x1aa12c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA130u;
        goto label_1aa130;
    }
    ctx->pc = 0x1AA128u;
    {
        const bool branch_taken_0x1aa128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa128) {
            ctx->pc = 0x1AA12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA128u;
            // 0x1aa12c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA170u;
            goto label_1aa170;
        }
    }
    ctx->pc = 0x1AA130u;
label_1aa130:
    // 0x1aa130: 0xc0b6dac  jal         func_2DB6B0
label_1aa134:
    if (ctx->pc == 0x1AA134u) {
        ctx->pc = 0x1AA138u;
        goto label_1aa138;
    }
    ctx->pc = 0x1AA130u;
    SET_GPR_U32(ctx, 31, 0x1AA138u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AA130u, 0x1AA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA138u;
label_1aa138:
    // 0x1aa138: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1aa138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1aa13c:
    // 0x1aa13c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1aa140:
    // 0x1aa140: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1aa144:
    // 0x1aa144: 0xa0f809  jalr        $a1
label_1aa148:
    if (ctx->pc == 0x1AA148u) {
        ctx->pc = 0x1AA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA144u;
        // 0x1aa148: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA14Cu;
        goto label_1aa14c;
    }
    ctx->pc = 0x1AA144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AA14Cu);
        ctx->pc = 0x1AA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA144u;
        // 0x1aa148: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA144u, 0x1AA14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA14Cu;
label_1aa14c:
    // 0x1aa14c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aa14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa150:
    // 0x1aa150: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1aa150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1aa154:
    // 0x1aa154: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x1aa154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
label_1aa158:
    // 0x1aa158: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aa15c:
    if (ctx->pc == 0x1AA15Cu) {
        ctx->pc = 0x1AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA158u;
        // 0x1aa15c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA160u;
        goto label_1aa160;
    }
    ctx->pc = 0x1AA158u;
    {
        const bool branch_taken_0x1aa158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA158u;
        // 0x1aa15c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa158) {
            ctx->pc = 0x1AA170u;
            goto label_1aa170;
        }
    }
    ctx->pc = 0x1AA160u;
label_1aa160:
    // 0x1aa160: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1aa160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1aa164:
    // 0x1aa164: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1aa164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1aa168:
    // 0x1aa168: 0x40f809  jalr        $v0
label_1aa16c:
    if (ctx->pc == 0x1AA16Cu) {
        ctx->pc = 0x1AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA168u;
        // 0x1aa16c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA170u;
        goto label_1aa170;
    }
    ctx->pc = 0x1AA168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA170u);
        ctx->pc = 0x1AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA168u;
        // 0x1aa16c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA168u, 0x1AA170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA170u;
label_1aa170:
    // 0x1aa170: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aa170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa174:
    // 0x1aa174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa178:
    // 0x1aa178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa17c:
    // 0x1aa17c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1aa17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aa180:
    // 0x1aa180: 0x3e00008  jr          $ra
label_1aa184:
    if (ctx->pc == 0x1AA184u) {
        ctx->pc = 0x1AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA180u;
        // 0x1aa184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA188u;
        goto label_fallthrough_0x1aa180;
    }
    ctx->pc = 0x1AA180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA180u;
        // 0x1aa184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa180:
    ctx->pc = 0x1AA188u;
}
