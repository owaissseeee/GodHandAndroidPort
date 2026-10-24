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

// Function: func_00340A20
// Address: 0x340a20 - 0x340a60
void func_00340A20_0x340a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340A20_0x340a20");
#endif

    switch (ctx->pc) {
        case 0x340a3cu: goto label_340a3c;
        case 0x340a48u: goto label_340a48;
        default: break;
    }

    ctx->pc = 0x340a20u;

    // 0x340a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340a34: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x340A34u;
    SET_GPR_U32(ctx, 31, 0x340A3Cu);
    ctx->pc = 0x340A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A34u;
    // 0x340a38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x340A34u, 0x340A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A3Cu;
label_340a3c:
    // 0x340a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a40: 0xc0d0298  jal         func_340A60
    ctx->pc = 0x340A40u;
    SET_GPR_U32(ctx, 31, 0x340A48u);
    ctx->pc = 0x340A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A40u;
    // 0x340a44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A60u, 0x340A40u, 0x340A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A48u;
label_340a48:
    // 0x340a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340a54: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x340A54u;
    ctx->pc = 0x340A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A54u;
    // 0x340a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x340A54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340A5Cu;
    // 0x340a5c: 0x0  nop
    ctx->pc = 0x340a5cu;
    // NOP
    ctx->pc = 0x340a60u;
}
