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

// Function: Em_construct281638
// Address: 0x281638 - 0x281690
void Em_construct281638_0x281638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_construct281638_0x281638");
#endif

    switch (ctx->pc) {
        case 0x28164cu: goto label_28164c;
        default: break;
    }

    ctx->pc = 0x281638u;

    // 0x281638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28163c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281644: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x281644u;
    SET_GPR_U32(ctx, 31, 0x28164Cu);
    ctx->pc = 0x281648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281644u;
    // 0x281648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x281644u, 0x28164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28164Cu;
label_28164c:
    // 0x28164c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28164cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x281650: 0x24638788  addiu       $v1, $v1, -0x7878
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936456));
    // 0x281654: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x281654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x281658: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x281658u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28165c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x28165cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x281660: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x281660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x281664: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x281664u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x281668: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x281668u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28166c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x281670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281674: 0x246386a0  addiu       $v1, $v1, -0x7960
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936224));
    // 0x281678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28167c: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x28167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x281680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281684: 0x3e00008  jr          $ra
    ctx->pc = 0x281684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281684u;
        // 0x281688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28168Cu;
    // 0x28168c: 0x0  nop
    ctx->pc = 0x28168cu;
    // NOP
    ctx->pc = 0x281690u;
}
