#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CBA18
// Address: 0x7cba18 - 0x7cbaa0
void func_007CBA18_0x7cba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CBA18_0x7cba18");
#endif

    switch (ctx->pc) {
        case 0x7cba48u: goto label_7cba48;
        case 0x7cba94u: goto label_7cba94;
        default: break;
    }

    ctx->pc = 0x7cba18u;

    // 0x7cba18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cba1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7cba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cba20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cba24: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x7cba24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x7cba28: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x7cba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x7cba2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7cba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7cba30: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x7cba30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cba34: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CBA34u;
    {
        const bool branch_taken_0x7cba34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x7CBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA34u;
        // 0x7cba38: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cba34) {
            ctx->pc = 0x7CBA68u;
            goto label_7cba68;
        }
    }
    ctx->pc = 0x7CBA3Cu;
    // 0x7cba3c: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x7cba3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x7cba40: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x7cba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x7cba44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7cba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7cba48:
    // 0x7cba48: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x7cba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x7cba4c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x7cba4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cba50: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x7cba50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x7cba54: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x7cba54u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x7cba58: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x7cba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x7cba5c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x7cba5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cba60: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CBA60u;
    {
        const bool branch_taken_0x7cba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x7cba60) {
            ctx->pc = 0x7CBA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBA60u;
            // 0x7cba64: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cba48;
        }
    }
    ctx->pc = 0x7CBA68u;
label_7cba68:
    // 0x7cba68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7cba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cba6c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x7cba6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cba70: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CBA70u;
    {
        const bool branch_taken_0x7cba70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7CBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA70u;
        // 0x7cba74: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cba70) {
            ctx->pc = 0x7CBA8Cu;
            goto label_7cba8c;
        }
    }
    ctx->pc = 0x7CBA78u;
    // 0x7cba78: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x7cba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7cba7c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x7cba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7cba80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x7cba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7cba84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBA84u;
    {
        const bool branch_taken_0x7cba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA84u;
        // 0x7cba88: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cba84) {
            ctx->pc = 0x7CBA94u;
            goto label_7cba94;
        }
    }
    ctx->pc = 0x7CBA8Cu;
label_7cba8c:
    // 0x7cba8c: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x7CBA8Cu;
    SET_GPR_U32(ctx, 31, 0x7CBA94u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CBA8Cu, 0x7CBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBA94u;
label_7cba94:
    // 0x7cba94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cba98: 0x3e00008  jr          $ra
    ctx->pc = 0x7CBA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA98u;
        // 0x7cba9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CBAA0u;
}
} // namespace gh_mcport
