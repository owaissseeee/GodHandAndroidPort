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

// Function: sfhds_AnlyHead
// Address: 0x34d660 - 0x34d6f0
void sfhds_AnlyHead_0x34d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_AnlyHead_0x34d660");
#endif

    switch (ctx->pc) {
        case 0x34d684u: goto label_34d684;
        case 0x34d698u: goto label_34d698;
        case 0x34d6acu: goto label_34d6ac;
        case 0x34d6d4u: goto label_34d6d4;
        default: break;
    }

    ctx->pc = 0x34d660u;

    // 0x34d660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d664: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x34d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x34d668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d66c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34d66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d670: 0x2445dc10  addiu       $a1, $v0, -0x23F0
    ctx->pc = 0x34d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x34d674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d67c: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D67Cu;
    SET_GPR_U32(ctx, 31, 0x34D684u);
    ctx->pc = 0x34D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D67Cu;
    // 0x34d680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D67Cu, 0x34D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D684u;
label_34d684:
    // 0x34d684: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d688: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x34d688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x34d68c: 0x24a5dc60  addiu       $a1, $a1, -0x23A0
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958176));
    // 0x34d690: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D690u;
    SET_GPR_U32(ctx, 31, 0x34D698u);
    ctx->pc = 0x34D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D690u;
    // 0x34d694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D690u, 0x34D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D698u;
label_34d698:
    // 0x34d698: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d69c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x34d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x34d6a0: 0x24a5dcb0  addiu       $a1, $a1, -0x2350
    ctx->pc = 0x34d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
    // 0x34d6a4: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D6A4u;
    SET_GPR_U32(ctx, 31, 0x34D6ACu);
    ctx->pc = 0x34D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6A4u;
    // 0x34d6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D6A4u, 0x34D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6ACu;
label_34d6ac:
    // 0x34d6ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x34d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x34d6b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6b8: 0x24a5dd00  addiu       $a1, $a1, -0x2300
    ctx->pc = 0x34d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
    // 0x34d6bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D6BCu;
    {
        const bool branch_taken_0x34d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D6BCu;
        // 0x34d6c0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d6bc) {
            ctx->pc = 0x34D6CCu;
            goto label_34d6cc;
        }
    }
    ctx->pc = 0x34D6C4u;
    // 0x34d6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d6c8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x34d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_34d6cc:
    // 0x34d6cc: 0xc0d3694  jal         func_34DA50
    ctx->pc = 0x34D6CCu;
    SET_GPR_U32(ctx, 31, 0x34D6D4u);
    ctx->pc = 0x34DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA50u, 0x34D6CCu, 0x34D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6D4u;
label_34d6d4:
    // 0x34d6d4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x34d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x34d6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D6E4u;
        // 0x34d6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D6ECu;
    // 0x34d6ec: 0x0  nop
    ctx->pc = 0x34d6ecu;
    // NOP
    ctx->pc = 0x34d6f0u;
}
