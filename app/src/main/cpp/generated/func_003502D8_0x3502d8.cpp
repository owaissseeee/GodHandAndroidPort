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

// Function: func_003502D8
// Address: 0x3502d8 - 0x350390
void func_003502D8_0x3502d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003502D8_0x3502d8");
#endif

    switch (ctx->pc) {
        case 0x350308u: goto label_350308;
        case 0x350350u: goto label_350350;
        default: break;
    }

    ctx->pc = 0x3502d8u;

    // 0x3502d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3502d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3502dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3502dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3502e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3502e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3502e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3502e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3502ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3502ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3502f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3502f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3502f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502f8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3502F8u;
    {
        const bool branch_taken_0x3502f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3502FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502F8u;
        // 0x3502fc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3502f8) {
            ctx->pc = 0x350338u;
            goto label_350338;
        }
    }
    ctx->pc = 0x350300u;
    // 0x350300: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x350300u;
    SET_GPR_U32(ctx, 31, 0x350308u);
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x350300u, 0x350308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350308u;
label_350308:
    // 0x350308: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x350308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35030c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35030Cu;
    {
        const bool branch_taken_0x35030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35030Cu;
        // 0x350310: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35030c) {
            ctx->pc = 0x350330u;
            goto label_350330;
        }
    }
    ctx->pc = 0x350314u;
    // 0x350314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350318: 0x34a50181  ori         $a1, $a1, 0x181
    ctx->pc = 0x350318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)385);
    // 0x35031c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35031cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350328: 0x80d375c  j           func_34DD70
    ctx->pc = 0x350328u;
    ctx->pc = 0x35032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350328u;
    // 0x35032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x350328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350330u;
label_350330:
    // 0x350330: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x350330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x350334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_350338:
    // 0x350338: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x350338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x35033c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350340: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x350340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350348: 0xc0db114  jal         func_36C450
    ctx->pc = 0x350348u;
    SET_GPR_U32(ctx, 31, 0x350350u);
    ctx->pc = 0x35034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350348u;
    // 0x35034c: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C450u, 0x350348u, 0x350350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350350u;
label_350350:
    // 0x350350: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x350350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x350354: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x350354u;
    {
        const bool branch_taken_0x350354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350354u;
        // 0x350358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350354) {
            ctx->pc = 0x350378u;
            goto label_350378;
        }
    }
    ctx->pc = 0x35035Cu;
    // 0x35035c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35035cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350360: 0x34a50f12  ori         $a1, $a1, 0xF12
    ctx->pc = 0x350360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3858);
    // 0x350364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35036c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350370: 0x80d375c  j           func_34DD70
    ctx->pc = 0x350370u;
    ctx->pc = 0x350374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350370u;
    // 0x350374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x350370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350378u;
label_350378:
    // 0x350378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35037c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35037cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350384: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350388: 0x3e00008  jr          $ra
    ctx->pc = 0x350388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350388u;
        // 0x35038c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350390u;
}
