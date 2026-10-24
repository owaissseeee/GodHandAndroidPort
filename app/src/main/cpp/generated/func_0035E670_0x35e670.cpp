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

// Function: func_0035E670
// Address: 0x35e670 - 0x35e6e8
void func_0035E670_0x35e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E670_0x35e670");
#endif

    switch (ctx->pc) {
        case 0x35e698u: goto label_35e698;
        case 0x35e6b0u: goto label_35e6b0;
        default: break;
    }

    ctx->pc = 0x35e670u;

    // 0x35e670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e678: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e680: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e684: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e68c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e690: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E690u;
    SET_GPR_U32(ctx, 31, 0x35E698u);
    ctx->pc = 0x35E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E690u;
    // 0x35e694: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E690u, 0x35E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E698u;
label_35e698:
    // 0x35e698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6a0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x35E6A0u;
    {
        const bool branch_taken_0x35e6a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6A0u;
        // 0x35e6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6a0) {
            ctx->pc = 0x35E6CCu;
            goto label_35e6cc;
        }
    }
    ctx->pc = 0x35E6A8u;
    // 0x35e6a8: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E6A8u;
    SET_GPR_U32(ctx, 31, 0x35E6B0u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E6A8u, 0x35E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6B0u;
label_35e6b0:
    // 0x35e6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E6B0u;
    {
        const bool branch_taken_0x35e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6B0u;
        // 0x35e6b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6b0) {
            ctx->pc = 0x35E6D0u;
            goto label_35e6d0;
        }
    }
    ctx->pc = 0x35E6B8u;
    // 0x35e6b8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x35e6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x35e6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e6c0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x35e6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x35e6c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x35e6c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e6c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e6cc:
    // 0x35e6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e6d0:
    // 0x35e6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e6d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35E6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6DCu;
        // 0x35e6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E6E4u;
    // 0x35e6e4: 0x0  nop
    ctx->pc = 0x35e6e4u;
    // NOP
    ctx->pc = 0x35e6e8u;
}
