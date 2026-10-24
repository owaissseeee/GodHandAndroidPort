#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a918 - 0x79a978
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a918");
#endif

    switch (ctx->pc) {
        case 0x79a930u: goto label_79a930;
        default: break;
    }

    ctx->pc = 0x79a918u;

    // 0x79a918: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A918u;
    {
        const bool branch_taken_0x79a918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a918) {
            ctx->pc = 0x79A958u;
            goto label_79a958;
        }
    }
    ctx->pc = 0x79A920u;
    // 0x79a920: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A920u;
    {
        const bool branch_taken_0x79a920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A920u;
        // 0x79a924: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a920) {
            ctx->pc = 0x79A970u;
            goto label_79a970;
        }
    }
    ctx->pc = 0x79A928u;
    // 0x79a928: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a92c: 0x0  nop
    ctx->pc = 0x79a92cu;
    // NOP
label_79a930:
    // 0x79a930: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a934: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a938: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A938u;
    {
        const bool branch_taken_0x79a938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a938) {
            ctx->pc = 0x79A960u;
            goto label_79a960;
        }
    }
    ctx->pc = 0x79A940u;
    // 0x79a940: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A940u;
    {
        const bool branch_taken_0x79a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a940) {
            ctx->pc = 0x79A968u;
            goto label_79a968;
        }
    }
    ctx->pc = 0x79A948u;
    // 0x79a948: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A948u;
    {
        const bool branch_taken_0x79a948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A948u;
        // 0x79a94c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a948) {
            ctx->pc = 0x79A958u;
            goto label_79a958;
        }
    }
    ctx->pc = 0x79A950u;
    // 0x79a950: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A950u;
    {
        const bool branch_taken_0x79a950 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a950) {
            ctx->pc = 0x79A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A950u;
            // 0x79a954: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a930;
        }
    }
    ctx->pc = 0x79A958u;
label_79a958:
    // 0x79a958: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A958u;
    {
        const bool branch_taken_0x79a958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A958u;
        // 0x79a95c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a958) {
            ctx->pc = 0x79A970u;
            goto label_79a970;
        }
    }
    ctx->pc = 0x79A960u;
label_79a960:
    // 0x79a960: 0x3e00008  jr          $ra
    ctx->pc = 0x79A960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A968u;
label_79a968:
    // 0x79a968: 0x3e00008  jr          $ra
    ctx->pc = 0x79A968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A968u;
        // 0x79a96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A970u;
label_79a970:
    // 0x79a970: 0x3e00008  jr          $ra
    ctx->pc = 0x79A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A978u;
}
} // namespace gh_r701
