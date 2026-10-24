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

// Function: cEma6_construct
// Address: 0x28b0f0 - 0x28b148
void cEma6_construct_0x28b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma6_construct_0x28b0f0");
#endif

    switch (ctx->pc) {
        case 0x28b104u: goto label_28b104;
        default: break;
    }

    ctx->pc = 0x28b0f0u;

    // 0x28b0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b0f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28b0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b0fc: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x28B0FCu;
    SET_GPR_U32(ctx, 31, 0x28B104u);
    ctx->pc = 0x28B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0FCu;
    // 0x28b100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x28B0FCu, 0x28B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B104u;
label_28b104:
    // 0x28b104: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x28b108: 0x26041510  addiu       $a0, $s0, 0x1510
    ctx->pc = 0x28b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x28b10c: 0x2463a408  addiu       $v1, $v1, -0x5BF8
    ctx->pc = 0x28b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943752));
    // 0x28b110: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x28b110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x28b114: 0xfa001520  sqc2        $vf0, 0x1520($s0)
    ctx->pc = 0x28b114u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28b118: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b11c: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x28b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b120: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x28b120u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28b124: 0xfa001610  sqc2        $vf0, 0x1610($s0)
    ctx->pc = 0x28b124u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28b128: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28b128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x28b12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28b12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b130: 0x24638f30  addiu       $v1, $v1, -0x70D0
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938416));
    // 0x28b134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b138: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x28b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x28b13c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28b13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b140: 0x3e00008  jr          $ra
    ctx->pc = 0x28B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B148u;
}
