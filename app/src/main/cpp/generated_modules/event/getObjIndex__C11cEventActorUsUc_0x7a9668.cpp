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
// Function: getObjIndex__C11cEventActorUsUc
// Address: 0x7a9668 - 0x7a96c0
void getObjIndex__C11cEventActorUsUc_0x7a9668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getObjIndex__C11cEventActorUsUc_0x7a9668");
#endif

    switch (ctx->pc) {
        case 0x7a9688u: goto label_7a9688;
        default: break;
    }

    ctx->pc = 0x7a9668u;

    // 0x7a9668: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a966c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x7a966cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7a9670: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7a9670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7a9674: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A9674u;
    {
        const bool branch_taken_0x7a9674 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9674u;
        // 0x7a9678: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9674) {
            ctx->pc = 0x7A96B8u;
            goto label_7a96b8;
        }
    }
    ctx->pc = 0x7A967Cu;
    // 0x7a967c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x7a967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a9680: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7a9680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9684: 0x0  nop
    ctx->pc = 0x7a9684u;
    // NOP
label_7a9688:
    // 0x7a9688: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a9688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a968c: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7A968Cu;
    {
        const bool branch_taken_0x7a968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x7a968c) {
            ctx->pc = 0x7A9690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A968Cu;
            // 0x7a9690: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A96ACu;
            goto label_7a96ac;
        }
    }
    ctx->pc = 0x7A9694u;
    // 0x7a9694: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x7a9694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7a9698: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A9698u;
    {
        const bool branch_taken_0x7a9698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x7a9698) {
            ctx->pc = 0x7A969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9698u;
            // 0x7a969c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A96ACu;
            goto label_7a96ac;
        }
    }
    ctx->pc = 0x7A96A0u;
    // 0x7a96a0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x7a96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x7a96a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7A96A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96A4u;
        // 0x7a96a8: 0x21603  sra         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A96A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A96ACu;
label_7a96ac:
    // 0x7a96ac: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x7a96acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x7a96b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7A96B0u;
    {
        const bool branch_taken_0x7a96b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96B0u;
        // 0x7a96b4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a96b0) {
            ctx->pc = 0x7A9688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9688;
        }
    }
    ctx->pc = 0x7A96B8u;
label_7a96b8:
    // 0x7a96b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A96B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96B8u;
        // 0x7a96bc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A96B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A96C0u;
}
} // namespace gh_event
