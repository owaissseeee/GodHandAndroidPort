#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_00799800
// Address: 0x799800 - 0x7998d0
void func_00799800_0x799800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799800_0x799800");
#endif

    switch (ctx->pc) {
        case 0x799828u: goto label_799828;
        case 0x799850u: goto label_799850;
        case 0x79987cu: goto label_79987c;
        case 0x79988cu: goto label_79988c;
        case 0x799898u: goto label_799898;
        case 0x7998b4u: goto label_7998b4;
        default: break;
    }

    ctx->pc = 0x799800u;

    // 0x799800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799804: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799808: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79980c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799810: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799818: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79981c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x79981Cu;
    {
        const bool branch_taken_0x79981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79981c) {
            ctx->pc = 0x79988Cu;
            goto label_79988c;
        }
    }
    ctx->pc = 0x799824u;
    // 0x799824: 0x0  nop
    ctx->pc = 0x799824u;
    // NOP
label_799828:
    // 0x799828: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79982c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799830: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799830u;
    {
        const bool branch_taken_0x799830 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799830) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x799838u;
    // 0x799838: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
    // 0x79983c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799840: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x799880u;
            goto label_799880;
        }
    }
    ctx->pc = 0x799848u;
    // 0x799848: 0xc1e6952  jal         func_79A548
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A548u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799854: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799854u;
    {
        const bool branch_taken_0x799854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799854u;
        // 0x799858: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799854) {
            ctx->pc = 0x79987Cu;
            goto label_79987c;
        }
    }
    ctx->pc = 0x79985Cu;
    // 0x79985c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x79987Cu;
            goto label_79987c;
        }
    }
    ctx->pc = 0x799864u;
    // 0x799864: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799868: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79986c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
    // 0x799870: 0x24100168  addiu       $s0, $zero, 0x168
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x799874: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799880:
    // 0x799880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799884: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x26448658  addiu       $a0, $s2, -0x79A8
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936152));
    // 0x799890: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79989c: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x7998a0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x7998A0u;
    {
        const bool branch_taken_0x7998a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a0) {
            ctx->pc = 0x799828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799828;
        }
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998ac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x7998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ACu;
    // 0x7998b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7998b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7998b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7998bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7998c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7998C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998CCu;
    // 0x7998cc: 0x0  nop
    ctx->pc = 0x7998ccu;
    // NOP
    ctx->pc = 0x7998d0u;
}
} // namespace gh_r206
