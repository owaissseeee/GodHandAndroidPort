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

// Function: func_003BA3D8
// Address: 0x3ba3d8 - 0x3ba4f8
void func_003BA3D8_0x3ba3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA3D8_0x3ba3d8");
#endif

    switch (ctx->pc) {
        case 0x3ba4a4u: goto label_3ba4a4;
        default: break;
    }

    ctx->pc = 0x3ba3d8u;

    // 0x3ba3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba3dc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ba3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ba3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ba3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ba3e4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3ba3e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ba3e8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BA3E8u;
    {
        const bool branch_taken_0x3ba3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA3E8u;
        // 0x3ba3ec: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3e8) {
            ctx->pc = 0x3BA410u;
            goto label_3ba410;
        }
    }
    ctx->pc = 0x3BA3F0u;
    // 0x3ba3f0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3ba3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ba3f4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x3ba3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x3ba3f8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA3F8u;
    {
        const bool branch_taken_0x3ba3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ba3f8) {
            ctx->pc = 0x3BA3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA3F8u;
            // 0x3ba3fc: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA418u;
            goto label_3ba418;
        }
    }
    ctx->pc = 0x3BA400u;
    // 0x3ba400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba404: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ba404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ba408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BA408u;
    {
        const bool branch_taken_0x3ba408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA408u;
        // 0x3ba40c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba408) {
            ctx->pc = 0x3BA448u;
            goto label_3ba448;
        }
    }
    ctx->pc = 0x3BA410u;
label_3ba410:
    // 0x3ba410: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3ba410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ba414: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x3ba414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_3ba418:
    // 0x3ba418: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BA418u;
    {
        const bool branch_taken_0x3ba418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA418u;
        // 0x3ba41c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba418) {
            ctx->pc = 0x3BA440u;
            goto label_3ba440;
        }
    }
    ctx->pc = 0x3BA420u;
    // 0x3ba420: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3ba420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ba424: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ba424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ba428: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BA428u;
    {
        const bool branch_taken_0x3ba428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA428u;
        // 0x3ba42c: 0x24840978  addiu       $a0, $a0, 0x978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba428) {
            ctx->pc = 0x3BA49Cu;
            goto label_3ba49c;
        }
    }
    ctx->pc = 0x3BA430u;
    // 0x3ba430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ba430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ba434: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ba434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ba438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA438u;
    {
        const bool branch_taken_0x3ba438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA438u;
        // 0x3ba43c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba438) {
            ctx->pc = 0x3BA448u;
            goto label_3ba448;
        }
    }
    ctx->pc = 0x3BA440u;
label_3ba440:
    // 0x3ba440: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3BA440u;
    {
        const bool branch_taken_0x3ba440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA440u;
        // 0x3ba444: 0x24840978  addiu       $a0, $a0, 0x978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba440) {
            ctx->pc = 0x3BA49Cu;
            goto label_3ba49c;
        }
    }
    ctx->pc = 0x3BA448u;
label_3ba448:
    // 0x3ba448: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ba448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ba44c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ba44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ba450: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x3ba450u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x3ba454: 0x2c830003  sltiu       $v1, $a0, 0x3
    ctx->pc = 0x3ba454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ba458: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA458u;
    {
        const bool branch_taken_0x3ba458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA458u;
        // 0x3ba45c: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba458) {
            ctx->pc = 0x3BA470u;
            goto label_3ba470;
        }
    }
    ctx->pc = 0x3BA460u;
    // 0x3ba460: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba464: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3BA464u;
    {
        const bool branch_taken_0x3ba464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA464u;
        // 0x3ba468: 0x248409a8  addiu       $a0, $a0, 0x9A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba464) {
            ctx->pc = 0x3BA49Cu;
            goto label_3ba49c;
        }
    }
    ctx->pc = 0x3BA46Cu;
    // 0x3ba46c: 0x0  nop
    ctx->pc = 0x3ba46cu;
    // NOP
label_3ba470:
    // 0x3ba470: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ba470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ba474: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ba478: 0x8c42c518  lw          $v0, -0x3AE8($v0)
    ctx->pc = 0x3ba478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952216)));
    // 0x3ba47c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x3ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x3ba480: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ba480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ba484: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x3ba484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3ba488: 0x2ca20026  sltiu       $v0, $a1, 0x26
    ctx->pc = 0x3ba488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x3ba48c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA48Cu;
    {
        const bool branch_taken_0x3ba48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba48c) {
            ctx->pc = 0x3BA490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA48Cu;
            // 0x3ba490: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA4B0u;
            goto label_3ba4b0;
        }
    }
    ctx->pc = 0x3BA494u;
    // 0x3ba494: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba498: 0x248409d8  addiu       $a0, $a0, 0x9D8
    ctx->pc = 0x3ba498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2520));
label_3ba49c:
    // 0x3ba49c: 0xc0ee778  jal         func_3B9DE0
    ctx->pc = 0x3BA49Cu;
    SET_GPR_U32(ctx, 31, 0x3BA4A4u);
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA49Cu, 0x3BA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA4A4u;
label_3ba4a4:
    // 0x3ba4a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA4A4u;
    {
        const bool branch_taken_0x3ba4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA4A4u;
        // 0x3ba4a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba4a4) {
            ctx->pc = 0x3BA4E8u;
            goto label_3ba4e8;
        }
    }
    ctx->pc = 0x3BA4ACu;
    // 0x3ba4ac: 0x0  nop
    ctx->pc = 0x3ba4acu;
    // NOP
label_3ba4b0:
    // 0x3ba4b0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3ba4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3ba4b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ba4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ba4b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ba4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ba4bc: 0x8c63c528  lw          $v1, -0x3AD8($v1)
    ctx->pc = 0x3ba4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952232)));
    // 0x3ba4c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ba4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba4c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ba4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3ba4c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ba4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ba4cc: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x3ba4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x3ba4d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ba4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ba4d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ba4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ba4d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba4dc: 0x8c63c5c8  lw          $v1, -0x3A38($v1)
    ctx->pc = 0x3ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952392)));
    // 0x3ba4e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ba4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ba4e4: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x3ba4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
label_3ba4e8:
    // 0x3ba4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA4ECu;
        // 0x3ba4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA4F4u;
    // 0x3ba4f4: 0x0  nop
    ctx->pc = 0x3ba4f4u;
    // NOP
    ctx->pc = 0x3ba4f8u;
}
