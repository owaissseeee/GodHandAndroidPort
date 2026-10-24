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

// Function: EntList_destroy
// Address: 0x149378 - 0x149400
void EntList_destroy_0x149378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntList_destroy_0x149378");
#endif

    switch (ctx->pc) {
        case 0x149394u: goto label_149394;
        case 0x1493a8u: goto label_1493a8;
        case 0x1493b0u: goto label_1493b0;
        case 0x1493c0u: goto label_1493c0;
        case 0x1493d4u: goto label_1493d4;
        case 0x1493e8u: goto label_1493e8;
        default: break;
    }

    ctx->pc = 0x149378u;

    // 0x149378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14937c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14938c: 0xc0aa618  jal         func_2A9860
    ctx->pc = 0x14938Cu;
    SET_GPR_U32(ctx, 31, 0x149394u);
    ctx->pc = 0x149390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14938Cu;
    // 0x149390: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9860u, 0x14938Cu, 0x149394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149394u;
label_149394:
    // 0x149394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149398: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x149398u;
    {
        const bool branch_taken_0x149398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149398) {
            ctx->pc = 0x14939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149398u;
            // 0x14939c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493CCu;
            goto label_1493cc;
        }
    }
    ctx->pc = 0x1493A0u;
    // 0x1493a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1493a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493a4: 0x0  nop
    ctx->pc = 0x1493a4u;
    // NOP
label_1493a8:
    // 0x1493a8: 0xc0aa618  jal         func_2A9860
    ctx->pc = 0x1493A8u;
    SET_GPR_U32(ctx, 31, 0x1493B0u);
    ctx->pc = 0x1493ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493A8u;
    // 0x1493ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9860u, 0x1493A8u, 0x1493B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493B0u;
label_1493b0:
    // 0x1493b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1493b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1493b8: 0xc0520f2  jal         func_1483C8
    ctx->pc = 0x1493B8u;
    SET_GPR_U32(ctx, 31, 0x1493C0u);
    ctx->pc = 0x1493BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493B8u;
    // 0x1493bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1483C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1483C8u, 0x1493B8u, 0x1493C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493C0u;
label_1493c0:
    // 0x1493c0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1493C0u;
    {
        const bool branch_taken_0x1493c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493C0u;
        // 0x1493c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493c0) {
            ctx->pc = 0x1493A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1493a8;
        }
    }
    ctx->pc = 0x1493C8u;
    // 0x1493c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1493c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1493cc:
    // 0x1493cc: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x1493CCu;
    SET_GPR_U32(ctx, 31, 0x1493D4u);
    ctx->pc = 0x1493D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493CCu;
    // 0x1493d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x1493CCu, 0x1493D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493D4u;
label_1493d4:
    // 0x1493d4: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1493D4u;
    {
        const bool branch_taken_0x1493d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493d4) {
            ctx->pc = 0x1493D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1493D4u;
            // 0x1493d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493ECu;
            goto label_1493ec;
        }
    }
    ctx->pc = 0x1493DCu;
    // 0x1493dc: 0x8e04ffe0  lw          $a0, -0x20($s0)
    ctx->pc = 0x1493dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
    // 0x1493e0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1493E0u;
    SET_GPR_U32(ctx, 31, 0x1493E8u);
    ctx->pc = 0x1493E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493E0u;
    // 0x1493e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1493E0u, 0x1493E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493E8u;
label_1493e8:
    // 0x1493e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1493e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1493ec:
    // 0x1493ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1493ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1493f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1493f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1493f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1493F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1493F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493F4u;
        // 0x1493f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1493F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1493FCu;
    // 0x1493fc: 0x0  nop
    ctx->pc = 0x1493fcu;
    // NOP
    ctx->pc = 0x149400u;
}
