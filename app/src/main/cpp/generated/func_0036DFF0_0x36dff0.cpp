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

// Function: func_0036DFF0
// Address: 0x36dff0 - 0x36e200
void func_0036DFF0_0x36dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DFF0_0x36dff0");
#endif

    switch (ctx->pc) {
        case 0x36dff0u: goto label_36dff0;
        case 0x36dff4u: goto label_36dff4;
        case 0x36dff8u: goto label_36dff8;
        case 0x36dffcu: goto label_36dffc;
        case 0x36e000u: goto label_36e000;
        case 0x36e004u: goto label_36e004;
        case 0x36e008u: goto label_36e008;
        case 0x36e00cu: goto label_36e00c;
        case 0x36e010u: goto label_36e010;
        case 0x36e014u: goto label_36e014;
        case 0x36e018u: goto label_36e018;
        case 0x36e01cu: goto label_36e01c;
        case 0x36e020u: goto label_36e020;
        case 0x36e024u: goto label_36e024;
        case 0x36e028u: goto label_36e028;
        case 0x36e02cu: goto label_36e02c;
        case 0x36e030u: goto label_36e030;
        case 0x36e034u: goto label_36e034;
        case 0x36e038u: goto label_36e038;
        case 0x36e03cu: goto label_36e03c;
        case 0x36e040u: goto label_36e040;
        case 0x36e044u: goto label_36e044;
        case 0x36e048u: goto label_36e048;
        case 0x36e04cu: goto label_36e04c;
        case 0x36e050u: goto label_36e050;
        case 0x36e054u: goto label_36e054;
        case 0x36e058u: goto label_36e058;
        case 0x36e05cu: goto label_36e05c;
        case 0x36e060u: goto label_36e060;
        case 0x36e064u: goto label_36e064;
        case 0x36e068u: goto label_36e068;
        case 0x36e06cu: goto label_36e06c;
        case 0x36e070u: goto label_36e070;
        case 0x36e074u: goto label_36e074;
        case 0x36e078u: goto label_36e078;
        case 0x36e07cu: goto label_36e07c;
        case 0x36e080u: goto label_36e080;
        case 0x36e084u: goto label_36e084;
        case 0x36e088u: goto label_36e088;
        case 0x36e08cu: goto label_36e08c;
        case 0x36e090u: goto label_36e090;
        case 0x36e094u: goto label_36e094;
        case 0x36e098u: goto label_36e098;
        case 0x36e09cu: goto label_36e09c;
        case 0x36e0a0u: goto label_36e0a0;
        case 0x36e0a4u: goto label_36e0a4;
        case 0x36e0a8u: goto label_36e0a8;
        case 0x36e0acu: goto label_36e0ac;
        case 0x36e0b0u: goto label_36e0b0;
        case 0x36e0b4u: goto label_36e0b4;
        case 0x36e0b8u: goto label_36e0b8;
        case 0x36e0bcu: goto label_36e0bc;
        case 0x36e0c0u: goto label_36e0c0;
        case 0x36e0c4u: goto label_36e0c4;
        case 0x36e0c8u: goto label_36e0c8;
        case 0x36e0ccu: goto label_36e0cc;
        case 0x36e0d0u: goto label_36e0d0;
        case 0x36e0d4u: goto label_36e0d4;
        case 0x36e0d8u: goto label_36e0d8;
        case 0x36e0dcu: goto label_36e0dc;
        case 0x36e0e0u: goto label_36e0e0;
        case 0x36e0e4u: goto label_36e0e4;
        case 0x36e0e8u: goto label_36e0e8;
        case 0x36e0ecu: goto label_36e0ec;
        case 0x36e0f0u: goto label_36e0f0;
        case 0x36e0f4u: goto label_36e0f4;
        case 0x36e0f8u: goto label_36e0f8;
        case 0x36e0fcu: goto label_36e0fc;
        case 0x36e100u: goto label_36e100;
        case 0x36e104u: goto label_36e104;
        case 0x36e108u: goto label_36e108;
        case 0x36e10cu: goto label_36e10c;
        case 0x36e110u: goto label_36e110;
        case 0x36e114u: goto label_36e114;
        case 0x36e118u: goto label_36e118;
        case 0x36e11cu: goto label_36e11c;
        case 0x36e120u: goto label_36e120;
        case 0x36e124u: goto label_36e124;
        case 0x36e128u: goto label_36e128;
        case 0x36e12cu: goto label_36e12c;
        case 0x36e130u: goto label_36e130;
        case 0x36e134u: goto label_36e134;
        case 0x36e138u: goto label_36e138;
        case 0x36e13cu: goto label_36e13c;
        case 0x36e140u: goto label_36e140;
        case 0x36e144u: goto label_36e144;
        case 0x36e148u: goto label_36e148;
        case 0x36e14cu: goto label_36e14c;
        case 0x36e150u: goto label_36e150;
        case 0x36e154u: goto label_36e154;
        case 0x36e158u: goto label_36e158;
        case 0x36e15cu: goto label_36e15c;
        case 0x36e160u: goto label_36e160;
        case 0x36e164u: goto label_36e164;
        case 0x36e168u: goto label_36e168;
        case 0x36e16cu: goto label_36e16c;
        case 0x36e170u: goto label_36e170;
        case 0x36e174u: goto label_36e174;
        case 0x36e178u: goto label_36e178;
        case 0x36e17cu: goto label_36e17c;
        case 0x36e180u: goto label_36e180;
        case 0x36e184u: goto label_36e184;
        case 0x36e188u: goto label_36e188;
        case 0x36e18cu: goto label_36e18c;
        case 0x36e190u: goto label_36e190;
        case 0x36e194u: goto label_36e194;
        case 0x36e198u: goto label_36e198;
        case 0x36e19cu: goto label_36e19c;
        case 0x36e1a0u: goto label_36e1a0;
        case 0x36e1a4u: goto label_36e1a4;
        case 0x36e1a8u: goto label_36e1a8;
        case 0x36e1acu: goto label_36e1ac;
        case 0x36e1b0u: goto label_36e1b0;
        case 0x36e1b4u: goto label_36e1b4;
        case 0x36e1b8u: goto label_36e1b8;
        case 0x36e1bcu: goto label_36e1bc;
        case 0x36e1c0u: goto label_36e1c0;
        case 0x36e1c4u: goto label_36e1c4;
        case 0x36e1c8u: goto label_36e1c8;
        case 0x36e1ccu: goto label_36e1cc;
        case 0x36e1d0u: goto label_36e1d0;
        case 0x36e1d4u: goto label_36e1d4;
        case 0x36e1d8u: goto label_36e1d8;
        case 0x36e1dcu: goto label_36e1dc;
        case 0x36e1e0u: goto label_36e1e0;
        case 0x36e1e4u: goto label_36e1e4;
        case 0x36e1e8u: goto label_36e1e8;
        case 0x36e1ecu: goto label_36e1ec;
        case 0x36e1f0u: goto label_36e1f0;
        case 0x36e1f4u: goto label_36e1f4;
        case 0x36e1f8u: goto label_36e1f8;
        case 0x36e1fcu: goto label_36e1fc;
        default: break;
    }

    ctx->pc = 0x36dff0u;

