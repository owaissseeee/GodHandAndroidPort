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
// Function: __do_global_dtors
// Address: 0x79a9e0 - 0x79aa38
void ps2___do_global_dtors_0x79a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a9e0");
#endif

    switch (ctx->pc) {
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        default: break;
    }

    ctx->pc = 0x79a9e0u;

label_79a9e0:
    // 0x79a9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a9e4:
    // 0x79a9e4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a9e8:
    // 0x79a9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a9ec:
    // 0x79a9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a9f0:
    // 0x79a9f0: 0x8c82ac00  lw          $v0, -0x5400($a0)
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945792)));
label_79a9f4:
    // 0x79a9f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a9f8:
    // 0x79a9f8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a9fc:
    if (ctx->pc == 0x79A9FCu) {
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA00u;
        goto label_79aa00;
    }
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79AA24u;
            goto label_79aa24;
        }
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x8e02ac00  lw          $v0, -0x5400($s0)
    ctx->pc = 0x79aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945792)));
label_79aa04:
    // 0x79aa04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79aa08:
    // 0x79aa08: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79aa0c:
    // 0x79aa0c: 0x60f809  jalr        $v1
label_79aa10:
    if (ctx->pc == 0x79AA10u) {
        ctx->pc = 0x79AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA0Cu;
        // 0x79aa10: 0xae02ac00  sw          $v0, -0x5400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA14u;
        goto label_79aa14;
    }
    ctx->pc = 0x79AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79AA14u);
        ctx->pc = 0x79AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA0Cu;
        // 0x79aa10: 0xae02ac00  sw          $v0, -0x5400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA0Cu, 0x79AA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AA14u;
label_79aa14:
    // 0x79aa14: 0x8e02ac00  lw          $v0, -0x5400($s0)
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945792)));
label_79aa18:
    // 0x79aa18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aa1c:
    // 0x79aa1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79aa20:
    if (ctx->pc == 0x79AA20u) {
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA24u;
        goto label_79aa24;
    }
    ctx->pc = 0x79AA1Cu;
    {
        const bool branch_taken_0x79aa1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa1c) {
            ctx->pc = 0x79AA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa08;
        }
    }
    ctx->pc = 0x79AA24u;
label_79aa24:
    // 0x79aa24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79aa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79aa28:
    // 0x79aa28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79aa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79aa2c:
    // 0x79aa2c: 0x3e00008  jr          $ra
label_79aa30:
    if (ctx->pc == 0x79AA30u) {
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA34u;
        goto label_79aa34;
    }
    ctx->pc = 0x79AA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0x0  nop
    ctx->pc = 0x79aa34u;
    // NOP
    ctx->pc = 0x79aa38u;
}
} // namespace gh_r101
