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

// Function: func_0032DB70
// Address: 0x32db70 - 0x32dba0
void func_0032DB70_0x32db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DB70_0x32db70");
#endif

    switch (ctx->pc) {
        case 0x32db84u: goto label_32db84;
        case 0x32db8cu: goto label_32db8c;
        default: break;
    }

    ctx->pc = 0x32db70u;

    // 0x32db70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32db74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32db78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32db7c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DB7Cu;
    SET_GPR_U32(ctx, 31, 0x32DB84u);
    ctx->pc = 0x32DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB7Cu;
    // 0x32db80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DB7Cu, 0x32DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB84u;
label_32db84:
    // 0x32db84: 0xc0cb6e8  jal         func_32DBA0
    ctx->pc = 0x32DB84u;
    SET_GPR_U32(ctx, 31, 0x32DB8Cu);
    ctx->pc = 0x32DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB84u;
    // 0x32db88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DBA0u, 0x32DB84u, 0x32DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB8Cu;
label_32db8c:
    // 0x32db8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32db8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32db90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32db94: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DB94u;
    ctx->pc = 0x32DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB94u;
    // 0x32db98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DB94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DB9Cu;
    // 0x32db9c: 0x0  nop
    ctx->pc = 0x32db9cu;
    // NOP
    ctx->pc = 0x32dba0u;
}