label_36dff0:
    // 0x36dff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36dff4:
    // 0x36dff4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36dff8:
    // 0x36dff8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36dff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36dffc:
    // 0x36dffc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_36e000:
    // 0x36e000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36e000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36e004:
    // 0x36e004: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36e008:
    // 0x36e008: 0x26530160  addiu       $s3, $s2, 0x160
    ctx->pc = 0x36e008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_36e00c:
    // 0x36e00c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36e00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_36e010:
    // 0x36e010: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x36e010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36e014:
    // 0x36e014: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_36e018:
    // 0x36e018: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x36e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_36e01c:
    // 0x36e01c: 0xae600494  sw          $zero, 0x494($s3)
    ctx->pc = 0x36e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 0));
label_36e020:
    // 0x36e020: 0xae600498  sw          $zero, 0x498($s3)
    ctx->pc = 0x36e020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 0));
label_36e024:
    // 0x36e024: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x36e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
label_36e028:
    // 0x36e028: 0x1000005d  b           . + 4 + (0x5D << 2)
label_36e02c:
    if (ctx->pc == 0x36E02Cu) {
        ctx->pc = 0x36E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E028u;
        // 0x36e02c: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E030u;
        goto label_36e030;
    }
    ctx->pc = 0x36E028u;
    {
        const bool branch_taken_0x36e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E028u;
        // 0x36e02c: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e028) {
            ctx->pc = 0x36E1A0u;
            goto label_36e1a0;
        }
    }
    ctx->pc = 0x36E030u;
