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

// Function: func_00277A48
// Address: 0x277a48 - 0x277b18
void func_00277A48_0x277a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277A48_0x277a48");
#endif

    switch (ctx->pc) {
        case 0x277aa4u: goto label_277aa4;
        case 0x277ac0u: goto label_277ac0;
        case 0x277accu: goto label_277acc;
        case 0x277ad8u: goto label_277ad8;
        case 0x277aecu: goto label_277aec;
        default: break;
    }

    ctx->pc = 0x277a48u;

    // 0x277a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x277a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a58: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x277a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x277a5c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x277a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277a60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x277A60u;
    {
        const bool branch_taken_0x277a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A60u;
        // 0x277a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a60) {
            ctx->pc = 0x277A78u;
            goto label_277a78;
        }
    }
    ctx->pc = 0x277A68u;
    // 0x277a68: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277A68u;
    {
        const bool branch_taken_0x277a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277a68) {
            ctx->pc = 0x277AB0u;
            goto label_277ab0;
        }
    }
    ctx->pc = 0x277A70u;
    // 0x277a70: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x277A70u;
    {
        const bool branch_taken_0x277a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A70u;
        // 0x277a74: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a70) {
            ctx->pc = 0x277ADCu;
            goto label_277adc;
        }
    }
    ctx->pc = 0x277A78u;
label_277a78:
    // 0x277a78: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277a84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x277a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277a88: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x277a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x277a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a90: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x277a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x277a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277a9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277A9Cu;
    SET_GPR_U32(ctx, 31, 0x277AA4u);
    ctx->pc = 0x277AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A9Cu;
    // 0x277aa0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277A9Cu, 0x277AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AA4u;
label_277aa4:
    // 0x277aa4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277aa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277aac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277ab0:
    // 0x277ab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277ab4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277ab8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277AB8u;
    SET_GPR_U32(ctx, 31, 0x277AC0u);
    ctx->pc = 0x277ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AB8u;
    // 0x277abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277AB8u, 0x277AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AC0u;
label_277ac0:
    // 0x277ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ac4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277AC4u;
    SET_GPR_U32(ctx, 31, 0x277ACCu);
    ctx->pc = 0x277AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AC4u;
    // 0x277ac8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277AC4u, 0x277ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277ACCu;
label_277acc:
    // 0x277acc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x277ad0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277AD0u;
    SET_GPR_U32(ctx, 31, 0x277AD8u);
    ctx->pc = 0x277AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AD0u;
    // 0x277ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277AD0u, 0x277AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AD8u;
label_277ad8:
    // 0x277ad8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_277adc:
    // 0x277adc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x277adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x277ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277ae4: 0xc0b76ac  jal         func_2DDAB0
    ctx->pc = 0x277AE4u;
    SET_GPR_U32(ctx, 31, 0x277AECu);
    ctx->pc = 0x277AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AE4u;
    // 0x277ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAB0u, 0x277AE4u, 0x277AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AECu;
label_277aec:
    // 0x277aec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277AECu;
    {
        const bool branch_taken_0x277aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AECu;
        // 0x277af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277aec) {
            ctx->pc = 0x277B04u;
            goto label_277b04;
        }
    }
    ctx->pc = 0x277AF4u;
    // 0x277af4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x277af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x277af8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x277af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x277afc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x277afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x277b00: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x277b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_277b04:
    // 0x277b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277b0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x277b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277b10: 0x3e00008  jr          $ra
    ctx->pc = 0x277B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B10u;
        // 0x277b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B18u;
}
