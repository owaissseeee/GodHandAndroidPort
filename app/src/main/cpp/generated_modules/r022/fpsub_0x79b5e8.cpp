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
// Function: fpsub
// Address: 0x79b5e8 - 0x79b650
void fpsub_0x79b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpsub_0x79b5e8");
#endif

    switch (ctx->pc) {
        case 0x79b608u: goto label_79b608;
        case 0x79b618u: goto label_79b618;
        case 0x79b634u: goto label_79b634;
        case 0x79b63cu: goto label_79b63c;
        default: break;
    }

    ctx->pc = 0x79b5e8u;

    // 0x79b5e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b5ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79b5f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b5f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79b5f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5fc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79b5fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b600: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B600u;
    SET_GPR_U32(ctx, 31, 0x79B608u);
    ctx->pc = 0x79B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B600u;
    // 0x79b604: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B600u, 0x79B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B608u;
label_79b608:
    // 0x79b608: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b60c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79b610: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B610u;
    SET_GPR_U32(ctx, 31, 0x79B618u);
    ctx->pc = 0x79B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B610u;
    // 0x79b614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B610u, 0x79B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B618u;
label_79b618:
    // 0x79b618: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79b61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b620: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b628: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b62c: 0xc1e6cd6  jal         func_79B358
    ctx->pc = 0x79B62Cu;
    SET_GPR_U32(ctx, 31, 0x79B634u);
    ctx->pc = 0x79B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B62Cu;
    // 0x79b630: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B358u, 0x79B62Cu, 0x79B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B634u;
label_79b634:
    // 0x79b634: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79B634u;
    SET_GPR_U32(ctx, 31, 0x79B63Cu);
    ctx->pc = 0x79B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B634u;
    // 0x79b638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79B634u, 0x79B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B63Cu;
label_79b63c:
    // 0x79b63c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79b63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b640: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b644: 0x3e00008  jr          $ra
    ctx->pc = 0x79B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B644u;
        // 0x79b648: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B64Cu;
    // 0x79b64c: 0x0  nop
    ctx->pc = 0x79b64cu;
    // NOP
    ctx->pc = 0x79b650u;
}
} // namespace gh_r022
