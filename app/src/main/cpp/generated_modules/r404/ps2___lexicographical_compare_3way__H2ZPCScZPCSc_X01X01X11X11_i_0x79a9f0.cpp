#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a9f0 - 0x79aa50
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a9f0");
#endif

    switch (ctx->pc) {
        case 0x79aa08u: goto label_79aa08;
        default: break;
    }

    ctx->pc = 0x79a9f0u;

    // 0x79a9f0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A9F0u;
    {
        const bool branch_taken_0x79a9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a9f0) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79A9F8u;
    // 0x79a9f8: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79AA48u;
            goto label_79aa48;
        }
    }
    ctx->pc = 0x79AA00u;
    // 0x79aa00: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79aa00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79aa04: 0x0  nop
    ctx->pc = 0x79aa04u;
    // NOP
label_79aa08:
    // 0x79aa08: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aa0c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79aa0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79aa10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AA10u;
    {
        const bool branch_taken_0x79aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa10) {
            ctx->pc = 0x79AA38u;
            goto label_79aa38;
        }
    }
    ctx->pc = 0x79AA18u;
    // 0x79aa18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AA18u;
    {
        const bool branch_taken_0x79aa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA18u;
        // 0x79aa1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa18) {
            ctx->pc = 0x79AA40u;
            goto label_79aa40;
        }
    }
    ctx->pc = 0x79AA20u;
    // 0x79aa20: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79AA28u;
    // 0x79aa28: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AA28u;
    {
        const bool branch_taken_0x79aa28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79aa28) {
            ctx->pc = 0x79AA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA28u;
            // 0x79aa2c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa08;
        }
    }
    ctx->pc = 0x79AA30u;
label_79aa30:
    // 0x79aa30: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AA30u;
    {
        const bool branch_taken_0x79aa30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA30u;
        // 0x79aa34: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa30) {
            ctx->pc = 0x79AA48u;
            goto label_79aa48;
        }
    }
    ctx->pc = 0x79AA38u;
label_79aa38:
    // 0x79aa38: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA38u;
        // 0x79aa3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA40u;
label_79aa40:
    // 0x79aa40: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA40u;
        // 0x79aa44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA48u;
label_79aa48:
    // 0x79aa48: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA50u;
}
} // namespace gh_r404
