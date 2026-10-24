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

// Function: func_0015FF10
// Address: 0x15ff10 - 0x160020
void func_0015FF10_0x15ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FF10_0x15ff10");
#endif

    switch (ctx->pc) {
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        case 0x15ff58u: goto label_15ff58;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        default: break;
    }

    ctx->pc = 0x15ff10u;

label_15ff10:
    // 0x15ff10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_15ff14:
    // 0x15ff14: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15ff14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15ff18:
    // 0x15ff18: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_15ff1c:
    // 0x15ff1c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_15ff20:
    // 0x15ff20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15ff24:
    // 0x15ff24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15ff28:
    // 0x15ff28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15ff28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ff2c:
    // 0x15ff2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15ff30:
    // 0x15ff30: 0x24517a84  addiu       $s1, $v0, 0x7A84
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
label_15ff34:
    // 0x15ff34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15ff38:
    // 0x15ff38: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15ff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_15ff3c:
    // 0x15ff3c: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_15ff40:
    if (ctx->pc == 0x15FF40u) {
        ctx->pc = 0x15FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF3Cu;
        // 0x15ff40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF44u;
        goto label_15ff44;
    }
    ctx->pc = 0x15FF3Cu;
    {
        const bool branch_taken_0x15ff3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF3Cu;
        // 0x15ff40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff3c) {
            ctx->pc = 0x160004u;
            goto label_160004;
        }
    }
    ctx->pc = 0x15FF44u;
label_15ff44:
    // 0x15ff44: 0xc0584a2  jal         func_161288
label_15ff48:
    if (ctx->pc == 0x15FF48u) {
        ctx->pc = 0x15FF4Cu;
        goto label_15ff4c;
    }
    ctx->pc = 0x15FF44u;
    SET_GPR_U32(ctx, 31, 0x15FF4Cu);
    ctx->pc = 0x161288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161288u, 0x15FF44u, 0x15FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF4Cu;
label_15ff4c:
    // 0x15ff4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ff50:
    // 0x15ff50: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_15ff54:
    if (ctx->pc == 0x15FF54u) {
        ctx->pc = 0x15FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF50u;
        // 0x15ff54: 0x8e030ee0  lw          $v1, 0xEE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF58u;
        goto label_15ff58;
    }
    ctx->pc = 0x15FF50u;
    {
        const bool branch_taken_0x15ff50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff50) {
            ctx->pc = 0x15FF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF50u;
            // 0x15ff54: 0x8e030ee0  lw          $v1, 0xEE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF70u;
            goto label_15ff70;
        }
    }
    ctx->pc = 0x15FF58u;
label_15ff58:
    // 0x15ff58: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x15ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_15ff5c:
    // 0x15ff5c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15ff60:
    // 0x15ff60: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15ff64:
    // 0x15ff64: 0x60f809  jalr        $v1
label_15ff68:
    if (ctx->pc == 0x15FF68u) {
        ctx->pc = 0x15FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF64u;
        // 0x15ff68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF6Cu;
        goto label_15ff6c;
    }
    ctx->pc = 0x15FF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FF6Cu);
        ctx->pc = 0x15FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF64u;
        // 0x15ff68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FF64u, 0x15FF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FF6Cu;
label_15ff6c:
    // 0x15ff6c: 0x8e030ee0  lw          $v1, 0xEE0($s0)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3808)));
label_15ff70:
    // 0x15ff70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ff74:
    // 0x15ff74: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x15ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_15ff78:
    // 0x15ff78: 0x2624fa1c  addiu       $a0, $s1, -0x5E4
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965788));
label_15ff7c:
    // 0x15ff7c: 0xac8305d8  sw          $v1, 0x5D8($a0)
    ctx->pc = 0x15ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 3));
label_15ff80:
    // 0x15ff80: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x15ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_15ff84:
    // 0x15ff84: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_15ff88:
    // 0x15ff88: 0x8e030ee4  lw          $v1, 0xEE4($s0)
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3812)));
label_15ff8c:
    // 0x15ff8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_15ff90:
    // 0x15ff90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15ff94:
    if (ctx->pc == 0x15FF94u) {
        ctx->pc = 0x15FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF90u;
        // 0x15ff94: 0xac8305e0  sw          $v1, 0x5E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF98u;
        goto label_15ff98;
    }
    ctx->pc = 0x15FF90u;
    {
        const bool branch_taken_0x15ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF90u;
        // 0x15ff94: 0xac8305e0  sw          $v1, 0x5E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff90) {
            ctx->pc = 0x15FFA8u;
            goto label_15ffa8;
        }
    }
    ctx->pc = 0x15FF98u;
