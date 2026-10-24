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

// Function: func_00333470
// Address: 0x333470 - 0x3334c8
void func_00333470_0x333470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333470_0x333470");
#endif

    switch (ctx->pc) {
        case 0x333494u: goto label_333494;
        case 0x3334a0u: goto label_3334a0;
        default: break;
    }

    ctx->pc = 0x333470u;

    // 0x333470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333474: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x333478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33347c: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x33347cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x333480: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x333484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33348c: 0xc0ccd0e  jal         func_333438
    ctx->pc = 0x33348Cu;
    SET_GPR_U32(ctx, 31, 0x333494u);
    ctx->pc = 0x333490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33348Cu;
    // 0x333490: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333438u, 0x33348Cu, 0x333494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333494u;
label_333494:
    // 0x333494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333498: 0xc0ccd0e  jal         func_333438
    ctx->pc = 0x333498u;
    SET_GPR_U32(ctx, 31, 0x3334A0u);
    ctx->pc = 0x33349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333498u;
    // 0x33349c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333438u, 0x333498u, 0x3334A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334A0u;
label_3334a0:
    // 0x3334a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3334a4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x3334a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x3334a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3334a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334ac: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x3334acu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3334b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3334b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3334b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3334b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3334b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3334b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3334bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3334BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3334C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3334BCu;
        // 0x3334c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3334BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3334C4u;
    // 0x3334c4: 0x0  nop
    ctx->pc = 0x3334c4u;
    // NOP
    ctx->pc = 0x3334c8u;
}
