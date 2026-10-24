#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79ab08 - 0x79ab68
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ab08");
#endif

    switch (ctx->pc) {
        case 0x79ab20u: goto label_79ab20;
        default: break;
    }

    ctx->pc = 0x79ab08u;

    // 0x79ab08: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79AB08u;
    {
        const bool branch_taken_0x79ab08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ab08) {
            ctx->pc = 0x79AB48u;
            goto label_79ab48;
        }
    }
    ctx->pc = 0x79AB10u;
    // 0x79ab10: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AB10u;
    {
        const bool branch_taken_0x79ab10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB10u;
        // 0x79ab14: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab10) {
            ctx->pc = 0x79AB60u;
            goto label_79ab60;
        }
    }
    ctx->pc = 0x79AB18u;
    // 0x79ab18: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ab1c: 0x0  nop
    ctx->pc = 0x79ab1cu;
    // NOP
label_79ab20:
    // 0x79ab20: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ab24: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ab24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ab28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AB28u;
    {
        const bool branch_taken_0x79ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB28u;
        // 0x79ab2c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab28) {
            ctx->pc = 0x79AB50u;
            goto label_79ab50;
        }
    }
    ctx->pc = 0x79AB30u;
    // 0x79ab30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AB30u;
    {
        const bool branch_taken_0x79ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB30u;
        // 0x79ab34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab30) {
            ctx->pc = 0x79AB58u;
            goto label_79ab58;
        }
    }
    ctx->pc = 0x79AB38u;
    // 0x79ab38: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB38u;
    {
        const bool branch_taken_0x79ab38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB38u;
        // 0x79ab3c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab38) {
            ctx->pc = 0x79AB48u;
            goto label_79ab48;
        }
    }
    ctx->pc = 0x79AB40u;
    // 0x79ab40: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AB40u;
    {
        const bool branch_taken_0x79ab40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ab40) {
            ctx->pc = 0x79AB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB40u;
            // 0x79ab44: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab20;
        }
    }
    ctx->pc = 0x79AB48u;
label_79ab48:
    // 0x79ab48: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AB48u;
    {
        const bool branch_taken_0x79ab48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB48u;
        // 0x79ab4c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab48) {
            ctx->pc = 0x79AB60u;
            goto label_79ab60;
        }
    }
    ctx->pc = 0x79AB50u;
label_79ab50:
    // 0x79ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB50u;
        // 0x79ab54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB58u;
label_79ab58:
    // 0x79ab58: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB58u;
        // 0x79ab5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB60u;
        // 0x79ab64: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB68u;
}
} // namespace gh_r101