label_36e030:
    // 0x36e030: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36e030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36e034:
    // 0x36e034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e038:
    // 0x36e038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e03c:
    // 0x36e03c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36e040:
    // 0x36e040: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36e040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36e044:
    // 0x36e044: 0x40f809  jalr        $v0
label_36e048:
    if (ctx->pc == 0x36E048u) {
        ctx->pc = 0x36E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E044u;
        // 0x36e048: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E04Cu;
        goto label_36e04c;
    }
    ctx->pc = 0x36E044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E04Cu);
        ctx->pc = 0x36E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E044u;
        // 0x36e048: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E044u, 0x36E04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E04Cu;
label_36e04c:
    // 0x36e04c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36e050:
    // 0x36e050: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_36e054:
    if (ctx->pc == 0x36E054u) {
        ctx->pc = 0x36E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E050u;
        // 0x36e054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E058u;
        goto label_36e058;
    }
    ctx->pc = 0x36E050u;
    {
        const bool branch_taken_0x36e050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E050u;
        // 0x36e054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e050) {
            ctx->pc = 0x36E0F0u;
            goto label_36e0f0;
        }
    }
    ctx->pc = 0x36E058u;
label_36e058:
    // 0x36e058: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x36e058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_36e05c:
    // 0x36e05c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36e060:
    if (ctx->pc == 0x36E060u) {
        ctx->pc = 0x36E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E05Cu;
        // 0x36e060: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E064u;
        goto label_36e064;
    }
    ctx->pc = 0x36E05Cu;
    {
        const bool branch_taken_0x36e05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E05Cu;
        // 0x36e060: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e05c) {
            ctx->pc = 0x36E080u;
            goto label_36e080;
        }
    }
    ctx->pc = 0x36E064u;
label_36e064:
    // 0x36e064: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36e068:
    // 0x36e068: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_36e06c:
    if (ctx->pc == 0x36E06Cu) {
        ctx->pc = 0x36E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E068u;
        // 0x36e06c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E070u;
        goto label_36e070;
    }
    ctx->pc = 0x36E068u;
    {
        const bool branch_taken_0x36e068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E068u;
        // 0x36e06c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e068) {
            ctx->pc = 0x36E118u;
            goto label_36e118;
        }
    }
    ctx->pc = 0x36E070u;
label_36e070:
    // 0x36e070: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_36e074:
    if (ctx->pc == 0x36E074u) {
        ctx->pc = 0x36E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E070u;
        // 0x36e074: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E078u;
        goto label_36e078;
    }
    ctx->pc = 0x36E070u;
    {
        const bool branch_taken_0x36e070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E070u;
        // 0x36e074: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e070) {
            ctx->pc = 0x36E108u;
            goto label_36e108;
        }
    }
    ctx->pc = 0x36E078u;
label_36e078:
    // 0x36e078: 0x1000002b  b           . + 4 + (0x2B << 2)
label_36e07c:
    if (ctx->pc == 0x36E07Cu) {
        ctx->pc = 0x36E080u;
        goto label_36e080;
    }
    ctx->pc = 0x36E078u;
    {
        const bool branch_taken_0x36e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e078) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E080u;
