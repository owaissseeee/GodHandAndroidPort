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

// Function: func_002BF2D0
// Address: 0x2bf2d0 - 0x2bf380
void func_002BF2D0_0x2bf2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF2D0_0x2bf2d0");
#endif

    switch (ctx->pc) {
        case 0x2bf2e4u: goto label_2bf2e4;
        case 0x2bf30cu: goto label_2bf30c;
        case 0x2bf33cu: goto label_2bf33c;
        case 0x2bf34cu: goto label_2bf34c;
        case 0x2bf35cu: goto label_2bf35c;
        case 0x2bf36cu: goto label_2bf36c;
        default: break;
    }

    ctx->pc = 0x2bf2d0u;

    // 0x2bf2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf2d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf2dc: 0xc0afce0  jal         func_2BF380
    ctx->pc = 0x2BF2DCu;
    SET_GPR_U32(ctx, 31, 0x2BF2E4u);
    ctx->pc = 0x2BF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2DCu;
    // 0x2bf2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF380u, 0x2BF2DCu, 0x2BF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2E4u;
label_2bf2e4:
    // 0x2bf2e4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bf2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bf2e8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2bf2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf2ec: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x2bf2f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2bf2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2bf2f4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BF2F4u;
    {
        const bool branch_taken_0x2bf2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2F4u;
        // 0x2bf2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2f4) {
            ctx->pc = 0x2BF36Cu;
            goto label_2bf36c;
        }
    }
    ctx->pc = 0x2BF2FCu;
    // 0x2bf2fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf304: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2BF304u;
    SET_GPR_U32(ctx, 31, 0x2BF30Cu);
    ctx->pc = 0x2BF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF304u;
    // 0x2bf308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2BF304u, 0x2BF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF30Cu;
label_2bf30c:
    // 0x2bf30c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf310: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2bf310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2bf314: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BF314u;
    {
        const bool branch_taken_0x2bf314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF314u;
        // 0x2bf318: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf314) {
            ctx->pc = 0x2BF36Cu;
            goto label_2bf36c;
        }
    }
    ctx->pc = 0x2BF31Cu;
    // 0x2bf31c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf320: 0x2442c1b0  addiu       $v0, $v0, -0x3E50
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
    // 0x2bf324: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bf324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bf328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf32c: 0x800008  jr          $a0
    ctx->pc = 0x2BF32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BF334u: goto label_2bf334;
            case 0x2BF344u: goto label_2bf344;
            case 0x2BF354u: goto label_2bf354;
            case 0x2BF364u: goto label_2bf364;
            case 0x2BF36Cu: goto label_2bf36c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF32Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BF334u;
label_2bf334:
    // 0x2bf334: 0xc0afce2  jal         func_2BF388
    ctx->pc = 0x2BF334u;
    SET_GPR_U32(ctx, 31, 0x2BF33Cu);
    ctx->pc = 0x2BF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF334u;
    // 0x2bf338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF388u, 0x2BF334u, 0x2BF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF33Cu;
label_2bf33c:
    // 0x2bf33c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BF33Cu;
    {
        const bool branch_taken_0x2bf33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF33Cu;
        // 0x2bf340: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf33c) {
            ctx->pc = 0x2BF370u;
            goto label_2bf370;
        }
    }
    ctx->pc = 0x2BF344u;
label_2bf344:
    // 0x2bf344: 0xc0afd1e  jal         func_2BF478
    ctx->pc = 0x2BF344u;
    SET_GPR_U32(ctx, 31, 0x2BF34Cu);
    ctx->pc = 0x2BF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF344u;
    // 0x2bf348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF478u, 0x2BF344u, 0x2BF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF34Cu;
label_2bf34c:
    // 0x2bf34c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF34Cu;
    {
        const bool branch_taken_0x2bf34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF34Cu;
        // 0x2bf350: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf34c) {
            ctx->pc = 0x2BF370u;
            goto label_2bf370;
        }
    }
    ctx->pc = 0x2BF354u;
label_2bf354:
    // 0x2bf354: 0xc0afd50  jal         func_2BF540
    ctx->pc = 0x2BF354u;
    SET_GPR_U32(ctx, 31, 0x2BF35Cu);
    ctx->pc = 0x2BF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF354u;
    // 0x2bf358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF540u, 0x2BF354u, 0x2BF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF35Cu;
label_2bf35c:
    // 0x2bf35c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF35Cu;
    {
        const bool branch_taken_0x2bf35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF35Cu;
        // 0x2bf360: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf35c) {
            ctx->pc = 0x2BF370u;
            goto label_2bf370;
        }
    }
    ctx->pc = 0x2BF364u;
label_2bf364:
    // 0x2bf364: 0xc0afd5a  jal         func_2BF568
    ctx->pc = 0x2BF364u;
    SET_GPR_U32(ctx, 31, 0x2BF36Cu);
    ctx->pc = 0x2BF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF364u;
    // 0x2bf368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF568u, 0x2BF364u, 0x2BF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF36Cu;
label_2bf36c:
    // 0x2bf36c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf370:
    // 0x2bf370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf374: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF374u;
        // 0x2bf378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF37Cu;
    // 0x2bf37c: 0x0  nop
    ctx->pc = 0x2bf37cu;
    // NOP
    ctx->pc = 0x2bf380u;
}
