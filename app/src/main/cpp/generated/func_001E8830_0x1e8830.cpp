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

// Function: func_001E8830
// Address: 0x1e8830 - 0x1e8da8
void func_001E8830_0x1e8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8830_0x1e8830");
#endif

    switch (ctx->pc) {
        case 0x1e8888u: goto label_1e8888;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d90u: goto label_1e8d90;
        default: break;
    }

    ctx->pc = 0x1e8830u;

    // 0x1e8830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8834: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e8834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e8838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e883c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e883cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8848: 0x50400152  beql        $v0, $zero, . + 4 + (0x152 << 2)
    ctx->pc = 0x1E8848u;
    {
        const bool branch_taken_0x1e8848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8848) {
            ctx->pc = 0x1E884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8848u;
            // 0x1e884c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8D94u;
            goto label_1e8d94;
        }
    }
    ctx->pc = 0x1E8850u;
    // 0x1e8850: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8854: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1e8854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e8858: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1E8858u;
    {
        const bool branch_taken_0x1e8858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8858u;
        // 0x1e885c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8858) {
            ctx->pc = 0x1E8D88u;
            goto label_1e8d88;
        }
    }
    ctx->pc = 0x1E8860u;
    // 0x1e8860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8864: 0x2442bb80  addiu       $v0, $v0, -0x4480
    ctx->pc = 0x1e8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949760));
    // 0x1e8868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e8868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e886c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e886cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8870: 0x800008  jr          $a0
    ctx->pc = 0x1E8870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8878u: goto label_1e8878;
            case 0x1E88D0u: goto label_1e88d0;
            case 0x1E8928u: goto label_1e8928;
            case 0x1E8CC0u: goto label_1e8cc0;
            case 0x1E8D88u: goto label_1e8d88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8870u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E8878u;
label_1e8878:
    // 0x1e8878: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1e8878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1e887c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e887cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8880: 0xc07a3de  jal         func_1E8F78
    ctx->pc = 0x1E8880u;
    SET_GPR_U32(ctx, 31, 0x1E8888u);
    ctx->pc = 0x1E8884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8880u;
    // 0x1e8884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F78u, 0x1E8880u, 0x1E8888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8888u;
label_1e8888:
    // 0x1e8888: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e888c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e8890: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1e8890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e8894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8898: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1e8898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1e889c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e88a0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1e88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1e88a4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1e88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1e88a8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1e88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1e88ac: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1e88acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1e88b0: 0xa20000c8  sb          $zero, 0xC8($s0)
    ctx->pc = 0x1e88b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e88b4: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x1e88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x1e88b8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e88bc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e88c0: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1e88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1e88c4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1e88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1e88c8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1E88C8u;
    {
        const bool branch_taken_0x1e88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88C8u;
        // 0x1e88cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88c8) {
            ctx->pc = 0x1E8D84u;
            goto label_1e8d84;
        }
    }
    ctx->pc = 0x1E88D0u;
label_1e88d0:
    // 0x1e88d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e88d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E88D4u;
    {
        const bool branch_taken_0x1e88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88D4u;
        // 0x1e88d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88d4) {
            ctx->pc = 0x1E88E8u;
            goto label_1e88e8;
        }
    }
    ctx->pc = 0x1E88DCu;
    // 0x1e88dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e88dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E88E0u;
    {
        const bool branch_taken_0x1e88e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88E0u;
        // 0x1e88e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88e0) {
            ctx->pc = 0x1E88ECu;
            goto label_1e88ec;
        }
    }
    ctx->pc = 0x1E88E8u;
label_1e88e8:
    // 0x1e88e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e88ec:
    // 0x1e88ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e88ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e88f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E88F0u;
    {
        const bool branch_taken_0x1e88f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88F0u;
        // 0x1e88f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88f0) {
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E88F8u;
    // 0x1e88f8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e88fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e8900: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1E8900u;
    {
        const bool branch_taken_0x1e8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8900u;
        // 0x1e8904: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8900) {
            ctx->pc = 0x1E8D7Cu;
            goto label_1e8d7c;
        }
    }
    ctx->pc = 0x1E8908u;
