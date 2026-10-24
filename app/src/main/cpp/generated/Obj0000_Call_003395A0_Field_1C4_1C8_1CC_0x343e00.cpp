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

// Function: Obj0000_Call_003395A0_Field_1C4_1C8_1CC
// Address: 0x343e00 - 0x343e28
void Obj0000_Call_003395A0_Field_1C4_1C8_1CC_0x343e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_003395A0_Field_1C4_1C8_1CC_0x343e00");
#endif

    ctx->pc = 0x343e00u;

    // 0x343e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x343e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343e0c: 0x8c4601cc  lw          $a2, 0x1CC($v0)
    ctx->pc = 0x343e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x343e10: 0x8c4401c4  lw          $a0, 0x1C4($v0)
    ctx->pc = 0x343e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x343e14: 0x8c4501c8  lw          $a1, 0x1C8($v0)
    ctx->pc = 0x343e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x343e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343e1c: 0x80ce568  j           func_3395A0
    ctx->pc = 0x343E1Cu;
    ctx->pc = 0x343E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E1Cu;
    // 0x343e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x343E1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343E24u;
    // 0x343e24: 0x0  nop
    ctx->pc = 0x343e24u;
    // NOP
    ctx->pc = 0x343e28u;
}
