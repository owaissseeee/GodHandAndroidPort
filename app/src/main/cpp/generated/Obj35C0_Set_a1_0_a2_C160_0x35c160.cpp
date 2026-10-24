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

// Function: Obj35C0_Set_a1_0_a2_C160
// Address: 0x35c160 - 0x35c180
void Obj35C0_Set_a1_0_a2_C160_0x35c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_Set_a1_0_a2_C160_0x35c160");
#endif

    ctx->pc = 0x35c160u;

    // 0x35c160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c164: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35c164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c174: 0x80d7070  j           func_35C1C0
    ctx->pc = 0x35C174u;
    ctx->pc = 0x35C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C174u;
    // 0x35c178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1C0u, 0x35C174u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C17Cu;
    // 0x35c17c: 0x0  nop
    ctx->pc = 0x35c17cu;
    // NOP
    ctx->pc = 0x35c180u;
}
