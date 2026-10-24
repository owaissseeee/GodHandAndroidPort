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

// Function: exit
// Address: 0x31db70 - 0x31dba0
void exit_0x31db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exit_0x31db70");
#endif

    switch (ctx->pc) {
        case 0x31db84u: goto label_31db84;
        case 0x31db8cu: goto label_31db8c;
        default: break;
    }

    ctx->pc = 0x31db70u;

    // 0x31db70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31db74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31db78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31db7c: 0xc0c7692  jal         func_31DA48
    ctx->pc = 0x31DB7Cu;
    SET_GPR_U32(ctx, 31, 0x31DB84u);
    ctx->pc = 0x31DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB7Cu;
    // 0x31db80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DA48u, 0x31DB7Cu, 0x31DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB84u;
label_31db84:
    // 0x31db84: 0xc0e98ac  jal         func_3A62B0
    ctx->pc = 0x31DB84u;
    SET_GPR_U32(ctx, 31, 0x31DB8Cu);
    ctx->pc = 0x3A62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A62B0u, 0x31DB84u, 0x31DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB8Cu;
label_31db8c:
    // 0x31db8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31db94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31db94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31db98: 0x8040092  j           func_100248
    ctx->pc = 0x31DB98u;
    ctx->pc = 0x31DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB98u;
    // 0x31db9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100248u, 0x31DB98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31DBA0u;
}
