#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x7995e0 - 0x799648
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7995e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7995e0");
#endif

    switch (ctx->pc) {
        case 0x7995f8u: goto label_7995f8;
        default: break;
    }

    ctx->pc = 0x7995e0u;

    // 0x7995e0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x7995E0u;
    {
        const bool branch_taken_0x7995e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7995e0) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x7995E8u;
    // 0x7995e8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x7995E8u;
    {
        const bool branch_taken_0x7995e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x7995e8) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x7995F0u;
    // 0x7995f0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7995f4: 0x0  nop
    ctx->pc = 0x7995f4u;
    // NOP
label_7995f8:
    // 0x7995f8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7995fc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799600) {
            ctx->pc = 0x799610u;
            goto label_799610;
        }
    }
    ctx->pc = 0x799608u;
    // 0x799608: 0x3e00008  jr          $ra
    ctx->pc = 0x799608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799610u;
    {
        const bool branch_taken_0x799610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799610) {
            ctx->pc = 0x799620u;
            goto label_799620;
        }
    }
    ctx->pc = 0x799618u;
    // 0x799618: 0x3e00008  jr          $ra
    ctx->pc = 0x799618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x799628u;
    // 0x799628: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799628) {
            ctx->pc = 0x79962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799628u;
            // 0x79962c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f8;
        }
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799630) {
            ctx->pc = 0x799640u;
            goto label_799640;
        }
    }
    ctx->pc = 0x799638u;
    // 0x799638: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79963c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799640:
    // 0x799640: 0x3e00008  jr          $ra
    ctx->pc = 0x799640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799648u;
}
} // namespace gh_r400
