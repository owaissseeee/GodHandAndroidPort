#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: dpsub
// Address: 0x79b600 - 0x79b668
void dpsub_0x79b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x79b600");
#endif

    switch (ctx->pc) {
        case 0x79b620u: goto label_79b620;
        case 0x79b630u: goto label_79b630;
        case 0x79b64cu: goto label_79b64c;
        case 0x79b654u: goto label_79b654;
        default: break;
    }

    ctx->pc = 0x79b600u;

    // 0x79b600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b604: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79b608: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79b60c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b610: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79b614: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79b618: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B618u;
    SET_GPR_U32(ctx, 31, 0x79B620u);
    ctx->pc = 0x79B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B618u;
    // 0x79b61c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B618u, 0x79B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B620u;
label_79b620:
    // 0x79b620: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b624: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79b628: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B628u;
    SET_GPR_U32(ctx, 31, 0x79B630u);
    ctx->pc = 0x79B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B628u;
    // 0x79b62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B628u, 0x79B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B630u;
label_79b630:
    // 0x79b630: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x79b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79b634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b638: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x79b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b640: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b644: 0xc1e6cda  jal         func_79B368
    ctx->pc = 0x79B644u;
    SET_GPR_U32(ctx, 31, 0x79B64Cu);
    ctx->pc = 0x79B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B644u;
    // 0x79b648: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B368u, 0x79B644u, 0x79B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B64Cu;
label_79b64c:
    // 0x79b64c: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79B64Cu;
    SET_GPR_U32(ctx, 31, 0x79B654u);
    ctx->pc = 0x79B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B64Cu;
    // 0x79b650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79B64Cu, 0x79B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B654u;
label_79b654:
    // 0x79b654: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79b654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b658: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79b658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B65Cu;
        // 0x79b660: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B664u;
    // 0x79b664: 0x0  nop
    ctx->pc = 0x79b664u;
    // NOP
    ctx->pc = 0x79b668u;
}
} // namespace gh_r505
