#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79bdb8 - 0x79be20
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79bdb8");
#endif

    switch (ctx->pc) {
        case 0x79bdd0u: goto label_79bdd0;
        default: break;
    }

    ctx->pc = 0x79bdb8u;

    // 0x79bdb8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BDB8u;
    {
        const bool branch_taken_0x79bdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79bdb8) {
            ctx->pc = 0x79BE08u;
            goto label_79be08;
        }
    }
    ctx->pc = 0x79BDC0u;
    // 0x79bdc0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79BDC0u;
    {
        const bool branch_taken_0x79bdc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79bdc0) {
            ctx->pc = 0x79BE08u;
            goto label_79be08;
        }
    }
    ctx->pc = 0x79BDC8u;
    // 0x79bdc8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bdc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bdcc: 0x0  nop
    ctx->pc = 0x79bdccu;
    // NOP
label_79bdd0:
    // 0x79bdd0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bdd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bdd4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bdd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BDD8u;
    {
        const bool branch_taken_0x79bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDD8u;
        // 0x79bddc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdd8) {
            ctx->pc = 0x79BDE8u;
            goto label_79bde8;
        }
    }
    ctx->pc = 0x79BDE0u;
    // 0x79bde0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDE0u;
        // 0x79bde4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDE8u;
label_79bde8:
    // 0x79bde8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BDE8u;
    {
        const bool branch_taken_0x79bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDE8u;
        // 0x79bdec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bde8) {
            ctx->pc = 0x79BDF8u;
            goto label_79bdf8;
        }
    }
    ctx->pc = 0x79BDF0u;
    // 0x79bdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDF0u;
        // 0x79bdf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDF8u;
label_79bdf8:
    // 0x79bdf8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BDF8u;
    {
        const bool branch_taken_0x79bdf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDF8u;
        // 0x79bdfc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdf8) {
            ctx->pc = 0x79BE08u;
            goto label_79be08;
        }
    }
    ctx->pc = 0x79BE00u;
    // 0x79be00: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79BE00u;
    {
        const bool branch_taken_0x79be00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79be00) {
            ctx->pc = 0x79BE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BE00u;
            // 0x79be04: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bdd0;
        }
    }
    ctx->pc = 0x79BE08u;
label_79be08:
    // 0x79be08: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BE08u;
    {
        const bool branch_taken_0x79be08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE08u;
        // 0x79be0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be08) {
            ctx->pc = 0x79BE18u;
            goto label_79be18;
        }
    }
    ctx->pc = 0x79BE10u;
    // 0x79be10: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79be14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79be14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79be18:
    // 0x79be18: 0x3e00008  jr          $ra
    ctx->pc = 0x79BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BE20u;
}
} // namespace gh_r102
