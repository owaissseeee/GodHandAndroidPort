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

// Function: func_0035E318
// Address: 0x35e318 - 0x35e388
void func_0035E318_0x35e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E318_0x35e318");
#endif

    switch (ctx->pc) {
        case 0x35e344u: goto label_35e344;
        case 0x35e358u: goto label_35e358;
        default: break;
    }

    ctx->pc = 0x35e318u;

    // 0x35e318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e31c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e32c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e32cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e330: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35e330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35e334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e338: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e33c: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E33Cu;
    SET_GPR_U32(ctx, 31, 0x35E344u);
    ctx->pc = 0x35E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E33Cu;
    // 0x35e340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E33Cu, 0x35E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E344u;
label_35e344:
    // 0x35e344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e348: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E348u;
    {
        const bool branch_taken_0x35e348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E348u;
        // 0x35e34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e348) {
            ctx->pc = 0x35E370u;
            goto label_35e370;
        }
    }
    ctx->pc = 0x35E350u;
    // 0x35e350: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E350u;
    SET_GPR_U32(ctx, 31, 0x35E358u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E350u, 0x35E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E358u;
label_35e358:
    // 0x35e358: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e35c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E35Cu;
    {
        const bool branch_taken_0x35e35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E35Cu;
        // 0x35e360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e35c) {
            ctx->pc = 0x35E370u;
            goto label_35e370;
        }
    }
    ctx->pc = 0x35E364u;
    // 0x35e364: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x35e364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x35e368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e36c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e370:
    // 0x35e370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e37c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e380: 0x3e00008  jr          $ra
    ctx->pc = 0x35E380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E380u;
        // 0x35e384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E388u;
}
