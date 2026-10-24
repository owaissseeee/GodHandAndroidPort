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

// Function: func_00112A48
// Address: 0x112a48 - 0x112cb8
void func_00112A48_0x112a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00112A48_0x112a48");
#endif

    switch (ctx->pc) {
        case 0x112a88u: goto label_112a88;
        case 0x112a90u: goto label_112a90;
        case 0x112a9cu: goto label_112a9c;
        case 0x112accu: goto label_112acc;
        case 0x112ae4u: goto label_112ae4;
        case 0x112af0u: goto label_112af0;
        case 0x112b30u: goto label_112b30;
        case 0x112b44u: goto label_112b44;
        case 0x112b60u: goto label_112b60;
        case 0x112b68u: goto label_112b68;
        case 0x112b78u: goto label_112b78;
        case 0x112b88u: goto label_112b88;
        case 0x112bacu: goto label_112bac;
        case 0x112bb8u: goto label_112bb8;
        case 0x112bf0u: goto label_112bf0;
        case 0x112c00u: goto label_112c00;
        case 0x112c10u: goto label_112c10;
        case 0x112c28u: goto label_112c28;
        case 0x112c4cu: goto label_112c4c;
        case 0x112c58u: goto label_112c58;
        case 0x112c68u: goto label_112c68;
        case 0x112c78u: goto label_112c78;
        default: break;
    }

    ctx->pc = 0x112a48u;

    // 0x112a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x112a4c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x112a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112a54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x112a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112a5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x112a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x112a60: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x112a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x112a64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x112a68: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112a74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x112a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x112a78: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x112a7c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x112a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x112a80: 0xc0a480c  jal         func_292030
    ctx->pc = 0x112A80u;
    SET_GPR_U32(ctx, 31, 0x112A88u);
    ctx->pc = 0x112A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A80u;
    // 0x112a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x112A80u, 0x112A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A88u;
label_112a88:
    // 0x112a88: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x112A88u;
    SET_GPR_U32(ctx, 31, 0x112A90u);
    ctx->pc = 0x112A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A88u;
    // 0x112a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x112A88u, 0x112A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A90u;
label_112a90:
    // 0x112a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a94: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x112A94u;
    SET_GPR_U32(ctx, 31, 0x112A9Cu);
    ctx->pc = 0x112A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A94u;
    // 0x112a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x112A94u, 0x112A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A9Cu;
label_112a9c:
    // 0x112a9c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x112a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x112aa0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x112aa4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x112aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x112aa8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112AA8u;
    {
        const bool branch_taken_0x112aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA8u;
        // 0x112aac: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa8) {
            ctx->pc = 0x112AC4u;
            goto label_112ac4;
        }
    }
    ctx->pc = 0x112AB0u;
    // 0x112ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112ab4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x112AB4u;
    {
        const bool branch_taken_0x112ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112ab4) {
            ctx->pc = 0x112B58u;
            goto label_112b58;
        }
    }
    ctx->pc = 0x112ABCu;
    // 0x112abc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x112ABCu;
    {
        const bool branch_taken_0x112abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ABCu;
        // 0x112ac0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112abc) {
            ctx->pc = 0x112BBCu;
            goto label_112bbc;
        }
    }
    ctx->pc = 0x112AC4u;
label_112ac4:
    // 0x112ac4: 0xc049396  jal         func_124E58
    ctx->pc = 0x112AC4u;
    SET_GPR_U32(ctx, 31, 0x112ACCu);
    ctx->pc = 0x112AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AC4u;
    // 0x112ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x112AC4u, 0x112ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112ACCu;
label_112acc:
    // 0x112acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112ad0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x112ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x112ad4: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x112ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x112ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112adc: 0xc04a55e  jal         func_129578
    ctx->pc = 0x112ADCu;
    SET_GPR_U32(ctx, 31, 0x112AE4u);
    ctx->pc = 0x112AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ADCu;
    // 0x112ae0: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x112ADCu, 0x112AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AE4u;
label_112ae4:
    // 0x112ae4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x112ae8: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x112AE8u;
    SET_GPR_U32(ctx, 31, 0x112AF0u);
    ctx->pc = 0x112AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AE8u;
    // 0x112aec: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112AE8u, 0x112AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AF0u;
