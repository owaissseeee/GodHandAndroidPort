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

// Function: func_0033B938
// Address: 0x33b938 - 0x33b978
void func_0033B938_0x33b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B938_0x33b938");
#endif

    switch (ctx->pc) {
        case 0x33b954u: goto label_33b954;
        case 0x33b960u: goto label_33b960;
        default: break;
    }

    ctx->pc = 0x33b938u;

    // 0x33b938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b944: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33b948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33b94c: 0xc0ced96  jal         func_33B658
    ctx->pc = 0x33B94Cu;
    SET_GPR_U32(ctx, 31, 0x33B954u);
    ctx->pc = 0x33B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B94Cu;
    // 0x33b950: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x33B94Cu, 0x33B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B954u;
label_33b954:
    // 0x33b954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b958: 0xc0cee5e  jal         func_33B978
    ctx->pc = 0x33B958u;
    SET_GPR_U32(ctx, 31, 0x33B960u);
    ctx->pc = 0x33B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B958u;
    // 0x33b95c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B978u, 0x33B958u, 0x33B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B960u;
label_33b960:
    // 0x33b960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b96c: 0x80ced9c  j           func_33B670
    ctx->pc = 0x33B96Cu;
    ctx->pc = 0x33B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B96Cu;
    // 0x33b970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33B96Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B974u;
    // 0x33b974: 0x0  nop
    ctx->pc = 0x33b974u;
    // NOP
    ctx->pc = 0x33b978u;
}
