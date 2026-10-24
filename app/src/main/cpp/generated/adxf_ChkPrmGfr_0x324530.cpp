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

// Function: adxf_ChkPrmGfr
// Address: 0x324530 - 0x3245b0
void adxf_ChkPrmGfr_0x324530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adxf_ChkPrmGfr_0x324530");
#endif

    switch (ctx->pc) {
        case 0x324598u: goto label_324598;
        default: break;
    }

    ctx->pc = 0x324530u;

    // 0x324530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324534: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x324534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x324538: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x324538u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x32453c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32453Cu;
    {
        const bool branch_taken_0x32453c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32453Cu;
        // 0x324540: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32453c) {
            ctx->pc = 0x324550u;
            goto label_324550;
        }
    }
    ctx->pc = 0x324544u;
    // 0x324544: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x324544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x324548: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x324548u;
    {
        const bool branch_taken_0x324548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324548u;
        // 0x32454c: 0x24841a18  addiu       $a0, $a0, 0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324548) {
            ctx->pc = 0x324590u;
            goto label_324590;
        }
    }
    ctx->pc = 0x324550u;
label_324550:
    // 0x324550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x324550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x324554: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x324554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324558: 0x8c84b308  lw          $a0, -0x4CF8($a0)
    ctx->pc = 0x324558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947592)));
    // 0x32455c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32455Cu;
    {
        const bool branch_taken_0x32455c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32455c) {
            ctx->pc = 0x324570u;
            goto label_324570;
        }
    }
    ctx->pc = 0x324564u;
    // 0x324564: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x324564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x324568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x324568u;
    {
        const bool branch_taken_0x324568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324568u;
        // 0x32456c: 0x24841a18  addiu       $a0, $a0, 0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324568) {
            ctx->pc = 0x324590u;
            goto label_324590;
        }
    }
    ctx->pc = 0x324570u;
label_324570:
    // 0x324570: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x324570u;
    {
        const bool branch_taken_0x324570 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x324570) {
            ctx->pc = 0x324574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324570u;
            // 0x324574: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32458Cu;
            goto label_32458c;
        }
    }
    ctx->pc = 0x324578u;
    // 0x324578: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x324578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32457c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x32457cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x324580: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324580u;
    {
        const bool branch_taken_0x324580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324580u;
        // 0x324584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324580) {
            ctx->pc = 0x32459Cu;
            goto label_32459c;
        }
    }
    ctx->pc = 0x324588u;
    // 0x324588: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x324588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32458c:
    // 0x32458c: 0x24841a40  addiu       $a0, $a0, 0x1A40
    ctx->pc = 0x32458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
label_324590:
    // 0x324590: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x324590u;
    SET_GPR_U32(ctx, 31, 0x324598u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x324590u, 0x324598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324598u;
label_324598:
    // 0x324598: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x324598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_32459c:
    // 0x32459c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3245a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3245A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245A0u;
        // 0x3245a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3245A8u;
    // 0x3245a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3245ac: 0x0  nop
    ctx->pc = 0x3245acu;
    // NOP
    ctx->pc = 0x3245b0u;
}
