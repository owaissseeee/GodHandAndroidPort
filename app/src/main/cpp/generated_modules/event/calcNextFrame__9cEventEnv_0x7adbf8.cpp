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
// Function: calcNextFrame__9cEventEnv
// Address: 0x7adbf8 - 0x7add28
void calcNextFrame__9cEventEnv_0x7adbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrame__9cEventEnv_0x7adbf8");
#endif

    switch (ctx->pc) {
        case 0x7adc24u: goto label_7adc24;
        case 0x7adc34u: goto label_7adc34;
        case 0x7adc3cu: goto label_7adc3c;
        case 0x7adc4cu: goto label_7adc4c;
        case 0x7adcd8u: goto label_7adcd8;
        case 0x7adce8u: goto label_7adce8;
        case 0x7adcf8u: goto label_7adcf8;
        case 0x7add08u: goto label_7add08;
        case 0x7add10u: goto label_7add10;
        default: break;
    }

    ctx->pc = 0x7adbf8u;

    // 0x7adbf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7adbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7adbfc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x7adbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x7adc00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7adc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7adc04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7adc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7adc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7adc0c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7adc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7adc10: 0x26105280  addiu       $s0, $s0, 0x5280
    ctx->pc = 0x7adc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
    // 0x7adc14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7adc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adc18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7adc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7adc1c: 0xc1ed1e0  jal         func_7B4780
    ctx->pc = 0x7ADC1Cu;
    SET_GPR_U32(ctx, 31, 0x7ADC24u);
    ctx->pc = 0x7ADC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADC1Cu;
    // 0x7adc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4780u, 0x7ADC1Cu, 0x7ADC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADC24u;
label_7adc24:
    // 0x7adc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7adc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adc28: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x7adc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x7adc2c: 0xc1ed1e0  jal         func_7B4780
    ctx->pc = 0x7ADC2Cu;
    SET_GPR_U32(ctx, 31, 0x7ADC34u);
    ctx->pc = 0x7ADC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADC2Cu;
    // 0x7adc30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4780u, 0x7ADC2Cu, 0x7ADC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADC34u;
label_7adc34:
    // 0x7adc34: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7ADC34u;
    SET_GPR_U32(ctx, 31, 0x7ADC3Cu);
    ctx->pc = 0x7ADC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADC34u;
    // 0x7adc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7ADC34u, 0x7ADC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADC3Cu;
label_7adc3c:
    // 0x7adc3c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x7ADC3Cu;
    {
        const bool branch_taken_0x7adc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADC3Cu;
        // 0x7adc40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adc3c) {
            ctx->pc = 0x7ADD14u;
            goto label_7add14;
        }
    }
    ctx->pc = 0x7ADC44u;
    // 0x7adc44: 0xc1eb9c2  jal         func_7AE708
    ctx->pc = 0x7ADC44u;
    SET_GPR_U32(ctx, 31, 0x7ADC4Cu);
    ctx->pc = 0x7ADC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADC44u;
    // 0x7adc48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE708u, 0x7ADC44u, 0x7ADC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADC4Cu;
label_7adc4c:
    // 0x7adc4c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x7adc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x7adc50: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x7adc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x7adc54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7adc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7adc58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ADC58u;
    {
        const bool branch_taken_0x7adc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADC58u;
        // 0x7adc5c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adc58) {
            ctx->pc = 0x7ADC6Cu;
            goto label_7adc6c;
        }
    }
    ctx->pc = 0x7ADC60u;
    // 0x7adc60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7adc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7adc64: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x7ADC64u;
    {
        const bool branch_taken_0x7adc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADC64u;
        // 0x7adc68: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adc64) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADC6Cu;
label_7adc6c:
    // 0x7adc6c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x7adc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adc70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7adc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7adc74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7adc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7adc78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7adc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7adc7c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x7adc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7adc80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7adc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7adc84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7adc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7adc88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7adc8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7adc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7adc90: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x7adc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x7adc94: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x7adc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7adc98: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7ADC98u;
    {
        const bool branch_taken_0x7adc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x7ADC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADC98u;
        // 0x7adc9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adc98) {
            ctx->pc = 0x7ADCE0u;
            goto label_7adce0;
        }
    }
    ctx->pc = 0x7ADCA0u;
    // 0x7adca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ADCA0u;
    {
        const bool branch_taken_0x7adca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADCA0u;
        // 0x7adca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adca0) {
            ctx->pc = 0x7ADCB8u;
            goto label_7adcb8;
        }
    }
    ctx->pc = 0x7ADCA8u;
    // 0x7adca8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADCA8u;
    {
        const bool branch_taken_0x7adca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adca8) {
            ctx->pc = 0x7ADCD0u;
            goto label_7adcd0;
        }
    }
    ctx->pc = 0x7ADCB0u;
    // 0x7adcb0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7ADCB0u;
    {
        const bool branch_taken_0x7adcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adcb0) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADCB8u;
