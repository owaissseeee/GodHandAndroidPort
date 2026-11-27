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
// Function: dpadd
// Address: 0x79cf18 - 0x79cf70
void dpadd_0x79cf18(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x79cf18");
#endif

    if (__builtin_expect(ctx->pc != 0x79cf18u, 0)) {
        switch (ctx->pc) {
            case 0x79cf38u: goto label_79cf38;
            case 0x79cf48u: goto label_79cf48;
            case 0x79cf58u: goto label_79cf58;
            case 0x79cf60u: goto label_79cf60;
            default: break;
        }
    }



    // 0x79cf18: 0x27bdff70  addiu       $sp, $sp, -0x90
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79cf1c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79cf20: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79cf24: 0x27a40060  addiu       $a0, $sp, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79cf28: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79cf2c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79cf30: 0xc1e730e  jal         func_79CC38
    SET_GPR_U32(ctx, 31, 0x79CF38u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF30u;
    // 0x79cf34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79CF30u, 0x79CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79cf38:
    // 0x79cf38: 0x27b00020  addiu       $s0, $sp, 0x20
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79cf3c: 0x27a40068  addiu       $a0, $sp, 0x68
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79cf40: 0xc1e730e  jal         func_79CC38
    SET_GPR_U32(ctx, 31, 0x79CF48u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF40u;
    // 0x79cf44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79CF40u, 0x79CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79cf48:
    // 0x79cf48: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cf4c: 0x27a60040  addiu       $a2, $sp, 0x40
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79cf50: 0xc1e7336  jal         func_79CCD8
    SET_GPR_U32(ctx, 31, 0x79CF58u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF50u;
    // 0x79cf54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CCD8u, 0x79CF50u, 0x79CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79cf58:
    // 0x79cf58: 0xc1e72c2  jal         func_79CB08
    SET_GPR_U32(ctx, 31, 0x79CF60u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF58u;
    // 0x79cf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79CF58u, 0x79CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79cf60:
    // 0x79cf60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79cf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79cf64: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79cf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x79CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CF68u;
        // 0x79cf6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CF70u;
}
} // namespace gh_r501
