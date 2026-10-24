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

// Function: func_00348338
// Address: 0x348338 - 0x3483a0
void func_00348338_0x348338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348338_0x348338");
#endif

    switch (ctx->pc) {
        case 0x348338u: goto label_348338;
        case 0x34833cu: goto label_34833c;
        case 0x348340u: goto label_348340;
        case 0x348344u: goto label_348344;
        case 0x348348u: goto label_348348;
        case 0x34834cu: goto label_34834c;
        case 0x348350u: goto label_348350;
        case 0x348354u: goto label_348354;
        case 0x348358u: goto label_348358;
        case 0x34835cu: goto label_34835c;
        case 0x348360u: goto label_348360;
        case 0x348364u: goto label_348364;
        case 0x348368u: goto label_348368;
        case 0x34836cu: goto label_34836c;
        case 0x348370u: goto label_348370;
        case 0x348374u: goto label_348374;
        case 0x348378u: goto label_348378;
        case 0x34837cu: goto label_34837c;
        case 0x348380u: goto label_348380;
        case 0x348384u: goto label_348384;
        case 0x348388u: goto label_348388;
        case 0x34838cu: goto label_34838c;
        case 0x348390u: goto label_348390;
        case 0x348394u: goto label_348394;
        case 0x348398u: goto label_348398;
        case 0x34839cu: goto label_34839c;
        default: break;
    }

    ctx->pc = 0x348338u;

label_348338:
    // 0x348338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34833c:
    // 0x34833c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348340:
    // 0x348340: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_348344:
    // 0x348344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_348348:
    // 0x348348: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x348348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34834c:
    // 0x34834c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_348350:
    // 0x348350: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x348350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_348354:
    // 0x348354: 0xc0d224e  jal         func_348938
label_348358:
    if (ctx->pc == 0x348358u) {
        ctx->pc = 0x348358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348354u;
        // 0x348358: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34835Cu;
        goto label_34835c;
    }
    ctx->pc = 0x348354u;
    SET_GPR_U32(ctx, 31, 0x34835Cu);
    ctx->pc = 0x348358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348354u;
    // 0x348358: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x348354u, 0x34835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34835Cu;
label_34835c:
    // 0x34835c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_348360:
    if (ctx->pc == 0x348360u) {
        ctx->pc = 0x348360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34835Cu;
        // 0x348360: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348364u;
        goto label_348364;
    }
    ctx->pc = 0x34835Cu;
    {
        const bool branch_taken_0x34835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34835Cu;
        // 0x348360: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34835c) {
            ctx->pc = 0x348380u;
            goto label_348380;
        }
    }
    ctx->pc = 0x348364u;
label_348364:
    // 0x348364: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_348368:
    // 0x348368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34836c:
    if (ctx->pc == 0x34836Cu) {
        ctx->pc = 0x34836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348368u;
        // 0x34836c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348370u;
        goto label_348370;
    }
    ctx->pc = 0x348368u;
    {
        const bool branch_taken_0x348368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348368u;
        // 0x34836c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348368) {
            ctx->pc = 0x348380u;
            goto label_348380;
        }
    }
    ctx->pc = 0x348370u;
label_348370:
    // 0x348370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x348370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348374:
    // 0x348374: 0x40f809  jalr        $v0
label_348378:
    if (ctx->pc == 0x348378u) {
        ctx->pc = 0x348378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348374u;
        // 0x348378: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34837Cu;
        goto label_34837c;
    }
    ctx->pc = 0x348374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34837Cu);
        ctx->pc = 0x348378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348374u;
        // 0x348378: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348374u, 0x34837Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34837Cu;
label_34837c:
    // 0x34837c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34837cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348380:
    // 0x348380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348384:
    // 0x348384: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x348384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_348388:
    // 0x348388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34838c:
    // 0x34838c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34838cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348390:
    // 0x348390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_348394:
    // 0x348394: 0x3e00008  jr          $ra
label_348398:
    if (ctx->pc == 0x348398u) {
        ctx->pc = 0x348398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348394u;
        // 0x348398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34839Cu;
        goto label_34839c;
    }
    ctx->pc = 0x348394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348394u;
        // 0x348398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34839Cu;
label_34839c:
    // 0x34839c: 0x0  nop
    ctx->pc = 0x34839cu;
    // NOP
    ctx->pc = 0x3483a0u;
}
