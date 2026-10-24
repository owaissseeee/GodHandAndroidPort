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

// Function: EnemyBase_constructAimQuad
// Address: 0x289728 - 0x289788
void EnemyBase_constructAimQuad_0x289728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyBase_constructAimQuad_0x289728");
#endif

    switch (ctx->pc) {
        case 0x28973cu: goto label_28973c;
        default: break;
    }

    ctx->pc = 0x289728u;

    // 0x289728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28972c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289734: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x289734u;
    SET_GPR_U32(ctx, 31, 0x28973Cu);
    ctx->pc = 0x289738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289734u;
    // 0x289738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x289734u, 0x28973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28973Cu;
label_28973c:
    // 0x28973c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x289740: 0x26041530  addiu       $a0, $s0, 0x1530
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5424));
    // 0x289744: 0x24638e20  addiu       $v1, $v1, -0x71E0
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938144));
    // 0x289748: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x289748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x28974c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x28974cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289750: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x289750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289754: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x289754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x289758: 0xfa001570  sqc2        $vf0, 0x1570($s0)
    ctx->pc = 0x289758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5488), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28975c: 0xfa001580  sqc2        $vf0, 0x1580($s0)
    ctx->pc = 0x28975cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5504), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289760: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x289760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289764: 0xfa0015e0  sqc2        $vf0, 0x15E0($s0)
    ctx->pc = 0x289764u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289768: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x289768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x28976c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28976cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289770: 0x24638db0  addiu       $v1, $v1, -0x7250
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938032));
    // 0x289774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289778: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x289778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x28977c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28977cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289780: 0x3e00008  jr          $ra
    ctx->pc = 0x289780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289780u;
        // 0x289784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289788u;
}
