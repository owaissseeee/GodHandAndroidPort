#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Main__7cMcBoot
// Address: 0x7c0300 - 0x7c0368
void Main__7cMcBoot_0x7c0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__7cMcBoot_0x7c0300");
#endif

    switch (ctx->pc) {
        case 0x7c0318u: goto label_7c0318;
        case 0x7c0328u: goto label_7c0328;
        case 0x7c0330u: goto label_7c0330;
        case 0x7c033cu: goto label_7c033c;
        case 0x7c0350u: goto label_7c0350;
        default: break;
    }

    ctx->pc = 0x7c0300u;

    // 0x7c0300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c0300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c0304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c0304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c0308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c0308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c030c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c0310: 0xc1f0060  jal         func_7C0180
    ctx->pc = 0x7C0310u;
    SET_GPR_U32(ctx, 31, 0x7C0318u);
    ctx->pc = 0x7C0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0310u;
    // 0x7c0314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0180u, 0x7C0310u, 0x7C0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0318u;
label_7c0318:
    // 0x7c0318: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c0318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c031c: 0x90621500  lbu         $v0, 0x1500($v1)
    ctx->pc = 0x7c031cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7D1500u));
    // 0x7c0320: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C0320u;
    {
        const bool branch_taken_0x7c0320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0320u;
        // 0x7c0324: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0320) {
            ctx->pc = 0x7C0348u;
            goto label_7c0348;
        }
    }
    ctx->pc = 0x7C0328u;
label_7c0328:
    // 0x7c0328: 0xc1f00da  jal         func_7C0368
    ctx->pc = 0x7C0328u;
    SET_GPR_U32(ctx, 31, 0x7C0330u);
    ctx->pc = 0x7C032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0328u;
    // 0x7c032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0368u, 0x7C0328u, 0x7C0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0330u;
label_7c0330:
    // 0x7c0330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c0330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0334: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C0334u;
    SET_GPR_U32(ctx, 31, 0x7C033Cu);
    ctx->pc = 0x7C0338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0334u;
    // 0x7c0338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C0334u, 0x7C033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C033Cu;
label_7c033c:
    // 0x7c033c: 0x92221500  lbu         $v0, 0x1500($s1)
    ctx->pc = 0x7c033cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5376)));
    // 0x7c0340: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7C0340u;
    {
        const bool branch_taken_0x7c0340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0340) {
            ctx->pc = 0x7C0328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0328;
        }
    }
    ctx->pc = 0x7C0348u;
label_7c0348:
    // 0x7c0348: 0xc1f0070  jal         func_7C01C0
    ctx->pc = 0x7C0348u;
    SET_GPR_U32(ctx, 31, 0x7C0350u);
    ctx->pc = 0x7C034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0348u;
    // 0x7c034c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C01C0u, 0x7C0348u, 0x7C0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0350u;
label_7c0350:
    // 0x7c0350: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c0350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c0354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c0354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c0358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c0358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c035c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C035Cu;
        // 0x7c0360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0364u;
    // 0x7c0364: 0x0  nop
    ctx->pc = 0x7c0364u;
    // NOP
    ctx->pc = 0x7c0368u;
}
} // namespace gh_mcport
