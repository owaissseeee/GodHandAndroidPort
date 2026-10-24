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

// Function: UpdateObj0000Fields_34F6C0
// Address: 0x34f6c0 - 0x34f718
void UpdateObj0000Fields_34F6C0_0x34f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateObj0000Fields_34F6C0_0x34f6c0");
#endif

    switch (ctx->pc) {
        case 0x34f6dcu: goto label_34f6dc;
        case 0x34f6e4u: goto label_34f6e4;
        case 0x34f6ecu: goto label_34f6ec;
        case 0x34f6f4u: goto label_34f6f4;
        case 0x34f6fcu: goto label_34f6fc;
        case 0x34f704u: goto label_34f704;
        default: break;
    }

    ctx->pc = 0x34f6c0u;

    // 0x34f6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f6c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34f6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f6cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34f6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f6d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34f6d4: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x34F6D4u;
    SET_GPR_U32(ctx, 31, 0x34F6DCu);
    ctx->pc = 0x34F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6D4u;
    // 0x34f6d8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x34F6D4u, 0x34F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6DCu;
label_34f6dc:
    // 0x34f6dc: 0xc0d3dc6  jal         func_34F718
    ctx->pc = 0x34F6DCu;
    SET_GPR_U32(ctx, 31, 0x34F6E4u);
    ctx->pc = 0x34F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6DCu;
    // 0x34f6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F718u, 0x34F6DCu, 0x34F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6E4u;
label_34f6e4:
    // 0x34f6e4: 0xc0d3eb6  jal         func_34FAD8
    ctx->pc = 0x34F6E4u;
    SET_GPR_U32(ctx, 31, 0x34F6ECu);
    ctx->pc = 0x34F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6E4u;
    // 0x34f6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FAD8u, 0x34F6E4u, 0x34F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6ECu;
label_34f6ec:
    // 0x34f6ec: 0xc0d3e4c  jal         func_34F930
    ctx->pc = 0x34F6ECu;
    SET_GPR_U32(ctx, 31, 0x34F6F4u);
    ctx->pc = 0x34F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6ECu;
    // 0x34f6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F930u, 0x34F6ECu, 0x34F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6F4u;
label_34f6f4:
    // 0x34f6f4: 0xc0d3edc  jal         func_34FB70
    ctx->pc = 0x34F6F4u;
    SET_GPR_U32(ctx, 31, 0x34F6FCu);
    ctx->pc = 0x34F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6F4u;
    // 0x34f6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FB70u, 0x34F6F4u, 0x34F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6FCu;
label_34f6fc:
    // 0x34f6fc: 0xc0d3f08  jal         func_34FC20
    ctx->pc = 0x34F6FCu;
    SET_GPR_U32(ctx, 31, 0x34F704u);
    ctx->pc = 0x34F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6FCu;
    // 0x34f700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FC20u, 0x34F6FCu, 0x34F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F704u;
label_34f704:
    // 0x34f704: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34f704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f708: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f70c: 0x3e00008  jr          $ra
    ctx->pc = 0x34F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F70Cu;
        // 0x34f710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F714u;
    // 0x34f714: 0x0  nop
    ctx->pc = 0x34f714u;
    // NOP
    ctx->pc = 0x34f718u;
}
