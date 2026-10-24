#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: R700Move__Fv
// Address: 0x7999d0 - 0x799a90
void R700Move__Fv_0x7999d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R700Move__Fv_0x7999d0");
#endif

    switch (ctx->pc) {
        case 0x799a04u: goto label_799a04;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a50u: goto label_799a50;
        case 0x799a64u: goto label_799a64;
        default: break;
    }

    ctx->pc = 0x7999d0u;

    // 0x7999d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7999d4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7999d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7999d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7999dc: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x7999e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7999e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7999e4: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x7999e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7999e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7999ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x799A78u;
            goto label_799a78;
        }
    }
    ctx->pc = 0x7999F4u;
    // 0x7999f4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7999f8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7999fc: 0xc0a5328  jal         func_294CA0
    ctx->pc = 0x7999FCu;
    SET_GPR_U32(ctx, 31, 0x799A04u);
    ctx->pc = 0x799A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999FCu;
    // 0x799a00: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x7999FCu, 0x799A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A04u;
label_799a04:
    // 0x799a04: 0xc1e6d18  jal         func_79B460
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x79B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B460u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799a10: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799a14: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799a18: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x799a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a2c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799a30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799a34: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799a40: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799a44: 0x24a59a90  addiu       $a1, $a1, -0x6570
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    // 0x799a48: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799a54: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799a58: 0x24a59ce8  addiu       $a1, $a1, -0x6318
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941928));
    // 0x799a5c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799A5Cu;
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->pc = 0x799A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799A5Cu, 0x799A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x8e237a8c  lw          $v1, 0x7A8C($s1)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x799a68: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x799a6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799a70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799a74: 0xae237a8c  sw          $v1, 0x7A8C($s1)
    ctx->pc = 0x799a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 3));
label_799a78:
    // 0x799a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a84: 0x3e00008  jr          $ra
    ctx->pc = 0x799A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A84u;
        // 0x799a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A8Cu;
    // 0x799a8c: 0x0  nop
    ctx->pc = 0x799a8cu;
    // NOP
    ctx->pc = 0x799a90u;
}
} // namespace gh_r700
