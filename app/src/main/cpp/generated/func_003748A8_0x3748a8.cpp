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

// Function: func_003748A8
// Address: 0x3748a8 - 0x374928
void func_003748A8_0x3748a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003748A8_0x3748a8");
#endif

    switch (ctx->pc) {
        case 0x3748ccu: goto label_3748cc;
        default: break;
    }

    ctx->pc = 0x3748a8u;

    // 0x3748a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3748ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3748acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3748b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3748b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3748b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3748B4u;
    {
        const bool branch_taken_0x3748b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3748b4) {
            ctx->pc = 0x3748C4u;
            goto label_3748c4;
        }
    }
    ctx->pc = 0x3748BCu;
label_3748bc:
    // 0x3748bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3748BCu;
    {
        const bool branch_taken_0x3748bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748BCu;
        // 0x3748c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748bc) {
            ctx->pc = 0x374910u;
            goto label_374910;
        }
    }
    ctx->pc = 0x3748C4u;
label_3748c4:
    // 0x3748c4: 0xc0cb716  jal         func_32DC58
    ctx->pc = 0x3748C4u;
    SET_GPR_U32(ctx, 31, 0x3748CCu);
    ctx->pc = 0x32DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC58u, 0x3748C4u, 0x3748CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748CCu;
label_3748cc:
    // 0x3748cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3748ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3748d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3748d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3748D4u;
    {
        const bool branch_taken_0x3748d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748D4u;
        // 0x3748d8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748d4) {
            ctx->pc = 0x37490Cu;
            goto label_37490c;
        }
    }
    ctx->pc = 0x3748DCu;
    // 0x3748dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3748dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3748e0: 0x2442a5e0  addiu       $v0, $v0, -0x5A20
    ctx->pc = 0x3748e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944224));
    // 0x3748e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3748e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3748e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3748ec: 0x800008  jr          $a0
    ctx->pc = 0x3748ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3748BCu: goto label_3748bc;
            case 0x3748F4u: goto label_3748f4;
            case 0x3748FCu: goto label_3748fc;
            case 0x374904u: goto label_374904;
            case 0x37490Cu: goto label_37490c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3748F4u;
label_3748f4:
    // 0x3748f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3748F4u;
    {
        const bool branch_taken_0x3748f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3748F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748F4u;
        // 0x3748f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748f4) {
            ctx->pc = 0x374910u;
            goto label_374910;
        }
    }
    ctx->pc = 0x3748FCu;
label_3748fc:
    // 0x3748fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3748FCu;
    {
        const bool branch_taken_0x3748fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748FCu;
        // 0x374900: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3748fc) {
            ctx->pc = 0x374910u;
            goto label_374910;
        }
    }
    ctx->pc = 0x374904u;
label_374904:
    // 0x374904: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374904u;
    {
        const bool branch_taken_0x374904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374904u;
        // 0x374908: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374904) {
            ctx->pc = 0x374910u;
            goto label_374910;
        }
    }
    ctx->pc = 0x37490Cu;
label_37490c:
    // 0x37490c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x37490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_374910:
    // 0x374910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374914: 0x3e00008  jr          $ra
    ctx->pc = 0x374914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374914u;
        // 0x374918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37491Cu;
    // 0x37491c: 0x0  nop
    ctx->pc = 0x37491cu;
    // NOP
    // 0x374920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374924: 0x0  nop
    ctx->pc = 0x374924u;
    // NOP
    ctx->pc = 0x374928u;
}
