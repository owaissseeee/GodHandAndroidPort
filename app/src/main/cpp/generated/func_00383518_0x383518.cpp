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

// Function: func_00383518
// Address: 0x383518 - 0x3835a0
void func_00383518_0x383518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383518_0x383518");
#endif

    switch (ctx->pc) {
        case 0x383554u: goto label_383554;
        case 0x383564u: goto label_383564;
        case 0x383580u: goto label_383580;
        case 0x383590u: goto label_383590;
        default: break;
    }

    ctx->pc = 0x383518u;

    // 0x383518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38351c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x38351cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383524: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x383524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x383528: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x383528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x38352c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x38352Cu;
    {
        const bool branch_taken_0x38352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38352Cu;
        // 0x383530: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38352c) {
            ctx->pc = 0x383590u;
            goto label_383590;
        }
    }
    ctx->pc = 0x383534u;
    // 0x383534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x383534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x383538: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x383538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x38353c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x383540: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x383540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383544: 0x800008  jr          $a0
    ctx->pc = 0x383544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38354Cu: goto label_38354c;
            case 0x38355Cu: goto label_38355c;
            case 0x38356Cu: goto label_38356c;
            case 0x383588u: goto label_383588;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383544u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38354Cu;
label_38354c:
    // 0x38354c: 0xc0e0da4  jal         func_383690
    ctx->pc = 0x38354Cu;
    SET_GPR_U32(ctx, 31, 0x383554u);
    ctx->pc = 0x383550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38354Cu;
    // 0x383550: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383690u, 0x38354Cu, 0x383554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383554u;
label_383554:
    // 0x383554: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x383554u;
    {
        const bool branch_taken_0x383554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383554u;
        // 0x383558: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383554) {
            ctx->pc = 0x383594u;
            goto label_383594;
        }
    }
    ctx->pc = 0x38355Cu;
label_38355c:
    // 0x38355c: 0xc0e0e1e  jal         func_383878
    ctx->pc = 0x38355Cu;
    SET_GPR_U32(ctx, 31, 0x383564u);
    ctx->pc = 0x383560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38355Cu;
    // 0x383560: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383878u, 0x38355Cu, 0x383564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383564u;
label_383564:
    // 0x383564: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x383564u;
    {
        const bool branch_taken_0x383564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383564u;
        // 0x383568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383564) {
            ctx->pc = 0x383594u;
            goto label_383594;
        }
    }
    ctx->pc = 0x38356Cu;
label_38356c:
    // 0x38356c: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x38356cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x383570: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x383570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383574: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x383574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x383578: 0xc0e0ed8  jal         func_383B60
    ctx->pc = 0x383578u;
    SET_GPR_U32(ctx, 31, 0x383580u);
    ctx->pc = 0x38357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383578u;
    // 0x38357c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B60u, 0x383578u, 0x383580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383580u;
label_383580:
    // 0x383580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x383580u;
    {
        const bool branch_taken_0x383580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383580u;
        // 0x383584: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383580) {
            ctx->pc = 0x383594u;
            goto label_383594;
        }
    }
    ctx->pc = 0x383588u;
label_383588:
    // 0x383588: 0xc0e0f90  jal         func_383E40
    ctx->pc = 0x383588u;
    SET_GPR_U32(ctx, 31, 0x383590u);
    ctx->pc = 0x38358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383588u;
    // 0x38358c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383E40u, 0x383588u, 0x383590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383590u;
label_383590:
    // 0x383590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_383594:
    // 0x383594: 0x3e00008  jr          $ra
    ctx->pc = 0x383594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383594u;
        // 0x383598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38359Cu;
    // 0x38359c: 0x0  nop
    ctx->pc = 0x38359cu;
    // NOP
    ctx->pc = 0x3835a0u;
}
