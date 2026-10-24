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

// Function: mwlSfdSleepDecSvr
// Address: 0x3497a0 - 0x3497f8
void mwlSfdSleepDecSvr_0x3497a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwlSfdSleepDecSvr_0x3497a0");
#endif

    switch (ctx->pc) {
        case 0x3497b4u: goto label_3497b4;
        case 0x3497c0u: goto label_3497c0;
        case 0x3497c8u: goto label_3497c8;
        case 0x3497d4u: goto label_3497d4;
        case 0x3497dcu: goto label_3497dc;
        default: break;
    }

    ctx->pc = 0x3497a0u;

    // 0x3497a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3497a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3497a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3497a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3497a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3497a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3497ac: 0xc0d19b0  jal         func_3466C0
    ctx->pc = 0x3497ACu;
    SET_GPR_U32(ctx, 31, 0x3497B4u);
    ctx->pc = 0x3497B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497ACu;
    // 0x3497b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466C0u, 0x3497ACu, 0x3497B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497B4u;
label_3497b4:
    // 0x3497b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3497b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497b8: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x3497B8u;
    SET_GPR_U32(ctx, 31, 0x3497C0u);
    ctx->pc = 0x3497BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497B8u;
    // 0x3497bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x3497B8u, 0x3497C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497C0u;
label_3497c0:
    // 0x3497c0: 0xc0d231e  jal         func_348C78
    ctx->pc = 0x3497C0u;
    SET_GPR_U32(ctx, 31, 0x3497C8u);
    ctx->pc = 0x348C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C78u, 0x3497C0u, 0x3497C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497C8u;
label_3497c8:
    // 0x3497c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3497c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497cc: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x3497CCu;
    SET_GPR_U32(ctx, 31, 0x3497D4u);
    ctx->pc = 0x3497D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497CCu;
    // 0x3497d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x3497CCu, 0x3497D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497D4u;
label_3497d4:
    // 0x3497d4: 0xc0d19b6  jal         func_3466D8
    ctx->pc = 0x3497D4u;
    SET_GPR_U32(ctx, 31, 0x3497DCu);
    ctx->pc = 0x3466D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466D8u, 0x3497D4u, 0x3497DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497DCu;
label_3497dc:
    // 0x3497dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3497dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3497e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3497e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3497e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3497e8: 0x80d232e  j           func_348CB8
    ctx->pc = 0x3497E8u;
    ctx->pc = 0x3497ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497E8u;
    // 0x3497ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348CB8u, 0x3497E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3497F0u;
    // 0x3497f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3497f4: 0x0  nop
    ctx->pc = 0x3497f4u;
    // NOP
    ctx->pc = 0x3497f8u;
}
