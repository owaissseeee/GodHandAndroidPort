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

// Function: ResetObjAndReleaseIdsB
// Address: 0x1674c8 - 0x167518
void ResetObjAndReleaseIdsB_0x1674c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjAndReleaseIdsB_0x1674c8");
#endif

    switch (ctx->pc) {
        case 0x1674dcu: goto label_1674dc;
        case 0x1674e4u: goto label_1674e4;
        case 0x1674ecu: goto label_1674ec;
        case 0x167508u: goto label_167508;
        default: break;
    }

    ctx->pc = 0x1674c8u;

    // 0x1674c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1674c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1674cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1674ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1674d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1674d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1674d4: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x1674D4u;
    SET_GPR_U32(ctx, 31, 0x1674DCu);
    ctx->pc = 0x1674D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674D4u;
    // 0x1674d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x1674D4u, 0x1674DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674DCu;
label_1674dc:
    // 0x1674dc: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1674DCu;
    SET_GPR_U32(ctx, 31, 0x1674E4u);
    ctx->pc = 0x1674E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674DCu;
    // 0x1674e0: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1674DCu, 0x1674E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674E4u;
label_1674e4:
    // 0x1674e4: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1674E4u;
    SET_GPR_U32(ctx, 31, 0x1674ECu);
    ctx->pc = 0x1674E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674E4u;
    // 0x1674e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1674E4u, 0x1674ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674ECu;
label_1674ec:
    // 0x1674ec: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x1674ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1674f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674f4: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x1674f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1674f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1674f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1674fc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1674fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x167500: 0xc058564  jal         func_161590
    ctx->pc = 0x167500u;
    SET_GPR_U32(ctx, 31, 0x167508u);
    ctx->pc = 0x167504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167500u;
    // 0x167504: 0xac600044  sw          $zero, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x167500u, 0x167508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167508u;
label_167508:
    // 0x167508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16750c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16750cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167510: 0x3e00008  jr          $ra
    ctx->pc = 0x167510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167510u;
        // 0x167514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167518u;
}
