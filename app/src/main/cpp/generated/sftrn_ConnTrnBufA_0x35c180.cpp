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

// Function: sftrn_ConnTrnBufA
// Address: 0x35c180 - 0x35c1a0
void sftrn_ConnTrnBufA_0x35c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_ConnTrnBufA_0x35c180");
#endif

    ctx->pc = 0x35c180u;

    // 0x35c180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c184: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35c184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c18c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c194: 0x80d7070  j           func_35C1C0
    ctx->pc = 0x35C194u;
    ctx->pc = 0x35C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C194u;
    // 0x35c198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1C0u, 0x35C194u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C19Cu;
    // 0x35c19c: 0x0  nop
    ctx->pc = 0x35c19cu;
    // NOP
    ctx->pc = 0x35c1a0u;
}
