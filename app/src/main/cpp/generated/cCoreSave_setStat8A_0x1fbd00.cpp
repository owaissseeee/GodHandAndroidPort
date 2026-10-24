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

// Function: cCoreSave_setStat8A
// Address: 0x1fbd00 - 0x1fbd28
void cCoreSave_setStat8A_0x1fbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setStat8A_0x1fbd00");
#endif

    ctx->pc = 0x1fbd00u;

    // 0x1fbd00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbd04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBD04u;
    {
        const bool branch_taken_0x1fbd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD04u;
        // 0x1fbd08: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd04) {
            ctx->pc = 0x1FBD1Cu;
            goto label_1fbd1c;
        }
    }
    ctx->pc = 0x1FBD0Cu;
    // 0x1fbd0c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1fbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fbd10: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1fbd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fbd14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FBD14u;
    {
        const bool branch_taken_0x1fbd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd14) {
            ctx->pc = 0x1FBD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD14u;
            // 0x1fbd18: 0xa085008a  sb          $a1, 0x8A($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBD1Cu;
            goto label_1fbd1c;
        }
    }
    ctx->pc = 0x1FBD1Cu;
label_1fbd1c:
    // 0x1fbd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD24u;
    // 0x1fbd24: 0x0  nop
    ctx->pc = 0x1fbd24u;
    // NOP
    ctx->pc = 0x1fbd28u;
}
