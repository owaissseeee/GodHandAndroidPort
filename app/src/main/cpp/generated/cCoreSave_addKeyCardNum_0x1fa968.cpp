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

// Function: cCoreSave_addKeyCardNum
// Address: 0x1fa968 - 0x1fa9b8
void cCoreSave_addKeyCardNum_0x1fa968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addKeyCardNum_0x1fa968");
#endif

    ctx->pc = 0x1fa968u;

    // 0x1fa968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa96c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA96Cu;
    {
        const bool branch_taken_0x1fa96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa96c) {
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA974u;
    // 0x1fa974: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1fa978: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa97c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1fa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1fa980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa984: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1fa984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1fa988: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fa988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fa98c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA98Cu;
    {
        const bool branch_taken_0x1fa98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa98c) {
            ctx->pc = 0x1FA990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA98Cu;
            // 0x1fa990: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA9A0u;
            goto label_1fa9a0;
        }
    }
    ctx->pc = 0x1FA994u;
    // 0x1fa994: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fa998: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1fa998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1fa99c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa9a0:
    // 0x1fa9a0: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1fa9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1fa9a4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA9A4u;
    {
        const bool branch_taken_0x1fa9a4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa9a4) {
            ctx->pc = 0x1FA9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA9A4u;
            // 0x1fa9a8: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA9ACu;
label_1fa9ac:
    // 0x1fa9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA9B4u;
    // 0x1fa9b4: 0x0  nop
    ctx->pc = 0x1fa9b4u;
    // NOP
    ctx->pc = 0x1fa9b8u;
}