label_1e8908:
    // 0x1e8908: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x1e890c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1e890cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1e8910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e8910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8918: 0xc07a40a  jal         func_1E9028
    ctx->pc = 0x1E8918u;
    SET_GPR_U32(ctx, 31, 0x1E8920u);
    ctx->pc = 0x1E891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8918u;
    // 0x1e891c: 0xc60d00bc  lwc1        $f13, 0xBC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9028u, 0x1E8918u, 0x1E8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8920u;
label_1e8920:
    // 0x1e8920: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1E8920u;
    {
        const bool branch_taken_0x1e8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8920) {
            ctx->pc = 0x1E8D88u;
            goto label_1e8d88;
        }
    }
    ctx->pc = 0x1E8928u;
label_1e8928:
    // 0x1e8928: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e892c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e8930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8934: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e8934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e8938: 0xc07a41e  jal         func_1E9078
    ctx->pc = 0x1E8938u;
    SET_GPR_U32(ctx, 31, 0x1E8940u);
    ctx->pc = 0x1E893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8938u;
    // 0x1e893c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9078u, 0x1E8938u, 0x1E8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8940u;
label_1e8940:
    // 0x1e8940: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8944: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e894c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e8950: 0x8e0700c4  lw          $a3, 0xC4($s0)
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1e8954: 0x0  nop
    ctx->pc = 0x1e8954u;
    // NOP
    // 0x1e8958: 0x0  nop
    ctx->pc = 0x1e8958u;
    // NOP
    // 0x1e895c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e895cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1e8960: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8964: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e8964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e8968: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1e8968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e896c: 0x2466ffec  addiu       $a2, $v1, -0x14
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1e8970: 0x28820015  slti        $v0, $a0, 0x15
    ctx->pc = 0x1e8970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8974: 0x10e50061  beq         $a3, $a1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E8974u;
    {
        const bool branch_taken_0x1e8974 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8974u;
        // 0x1e8978: 0x82300b  movn        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8974) {
            ctx->pc = 0x1E8AFCu;
            goto label_1e8afc;
        }
    }
    ctx->pc = 0x1E897Cu;
    // 0x1e897c: 0x920300c8  lbu         $v1, 0xC8($s0)
    ctx->pc = 0x1e897cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1e8980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8984: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E8984u;
    {
        const bool branch_taken_0x1e8984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8984u;
        // 0x1e8988: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8984) {
            ctx->pc = 0x1E8A20u;
            goto label_1e8a20;
        }
    }
    ctx->pc = 0x1E898Cu;
    // 0x1e898c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E898Cu;
    {
        const bool branch_taken_0x1e898c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E898Cu;
        // 0x1e8990: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e898c) {
            ctx->pc = 0x1E89A4u;
            goto label_1e89a4;
        }
    }
    ctx->pc = 0x1E8994u;
    // 0x1e8994: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8994u;
    {
        const bool branch_taken_0x1e8994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8994u;
        // 0x1e8998: 0x260e0054  addiu       $t6, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8994) {
            ctx->pc = 0x1E89B4u;
            goto label_1e89b4;
        }
    }
    ctx->pc = 0x1E899Cu;
    // 0x1e899c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E89A4u;
label_1e89a4:
    // 0x1e89a4: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E89A4u;
    {
        const bool branch_taken_0x1e89a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89A4u;
        // 0x1e89a8: 0x260e0054  addiu       $t6, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89a4) {
            ctx->pc = 0x1E8A68u;
            goto label_1e8a68;
        }
    }
    ctx->pc = 0x1E89ACu;
    // 0x1e89ac: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E89ACu;
    {
        const bool branch_taken_0x1e89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e89ac) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E89B4u;
