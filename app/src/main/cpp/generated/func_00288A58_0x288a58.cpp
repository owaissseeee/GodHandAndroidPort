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

// Function: func_00288A58
// Address: 0x288a58 - 0x288b78
void func_00288A58_0x288a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288A58_0x288a58");
#endif

    switch (ctx->pc) {
        case 0x288a80u: goto label_288a80;
        case 0x288ab0u: goto label_288ab0;
        case 0x288abcu: goto label_288abc;
        case 0x288ae8u: goto label_288ae8;
        case 0x288b10u: goto label_288b10;
        case 0x288b24u: goto label_288b24;
        case 0x288b54u: goto label_288b54;
        case 0x288b60u: goto label_288b60;
        default: break;
    }

    ctx->pc = 0x288a58u;

    // 0x288a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288a6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x288a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x288a70: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x288a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x288a74: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x288a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x288a78: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x288A78u;
    SET_GPR_U32(ctx, 31, 0x288A80u);
    ctx->pc = 0x288A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A78u;
    // 0x288a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x288A78u, 0x288A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A80u;
label_288a80:
    // 0x288a80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x288a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288a88: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288a8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288A8Cu;
    {
        const bool branch_taken_0x288a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A8Cu;
        // 0x288a90: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a8c) {
            ctx->pc = 0x288AA8u;
            goto label_288aa8;
        }
    }
    ctx->pc = 0x288A94u;
    // 0x288a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288a98: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x288A98u;
    {
        const bool branch_taken_0x288a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288a98) {
            ctx->pc = 0x288B1Cu;
            goto label_288b1c;
        }
    }
    ctx->pc = 0x288AA0u;
    // 0x288aa0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x288AA0u;
    {
        const bool branch_taken_0x288aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AA0u;
        // 0x288aa4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288aa0) {
            ctx->pc = 0x288B64u;
            goto label_288b64;
        }
    }
    ctx->pc = 0x288AA8u;
label_288aa8:
    // 0x288aa8: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x288AA8u;
    SET_GPR_U32(ctx, 31, 0x288AB0u);
    ctx->pc = 0x288AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AA8u;
    // 0x288aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x288AA8u, 0x288AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AB0u;
label_288ab0:
    // 0x288ab0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288ab4: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x288AB4u;
    SET_GPR_U32(ctx, 31, 0x288ABCu);
    ctx->pc = 0x288AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AB4u;
    // 0x288ab8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x288AB4u, 0x288ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288ABCu;
label_288abc:
    // 0x288abc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288ac8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x288ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288acc: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x288ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ad4: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x288ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x288ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288adc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288ae0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288AE0u;
    SET_GPR_U32(ctx, 31, 0x288AE8u);
    ctx->pc = 0x288AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AE0u;
    // 0x288ae4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288AE0u, 0x288AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AE8u;
label_288ae8:
    // 0x288ae8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x288aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288af0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x288af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x288af4: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x288af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x288af8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x288af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288afc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b08: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x288B08u;
    SET_GPR_U32(ctx, 31, 0x288B10u);
    ctx->pc = 0x288B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B08u;
    // 0x288b0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x288B08u, 0x288B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B10u;
label_288b10:
    // 0x288b10: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288b18: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x288b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_288b1c:
    // 0x288b1c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x288B1Cu;
    SET_GPR_U32(ctx, 31, 0x288B24u);
    ctx->pc = 0x288B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B1Cu;
    // 0x288b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x288B1Cu, 0x288B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B24u;
label_288b24:
    // 0x288b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288B24u;
    {
        const bool branch_taken_0x288b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B24u;
        // 0x288b28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b24) {
            ctx->pc = 0x288B40u;
            goto label_288b40;
        }
    }
    ctx->pc = 0x288B2Cu;
    // 0x288b2c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x288b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x288b30: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x288b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x288b34: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x288b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x288b38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x288B38u;
    {
        const bool branch_taken_0x288b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B38u;
        // 0x288b3c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b38) {
            ctx->pc = 0x288B60u;
            goto label_288b60;
        }
    }
    ctx->pc = 0x288B40u;
label_288b40:
    // 0x288b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b4c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x288B4Cu;
    SET_GPR_U32(ctx, 31, 0x288B54u);
    ctx->pc = 0x288B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B4Cu;
    // 0x288b50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x288B4Cu, 0x288B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B54u;
label_288b54:
    // 0x288b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b58: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x288B58u;
    SET_GPR_U32(ctx, 31, 0x288B60u);
    ctx->pc = 0x288B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B58u;
    // 0x288b5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x288B58u, 0x288B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B60u;
label_288b60:
    // 0x288b60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288b64:
    // 0x288b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288b68: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x288b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x288B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B6Cu;
        // 0x288b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B74u;
    // 0x288b74: 0x0  nop
    ctx->pc = 0x288b74u;
    // NOP
    ctx->pc = 0x288b78u;
}
