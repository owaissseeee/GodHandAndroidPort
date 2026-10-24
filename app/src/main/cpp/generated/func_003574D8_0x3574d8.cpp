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

// Function: func_003574D8
// Address: 0x3574d8 - 0x357598
void func_003574D8_0x3574d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003574D8_0x3574d8");
#endif

    switch (ctx->pc) {
        case 0x3574fcu: goto label_3574fc;
        case 0x35750cu: goto label_35750c;
        case 0x357560u: goto label_357560;
        case 0x357570u: goto label_357570;
        default: break;
    }

    ctx->pc = 0x3574d8u;

    // 0x3574d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3574d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3574dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3574dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3574e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3574e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3574e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3574e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3574e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3574e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3574ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3574ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3574f0: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x3574f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3574f4: 0xc0d5d66  jal         func_357598
    ctx->pc = 0x3574F4u;
    SET_GPR_U32(ctx, 31, 0x3574FCu);
    ctx->pc = 0x3574F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574F4u;
    // 0x3574f8: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357598u, 0x3574F4u, 0x3574FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574FCu;
label_3574fc:
    // 0x3574fc: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3574FCu;
    {
        const bool branch_taken_0x3574fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574fc) {
            ctx->pc = 0x357500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3574FCu;
            // 0x357500: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357580u;
            goto label_357580;
        }
    }
    ctx->pc = 0x357504u;
    // 0x357504: 0xc0d5d92  jal         func_357648
    ctx->pc = 0x357504u;
    SET_GPR_U32(ctx, 31, 0x35750Cu);
    ctx->pc = 0x357508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357504u;
    // 0x357508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357648u, 0x357504u, 0x35750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35750Cu;
label_35750c:
    // 0x35750c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x357510: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x357510u;
    {
        const bool branch_taken_0x357510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x357514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357510u;
        // 0x357514: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357510) {
            ctx->pc = 0x357578u;
            goto label_357578;
        }
    }
    ctx->pc = 0x357518u;
    // 0x357518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357518u;
    {
        const bool branch_taken_0x357518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357518u;
        // 0x35751c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357518) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x357520u;
    // 0x357520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357524: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x357524u;
    {
        const bool branch_taken_0x357524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x357528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357524u;
        // 0x357528: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357524) {
            ctx->pc = 0x357550u;
            goto label_357550;
        }
    }
    ctx->pc = 0x35752Cu;
    // 0x35752c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35752Cu;
    {
        const bool branch_taken_0x35752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35752Cu;
        // 0x357530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35752c) {
            ctx->pc = 0x357584u;
            goto label_357584;
        }
    }
    ctx->pc = 0x357534u;
    // 0x357534: 0x0  nop
    ctx->pc = 0x357534u;
    // NOP
label_357538:
    // 0x357538: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357538u;
    {
        const bool branch_taken_0x357538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357538u;
        // 0x35753c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357538) {
            ctx->pc = 0x357558u;
            goto label_357558;
        }
    }
    ctx->pc = 0x357540u;
    // 0x357540: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357540u;
    {
        const bool branch_taken_0x357540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x357544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357540u;
        // 0x357544: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357540) {
            ctx->pc = 0x357558u;
            goto label_357558;
        }
    }
    ctx->pc = 0x357548u;
    // 0x357548: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x357548u;
    {
        const bool branch_taken_0x357548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357548u;
        // 0x35754c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357548) {
            ctx->pc = 0x357584u;
            goto label_357584;
        }
    }
    ctx->pc = 0x357550u;
label_357550:
    // 0x357550: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x357550u;
    {
        const bool branch_taken_0x357550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357550u;
        // 0x357554: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357550) {
            ctx->pc = 0x35757Cu;
            goto label_35757c;
        }
    }
    ctx->pc = 0x357558u;
label_357558:
    // 0x357558: 0xc0d5e62  jal         func_357988
    ctx->pc = 0x357558u;
    SET_GPR_U32(ctx, 31, 0x357560u);
    ctx->pc = 0x35755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357558u;
    // 0x35755c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357988u, 0x357558u, 0x357560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357560u;
label_357560:
    // 0x357560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357560u;
    {
        const bool branch_taken_0x357560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357560u;
        // 0x357564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357560) {
            ctx->pc = 0x357578u;
            goto label_357578;
        }
    }
    ctx->pc = 0x357568u;
    // 0x357568: 0xc0d6250  jal         func_358940
    ctx->pc = 0x357568u;
    SET_GPR_U32(ctx, 31, 0x357570u);
    ctx->pc = 0x35756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357568u;
    // 0x35756c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358940u, 0x357568u, 0x357570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357570u;
label_357570:
    // 0x357570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x357570u;
    {
        const bool branch_taken_0x357570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357570u;
        // 0x357574: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357570) {
            ctx->pc = 0x357580u;
            goto label_357580;
        }
    }
    ctx->pc = 0x357578u;
label_357578:
    // 0x357578: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x357578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35757c:
    // 0x35757c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_357580:
    // 0x357580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357584:
    // 0x357584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35758c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357590: 0x3e00008  jr          $ra
    ctx->pc = 0x357590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357590u;
        // 0x357594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357598u;
}
