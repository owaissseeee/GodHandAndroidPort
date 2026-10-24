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

// Function: InitObjectB_1FD3B8
// Address: 0x1fd3b8 - 0x1fd418
void InitObjectB_1FD3B8_0x1fd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectB_1FD3B8_0x1fd3b8");
#endif

    switch (ctx->pc) {
        case 0x1fd404u: goto label_1fd404;
        default: break;
    }

    ctx->pc = 0x1fd3b8u;

    // 0x1fd3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd3bc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1fd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1fd3c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd3c4: 0x2442c4d8  addiu       $v0, $v0, -0x3B28
    ctx->pc = 0x1fd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952152));
    // 0x1fd3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3d0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1fd3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1fd3d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fd3d8: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1fd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fd3dc: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1fd3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fd3e0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1fd3e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd3e8: 0x2442c498  addiu       $v0, $v0, -0x3B68
    ctx->pc = 0x1fd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952088));
    // 0x1fd3ec: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1fd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1fd3f0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fd3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3f8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1fd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1fd3fc: 0xc07f37a  jal         func_1FCDE8
    ctx->pc = 0x1FD3FCu;
    SET_GPR_U32(ctx, 31, 0x1FD404u);
    ctx->pc = 0x1FD400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3FCu;
    // 0x1fd400: 0xa2030049  sb          $v1, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDE8u, 0x1FD3FCu, 0x1FD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD404u;
label_1fd404:
    // 0x1fd404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd40c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd410: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD410u;
        // 0x1fd414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD418u;
}