label_112af0:
    // 0x112af0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x112af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x112af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112AF4u;
    {
        const bool branch_taken_0x112af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AF4u;
        // 0x112af8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112af4) {
            ctx->pc = 0x112B08u;
            goto label_112b08;
        }
    }
    ctx->pc = 0x112AFCu;
    // 0x112afc: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x112afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x112b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112B00u;
    {
        const bool branch_taken_0x112b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B00u;
        // 0x112b04: 0x8c440458  lw          $a0, 0x458($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b00) {
            ctx->pc = 0x112B10u;
            goto label_112b10;
        }
    }
    ctx->pc = 0x112B08u;
label_112b08:
    // 0x112b08: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x112b0c: 0x8c440454  lw          $a0, 0x454($v0)
    ctx->pc = 0x112b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
label_112b10:
    // 0x112b10: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x112b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112b14: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112b18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b20: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112b24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x112B28u;
    SET_GPR_U32(ctx, 31, 0x112B30u);
    ctx->pc = 0x112B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B28u;
    // 0x112b2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112B28u, 0x112B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B30u;
label_112b30:
    // 0x112b30: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x112b34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112b38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112b3c: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112B3Cu;
    SET_GPR_U32(ctx, 31, 0x112B44u);
    ctx->pc = 0x112B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B3Cu;
    // 0x112b40: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112B3Cu, 0x112B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B44u;
label_112b44:
    // 0x112b44: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x112b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x112b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112b4c: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x112b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x112b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112b54: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x112b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_112b58:
    // 0x112b58: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x112B58u;
    SET_GPR_U32(ctx, 31, 0x112B60u);
    ctx->pc = 0x112B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B58u;
    // 0x112b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x112B58u, 0x112B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B60u;
label_112b60:
    // 0x112b60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x112B60u;
    SET_GPR_U32(ctx, 31, 0x112B68u);
    ctx->pc = 0x112B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B60u;
    // 0x112b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x112B60u, 0x112B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B68u;
label_112b68:
    // 0x112b68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112B68u;
    {
        const bool branch_taken_0x112b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b68) {
            ctx->pc = 0x112B98u;
            goto label_112b98;
        }
    }
    ctx->pc = 0x112B70u;
    // 0x112b70: 0xc04a58c  jal         func_129630
    ctx->pc = 0x112B70u;
    SET_GPR_U32(ctx, 31, 0x112B78u);
    ctx->pc = 0x112B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B70u;
    // 0x112b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x112B70u, 0x112B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B78u;
label_112b78:
    // 0x112b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112b80: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112B80u;
    SET_GPR_U32(ctx, 31, 0x112B88u);
    ctx->pc = 0x112B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B80u;
    // 0x112b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112B80u, 0x112B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B88u;
label_112b88:
    // 0x112b88: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x112b88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x112b8c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x112b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x112b90: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x112b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x112b94: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x112b94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_112b98:
    // 0x112b98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112b9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x112b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x112ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ba4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x112BA4u;
    SET_GPR_U32(ctx, 31, 0x112BACu);
    ctx->pc = 0x112BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BA4u;
    // 0x112ba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x112BA4u, 0x112BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BACu;
label_112bac:
    // 0x112bac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x112bacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x112bb0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x112BB0u;
    SET_GPR_U32(ctx, 31, 0x112BB8u);
    ctx->pc = 0x112BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BB0u;
    // 0x112bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x112BB0u, 0x112BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BB8u;
label_112bb8:
    // 0x112bb8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x112bb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_112bbc:
    // 0x112bbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x112bc0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x112BC0u;
    {
        const bool branch_taken_0x112bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112bc0) {
            ctx->pc = 0x112BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112BC0u;
            // 0x112bc4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C2Cu;
            goto label_112c2c;
        }
    }
    ctx->pc = 0x112BC8u;
    // 0x112bc8: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x112bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x112bcc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x112BCCu;
    {
        const bool branch_taken_0x112bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112bcc) {
            ctx->pc = 0x112BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112BCCu;
            // 0x112bd0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C2Cu;
            goto label_112c2c;
        }
    }
    ctx->pc = 0x112BD4u;
    // 0x112bd4: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x112bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x112bd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x112BD8u;
    {
        const bool branch_taken_0x112bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD8u;
        // 0x112bdc: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bd8) {
            ctx->pc = 0x112C18u;
            goto label_112c18;
        }
    }
    ctx->pc = 0x112BE0u;
    // 0x112be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112be4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x112be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x112be8: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x112BE8u;
    SET_GPR_U32(ctx, 31, 0x112BF0u);
    ctx->pc = 0x112BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BE8u;
    // 0x112bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x112BE8u, 0x112BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BF0u;
