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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79bd58 - 0x79bdb8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bd58");
#endif

    switch (ctx->pc) {
        case 0x79bd70u: goto label_79bd70;
        default: break;
    }

    ctx->pc = 0x79bd58u;

    // 0x79bd58: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79BD58u;
    {
        const bool branch_taken_0x79bd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79bd58) {
            ctx->pc = 0x79BD98u;
            goto label_79bd98;
        }
    }
    ctx->pc = 0x79BD60u;
    // 0x79bd60: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BD60u;
    {
        const bool branch_taken_0x79bd60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD60u;
        // 0x79bd64: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd60) {
            ctx->pc = 0x79BDB0u;
            goto label_79bdb0;
        }
    }
    ctx->pc = 0x79BD68u;
    // 0x79bd68: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bd68u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bd6c: 0x0  nop
    ctx->pc = 0x79bd6cu;
    // NOP
label_79bd70:
    // 0x79bd70: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bd70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bd74: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bd74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bd78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BD78u;
    {
        const bool branch_taken_0x79bd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD78u;
        // 0x79bd7c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd78) {
            ctx->pc = 0x79BDA0u;
            goto label_79bda0;
        }
    }
    ctx->pc = 0x79BD80u;
    // 0x79bd80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BD80u;
    {
        const bool branch_taken_0x79bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD80u;
        // 0x79bd84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd80) {
            ctx->pc = 0x79BDA8u;
            goto label_79bda8;
        }
    }
    ctx->pc = 0x79BD88u;
    // 0x79bd88: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD88u;
    {
        const bool branch_taken_0x79bd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD88u;
        // 0x79bd8c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd88) {
            ctx->pc = 0x79BD98u;
            goto label_79bd98;
        }
    }
    ctx->pc = 0x79BD90u;
    // 0x79bd90: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BD90u;
    {
        const bool branch_taken_0x79bd90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79bd90) {
            ctx->pc = 0x79BD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD90u;
            // 0x79bd94: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd70;
        }
    }
    ctx->pc = 0x79BD98u;
label_79bd98:
    // 0x79bd98: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BD98u;
    {
        const bool branch_taken_0x79bd98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD98u;
        // 0x79bd9c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd98) {
            ctx->pc = 0x79BDB0u;
            goto label_79bdb0;
        }
    }
    ctx->pc = 0x79BDA0u;
label_79bda0:
    // 0x79bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDA0u;
        // 0x79bda4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDA8u;
label_79bda8:
    // 0x79bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDA8u;
        // 0x79bdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDB0u;
label_79bdb0:
    // 0x79bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDB0u;
        // 0x79bdb4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDB8u;
}
} // namespace gh_r102
