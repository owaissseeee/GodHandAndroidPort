#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: dpsub
// Address: 0x79cf70 - 0x79cfd8
void dpsub_0x79cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x79cf70");
#endif

    switch (ctx->pc) {
        case 0x79cf90u: goto label_79cf90;
        case 0x79cfa0u: goto label_79cfa0;
        case 0x79cfbcu: goto label_79cfbc;
        case 0x79cfc4u: goto label_79cfc4;
        default: break;
    }

    ctx->pc = 0x79cf70u;

    // 0x79cf70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79cf74: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79cf78: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79cf7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79cf80: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79cf84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79cf88: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79CF88u;
    SET_GPR_U32(ctx, 31, 0x79CF90u);
    ctx->pc = 0x79CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF88u;
    // 0x79cf8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79CF88u, 0x79CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CF90u;
label_79cf90:
    // 0x79cf90: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79cf94: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79cf98: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79CF98u;
    SET_GPR_U32(ctx, 31, 0x79CFA0u);
    ctx->pc = 0x79CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF98u;
    // 0x79cf9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79CF98u, 0x79CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CFA0u;
label_79cfa0:
    // 0x79cfa0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x79cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79cfa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79cfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cfa8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x79cfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79cfac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cfb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79cfb4: 0xc1e7336  jal         func_79CCD8
    ctx->pc = 0x79CFB4u;
    SET_GPR_U32(ctx, 31, 0x79CFBCu);
    ctx->pc = 0x79CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CFB4u;
    // 0x79cfb8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CCD8u, 0x79CFB4u, 0x79CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CFBCu;
label_79cfbc:
    // 0x79cfbc: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79CFBCu;
    SET_GPR_U32(ctx, 31, 0x79CFC4u);
    ctx->pc = 0x79CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CFBCu;
    // 0x79cfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79CFBCu, 0x79CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CFC4u;
label_79cfc4:
    // 0x79cfc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79cfc8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79cfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79cfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x79CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CFCCu;
        // 0x79cfd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CFD4u;
    // 0x79cfd4: 0x0  nop
    ctx->pc = 0x79cfd4u;
    // NOP
    ctx->pc = 0x79cfd8u;
}
} // namespace gh_r501
