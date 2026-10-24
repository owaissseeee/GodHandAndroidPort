#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: SetRavelBrosMessage__5cR506RC4cVec
// Address: 0x7999d8 - 0x799a68
void SetRavelBrosMessage__5cR506RC4cVec_0x7999d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRavelBrosMessage__5cR506RC4cVec_0x7999d8");
#endif

    switch (ctx->pc) {
        case 0x799a10u: goto label_799a10;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a50u: goto label_799a50;
        default: break;
    }

    ctx->pc = 0x7999d8u;

    // 0x7999d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7999dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7999dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7999e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7999e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7999e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7999e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7999e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7999ec: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x7999ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7999f0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7999f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7999f4: 0x26300138  addiu       $s0, $s1, 0x138
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x7999f8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7999fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a08: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799a14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a24: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x24021005  addiu       $v0, $zero, 0x1005
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x799a30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799a34: 0xa6220196  sh          $v0, 0x196($s1)
    ctx->pc = 0x799a34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 406), (uint16_t)GPR_U32(ctx, 2));
    // 0x799a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a3c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799a54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x799A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A64u;
    // 0x799a64: 0x0  nop
    ctx->pc = 0x799a64u;
    // NOP
    ctx->pc = 0x799a68u;
}
} // namespace gh_r506
