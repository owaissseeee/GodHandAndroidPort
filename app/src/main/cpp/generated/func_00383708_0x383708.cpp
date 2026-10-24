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

// Function: func_00383708
// Address: 0x383708 - 0x3837e8
void func_00383708_0x383708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383708_0x383708");
#endif

    switch (ctx->pc) {
        case 0x383788u: goto label_383788;
        case 0x383798u: goto label_383798;
        case 0x3837acu: goto label_3837ac;
        case 0x3837c8u: goto label_3837c8;
        default: break;
    }

    ctx->pc = 0x383708u;

    // 0x383708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38370c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x383710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x383714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38371c: 0x26110370  addiu       $s1, $s0, 0x370
    ctx->pc = 0x38371cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x383720: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x383720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x383724: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x383724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x383728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x383728u;
    {
        const bool branch_taken_0x383728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383728u;
        // 0x38372c: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383728) {
            ctx->pc = 0x383748u;
            goto label_383748;
        }
    }
    ctx->pc = 0x383730u;
    // 0x383730: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x383730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x383734: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383734u;
    {
        const bool branch_taken_0x383734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383734) {
            ctx->pc = 0x383738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383734u;
            // 0x383738: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38373Cu;
            goto label_38373c;
        }
    }
    ctx->pc = 0x38373Cu;
label_38373c:
    // 0x38373c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x383740: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x383740u;
    {
        const bool branch_taken_0x383740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383740u;
        // 0x383744: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383740) {
            ctx->pc = 0x383778u;
            goto label_383778;
        }
    }
    ctx->pc = 0x383748u;
label_383748:
    // 0x383748: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x383748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x38374c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x38374Cu;
    {
        const bool branch_taken_0x38374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38374c) {
            ctx->pc = 0x383750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38374Cu;
            // 0x383750: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3837D4u;
            goto label_3837d4;
        }
    }
    ctx->pc = 0x383754u;
    // 0x383754: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x383754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x383758: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x383758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x38375c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x383760: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x383760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383764u;
    {
        const bool branch_taken_0x383764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383764u;
        // 0x383768: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383764) {
            ctx->pc = 0x383774u;
            goto label_383774;
        }
    }
    ctx->pc = 0x38376Cu;
    // 0x38376c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38376Cu;
    {
        const bool branch_taken_0x38376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38376Cu;
        // 0x383770: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38376c) {
            ctx->pc = 0x383778u;
            goto label_383778;
        }
    }
    ctx->pc = 0x383774u;
label_383774:
    // 0x383774: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x383774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_383778:
    // 0x383778: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x383778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x38377c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x38377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x383780: 0xc0c8e46  jal         func_323918
    ctx->pc = 0x383780u;
    SET_GPR_U32(ctx, 31, 0x383788u);
    ctx->pc = 0x383784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383780u;
    // 0x383784: 0x92050006  lbu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323918u, 0x383780u, 0x383788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383788u;
label_383788:
    // 0x383788: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x383788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x38378c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x38378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x383790: 0xc0c722e  jal         func_31C8B8
    ctx->pc = 0x383790u;
    SET_GPR_U32(ctx, 31, 0x383798u);
    ctx->pc = 0x383794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383790u;
    // 0x383794: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8B8u, 0x383790u, 0x383798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383798u;
label_383798:
    // 0x383798: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x383798u;
    {
        const bool branch_taken_0x383798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383798u;
        // 0x38379c: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383798) {
            ctx->pc = 0x3837B8u;
            goto label_3837b8;
        }
    }
    ctx->pc = 0x3837A0u;
    // 0x3837a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3837a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3837a4: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x3837A4u;
    SET_GPR_U32(ctx, 31, 0x3837ACu);
    ctx->pc = 0x3837A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3837A4u;
    // 0x3837a8: 0x2484ca58  addiu       $a0, $a0, -0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x3837A4u, 0x3837ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3837ACu;
label_3837ac:
    // 0x3837ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3837acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3837b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3837B0u;
    {
        const bool branch_taken_0x3837b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3837B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837B0u;
        // 0x3837b4: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837b0) {
            ctx->pc = 0x3837D0u;
            goto label_3837d0;
        }
    }
    ctx->pc = 0x3837B8u;
label_3837b8:
    // 0x3837b8: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x3837b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x3837bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3837bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3837c0: 0xc0c8fa0  jal         func_323E80
    ctx->pc = 0x3837C0u;
    SET_GPR_U32(ctx, 31, 0x3837C8u);
    ctx->pc = 0x3837C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3837C0u;
    // 0x3837c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E80u, 0x3837C0u, 0x3837C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3837C8u;
label_3837c8:
    // 0x3837c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3837c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3837cc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3837ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_3837d0:
    // 0x3837d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3837d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3837d4:
    // 0x3837d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3837d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3837d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3837d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3837dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3837DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3837E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837DCu;
        // 0x3837e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3837DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3837E4u;
    // 0x3837e4: 0x0  nop
    ctx->pc = 0x3837e4u;
    // NOP
    ctx->pc = 0x3837e8u;
}
