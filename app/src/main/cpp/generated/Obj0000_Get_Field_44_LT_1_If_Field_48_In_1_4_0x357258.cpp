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

// Function: Obj0000_Get_Field_44_LT_1_If_Field_48_In_1_4
// Address: 0x357258 - 0x357280
void Obj0000_Get_Field_44_LT_1_If_Field_48_In_1_4_0x357258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Field_44_LT_1_If_Field_48_In_1_4_0x357258");
#endif

    ctx->pc = 0x357258u;

    // 0x357258: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x357258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x35725c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x357260: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x357260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x357264: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357264u;
    {
        const bool branch_taken_0x357264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357264u;
        // 0x357268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357264) {
            ctx->pc = 0x357274u;
            goto label_357274;
        }
    }
    ctx->pc = 0x35726Cu;
    // 0x35726c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x35726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x357270: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x357270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_357274:
    // 0x357274: 0x3e00008  jr          $ra
    ctx->pc = 0x357274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35727Cu;
    // 0x35727c: 0x0  nop
    ctx->pc = 0x35727cu;
    // NOP
    ctx->pc = 0x357280u;
}
