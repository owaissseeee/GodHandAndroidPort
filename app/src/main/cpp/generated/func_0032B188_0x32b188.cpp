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

// Function: func_0032B188
// Address: 0x32b188 - 0x32b1c8
void func_0032B188_0x32b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B188_0x32b188");
#endif

    switch (ctx->pc) {
        case 0x32b1a4u: goto label_32b1a4;
        case 0x32b1b0u: goto label_32b1b0;
        default: break;
    }

    ctx->pc = 0x32b188u;

    // 0x32b188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b19c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B19Cu;
    SET_GPR_U32(ctx, 31, 0x32B1A4u);
    ctx->pc = 0x32B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B19Cu;
    // 0x32b1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B19Cu, 0x32B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1A4u;
label_32b1a4:
    // 0x32b1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1a8: 0xc0cac72  jal         func_32B1C8
    ctx->pc = 0x32B1A8u;
    SET_GPR_U32(ctx, 31, 0x32B1B0u);
    ctx->pc = 0x32B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1A8u;
    // 0x32b1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B1C8u, 0x32B1A8u, 0x32B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1B0u;
label_32b1b0:
    // 0x32b1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b1b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b1bc: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B1BCu;
    ctx->pc = 0x32B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1BCu;
    // 0x32b1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B1BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B1C4u;
    // 0x32b1c4: 0x0  nop
    ctx->pc = 0x32b1c4u;
    // NOP
    ctx->pc = 0x32b1c8u;
}