label_36e080:
    // 0x36e080: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_36e084:
    if (ctx->pc == 0x36E084u) {
        ctx->pc = 0x36E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E080u;
        // 0x36e084: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E088u;
        goto label_36e088;
    }
    ctx->pc = 0x36E080u;
    {
        const bool branch_taken_0x36e080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E080u;
        // 0x36e084: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e080) {
            ctx->pc = 0x36E0B8u;
            goto label_36e0b8;
        }
    }
    ctx->pc = 0x36E088u;
label_36e088:
    // 0x36e088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_36e08c:
    if (ctx->pc == 0x36E08Cu) {
        ctx->pc = 0x36E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E088u;
        // 0x36e08c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E090u;
        goto label_36e090;
    }
    ctx->pc = 0x36E088u;
    {
        const bool branch_taken_0x36e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E088u;
        // 0x36e08c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e088) {
            ctx->pc = 0x36E0A8u;
            goto label_36e0a8;
        }
    }
    ctx->pc = 0x36E090u;
label_36e090:
    // 0x36e090: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x36e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_36e094:
    // 0x36e094: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_36e098:
    if (ctx->pc == 0x36E098u) {
        ctx->pc = 0x36E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E094u;
        // 0x36e098: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E09Cu;
        goto label_36e09c;
    }
    ctx->pc = 0x36E094u;
    {
        const bool branch_taken_0x36e094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E094u;
        // 0x36e098: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e094) {
            ctx->pc = 0x36E0E0u;
            goto label_36e0e0;
        }
    }
    ctx->pc = 0x36E09Cu;
label_36e09c:
    // 0x36e09c: 0x10000022  b           . + 4 + (0x22 << 2)
label_36e0a0:
    if (ctx->pc == 0x36E0A0u) {
        ctx->pc = 0x36E0A4u;
        goto label_36e0a4;
    }
    ctx->pc = 0x36E09Cu;
    {
        const bool branch_taken_0x36e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e09c) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E0A4u;
label_36e0a4:
    // 0x36e0a4: 0x0  nop
    ctx->pc = 0x36e0a4u;
    // NOP
label_36e0a8:
    // 0x36e0a8: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_36e0ac:
    if (ctx->pc == 0x36E0ACu) {
        ctx->pc = 0x36E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0A8u;
        // 0x36e0ac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0B0u;
        goto label_36e0b0;
    }
    ctx->pc = 0x36E0A8u;
    {
        const bool branch_taken_0x36e0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0A8u;
        // 0x36e0ac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e0a8) {
            ctx->pc = 0x36E0D0u;
            goto label_36e0d0;
        }
    }
    ctx->pc = 0x36E0B0u;
label_36e0b0:
    // 0x36e0b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_36e0b4:
    if (ctx->pc == 0x36E0B4u) {
        ctx->pc = 0x36E0B8u;
        goto label_36e0b8;
    }
    ctx->pc = 0x36E0B0u;
    {
        const bool branch_taken_0x36e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e0b0) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E0B8u;
label_36e0b8:
    // 0x36e0b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x36e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36e0bc:
    // 0x36e0bc: 0xc0db8e0  jal         func_36E380
label_36e0c0:
    if (ctx->pc == 0x36E0C0u) {
        ctx->pc = 0x36E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0BCu;
        // 0x36e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0C4u;
        goto label_36e0c4;
    }
    ctx->pc = 0x36E0BCu;
    SET_GPR_U32(ctx, 31, 0x36E0C4u);
    ctx->pc = 0x36E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0BCu;
    // 0x36e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E380u, 0x36E0BCu, 0x36E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0C4u;
