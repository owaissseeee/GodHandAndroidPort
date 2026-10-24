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

// Function: EnemyBase_constructAimQuad5
// Address: 0x284a28 - 0x284a90
void EnemyBase_constructAimQuad5_0x284a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyBase_constructAimQuad5_0x284a28");
#endif

    switch (ctx->pc) {
        case 0x284a3cu: goto label_284a3c;
        default: break;
    }

    ctx->pc = 0x284a28u;

    // 0x284a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284a2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x284a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x284a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284a34: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x284A34u;
    SET_GPR_U32(ctx, 31, 0x284A3Cu);
    ctx->pc = 0x284A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A34u;
    // 0x284a38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x284A34u, 0x284A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A3Cu;
label_284a3c:
    // 0x284a3c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x284a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x284a40: 0x26041530  addiu       $a0, $s0, 0x1530
    ctx->pc = 0x284a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5424));
    // 0x284a44: 0x24638ca0  addiu       $v1, $v1, -0x7360
    ctx->pc = 0x284a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937760));
    // 0x284a48: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x284a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x284a4c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x284a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a50: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x284a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x284a54: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x284a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x284a58: 0xfa001570  sqc2        $vf0, 0x1570($s0)
    ctx->pc = 0x284a58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5488), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a5c: 0xfa001580  sqc2        $vf0, 0x1580($s0)
    ctx->pc = 0x284a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5504), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a60: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x284a60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a64: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x284a64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a68: 0xfa0015f0  sqc2        $vf0, 0x15F0($s0)
    ctx->pc = 0x284a68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x284a6c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x284a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x284a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x284a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a74: 0x24638a00  addiu       $v1, $v1, -0x7600
    ctx->pc = 0x284a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937088));
    // 0x284a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284a7c: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x284a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x284a80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x284a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a84: 0x3e00008  jr          $ra
    ctx->pc = 0x284A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A84u;
        // 0x284a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284A8Cu;
    // 0x284a8c: 0x0  nop
    ctx->pc = 0x284a8cu;
    // NOP
    ctx->pc = 0x284a90u;
}