label_1e89b4:
    // 0x1e89b4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e89b8: 0x24c4ffec  addiu       $a0, $a2, -0x14
    ctx->pc = 0x1e89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x1e89bc: 0x28450015  slti        $a1, $v0, 0x15
    ctx->pc = 0x1e89bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e89c0: 0x26030054  addiu       $v1, $s0, 0x54
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1e89c4: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x1e89c4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e89c8: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x1e89c8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e89d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e89d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e89d8: 0x1087003d  beq         $a0, $a3, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E89D8u;
    {
        const bool branch_taken_0x1e89d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1E89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89D8u;
        // 0x1e89dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89d8) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E89E0u;
    // 0x1e89e0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x1e89e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e89e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e89e8:
    // 0x1e89e8: 0x24c3ffeb  addiu       $v1, $a2, -0x15
    ctx->pc = 0x1e89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x1e89ec: 0x28c40015  slti        $a0, $a2, 0x15
    ctx->pc = 0x1e89ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e89f0: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x1e89f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1e89f4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e89f8: 0x24c3ffec  addiu       $v1, $a2, -0x14
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x1e89fc: 0x28450015  slti        $a1, $v0, 0x15
    ctx->pc = 0x1e89fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8a00: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1e8a00u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e8a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8a08: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1e8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e8a0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8a10: 0x5468fff5  bnel        $v1, $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E8A10u;
    {
        const bool branch_taken_0x1e8a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1e8a10) {
            ctx->pc = 0x1E8A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8A10u;
            // 0x1e8a14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E89E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e89e8;
        }
    }
    ctx->pc = 0x1E8A18u;
    // 0x1e8a18: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E8A18u;
    {
        const bool branch_taken_0x1e8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a18) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E8A20u;
label_1e8a20:
    // 0x1e8a20: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1e8a24: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8a28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8a30: 0x10870027  beq         $a0, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E8A30u;
    {
        const bool branch_taken_0x1e8a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1E8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A30u;
        // 0x1e8a34: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a30) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E8A38u;
    // 0x1e8a38: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1e8a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8a40:
    // 0x1e8a40: 0x24c3ffeb  addiu       $v1, $a2, -0x15
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x1e8a44: 0x28c40015  slti        $a0, $a2, 0x15
    ctx->pc = 0x1e8a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8a48: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x1e8a48u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1e8a4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8a50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e8a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8a58: 0x5467fff9  bnel        $v1, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8A58u;
    {
        const bool branch_taken_0x1e8a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e8a58) {
            ctx->pc = 0x1E8A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8A58u;
            // 0x1e8a5c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8a40;
        }
    }
    ctx->pc = 0x1E8A60u;
    // 0x1e8a60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E8A60u;
    {
        const bool branch_taken_0x1e8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a60) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E8A68u;
label_1e8a68:
    // 0x1e8a68: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1e8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e8a6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8a70: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1e8a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e8a74: 0x24c40014  addiu       $a0, $a2, 0x14
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1e8a78: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x1e8a78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1e8a7c: 0x26030054  addiu       $v1, $s0, 0x54
    ctx->pc = 0x1e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1e8a80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8a84: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x1e8a84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e8a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8a90: 0x1047000f  beq         $v0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1E8A90u;
    {
        const bool branch_taken_0x1e8a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1E8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A90u;
        // 0x1e8a94: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a90) {
            ctx->pc = 0x1E8AD0u;
            goto label_1e8ad0;
        }
    }
    ctx->pc = 0x1E8A98u;
    // 0x1e8a98: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8aa0:
    // 0x1e8aa0: 0x28c40015  slti        $a0, $a2, 0x15
    ctx->pc = 0x1e8aa0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8aa4: 0x24c3ffeb  addiu       $v1, $a2, -0x15
    ctx->pc = 0x1e8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x1e8aa8: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x1e8aa8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1e8aac: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e8ab0: 0x24c40014  addiu       $a0, $a2, 0x14
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1e8ab4: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x1e8ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e8ab8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1e8ab8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e8abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8ac0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e8ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8ac8: 0x5467fff5  bnel        $v1, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E8AC8u;
    {
        const bool branch_taken_0x1e8ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e8ac8) {
            ctx->pc = 0x1E8ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8AC8u;
            // 0x1e8acc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8aa0;
        }
    }
    ctx->pc = 0x1E8AD0u;
label_1e8ad0:
    // 0x1e8ad0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e8ad0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8ad4: 0x0  nop
    ctx->pc = 0x1e8ad4u;
    // NOP
    // 0x1e8ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8adc: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e8adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8ae0: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8ae4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8ae8: 0x24d90001  addiu       $t9, $a2, 0x1
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8aec: 0x24d8ffec  addiu       $t8, $a2, -0x14
    ctx->pc = 0x1e8aecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x1e8af0: 0x24cdffff  addiu       $t5, $a2, -0x1
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e8af4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1E8AF4u;
    {
        const bool branch_taken_0x1e8af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AF4u;
        // 0x1e8af8: 0x24cc0014  addiu       $t4, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8af4) {
            ctx->pc = 0x1E8C70u;
            goto label_1e8c70;
        }
    }
    ctx->pc = 0x1E8AFCu;
