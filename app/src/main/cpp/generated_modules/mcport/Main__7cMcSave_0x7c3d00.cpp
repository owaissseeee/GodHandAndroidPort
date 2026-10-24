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
// Function: Main__7cMcSave
// Address: 0x7c3d00 - 0x7c3dc8
void Main__7cMcSave_0x7c3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__7cMcSave_0x7c3d00");
#endif

    switch (ctx->pc) {
        case 0x7c3d18u: goto label_7c3d18;
        case 0x7c3d28u: goto label_7c3d28;
        case 0x7c3d54u: goto label_7c3d54;
        case 0x7c3d64u: goto label_7c3d64;
        case 0x7c3d74u: goto label_7c3d74;
        case 0x7c3d84u: goto label_7c3d84;
        case 0x7c3d94u: goto label_7c3d94;
        case 0x7c3da0u: goto label_7c3da0;
        default: break;
    }

    ctx->pc = 0x7c3d00u;

    // 0x7c3d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3d04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3d10: 0xc1f0e88  jal         func_7C3A20
    ctx->pc = 0x7C3D10u;
    SET_GPR_U32(ctx, 31, 0x7C3D18u);
    ctx->pc = 0x7C3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D10u;
    // 0x7c3d14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3A20u, 0x7C3D10u, 0x7C3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D18u;
label_7c3d18:
    // 0x7c3d18: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3d1c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x7c3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x7c3d20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7C3D20u;
    {
        const bool branch_taken_0x7c3d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D20u;
        // 0x7c3d24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d20) {
            ctx->pc = 0x7C3DA0u;
            goto label_7c3da0;
        }
    }
    ctx->pc = 0x7C3D28u;
label_7c3d28:
    // 0x7c3d28: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c3d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c3d2c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C3D2Cu;
    {
        const bool branch_taken_0x7c3d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D2Cu;
        // 0x7c3d30: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d2c) {
            ctx->pc = 0x7C3D94u;
            goto label_7c3d94;
        }
    }
    ctx->pc = 0x7C3D34u;
    // 0x7c3d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c3d38: 0x24420b90  addiu       $v0, $v0, 0xB90
    ctx->pc = 0x7c3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2960));
    // 0x7c3d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c3d40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c3d44: 0x800008  jr          $a0
    ctx->pc = 0x7C3D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C3D4Cu: goto label_7c3d4c;
            case 0x7C3D5Cu: goto label_7c3d5c;
            case 0x7C3D6Cu: goto label_7c3d6c;
            case 0x7C3D7Cu: goto label_7c3d7c;
            case 0x7C3D8Cu: goto label_7c3d8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3D44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C3D4Cu;
label_7c3d4c:
    // 0x7c3d4c: 0xc1f0f72  jal         func_7C3DC8
    ctx->pc = 0x7C3D4Cu;
    SET_GPR_U32(ctx, 31, 0x7C3D54u);
    ctx->pc = 0x7C3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D4Cu;
    // 0x7c3d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3DC8u, 0x7C3D4Cu, 0x7C3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D54u;
label_7c3d54:
    // 0x7c3d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C3D54u;
    {
        const bool branch_taken_0x7c3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D54u;
        // 0x7c3d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d54) {
            ctx->pc = 0x7C3D98u;
            goto label_7c3d98;
        }
    }
    ctx->pc = 0x7C3D5Cu;
label_7c3d5c:
    // 0x7c3d5c: 0xc1f0f86  jal         func_7C3E18
    ctx->pc = 0x7C3D5Cu;
    SET_GPR_U32(ctx, 31, 0x7C3D64u);
    ctx->pc = 0x7C3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D5Cu;
    // 0x7c3d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3E18u, 0x7C3D5Cu, 0x7C3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D64u;
label_7c3d64:
    // 0x7c3d64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C3D64u;
    {
        const bool branch_taken_0x7c3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D64u;
        // 0x7c3d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d64) {
            ctx->pc = 0x7C3D98u;
            goto label_7c3d98;
        }
    }
    ctx->pc = 0x7C3D6Cu;
label_7c3d6c:
    // 0x7c3d6c: 0xc1f0fb0  jal         func_7C3EC0
    ctx->pc = 0x7C3D6Cu;
    SET_GPR_U32(ctx, 31, 0x7C3D74u);
    ctx->pc = 0x7C3D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D6Cu;
    // 0x7c3d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3EC0u, 0x7C3D6Cu, 0x7C3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D74u;
label_7c3d74:
    // 0x7c3d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7C3D74u;
    {
        const bool branch_taken_0x7c3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D74u;
        // 0x7c3d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d74) {
            ctx->pc = 0x7C3D98u;
            goto label_7c3d98;
        }
    }
    ctx->pc = 0x7C3D7Cu;
label_7c3d7c:
    // 0x7c3d7c: 0xc1f0fd2  jal         func_7C3F48
    ctx->pc = 0x7C3D7Cu;
    SET_GPR_U32(ctx, 31, 0x7C3D84u);
    ctx->pc = 0x7C3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D7Cu;
    // 0x7c3d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3F48u, 0x7C3D7Cu, 0x7C3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D84u;
label_7c3d84:
    // 0x7c3d84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C3D84u;
    {
        const bool branch_taken_0x7c3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3D84u;
        // 0x7c3d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3d84) {
            ctx->pc = 0x7C3D98u;
            goto label_7c3d98;
        }
    }
    ctx->pc = 0x7C3D8Cu;
label_7c3d8c:
    // 0x7c3d8c: 0xc1f0fe8  jal         func_7C3FA0
    ctx->pc = 0x7C3D8Cu;
    SET_GPR_U32(ctx, 31, 0x7C3D94u);
    ctx->pc = 0x7C3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D8Cu;
    // 0x7c3d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3FA0u, 0x7C3D8Cu, 0x7C3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3D94u;
label_7c3d94:
    // 0x7c3d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c3d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c3d98:
    // 0x7c3d98: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C3D98u;
    SET_GPR_U32(ctx, 31, 0x7C3DA0u);
    ctx->pc = 0x7C3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3D98u;
    // 0x7c3d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C3D98u, 0x7C3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3DA0u;
label_7c3da0:
    // 0x7c3da0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3da4: 0x24427a84  addiu       $v0, $v0, 0x7A84
    ctx->pc = 0x7c3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x7c3da8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x7c3dac: 0x462ffde  bltzl       $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x7C3DACu;
    {
        const bool branch_taken_0x7c3dac = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x7c3dac) {
            ctx->pc = 0x7C3DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3DACu;
            // 0x7c3db0: 0x8e030118  lw          $v1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3d28;
        }
    }
    ctx->pc = 0x7C3DB4u;
    // 0x7c3db4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c3db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3DC0u;
        // 0x7c3dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3DC8u;
}
} // namespace gh_mcport
