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

// Function: func_0032A8C0
// Address: 0x32a8c0 - 0x32a900
void func_0032A8C0_0x32a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A8C0_0x32a8c0");
#endif

    switch (ctx->pc) {
        case 0x32a8dcu: goto label_32a8dc;
        case 0x32a8e8u: goto label_32a8e8;
        default: break;
    }

    ctx->pc = 0x32a8c0u;

    // 0x32a8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a8d4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A8D4u;
    SET_GPR_U32(ctx, 31, 0x32A8DCu);
    ctx->pc = 0x32A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8D4u;
    // 0x32a8d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A8D4u, 0x32A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8DCu;
label_32a8dc:
    // 0x32a8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8e0: 0xc0caa40  jal         func_32A900
    ctx->pc = 0x32A8E0u;
    SET_GPR_U32(ctx, 31, 0x32A8E8u);
    ctx->pc = 0x32A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8E0u;
    // 0x32a8e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A900u, 0x32A8E0u, 0x32A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8E8u;
label_32a8e8:
    // 0x32a8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a8f4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32A8F4u;
    ctx->pc = 0x32A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8F4u;
    // 0x32a8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A8F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A8FCu;
    // 0x32a8fc: 0x0  nop
    ctx->pc = 0x32a8fcu;
    // NOP
    ctx->pc = 0x32a900u;
}
