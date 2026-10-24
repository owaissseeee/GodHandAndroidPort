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
// Function: fpsub
// Address: 0x79a9e8 - 0x79aa50
void fpsub_0x79a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpsub_0x79a9e8");
#endif

    switch (ctx->pc) {
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa3cu: goto label_79aa3c;
        default: break;
    }

    ctx->pc = 0x79a9e8u;

    // 0x79a9e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a9ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79a9f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a9f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79a9f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79a9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9fc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79a9fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79aa00: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AA00u;
    SET_GPR_U32(ctx, 31, 0x79AA08u);
    ctx->pc = 0x79AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA00u;
    // 0x79aa04: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AA00u, 0x79AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA08u;
label_79aa08:
    // 0x79aa08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aa0c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79aa10: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AA10u;
    SET_GPR_U32(ctx, 31, 0x79AA18u);
    ctx->pc = 0x79AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA10u;
    // 0x79aa14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AA10u, 0x79AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA18u;
label_79aa18:
    // 0x79aa18: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79aa1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79aa24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79aa2c: 0xc1e69d6  jal         func_79A758
    ctx->pc = 0x79AA2Cu;
    SET_GPR_U32(ctx, 31, 0x79AA34u);
    ctx->pc = 0x79AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA2Cu;
    // 0x79aa30: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A758u, 0x79AA2Cu, 0x79AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79AA34u;
    SET_GPR_U32(ctx, 31, 0x79AA3Cu);
    ctx->pc = 0x79AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA34u;
    // 0x79aa38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79AA34u, 0x79AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aa40: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA44u;
        // 0x79aa48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA4Cu;
    // 0x79aa4c: 0x0  nop
    ctx->pc = 0x79aa4cu;
    // NOP
    ctx->pc = 0x79aa50u;
}
} // namespace gh_r505
