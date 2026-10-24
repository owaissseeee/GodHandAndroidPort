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

// Function: func_002E12D8
// Address: 0x2e12d8 - 0x2e1348
void func_002E12D8_0x2e12d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E12D8_0x2e12d8");
#endif

    ctx->pc = 0x2e12d8u;

    // 0x2e12d8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2e12dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e12e0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2e12e4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E12E4u;
    {
        const bool branch_taken_0x2e12e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12E4u;
        // 0x2e12e8: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12e4) {
            ctx->pc = 0x2E1328u;
            goto label_2e1328;
        }
    }
    ctx->pc = 0x2E12ECu;
    // 0x2e12ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12ECu;
    {
        const bool branch_taken_0x2e12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12ECu;
        // 0x2e12f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12ec) {
            ctx->pc = 0x2E1304u;
            goto label_2e1304;
        }
    }
    ctx->pc = 0x2E12F4u;
    // 0x2e12f4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E12F4u;
    {
        const bool branch_taken_0x2e12f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12F4u;
        // 0x2e12f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12f4) {
            ctx->pc = 0x2E1320u;
            goto label_2e1320;
        }
    }
    ctx->pc = 0x2E12FCu;
    // 0x2e12fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E12FCu;
    {
        const bool branch_taken_0x2e12fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12fc) {
            ctx->pc = 0x2E1340u;
            goto label_2e1340;
        }
    }
    ctx->pc = 0x2E1304u;
label_2e1304:
    // 0x2e1304: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1308: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1308u;
    {
        const bool branch_taken_0x2e1308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1308u;
        // 0x2e130c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1308) {
            ctx->pc = 0x2E1330u;
            goto label_2e1330;
        }
    }
    ctx->pc = 0x2E1310u;
    // 0x2e1310: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1310u;
    {
        const bool branch_taken_0x2e1310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1310u;
        // 0x2e1314: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1310) {
            ctx->pc = 0x2E1338u;
            goto label_2e1338;
        }
    }
    ctx->pc = 0x2E1318u;
    // 0x2e1318: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1318u;
    {
        const bool branch_taken_0x2e1318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1318) {
            ctx->pc = 0x2E1340u;
            goto label_2e1340;
        }
    }
    ctx->pc = 0x2E1320u;
label_2e1320:
    // 0x2e1320: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1320u;
        // 0x2e1324: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1328u;
label_2e1328:
    // 0x2e1328: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1328u;
        // 0x2e132c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1330u;
label_2e1330:
    // 0x2e1330: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1330u;
        // 0x2e1334: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1338u;
label_2e1338:
    // 0x2e1338: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1338u;
        // 0x2e133c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1340u;
label_2e1340:
    // 0x2e1340: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1348u;
}
