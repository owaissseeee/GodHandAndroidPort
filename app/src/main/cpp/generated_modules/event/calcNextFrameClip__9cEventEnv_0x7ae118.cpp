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
// Function: calcNextFrameClip__9cEventEnv
// Address: 0x7ae118 - 0x7ae168
void calcNextFrameClip__9cEventEnv_0x7ae118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrameClip__9cEventEnv_0x7ae118");
#endif

    switch (ctx->pc) {
        case 0x7ae134u: goto label_7ae134;
        case 0x7ae148u: goto label_7ae148;
        case 0x7ae158u: goto label_7ae158;
        default: break;
    }

    ctx->pc = 0x7ae118u;

    // 0x7ae118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ae120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae128: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ae128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ae12c: 0xc1ec098  jal         func_7B0260
    ctx->pc = 0x7AE12Cu;
    SET_GPR_U32(ctx, 31, 0x7AE134u);
    ctx->pc = 0x7AE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE12Cu;
    // 0x7ae130: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0260u, 0x7AE12Cu, 0x7AE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE134u;
label_7ae134:
    // 0x7ae134: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AE134u;
    {
        const bool branch_taken_0x7ae134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ae134) {
            ctx->pc = 0x7AE138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE134u;
            // 0x7ae138: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE15Cu;
            goto label_7ae15c;
        }
    }
    ctx->pc = 0x7AE13Cu;
    // 0x7ae13c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7ae13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ae140: 0xc1eb892  jal         func_7AE248
    ctx->pc = 0x7AE140u;
    SET_GPR_U32(ctx, 31, 0x7AE148u);
    ctx->pc = 0x7AE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE140u;
    // 0x7ae144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE248u, 0x7AE140u, 0x7AE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE148u;
label_7ae148:
    // 0x7ae148: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE148u;
    {
        const bool branch_taken_0x7ae148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae148) {
            ctx->pc = 0x7AE14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE148u;
            // 0x7ae14c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE15Cu;
            goto label_7ae15c;
        }
    }
    ctx->pc = 0x7AE150u;
    // 0x7ae150: 0xc1eb85a  jal         func_7AE168
    ctx->pc = 0x7AE150u;
    SET_GPR_U32(ctx, 31, 0x7AE158u);
    ctx->pc = 0x7AE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE150u;
    // 0x7ae154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE168u, 0x7AE150u, 0x7AE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE158u;
label_7ae158:
    // 0x7ae158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae15c:
    // 0x7ae15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae160: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE160u;
        // 0x7ae164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE168u;
}
} // namespace gh_event