label_1e8afc:
    // 0x1e8afc: 0x260e0054  addiu       $t6, $s0, 0x54
    ctx->pc = 0x1e8afcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1e8b00: 0x8e0f00cc  lw          $t7, 0xCC($s0)
    ctx->pc = 0x1e8b00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1e8b04: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1e8b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b08: 0x260b00cc  addiu       $t3, $s0, 0xCC
    ctx->pc = 0x1e8b08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x1e8b0c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8b10:
    // 0x1e8b10: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8b14: 0x24c2ffec  addiu       $v0, $a2, -0x14
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x1e8b18: 0x28e30015  slti        $v1, $a3, 0x15
    ctx->pc = 0x1e8b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8b1c: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b20: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1e8b20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1e8b24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8b24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b28: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b30: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1e8b34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8b38: 0x11e2000d  beq         $t7, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8B38u;
    {
        const bool branch_taken_0x1e8b38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B38u;
        // 0x1e8b3c: 0x24d90001  addiu       $t9, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b38) {
            ctx->pc = 0x1E8B70u;
            goto label_1e8b70;
        }
    }
    ctx->pc = 0x1E8B40u;
    // 0x1e8b40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e8b44: 0x0  nop
    ctx->pc = 0x1e8b44u;
    // NOP
label_1e8b48:
    // 0x1e8b48: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e8b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e8b4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8B4Cu;
    {
        const bool branch_taken_0x1e8b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B4Cu;
        // 0x1e8b50: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b4c) {
            ctx->pc = 0x1E8B74u;
            goto label_1e8b74;
        }
    }
    ctx->pc = 0x1E8B54u;
    // 0x1e8b54: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8b58: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1e8b5c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1e8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1e8b60: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8b64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8b68: 0x54a2fff7  bnel        $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8B68u;
    {
        const bool branch_taken_0x1e8b68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8b68) {
            ctx->pc = 0x1E8B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8B68u;
            // 0x1e8b6c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8B70u;
label_1e8b70:
    // 0x1e8b70: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8b74:
    // 0x1e8b74: 0x55400034  bnel        $t2, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E8B74u;
    {
        const bool branch_taken_0x1e8b74 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b74) {
            ctx->pc = 0x1E8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8B74u;
            // 0x1e8b78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8C48u;
            goto label_1e8c48;
        }
    }
    ctx->pc = 0x1E8B7Cu;
    // 0x1e8b7c: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x1e8b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8b80: 0x24c7ffeb  addiu       $a3, $a2, -0x15
    ctx->pc = 0x1e8b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x1e8b84: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x1e8b84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1e8b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b8c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8b90: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1e8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1e8b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8b98: 0x11e3000d  beq         $t7, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8B98u;
    {
        const bool branch_taken_0x1e8b98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B98u;
        // 0x1e8b9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b98) {
            ctx->pc = 0x1E8BD0u;
            goto label_1e8bd0;
        }
    }
    ctx->pc = 0x1E8BA0u;
    // 0x1e8ba0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e8ba4: 0x0  nop
    ctx->pc = 0x1e8ba4u;
    // NOP
label_1e8ba8:
    // 0x1e8ba8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e8ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e8bac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8BACu;
    {
        const bool branch_taken_0x1e8bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BACu;
        // 0x1e8bb0: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bac) {
            ctx->pc = 0x1E8BD4u;
            goto label_1e8bd4;
        }
    }
    ctx->pc = 0x1E8BB4u;
    // 0x1e8bb4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8bb8: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1e8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1e8bbc: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1e8bc0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8bc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8bc8: 0x14a2fff7  bne         $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8BC8u;
    {
        const bool branch_taken_0x1e8bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BC8u;
        // 0x1e8bcc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bc8) {
            ctx->pc = 0x1E8BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8ba8;
        }
    }
    ctx->pc = 0x1E8BD0u;
