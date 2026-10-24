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

// Function: cCoreSave_addComboST
// Address: 0x1fbd28 - 0x1fbd60
void cCoreSave_addComboST_0x1fbd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addComboST_0x1fbd28");
#endif

    ctx->pc = 0x1fbd28u;

    // 0x1fbd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbd2c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBD2Cu;
    {
        const bool branch_taken_0x1fbd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD2Cu;
        // 0x1fbd30: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd2c) {
            ctx->pc = 0x1FBD58u;
            goto label_1fbd58;
        }
    }
    ctx->pc = 0x1FBD34u;
    // 0x1fbd34: 0x9062008a  lbu         $v0, 0x8A($v1)
    ctx->pc = 0x1fbd34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x1fbd38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fbd3c: 0xa062008a  sb          $v0, 0x8A($v1)
    ctx->pc = 0x1fbd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fbd40: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbd44: 0x9082008a  lbu         $v0, 0x8A($a0)
    ctx->pc = 0x1fbd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x1fbd48: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1fbd48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1fbd4c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBD4Cu;
    {
        const bool branch_taken_0x1fbd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD4Cu;
        // 0x1fbd50: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd4c) {
            ctx->pc = 0x1FBD58u;
            goto label_1fbd58;
        }
    }
    ctx->pc = 0x1FBD54u;
    // 0x1fbd54: 0xa082008a  sb          $v0, 0x8A($a0)
    ctx->pc = 0x1fbd54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 2));
label_1fbd58:
    // 0x1fbd58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD60u;
}
