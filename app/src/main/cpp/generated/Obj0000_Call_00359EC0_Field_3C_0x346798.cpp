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

// Function: Obj0000_Call_00359EC0_Field_3C
// Address: 0x346798 - 0x3467c0
void Obj0000_Call_00359EC0_Field_3C_0x346798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_00359EC0_Field_3C_0x346798");
#endif

    ctx->pc = 0x346798u;

    // 0x346798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34679c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34679cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3467A0u;
    {
        const bool branch_taken_0x3467a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3467A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467A0u;
        // 0x3467a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467a0) {
            ctx->pc = 0x3467ACu;
            goto label_3467ac;
        }
    }
    ctx->pc = 0x3467A8u;
    // 0x3467a8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3467ac:
    // 0x3467ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3467acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3467b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3467b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467b4: 0x80d67b0  j           func_359EC0
    ctx->pc = 0x3467B4u;
    ctx->pc = 0x3467B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467B4u;
    // 0x3467b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EC0u, 0x3467B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3467BCu;
    // 0x3467bc: 0x0  nop
    ctx->pc = 0x3467bcu;
    // NOP
    ctx->pc = 0x3467c0u;
}
