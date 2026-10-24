#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: __do_global_dtors
// Address: 0x79bbe8 - 0x79bc40
void ps2___do_global_dtors_0x79bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79bbe8");
#endif

    switch (ctx->pc) {
        case 0x79bbe8u: goto label_79bbe8;
        case 0x79bbecu: goto label_79bbec;
        case 0x79bbf0u: goto label_79bbf0;
        case 0x79bbf4u: goto label_79bbf4;
        case 0x79bbf8u: goto label_79bbf8;
        case 0x79bbfcu: goto label_79bbfc;
        case 0x79bc00u: goto label_79bc00;
        case 0x79bc04u: goto label_79bc04;
        case 0x79bc08u: goto label_79bc08;
        case 0x79bc0cu: goto label_79bc0c;
        case 0x79bc10u: goto label_79bc10;
        case 0x79bc14u: goto label_79bc14;
        case 0x79bc18u: goto label_79bc18;
        case 0x79bc1cu: goto label_79bc1c;
        case 0x79bc20u: goto label_79bc20;
        case 0x79bc24u: goto label_79bc24;
        case 0x79bc28u: goto label_79bc28;
        case 0x79bc2cu: goto label_79bc2c;
        case 0x79bc30u: goto label_79bc30;
        case 0x79bc34u: goto label_79bc34;
        case 0x79bc38u: goto label_79bc38;
        case 0x79bc3cu: goto label_79bc3c;
        default: break;
    }

    ctx->pc = 0x79bbe8u;

label_79bbe8:
    // 0x79bbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79bbec:
    // 0x79bbec: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79bbf0:
    // 0x79bbf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79bbf4:
    // 0x79bbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79bbf8:
    // 0x79bbf8: 0x8c82bf80  lw          $v0, -0x4080($a0)
    ctx->pc = 0x79bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950784)));
label_79bbfc:
    // 0x79bbfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bc00:
    // 0x79bc00: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79bc04:
    if (ctx->pc == 0x79BC04u) {
        ctx->pc = 0x79BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC00u;
        // 0x79bc04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC08u;
        goto label_79bc08;
    }
    ctx->pc = 0x79BC00u;
    {
        const bool branch_taken_0x79bc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC00u;
        // 0x79bc04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc00) {
            ctx->pc = 0x79BC2Cu;
            goto label_79bc2c;
        }
    }
    ctx->pc = 0x79BC08u;
label_79bc08:
    // 0x79bc08: 0x8e02bf80  lw          $v0, -0x4080($s0)
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950784)));
label_79bc0c:
    // 0x79bc0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79bc10:
    // 0x79bc10: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79bc14:
    // 0x79bc14: 0x60f809  jalr        $v1
label_79bc18:
    if (ctx->pc == 0x79BC18u) {
        ctx->pc = 0x79BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC14u;
        // 0x79bc18: 0xae02bf80  sw          $v0, -0x4080($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC1Cu;
        goto label_79bc1c;
    }
    ctx->pc = 0x79BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BC1Cu);
        ctx->pc = 0x79BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC14u;
        // 0x79bc18: 0xae02bf80  sw          $v0, -0x4080($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC14u, 0x79BC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BC1Cu;
label_79bc1c:
    // 0x79bc1c: 0x8e02bf80  lw          $v0, -0x4080($s0)
    ctx->pc = 0x79bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950784)));
label_79bc20:
    // 0x79bc20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bc24:
    // 0x79bc24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79bc28:
    if (ctx->pc == 0x79BC28u) {
        ctx->pc = 0x79BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC24u;
        // 0x79bc28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC2Cu;
        goto label_79bc2c;
    }
    ctx->pc = 0x79BC24u;
    {
        const bool branch_taken_0x79bc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC24u;
        // 0x79bc28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc24) {
            ctx->pc = 0x79BC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc10;
        }
    }
    ctx->pc = 0x79BC2Cu;
label_79bc2c:
    // 0x79bc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bc30:
    // 0x79bc30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bc34:
    // 0x79bc34: 0x3e00008  jr          $ra
label_79bc38:
    if (ctx->pc == 0x79BC38u) {
        ctx->pc = 0x79BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC34u;
        // 0x79bc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC3Cu;
        goto label_79bc3c;
    }
    ctx->pc = 0x79BC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC34u;
        // 0x79bc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BC3Cu;
label_79bc3c:
    // 0x79bc3c: 0x0  nop
    ctx->pc = 0x79bc3cu;
    // NOP
    ctx->pc = 0x79bc40u;
}
} // namespace gh_r409
