#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: Trig5Task__5cR507
// Address: 0x799ca0 - 0x799d70
void Trig5Task__5cR507_0x799ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig5Task__5cR507_0x799ca0");
#endif

    switch (ctx->pc) {
        case 0x799cc8u: goto label_799cc8;
        case 0x799cd4u: goto label_799cd4;
        case 0x799ce4u: goto label_799ce4;
        case 0x799d04u: goto label_799d04;
        case 0x799d28u: goto label_799d28;
        case 0x799d30u: goto label_799d30;
        case 0x799d48u: goto label_799d48;
        case 0x799d54u: goto label_799d54;
        default: break;
    }

    ctx->pc = 0x799ca0u;

    // 0x799ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799ca4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799ca8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799cac: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799cb4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799cb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799cbc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799CC0u;
    {
        const bool branch_taken_0x799cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC0u;
        // 0x799cc4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cc0) {
            ctx->pc = 0x799CD4u;
            goto label_799cd4;
        }
    }
    ctx->pc = 0x799CC8u;
label_799cc8:
    // 0x799cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ccc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799CCCu;
    SET_GPR_U32(ctx, 31, 0x799CD4u);
    ctx->pc = 0x799CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CCCu;
    // 0x799cd0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799CCCu, 0x799CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD4u;
label_799cd4:
    // 0x799cd4: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799cd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799cdc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ce8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799CE8u;
    {
        const bool branch_taken_0x799ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE8u;
        // 0x799cec: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ce8) {
            ctx->pc = 0x799CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cc8;
        }
    }
    ctx->pc = 0x799CF0u;
    // 0x799cf0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799cf4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799cf8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799cfc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0xa3a30010  sb          $v1, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799d08: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799d0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799d10: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799d18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799d1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d20: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799D28u;
    SET_GPR_U32(ctx, 31, 0x799D30u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799D28u, 0x799D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D30u;
label_799d30:
    // 0x799d30: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799d3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d40: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d4c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D4Cu;
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D4Cu, 0x799D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D54u;
label_799d54:
    // 0x799d54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x799d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799d68: 0x3e00008  jr          $ra
    ctx->pc = 0x799D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D68u;
        // 0x799d6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D70u;
}
} // namespace gh_r507
