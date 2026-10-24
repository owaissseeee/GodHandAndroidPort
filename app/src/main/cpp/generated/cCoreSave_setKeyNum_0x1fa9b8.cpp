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

// Function: cCoreSave_setKeyNum
// Address: 0x1fa9b8 - 0x1faa00
void cCoreSave_setKeyNum_0x1fa9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setKeyNum_0x1fa9b8");
#endif

    ctx->pc = 0x1fa9b8u;

    // 0x1fa9b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa9bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FA9BCu;
    {
        const bool branch_taken_0x1fa9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9bc) {
            ctx->pc = 0x1FA9F4u;
            goto label_1fa9f4;
        }
    }
    ctx->pc = 0x1FA9C4u;
    // 0x1fa9c4: 0xac45006c  sw          $a1, 0x6C($v0)
    ctx->pc = 0x1fa9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 5));
    // 0x1fa9c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa9cc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1fa9d0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fa9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fa9d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA9D4u;
    {
        const bool branch_taken_0x1fa9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9d4) {
            ctx->pc = 0x1FA9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA9D4u;
            // 0x1fa9d8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA9E8u;
            goto label_1fa9e8;
        }
    }
    ctx->pc = 0x1FA9DCu;
    // 0x1fa9dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fa9e0: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1fa9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x1fa9e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa9e8:
    // 0x1fa9e8: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1fa9ec: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA9ECu;
    {
        const bool branch_taken_0x1fa9ec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa9ec) {
            ctx->pc = 0x1FA9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA9ECu;
            // 0x1fa9f0: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA9F4u;
            goto label_1fa9f4;
        }
    }
    ctx->pc = 0x1FA9F4u;
label_1fa9f4:
    // 0x1fa9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA9FCu;
    // 0x1fa9fc: 0x0  nop
    ctx->pc = 0x1fa9fcu;
    // NOP
    ctx->pc = 0x1faa00u;
}
