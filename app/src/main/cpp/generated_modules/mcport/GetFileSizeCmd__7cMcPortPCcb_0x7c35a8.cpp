#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetFileSizeCmd__7cMcPortPCcb
// Address: 0x7c35a8 - 0x7c3608
void GetFileSizeCmd__7cMcPortPCcb_0x7c35a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFileSizeCmd__7cMcPortPCcb_0x7c35a8");
#endif

    switch (ctx->pc) {
        case 0x7c35d8u: goto label_7c35d8;
        case 0x7c35f0u: goto label_7c35f0;
        default: break;
    }

    ctx->pc = 0x7c35a8u;

    // 0x7c35a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c35a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c35ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x7c35acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c35b4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c35b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c35b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c35bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c35bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7c35c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c35c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7c35c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35cc: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x7c35ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7c35d0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C35D0u;
    SET_GPR_U32(ctx, 31, 0x7C35D8u);
    ctx->pc = 0x7C35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C35D0u;
    // 0x7c35d4: 0x24a50b58  addiu       $a1, $a1, 0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C35D0u, 0x7C35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C35D8u;
label_7c35d8:
    // 0x7c35d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35dc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x7c35dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c35e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c35e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c35e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c35e8: 0xc1f0d28  jal         func_7C34A0
    ctx->pc = 0x7C35E8u;
    SET_GPR_U32(ctx, 31, 0x7C35F0u);
    ctx->pc = 0x7C35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C35E8u;
    // 0x7c35ec: 0x24870040  addiu       $a3, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C34A0u, 0x7C35E8u, 0x7C35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C35F0u;
label_7c35f0:
    // 0x7c35f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c35f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c35f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c35f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c35f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c35f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c35fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C35FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C35FCu;
        // 0x7c3600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C35FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3604u;
    // 0x7c3604: 0x0  nop
    ctx->pc = 0x7c3604u;
    // NOP
    ctx->pc = 0x7c3608u;
}
} // namespace gh_mcport
