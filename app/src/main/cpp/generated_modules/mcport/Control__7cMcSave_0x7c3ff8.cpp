#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Control__7cMcSave
// Address: 0x7c3ff8 - 0x7c4140
void Control__7cMcSave_0x7c3ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Control__7cMcSave_0x7c3ff8");
#endif

    switch (ctx->pc) {
        case 0x7c4038u: goto label_7c4038;
        case 0x7c4048u: goto label_7c4048;
        case 0x7c4058u: goto label_7c4058;
        case 0x7c4068u: goto label_7c4068;
        case 0x7c4078u: goto label_7c4078;
        case 0x7c4088u: goto label_7c4088;
        case 0x7c4098u: goto label_7c4098;
        case 0x7c40a8u: goto label_7c40a8;
        case 0x7c40b8u: goto label_7c40b8;
        case 0x7c40c8u: goto label_7c40c8;
        case 0x7c40d8u: goto label_7c40d8;
        case 0x7c40e8u: goto label_7c40e8;
        case 0x7c40f8u: goto label_7c40f8;
        case 0x7c4108u: goto label_7c4108;
        case 0x7c4118u: goto label_7c4118;
        case 0x7c4128u: goto label_7c4128;
        case 0x7c4130u: goto label_7c4130;
        default: break;
    }

    ctx->pc = 0x7c3ff8u;

    // 0x7c3ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3ffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c4000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c4000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c4004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c4004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4008: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x7c4008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x7c400c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x7c400cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x7c4010: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x7C4010u;
    {
        const bool branch_taken_0x7c4010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4010u;
        // 0x7c4014: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4010) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4018u;
    // 0x7c4018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c4018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c401c: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x7c401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x7c4020: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c4020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c4024: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c4024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c4028: 0x800008  jr          $a0
    ctx->pc = 0x7C4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C4030u: goto label_7c4030;
            case 0x7C4040u: goto label_7c4040;
            case 0x7C4050u: goto label_7c4050;
            case 0x7C4060u: goto label_7c4060;
            case 0x7C4070u: goto label_7c4070;
            case 0x7C4080u: goto label_7c4080;
            case 0x7C4090u: goto label_7c4090;
            case 0x7C40A0u: goto label_7c40a0;
            case 0x7C40B0u: goto label_7c40b0;
            case 0x7C40C0u: goto label_7c40c0;
            case 0x7C40D0u: goto label_7c40d0;
            case 0x7C40E0u: goto label_7c40e0;
            case 0x7C40F0u: goto label_7c40f0;
            case 0x7C4100u: goto label_7c4100;
            case 0x7C4110u: goto label_7c4110;
            case 0x7C4120u: goto label_7c4120;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4028u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C4030u;
label_7c4030:
    // 0x7c4030: 0xc1f1050  jal         func_7C4140
    ctx->pc = 0x7C4030u;
    SET_GPR_U32(ctx, 31, 0x7C4038u);
    ctx->pc = 0x7C4034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4030u;
    // 0x7c4034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4140u, 0x7C4030u, 0x7C4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4038u;
label_7c4038:
    // 0x7c4038: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7C4038u;
    {
        const bool branch_taken_0x7c4038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4038) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4040u;
label_7c4040:
    // 0x7c4040: 0xc1f10da  jal         func_7C4368
    ctx->pc = 0x7C4040u;
    SET_GPR_U32(ctx, 31, 0x7C4048u);
    ctx->pc = 0x7C4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4040u;
    // 0x7c4044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4368u, 0x7C4040u, 0x7C4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4048u;
label_7c4048:
    // 0x7c4048: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x7C4048u;
    {
        const bool branch_taken_0x7c4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4048) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4050u;
label_7c4050:
    // 0x7c4050: 0xc1f11d4  jal         func_7C4750
    ctx->pc = 0x7C4050u;
    SET_GPR_U32(ctx, 31, 0x7C4058u);
    ctx->pc = 0x7C4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4050u;
    // 0x7c4054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4750u, 0x7C4050u, 0x7C4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4058u;
label_7c4058:
    // 0x7c4058: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x7C4058u;
    {
        const bool branch_taken_0x7c4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4058) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4060u;
label_7c4060:
    // 0x7c4060: 0xc1f12c6  jal         func_7C4B18
    ctx->pc = 0x7C4060u;
    SET_GPR_U32(ctx, 31, 0x7C4068u);
    ctx->pc = 0x7C4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4060u;
    // 0x7c4064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4B18u, 0x7C4060u, 0x7C4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4068u;
label_7c4068:
    // 0x7c4068: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x7C4068u;
    {
        const bool branch_taken_0x7c4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4068) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4070u;
label_7c4070:
    // 0x7c4070: 0xc1f1368  jal         func_7C4DA0
    ctx->pc = 0x7C4070u;
    SET_GPR_U32(ctx, 31, 0x7C4078u);
    ctx->pc = 0x7C4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4070u;
    // 0x7c4074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4DA0u, 0x7C4070u, 0x7C4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4078u;
label_7c4078:
    // 0x7c4078: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7C4078u;
    {
        const bool branch_taken_0x7c4078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4078) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4080u;
label_7c4080:
    // 0x7c4080: 0xc1f13fc  jal         func_7C4FF0
    ctx->pc = 0x7C4080u;
    SET_GPR_U32(ctx, 31, 0x7C4088u);
    ctx->pc = 0x7C4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4080u;
    // 0x7c4084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C4FF0u, 0x7C4080u, 0x7C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4088u;
label_7c4088:
    // 0x7c4088: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7C4088u;
    {
        const bool branch_taken_0x7c4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4088) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4090u;
label_7c4090:
    // 0x7c4090: 0xc1f1468  jal         func_7C51A0
    ctx->pc = 0x7C4090u;
    SET_GPR_U32(ctx, 31, 0x7C4098u);
    ctx->pc = 0x7C4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4090u;
    // 0x7c4094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C51A0u, 0x7C4090u, 0x7C4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4098u;
label_7c4098:
    // 0x7c4098: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7C4098u;
    {
        const bool branch_taken_0x7c4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4098) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40A0u;
label_7c40a0:
    // 0x7c40a0: 0xc1f156e  jal         func_7C55B8
    ctx->pc = 0x7C40A0u;
    SET_GPR_U32(ctx, 31, 0x7C40A8u);
    ctx->pc = 0x7C40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40A0u;
    // 0x7c40a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C55B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C55B8u, 0x7C40A0u, 0x7C40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40A8u;
label_7c40a8:
    // 0x7c40a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7C40A8u;
    {
        const bool branch_taken_0x7c40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40a8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40B0u;
label_7c40b0:
    // 0x7c40b0: 0xc1f160c  jal         func_7C5830
    ctx->pc = 0x7C40B0u;
    SET_GPR_U32(ctx, 31, 0x7C40B8u);
    ctx->pc = 0x7C40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40B0u;
    // 0x7c40b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C5830u, 0x7C40B0u, 0x7C40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40B8u;
label_7c40b8:
    // 0x7c40b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7C40B8u;
    {
        const bool branch_taken_0x7c40b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40b8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40C0u;
label_7c40c0:
    // 0x7c40c0: 0xc1f16a8  jal         func_7C5AA0
    ctx->pc = 0x7C40C0u;
    SET_GPR_U32(ctx, 31, 0x7C40C8u);
    ctx->pc = 0x7C40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40C0u;
    // 0x7c40c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C5AA0u, 0x7C40C0u, 0x7C40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40C8u;
label_7c40c8:
    // 0x7c40c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7C40C8u;
    {
        const bool branch_taken_0x7c40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40c8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40D0u;
label_7c40d0:
    // 0x7c40d0: 0xc1f16de  jal         func_7C5B78
    ctx->pc = 0x7C40D0u;
    SET_GPR_U32(ctx, 31, 0x7C40D8u);
    ctx->pc = 0x7C40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40D0u;
    // 0x7c40d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C5B78u, 0x7C40D0u, 0x7C40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40D8u;
label_7c40d8:
    // 0x7c40d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7C40D8u;
    {
        const bool branch_taken_0x7c40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40d8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40E0u;
label_7c40e0:
    // 0x7c40e0: 0xc1f179c  jal         func_7C5E70
    ctx->pc = 0x7C40E0u;
    SET_GPR_U32(ctx, 31, 0x7C40E8u);
    ctx->pc = 0x7C40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40E0u;
    // 0x7c40e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C5E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C5E70u, 0x7C40E0u, 0x7C40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40E8u;
label_7c40e8:
    // 0x7c40e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C40E8u;
    {
        const bool branch_taken_0x7c40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40e8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C40F0u;
label_7c40f0:
    // 0x7c40f0: 0xc1f1822  jal         func_7C6088
    ctx->pc = 0x7C40F0u;
    SET_GPR_U32(ctx, 31, 0x7C40F8u);
    ctx->pc = 0x7C40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C40F0u;
    // 0x7c40f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6088u, 0x7C40F0u, 0x7C40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C40F8u;
label_7c40f8:
    // 0x7c40f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C40F8u;
    {
        const bool branch_taken_0x7c40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c40f8) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4100u;
label_7c4100:
    // 0x7c4100: 0xc1f18a4  jal         func_7C6290
    ctx->pc = 0x7C4100u;
    SET_GPR_U32(ctx, 31, 0x7C4108u);
    ctx->pc = 0x7C4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4100u;
    // 0x7c4104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6290u, 0x7C4100u, 0x7C4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4108u;
label_7c4108:
    // 0x7c4108: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4108u;
    {
        const bool branch_taken_0x7c4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4108) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4110u;
label_7c4110:
    // 0x7c4110: 0xc1f1916  jal         func_7C6458
    ctx->pc = 0x7C4110u;
    SET_GPR_U32(ctx, 31, 0x7C4118u);
    ctx->pc = 0x7C4114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4110u;
    // 0x7c4114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6458u, 0x7C4110u, 0x7C4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4118u;
label_7c4118:
    // 0x7c4118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C4118u;
    {
        const bool branch_taken_0x7c4118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4118) {
            ctx->pc = 0x7C4128u;
            goto label_7c4128;
        }
    }
    ctx->pc = 0x7C4120u;
label_7c4120:
    // 0x7c4120: 0xc1f195e  jal         func_7C6578
    ctx->pc = 0x7C4120u;
    SET_GPR_U32(ctx, 31, 0x7C4128u);
    ctx->pc = 0x7C4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4120u;
    // 0x7c4124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6578u, 0x7C4120u, 0x7C4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4128u;
label_7c4128:
    // 0x7c4128: 0xc1f1cd2  jal         func_7C7348
    ctx->pc = 0x7C4128u;
    SET_GPR_U32(ctx, 31, 0x7C4130u);
    ctx->pc = 0x7C412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4128u;
    // 0x7c412c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7348u, 0x7C4128u, 0x7C4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4130u;
label_7c4130:
    // 0x7c4130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c4130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c4134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c4134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4138: 0x3e00008  jr          $ra
    ctx->pc = 0x7C4138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4138u;
        // 0x7c413c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C4140u;
}
} // namespace gh_mcport
