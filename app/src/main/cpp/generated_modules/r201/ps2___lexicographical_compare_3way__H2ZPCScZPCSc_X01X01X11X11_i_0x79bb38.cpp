#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79bb38 - 0x79bb98
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bb38");
#endif

    switch (ctx->pc) {
        case 0x79bb50u: goto label_79bb50;
        default: break;
    }

    ctx->pc = 0x79bb38u;

    // 0x79bb38: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79BB38u;
    {
        const bool branch_taken_0x79bb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79bb38) {
            ctx->pc = 0x79BB78u;
            goto label_79bb78;
        }
    }
    ctx->pc = 0x79BB40u;
    // 0x79bb40: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BB40u;
    {
        const bool branch_taken_0x79bb40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB40u;
        // 0x79bb44: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb40) {
            ctx->pc = 0x79BB90u;
            goto label_79bb90;
        }
    }
    ctx->pc = 0x79BB48u;
    // 0x79bb48: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bb48u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bb4c: 0x0  nop
    ctx->pc = 0x79bb4cu;
    // NOP
label_79bb50:
    // 0x79bb50: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bb50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bb54: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bb58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BB58u;
    {
        const bool branch_taken_0x79bb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB58u;
        // 0x79bb5c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb58) {
            ctx->pc = 0x79BB80u;
            goto label_79bb80;
        }
    }
    ctx->pc = 0x79BB60u;
    // 0x79bb60: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BB60u;
    {
        const bool branch_taken_0x79bb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB60u;
        // 0x79bb64: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb60) {
            ctx->pc = 0x79BB88u;
            goto label_79bb88;
        }
    }
    ctx->pc = 0x79BB68u;
    // 0x79bb68: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BB68u;
    {
        const bool branch_taken_0x79bb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB68u;
        // 0x79bb6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb68) {
            ctx->pc = 0x79BB78u;
            goto label_79bb78;
        }
    }
    ctx->pc = 0x79BB70u;
    // 0x79bb70: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BB70u;
    {
        const bool branch_taken_0x79bb70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79bb70) {
            ctx->pc = 0x79BB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB70u;
            // 0x79bb74: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb50;
        }
    }
    ctx->pc = 0x79BB78u;
label_79bb78:
    // 0x79bb78: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BB78u;
    {
        const bool branch_taken_0x79bb78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB78u;
        // 0x79bb7c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb78) {
            ctx->pc = 0x79BB90u;
            goto label_79bb90;
        }
    }
    ctx->pc = 0x79BB80u;
label_79bb80:
    // 0x79bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB80u;
        // 0x79bb84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB88u;
label_79bb88:
    // 0x79bb88: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB88u;
        // 0x79bb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB90u;
label_79bb90:
    // 0x79bb90: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB90u;
        // 0x79bb94: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB98u;
}
} // namespace gh_r201
