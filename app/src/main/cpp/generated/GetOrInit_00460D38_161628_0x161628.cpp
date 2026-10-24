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

// Function: GetOrInit_00460D38_161628
// Address: 0x161628 - 0x161688
void GetOrInit_00460D38_161628_0x161628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_00460D38_161628_0x161628");
#endif

    switch (ctx->pc) {
        case 0x161654u: goto label_161654;
        default: break;
    }

    ctx->pc = 0x161628u;

    // 0x161628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16162c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x16162cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x161630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161634: 0x8c620d38  lw          $v0, 0xD38($v1)
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D38u));
    // 0x161638: 0x24700d38  addiu       $s0, $v1, 0xD38
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3384));
    // 0x16163c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16163Cu;
    {
        const bool branch_taken_0x16163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16163Cu;
        // 0x161640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16163c) {
            ctx->pc = 0x161654u;
            goto label_161654;
        }
    }
    ctx->pc = 0x161644u;
    // 0x161644: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x161648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16164c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x16164Cu;
    SET_GPR_U32(ctx, 31, 0x161654u);
    ctx->pc = 0x161650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16164Cu;
    // 0x161650: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x16164Cu, 0x161654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161654u;
label_161654:
    // 0x161654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16165c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16165cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161660: 0x3e00008  jr          $ra
    ctx->pc = 0x161660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161660u;
        // 0x161664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161668u;
    // 0x161668: 0xa087005c  sb          $a3, 0x5C($a0)
    ctx->pc = 0x161668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 7));
    // 0x16166c: 0x0  nop
    ctx->pc = 0x16166cu;
    // NOP
    // 0x161670: 0x0  nop
    ctx->pc = 0x161670u;
    // NOP
    // 0x161674: 0x0  nop
    ctx->pc = 0x161674u;
    // NOP
    // 0x161678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16167c: 0x0  nop
    ctx->pc = 0x16167cu;
    // NOP
    // 0x161680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161684: 0x0  nop
    ctx->pc = 0x161684u;
    // NOP
    ctx->pc = 0x161688u;
}