label_36e0c4:
    // 0x36e0c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_36e0c8:
    if (ctx->pc == 0x36E0C8u) {
        ctx->pc = 0x36E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0C4u;
        // 0x36e0c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0CCu;
        goto label_36e0cc;
    }
    ctx->pc = 0x36E0C4u;
    {
        const bool branch_taken_0x36e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0C4u;
        // 0x36e0c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e0c4) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E0CCu;
label_36e0cc:
    // 0x36e0cc: 0x0  nop
    ctx->pc = 0x36e0ccu;
    // NOP
label_36e0d0:
    // 0x36e0d0: 0xc0dbad6  jal         func_36EB58
label_36e0d4:
    if (ctx->pc == 0x36E0D4u) {
        ctx->pc = 0x36E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0D0u;
        // 0x36e0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0D8u;
        goto label_36e0d8;
    }
    ctx->pc = 0x36E0D0u;
    SET_GPR_U32(ctx, 31, 0x36E0D8u);
    ctx->pc = 0x36E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0D0u;
    // 0x36e0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB58u, 0x36E0D0u, 0x36E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0D8u;
label_36e0d8:
    // 0x36e0d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_36e0dc:
    if (ctx->pc == 0x36E0DCu) {
        ctx->pc = 0x36E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0D8u;
        // 0x36e0dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0E0u;
        goto label_36e0e0;
    }
    ctx->pc = 0x36E0D8u;
    {
        const bool branch_taken_0x36e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0D8u;
        // 0x36e0dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e0d8) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E0E0u;
label_36e0e0:
    // 0x36e0e0: 0xc0dbb1e  jal         func_36EC78
label_36e0e4:
    if (ctx->pc == 0x36E0E4u) {
        ctx->pc = 0x36E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0E0u;
        // 0x36e0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0E8u;
        goto label_36e0e8;
    }
    ctx->pc = 0x36E0E0u;
    SET_GPR_U32(ctx, 31, 0x36E0E8u);
    ctx->pc = 0x36E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0E0u;
    // 0x36e0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC78u, 0x36E0E0u, 0x36E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0E8u;
label_36e0e8:
    // 0x36e0e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_36e0ec:
    if (ctx->pc == 0x36E0ECu) {
        ctx->pc = 0x36E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0E8u;
        // 0x36e0ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0F0u;
        goto label_36e0f0;
    }
    ctx->pc = 0x36E0E8u;
    {
        const bool branch_taken_0x36e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0E8u;
        // 0x36e0ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e0e8) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E0F0u;
label_36e0f0:
    // 0x36e0f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x36e0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36e0f4:
    // 0x36e0f4: 0xc0dbc12  jal         func_36F048
label_36e0f8:
    if (ctx->pc == 0x36E0F8u) {
        ctx->pc = 0x36E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0F4u;
        // 0x36e0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E0FCu;
        goto label_36e0fc;
    }
    ctx->pc = 0x36E0F4u;
    SET_GPR_U32(ctx, 31, 0x36E0FCu);
    ctx->pc = 0x36E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0F4u;
    // 0x36e0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F048u, 0x36E0F4u, 0x36E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0FCu;
label_36e0fc:
    // 0x36e0fc: 0x1000000a  b           . + 4 + (0xA << 2)
label_36e100:
    if (ctx->pc == 0x36E100u) {
        ctx->pc = 0x36E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0FCu;
        // 0x36e100: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E104u;
        goto label_36e104;
    }
    ctx->pc = 0x36E0FCu;
    {
        const bool branch_taken_0x36e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0FCu;
        // 0x36e100: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e0fc) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E104u;
label_36e104:
    // 0x36e104: 0x0  nop
    ctx->pc = 0x36e104u;
    // NOP
label_36e108:
    // 0x36e108: 0xc0dc80a  jal         func_372028
label_36e10c:
    if (ctx->pc == 0x36E10Cu) {
        ctx->pc = 0x36E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E108u;
        // 0x36e10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E110u;
        goto label_36e110;
    }
    ctx->pc = 0x36E108u;
    SET_GPR_U32(ctx, 31, 0x36E110u);
    ctx->pc = 0x36E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E108u;
    // 0x36e10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372028u, 0x36E108u, 0x36E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E110u;
label_36e110:
    // 0x36e110: 0x10000005  b           . + 4 + (0x5 << 2)
label_36e114:
    if (ctx->pc == 0x36E114u) {
        ctx->pc = 0x36E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E110u;
        // 0x36e114: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E118u;
        goto label_36e118;
    }
    ctx->pc = 0x36E110u;
    {
        const bool branch_taken_0x36e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E110u;
        // 0x36e114: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e110) {
            ctx->pc = 0x36E128u;
            goto label_36e128;
        }
    }
    ctx->pc = 0x36E118u;
label_36e118:
    // 0x36e118: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x36e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36e11c:
    // 0x36e11c: 0xc0dc964  jal         func_372590
label_36e120:
    if (ctx->pc == 0x36E120u) {
        ctx->pc = 0x36E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E11Cu;
        // 0x36e120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E124u;
        goto label_36e124;
    }
    ctx->pc = 0x36E11Cu;
    SET_GPR_U32(ctx, 31, 0x36E124u);
    ctx->pc = 0x36E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E11Cu;
    // 0x36e120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372590u, 0x36E11Cu, 0x36E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E124u;
label_36e124:
    // 0x36e124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36e124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e128:
    // 0x36e128: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_36e12c:
    if (ctx->pc == 0x36E12Cu) {
        ctx->pc = 0x36E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E128u;
        // 0x36e12c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E130u;
        goto label_36e130;
    }
    ctx->pc = 0x36E128u;
    {
        const bool branch_taken_0x36e128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e128) {
            ctx->pc = 0x36E12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E128u;
            // 0x36e12c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E150u;
            goto label_36e150;
        }
    }
    ctx->pc = 0x36E130u;
label_36e130:
    // 0x36e130: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36e134:
    // 0x36e134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36e134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36e138:
    // 0x36e138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e13c:
    // 0x36e13c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36e140:
    // 0x36e140: 0x40f809  jalr        $v0
label_36e144:
    if (ctx->pc == 0x36E144u) {
        ctx->pc = 0x36E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E140u;
        // 0x36e144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E148u;
        goto label_36e148;
    }
    ctx->pc = 0x36E140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E148u);
        ctx->pc = 0x36E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E140u;
        // 0x36e144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E140u, 0x36E148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E148u;
label_36e148:
    // 0x36e148: 0x1000001b  b           . + 4 + (0x1B << 2)
label_36e14c:
    if (ctx->pc == 0x36E14Cu) {
        ctx->pc = 0x36E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E148u;
        // 0x36e14c: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E150u;
        goto label_36e150;
    }
    ctx->pc = 0x36E148u;
    {
        const bool branch_taken_0x36e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E148u;
        // 0x36e14c: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e148) {
            ctx->pc = 0x36E1B8u;
            goto label_36e1b8;
        }
    }
    ctx->pc = 0x36E150u;
