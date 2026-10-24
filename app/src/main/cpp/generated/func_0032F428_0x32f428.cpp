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

// Function: func_0032F428
// Address: 0x32f428 - 0x32f468
void func_0032F428_0x32f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F428_0x32f428");
#endif

    switch (ctx->pc) {
        case 0x32f43cu: goto label_32f43c;
        case 0x32f454u: goto label_32f454;
        default: break;
    }

    ctx->pc = 0x32f428u;

    // 0x32f428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32f434: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32F434u;
    SET_GPR_U32(ctx, 31, 0x32F43Cu);
    ctx->pc = 0x32F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F434u;
    // 0x32f438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32F434u, 0x32F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F43Cu;
label_32f43c:
    // 0x32f43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f444: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F444u;
    {
        const bool branch_taken_0x32f444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F444u;
        // 0x32f448: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f444) {
            ctx->pc = 0x32F454u;
            goto label_32f454;
        }
    }
    ctx->pc = 0x32F44Cu;
    // 0x32f44c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32F44Cu;
    SET_GPR_U32(ctx, 31, 0x32F454u);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32F44Cu, 0x32F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F454u;
label_32f454:
    // 0x32f454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f45c: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32F45Cu;
    ctx->pc = 0x32F460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F45Cu;
    // 0x32f460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32F45Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32F464u;
    // 0x32f464: 0x0  nop
    ctx->pc = 0x32f464u;
    // NOP
    ctx->pc = 0x32f468u;
}
