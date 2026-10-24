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

// Function: func_00288B78
// Address: 0x288b78 - 0x288c98
void func_00288B78_0x288b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288B78_0x288b78");
#endif

    switch (ctx->pc) {
        case 0x288ba0u: goto label_288ba0;
        case 0x288bd0u: goto label_288bd0;
        case 0x288bdcu: goto label_288bdc;
        case 0x288c08u: goto label_288c08;
        case 0x288c30u: goto label_288c30;
        case 0x288c44u: goto label_288c44;
        case 0x288c74u: goto label_288c74;
        case 0x288c80u: goto label_288c80;
        default: break;
    }

    ctx->pc = 0x288b78u;

    // 0x288b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288b8c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x288b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x288b90: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x288b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x288b94: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x288b98: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x288B98u;
    SET_GPR_U32(ctx, 31, 0x288BA0u);
    ctx->pc = 0x288B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B98u;
    // 0x288b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x288B98u, 0x288BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BA0u;
label_288ba0:
    // 0x288ba0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x288ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x288ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288ba8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288bac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288BACu;
    {
        const bool branch_taken_0x288bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BACu;
        // 0x288bb0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bac) {
            ctx->pc = 0x288BC8u;
            goto label_288bc8;
        }
    }
    ctx->pc = 0x288BB4u;
    // 0x288bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288bb8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x288BB8u;
    {
        const bool branch_taken_0x288bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288bb8) {
            ctx->pc = 0x288C3Cu;
            goto label_288c3c;
        }
    }
    ctx->pc = 0x288BC0u;
    // 0x288bc0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x288BC0u;
    {
        const bool branch_taken_0x288bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BC0u;
        // 0x288bc4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bc0) {
            ctx->pc = 0x288C84u;
            goto label_288c84;
        }
    }
    ctx->pc = 0x288BC8u;
label_288bc8:
    // 0x288bc8: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x288BC8u;
    SET_GPR_U32(ctx, 31, 0x288BD0u);
    ctx->pc = 0x288BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BC8u;
    // 0x288bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x288BC8u, 0x288BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BD0u;
label_288bd0:
    // 0x288bd0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288bd4: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x288BD4u;
    SET_GPR_U32(ctx, 31, 0x288BDCu);
    ctx->pc = 0x288BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BD4u;
    // 0x288bd8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x288BD4u, 0x288BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BDCu;
label_288bdc:
    // 0x288bdc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288be4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288be8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x288be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288bec: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x288becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x288bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bf4: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x288bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x288bf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288bf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bfc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288c00: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288C00u;
    SET_GPR_U32(ctx, 31, 0x288C08u);
    ctx->pc = 0x288C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C00u;
    // 0x288c04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288C00u, 0x288C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C08u;
label_288c08:
    // 0x288c08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x288c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x288c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288c10: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x288c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x288c14: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x288c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x288c18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x288c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288c20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288c24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c28: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x288C28u;
    SET_GPR_U32(ctx, 31, 0x288C30u);
    ctx->pc = 0x288C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C28u;
    // 0x288c2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x288C28u, 0x288C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C30u;
label_288c30:
    // 0x288c30: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288c38: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x288c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_288c3c:
    // 0x288c3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x288C3Cu;
    SET_GPR_U32(ctx, 31, 0x288C44u);
    ctx->pc = 0x288C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C3Cu;
    // 0x288c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x288C3Cu, 0x288C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C44u;
label_288c44:
    // 0x288c44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288C44u;
    {
        const bool branch_taken_0x288c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C44u;
        // 0x288c48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c44) {
            ctx->pc = 0x288C60u;
            goto label_288c60;
        }
    }
    ctx->pc = 0x288C4Cu;
    // 0x288c4c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x288c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x288c50: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x288c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x288c54: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x288c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x288c58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C58u;
        // 0x288c5c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C80u;
            goto label_288c80;
        }
    }
    ctx->pc = 0x288C60u;
label_288c60:
    // 0x288c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288c64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x288C6Cu;
    SET_GPR_U32(ctx, 31, 0x288C74u);
    ctx->pc = 0x288C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C6Cu;
    // 0x288c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x288C6Cu, 0x288C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C74u;
label_288c74:
    // 0x288c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x288C78u;
    SET_GPR_U32(ctx, 31, 0x288C80u);
    ctx->pc = 0x288C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C78u;
    // 0x288c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x288C78u, 0x288C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C80u;
label_288c80:
    // 0x288c80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288c84:
    // 0x288c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288c88: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x288c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x288C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C8Cu;
        // 0x288c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C94u;
    // 0x288c94: 0x0  nop
    ctx->pc = 0x288c94u;
    // NOP
    ctx->pc = 0x288c98u;
}
