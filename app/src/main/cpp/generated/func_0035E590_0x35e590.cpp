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

// Function: func_0035E590
// Address: 0x35e590 - 0x35e600
void func_0035E590_0x35e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E590_0x35e590");
#endif

    switch (ctx->pc) {
        case 0x35e5bcu: goto label_35e5bc;
        case 0x35e5d4u: goto label_35e5d4;
        default: break;
    }

    ctx->pc = 0x35e590u;

    // 0x35e590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e59c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e5a4: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e5a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e5a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35e5ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e5b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e5b4: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E5B4u;
    SET_GPR_U32(ctx, 31, 0x35E5BCu);
    ctx->pc = 0x35E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E5B4u;
    // 0x35e5b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E5B4u, 0x35E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5BCu;
label_35e5bc:
    // 0x35e5bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E5C4u;
    {
        const bool branch_taken_0x35e5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5C4u;
        // 0x35e5c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5c4) {
            ctx->pc = 0x35E5E8u;
            goto label_35e5e8;
        }
    }
    ctx->pc = 0x35E5CCu;
    // 0x35e5cc: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E5CCu;
    SET_GPR_U32(ctx, 31, 0x35E5D4u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E5CCu, 0x35E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5D4u;
label_35e5d4:
    // 0x35e5d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E5D4u;
    {
        const bool branch_taken_0x35e5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5D4u;
        // 0x35e5d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5d4) {
            ctx->pc = 0x35E5ECu;
            goto label_35e5ec;
        }
    }
    ctx->pc = 0x35E5DCu;
    // 0x35e5dc: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x35e5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x35e5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e5e4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e5e8:
    // 0x35e5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e5ec:
    // 0x35e5ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e5f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e5f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5F8u;
        // 0x35e5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E600u;
}
