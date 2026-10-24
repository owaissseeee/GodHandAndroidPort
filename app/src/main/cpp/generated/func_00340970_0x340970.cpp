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

// Function: func_00340970
// Address: 0x340970 - 0x340a20
void func_00340970_0x340970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340970_0x340970");
#endif

    ctx->pc = 0x340970u;

    // 0x340970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340974: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x340974u;
    {
        const bool branch_taken_0x340974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340974u;
        // 0x340978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340974) {
            ctx->pc = 0x340990u;
            goto label_340990;
        }
    }
    ctx->pc = 0x34097Cu;
    // 0x34097c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x34097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x340980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340984: 0x24846f90  addiu       $a0, $a0, 0x6F90
    ctx->pc = 0x340984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28560));
    // 0x340988: 0x80d0114  j           func_340450
    ctx->pc = 0x340988u;
    ctx->pc = 0x34098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340988u;
    // 0x34098c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340450u, 0x340988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340990u;
label_340990:
    // 0x340990: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x340990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x340994: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x340994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x340998: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x340998u;
    {
        const bool branch_taken_0x340998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340998) {
            ctx->pc = 0x34099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340998u;
            // 0x34099c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409A0u;
    // 0x3409a0: 0x28c2ff81  slti        $v0, $a2, -0x7F
    ctx->pc = 0x3409a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967169) ? 1 : 0);
    // 0x3409a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3409A4u;
    {
        const bool branch_taken_0x3409a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3409a4) {
            ctx->pc = 0x3409A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3409A4u;
            // 0x3409a8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409ACu;
    // 0x3409ac: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3409acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3409b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3409B0u;
    {
        const bool branch_taken_0x3409b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3409B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409B0u;
        // 0x3409b4: 0x24a7ff81  addiu       $a3, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409b0) {
            ctx->pc = 0x3409D0u;
            goto label_3409d0;
        }
    }
    ctx->pc = 0x3409B8u;
    // 0x3409b8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3409b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_3409bc:
    // 0x3409bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3409bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3409c0: 0x24846fb8  addiu       $a0, $a0, 0x6FB8
    ctx->pc = 0x3409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28600));
    // 0x3409c4: 0x80d0114  j           func_340450
    ctx->pc = 0x3409C4u;
    ctx->pc = 0x3409C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3409C4u;
    // 0x3409c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340450u, 0x3409C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3409CCu;
    // 0x3409cc: 0x0  nop
    ctx->pc = 0x3409ccu;
    // NOP
label_3409d0:
    // 0x3409d0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3409D0u;
    {
        const bool branch_taken_0x3409d0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3409D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409D0u;
        // 0x3409d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409d0) {
            ctx->pc = 0x3409DCu;
            goto label_3409dc;
        }
    }
    ctx->pc = 0x3409D8u;
    // 0x3409d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3409dc:
    // 0x3409dc: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3409DCu;
    {
        const bool branch_taken_0x3409dc = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3409E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409DCu;
        // 0x3409e0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409dc) {
            ctx->pc = 0x3409ECu;
            goto label_3409ec;
        }
    }
    ctx->pc = 0x3409E4u;
    // 0x3409e4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3409e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3409e8: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x3409e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3409ec:
    // 0x3409ec: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x3409ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x3409f0: 0x24c3ff81  addiu       $v1, $a2, -0x7F
    ctx->pc = 0x3409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x3409f4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3409F4u;
    {
        const bool branch_taken_0x3409f4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3409f4) {
            ctx->pc = 0x3409F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3409F4u;
            // 0x3409f8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409FCu;
            goto label_3409fc;
        }
    }
    ctx->pc = 0x3409FCu;
label_3409fc:
    // 0x3409fc: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x3409fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x340a00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340A00u;
    {
        const bool branch_taken_0x340a00 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x340A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A00u;
        // 0x340a04: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a00) {
            ctx->pc = 0x340A10u;
            goto label_340a10;
        }
    }
    ctx->pc = 0x340A08u;
    // 0x340a08: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x340a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x340a0c: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x340a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_340a10:
    // 0x340a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a14: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x340a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x340a18: 0x3e00008  jr          $ra
    ctx->pc = 0x340A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A18u;
        // 0x340a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340A20u;
}
