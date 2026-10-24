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

// Function: _sceMpegOutputFrame
// Address: 0x39b8d0 - 0x39b960
void _sceMpegOutputFrame_0x39b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegOutputFrame_0x39b8d0");
#endif

    switch (ctx->pc) {
        case 0x39b910u: goto label_39b910;
        case 0x39b93cu: goto label_39b93c;
        default: break;
    }

    ctx->pc = 0x39b8d0u;

    // 0x39b8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b8d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x39b8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b8dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b8e0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x39B8E0u;
    {
        const bool branch_taken_0x39b8e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8E0u;
        // 0x39b8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b8e0) {
            ctx->pc = 0x39B93Cu;
            goto label_39b93c;
        }
    }
    ctx->pc = 0x39B8E8u;
    // 0x39b8e8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x39b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39b8ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39b8f0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B8F0u;
    {
        const bool branch_taken_0x39b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8F0u;
        // 0x39b8f4: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b8f0) {
            ctx->pc = 0x39B918u;
            goto label_39b918;
        }
    }
    ctx->pc = 0x39B8F8u;
    // 0x39b8f8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39B8F8u;
    {
        const bool branch_taken_0x39b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b8f8) {
            ctx->pc = 0x39B8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B8F8u;
            // 0x39b8fc: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B904u;
            goto label_39b904;
        }
    }
    ctx->pc = 0x39B900u;
    // 0x39b900: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x39b900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_39b904:
    // 0x39b904: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x39b904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x39b908: 0xc0e6c4c  jal         func_39B130
    ctx->pc = 0x39B908u;
    SET_GPR_U32(ctx, 31, 0x39B910u);
    ctx->pc = 0x39B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B908u;
    // 0x39b90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B130u, 0x39B908u, 0x39B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B910u;
label_39b910:
    // 0x39b910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39B910u;
    {
        const bool branch_taken_0x39b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B910u;
        // 0x39b914: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b910) {
            ctx->pc = 0x39B940u;
            goto label_39b940;
        }
    }
    ctx->pc = 0x39B918u;
label_39b918:
    // 0x39b918: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B918u;
    {
        const bool branch_taken_0x39b918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b918) {
            ctx->pc = 0x39B91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B918u;
            // 0x39b91c: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B92Cu;
            goto label_39b92c;
        }
    }
    ctx->pc = 0x39B920u;
    // 0x39b920: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x39b920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x39b924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39B924u;
    {
        const bool branch_taken_0x39b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B924u;
        // 0x39b928: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b924) {
            ctx->pc = 0x39B930u;
            goto label_39b930;
        }
    }
    ctx->pc = 0x39B92Cu;
label_39b92c:
    // 0x39b92c: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x39b92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_39b930:
    // 0x39b930: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x39b930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x39b934: 0xc0e6cfc  jal         func_39B3F0
    ctx->pc = 0x39B934u;
    SET_GPR_U32(ctx, 31, 0x39B93Cu);
    ctx->pc = 0x39B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B934u;
    // 0x39b938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B3F0u, 0x39B934u, 0x39B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B93Cu;
label_39b93c:
    // 0x39b93c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x39b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39b940:
    // 0x39b940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b944: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B944u;
    {
        const bool branch_taken_0x39b944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B944u;
        // 0x39b948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b944) {
            ctx->pc = 0x39B954u;
            goto label_39b954;
        }
    }
    ctx->pc = 0x39B94Cu;
    // 0x39b94c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b950: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x39b950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_39b954:
    // 0x39b954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b958: 0x3e00008  jr          $ra
    ctx->pc = 0x39B958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B958u;
        // 0x39b95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B960u;
}
