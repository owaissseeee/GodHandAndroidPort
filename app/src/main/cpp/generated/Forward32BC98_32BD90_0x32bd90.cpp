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

// Function: Forward32BC98_32BD90
// Address: 0x32bd90 - 0x32bdc0
void Forward32BC98_32BD90_0x32bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward32BC98_32BD90_0x32bd90");
#endif

    ctx->pc = 0x32bd90u;

    // 0x32bd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32bd94: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x32bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x32bd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bd9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32bd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bda0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32bda0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x32bda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bda8: 0x80caf26  j           func_32BC98
    ctx->pc = 0x32BDA8u;
    ctx->pc = 0x32BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDA8u;
    // 0x32bdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC98u, 0x32BDA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BDB0u;
    // 0x32bdb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bdb4: 0x0  nop
    ctx->pc = 0x32bdb4u;
    // NOP
    // 0x32bdb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bdbc: 0x0  nop
    ctx->pc = 0x32bdbcu;
    // NOP
    ctx->pc = 0x32bdc0u;
}
