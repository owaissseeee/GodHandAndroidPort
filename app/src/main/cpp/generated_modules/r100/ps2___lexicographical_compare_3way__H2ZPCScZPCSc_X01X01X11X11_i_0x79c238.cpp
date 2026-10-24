#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79c238 - 0x79c298
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79c238");
#endif

    switch (ctx->pc) {
        case 0x79c250u: goto label_79c250;
        default: break;
    }

    ctx->pc = 0x79c238u;

    // 0x79c238: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79C238u;
    {
        const bool branch_taken_0x79c238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79c238) {
            ctx->pc = 0x79C278u;
            goto label_79c278;
        }
    }
    ctx->pc = 0x79C240u;
    // 0x79c240: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C240u;
    {
        const bool branch_taken_0x79c240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C240u;
        // 0x79c244: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c240) {
            ctx->pc = 0x79C290u;
            goto label_79c290;
        }
    }
    ctx->pc = 0x79C248u;
    // 0x79c248: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79c248u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c24c: 0x0  nop
    ctx->pc = 0x79c24cu;
    // NOP
label_79c250:
    // 0x79c250: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79c250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79c254: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79c254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C258u;
    {
        const bool branch_taken_0x79c258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C258u;
        // 0x79c25c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c258) {
            ctx->pc = 0x79C280u;
            goto label_79c280;
        }
    }
    ctx->pc = 0x79C260u;
    // 0x79c260: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C260u;
    {
        const bool branch_taken_0x79c260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C260u;
        // 0x79c264: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c260) {
            ctx->pc = 0x79C288u;
            goto label_79c288;
        }
    }
    ctx->pc = 0x79C268u;
    // 0x79c268: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C268u;
    {
        const bool branch_taken_0x79c268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C268u;
        // 0x79c26c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c268) {
            ctx->pc = 0x79C278u;
            goto label_79c278;
        }
    }
    ctx->pc = 0x79C270u;
    // 0x79c270: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79C270u;
    {
        const bool branch_taken_0x79c270 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79c270) {
            ctx->pc = 0x79C274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C270u;
            // 0x79c274: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c250;
        }
    }
    ctx->pc = 0x79C278u;
label_79c278:
    // 0x79c278: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C278u;
    {
        const bool branch_taken_0x79c278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C278u;
        // 0x79c27c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c278) {
            ctx->pc = 0x79C290u;
            goto label_79c290;
        }
    }
    ctx->pc = 0x79C280u;
label_79c280:
    // 0x79c280: 0x3e00008  jr          $ra
    ctx->pc = 0x79C280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C280u;
        // 0x79c284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C288u;
label_79c288:
    // 0x79c288: 0x3e00008  jr          $ra
    ctx->pc = 0x79C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C288u;
        // 0x79c28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C290u;
label_79c290:
    // 0x79c290: 0x3e00008  jr          $ra
    ctx->pc = 0x79C290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C290u;
        // 0x79c294: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C298u;
}
} // namespace gh_r100
