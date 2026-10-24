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

// Function: func_0035E868
// Address: 0x35e868 - 0x35e8f8
void func_0035E868_0x35e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E868_0x35e868");
#endif

    switch (ctx->pc) {
        case 0x35e89cu: goto label_35e89c;
        case 0x35e8b4u: goto label_35e8b4;
        default: break;
    }

    ctx->pc = 0x35e868u;

    // 0x35e868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e86c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e870: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e874: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35e874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e87c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e87cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e880: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x35e880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x35e884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35e884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e888: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e88c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35e894: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E894u;
    SET_GPR_U32(ctx, 31, 0x35E89Cu);
    ctx->pc = 0x35E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E894u;
    // 0x35e898: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E894u, 0x35E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E89Cu;
label_35e89c:
    // 0x35e89c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x35E8A4u;
    {
        const bool branch_taken_0x35e8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8A4u;
        // 0x35e8a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e8a4) {
            ctx->pc = 0x35E8D8u;
            goto label_35e8d8;
        }
    }
    ctx->pc = 0x35E8ACu;
    // 0x35e8ac: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E8ACu;
    SET_GPR_U32(ctx, 31, 0x35E8B4u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E8ACu, 0x35E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8B4u;
label_35e8b4:
    // 0x35e8b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E8B4u;
    {
        const bool branch_taken_0x35e8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8B4u;
        // 0x35e8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e8b4) {
            ctx->pc = 0x35E8DCu;
            goto label_35e8dc;
        }
    }
    ctx->pc = 0x35E8BCu;
    // 0x35e8bc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x35e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x35e8c0: 0x286300d2  slti        $v1, $v1, 0xD2
    ctx->pc = 0x35e8c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)210) ? 1 : 0);
    // 0x35e8c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E8C4u;
    {
        const bool branch_taken_0x35e8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8C4u;
        // 0x35e8c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e8c4) {
            ctx->pc = 0x35E8DCu;
            goto label_35e8dc;
        }
    }
    ctx->pc = 0x35E8CCu;
    // 0x35e8cc: 0x92230027  lbu         $v1, 0x27($s1)
    ctx->pc = 0x35e8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x35e8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e8d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x35e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_35e8d8:
    // 0x35e8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e8dc:
    // 0x35e8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e8e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e8e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e8e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e8e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35E8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8ECu;
        // 0x35e8f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E8F4u;
    // 0x35e8f4: 0x0  nop
    ctx->pc = 0x35e8f4u;
    // NOP
    ctx->pc = 0x35e8f8u;
}