label_1e8bd0:
    // 0x1e8bd0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1e8bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8bd4:
    // 0x1e8bd4: 0x5540001c  bnel        $t2, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E8BD4u;
    {
        const bool branch_taken_0x1e8bd4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bd4) {
            ctx->pc = 0x1E8BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8BD4u;
            // 0x1e8bd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8C48u;
            goto label_1e8c48;
        }
    }
    ctx->pc = 0x1E8BDCu;
    // 0x1e8bdc: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x1e8bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e8be0: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x1e8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1e8be4: 0x227182a  slt         $v1, $s1, $a3
    ctx->pc = 0x1e8be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e8be8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1e8be8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bec: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1e8becu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1e8bf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bf4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8bf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bfc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1e8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1e8c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8c04: 0x11e2000c  beq         $t7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8C04u;
    {
        const bool branch_taken_0x1e8c04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C04u;
        // 0x1e8c08: 0x24cdffff  addiu       $t5, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c04) {
            ctx->pc = 0x1E8C38u;
            goto label_1e8c38;
        }
    }
    ctx->pc = 0x1E8C0Cu;
    // 0x1e8c0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e8c10:
    // 0x1e8c10: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e8c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e8c14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8C14u;
    {
        const bool branch_taken_0x1e8c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C14u;
        // 0x1e8c18: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c14) {
            ctx->pc = 0x1E8C3Cu;
            goto label_1e8c3c;
        }
    }
    ctx->pc = 0x1E8C1Cu;
    // 0x1e8c1c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8c20: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1e8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1e8c24: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1e8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1e8c28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8c2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8c30: 0x14a2fff7  bne         $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8C30u;
    {
        const bool branch_taken_0x1e8c30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C30u;
        // 0x1e8c34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c30) {
            ctx->pc = 0x1E8C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8c10;
        }
    }
    ctx->pc = 0x1E8C38u;
label_1e8c38:
    // 0x1e8c38: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1e8c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8c3c:
    // 0x1e8c3c: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8C3Cu;
    {
        const bool branch_taken_0x1e8c3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c3c) {
            ctx->pc = 0x1E8C58u;
            goto label_1e8c58;
        }
    }
    ctx->pc = 0x1E8C44u;
    // 0x1e8c44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8c48:
    // 0x1e8c48: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x1e8c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8c4c: 0x24c2ffeb  addiu       $v0, $a2, -0x15
    ctx->pc = 0x1e8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x1e8c50: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E8C50u;
    {
        const bool branch_taken_0x1e8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C50u;
        // 0x1e8c54: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c50) {
            ctx->pc = 0x1E8B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8b10;
        }
    }
    ctx->pc = 0x1E8C58u;
label_1e8c58:
    // 0x1e8c58: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e8c58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c5c: 0x0  nop
    ctx->pc = 0x1e8c5cu;
    // NOP
    // 0x1e8c60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8c64: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8c68: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8c6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8c70:
    // 0x1e8c70: 0x0  nop
    ctx->pc = 0x1e8c70u;
    // NOP
    // 0x1e8c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8c78: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e8c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e8c7c: 0x2b220015  slti        $v0, $t9, 0x15
    ctx->pc = 0x1e8c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8c80: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8c84: 0x322c00b  movn        $t8, $t9, $v0
    ctx->pc = 0x1e8c84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 25));
    // 0x1e8c88: 0x1c52821  addu        $a1, $t6, $a1
    ctx->pc = 0x1e8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1e8c8c: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x1e8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1e8c90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c94: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1e8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1e8c98: 0x6d182a  slt         $v1, $v1, $t5
    ctx->pc = 0x1e8c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1e8c9c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e8c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8ca0: 0x1a3600b  movn        $t4, $t5, $v1
    ctx->pc = 0x1e8ca0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
    // 0x1e8ca4: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1e8ca8: 0xae0600d8  sw          $a2, 0xD8($s0)
    ctx->pc = 0x1e8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 6));
    // 0x1e8cac: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1e8cb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8cb4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1e8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1e8cb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8cbc: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1e8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_1e8cc0:
    // 0x1e8cc0: 0xc07a41e  jal         func_1E9078
    ctx->pc = 0x1E8CC0u;
    SET_GPR_U32(ctx, 31, 0x1E8CC8u);
    ctx->pc = 0x1E8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CC0u;
    // 0x1e8cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9078u, 0x1E8CC0u, 0x1E8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CC8u;