label_36e150:
    // 0x36e150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36e154:
    // 0x36e154: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36e154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36e158:
    // 0x36e158: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36e158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36e15c:
    // 0x36e15c: 0xc0ceb28  jal         func_33ACA0
label_36e160:
    if (ctx->pc == 0x36E160u) {
        ctx->pc = 0x36E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E15Cu;
        // 0x36e160: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E164u;
        goto label_36e164;
    }
    ctx->pc = 0x36E15Cu;
    SET_GPR_U32(ctx, 31, 0x36E164u);
    ctx->pc = 0x36E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E15Cu;
    // 0x36e160: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36E15Cu, 0x36E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E164u;
label_36e164:
    // 0x36e164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36e168:
    // 0x36e168: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36e168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36e16c:
    // 0x36e16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e170:
    // 0x36e170: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36e174:
    // 0x36e174: 0x40f809  jalr        $v0
label_36e178:
    if (ctx->pc == 0x36E178u) {
        ctx->pc = 0x36E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E174u;
        // 0x36e178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E17Cu;
        goto label_36e17c;
    }
    ctx->pc = 0x36E174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E17Cu);
        ctx->pc = 0x36E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E174u;
        // 0x36e178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E174u, 0x36E17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E17Cu;
label_36e17c:
    // 0x36e17c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36e180:
    // 0x36e180: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x36e180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36e184:
    // 0x36e184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e188:
    // 0x36e188: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36e18c:
    // 0x36e18c: 0x40f809  jalr        $v0
