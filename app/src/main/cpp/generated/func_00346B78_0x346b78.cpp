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

// Function: func_00346B78
// Address: 0x346b78 - 0x346bb8
void func_00346B78_0x346b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346B78_0x346b78");
#endif

    ctx->pc = 0x346b78u;

    // 0x346b78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x346b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b80: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x346b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x346b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346b88: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x346b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x346b8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346B8Cu;
    {
        const bool branch_taken_0x346b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B8Cu;
        // 0x346b90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b8c) {
            ctx->pc = 0x346BA8u;
            goto label_346ba8;
        }
    }
    ctx->pc = 0x346B94u;
    // 0x346b94: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x346b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346b9c: 0x24848848  addiu       $a0, $a0, -0x77B8
    ctx->pc = 0x346b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936648));
    // 0x346ba0: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x346BA0u;
    ctx->pc = 0x346BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BA0u;
    // 0x346ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346BA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346BA8u;
label_346ba8:
    // 0x346ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346bac: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x346bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x346bb0: 0x80d67b0  j           func_359EC0
    ctx->pc = 0x346BB0u;
    ctx->pc = 0x346BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BB0u;
    // 0x346bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EC0u, 0x346BB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346BB8u;
}
