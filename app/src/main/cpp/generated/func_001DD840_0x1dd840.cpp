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

// Function: func_001DD840
// Address: 0x1dd840 - 0x1dd910
void func_001DD840_0x1dd840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD840_0x1dd840");
#endif

    switch (ctx->pc) {
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8ecu: goto label_1dd8ec;
        case 0x1dd8fcu: goto label_1dd8fc;
        default: break;
    }

    ctx->pc = 0x1dd840u;

    // 0x1dd840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd844: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1dd844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dd848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd854: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD854u;
    {
        const bool branch_taken_0x1dd854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD854u;
        // 0x1dd858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd854) {
            ctx->pc = 0x1DD894u;
            goto label_1dd894;
        }
    }
    ctx->pc = 0x1DD85Cu;
    // 0x1dd85c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dd85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd860: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD860u;
    {
        const bool branch_taken_0x1dd860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd860) {
            ctx->pc = 0x1DD864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD860u;
            // 0x1dd864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD878u;
            goto label_1dd878;
        }
    }
    ctx->pc = 0x1DD868u;
    // 0x1dd868: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD868u;
    {
        const bool branch_taken_0x1dd868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD868u;
        // 0x1dd86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd868) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD870u;
    // 0x1dd870: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DD870u;
    {
        const bool branch_taken_0x1dd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD870u;
        // 0x1dd874: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd870) {
            ctx->pc = 0x1DD900u;
            goto label_1dd900;
        }
    }
    ctx->pc = 0x1DD878u;
label_1dd878:
    // 0x1dd878: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD878u;
    {
        const bool branch_taken_0x1dd878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD878u;
        // 0x1dd87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd878) {
            ctx->pc = 0x1DD8D0u;
            goto label_1dd8d0;
        }
    }
    ctx->pc = 0x1DD880u;
    // 0x1dd880: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD880u;
    {
        const bool branch_taken_0x1dd880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD880u;
        // 0x1dd884: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd880) {
            ctx->pc = 0x1DD900u;
            goto label_1dd900;
        }
    }
    ctx->pc = 0x1DD888u;
label_1dd888:
    // 0x1dd888: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dd888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dd88c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD88Cu;
    {
        const bool branch_taken_0x1dd88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD88Cu;
        // 0x1dd890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd88c) {
            ctx->pc = 0x1DD8A0u;
            goto label_1dd8a0;
        }
    }
    ctx->pc = 0x1DD894u;
label_1dd894:
    // 0x1dd894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd898: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dd89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8a0:
    // 0x1dd8a0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8A0u;
    SET_GPR_U32(ctx, 31, 0x1DD8A8u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8A0u, 0x1DD8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8A8u;
label_1dd8a8:
    // 0x1dd8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1dd8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dd8b0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8B0u;
    SET_GPR_U32(ctx, 31, 0x1DD8B8u);
    ctx->pc = 0x1DD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8B0u;
    // 0x1dd8b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8B0u, 0x1DD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8B8u;
label_1dd8b8:
    // 0x1dd8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1dd8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd8c0: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8C0u;
    SET_GPR_U32(ctx, 31, 0x1DD8C8u);
    ctx->pc = 0x1DD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8C0u;
    // 0x1dd8c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8C0u, 0x1DD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8C8u;
label_1dd8c8:
    // 0x1dd8c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DD8C8u;
    {
        const bool branch_taken_0x1dd8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8C8u;
        // 0x1dd8cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8c8) {
            ctx->pc = 0x1DD900u;
            goto label_1dd900;
        }
    }
    ctx->pc = 0x1DD8D0u;
label_1dd8d0:
    // 0x1dd8d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dd8d4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8D4u;
    SET_GPR_U32(ctx, 31, 0x1DD8DCu);
    ctx->pc = 0x1DD8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8D4u;
    // 0x1dd8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8D4u, 0x1DD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8DCu;
label_1dd8dc:
    // 0x1dd8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1dd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dd8e4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8E4u;
    SET_GPR_U32(ctx, 31, 0x1DD8ECu);
    ctx->pc = 0x1DD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8E4u;
    // 0x1dd8e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8E4u, 0x1DD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8ECu;
label_1dd8ec:
    // 0x1dd8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1dd8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd8f4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD8F4u;
    SET_GPR_U32(ctx, 31, 0x1DD8FCu);
    ctx->pc = 0x1DD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8F4u;
    // 0x1dd8f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD8F4u, 0x1DD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8FCu;
label_1dd8fc:
    // 0x1dd8fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd900:
    // 0x1dd900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd904: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD904u;
        // 0x1dd908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD90Cu;
    // 0x1dd90c: 0x0  nop
    ctx->pc = 0x1dd90cu;
    // NOP
    ctx->pc = 0x1dd910u;
}
