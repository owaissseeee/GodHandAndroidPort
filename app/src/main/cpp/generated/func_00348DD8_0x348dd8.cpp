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

// Function: func_00348DD8
// Address: 0x348dd8 - 0x348e18
void func_00348DD8_0x348dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348DD8_0x348dd8");
#endif

    ctx->pc = 0x348dd8u;

    // 0x348dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348ddc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x348ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348de8: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x348dec: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x348DECu;
    {
        const bool branch_taken_0x348dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x348DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DECu;
        // 0x348df0: 0x244202a4  addiu       $v0, $v0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348dec) {
            ctx->pc = 0x348E00u;
            goto label_348e00;
        }
    }
    ctx->pc = 0x348DF4u;
    // 0x348df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x348df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348df8: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x348DF8u;
    {
        const bool branch_taken_0x348df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x348DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DF8u;
        // 0x348dfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348df8) {
            ctx->pc = 0x348E10u;
            goto label_348e10;
        }
    }
    ctx->pc = 0x348E00u;
label_348e00:
    // 0x348e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348e04: 0x80d2386  j           func_348E18
    ctx->pc = 0x348E04u;
    ctx->pc = 0x348E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E04u;
    // 0x348e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348E18u, 0x348E04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348E0Cu;
    // 0x348e0c: 0x0  nop
    ctx->pc = 0x348e0cu;
    // NOP
label_348e10:
    // 0x348e10: 0x80d23da  j           func_348F68
    ctx->pc = 0x348E10u;
    ctx->pc = 0x348E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E10u;
    // 0x348e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348F68u, 0x348E10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348E18u;
}
