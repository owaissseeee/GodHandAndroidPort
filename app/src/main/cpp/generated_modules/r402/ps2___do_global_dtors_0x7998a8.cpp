#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: __do_global_dtors
// Address: 0x7998a8 - 0x799900
void ps2___do_global_dtors_0x7998a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7998a8");
#endif

    switch (ctx->pc) {
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        default: break;
    }

    ctx->pc = 0x7998a8u;

label_7998a8:
    // 0x7998a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7998ac:
    // 0x7998ac: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7998b0:
    // 0x7998b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7998b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7998b4:
    // 0x7998b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7998b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7998b8:
    // 0x7998b8: 0x8c829b00  lw          $v0, -0x6500($a0)
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941440)));
label_7998bc:
    // 0x7998bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7998c0:
    // 0x7998c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7998c4:
    if (ctx->pc == 0x7998C4u) {
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C8u;
        goto label_7998c8;
    }
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x7998ECu;
            goto label_7998ec;
        }
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x8e029b00  lw          $v0, -0x6500($s0)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
label_7998cc:
    // 0x7998cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7998d0:
    // 0x7998d0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7998d4:
    // 0x7998d4: 0x60f809  jalr        $v1
label_7998d8:
    if (ctx->pc == 0x7998D8u) {
        ctx->pc = 0x7998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D4u;
        // 0x7998d8: 0xae029b00  sw          $v0, -0x6500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998DCu;
        goto label_7998dc;
    }
    ctx->pc = 0x7998D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7998DCu);
        ctx->pc = 0x7998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D4u;
        // 0x7998d8: 0xae029b00  sw          $v0, -0x6500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998D4u, 0x7998DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7998DCu;
label_7998dc:
    // 0x7998dc: 0x8e029b00  lw          $v0, -0x6500($s0)
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
label_7998e0:
    // 0x7998e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7998e4:
    // 0x7998e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7998e8:
    if (ctx->pc == 0x7998E8u) {
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ECu;
        goto label_7998ec;
    }
    ctx->pc = 0x7998E4u;
    {
        const bool branch_taken_0x7998e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e4) {
            ctx->pc = 0x7998D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998d0;
        }
    }
    ctx->pc = 0x7998ECu;
label_7998ec:
    // 0x7998ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7998f0:
    // 0x7998f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7998f4:
    // 0x7998f4: 0x3e00008  jr          $ra
label_7998f8:
    if (ctx->pc == 0x7998F8u) {
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998FCu;
        goto label_7998fc;
    }
    ctx->pc = 0x7998F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x0  nop
    ctx->pc = 0x7998fcu;
    // NOP
    ctx->pc = 0x799900u;
}
} // namespace gh_r402
