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

// Function: func_0034AFF0
// Address: 0x34aff0 - 0x34b030
void func_0034AFF0_0x34aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AFF0_0x34aff0");
#endif

    switch (ctx->pc) {
        case 0x34b010u: goto label_34b010;
        default: break;
    }

    ctx->pc = 0x34aff0u;

    // 0x34aff0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34aff4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34aff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34aff8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34aff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34affc: 0x24a5b030  addiu       $a1, $a1, -0x4FD0
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
    // 0x34b000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b004: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b008: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x34B008u;
    SET_GPR_U32(ctx, 31, 0x34B010u);
    ctx->pc = 0x34B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B008u;
    // 0x34b00c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x34B008u, 0x34B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B010u;
label_34b010:
    // 0x34b010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b01c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x34b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34b020: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34b020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b024: 0x80d6800  j           func_35A000
    ctx->pc = 0x34B024u;
    ctx->pc = 0x34B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B024u;
    // 0x34b028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x34B024u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B02Cu;
    // 0x34b02c: 0x0  nop
    ctx->pc = 0x34b02cu;
    // NOP
    ctx->pc = 0x34b030u;
}
