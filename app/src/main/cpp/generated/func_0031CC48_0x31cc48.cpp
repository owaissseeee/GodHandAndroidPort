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

// Function: func_0031CC48
// Address: 0x31cc48 - 0x31ccf0
void func_0031CC48_0x31cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CC48_0x31cc48");
#endif

    switch (ctx->pc) {
        case 0x31cc7cu: goto label_31cc7c;
        case 0x31ccacu: goto label_31ccac;
        case 0x31ccb8u: goto label_31ccb8;
        default: break;
    }

    ctx->pc = 0x31cc48u;

    // 0x31cc48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31cc4c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31cc50: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31cc54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31cc5c: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x31cc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x31cc60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31cc64: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x31cc64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x31cc68: 0x24a50ec0  addiu       $a1, $a1, 0xEC0
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
    // 0x31cc6c: 0x922605b1  lbu         $a2, 0x5B1($s1)
    ctx->pc = 0x31cc6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x747A51u));
    // 0x31cc70: 0x922805b0  lbu         $t0, 0x5B0($s1)
    ctx->pc = 0x31cc70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x747A50u));
    // 0x31cc74: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x31CC74u;
    SET_GPR_U32(ctx, 31, 0x31CC7Cu);
    ctx->pc = 0x31CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC74u;
    // 0x31cc78: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x31CC74u, 0x31CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC7Cu;
label_31cc7c:
    // 0x31cc7c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x31cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x31cc80: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x31cc80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x31cc84: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x31cc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x31cc88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc8c: 0x262605ac  addiu       $a2, $s1, 0x5AC
    ctx->pc = 0x31cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
    // 0x31cc90: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x31cc90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31cc94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31cc94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31cc98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc9c: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x31cc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x31cca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cca4: 0xc08037e  jal         func_200DF8
    ctx->pc = 0x31CCA4u;
    SET_GPR_U32(ctx, 31, 0x31CCACu);
    ctx->pc = 0x31CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCA4u;
    // 0x31cca8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200DF8u, 0x31CCA4u, 0x31CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCACu;
label_31ccac:
    // 0x31ccac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ccb0: 0xc080442  jal         func_201108
    ctx->pc = 0x31CCB0u;
    SET_GPR_U32(ctx, 31, 0x31CCB8u);
    ctx->pc = 0x31CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCB0u;
    // 0x31ccb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x31CCB0u, 0x31CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCB8u;
label_31ccb8:
    // 0x31ccb8: 0x8e2505ac  lw          $a1, 0x5AC($s1)
    ctx->pc = 0x31ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x31ccbc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31ccc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x31ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ccc4: 0x244358a0  addiu       $v1, $v0, 0x58A0
    ctx->pc = 0x31ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22688));
    // 0x31ccc8: 0xac4558a0  sw          $a1, 0x58A0($v0)
    ctx->pc = 0x31ccc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7558A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7558A0u, _value); } while (0);
    // 0x31cccc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ccd0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ccd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ccd8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31ccd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7558A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7558A4u, _value); } while (0);
    // 0x31ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x31CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCDCu;
        // 0x31cce0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CCE4u;
    // 0x31cce4: 0x0  nop
    ctx->pc = 0x31cce4u;
    // NOP
    // 0x31cce8: 0x906205b0  lbu         $v0, 0x5B0($v1)
    ctx->pc = 0x31cce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1456)));
    // 0x31ccec: 0x0  nop
    ctx->pc = 0x31ccecu;
    // NOP
    ctx->pc = 0x31ccf0u;
}
