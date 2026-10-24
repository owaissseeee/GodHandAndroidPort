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

// Function: func_0011AC80
// Address: 0x11ac80 - 0x11add8
void func_0011AC80_0x11ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011AC80_0x11ac80");
#endif

    switch (ctx->pc) {
        case 0x11acf4u: goto label_11acf4;
        case 0x11ad20u: goto label_11ad20;
        case 0x11ad30u: goto label_11ad30;
        case 0x11ad3cu: goto label_11ad3c;
        case 0x11ad44u: goto label_11ad44;
        case 0x11ad58u: goto label_11ad58;
        case 0x11ad60u: goto label_11ad60;
        case 0x11ad74u: goto label_11ad74;
        case 0x11ada0u: goto label_11ada0;
        case 0x11adacu: goto label_11adac;
        case 0x11adb8u: goto label_11adb8;
        default: break;
    }

    ctx->pc = 0x11ac80u;

    // 0x11ac80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ac84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11ac88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11ac8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ac8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11ac94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ac98: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11ac98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11ac9c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x11ac9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x11aca0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ACA0u;
    {
        const bool branch_taken_0x11aca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACA0u;
        // 0x11aca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aca0) {
            ctx->pc = 0x11ACB8u;
            goto label_11acb8;
        }
    }
    ctx->pc = 0x11ACA8u;
    // 0x11aca8: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x11ACA8u;
    {
        const bool branch_taken_0x11aca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACA8u;
        // 0x11acac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aca8) {
            ctx->pc = 0x11AD6Cu;
            goto label_11ad6c;
        }
    }
    ctx->pc = 0x11ACB0u;
    // 0x11acb0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11ACB0u;
    {
        const bool branch_taken_0x11acb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11acb0) {
            ctx->pc = 0x11ADB0u;
            goto label_11adb0;
        }
    }
    ctx->pc = 0x11ACB8u;
label_11acb8:
    // 0x11acb8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x11acbc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11acc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11acc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11acc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acc8: 0x8c500878  lw          $s0, 0x878($v0)
    ctx->pc = 0x11acc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2168)));
    // 0x11accc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11acd0: 0x8c51087c  lw          $s1, 0x87C($v0)
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2172)));
    // 0x11acd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11acd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11acdc: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x11ace0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11ace4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11ace4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ace8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11ACECu;
    SET_GPR_U32(ctx, 31, 0x11ACF4u);
    ctx->pc = 0x11ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACECu;
    // 0x11acf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11ACECu, 0x11ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACF4u;
label_11acf4:
    // 0x11acf4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x11acf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11acf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11acfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11ad00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ad04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ad04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad08: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x11ad08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x11ad0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ad0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11ad14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad18: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11AD18u;
    SET_GPR_U32(ctx, 31, 0x11AD20u);
    ctx->pc = 0x11AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD18u;
    // 0x11ad1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11AD18u, 0x11AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD20u;
label_11ad20:
    // 0x11ad20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad28: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11AD28u;
    SET_GPR_U32(ctx, 31, 0x11AD30u);
    ctx->pc = 0x11AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD28u;
    // 0x11ad2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11AD28u, 0x11AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD30u;
label_11ad30:
    // 0x11ad30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad34: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11AD34u;
    SET_GPR_U32(ctx, 31, 0x11AD3Cu);
    ctx->pc = 0x11AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD34u;
    // 0x11ad38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11AD34u, 0x11AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD3Cu;
label_11ad3c:
    // 0x11ad3c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11AD3Cu;
    SET_GPR_U32(ctx, 31, 0x11AD44u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11AD3Cu, 0x11AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD44u;
label_11ad44:
    // 0x11ad44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11ad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11ad48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11AD48u;
    {
        const bool branch_taken_0x11ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ad48) {
            ctx->pc = 0x11AD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AD48u;
            // 0x11ad4c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AD64u;
            goto label_11ad64;
        }
    }
    ctx->pc = 0x11AD50u;
    // 0x11ad50: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11AD50u;
    SET_GPR_U32(ctx, 31, 0x11AD58u);
    ctx->pc = 0x11AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD50u;
    // 0x11ad54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11AD50u, 0x11AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD58u;
label_11ad58:
    // 0x11ad58: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11AD58u;
    SET_GPR_U32(ctx, 31, 0x11AD60u);
    ctx->pc = 0x11AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD58u;
    // 0x11ad5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11AD58u, 0x11AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD60u;
label_11ad60:
    // 0x11ad60: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x11ad60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_11ad64:
    // 0x11ad64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ad68: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x11ad68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_11ad6c:
    // 0x11ad6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11AD6Cu;
    SET_GPR_U32(ctx, 31, 0x11AD74u);
    ctx->pc = 0x11AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD6Cu;
    // 0x11ad70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11AD6Cu, 0x11AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD74u;
label_11ad74:
    // 0x11ad74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AD74u;
    {
        const bool branch_taken_0x11ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ad74) {
            ctx->pc = 0x11AD8Cu;
            goto label_11ad8c;
        }
    }
    ctx->pc = 0x11AD7Cu;
    // 0x11ad7c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x11ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ad80: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x11ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ad84: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x11ad84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ad88: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x11ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_11ad8c:
    // 0x11ad8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ad90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ad90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ad94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad98: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11AD98u;
    SET_GPR_U32(ctx, 31, 0x11ADA0u);
    ctx->pc = 0x11AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD98u;
    // 0x11ad9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11AD98u, 0x11ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADA0u;
label_11ada0:
    // 0x11ada0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ada0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ada4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11ADA4u;
    SET_GPR_U32(ctx, 31, 0x11ADACu);
    ctx->pc = 0x11ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADA4u;
    // 0x11ada8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11ADA4u, 0x11ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADACu;
label_11adac:
    // 0x11adac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11adacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11adb0:
    // 0x11adb0: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11ADB0u;
    SET_GPR_U32(ctx, 31, 0x11ADB8u);
    ctx->pc = 0x11ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADB0u;
    // 0x11adb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11ADB0u, 0x11ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADB8u;
label_11adb8:
    // 0x11adb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11adb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11adbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11adbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11adc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11adc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11adc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11adc8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x11ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADCCu;
        // 0x11add0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ADD4u;
    // 0x11add4: 0x0  nop
    ctx->pc = 0x11add4u;
    // NOP
    ctx->pc = 0x11add8u;
}
