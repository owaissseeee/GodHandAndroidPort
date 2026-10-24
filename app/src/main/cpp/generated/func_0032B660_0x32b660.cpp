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

// Function: func_0032B660
// Address: 0x32b660 - 0x32b6a0
void func_0032B660_0x32b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B660_0x32b660");
#endif

    switch (ctx->pc) {
        case 0x32b67cu: goto label_32b67c;
        case 0x32b688u: goto label_32b688;
        default: break;
    }

    ctx->pc = 0x32b660u;

    // 0x32b660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b674: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B674u;
    SET_GPR_U32(ctx, 31, 0x32B67Cu);
    ctx->pc = 0x32B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B674u;
    // 0x32b678: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B674u, 0x32B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B67Cu;
label_32b67c:
    // 0x32b67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b680: 0xc0cada8  jal         func_32B6A0
    ctx->pc = 0x32B680u;
    SET_GPR_U32(ctx, 31, 0x32B688u);
    ctx->pc = 0x32B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B680u;
    // 0x32b684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6A0u, 0x32B680u, 0x32B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B688u;
label_32b688:
    // 0x32b688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b694: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B694u;
    ctx->pc = 0x32B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B694u;
    // 0x32b698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B694u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B69Cu;
    // 0x32b69c: 0x0  nop
    ctx->pc = 0x32b69cu;
    // NOP
    ctx->pc = 0x32b6a0u;
}
