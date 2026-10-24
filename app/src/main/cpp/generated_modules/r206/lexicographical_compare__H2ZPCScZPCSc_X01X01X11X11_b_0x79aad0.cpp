#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79aad0 - 0x79ab38
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79aad0");
#endif

    switch (ctx->pc) {
        case 0x79aae8u: goto label_79aae8;
        default: break;
    }

    ctx->pc = 0x79aad0u;

    // 0x79aad0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AAD0u;
    {
        const bool branch_taken_0x79aad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79aad0) {
            ctx->pc = 0x79AB20u;
            goto label_79ab20;
        }
    }
    ctx->pc = 0x79AAD8u;
    // 0x79aad8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AAD8u;
    {
        const bool branch_taken_0x79aad8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79aad8) {
            ctx->pc = 0x79AB20u;
            goto label_79ab20;
        }
    }
    ctx->pc = 0x79AAE0u;
    // 0x79aae0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79aae4: 0x0  nop
    ctx->pc = 0x79aae4u;
    // NOP
label_79aae8:
    // 0x79aae8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aaec: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79aaecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79aaf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AAF0u;
    {
        const bool branch_taken_0x79aaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF0u;
        // 0x79aaf4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaf0) {
            ctx->pc = 0x79AB00u;
            goto label_79ab00;
        }
    }
    ctx->pc = 0x79AAF8u;
    // 0x79aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF8u;
        // 0x79aafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB00u;
    {
        const bool branch_taken_0x79ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB00u;
        // 0x79ab04: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab00) {
            ctx->pc = 0x79AB10u;
            goto label_79ab10;
        }
    }
    ctx->pc = 0x79AB08u;
    // 0x79ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB08u;
        // 0x79ab0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB10u;
label_79ab10:
    // 0x79ab10: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB10u;
    {
        const bool branch_taken_0x79ab10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB10u;
        // 0x79ab14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab10) {
            ctx->pc = 0x79AB20u;
            goto label_79ab20;
        }
    }
    ctx->pc = 0x79AB18u;
    // 0x79ab18: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AB18u;
    {
        const bool branch_taken_0x79ab18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ab18) {
            ctx->pc = 0x79AB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB18u;
            // 0x79ab1c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aae8;
        }
    }
    ctx->pc = 0x79AB20u;
label_79ab20:
    // 0x79ab20: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB20u;
    {
        const bool branch_taken_0x79ab20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab20) {
            ctx->pc = 0x79AB30u;
            goto label_79ab30;
        }
    }
    ctx->pc = 0x79AB28u;
    // 0x79ab28: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79ab2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ab2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79ab30:
    // 0x79ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB38u;
}
} // namespace gh_r206
