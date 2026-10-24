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

// Function: func_002717D0
// Address: 0x2717d0 - 0x271810
void func_002717D0_0x2717d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002717D0_0x2717d0");
#endif

    switch (ctx->pc) {
        case 0x2717e4u: goto label_2717e4;
        case 0x271804u: goto label_271804;
        default: break;
    }

    ctx->pc = 0x2717d0u;

    // 0x2717d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2717d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2717d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2717d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2717d8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2717d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2717dc: 0xc09c546  jal         func_271518
    ctx->pc = 0x2717DCu;
    SET_GPR_U32(ctx, 31, 0x2717E4u);
    ctx->pc = 0x2717E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717DCu;
    // 0x2717e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271518u, 0x2717DCu, 0x2717E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717E4u;
label_2717e4:
    // 0x2717e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2717e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2717e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2717e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2717ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2717ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2717f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2717f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2717f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717f8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2717f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717fc: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x2717FCu;
    SET_GPR_U32(ctx, 31, 0x271804u);
    ctx->pc = 0x271800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717FCu;
    // 0x271800: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x2717FCu, 0x271804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271804u;
label_271804:
    // 0x271804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271808: 0x3e00008  jr          $ra
    ctx->pc = 0x271808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271808u;
        // 0x27180c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271810u;
}
