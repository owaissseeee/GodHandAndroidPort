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

// Function: func_0017D3D8
// Address: 0x17d3d8 - 0x17d460
void func_0017D3D8_0x17d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D3D8_0x17d3d8");
#endif

    switch (ctx->pc) {
        case 0x17d400u: goto label_17d400;
        case 0x17d410u: goto label_17d410;
        case 0x17d430u: goto label_17d430;
        default: break;
    }

    ctx->pc = 0x17d3d8u;

    // 0x17d3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d3dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17d3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17d3e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d3ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17d3f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d3f8: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x17D3F8u;
    SET_GPR_U32(ctx, 31, 0x17D400u);
    ctx->pc = 0x17D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3F8u;
    // 0x17d3fc: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x17D3F8u, 0x17D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D400u;
label_17d400:
    // 0x17d400: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d404: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17d408: 0x24421e38  addiu       $v0, $v0, 0x1E38
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7736));
    // 0x17d40c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x17d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_17d410:
    // 0x17d410: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x17d410u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d414: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x17d414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d418: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x17d418u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d41c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x17d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d420: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x17d420u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d428: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17D428u;
    SET_GPR_U32(ctx, 31, 0x17D430u);
    ctx->pc = 0x17D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D428u;
    // 0x17d42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17D428u, 0x17D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D430u;
label_17d430:
    // 0x17d430: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17d434: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17D434u;
    {
        const bool branch_taken_0x17d434 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x17D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D434u;
        // 0x17d438: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d434) {
            ctx->pc = 0x17D410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d410;
        }
    }
    ctx->pc = 0x17D43Cu;
    // 0x17d43c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17d43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d440: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17d440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17d444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d44c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17d44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d454: 0x3e00008  jr          $ra
    ctx->pc = 0x17D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D454u;
        // 0x17d458: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D45Cu;
    // 0x17d45c: 0x0  nop
    ctx->pc = 0x17d45cu;
    // NOP
    ctx->pc = 0x17d460u;
}
