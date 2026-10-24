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

// Function: cScenarioCursor_reinit
// Address: 0x2bf3d0 - 0x2bf420
void cScenarioCursor_reinit_0x2bf3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenarioCursor_reinit_0x2bf3d0");
#endif

    switch (ctx->pc) {
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3ecu: goto label_2bf3ec;
        case 0x2bf3f8u: goto label_2bf3f8;
        default: break;
    }

    ctx->pc = 0x2bf3d0u;

    // 0x2bf3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf3d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf3dc: 0xc0afdc2  jal         func_2BF708
    ctx->pc = 0x2BF3DCu;
    SET_GPR_U32(ctx, 31, 0x2BF3E4u);
    ctx->pc = 0x2BF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3DCu;
    // 0x2bf3e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF708u, 0x2BF3DCu, 0x2BF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3E4u;
label_2bf3e4:
    // 0x2bf3e4: 0xc0afde4  jal         func_2BF790
    ctx->pc = 0x2BF3E4u;
    SET_GPR_U32(ctx, 31, 0x2BF3ECu);
    ctx->pc = 0x2BF3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3E4u;
    // 0x2bf3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF790u, 0x2BF3E4u, 0x2BF3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3ECu;
label_2bf3ec:
    // 0x2bf3ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2bf3f0: 0xc0b0282  jal         func_2C0A08
    ctx->pc = 0x2BF3F0u;
    SET_GPR_U32(ctx, 31, 0x2BF3F8u);
    ctx->pc = 0x2BF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3F0u;
    // 0x2bf3f4: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0A08u, 0x2BF3F0u, 0x2BF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3F8u;
label_2bf3f8:
    // 0x2bf3f8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2bf3f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf400: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2bf400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf404: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2bf404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf408: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2bf408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf40c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2bf40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf418: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF418u;
        // 0x2bf41c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF420u;
}
