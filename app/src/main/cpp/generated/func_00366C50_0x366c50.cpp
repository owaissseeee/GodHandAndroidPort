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

// Function: func_00366C50
// Address: 0x366c50 - 0x366d18
void func_00366C50_0x366c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366C50_0x366c50");
#endif

    switch (ctx->pc) {
        case 0x366c60u: goto label_366c60;
        case 0x366c88u: goto label_366c88;
        default: break;
    }

    ctx->pc = 0x366c50u;

    // 0x366c50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x366c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x366c54: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x366c58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x366C58u;
    {
        const bool branch_taken_0x366c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C58u;
        // 0x366c5c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c58) {
            ctx->pc = 0x366C7Cu;
            goto label_366c7c;
        }
    }
    ctx->pc = 0x366C60u;
label_366c60:
    // 0x366c60: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x366c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x366c68: 0x0  nop
    ctx->pc = 0x366c68u;
    // NOP
    // 0x366c6c: 0x0  nop
    ctx->pc = 0x366c6cu;
    // NOP
    // 0x366c70: 0x0  nop
    ctx->pc = 0x366c70u;
    // NOP
    // 0x366c74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366C74u;
    {
        const bool branch_taken_0x366c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C74u;
        // 0x366c78: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c74) {
            ctx->pc = 0x366C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366c60;
        }
    }
    ctx->pc = 0x366C7Cu;
label_366c7c:
    // 0x366c7c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x366c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x366c80: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x366C80u;
    {
        const bool branch_taken_0x366c80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c80) {
            ctx->pc = 0x366D10u;
            goto label_366d10;
        }
    }
    ctx->pc = 0x366C88u;
label_366c88:
    // 0x366c88: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366c8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x366c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x366c90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366c94: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366c98: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366c9c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366ca0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366ca4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366ca8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cb0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cb4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cb8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cbc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cc0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cc4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366ccc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cd0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cd4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cd8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cdc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366ce0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366ce4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366ce8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cec: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cf0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cf4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366cf8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366cfc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366d00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x366d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x366d04: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x366d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x366d08: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x366D08u;
    {
        const bool branch_taken_0x366d08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D08u;
        // 0x366d0c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d08) {
            ctx->pc = 0x366C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366c88;
        }
    }
    ctx->pc = 0x366D10u;
label_366d10:
    // 0x366d10: 0x3e00008  jr          $ra
    ctx->pc = 0x366D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366D18u;
}
