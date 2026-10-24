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

// Function: InitObjVtable_27B768
// Address: 0x27b768 - 0x27b7c0
void InitObjVtable_27B768_0x27b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtable_27B768_0x27b768");
#endif

    switch (ctx->pc) {
        case 0x27b77cu: goto label_27b77c;
        default: break;
    }

    ctx->pc = 0x27b768u;

    // 0x27b768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b76c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27b770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b774: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x27B774u;
    SET_GPR_U32(ctx, 31, 0x27B77Cu);
    ctx->pc = 0x27B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B774u;
    // 0x27b778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x27B774u, 0x27B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B77Cu;
label_27b77c:
    // 0x27b77c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27b780: 0x246381a8  addiu       $v1, $v1, -0x7E58
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934952));
    // 0x27b784: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x27b784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x27b788: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x27b788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b78c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x27b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b790: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x27b790u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b794: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x27b794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b798: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x27b798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b79c: 0xfa0015c0  sqc2        $vf0, 0x15C0($s0)
    ctx->pc = 0x27b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27b7a0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27b7a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27b7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7a8: 0x246380e0  addiu       $v1, $v1, -0x7F20
    ctx->pc = 0x27b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934752));
    // 0x27b7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b7b0: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x27b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x27b7b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B8u;
        // 0x27b7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B7C0u;
}
