#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: __do_global_dtors
// Address: 0x79ace8 - 0x79ad40
void ps2___do_global_dtors_0x79ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79ace8");
#endif

    switch (ctx->pc) {
        case 0x79ace8u: goto label_79ace8;
        case 0x79acecu: goto label_79acec;
        case 0x79acf0u: goto label_79acf0;
        case 0x79acf4u: goto label_79acf4;
        case 0x79acf8u: goto label_79acf8;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad00u: goto label_79ad00;
        case 0x79ad04u: goto label_79ad04;
        case 0x79ad08u: goto label_79ad08;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad10u: goto label_79ad10;
        case 0x79ad14u: goto label_79ad14;
        case 0x79ad18u: goto label_79ad18;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad20u: goto label_79ad20;
        case 0x79ad24u: goto label_79ad24;
        case 0x79ad28u: goto label_79ad28;
        case 0x79ad2cu: goto label_79ad2c;
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad34u: goto label_79ad34;
        case 0x79ad38u: goto label_79ad38;
        case 0x79ad3cu: goto label_79ad3c;
        default: break;
    }

    ctx->pc = 0x79ace8u;

label_79ace8:
    // 0x79ace8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79acec:
    // 0x79acec: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79acf0:
    // 0x79acf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79acf4:
    // 0x79acf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79acf8:
    // 0x79acf8: 0x8c82af00  lw          $v0, -0x5100($a0)
    ctx->pc = 0x79acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946560)));
label_79acfc:
    // 0x79acfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ad00:
    // 0x79ad00: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79ad04:
    if (ctx->pc == 0x79AD04u) {
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD08u;
        goto label_79ad08;
    }
    ctx->pc = 0x79AD00u;
    {
        const bool branch_taken_0x79ad00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad00) {
            ctx->pc = 0x79AD2Cu;
            goto label_79ad2c;
        }
    }
    ctx->pc = 0x79AD08u;
label_79ad08:
    // 0x79ad08: 0x8e02af00  lw          $v0, -0x5100($s0)
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
label_79ad0c:
    // 0x79ad0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79ad10:
    // 0x79ad10: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79ad14:
    // 0x79ad14: 0x60f809  jalr        $v1
label_79ad18:
    if (ctx->pc == 0x79AD18u) {
        ctx->pc = 0x79AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD14u;
        // 0x79ad18: 0xae02af00  sw          $v0, -0x5100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD1Cu;
        goto label_79ad1c;
    }
    ctx->pc = 0x79AD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79AD1Cu);
        ctx->pc = 0x79AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD14u;
        // 0x79ad18: 0xae02af00  sw          $v0, -0x5100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD14u, 0x79AD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AD1Cu;
label_79ad1c:
    // 0x79ad1c: 0x8e02af00  lw          $v0, -0x5100($s0)
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
label_79ad20:
    // 0x79ad20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ad24:
    // 0x79ad24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79ad28:
    if (ctx->pc == 0x79AD28u) {
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD2Cu;
        goto label_79ad2c;
    }
    ctx->pc = 0x79AD24u;
    {
        const bool branch_taken_0x79ad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad24) {
            ctx->pc = 0x79AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad10;
        }
    }
    ctx->pc = 0x79AD2Cu;
label_79ad2c:
    // 0x79ad2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ad30:
    // 0x79ad30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ad30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ad34:
    // 0x79ad34: 0x3e00008  jr          $ra
label_79ad38:
    if (ctx->pc == 0x79AD38u) {
        ctx->pc = 0x79AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD34u;
        // 0x79ad38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD3Cu;
        goto label_79ad3c;
    }
    ctx->pc = 0x79AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD34u;
        // 0x79ad38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD3Cu;
label_79ad3c:
    // 0x79ad3c: 0x0  nop
    ctx->pc = 0x79ad3cu;
    // NOP
    ctx->pc = 0x79ad40u;
}
} // namespace gh_r608
