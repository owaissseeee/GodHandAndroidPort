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

// Function: Obj3260_Tramp_00338638_D390
// Address: 0x326390 - 0x3263b0
void Obj3260_Tramp_00338638_D390_0x326390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00338638_D390_0x326390");
#endif

    ctx->pc = 0x326390u;

    // 0x326390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32639c: 0x80ce18e  j           func_338638
    ctx->pc = 0x32639Cu;
    ctx->pc = 0x3263A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32639Cu;
    // 0x3263a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338638u, 0x32639Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3263A4u;
    // 0x3263a4: 0x0  nop
    ctx->pc = 0x3263a4u;
    // NOP
    // 0x3263a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3263a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3263ac: 0x0  nop
    ctx->pc = 0x3263acu;
    // NOP
    ctx->pc = 0x3263b0u;
}
