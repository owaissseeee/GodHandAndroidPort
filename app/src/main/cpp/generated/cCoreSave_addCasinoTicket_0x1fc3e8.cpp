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

// Function: cCoreSave_addCasinoTicket
// Address: 0x1fc3e8 - 0x1fc438
void cCoreSave_addCasinoTicket_0x1fc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addCasinoTicket_0x1fc3e8");
#endif

    ctx->pc = 0x1fc3e8u;

    // 0x1fc3e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc3ec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC3ECu;
    {
        const bool branch_taken_0x1fc3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3ec) {
            ctx->pc = 0x1FC42Cu;
            goto label_1fc42c;
        }
    }
    ctx->pc = 0x1FC3F4u;
    // 0x1fc3f4: 0x8c620b94  lw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2964)));
    // 0x1fc3f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fc3fc: 0xac620b94  sw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2964), GPR_U32(ctx, 2));
    // 0x1fc400: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc404: 0x8c620b94  lw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2964)));
    // 0x1fc408: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fc408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc40c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC40Cu;
    {
        const bool branch_taken_0x1fc40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc40c) {
            ctx->pc = 0x1FC410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC40Cu;
            // 0x1fc410: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC420u;
            goto label_1fc420;
        }
    }
    ctx->pc = 0x1FC414u;
    // 0x1fc414: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fc414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fc418: 0xac620b94  sw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2964), GPR_U32(ctx, 2));
    // 0x1fc41c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc420:
    // 0x1fc420: 0x8c820b94  lw          $v0, 0xB94($a0)
    ctx->pc = 0x1fc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2964)));
    // 0x1fc424: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC424u;
    {
        const bool branch_taken_0x1fc424 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fc424) {
            ctx->pc = 0x1FC428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC424u;
            // 0x1fc428: 0xac800b94  sw          $zero, 0xB94($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2964), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC42Cu;
            goto label_1fc42c;
        }
    }
    ctx->pc = 0x1FC42Cu;
label_1fc42c:
    // 0x1fc42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC434u;
    // 0x1fc434: 0x0  nop
    ctx->pc = 0x1fc434u;
    // NOP
    ctx->pc = 0x1fc438u;
}
