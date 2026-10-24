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
// Function: callExtraPlayMoveObj__9cEventEnvP4cObjUc
// Address: 0x7aeb88 - 0x7aebc0
void callExtraPlayMoveObj__9cEventEnvP4cObjUc_0x7aeb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("callExtraPlayMoveObj__9cEventEnvP4cObjUc_0x7aeb88");
#endif

    switch (ctx->pc) {
        case 0x7aeb88u: goto label_7aeb88;
        case 0x7aeb8cu: goto label_7aeb8c;
        case 0x7aeb90u: goto label_7aeb90;
        case 0x7aeb94u: goto label_7aeb94;
        case 0x7aeb98u: goto label_7aeb98;
        case 0x7aeb9cu: goto label_7aeb9c;
        case 0x7aeba0u: goto label_7aeba0;
        case 0x7aeba4u: goto label_7aeba4;
        case 0x7aeba8u: goto label_7aeba8;
        case 0x7aebacu: goto label_7aebac;
        case 0x7aebb0u: goto label_7aebb0;
        case 0x7aebb4u: goto label_7aebb4;
        case 0x7aebb8u: goto label_7aebb8;
        case 0x7aebbcu: goto label_7aebbc;
        default: break;
    }

    ctx->pc = 0x7aeb88u;

label_7aeb88:
    // 0x7aeb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7aeb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7aeb8c:
    // 0x7aeb8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7aeb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7aeb90:
    // 0x7aeb90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aeb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7aeb94:
    // 0x7aeb94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7aeb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7aeb98:
    // 0x7aeb98: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x7aeb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_7aeb9c:
    // 0x7aeb9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7aeba0:
    if (ctx->pc == 0x7AEBA0u) {
        ctx->pc = 0x7AEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB9Cu;
        // 0x7aeba0: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBA4u;
        goto label_7aeba4;
    }
    ctx->pc = 0x7AEB9Cu;
    {
        const bool branch_taken_0x7aeb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB9Cu;
        // 0x7aeba0: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeb9c) {
            ctx->pc = 0x7AEBB0u;
            goto label_7aebb0;
        }
    }
    ctx->pc = 0x7AEBA4u;
label_7aeba4:
    // 0x7aeba4: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x7aeba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7aeba8:
    // 0x7aeba8: 0x60f809  jalr        $v1
label_7aebac:
    if (ctx->pc == 0x7AEBACu) {
        ctx->pc = 0x7AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBA8u;
        // 0x7aebac: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBB0u;
        goto label_7aebb0;
    }
    ctx->pc = 0x7AEBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7AEBB0u);
        ctx->pc = 0x7AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBA8u;
        // 0x7aebac: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEBA8u, 0x7AEBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AEBB0u;
label_7aebb0:
    // 0x7aebb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7aebb4:
    // 0x7aebb4: 0x3e00008  jr          $ra
label_7aebb8:
    if (ctx->pc == 0x7AEBB8u) {
        ctx->pc = 0x7AEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBB4u;
        // 0x7aebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AEBBCu;
        goto label_7aebbc;
    }
    ctx->pc = 0x7AEBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEBB4u;
        // 0x7aebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEBBCu;
label_7aebbc:
    // 0x7aebbc: 0x0  nop
    ctx->pc = 0x7aebbcu;
    // NOP
    ctx->pc = 0x7aebc0u;
}
} // namespace gh_event
