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

// Function: func_002B4A50
// Address: 0x2b4a50 - 0x2b4bc0
void func_002B4A50_0x2b4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4A50_0x2b4a50");
#endif

    switch (ctx->pc) {
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4b64u: goto label_2b4b64;
        default: break;
    }

    ctx->pc = 0x2b4a50u;

    // 0x2b4a50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b4a54: 0x3c07ff7f  lui         $a3, 0xFF7F
    ctx->pc = 0x2b4a54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65407 << 16));
    // 0x2b4a58: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2b4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2b4a5c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2b4a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x2b4a60: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2b4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2b4a64: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2b4a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2b4a68: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2b4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2b4a6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a70: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2b4a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2b4a74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b4a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2b4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2b4a7c: 0x3c14f7ff  lui         $s4, 0xF7FF
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63487 << 16));
    // 0x2b4a80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b4a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b4a84: 0x3c15fbff  lui         $s5, 0xFBFF
    ctx->pc = 0x2b4a84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64511 << 16));
    // 0x2b4a88: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2b4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2b4a8c: 0x3c16feff  lui         $s6, 0xFEFF
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4a90: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2b4a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2b4a94: 0x3c17efff  lui         $s7, 0xEFFF
    ctx->pc = 0x2b4a94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)61439 << 16));
    // 0x2b4a98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b4a9c: 0x3c1edfff  lui         $fp, 0xDFFF
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57343 << 16));
    // 0x2b4aa0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2b4aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2b4aa4: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x2b4aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x2b4aa8: 0xa2400014  sb          $zero, 0x14($s2)
    ctx->pc = 0x2b4aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4aac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2b4aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2b4ab0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4ab4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2b4ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2b4ab8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2b4ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2b4abc: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x2b4ac0: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2b4ac4: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x2b4ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b4ac8: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x2b4ac8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x2b4acc: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x2b4accu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x2b4ad0: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2b4ad0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x2b4ad4: 0x0  nop
    ctx->pc = 0x2b4ad4u;
    // NOP
label_2b4ad8:
    // 0x2b4ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b4adc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4ADCu;
    {
        const bool branch_taken_0x2b4adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4ADCu;
        // 0x2b4ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4adc) {
            ctx->pc = 0x2B4AE8u;
            goto label_2b4ae8;
        }
    }
    ctx->pc = 0x2B4AE4u;
    // 0x2b4ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4ae8:
    // 0x2b4ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4aec: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4AECu;
    {
        const bool branch_taken_0x2b4aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4aec) {
            ctx->pc = 0x2B4AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4AECu;
            // 0x2b4af0: 0x7fa50000  sq          $a1, 0x0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B50u;
            goto label_2b4b50;
        }
    }
    ctx->pc = 0x2B4AF4u;
    // 0x2b4af4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4af8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B4AF8u;
    {
        const bool branch_taken_0x2b4af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4af8) {
            ctx->pc = 0x2B4AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4AF8u;
            // 0x2b4afc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B80u;
            goto label_2b4b80;
        }
    }
    ctx->pc = 0x2B4B00u;
    // 0x2b4b00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b4b04: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b4b08: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B4B08u;
    {
        const bool branch_taken_0x2b4b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B08u;
        // 0x2b4b0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b08) {
            ctx->pc = 0x2B4B7Cu;
            goto label_2b4b7c;
        }
    }
    ctx->pc = 0x2B4B10u;
    // 0x2b4b10: 0x2641004  sllv        $v0, $a0, $s3
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x2b4b14: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b4b14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b4b18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4b1c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B4B1Cu;
    {
        const bool branch_taken_0x2b4b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B1Cu;
        // 0x2b4b20: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b1c) {
            ctx->pc = 0x2B4B7Cu;
            goto label_2b4b7c;
        }
    }
    ctx->pc = 0x2B4B24u;
    // 0x2b4b24: 0x8d027a80  lw          $v0, 0x7A80($t0)
    ctx->pc = 0x2b4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31360)));
    // 0x2b4b28: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2b4b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2b4b2c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b4b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b4b30: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b4b34: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2b4b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2b4b38: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2b4b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2b4b3c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2b4b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2b4b40: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2b4b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2b4b44: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2b4b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2b4b48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B4B48u;
    {
        const bool branch_taken_0x2b4b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B48u;
        // 0x2b4b4c: 0xad027a80  sw          $v0, 0x7A80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 31360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b48) {
            ctx->pc = 0x2B4B7Cu;
            goto label_2b4b7c;
        }
    }
    ctx->pc = 0x2B4B50u;
label_2b4b50:
    // 0x2b4b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b54: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2b4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x2b4b58: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2b4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x2b4b5c: 0xc0b4dd4  jal         func_2D3750
    ctx->pc = 0x2B4B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B64u);
    ctx->pc = 0x2B4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B5Cu;
    // 0x2b4b60: 0x7fa80030  sq          $t0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3750u, 0x2B4B5Cu, 0x2B4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B64u;
label_2b4b64:
    // 0x2b4b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4b68: 0xa2420014  sb          $v0, 0x14($s2)
    ctx->pc = 0x2b4b68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4b6c: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x2b4b6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4b70: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x2b4b70u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4b74: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x2b4b74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4b78: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x2b4b78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4b7c:
    // 0x2b4b7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b4b80:
    // 0x2b4b80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b4b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b4b84: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2b4b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b4b88: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2B4B88u;
    {
        const bool branch_taken_0x2b4b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B88u;
        // 0x2b4b8c: 0x263100ac  addiu       $s1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b88) {
            ctx->pc = 0x2B4AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4B90u;
    // 0x2b4b90: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2b4b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b4b94: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2b4b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b4b98: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2b4b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b4b9c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2b4b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b4ba0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2b4ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b4ba4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2b4ba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4ba8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b4ba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4bac: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2b4bacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4bb0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2b4bb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4bb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b4bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BB8u;
        // 0x2b4bbc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BC0u;
}
