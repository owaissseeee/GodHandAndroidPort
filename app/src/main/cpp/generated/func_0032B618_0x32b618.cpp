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

// Function: func_0032B618
// Address: 0x32b618 - 0x32b658
void func_0032B618_0x32b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B618_0x32b618");
#endif

    switch (ctx->pc) {
        case 0x32b634u: goto label_32b634;
        case 0x32b640u: goto label_32b640;
        default: break;
    }

    ctx->pc = 0x32b618u;

    // 0x32b618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b62c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B62Cu;
    SET_GPR_U32(ctx, 31, 0x32B634u);
    ctx->pc = 0x32B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B62Cu;
    // 0x32b630: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B62Cu, 0x32B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B634u;
label_32b634:
    // 0x32b634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b638: 0xc0cad96  jal         func_32B658
    ctx->pc = 0x32B638u;
    SET_GPR_U32(ctx, 31, 0x32B640u);
    ctx->pc = 0x32B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B638u;
    // 0x32b63c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B658u, 0x32B638u, 0x32B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B640u;
label_32b640:
    // 0x32b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b64c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B64Cu;
    ctx->pc = 0x32B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B64Cu;
    // 0x32b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B64Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B654u;
    // 0x32b654: 0x0  nop
    ctx->pc = 0x32b654u;
    // NOP
    ctx->pc = 0x32b658u;
}