label_36e190:
    if (ctx->pc == 0x36E190u) {
        ctx->pc = 0x36E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E18Cu;
        // 0x36e190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E194u;
        goto label_36e194;
    }
    ctx->pc = 0x36E18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E194u);
        ctx->pc = 0x36E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E18Cu;
        // 0x36e190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E18Cu, 0x36E194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E194u;
label_36e194:
    // 0x36e194: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x36e194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_36e198:
    // 0x36e198: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
label_36e19c:
    if (ctx->pc == 0x36E19Cu) {
        ctx->pc = 0x36E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E198u;
        // 0x36e19c: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E1A0u;
        goto label_36e1a0;
    }
    ctx->pc = 0x36E198u;
    {
        const bool branch_taken_0x36e198 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e198) {
            ctx->pc = 0x36E19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E198u;
            // 0x36e19c: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E1BCu;
            goto label_36e1bc;
        }
    }
    ctx->pc = 0x36E1A0u;
label_36e1a0:
    // 0x36e1a0: 0xc0daede  jal         func_36BB78
label_36e1a4:
    if (ctx->pc == 0x36E1A4u) {
        ctx->pc = 0x36E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1A0u;
        // 0x36e1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E1A8u;
        goto label_36e1a8;
    }
    ctx->pc = 0x36E1A0u;
    SET_GPR_U32(ctx, 31, 0x36E1A8u);
    ctx->pc = 0x36E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E1A0u;
    // 0x36e1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36E1A0u, 0x36E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1A8u;
label_36e1a8:
    // 0x36e1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36e1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e1ac:
    // 0x36e1ac: 0x5600ffa0  bnel        $s0, $zero, . + 4 + (-0x60 << 2)
label_36e1b0:
    if (ctx->pc == 0x36E1B0u) {
        ctx->pc = 0x36E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1ACu;
        // 0x36e1b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E1B4u;
        goto label_36e1b4;
    }
    ctx->pc = 0x36E1ACu;
    {
        const bool branch_taken_0x36e1ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e1ac) {
            ctx->pc = 0x36E1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E1ACu;
            // 0x36e1b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e030;
        }
    }
    ctx->pc = 0x36E1B4u;
label_36e1b4:
    // 0x36e1b4: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x36e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_36e1b8:
    // 0x36e1b8: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x36e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
label_36e1bc:
    // 0x36e1bc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x36e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_36e1c0:
    // 0x36e1c0: 0x8e6404a0  lw          $a0, 0x4A0($s3)
    ctx->pc = 0x36e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1184)));
label_36e1c4:
    // 0x36e1c4: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x36e1c4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_36e1c8:
    // 0x36e1c8: 0x8e650498  lw          $a1, 0x498($s3)
    ctx->pc = 0x36e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
label_36e1cc:
    // 0x36e1cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_36e1d0:
    // 0x36e1d0: 0xae63049c  sw          $v1, 0x49C($s3)
    ctx->pc = 0x36e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 3));
label_36e1d4:
    // 0x36e1d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_36e1d8:
    // 0x36e1d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36e1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36e1dc:
    // 0x36e1dc: 0xae6404a0  sw          $a0, 0x4A0($s3)
    ctx->pc = 0x36e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 4));
label_36e1e0:
    // 0x36e1e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36e1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36e1e4:
    // 0x36e1e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36e1e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36e1e8:
    // 0x36e1e8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36e1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36e1ec:
    // 0x36e1ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x36e1ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36e1f0:
    // 0x36e1f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x36e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_36e1f4:
    // 0x36e1f4: 0x3e00008  jr          $ra
label_36e1f8:
    if (ctx->pc == 0x36E1F8u) {
        ctx->pc = 0x36E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1F4u;
        // 0x36e1f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36E1FCu;
        goto label_36e1fc;
    }
    ctx->pc = 0x36E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1F4u;
        // 0x36e1f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E1FCu;
label_36e1fc:
    // 0x36e1fc: 0x0  nop
    ctx->pc = 0x36e1fcu;
    // NOP
    ctx->pc = 0x36e200u;
}
