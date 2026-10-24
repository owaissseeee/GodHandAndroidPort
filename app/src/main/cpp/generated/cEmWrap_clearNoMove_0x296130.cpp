#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cEmWrap_clearNoMove
// Address: 0x296130 - 0x296180
void cEmWrap_clearNoMove_0x296130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_clearNoMove_0x296130");
#endif

    switch (ctx->pc) {
        case 0x296144u: goto label_296144;
        case 0x296160u: goto label_296160;
        case 0x296170u: goto label_296170;
        default: break;
    }

    ctx->pc = 0x296130u;

    // 0x296130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29613c: 0xc0a565e  jal         func_295978
    ctx->pc = 0x29613Cu;
    SET_GPR_U32(ctx, 31, 0x296144u);
    ctx->pc = 0x296140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29613Cu;
    // 0x296140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x29613Cu, 0x296144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296144u;
label_296144:
    // 0x296144: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x296144u;
    {
        const bool branch_taken_0x296144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296144) {
            ctx->pc = 0x296148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296144u;
            // 0x296148: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296174u;
            goto label_296174;
        }
    }
    ctx->pc = 0x29614Cu;
    // 0x29614c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296150: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x296150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x296154: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x296154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x296158: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x296158u;
    SET_GPR_U32(ctx, 31, 0x296160u);
    ctx->pc = 0x29615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296158u;
    // 0x29615c: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x296158u, 0x296160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296160u;
label_296160:
    // 0x296160: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x296160u;
    {
        const bool branch_taken_0x296160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296160) {
            ctx->pc = 0x296164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296160u;
            // 0x296164: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296174u;
            goto label_296174;
        }
    }
    ctx->pc = 0x296168u;
    // 0x296168: 0xc09cdbe  jal         func_2736F8
    ctx->pc = 0x296168u;
    SET_GPR_U32(ctx, 31, 0x296170u);
    ctx->pc = 0x29616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296168u;
    // 0x29616c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2736F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2736F8u, 0x296168u, 0x296170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296170u;
label_296170:
    // 0x296170: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296174:
    // 0x296174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296178: 0x3e00008  jr          $ra
    ctx->pc = 0x296178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296178u;
        // 0x29617c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296180u;
}
