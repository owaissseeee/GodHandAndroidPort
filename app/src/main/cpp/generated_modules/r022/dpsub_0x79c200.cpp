#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dpsub
// Address: 0x79c200 - 0x79c268
void dpsub_0x79c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x79c200");
#endif

    switch (ctx->pc) {
        case 0x79c220u: goto label_79c220;
        case 0x79c230u: goto label_79c230;
        case 0x79c24cu: goto label_79c24c;
        case 0x79c254u: goto label_79c254;
        default: break;
    }

    ctx->pc = 0x79c200u;

    // 0x79c200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79c204: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79c208: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79c20c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79c210: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79c214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79c218: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C218u;
    SET_GPR_U32(ctx, 31, 0x79C220u);
    ctx->pc = 0x79C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C218u;
    // 0x79c21c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C218u, 0x79C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C220u;
label_79c220:
    // 0x79c220: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79c220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c224: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79c228: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C228u;
    SET_GPR_U32(ctx, 31, 0x79C230u);
    ctx->pc = 0x79C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C228u;
    // 0x79c22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C228u, 0x79C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C230u;
label_79c230:
    // 0x79c230: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x79c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79c234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c238: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x79c238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79c23c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c240: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79c244: 0xc1e6fda  jal         func_79BF68
    ctx->pc = 0x79C244u;
    SET_GPR_U32(ctx, 31, 0x79C24Cu);
    ctx->pc = 0x79C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C244u;
    // 0x79c248: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF68u, 0x79C244u, 0x79C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C24Cu;
label_79c24c:
    // 0x79c24c: 0xc1e6f66  jal         func_79BD98
    ctx->pc = 0x79C24Cu;
    SET_GPR_U32(ctx, 31, 0x79C254u);
    ctx->pc = 0x79C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C24Cu;
    // 0x79c250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD98u, 0x79C24Cu, 0x79C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C254u;
label_79c254:
    // 0x79c254: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c258: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79c258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c25c: 0x3e00008  jr          $ra
    ctx->pc = 0x79C25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C25Cu;
        // 0x79c260: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C264u;
    // 0x79c264: 0x0  nop
    ctx->pc = 0x79c264u;
    // NOP
    ctx->pc = 0x79c268u;
}
} // namespace gh_r022
