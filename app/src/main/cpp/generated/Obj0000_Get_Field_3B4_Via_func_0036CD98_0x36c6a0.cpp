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

// Function: Obj0000_Get_Field_3B4_Via_func_0036CD98
// Address: 0x36c6a0 - 0x36c6c8
void Obj0000_Get_Field_3B4_Via_func_0036CD98_0x36c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Field_3B4_Via_func_0036CD98_0x36c6a0");
#endif

    ctx->pc = 0x36c6a0u;

    // 0x36c6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c6a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6a8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36C6A8u;
    {
        const bool branch_taken_0x36c6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C6A8u;
        // 0x36c6ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c6a8) {
            ctx->pc = 0x36C6B4u;
            goto label_36c6b4;
        }
    }
    ctx->pc = 0x36C6B0u;
    // 0x36c6b0: 0x8c8203b4  lw          $v0, 0x3B4($a0)
    ctx->pc = 0x36c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
label_36c6b4:
    // 0x36c6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36c6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6bc: 0x80db366  j           func_36CD98
    ctx->pc = 0x36C6BCu;
    ctx->pc = 0x36C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6BCu;
    // 0x36c6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD98u, 0x36C6BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C6C4u;
    // 0x36c6c4: 0x0  nop
    ctx->pc = 0x36c6c4u;
    // NOP
    ctx->pc = 0x36c6c8u;
}