label_1e8cc8:
    // 0x1e8cc8: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1e8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8ccc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1e8cccu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1e8cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8cd4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x1e8cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1e8cd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e8cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8cdc: 0x0  nop
    ctx->pc = 0x1e8cdcu;
    // NOP
    // 0x1e8ce0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8CE0u;
    {
        const bool branch_taken_0x1e8ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8ce0) {
            ctx->pc = 0x1E8CF0u;
            goto label_1e8cf0;
        }
    }
    ctx->pc = 0x1E8CE8u;
    // 0x1e8ce8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8CE8u;
    {
        const bool branch_taken_0x1e8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CE8u;
        // 0x1e8cec: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ce8) {
            ctx->pc = 0x1E8D04u;
            goto label_1e8d04;
        }
    }
    ctx->pc = 0x1E8CF0u;
label_1e8cf0:
    // 0x1e8cf0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e8cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8cf8: 0x0  nop
    ctx->pc = 0x1e8cf8u;
    // NOP
    // 0x1e8cfc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e8cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e8d00: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1e8d00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1e8d04:
    // 0x1e8d04: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1e8d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d08: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1e8d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1e8d0c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1e8d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8d14: 0x0  nop
    ctx->pc = 0x1e8d14u;
    // NOP
    // 0x1e8d18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8d1c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1e8d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8d20: 0x0  nop
    ctx->pc = 0x1e8d20u;
    // NOP
    // 0x1e8d24: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1E8D24u;
    {
        const bool branch_taken_0x1e8d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8d24) {
            ctx->pc = 0x1E8D88u;
            goto label_1e8d88;
        }
    }
    ctx->pc = 0x1E8D2Cu;
    // 0x1e8d2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8d30: 0xc07a3de  jal         func_1E8F78
    ctx->pc = 0x1E8D30u;
    SET_GPR_U32(ctx, 31, 0x1E8D38u);
    ctx->pc = 0x1E8D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D30u;
    // 0x1e8d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F78u, 0x1E8D30u, 0x1E8D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D38u;
label_1e8d38:
    // 0x1e8d38: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e8d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d3c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e8d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e8d40: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1e8d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1e8d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e8d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8d48: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1E8D48u;
    SET_GPR_U32(ctx, 31, 0x1E8D50u);
    ctx->pc = 0x1E8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D48u;
    // 0x1e8d4c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1E8D48u, 0x1E8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D50u;
label_1e8d50:
    // 0x1e8d50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8d54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e8d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8d58: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1e8d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1e8d5c: 0xc05404a  jal         func_150128
    ctx->pc = 0x1E8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D64u);
    ctx->pc = 0x1E8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D5Cu;
    // 0x1e8d60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x1E8D5Cu, 0x1E8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D64u;
label_1e8d64:
    // 0x1e8d64: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1E8D64u;
    SET_GPR_U32(ctx, 31, 0x1E8D6Cu);
    ctx->pc = 0x1E8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D64u;
    // 0x1e8d68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1E8D64u, 0x1E8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D6Cu;
label_1e8d6c:
    // 0x1e8d6c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1e8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e8d70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e8d74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e8d78: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1e8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1e8d7c:
    // 0x1e8d7c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e8d80: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1e8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_1e8d84:
    // 0x1e8d84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1e8d88:
    // 0x1e8d88: 0xc07a3ae  jal         func_1E8EB8
    ctx->pc = 0x1E8D88u;
    SET_GPR_U32(ctx, 31, 0x1E8D90u);
    ctx->pc = 0x1E8D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D88u;
    // 0x1e8d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EB8u, 0x1E8D88u, 0x1E8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D90u;
label_1e8d90:
    // 0x1e8d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e8d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8d94:
    // 0x1e8d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D9Cu;
        // 0x1e8da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8DA4u;
    // 0x1e8da4: 0x0  nop
    ctx->pc = 0x1e8da4u;
    // NOP
    ctx->pc = 0x1e8da8u;
}
