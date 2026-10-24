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
// Function: calcNextFrameLoop__9cEventEnv
// Address: 0x7ade58 - 0x7adeb8
void calcNextFrameLoop__9cEventEnv_0x7ade58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrameLoop__9cEventEnv_0x7ade58");
#endif

    switch (ctx->pc) {
        case 0x7ade74u: goto label_7ade74;
        case 0x7ade84u: goto label_7ade84;
        case 0x7ade98u: goto label_7ade98;
        case 0x7adea8u: goto label_7adea8;
        default: break;
    }

    ctx->pc = 0x7ade58u;

    // 0x7ade58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ade58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ade5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ade5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ade60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ade60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ade64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ade64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ade68: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ade68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ade6c: 0xc1ec098  jal         func_7B0260
    ctx->pc = 0x7ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x7ADE74u);
    ctx->pc = 0x7ADE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADE6Cu;
    // 0x7ade70: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0260u, 0x7ADE6Cu, 0x7ADE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADE74u;
label_7ade74:
    // 0x7ade74: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7ADE74u;
    {
        const bool branch_taken_0x7ade74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ade74) {
            ctx->pc = 0x7ADE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADE74u;
            // 0x7ade78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADEACu;
            goto label_7adeac;
        }
    }
    ctx->pc = 0x7ADE7Cu;
    // 0x7ade7c: 0xc1eb7e0  jal         func_7ADF80
    ctx->pc = 0x7ADE7Cu;
    SET_GPR_U32(ctx, 31, 0x7ADE84u);
    ctx->pc = 0x7ADE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADE7Cu;
    // 0x7ade80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADF80u, 0x7ADE7Cu, 0x7ADE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADE84u;
label_7ade84:
    // 0x7ade84: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADE84u;
    {
        const bool branch_taken_0x7ade84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ade84) {
            ctx->pc = 0x7ADE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADE84u;
            // 0x7ade88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADEACu;
            goto label_7adeac;
        }
    }
    ctx->pc = 0x7ADE8Cu;
    // 0x7ade8c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7ade8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ade90: 0xc1eb892  jal         func_7AE248
    ctx->pc = 0x7ADE90u;
    SET_GPR_U32(ctx, 31, 0x7ADE98u);
    ctx->pc = 0x7ADE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADE90u;
    // 0x7ade94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE248u, 0x7ADE90u, 0x7ADE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADE98u;
label_7ade98:
    // 0x7ade98: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ADE98u;
    {
        const bool branch_taken_0x7ade98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ade98) {
            ctx->pc = 0x7ADE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADE98u;
            // 0x7ade9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADEACu;
            goto label_7adeac;
        }
    }
    ctx->pc = 0x7ADEA0u;
    // 0x7adea0: 0xc1eb85a  jal         func_7AE168
    ctx->pc = 0x7ADEA0u;
    SET_GPR_U32(ctx, 31, 0x7ADEA8u);
    ctx->pc = 0x7ADEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADEA0u;
    // 0x7adea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE168u, 0x7ADEA0u, 0x7ADEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADEA8u;
label_7adea8:
    // 0x7adea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7adea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7adeac:
    // 0x7adeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7adeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7adeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADEB0u;
        // 0x7adeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADEB8u;
}
} // namespace gh_event
