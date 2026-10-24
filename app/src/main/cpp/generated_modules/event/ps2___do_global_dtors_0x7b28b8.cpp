#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: __do_global_dtors
// Address: 0x7b28b8 - 0x7b2910
void ps2___do_global_dtors_0x7b28b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7b28b8");
#endif

    switch (ctx->pc) {
        case 0x7b28b8u: goto label_7b28b8;
        case 0x7b28bcu: goto label_7b28bc;
        case 0x7b28c0u: goto label_7b28c0;
        case 0x7b28c4u: goto label_7b28c4;
        case 0x7b28c8u: goto label_7b28c8;
        case 0x7b28ccu: goto label_7b28cc;
        case 0x7b28d0u: goto label_7b28d0;
        case 0x7b28d4u: goto label_7b28d4;
        case 0x7b28d8u: goto label_7b28d8;
        case 0x7b28dcu: goto label_7b28dc;
        case 0x7b28e0u: goto label_7b28e0;
        case 0x7b28e4u: goto label_7b28e4;
        case 0x7b28e8u: goto label_7b28e8;
        case 0x7b28ecu: goto label_7b28ec;
        case 0x7b28f0u: goto label_7b28f0;
        case 0x7b28f4u: goto label_7b28f4;
        case 0x7b28f8u: goto label_7b28f8;
        case 0x7b28fcu: goto label_7b28fc;
        case 0x7b2900u: goto label_7b2900;
        case 0x7b2904u: goto label_7b2904;
        case 0x7b2908u: goto label_7b2908;
        case 0x7b290cu: goto label_7b290c;
        default: break;
    }

    ctx->pc = 0x7b28b8u;

label_7b28b8:
    // 0x7b28b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7b28b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7b28bc:
    // 0x7b28bc: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
label_7b28c0:
    // 0x7b28c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7b28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7b28c4:
    // 0x7b28c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7b28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7b28c8:
    // 0x7b28c8: 0x8c824b10  lw          $v0, 0x4B10($a0)
    ctx->pc = 0x7b28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19216)));
label_7b28cc:
    // 0x7b28cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7b28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7b28d0:
    // 0x7b28d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7b28d4:
    if (ctx->pc == 0x7B28D4u) {
        ctx->pc = 0x7B28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28D0u;
        // 0x7b28d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B28D8u;
        goto label_7b28d8;
    }
    ctx->pc = 0x7B28D0u;
    {
        const bool branch_taken_0x7b28d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28D0u;
        // 0x7b28d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b28d0) {
            ctx->pc = 0x7B28FCu;
            goto label_7b28fc;
        }
    }
    ctx->pc = 0x7B28D8u;
label_7b28d8:
    // 0x7b28d8: 0x8e024b10  lw          $v0, 0x4B10($s0)
    ctx->pc = 0x7b28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19216)));
label_7b28dc:
    // 0x7b28dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7b28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7b28e0:
    // 0x7b28e0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7b28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7b28e4:
    // 0x7b28e4: 0x60f809  jalr        $v1
label_7b28e8:
    if (ctx->pc == 0x7B28E8u) {
        ctx->pc = 0x7B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28E4u;
        // 0x7b28e8: 0xae024b10  sw          $v0, 0x4B10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 19216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B28ECu;
        goto label_7b28ec;
    }
    ctx->pc = 0x7B28E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7B28ECu);
        ctx->pc = 0x7B28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28E4u;
        // 0x7b28e8: 0xae024b10  sw          $v0, 0x4B10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 19216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B28E4u, 0x7B28ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7B28ECu;
label_7b28ec:
    // 0x7b28ec: 0x8e024b10  lw          $v0, 0x4B10($s0)
    ctx->pc = 0x7b28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19216)));
label_7b28f0:
    // 0x7b28f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7b28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7b28f4:
    // 0x7b28f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7b28f8:
    if (ctx->pc == 0x7B28F8u) {
        ctx->pc = 0x7B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28F4u;
        // 0x7b28f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B28FCu;
        goto label_7b28fc;
    }
    ctx->pc = 0x7B28F4u;
    {
        const bool branch_taken_0x7b28f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B28F4u;
        // 0x7b28f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b28f4) {
            ctx->pc = 0x7B28E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b28e0;
        }
    }
    ctx->pc = 0x7B28FCu;
label_7b28fc:
    // 0x7b28fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7b28fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7b2900:
    // 0x7b2900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7b2900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b2904:
    // 0x7b2904: 0x3e00008  jr          $ra
label_7b2908:
    if (ctx->pc == 0x7B2908u) {
        ctx->pc = 0x7B2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2904u;
        // 0x7b2908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B290Cu;
        goto label_7b290c;
    }
    ctx->pc = 0x7B2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2904u;
        // 0x7b2908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B290Cu;
label_7b290c:
    // 0x7b290c: 0x0  nop
    ctx->pc = 0x7b290cu;
    // NOP
    ctx->pc = 0x7b2910u;
}
} // namespace gh_event
