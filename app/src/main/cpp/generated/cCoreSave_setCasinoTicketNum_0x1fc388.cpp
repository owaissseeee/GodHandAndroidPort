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

// Function: cCoreSave_setCasinoTicketNum
// Address: 0x1fc388 - 0x1fc3d0
void cCoreSave_setCasinoTicketNum_0x1fc388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setCasinoTicketNum_0x1fc388");
#endif

    ctx->pc = 0x1fc388u;

    // 0x1fc388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc38c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC38Cu;
    {
        const bool branch_taken_0x1fc38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc38c) {
            ctx->pc = 0x1FC3C4u;
            goto label_1fc3c4;
        }
    }
    ctx->pc = 0x1FC394u;
    // 0x1fc394: 0xac450b94  sw          $a1, 0xB94($v0)
    ctx->pc = 0x1fc394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2964), GPR_U32(ctx, 5));
    // 0x1fc398: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc39c: 0x8c620b94  lw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2964)));
    // 0x1fc3a0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fc3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc3a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC3A4u;
    {
        const bool branch_taken_0x1fc3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3a4) {
            ctx->pc = 0x1FC3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC3A4u;
            // 0x1fc3a8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC3B8u;
            goto label_1fc3b8;
        }
    }
    ctx->pc = 0x1FC3ACu;
    // 0x1fc3ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fc3b0: 0xac620b94  sw          $v0, 0xB94($v1)
    ctx->pc = 0x1fc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2964), GPR_U32(ctx, 2));
    // 0x1fc3b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc3b8:
    // 0x1fc3b8: 0x8c820b94  lw          $v0, 0xB94($a0)
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2964)));
    // 0x1fc3bc: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC3BCu;
    {
        const bool branch_taken_0x1fc3bc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fc3bc) {
            ctx->pc = 0x1FC3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC3BCu;
            // 0x1fc3c0: 0xac800b94  sw          $zero, 0xB94($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2964), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC3C4u;
            goto label_1fc3c4;
        }
    }
    ctx->pc = 0x1FC3C4u;
label_1fc3c4:
    // 0x1fc3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC3CCu;
    // 0x1fc3cc: 0x0  nop
    ctx->pc = 0x1fc3ccu;
    // NOP
    ctx->pc = 0x1fc3d0u;
}