label_15ff98:
    // 0x15ff98: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_15ff9c:
    // 0x15ff9c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_15ffa0:
    // 0x15ffa0: 0x10000006  b           . + 4 + (0x6 << 2)
label_15ffa4:
    if (ctx->pc == 0x15FFA4u) {
        ctx->pc = 0x15FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFA0u;
        // 0x15ffa4: 0xae22fffc  sw          $v0, -0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFA8u;
        goto label_15ffa8;
    }
    ctx->pc = 0x15FFA0u;
    {
        const bool branch_taken_0x15ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFA0u;
        // 0x15ffa4: 0xae22fffc  sw          $v0, -0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffa0) {
            ctx->pc = 0x15FFBCu;
            goto label_15ffbc;
        }
    }
    ctx->pc = 0x15FFA8u;
label_15ffa8:
    // 0x15ffa8: 0x8e23fffc  lw          $v1, -0x4($s1)
    ctx->pc = 0x15ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_15ffac:
    // 0x15ffac: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_15ffb0:
    // 0x15ffb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15ffb4:
    // 0x15ffb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15ffb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15ffb8:
    // 0x15ffb8: 0xae23fffc  sw          $v1, -0x4($s1)
    ctx->pc = 0x15ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 3));
label_15ffbc:
    // 0x15ffbc: 0x8e437a84  lw          $v1, 0x7A84($s2)
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
label_15ffc0:
    // 0x15ffc0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x15ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_15ffc4:
    // 0x15ffc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15ffc8:
    // 0x15ffc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ffcc:
    // 0x15ffcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15ffccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15ffd0:
    // 0x15ffd0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15ffd4:
    // 0x15ffd4: 0xae437a84  sw          $v1, 0x7A84($s2)
    ctx->pc = 0x15ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31364), GPR_U32(ctx, 3));
label_15ffd8:
    // 0x15ffd8: 0x26020f08  addiu       $v0, $s0, 0xF08
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3848));
label_15ffdc:
    // 0x15ffdc: 0xa2000ed4  sb          $zero, 0xED4($s0)
    ctx->pc = 0x15ffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
label_15ffe0:
    // 0x15ffe0: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x15ffe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_15ffe4:
    // 0x15ffe4: 0x0  nop
    ctx->pc = 0x15ffe4u;
    // NOP
label_15ffe8:
    // 0x15ffe8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x15ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_15ffec:
    // 0x15ffec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15fff0:
    // 0x15fff0: 0x0  nop
    ctx->pc = 0x15fff0u;
    // NOP
label_15fff4:
    // 0x15fff4: 0x0  nop
    ctx->pc = 0x15fff4u;
    // NOP
label_15fff8:
    // 0x15fff8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_15fffc:
    if (ctx->pc == 0x15FFFCu) {
        ctx->pc = 0x15FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFF8u;
        // 0x15fffc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160000u;
        goto label_160000;
    }
    ctx->pc = 0x15FFF8u;
    {
        const bool branch_taken_0x15fff8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x15FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFF8u;
        // 0x15fffc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fff8) {
            ctx->pc = 0x15FFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ffe8;
        }
    }
    ctx->pc = 0x160000u;
label_160000:
    // 0x160000: 0xa2000f15  sb          $zero, 0xF15($s0)
    ctx->pc = 0x160000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 0));
label_160004:
    // 0x160004: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x160004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160008:
    // 0x160008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16000c:
    // 0x16000c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16000cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160010:
    // 0x160010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160014:
    // 0x160014: 0x3e00008  jr          $ra
label_160018:
    if (ctx->pc == 0x160018u) {
        ctx->pc = 0x160018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160014u;
        // 0x160018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16001Cu;
        goto label_16001c;
    }
    ctx->pc = 0x160014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160014u;
        // 0x160018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16001Cu;
label_16001c:
    // 0x16001c: 0x0  nop
    ctx->pc = 0x16001cu;
    // NOP
    ctx->pc = 0x160020u;
}
