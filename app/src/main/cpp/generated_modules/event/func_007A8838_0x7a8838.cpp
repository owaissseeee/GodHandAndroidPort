#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007A8838
// Address: 0x7a8838 - 0x7a88e0
void func_007A8838_0x7a8838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8838_0x7a8838");
#endif

    ctx->pc = 0x7a8838u;

    // 0x7a8838: 0x2483fdd9  addiu       $v1, $a0, -0x227
    ctx->pc = 0x7a8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966745));
    // 0x7a883c: 0x2c62004d  sltiu       $v0, $v1, 0x4D
    ctx->pc = 0x7a883cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x7a8840: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x7A8840u;
    {
        const bool branch_taken_0x7a8840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8840u;
        // 0x7a8844: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8840) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A8848u;
    // 0x7a8848: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7a884c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a8850: 0x24424c50  addiu       $v0, $v0, 0x4C50
    ctx->pc = 0x7a8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
    // 0x7a8854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a8858: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a8858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a885c: 0x800008  jr          $a0
    ctx->pc = 0x7A885Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A8864u: goto label_7a8864;
            case 0x7A886Cu: goto label_7a886c;
            case 0x7A8874u: goto label_7a8874;
            case 0x7A887Cu: goto label_7a887c;
            case 0x7A8884u: goto label_7a8884;
            case 0x7A888Cu: goto label_7a888c;
            case 0x7A8894u: goto label_7a8894;
            case 0x7A889Cu: goto label_7a889c;
            case 0x7A88A4u: goto label_7a88a4;
            case 0x7A88ACu: goto label_7a88ac;
            case 0x7A88B4u: goto label_7a88b4;
            case 0x7A88BCu: goto label_7a88bc;
            case 0x7A88C4u: goto label_7a88c4;
            case 0x7A88CCu: goto label_7a88cc;
            case 0x7A88D4u: goto label_7a88d4;
            case 0x7A88D8u: goto label_7a88d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A885Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A8864u;
label_7a8864:
    // 0x7a8864: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7A8864u;
    {
        const bool branch_taken_0x7a8864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8864u;
        // 0x7a8868: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8864) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A886Cu;
label_7a886c:
    // 0x7a886c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7A886Cu;
    {
        const bool branch_taken_0x7a886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A886Cu;
        // 0x7a8870: 0x24050201  addiu       $a1, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a886c) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A8874u;
label_7a8874:
    // 0x7a8874: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7A8874u;
    {
        const bool branch_taken_0x7a8874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8874u;
        // 0x7a8878: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8874) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A887Cu;
label_7a887c:
    // 0x7a887c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7A887Cu;
    {
        const bool branch_taken_0x7a887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A887Cu;
        // 0x7a8880: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a887c) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A8884u;
label_7a8884:
    // 0x7a8884: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7A8884u;
    {
        const bool branch_taken_0x7a8884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8884u;
        // 0x7a8888: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8884) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A888Cu;
label_7a888c:
    // 0x7a888c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x7A888Cu;
    {
        const bool branch_taken_0x7a888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A888Cu;
        // 0x7a8890: 0x2405021a  addiu       $a1, $zero, 0x21A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a888c) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A8894u;
label_7a8894:
    // 0x7a8894: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7A8894u;
    {
        const bool branch_taken_0x7a8894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8894u;
        // 0x7a8898: 0x2405021b  addiu       $a1, $zero, 0x21B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8894) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A889Cu;
label_7a889c:
    // 0x7a889c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7A889Cu;
    {
        const bool branch_taken_0x7a889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A889Cu;
        // 0x7a88a0: 0x2405021c  addiu       $a1, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a889c) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88A4u;
label_7a88a4:
    // 0x7a88a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7A88A4u;
    {
        const bool branch_taken_0x7a88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88A4u;
        // 0x7a88a8: 0x24050242  addiu       $a1, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88a4) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88ACu;
label_7a88ac:
    // 0x7a88ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7A88ACu;
    {
        const bool branch_taken_0x7a88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88ACu;
        // 0x7a88b0: 0x24050240  addiu       $a1, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88ac) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88B4u;
label_7a88b4:
    // 0x7a88b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7A88B4u;
    {
        const bool branch_taken_0x7a88b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88B4u;
        // 0x7a88b8: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88b4) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88BCu;
label_7a88bc:
    // 0x7a88bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7A88BCu;
    {
        const bool branch_taken_0x7a88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88BCu;
        // 0x7a88c0: 0x24050248  addiu       $a1, $zero, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88bc) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88C4u;
label_7a88c4:
    // 0x7a88c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7A88C4u;
    {
        const bool branch_taken_0x7a88c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88C4u;
        // 0x7a88c8: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88c4) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88CCu;
label_7a88cc:
    // 0x7a88cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A88CCu;
    {
        const bool branch_taken_0x7a88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88CCu;
        // 0x7a88d0: 0x24050249  addiu       $a1, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a88cc) {
            ctx->pc = 0x7A88D8u;
            goto label_7a88d8;
        }
    }
    ctx->pc = 0x7A88D4u;
label_7a88d4:
    // 0x7a88d4: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x7a88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_7a88d8:
    // 0x7a88d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A88D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88D8u;
        // 0x7a88dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A88D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A88E0u;
}
} // namespace gh_event
