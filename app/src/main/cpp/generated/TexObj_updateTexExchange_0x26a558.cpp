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

// Function: TexObj_updateTexExchange
// Address: 0x26a558 - 0x26a638
void TexObj_updateTexExchange_0x26a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexObj_updateTexExchange_0x26a558");
#endif

    switch (ctx->pc) {
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5d8u: goto label_26a5d8;
        default: break;
    }

    ctx->pc = 0x26a558u;

    // 0x26a558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a55c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26a560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a568: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26a56c: 0x38420251  xori        $v0, $v0, 0x251
    ctx->pc = 0x26a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)593);
    // 0x26a570: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x26A570u;
    {
        const bool branch_taken_0x26a570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a570) {
            ctx->pc = 0x26A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A570u;
            // 0x26a574: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A628u;
            goto label_26a628;
        }
    }
    ctx->pc = 0x26A578u;
    // 0x26a578: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x26a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x26a57c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26a580: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x26A580u;
    {
        const bool branch_taken_0x26a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a580) {
            ctx->pc = 0x26A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A580u;
            // 0x26a584: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A628u;
            goto label_26a628;
        }
    }
    ctx->pc = 0x26A588u;
    // 0x26a588: 0x96020548  lhu         $v0, 0x548($s0)
    ctx->pc = 0x26a588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x26a58c: 0x8604054a  lh          $a0, 0x54A($s0)
    ctx->pc = 0x26a58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x26a590: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26a590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26a594: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x26a594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26a598: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x26a598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26a59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a5a0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x26a5a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26a5a4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26a5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26a5a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A5A8u;
    {
        const bool branch_taken_0x26a5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a5a8) {
            ctx->pc = 0x26A5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A5A8u;
            // 0x26a5ac: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A5C0u;
            goto label_26a5c0;
        }
    }
    ctx->pc = 0x26A5B0u;
    // 0x26a5b0: 0xc09cfc2  jal         func_273F08
    ctx->pc = 0x26A5B0u;
    SET_GPR_U32(ctx, 31, 0x26A5B8u);
    ctx->pc = 0x26A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5B0u;
    // 0x26a5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F08u, 0x26A5B0u, 0x26A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5B8u;
label_26a5b8:
    // 0x26a5b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26A5B8u;
    {
        const bool branch_taken_0x26a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5B8u;
        // 0x26a5bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5b8) {
            ctx->pc = 0x26A628u;
            goto label_26a628;
        }
    }
    ctx->pc = 0x26A5C0u;
label_26a5c0:
    // 0x26a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5c4: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x26a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x26a5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5cc: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x26a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26a5d0: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x26A5D0u;
    SET_GPR_U32(ctx, 31, 0x26A5D8u);
    ctx->pc = 0x26A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5D0u;
    // 0x26a5d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x26A5D0u, 0x26A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5D8u;
label_26a5d8:
    // 0x26a5d8: 0x920217b0  lbu         $v0, 0x17B0($s0)
    ctx->pc = 0x26a5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6064)));
    // 0x26a5dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26a5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a5e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A5E0u;
    {
        const bool branch_taken_0x26a5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e0) {
            ctx->pc = 0x26A610u;
            goto label_26a610;
        }
    }
    ctx->pc = 0x26A5E8u;
    // 0x26a5e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A5E8u;
    {
        const bool branch_taken_0x26a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a5e8) {
            ctx->pc = 0x26A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A5E8u;
            // 0x26a5ec: 0x8e020254  lw          $v0, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A600u;
            goto label_26a600;
        }
    }
    ctx->pc = 0x26A5F0u;
    // 0x26a5f0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x26a5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x26a5f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A5F4u;
    {
        const bool branch_taken_0x26a5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a5f4) {
            ctx->pc = 0x26A5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A5F4u;
            // 0x26a5f8: 0x8e030254  lw          $v1, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A614u;
            goto label_26a614;
        }
    }
    ctx->pc = 0x26A5FCu;
    // 0x26a5fc: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_26a600:
    // 0x26a600: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26a604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26a608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A608u;
    {
        const bool branch_taken_0x26a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A608u;
        // 0x26a60c: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a608) {
            ctx->pc = 0x26A624u;
            goto label_26a624;
        }
    }
    ctx->pc = 0x26A610u;
label_26a610:
    // 0x26a610: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x26a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_26a614:
    // 0x26a614: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x26a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x26a618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26a61c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26a61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26a620: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x26a620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
label_26a624:
    // 0x26a624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26a628:
    // 0x26a628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a62c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A62Cu;
        // 0x26a630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A634u;
    // 0x26a634: 0x0  nop
    ctx->pc = 0x26a634u;
    // NOP
    ctx->pc = 0x26a638u;
}
