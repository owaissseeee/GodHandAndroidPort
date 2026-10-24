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
// Function: movePlaySeqDel__C21cEventAdditionalLightPC24cEventSeqAdditionalLight
// Address: 0x7ac2e8 - 0x7ac330
void movePlaySeqDel__C21cEventAdditionalLightPC24cEventSeqAdditionalLight_0x7ac2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqDel__C21cEventAdditionalLightPC24cEventSeqAdditionalLight_0x7ac2e8");
#endif

    switch (ctx->pc) {
        case 0x7ac320u: goto label_7ac320;
        default: break;
    }

    ctx->pc = 0x7ac2e8u;

    // 0x7ac2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ac2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ac2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ac2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac2f4: 0x90a6000c  lbu         $a2, 0xC($a1)
    ctx->pc = 0x7ac2f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x7ac2f8: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC2F8u;
    {
        const bool branch_taken_0x7ac2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC2F8u;
        // 0x7ac2fc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac2f8) {
            ctx->pc = 0x7AC314u;
            goto label_7ac314;
        }
    }
    ctx->pc = 0x7AC300u;
    // 0x7ac300: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AC300u;
    {
        const bool branch_taken_0x7ac300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC300u;
        // 0x7ac304: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac300) {
            ctx->pc = 0x7AC324u;
            goto label_7ac324;
        }
    }
    ctx->pc = 0x7AC308u;
    // 0x7ac308: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7ac308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7ac30c: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AC30Cu;
    {
        const bool branch_taken_0x7ac30c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ac30c) {
            ctx->pc = 0x7AC324u;
            goto label_7ac324;
        }
    }
    ctx->pc = 0x7AC314u;
label_7ac314:
    // 0x7ac314: 0x94a50010  lhu         $a1, 0x10($a1)
    ctx->pc = 0x7ac314u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x7ac318: 0xc1eaf98  jal         func_7ABE60
    ctx->pc = 0x7AC318u;
    SET_GPR_U32(ctx, 31, 0x7AC320u);
    ctx->pc = 0x7AC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC318u;
    // 0x7ac31c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ABE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ABE60u, 0x7AC318u, 0x7AC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC320u;
label_7ac320:
    // 0x7ac320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ac324:
    // 0x7ac324: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC324u;
        // 0x7ac328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC32Cu;
    // 0x7ac32c: 0x0  nop
    ctx->pc = 0x7ac32cu;
    // NOP
    ctx->pc = 0x7ac330u;
}
} // namespace gh_event