label_112bf0:
    // 0x112bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bf4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x112bf8: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x112BF8u;
    SET_GPR_U32(ctx, 31, 0x112C00u);
    ctx->pc = 0x112BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BF8u;
    // 0x112bfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x112BF8u, 0x112C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C00u;
label_112c00:
    // 0x112c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c04: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x112c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x112c08: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x112C08u;
    SET_GPR_U32(ctx, 31, 0x112C10u);
    ctx->pc = 0x112C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C08u;
    // 0x112c0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x112C08u, 0x112C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112C10u;
    {
        const bool branch_taken_0x112c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C10u;
        // 0x112c14: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c10) {
            ctx->pc = 0x112C2Cu;
            goto label_112c2c;
        }
    }
    ctx->pc = 0x112C18u;
label_112c18:
    // 0x112c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c1c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x112c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x112c20: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x112C20u;
    SET_GPR_U32(ctx, 31, 0x112C28u);
    ctx->pc = 0x112C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C20u;
    // 0x112c24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x112C20u, 0x112C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C28u;
label_112c28:
    // 0x112c28: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x112c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_112c2c:
    // 0x112c2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x112c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x112c30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112C30u;
    {
        const bool branch_taken_0x112c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C30u;
        // 0x112c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c30) {
            ctx->pc = 0x112C50u;
            goto label_112c50;
        }
    }
    ctx->pc = 0x112C38u;
    // 0x112c38: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x112c3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112c40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112c44: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112C44u;
    SET_GPR_U32(ctx, 31, 0x112C4Cu);
    ctx->pc = 0x112C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C44u;
    // 0x112c48: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112C44u, 0x112C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C4Cu;
label_112c4c:
    // 0x112c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112c50:
    // 0x112c50: 0xc048e4e  jal         func_123938
    ctx->pc = 0x112C50u;
    SET_GPR_U32(ctx, 31, 0x112C58u);
    ctx->pc = 0x112C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C50u;
    // 0x112c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x112C50u, 0x112C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C58u;
label_112c58:
    // 0x112c58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x112C58u;
    {
        const bool branch_taken_0x112c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c58) {
            ctx->pc = 0x112C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112C58u;
            // 0x112c5c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C80u;
            goto label_112c80;
        }
    }
    ctx->pc = 0x112C60u;
    // 0x112c60: 0xc04a58c  jal         func_129630
    ctx->pc = 0x112C60u;
    SET_GPR_U32(ctx, 31, 0x112C68u);
    ctx->pc = 0x112C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C60u;
    // 0x112c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x112C60u, 0x112C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C68u;
label_112c68:
    // 0x112c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112c70: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112C70u;
    SET_GPR_U32(ctx, 31, 0x112C78u);
    ctx->pc = 0x112C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C70u;
    // 0x112c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112C70u, 0x112C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C78u;
label_112c78:
    // 0x112c78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112C78u;
    {
        const bool branch_taken_0x112c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C78u;
        // 0x112c7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c78) {
            ctx->pc = 0x112C9Cu;
            goto label_112c9c;
        }
    }
    ctx->pc = 0x112C80u;
label_112c80:
    // 0x112c80: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x112c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x112c84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112c8c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x112c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x112c90: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x112c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x112c94: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x112c94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x112c98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x112c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112c9c:
    // 0x112c9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x112c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112ca0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x112ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112ca8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x112ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112cac: 0x3e00008  jr          $ra
    ctx->pc = 0x112CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CACu;
        // 0x112cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112CB4u;
    // 0x112cb4: 0x0  nop
    ctx->pc = 0x112cb4u;
    // NOP
    ctx->pc = 0x112cb8u;
}
