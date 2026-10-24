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

// Function: func_0032B118
// Address: 0x32b118 - 0x32b148
void func_0032B118_0x32b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B118_0x32b118");
#endif

    switch (ctx->pc) {
        case 0x32b12cu: goto label_32b12c;
        case 0x32b134u: goto label_32b134;
        default: break;
    }

    ctx->pc = 0x32b118u;

    // 0x32b118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32b124: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B124u;
    SET_GPR_U32(ctx, 31, 0x32B12Cu);
    ctx->pc = 0x32B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B124u;
    // 0x32b128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B124u, 0x32B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B12Cu;
label_32b12c:
    // 0x32b12c: 0xc0cac52  jal         func_32B148
    ctx->pc = 0x32B12Cu;
    SET_GPR_U32(ctx, 31, 0x32B134u);
    ctx->pc = 0x32B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B12Cu;
    // 0x32b130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B148u, 0x32B12Cu, 0x32B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B134u;
label_32b134:
    // 0x32b134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b138: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32b138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b13c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B13Cu;
    ctx->pc = 0x32B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B13Cu;
    // 0x32b140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B13Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B144u;
    // 0x32b144: 0x0  nop
    ctx->pc = 0x32b144u;
    // NOP
    ctx->pc = 0x32b148u;
}
