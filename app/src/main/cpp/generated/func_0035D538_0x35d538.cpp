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

// Function: func_0035D538
// Address: 0x35d538 - 0x35d5c8
void func_0035D538_0x35d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D538_0x35d538");
#endif

    switch (ctx->pc) {
        case 0x35d578u: goto label_35d578;
        case 0x35d588u: goto label_35d588;
        default: break;
    }

    ctx->pc = 0x35d538u;

    // 0x35d538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d53c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x35d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x35d540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35d54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d554: 0x24446c9c  addiu       $a0, $v0, 0x6C9C
    ctx->pc = 0x35d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27804));
    // 0x35d558: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d55c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766C9Cu));
    // 0x35d560: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35D560u;
    {
        const bool branch_taken_0x35d560 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x35D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D560u;
        // 0x35d564: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d560) {
            ctx->pc = 0x35D5B0u;
            goto label_35d5b0;
        }
    }
    ctx->pc = 0x35D568u;
    // 0x35d568: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35d568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35d56c: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x35d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x35d570: 0xc0d7548  jal         func_35D520
    ctx->pc = 0x35D570u;
    SET_GPR_U32(ctx, 31, 0x35D578u);
    ctx->pc = 0x35D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D570u;
    // 0x35d574: 0x26106c88  addiu       $s0, $s0, 0x6C88 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D520u, 0x35D570u, 0x35D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D578u;
label_35d578:
    // 0x35d578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d57c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35d580: 0xc0d75d6  jal         func_35D758
    ctx->pc = 0x35D580u;
    SET_GPR_U32(ctx, 31, 0x35D588u);
    ctx->pc = 0x35D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D580u;
    // 0x35d584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D758u, 0x35D580u, 0x35D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D588u;
label_35d588:
    // 0x35d588: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x35d588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x35d58c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35d58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d594: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d5a0: 0x24846c90  addiu       $a0, $a0, 0x6C90
    ctx->pc = 0x35d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27792));
    // 0x35d5a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35d5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d5a8: 0x80d75c6  j           func_35D718
    ctx->pc = 0x35D5A8u;
    ctx->pc = 0x35D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5A8u;
    // 0x35d5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D718u, 0x35D5A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D5B0u;
label_35d5b0:
    // 0x35d5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d5b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d5bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35d5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5C0u;
        // 0x35d5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D5C8u;
}
