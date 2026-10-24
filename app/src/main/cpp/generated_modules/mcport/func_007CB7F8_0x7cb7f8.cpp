#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CB7F8
// Address: 0x7cb7f8 - 0x7cb8d0
void func_007CB7F8_0x7cb7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CB7F8_0x7cb7f8");
#endif

    switch (ctx->pc) {
        case 0x7cb830u: goto label_7cb830;
        default: break;
    }

    ctx->pc = 0x7cb7f8u;

    // 0x7cb7f8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x7cb7f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb7fc: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x7CB7FCu;
    {
        const bool branch_taken_0x7cb7fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7FCu;
        // 0x7cb800: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb7fc) {
            ctx->pc = 0x7CB8C8u;
            goto label_7cb8c8;
        }
    }
    ctx->pc = 0x7CB804u;
    // 0x7cb804: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7cb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7cb808: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x7cb808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x7cb80c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7cb80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7cb810: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7CB810u;
    {
        const bool branch_taken_0x7cb810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB810u;
        // 0x7cb814: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb810) {
            ctx->pc = 0x7CB8ACu;
            goto label_7cb8ac;
        }
    }
    ctx->pc = 0x7CB818u;
    // 0x7cb818: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x7cb818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x7cb81c: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x7cb81cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7cb820: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x7cb820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7cb824: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x7cb824u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x7cb828: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x7cb828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb82c: 0x0  nop
    ctx->pc = 0x7cb82cu;
    // NOP
label_7cb830:
    // 0x7cb830: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x7cb830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cb834: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x7cb834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x7cb838: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7CB838u;
    {
        const bool branch_taken_0x7cb838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cb838) {
            ctx->pc = 0x7CB884u;
            goto label_7cb884;
        }
    }
    ctx->pc = 0x7CB840u;
    // 0x7cb840: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x7cb840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7cb844: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x7cb844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7cb848: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CB848u;
    {
        const bool branch_taken_0x7cb848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb848) {
            ctx->pc = 0x7CB884u;
            goto label_7cb884;
        }
    }
    ctx->pc = 0x7CB850u;
    // 0x7cb850: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x7CB850u;
    {
        const bool branch_taken_0x7cb850 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x7CB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB850u;
        // 0x7cb854: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb850) {
            ctx->pc = 0x7CB87Cu;
            goto label_7cb87c;
        }
    }
    ctx->pc = 0x7CB858u;
    // 0x7cb858: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x7cb858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x7cb85c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7cb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7cb860: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x7cb860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7cb864: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x7CB864u;
    {
        const bool branch_taken_0x7cb864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cb864) {
            ctx->pc = 0x7CB868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB864u;
            // 0x7cb868: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB8A0u;
            goto label_7cb8a0;
        }
    }
    ctx->pc = 0x7CB86Cu;
    // 0x7cb86c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cb870: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x7cb870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cb874: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7CB874u;
    {
        const bool branch_taken_0x7cb874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cb874) {
            ctx->pc = 0x7CB878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB874u;
            // 0x7cb878: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB8A0u;
            goto label_7cb8a0;
        }
    }
    ctx->pc = 0x7CB87Cu;
label_7cb87c:
    // 0x7cb87c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7CB87Cu;
    {
        const bool branch_taken_0x7cb87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB87Cu;
        // 0x7cb880: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb87c) {
            ctx->pc = 0x7CB89Cu;
            goto label_7cb89c;
        }
    }
    ctx->pc = 0x7CB884u;
label_7cb884:
    // 0x7cb884: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CB884u;
    {
        const bool branch_taken_0x7cb884 = (GPR_S64(ctx, 8) < 0);
        if (branch_taken_0x7cb884) {
            ctx->pc = 0x7CB888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB884u;
            // 0x7cb888: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB8A0u;
            goto label_7cb8a0;
        }
    }
    ctx->pc = 0x7CB88Cu;
    // 0x7cb88c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7cb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cb890: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x7cb890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cb894: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CB894u;
    {
        const bool branch_taken_0x7cb894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB894u;
        // 0x7cb898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb894) {
            ctx->pc = 0x7CB8B0u;
            goto label_7cb8b0;
        }
    }
    ctx->pc = 0x7CB89Cu;
label_7cb89c:
    // 0x7cb89c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x7cb89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_7cb8a0:
    // 0x7cb8a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7cb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cb8a4: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x7CB8A4u;
    {
        const bool branch_taken_0x7cb8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x7CB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB8A4u;
        // 0x7cb8a8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb8a4) {
            ctx->pc = 0x7CB830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cb830;
        }
    }
    ctx->pc = 0x7CB8ACu;
label_7cb8ac:
    // 0x7cb8ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7cb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7cb8b0:
    // 0x7cb8b0: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CB8B0u;
    {
        const bool branch_taken_0x7cb8b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x7CB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB8B0u;
        // 0x7cb8b4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb8b0) {
            ctx->pc = 0x7CB8C8u;
            goto label_7cb8c8;
        }
    }
    ctx->pc = 0x7CB8B8u;
    // 0x7cb8b8: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x7cb8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7cb8bc: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x7cb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x7cb8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB8C0u;
        // 0x7cb8c4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB8C8u;
label_7cb8c8:
    // 0x7cb8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB8C8u;
        // 0x7cb8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB8D0u;
}
} // namespace gh_mcport
