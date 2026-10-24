#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79b918 - 0x79b980
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b918");
#endif

    switch (ctx->pc) {
        case 0x79b930u: goto label_79b930;
        default: break;
    }

    ctx->pc = 0x79b918u;

    // 0x79b918: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B918u;
    {
        const bool branch_taken_0x79b918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b918) {
            ctx->pc = 0x79B968u;
            goto label_79b968;
        }
    }
    ctx->pc = 0x79B920u;
    // 0x79b920: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B920u;
    {
        const bool branch_taken_0x79b920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79b920) {
            ctx->pc = 0x79B968u;
            goto label_79b968;
        }
    }
    ctx->pc = 0x79B928u;
    // 0x79b928: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b92c: 0x0  nop
    ctx->pc = 0x79b92cu;
    // NOP
label_79b930:
    // 0x79b930: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b934: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79b934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B938u;
    {
        const bool branch_taken_0x79b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B938u;
        // 0x79b93c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b938) {
            ctx->pc = 0x79B948u;
            goto label_79b948;
        }
    }
    ctx->pc = 0x79B940u;
    // 0x79b940: 0x3e00008  jr          $ra
    ctx->pc = 0x79B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B940u;
        // 0x79b944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B948u;
label_79b948:
    // 0x79b948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B948u;
    {
        const bool branch_taken_0x79b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B948u;
        // 0x79b94c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b948) {
            ctx->pc = 0x79B958u;
            goto label_79b958;
        }
    }
    ctx->pc = 0x79B950u;
    // 0x79b950: 0x3e00008  jr          $ra
    ctx->pc = 0x79B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B950u;
        // 0x79b954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B958u;
label_79b958:
    // 0x79b958: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B958u;
    {
        const bool branch_taken_0x79b958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B958u;
        // 0x79b95c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b958) {
            ctx->pc = 0x79B968u;
            goto label_79b968;
        }
    }
    ctx->pc = 0x79B960u;
    // 0x79b960: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B960u;
    {
        const bool branch_taken_0x79b960 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79b960) {
            ctx->pc = 0x79B964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B960u;
            // 0x79b964: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b930;
        }
    }
    ctx->pc = 0x79B968u;
label_79b968:
    // 0x79b968: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B968u;
    {
        const bool branch_taken_0x79b968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B968u;
        // 0x79b96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b968) {
            ctx->pc = 0x79B978u;
            goto label_79b978;
        }
    }
    ctx->pc = 0x79B970u;
    // 0x79b970: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79b974: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79b978:
    // 0x79b978: 0x3e00008  jr          $ra
    ctx->pc = 0x79B978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B980u;
}
} // namespace gh_r601
