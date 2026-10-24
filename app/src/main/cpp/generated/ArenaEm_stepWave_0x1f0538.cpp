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

// Function: ArenaEm_stepWave
// Address: 0x1f0538 - 0x1f05f0
void ArenaEm_stepWave_0x1f0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaEm_stepWave_0x1f0538");
#endif

    switch (ctx->pc) {
        case 0x1f056cu: goto label_1f056c;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05c0u: goto label_1f05c0;
        default: break;
    }

    ctx->pc = 0x1f0538u;

    // 0x1f0538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f053c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0548: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f054c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F054Cu;
    {
        const bool branch_taken_0x1f054c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F054Cu;
        // 0x1f0550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f054c) {
            ctx->pc = 0x1F0564u;
            goto label_1f0564;
        }
    }
    ctx->pc = 0x1F0554u;
    // 0x1f0554: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0554u;
    {
        const bool branch_taken_0x1f0554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0554) {
            ctx->pc = 0x1F0584u;
            goto label_1f0584;
        }
    }
    ctx->pc = 0x1F055Cu;
    // 0x1f055c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F055Cu;
    {
        const bool branch_taken_0x1f055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F055Cu;
        // 0x1f0560: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f055c) {
            ctx->pc = 0x1F05E4u;
            goto label_1f05e4;
        }
    }
    ctx->pc = 0x1F0564u;
label_1f0564:
    // 0x1f0564: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F0564u;
    SET_GPR_U32(ctx, 31, 0x1F056Cu);
    ctx->pc = 0x1F0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0564u;
    // 0x1f0568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F0564u, 0x1F056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F056Cu;
label_1f056c:
    // 0x1f056c: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0570: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1f0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f0574: 0xae030ba0  sw          $v1, 0xBA0($s0)
    ctx->pc = 0x1f0574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
    // 0x1f0578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f057c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F057Cu;
    {
        const bool branch_taken_0x1f057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F057Cu;
        // 0x1f0580: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f057c) {
            ctx->pc = 0x1F05E0u;
            goto label_1f05e0;
        }
    }
    ctx->pc = 0x1F0584u;
label_1f0584:
    // 0x1f0584: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0584u;
    SET_GPR_U32(ctx, 31, 0x1F058Cu);
    ctx->pc = 0x1F0588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0584u;
    // 0x1f0588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0584u, 0x1F058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F058Cu;
label_1f058c:
    // 0x1f058c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F058Cu;
    {
        const bool branch_taken_0x1f058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F058Cu;
        // 0x1f0590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f058c) {
            ctx->pc = 0x1F05A4u;
            goto label_1f05a4;
        }
    }
    ctx->pc = 0x1F0594u;
    // 0x1f0594: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0598: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0598u;
    {
        const bool branch_taken_0x1f0598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0598u;
        // 0x1f059c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0598) {
            ctx->pc = 0x1F05DCu;
            goto label_1f05dc;
        }
    }
    ctx->pc = 0x1F05A0u;
    // 0x1f05a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f05a4:
    // 0x1f05a4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f05a8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f05a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f05ac: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f05b0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F05B0u;
    SET_GPR_U32(ctx, 31, 0x1F05B8u);
    ctx->pc = 0x1F05B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05B0u;
    // 0x1f05b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F05B0u, 0x1F05B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05B8u;
label_1f05b8:
    // 0x1f05b8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F05B8u;
    SET_GPR_U32(ctx, 31, 0x1F05C0u);
    ctx->pc = 0x1F05BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05B8u;
    // 0x1f05bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F05B8u, 0x1F05C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C0u;
label_1f05c0:
    // 0x1f05c0: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f05c4: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f05c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f05cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f05d0: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f05d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F05D4u;
    {
        const bool branch_taken_0x1f05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05D4u;
        // 0x1f05d8: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05d4) {
            ctx->pc = 0x1F05E0u;
            goto label_1f05e0;
        }
    }
    ctx->pc = 0x1F05DCu;
label_1f05dc:
    // 0x1f05dc: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f05e0:
    // 0x1f05e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f05e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f05e4:
    // 0x1f05e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f05e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f05e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F05E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E8u;
        // 0x1f05ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F05E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F05F0u;
}
