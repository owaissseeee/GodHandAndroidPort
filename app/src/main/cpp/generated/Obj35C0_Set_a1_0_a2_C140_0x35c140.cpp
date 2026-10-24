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

// Function: Obj35C0_Set_a1_0_a2_C140
// Address: 0x35c140 - 0x35c160
void Obj35C0_Set_a1_0_a2_C140_0x35c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_Set_a1_0_a2_C140_0x35c140");
#endif

    ctx->pc = 0x35c140u;

    // 0x35c140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c144: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35c144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c14c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c154: 0x80d7070  j           func_35C1C0
    ctx->pc = 0x35C154u;
    ctx->pc = 0x35C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C154u;
    // 0x35c158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1C0u, 0x35C154u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C15Cu;
    // 0x35c15c: 0x0  nop
    ctx->pc = 0x35c15cu;
    // NOP
    ctx->pc = 0x35c160u;
}
