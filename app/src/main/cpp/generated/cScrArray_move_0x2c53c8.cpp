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

// Function: cScrArray_move
// Address: 0x2c53c8 - 0x2c5420
void cScrArray_move_0x2c53c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrArray_move_0x2c53c8");
#endif

    ctx->pc = 0x2c53c8u;

    // 0x2c53c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c53c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c53cc: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C53CCu;
    {
        const bool branch_taken_0x2c53cc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2c53cc) {
            ctx->pc = 0x2C540Cu;
            goto label_2c540c;
        }
    }
    ctx->pc = 0x2C53D4u;
    // 0x2c53d4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2c53d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c53d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C53D8u;
    {
        const bool branch_taken_0x2c53d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D8u;
        // 0x2c53dc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53d8) {
            ctx->pc = 0x2C53F8u;
            goto label_2c53f8;
        }
    }
    ctx->pc = 0x2C53E0u;
    // 0x2c53e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c53e4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2c53e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c53e8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C53E8u;
    {
        const bool branch_taken_0x2c53e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53E8u;
        // 0x2c53ec: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53e8) {
            ctx->pc = 0x2C540Cu;
            goto label_2c540c;
        }
    }
    ctx->pc = 0x2C53F0u;
    // 0x2c53f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C53F0u;
    {
        const bool branch_taken_0x2c53f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53F0u;
        // 0x2c53f4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53f0) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53F8u;
label_2c53f8:
    // 0x2c53f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c53fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C53FCu;
    {
        const bool branch_taken_0x2c53fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2C5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53FCu;
        // 0x2c5400: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53fc) {
            ctx->pc = 0x2C540Cu;
            goto label_2c540c;
        }
    }
    ctx->pc = 0x2C5404u;
    // 0x2c5404: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2c5404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2c5408:
    // 0x2c5408: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2c5408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2c540c:
    // 0x2c540c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C540Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5414u;
    // 0x2c5414: 0x0  nop
    ctx->pc = 0x2c5414u;
    // NOP
    // 0x2c5418: 0x0  nop
    ctx->pc = 0x2c5418u;
    // NOP
    // 0x2c541c: 0x0  nop
    ctx->pc = 0x2c541cu;
    // NOP
    ctx->pc = 0x2c5420u;
}
