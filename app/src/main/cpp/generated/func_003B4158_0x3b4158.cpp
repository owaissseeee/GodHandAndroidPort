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

// Function: func_003B4158
// Address: 0x3b4158 - 0x3b41e8
void func_003B4158_0x3b4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B4158_0x3b4158");
#endif

    switch (ctx->pc) {
        case 0x3b4194u: goto label_3b4194;
        case 0x3b41acu: goto label_3b41ac;
        case 0x3b41c0u: goto label_3b41c0;
        default: break;
    }

    ctx->pc = 0x3b4158u;

    // 0x3b4158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b415c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b4160: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b4160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b4164: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b4164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b4168: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b416c: 0x2453ae3c  addiu       $s3, $v0, -0x51C4
    ctx->pc = 0x3b416cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946364));
    // 0x3b4170: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b4170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b4174: 0x247116e8  addiu       $s1, $v1, 0x16E8
    ctx->pc = 0x3b4174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5864));
    // 0x3b4178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b417c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b417cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b4184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b4188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b418c: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B418Cu;
    SET_GPR_U32(ctx, 31, 0x3B4194u);
    ctx->pc = 0x3B4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B418Cu;
    // 0x3b4190: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B418Cu, 0x3B4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4194u;
label_3b4194:
    // 0x3b4194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4194u;
    {
        const bool branch_taken_0x3b4194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4194u;
        // 0x3b4198: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4194) {
            ctx->pc = 0x3B41C4u;
            goto label_3b41c4;
        }
    }
    ctx->pc = 0x3B419Cu;
    // 0x3b419c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41a0: 0x8e05aef0  lw          $a1, -0x5110($s0)
    ctx->pc = 0x3b41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946544)));
    // 0x3b41a4: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B41A4u;
    SET_GPR_U32(ctx, 31, 0x3B41ACu);
    ctx->pc = 0x3B41A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41A4u;
    // 0x3b41a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B41A4u, 0x3B41ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41ACu;
label_3b41ac:
    // 0x3b41ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B41ACu;
    {
        const bool branch_taken_0x3b41ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41ACu;
        // 0x3b41b0: 0x8e05aef0  lw          $a1, -0x5110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b41ac) {
            ctx->pc = 0x3B41C4u;
            goto label_3b41c4;
        }
    }
    ctx->pc = 0x3B41B4u;
    // 0x3b41b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41b8: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B41B8u;
    SET_GPR_U32(ctx, 31, 0x3B41C0u);
    ctx->pc = 0x3B41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41B8u;
    // 0x3b41bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B41B8u, 0x3B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41C0u;
label_3b41c0:
    // 0x3b41c0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3b41c0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b41c4:
    // 0x3b41c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b41c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b41c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b41cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b41ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b41d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b41d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b41d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b41d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b41d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b41d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b41dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B41DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41DCu;
        // 0x3b41e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B41DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B41E4u;
    // 0x3b41e4: 0x0  nop
    ctx->pc = 0x3b41e4u;
    // NOP
    ctx->pc = 0x3b41e8u;
}
