#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799ac8 - 0x799b30
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799ac8");
#endif

    switch (ctx->pc) {
        case 0x799ae0u: goto label_799ae0;
        default: break;
    }

    ctx->pc = 0x799ac8u;

    // 0x799ac8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799B18u;
            goto label_799b18;
        }
    }
    ctx->pc = 0x799AD0u;
    // 0x799ad0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799AD0u;
    {
        const bool branch_taken_0x799ad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799ad0) {
            ctx->pc = 0x799B18u;
            goto label_799b18;
        }
    }
    ctx->pc = 0x799AD8u;
    // 0x799ad8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799adc: 0x0  nop
    ctx->pc = 0x799adcu;
    // NOP
label_799ae0:
    // 0x799ae0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799ae4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AE8u;
    {
        const bool branch_taken_0x799ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae8) {
            ctx->pc = 0x799AF8u;
            goto label_799af8;
        }
    }
    ctx->pc = 0x799AF0u;
    // 0x799af0: 0x3e00008  jr          $ra
    ctx->pc = 0x799AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AF8u;
    {
        const bool branch_taken_0x799af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF8u;
        // 0x799afc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af8) {
            ctx->pc = 0x799B08u;
            goto label_799b08;
        }
    }
    ctx->pc = 0x799B00u;
    // 0x799b00: 0x3e00008  jr          $ra
    ctx->pc = 0x799B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B00u;
        // 0x799b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B08u;
    {
        const bool branch_taken_0x799b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B08u;
        // 0x799b0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b08) {
            ctx->pc = 0x799B18u;
            goto label_799b18;
        }
    }
    ctx->pc = 0x799B10u;
    // 0x799b10: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799B10u;
    {
        const bool branch_taken_0x799b10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799b10) {
            ctx->pc = 0x799B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B10u;
            // 0x799b14: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ae0;
        }
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B18u;
    {
        const bool branch_taken_0x799b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B18u;
        // 0x799b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b18) {
            ctx->pc = 0x799B28u;
            goto label_799b28;
        }
    }
    ctx->pc = 0x799B20u;
    // 0x799b20: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799b24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799b28:
    // 0x799b28: 0x3e00008  jr          $ra
    ctx->pc = 0x799B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B30u;
}
} // namespace gh_r005
