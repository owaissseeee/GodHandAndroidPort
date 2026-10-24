#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: quitPlay__12cEventCamera
// Address: 0x7acdd0 - 0x7acec0
void quitPlay__12cEventCamera_0x7acdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__12cEventCamera_0x7acdd0");
#endif

    switch (ctx->pc) {
        case 0x7ace00u: goto label_7ace00;
        case 0x7ace24u: goto label_7ace24;
        case 0x7ace48u: goto label_7ace48;
        case 0x7ace68u: goto label_7ace68;
        case 0x7ace88u: goto label_7ace88;
        case 0x7ace9cu: goto label_7ace9c;
        case 0x7acea4u: goto label_7acea4;
        default: break;
    }

    ctx->pc = 0x7acdd0u;

    // 0x7acdd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7acdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7acdd4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7acdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7acdd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7acdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7acddc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7acddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7acde0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7acde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7acde4: 0x24505280  addiu       $s0, $v0, 0x5280
    ctx->pc = 0x7acde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x7acde8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7acde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acdec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7acdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7acdf0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7acdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7acdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7acdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7acdf8: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7ACDF8u;
    SET_GPR_U32(ctx, 31, 0x7ACE00u);
    ctx->pc = 0x7ACDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACDF8u;
    // 0x7acdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7ACDF8u, 0x7ACE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE00u;
label_7ace00:
    // 0x7ace00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7ace00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7ace04: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x7ACE04u;
    {
        const bool branch_taken_0x7ace04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ace04) {
            ctx->pc = 0x7ACE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACE04u;
            // 0x7ace08: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACEA8u;
            goto label_7acea8;
        }
    }
    ctx->pc = 0x7ACE0Cu;
    // 0x7ace0c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x7ace0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ace10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ace10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace14: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x7ace14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x7ace18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x7ace18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x7ace1c: 0xc1eb3b0  jal         func_7ACEC0
    ctx->pc = 0x7ACE1Cu;
    SET_GPR_U32(ctx, 31, 0x7ACE24u);
    ctx->pc = 0x7ACE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE1Cu;
    // 0x7ace20: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEC0u, 0x7ACE1Cu, 0x7ACE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE24u;
label_7ace24:
    // 0x7ace24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7ace24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ace28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ace28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace2c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x7ace2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7ace30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ace30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace34: 0x94500004  lhu         $s0, 0x4($v0)
    ctx->pc = 0x7ace34u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7ace38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ace38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7ace3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace40: 0xc04e42e  jal         func_1390B8
    ctx->pc = 0x7ACE40u;
    SET_GPR_U32(ctx, 31, 0x7ACE48u);
    ctx->pc = 0x7ACE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE40u;
    // 0x7ace44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1390B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1390B8u, 0x7ACE40u, 0x7ACE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE48u;
label_7ace48:
    // 0x7ace48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x7ace48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x7ace4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x7ace4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7ace50: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x7ace50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ace54: 0x0  nop
    ctx->pc = 0x7ace54u;
    // NOP
    // 0x7ace58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ace58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ace5c: 0xe44003a8  swc1        $f0, 0x3A8($v0)
    ctx->pc = 0x7ace5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 936), bits); }
    // 0x7ace60: 0xc04e180  jal         func_138600
    ctx->pc = 0x7ACE60u;
    SET_GPR_U32(ctx, 31, 0x7ACE68u);
    ctx->pc = 0x7ACE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE60u;
    // 0x7ace64: 0x8e24aff0  lw          $a0, -0x5010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138600u, 0x7ACE60u, 0x7ACE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE68u;
label_7ace68:
    // 0x7ace68: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7ace6c: 0x90626b34  lbu         $v0, 0x6B34($v1)
    ctx->pc = 0x7ace6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x586B34u));
    // 0x7ace70: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x7ace70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x7ace74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ACE74u;
    {
        const bool branch_taken_0x7ace74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACE74u;
        // 0x7ace78: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ace74) {
            ctx->pc = 0x7ACE90u;
            goto label_7ace90;
        }
    }
    ctx->pc = 0x7ACE7Cu;
    // 0x7ace7c: 0x8e64aff0  lw          $a0, -0x5010($s3)
    ctx->pc = 0x7ace7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
    // 0x7ace80: 0xc04e08e  jal         func_138238
    ctx->pc = 0x7ACE80u;
    SET_GPR_U32(ctx, 31, 0x7ACE88u);
    ctx->pc = 0x7ACE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE80u;
    // 0x7ace84: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138238u, 0x7ACE80u, 0x7ACE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE88u;
label_7ace88:
    // 0x7ace88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7ACE88u;
    {
        const bool branch_taken_0x7ace88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ace88) {
            ctx->pc = 0x7ACE9Cu;
            goto label_7ace9c;
        }
    }
    ctx->pc = 0x7ACE90u;
label_7ace90:
    // 0x7ace90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ace90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ace94: 0xc04e350  jal         func_138D40
    ctx->pc = 0x7ACE94u;
    SET_GPR_U32(ctx, 31, 0x7ACE9Cu);
    ctx->pc = 0x7ACE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE94u;
    // 0x7ace98: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x7ACE94u, 0x7ACE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACE9Cu;
label_7ace9c:
    // 0x7ace9c: 0xc04e14a  jal         func_138528
    ctx->pc = 0x7ACE9Cu;
    SET_GPR_U32(ctx, 31, 0x7ACEA4u);
    ctx->pc = 0x7ACEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACE9Cu;
    // 0x7acea0: 0x8e64aff0  lw          $a0, -0x5010($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138528u, 0x7ACE9Cu, 0x7ACEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACEA4u;
label_7acea4:
    // 0x7acea4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7acea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7acea8:
    // 0x7acea8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7acea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7aceac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7aceacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aceb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7aceb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aceb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aceb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACEB8u;
        // 0x7acebc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACEC0u;
}
} // namespace gh_event