label_7adcb8:
    // 0x7adcb8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7ADCB8u;
    {
        const bool branch_taken_0x7adcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7ADCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADCB8u;
        // 0x7adcbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adcb8) {
            ctx->pc = 0x7ADCF0u;
            goto label_7adcf0;
        }
    }
    ctx->pc = 0x7ADCC0u;
    // 0x7adcc0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7ADCC0u;
    {
        const bool branch_taken_0x7adcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7adcc0) {
            ctx->pc = 0x7ADD00u;
            goto label_7add00;
        }
    }
    ctx->pc = 0x7ADCC8u;
    // 0x7adcc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7ADCC8u;
    {
        const bool branch_taken_0x7adcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adcc8) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADCD0u;
label_7adcd0:
    // 0x7adcd0: 0xc1eb74a  jal         func_7ADD28
    ctx->pc = 0x7ADCD0u;
    SET_GPR_U32(ctx, 31, 0x7ADCD8u);
    ctx->pc = 0x7ADCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADCD0u;
    // 0x7adcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADD28u, 0x7ADCD0u, 0x7ADCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADCD8u;
label_7adcd8:
    // 0x7adcd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7ADCD8u;
    {
        const bool branch_taken_0x7adcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adcd8) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADCE0u;
label_7adce0:
    // 0x7adce0: 0xc1eb796  jal         func_7ADE58
    ctx->pc = 0x7ADCE0u;
    SET_GPR_U32(ctx, 31, 0x7ADCE8u);
    ctx->pc = 0x7ADCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADCE0u;
    // 0x7adce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADE58u, 0x7ADCE0u, 0x7ADCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADCE8u;
label_7adce8:
    // 0x7adce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7ADCE8u;
    {
        const bool branch_taken_0x7adce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adce8) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADCF0u;
label_7adcf0:
    // 0x7adcf0: 0xc1eb7ae  jal         func_7ADEB8
    ctx->pc = 0x7ADCF0u;
    SET_GPR_U32(ctx, 31, 0x7ADCF8u);
    ctx->pc = 0x7ADCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADCF0u;
    // 0x7adcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADEB8u, 0x7ADCF0u, 0x7ADCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADCF8u;
label_7adcf8:
    // 0x7adcf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7ADCF8u;
    {
        const bool branch_taken_0x7adcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adcf8) {
            ctx->pc = 0x7ADD08u;
            goto label_7add08;
        }
    }
    ctx->pc = 0x7ADD00u;
label_7add00:
    // 0x7add00: 0xc1eb846  jal         func_7AE118
    ctx->pc = 0x7ADD00u;
    SET_GPR_U32(ctx, 31, 0x7ADD08u);
    ctx->pc = 0x7ADD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADD00u;
    // 0x7add04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE118u, 0x7ADD00u, 0x7ADD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADD08u;
label_7add08:
    // 0x7add08: 0xc1eb952  jal         func_7AE548
    ctx->pc = 0x7ADD08u;
    SET_GPR_U32(ctx, 31, 0x7ADD10u);
    ctx->pc = 0x7ADD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADD08u;
    // 0x7add0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE548u, 0x7ADD08u, 0x7ADD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADD10u;
label_7add10:
    // 0x7add10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7add10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7add14:
    // 0x7add14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7add14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7add18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7add18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7add1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7add1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7add20: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADD20u;
        // 0x7add24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADD28u;
}
} // namespace gh_event
