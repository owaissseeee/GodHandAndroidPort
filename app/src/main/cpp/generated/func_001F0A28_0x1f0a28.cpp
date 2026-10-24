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

// Function: func_001F0A28
// Address: 0x1f0a28 - 0x1f0bf8
void func_001F0A28_0x1f0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0A28_0x1f0a28");
#endif

    switch (ctx->pc) {
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0bb8u: goto label_1f0bb8;
        case 0x1f0bc0u: goto label_1f0bc0;
        default: break;
    }

    ctx->pc = 0x1f0a28u;

    // 0x1f0a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a38: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0a3c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1f0a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f0a40: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F0A40u;
    {
        const bool branch_taken_0x1f0a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A40u;
        // 0x1f0a44: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a40) {
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0A48u;
    // 0x1f0a48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0a4c: 0x2442bea0  addiu       $v0, $v0, -0x4160
    ctx->pc = 0x1f0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950560));
    // 0x1f0a50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0a58: 0x800008  jr          $a0
    ctx->pc = 0x1F0A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0A60u: goto label_1f0a60;
            case 0x1F0A80u: goto label_1f0a80;
            case 0x1F0AACu: goto label_1f0aac;
            case 0x1F0AD8u: goto label_1f0ad8;
            case 0x1F0B04u: goto label_1f0b04;
            case 0x1F0B30u: goto label_1f0b30;
            case 0x1F0B5Cu: goto label_1f0b5c;
            case 0x1F0B88u: goto label_1f0b88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A60u;
label_1f0a60:
    // 0x1f0a60: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F0A60u;
    SET_GPR_U32(ctx, 31, 0x1F0A68u);
    ctx->pc = 0x1F0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A60u;
    // 0x1f0a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F0A60u, 0x1F0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A68u;
label_1f0a68:
    // 0x1f0a68: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0a6c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1f0a70: 0xae030ba0  sw          $v1, 0xBA0($s0)
    ctx->pc = 0x1f0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
    // 0x1f0a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0a78: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1F0A78u;
    {
        const bool branch_taken_0x1f0a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A78u;
        // 0x1f0a7c: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a78) {
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0A80u;
label_1f0a80:
    // 0x1f0a80: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0a84: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F0A84u;
    {
        const bool branch_taken_0x1f0a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A84u;
        // 0x1f0a88: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a84) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0A8Cu;
    // 0x1f0a8c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a94: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0a98: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0a98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0a9c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0aa0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0aa4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1F0AA4u;
    {
        const bool branch_taken_0x1f0aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA4u;
        // 0x1f0aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aa4) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0AACu;
label_1f0aac:
    // 0x1f0aac: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0ab0: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F0AB0u;
    {
        const bool branch_taken_0x1f0ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AB0u;
        // 0x1f0ab4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ab0) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0AB8u;
    // 0x1f0ab8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0ac0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0ac4: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0ac4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0ac8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0acc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0ad0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1F0AD0u;
    {
        const bool branch_taken_0x1f0ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD0u;
        // 0x1f0ad4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ad0) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0AD8u;
label_1f0ad8:
    // 0x1f0ad8: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0adc: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F0ADCu;
    {
        const bool branch_taken_0x1f0adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ADCu;
        // 0x1f0ae0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0adc) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0AE4u;
    // 0x1f0ae4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0ae8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0aec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0af0: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0af4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0af8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0afc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F0AFCu;
    {
        const bool branch_taken_0x1f0afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AFCu;
        // 0x1f0b00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0afc) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0B04u;
label_1f0b04:
    // 0x1f0b04: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0b08: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F0B08u;
    {
        const bool branch_taken_0x1f0b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B08u;
        // 0x1f0b0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b08) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0B10u;
    // 0x1f0b10: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0b18: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b1c: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0b1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0b20: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0b24: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0b28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F0B28u;
    {
        const bool branch_taken_0x1f0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B28u;
        // 0x1f0b2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b28) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0B30u;
label_1f0b30:
    // 0x1f0b30: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0b34: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F0B34u;
    {
        const bool branch_taken_0x1f0b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B34u;
        // 0x1f0b38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b34) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0B3Cu;
    // 0x1f0b3c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0b44: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b48: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0b48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0b4c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0b50: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0b54: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F0B54u;
    {
        const bool branch_taken_0x1f0b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B54u;
        // 0x1f0b58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b54) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0B5Cu;
label_1f0b5c:
    // 0x1f0b5c: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0b60: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F0B60u;
    {
        const bool branch_taken_0x1f0b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B60u;
        // 0x1f0b64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b60) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0B68u;
    // 0x1f0b68: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f0b70: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b74: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0b74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0b78: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0b7c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0b80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0B80u;
    {
        const bool branch_taken_0x1f0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B80u;
        // 0x1f0b84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b80) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0B88u;
label_1f0b88:
    // 0x1f0b88: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0b8c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0B8Cu;
    {
        const bool branch_taken_0x1f0b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B8Cu;
        // 0x1f0b90: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b8c) {
            ctx->pc = 0x1F0BE4u;
            goto label_1f0be4;
        }
    }
    ctx->pc = 0x1F0B94u;
    // 0x1f0b94: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1f0b98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0b9c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0ba0: 0xa0606aa5  sb          $zero, 0x6AA5($v1)
    ctx->pc = 0x1f0ba0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0ba4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ba8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0bac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f0bb0:
    // 0x1f0bb0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0BB0u;
    SET_GPR_U32(ctx, 31, 0x1F0BB8u);
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0BB0u, 0x1F0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BB8u;
label_1f0bb8:
    // 0x1f0bb8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0BB8u;
    SET_GPR_U32(ctx, 31, 0x1F0BC0u);
    ctx->pc = 0x1F0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BB8u;
    // 0x1f0bbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0BB8u, 0x1F0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BC0u;
label_1f0bc0:
    // 0x1f0bc0: 0x8e030b8c  lw          $v1, 0xB8C($s0)
    ctx->pc = 0x1f0bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f0bc4: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x1f0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1f0bc8: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0bcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f0bd0: 0xae040ba0  sw          $a0, 0xBA0($s0)
    ctx->pc = 0x1f0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 4));
    // 0x1f0bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0bd8: 0xae030b8c  sw          $v1, 0xB8C($s0)
    ctx->pc = 0x1f0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 3));
    // 0x1f0bdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0BDCu;
    {
        const bool branch_taken_0x1f0bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BDCu;
        // 0x1f0be0: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bdc) {
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0BE4u;
label_1f0be4:
    // 0x1f0be4: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f0be8:
    // 0x1f0be8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF0u;
        // 0x1f0bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BF8u;
}
