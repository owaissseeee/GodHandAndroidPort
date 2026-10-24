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

// Function: func_003567E0
// Address: 0x3567e0 - 0x356868
void func_003567E0_0x3567e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003567E0_0x3567e0");
#endif

    switch (ctx->pc) {
        case 0x3567f8u: goto label_3567f8;
        case 0x35680cu: goto label_35680c;
        case 0x356814u: goto label_356814;
        case 0x356840u: goto label_356840;
        default: break;
    }

    ctx->pc = 0x3567e0u;

    // 0x3567e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3567e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3567e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3567e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3567e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3567e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3567ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3567ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3567f0: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x3567F0u;
    SET_GPR_U32(ctx, 31, 0x3567F8u);
    ctx->pc = 0x3567F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3567F0u;
    // 0x3567f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x3567F0u, 0x3567F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567F8u;
label_3567f8:
    // 0x3567f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3567F8u;
    {
        const bool branch_taken_0x3567f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3567FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567F8u;
        // 0x3567fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567f8) {
            ctx->pc = 0x356858u;
            goto label_356858;
        }
    }
    ctx->pc = 0x356800u;
    // 0x356800: 0x8e301fc0  lw          $s0, 0x1FC0($s1)
    ctx->pc = 0x356800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x356804: 0xc0d58a8  jal         func_3562A0
    ctx->pc = 0x356804u;
    SET_GPR_U32(ctx, 31, 0x35680Cu);
    ctx->pc = 0x356808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356804u;
    // 0x356808: 0x26041198  addiu       $a0, $s0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3562A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562A0u, 0x356804u, 0x35680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35680Cu;
label_35680c:
    // 0x35680c: 0xc0d628e  jal         func_358A38
    ctx->pc = 0x35680Cu;
    SET_GPR_U32(ctx, 31, 0x356814u);
    ctx->pc = 0x358A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A38u, 0x35680Cu, 0x356814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356814u;
label_356814:
    // 0x356814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356818: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356818u;
    {
        const bool branch_taken_0x356818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356818u;
        // 0x35681c: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356818) {
            ctx->pc = 0x356838u;
            goto label_356838;
        }
    }
    ctx->pc = 0x356820u;
    // 0x356820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35682c: 0x80e6a66  j           func_39A998
    ctx->pc = 0x35682Cu;
    ctx->pc = 0x356830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35682Cu;
    // 0x356830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x35682Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356834u;
    // 0x356834: 0x0  nop
    ctx->pc = 0x356834u;
    // NOP
label_356838:
    // 0x356838: 0xc0e6a92  jal         func_39AA48
    ctx->pc = 0x356838u;
    SET_GPR_U32(ctx, 31, 0x356840u);
    ctx->pc = 0x39AA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA48u, 0x356838u, 0x356840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356840u;
label_356840:
    // 0x356840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x356840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35684c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35684cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356850: 0x80d5a1a  j           func_356868
    ctx->pc = 0x356850u;
    ctx->pc = 0x356854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356850u;
    // 0x356854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356868u, 0x356850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356858u;
label_356858:
    // 0x356858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35685c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356860: 0x3e00008  jr          $ra
    ctx->pc = 0x356860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356860u;
        // 0x356864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356868u;
}
