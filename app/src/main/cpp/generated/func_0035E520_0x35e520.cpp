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

// Function: func_0035E520
// Address: 0x35e520 - 0x35e590
void func_0035E520_0x35e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E520_0x35e520");
#endif

    switch (ctx->pc) {
        case 0x35e54cu: goto label_35e54c;
        case 0x35e564u: goto label_35e564;
        default: break;
    }

    ctx->pc = 0x35e520u;

    // 0x35e520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e524: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e52c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e534: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e538: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35e538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35e53c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e540: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e544: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E544u;
    SET_GPR_U32(ctx, 31, 0x35E54Cu);
    ctx->pc = 0x35E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E544u;
    // 0x35e548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E544u, 0x35E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E54Cu;
label_35e54c:
    // 0x35e54c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e554: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E554u;
    {
        const bool branch_taken_0x35e554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E554u;
        // 0x35e558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e554) {
            ctx->pc = 0x35E578u;
            goto label_35e578;
        }
    }
    ctx->pc = 0x35E55Cu;
    // 0x35e55c: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E55Cu;
    SET_GPR_U32(ctx, 31, 0x35E564u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E55Cu, 0x35E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E564u;
label_35e564:
    // 0x35e564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E564u;
    {
        const bool branch_taken_0x35e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E564u;
        // 0x35e568: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e564) {
            ctx->pc = 0x35E57Cu;
            goto label_35e57c;
        }
    }
    ctx->pc = 0x35E56Cu;
    // 0x35e56c: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x35e56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x35e570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e574: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e578:
    // 0x35e578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e57c:
    // 0x35e57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e584: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e588: 0x3e00008  jr          $ra
    ctx->pc = 0x35E588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E588u;
        // 0x35e58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E590u;
}
