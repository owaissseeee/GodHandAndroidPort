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

// Function: Obj33F8_Init_D003EB858_F888
// Address: 0x33f888 - 0x33f8b8
void Obj33F8_Init_D003EB858_F888_0x33f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_Init_D003EB858_F888_0x33f888");
#endif

    ctx->pc = 0x33f888u;

    // 0x33f888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f88c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f898: 0x2484b858  addiu       $a0, $a0, -0x47A8
    ctx->pc = 0x33f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948952));
    // 0x33f89c: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x33f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x33f8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f8a4: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33F8A4u;
    ctx->pc = 0x33F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F8A4u;
    // 0x33f8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F8A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F8ACu;
    // 0x33f8ac: 0x0  nop
    ctx->pc = 0x33f8acu;
    // NOP
    // 0x33f8b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f8b4: 0x0  nop
    ctx->pc = 0x33f8b4u;
    // NOP
    ctx->pc = 0x33f8b8u;
}
