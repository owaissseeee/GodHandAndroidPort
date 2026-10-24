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

// Function: displayOmLayer
// Address: 0x2db478 - 0x2db518
void displayOmLayer_0x2db478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("displayOmLayer_0x2db478");
#endif

    switch (ctx->pc) {
        case 0x2db4a0u: goto label_2db4a0;
        default: break;
    }

    ctx->pc = 0x2db478u;

    // 0x2db478: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2db478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2db47c: 0x8cc24c58  lw          $v0, 0x4C58($a2)
    ctx->pc = 0x2db47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C58u));
    // 0x2db480: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db484: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2db484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db488: 0x11030020  beq         $t0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB488u;
    {
        const bool branch_taken_0x2db488 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB488u;
        // 0x2db48c: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db488) {
            ctx->pc = 0x2DB50Cu;
            goto label_2db50c;
        }
    }
    ctx->pc = 0x2DB490u;
    // 0x2db490: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2db490u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2db494: 0x240b0300  addiu       $t3, $zero, 0x300
    ctx->pc = 0x2db494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2db498: 0x354afffd  ori         $t2, $t2, 0xFFFD
    ctx->pc = 0x2db498u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    // 0x2db49c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2db49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2db4a0:
    // 0x2db4a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db4a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4a4: 0x94c302fe  lhu         $v1, 0x2FE($a2)
    ctx->pc = 0x2db4a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
    // 0x2db4a8: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x2db4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2db4ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2db4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2db4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB4B0u;
    {
        const bool branch_taken_0x2db4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4B0u;
        // 0x2db4b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4b0) {
            ctx->pc = 0x2DB4C0u;
            goto label_2db4c0;
        }
    }
    ctx->pc = 0x2DB4B8u;
    // 0x2db4b8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x2db4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2db4bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2db4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db4c0:
    // 0x2db4c0: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x2db4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2db4c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB4C4u;
    {
        const bool branch_taken_0x2db4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4C4u;
        // 0x2db4c8: 0x8d834c58  lw          $v1, 0x4C58($t4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4c4) {
            ctx->pc = 0x2DB4FCu;
            goto label_2db4fc;
        }
    }
    ctx->pc = 0x2DB4CCu;
    // 0x2db4cc: 0x90e202fd  lbu         $v0, 0x2FD($a3)
    ctx->pc = 0x2db4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 765)));
    // 0x2db4d0: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB4D0u;
    {
        const bool branch_taken_0x2db4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db4d0) {
            ctx->pc = 0x2DB4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB4D0u;
            // 0x2db4d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB500u;
            goto label_2db500;
        }
    }
    ctx->pc = 0x2DB4D8u;
    // 0x2db4d8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB4D8u;
    {
        const bool branch_taken_0x2db4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4d8) {
            ctx->pc = 0x2DB4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB4D8u;
            // 0x2db4dc: 0x8cc20250  lw          $v0, 0x250($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB4F0u;
            goto label_2db4f0;
        }
    }
    ctx->pc = 0x2DB4E0u;
    // 0x2db4e0: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x2db4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
    // 0x2db4e4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2db4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2db4e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB4E8u;
    {
        const bool branch_taken_0x2db4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4E8u;
        // 0x2db4ec: 0xace20250  sw          $v0, 0x250($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4e8) {
            ctx->pc = 0x2DB4F8u;
            goto label_2db4f8;
        }
    }
    ctx->pc = 0x2DB4F0u;
label_2db4f0:
    // 0x2db4f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2db4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2db4f4: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x2db4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
label_2db4f8:
    // 0x2db4f8: 0x8d834c58  lw          $v1, 0x4C58($t4)
    ctx->pc = 0x2db4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 19544)));
label_2db4fc:
    // 0x2db4fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2db4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2db500:
    // 0x2db500: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db504: 0x5502ffe6  bnel        $t0, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DB504u;
    {
        const bool branch_taken_0x2db504 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db504) {
            ctx->pc = 0x2DB508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB504u;
            // 0x2db508: 0x8d060000  lw          $a2, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db4a0;
        }
    }
    ctx->pc = 0x2DB50Cu;
label_2db50c:
    // 0x2db50c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB514u;
    // 0x2db514: 0x0  nop
    ctx->pc = 0x2db514u;
    // NOP
    ctx->pc = 0x2db518u;
}
