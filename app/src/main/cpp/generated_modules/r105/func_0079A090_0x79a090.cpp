#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_0079A090
// Address: 0x79a090 - 0x79a178
void func_0079A090_0x79a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A090_0x79a090");
#endif

    switch (ctx->pc) {
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a130u: goto label_79a130;
        case 0x79a138u: goto label_79a138;
        case 0x79a150u: goto label_79a150;
        case 0x79a15cu: goto label_79a15c;
        default: break;
    }

    ctx->pc = 0x79a090u;

    // 0x79a090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a098: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a09c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a0a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a0a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a0a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a0ac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x79a0acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x79a0b0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a0b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0B4u;
    SET_GPR_U32(ctx, 31, 0x79A0BCu);
    ctx->pc = 0x79A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B4u;
    // 0x79a0b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0B4u, 0x79A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0BCu;
label_79a0bc:
    // 0x79a0bc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79a0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A0C4u;
    {
        const bool branch_taken_0x79a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C4u;
        // 0x79a0c8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c4) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x79A0CCu;
    // 0x79a0cc: 0x0  nop
    ctx->pc = 0x79a0ccu;
    // NOP
label_79a0d0:
    // 0x79a0d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0e4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A0E4u;
    SET_GPR_U32(ctx, 31, 0x79A0ECu);
    ctx->pc = 0x79A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E4u;
    // 0x79a0e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A0E4u, 0x79A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ECu;
label_79a0ec:
    // 0x79a0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0f0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A0F0u;
    {
        const bool branch_taken_0x79a0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F0u;
        // 0x79a0f4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f0) {
            ctx->pc = 0x79A0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0d0;
        }
    }
    ctx->pc = 0x79A0F8u;
    // 0x79a0f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a0fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a100: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a104: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0xa3a30010  sb          $v1, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a110: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a114: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a118: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a11c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a120: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a124: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a128: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A128u;
    SET_GPR_U32(ctx, 31, 0x79A130u);
    ctx->pc = 0x79A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A128u;
    // 0x79a12c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A128u, 0x79A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A130u;
label_79a130:
    // 0x79a130: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A130u;
    SET_GPR_U32(ctx, 31, 0x79A138u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A130u, 0x79A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a140: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a144: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a148: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A148u;
    SET_GPR_U32(ctx, 31, 0x79A150u);
    ctx->pc = 0x79A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A148u;
    // 0x79a14c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A148u, 0x79A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A150u;
label_79a150:
    // 0x79a150: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a154: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A154u;
    SET_GPR_U32(ctx, 31, 0x79A15Cu);
    ctx->pc = 0x79A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A154u;
    // 0x79a158: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A154u, 0x79A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A15Cu;
label_79a15c:
    // 0x79a15c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a160: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a164: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a16c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x79a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a170: 0x3e00008  jr          $ra
    ctx->pc = 0x79A170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A170u;
        // 0x79a174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A178u;
}
} // namespace gh_r105
