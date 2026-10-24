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

// Function: func_00322AF8
// Address: 0x322af8 - 0x322b60
void func_00322AF8_0x322af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322AF8_0x322af8");
#endif

    switch (ctx->pc) {
        case 0x322b24u: goto label_322b24;
        case 0x322b38u: goto label_322b38;
        case 0x322b40u: goto label_322b40;
        default: break;
    }

    ctx->pc = 0x322af8u;

    // 0x322af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322b08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x322b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x322b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322b10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x322b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x322b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x322b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322b1c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x322B1Cu;
    SET_GPR_U32(ctx, 31, 0x322B24u);
    ctx->pc = 0x322B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B1Cu;
    // 0x322b20: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x322B1Cu, 0x322B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B24u;
label_322b24:
    // 0x322b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b30: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x322B30u;
    SET_GPR_U32(ctx, 31, 0x322B38u);
    ctx->pc = 0x322B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B30u;
    // 0x322b34: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x322B30u, 0x322B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B38u;
label_322b38:
    // 0x322b38: 0xc0c9226  jal         func_324898
    ctx->pc = 0x322B38u;
    SET_GPR_U32(ctx, 31, 0x322B40u);
    ctx->pc = 0x322B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B38u;
    // 0x322b3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x322B38u, 0x322B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B40u;
label_322b40:
    // 0x322b40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322b44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322b50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x322b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322b54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322b58: 0x3e00008  jr          $ra
    ctx->pc = 0x322B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B58u;
        // 0x322b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322B60u;
}
