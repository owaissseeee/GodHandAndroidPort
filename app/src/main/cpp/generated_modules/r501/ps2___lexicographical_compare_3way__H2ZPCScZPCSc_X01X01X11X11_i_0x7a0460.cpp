#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x7a0460 - 0x7a04c0
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7a0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7a0460");
#endif

    switch (ctx->pc) {
        case 0x7a0478u: goto label_7a0478;
        default: break;
    }

    ctx->pc = 0x7a0460u;

    // 0x7a0460: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x7A0460u;
    {
        const bool branch_taken_0x7a0460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7a0460) {
            ctx->pc = 0x7A04A0u;
            goto label_7a04a0;
        }
    }
    ctx->pc = 0x7A0468u;
    // 0x7a0468: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x7A0468u;
    {
        const bool branch_taken_0x7a0468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0468u;
        // 0x7a046c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0468) {
            ctx->pc = 0x7A04B8u;
            goto label_7a04b8;
        }
    }
    ctx->pc = 0x7A0470u;
    // 0x7a0470: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7a0470u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a0474: 0x0  nop
    ctx->pc = 0x7a0474u;
    // NOP
label_7a0478:
    // 0x7a0478: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7a0478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7a047c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7a047cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7a0480: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7A0480u;
    {
        const bool branch_taken_0x7a0480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0480u;
        // 0x7a0484: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0480) {
            ctx->pc = 0x7A04A8u;
            goto label_7a04a8;
        }
    }
    ctx->pc = 0x7A0488u;
    // 0x7a0488: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7A0488u;
    {
        const bool branch_taken_0x7a0488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0488u;
        // 0x7a048c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0488) {
            ctx->pc = 0x7A04B0u;
            goto label_7a04b0;
        }
    }
    ctx->pc = 0x7A0490u;
    // 0x7a0490: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A0490u;
    {
        const bool branch_taken_0x7a0490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7A0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0490u;
        // 0x7a0494: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0490) {
            ctx->pc = 0x7A04A0u;
            goto label_7a04a0;
        }
    }
    ctx->pc = 0x7A0498u;
    // 0x7a0498: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7A0498u;
    {
        const bool branch_taken_0x7a0498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x7a0498) {
            ctx->pc = 0x7A049Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A0498u;
            // 0x7a049c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A0478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a0478;
        }
    }
    ctx->pc = 0x7A04A0u;
label_7a04a0:
    // 0x7a04a0: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A04A0u;
    {
        const bool branch_taken_0x7a04a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7A04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04A0u;
        // 0x7a04a4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a04a0) {
            ctx->pc = 0x7A04B8u;
            goto label_7a04b8;
        }
    }
    ctx->pc = 0x7A04A8u;
label_7a04a8:
    // 0x7a04a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A04A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04A8u;
        // 0x7a04ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A04A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A04B0u;
label_7a04b0:
    // 0x7a04b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7A04B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04B0u;
        // 0x7a04b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A04B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A04B8u;
label_7a04b8:
    // 0x7a04b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A04B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04B8u;
        // 0x7a04bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A04B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A04C0u;
}
} // namespace gh_r501
