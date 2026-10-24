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

// Function: Obj0000_Memset_Backward_366B80
// Address: 0x366b80 - 0x366c50
void Obj0000_Memset_Backward_366B80_0x366b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Memset_Backward_366B80_0x366b80");
#endif

    switch (ctx->pc) {
        case 0x366b98u: goto label_366b98;
        case 0x366bc0u: goto label_366bc0;
        default: break;
    }

    ctx->pc = 0x366b80u;

    // 0x366b80: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x366b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x366b84: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x366b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x366b88: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x366b88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x366b8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x366B8Cu;
    {
        const bool branch_taken_0x366b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B8Cu;
        // 0x366b90: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b8c) {
            ctx->pc = 0x366BB4u;
            goto label_366bb4;
        }
    }
    ctx->pc = 0x366B94u;
    // 0x366b94: 0x0  nop
    ctx->pc = 0x366b94u;
    // NOP
label_366b98:
    // 0x366b98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x366b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x366ba0: 0x0  nop
    ctx->pc = 0x366ba0u;
    // NOP
    // 0x366ba4: 0x0  nop
    ctx->pc = 0x366ba4u;
    // NOP
    // 0x366ba8: 0x0  nop
    ctx->pc = 0x366ba8u;
    // NOP
    // 0x366bac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366BACu;
    {
        const bool branch_taken_0x366bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BACu;
        // 0x366bb0: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366bac) {
            ctx->pc = 0x366B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366b98;
        }
    }
    ctx->pc = 0x366BB4u;
label_366bb4:
    // 0x366bb4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x366bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x366bb8: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x366BB8u;
    {
        const bool branch_taken_0x366bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x366bb8) {
            ctx->pc = 0x366C48u;
            goto label_366c48;
        }
    }
    ctx->pc = 0x366BC0u;
label_366bc0:
    // 0x366bc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366bc4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x366bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x366bc8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366bd0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bd4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366bd8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bdc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366be0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366be0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366be4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366be8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366bf0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bf4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366bf8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366bfc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c00: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c08: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c10: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c18: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c20: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c28: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c38: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x366c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x366c3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x366c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x366c40: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x366C40u;
    {
        const bool branch_taken_0x366c40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C40u;
        // 0x366c44: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c40) {
            ctx->pc = 0x366BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366bc0;
        }
    }
    ctx->pc = 0x366C48u;
label_366c48:
    // 0x366c48: 0x3e00008  jr          $ra
    ctx->pc = 0x366C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366C50u;
}
