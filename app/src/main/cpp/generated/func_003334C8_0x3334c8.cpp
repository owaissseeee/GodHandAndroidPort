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

// Function: func_003334C8
// Address: 0x3334c8 - 0x333560
void func_003334C8_0x3334c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003334C8_0x3334c8");
#endif

    switch (ctx->pc) {
        case 0x3334ecu: goto label_3334ec;
        case 0x3334f8u: goto label_3334f8;
        case 0x333500u: goto label_333500;
        case 0x333518u: goto label_333518;
        case 0x33352cu: goto label_33352c;
        default: break;
    }

    ctx->pc = 0x3334c8u;

    // 0x3334c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3334c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3334cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3334ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3334d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3334d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3334d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3334d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3334d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3334dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3334dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3334e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3334e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3334e4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3334E4u;
    SET_GPR_U32(ctx, 31, 0x3334ECu);
    ctx->pc = 0x3334E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334E4u;
    // 0x3334e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3334E4u, 0x3334ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334ECu;
label_3334ec:
    // 0x3334ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334f0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3334F0u;
    SET_GPR_U32(ctx, 31, 0x3334F8u);
    ctx->pc = 0x3334F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334F0u;
    // 0x3334f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3334F0u, 0x3334F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334F8u;
label_3334f8:
    // 0x3334f8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3334F8u;
    {
        const bool branch_taken_0x3334f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3334f8) {
            ctx->pc = 0x333508u;
            goto label_333508;
        }
    }
    ctx->pc = 0x333500u;
label_333500:
    // 0x333500: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x333500u;
    {
        const bool branch_taken_0x333500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333500u;
        // 0x333504: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333500) {
            ctx->pc = 0x333540u;
            goto label_333540;
        }
    }
    ctx->pc = 0x333508u;
label_333508:
    // 0x333508: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x333508u;
    {
        const bool branch_taken_0x333508 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x33350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333508u;
        // 0x33350c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333508) {
            ctx->pc = 0x33353Cu;
            goto label_33353c;
        }
    }
    ctx->pc = 0x333510u;
    // 0x333510: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x333510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x333514: 0x0  nop
    ctx->pc = 0x333514u;
    // NOP
label_333518:
    // 0x333518: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x333518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x33351c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x33351cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x333524: 0xc0ccd1c  jal         func_333470
    ctx->pc = 0x333524u;
    SET_GPR_U32(ctx, 31, 0x33352Cu);
    ctx->pc = 0x333528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333524u;
    // 0x333528: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333470u, 0x333524u, 0x33352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33352Cu;
label_33352c:
    // 0x33352c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x33352Cu;
    {
        const bool branch_taken_0x33352c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33352Cu;
        // 0x333530: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33352c) {
            ctx->pc = 0x333500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333500;
        }
    }
    ctx->pc = 0x333534u;
    // 0x333534: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x333534u;
    {
        const bool branch_taken_0x333534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333534u;
        // 0x333538: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333534) {
            ctx->pc = 0x333518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333518;
        }
    }
    ctx->pc = 0x33353Cu;
label_33353c:
    // 0x33353c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33353cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333540:
    // 0x333540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33354c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33354cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333554: 0x3e00008  jr          $ra
    ctx->pc = 0x333554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333554u;
        // 0x333558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33355Cu;
    // 0x33355c: 0x0  nop
    ctx->pc = 0x33355cu;
    // NOP
    ctx->pc = 0x333560u;
}
