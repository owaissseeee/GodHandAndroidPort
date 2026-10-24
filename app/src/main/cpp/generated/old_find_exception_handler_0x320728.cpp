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

// Function: old_find_exception_handler
// Address: 0x320728 - 0x320800
void old_find_exception_handler_0x320728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("old_find_exception_handler_0x320728");
#endif

    switch (ctx->pc) {
        case 0x320760u: goto label_320760;
        default: break;
    }

    ctx->pc = 0x320728u;

    // 0x320728: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x320728u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32072c: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x32072Cu;
    {
        const bool branch_taken_0x32072c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x320730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32072Cu;
        // 0x320730: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32072c) {
            ctx->pc = 0x3207F8u;
            goto label_3207f8;
        }
    }
    ctx->pc = 0x320734u;
    // 0x320734: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x320734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x320738: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x320738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x32073c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x320740: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x320740u;
    {
        const bool branch_taken_0x320740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x320744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320740u;
        // 0x320744: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320740) {
            ctx->pc = 0x3207DCu;
            goto label_3207dc;
        }
    }
    ctx->pc = 0x320748u;
    // 0x320748: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x32074c: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x32074cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x320750: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x320750u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320754: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x320754u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x320758: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x320758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32075c: 0x0  nop
    ctx->pc = 0x32075cu;
    // NOP
label_320760:
    // 0x320760: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x320760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x320764: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x320764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x320768: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x320768u;
    {
        const bool branch_taken_0x320768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320768) {
            ctx->pc = 0x3207B4u;
            goto label_3207b4;
        }
    }
    ctx->pc = 0x320770u;
    // 0x320770: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x320770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x320774: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x320774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x320778: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x320778u;
    {
        const bool branch_taken_0x320778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320778) {
            ctx->pc = 0x3207B4u;
            goto label_3207b4;
        }
    }
    ctx->pc = 0x320780u;
    // 0x320780: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x320780u;
    {
        const bool branch_taken_0x320780 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x320784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320780u;
        // 0x320784: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x320780) {
            ctx->pc = 0x3207ACu;
            goto label_3207ac;
        }
    }
    ctx->pc = 0x320788u;
    // 0x320788: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x320788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x32078c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x320790: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x320790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x320794: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x320794u;
    {
        const bool branch_taken_0x320794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320794) {
            ctx->pc = 0x320798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320794u;
            // 0x320798: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3207D0u;
            goto label_3207d0;
        }
    }
    ctx->pc = 0x32079Cu;
    // 0x32079c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3207a0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3207a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3207a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3207A4u;
    {
        const bool branch_taken_0x3207a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3207a4) {
            ctx->pc = 0x3207A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3207A4u;
            // 0x3207a8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3207D0u;
            goto label_3207d0;
        }
    }
    ctx->pc = 0x3207ACu;
label_3207ac:
    // 0x3207ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3207ACu;
    {
        const bool branch_taken_0x3207ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207ACu;
        // 0x3207b0: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207ac) {
            ctx->pc = 0x3207CCu;
            goto label_3207cc;
        }
    }
    ctx->pc = 0x3207B4u;
label_3207b4:
    // 0x3207b4: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3207B4u;
    {
        const bool branch_taken_0x3207b4 = (GPR_S64(ctx, 8) < 0);
        if (branch_taken_0x3207b4) {
            ctx->pc = 0x3207B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3207B4u;
            // 0x3207b8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3207D0u;
            goto label_3207d0;
        }
    }
    ctx->pc = 0x3207BCu;
    // 0x3207bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3207bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3207c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3207c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3207c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3207C4u;
    {
        const bool branch_taken_0x3207c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3207C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207C4u;
        // 0x3207c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207c4) {
            ctx->pc = 0x3207E0u;
            goto label_3207e0;
        }
    }
    ctx->pc = 0x3207CCu;
label_3207cc:
    // 0x3207cc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_3207d0:
    // 0x3207d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3207d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3207d4: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3207D4u;
    {
        const bool branch_taken_0x3207d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3207D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207D4u;
        // 0x3207d8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207d4) {
            ctx->pc = 0x320760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320760;
        }
    }
    ctx->pc = 0x3207DCu;
label_3207dc:
    // 0x3207dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3207dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3207e0:
    // 0x3207e0: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3207E0u;
    {
        const bool branch_taken_0x3207e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207E0u;
        // 0x3207e4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207e0) {
            ctx->pc = 0x3207F8u;
            goto label_3207f8;
        }
    }
    ctx->pc = 0x3207E8u;
    // 0x3207e8: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x3207e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3207ec: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3207f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3207F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3207F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207F0u;
        // 0x3207f4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3207F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3207F8u;
label_3207f8:
    // 0x3207f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3207F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207F8u;
        // 0x3207fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3207F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320800u;
}
