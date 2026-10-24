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
// Function: initPlay__12cEventFilter
// Address: 0x7af0c0 - 0x7af150
void initPlay__12cEventFilter_0x7af0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__12cEventFilter_0x7af0c0");
#endif

    switch (ctx->pc) {
        case 0x7af0dcu: goto label_7af0dc;
        case 0x7af0ecu: goto label_7af0ec;
        case 0x7af0fcu: goto label_7af0fc;
        default: break;
    }

    ctx->pc = 0x7af0c0u;

    // 0x7af0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7af0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7af0c4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7af0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7af0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7af0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7af0cc: 0x24a54e88  addiu       $a1, $a1, 0x4E88
    ctx->pc = 0x7af0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20104));
    // 0x7af0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7af0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7af0d4: 0xc1ed0b4  jal         func_7B42D0
    ctx->pc = 0x7AF0D4u;
    SET_GPR_U32(ctx, 31, 0x7AF0DCu);
    ctx->pc = 0x7AF0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF0D4u;
    // 0x7af0d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B42D0u, 0x7AF0D4u, 0x7AF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF0DCu;
label_7af0dc:
    // 0x7af0dc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x7af0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x7af0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7af0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af0e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7AF0E4u;
    SET_GPR_U32(ctx, 31, 0x7AF0ECu);
    ctx->pc = 0x7AF0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF0E4u;
    // 0x7af0e8: 0x240602e8  addiu       $a2, $zero, 0x2E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7AF0E4u, 0x7AF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF0ECu;
label_7af0ec:
    // 0x7af0ec: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x7af0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x7af0f0: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x7af0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x7af0f4: 0x2463acc8  addiu       $v1, $v1, -0x5338
    ctx->pc = 0x7af0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945992));
    // 0x7af0f8: 0x246202c0  addiu       $v0, $v1, 0x2C0
    ctx->pc = 0x7af0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_7af0fc:
    // 0x7af0fc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x7af0fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7af100: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x7af100u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7af104: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x7af104u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7af108: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x7af108u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7af10c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x7af10cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x7af110: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x7af110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x7af114: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x7af114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x7af118: 0xfe070018  sd          $a3, 0x18($s0)
    ctx->pc = 0x7af118u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 7));
    // 0x7af11c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7af11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7af120: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF120u;
    {
        const bool branch_taken_0x7af120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF120u;
        // 0x7af124: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af120) {
            ctx->pc = 0x7AF0FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af0fc;
        }
    }
    ctx->pc = 0x7AF128u;
    // 0x7af128: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x7af128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7af12c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x7af12cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7af130: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x7af130u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7af134: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x7af134u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x7af138: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x7af138u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x7af13c: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x7af13cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x7af140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7af140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7af144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7af144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7af148: 0x3e00008  jr          $ra
    ctx->pc = 0x7AF148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF148u;
        // 0x7af14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AF148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AF150u;
}
} // namespace gh_event
