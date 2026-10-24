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

// Function: func_002FFFE0
// Address: 0x2fffe0 - 0x300020
void func_002FFFE0_0x2fffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFFE0_0x2fffe0");
#endif

    switch (ctx->pc) {
        case 0x2ffffcu: goto label_2ffffc;
        default: break;
    }

    ctx->pc = 0x2fffe0u;

    // 0x2fffe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fffe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fffe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fffe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffec: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFFECu;
    {
        const bool branch_taken_0x2fffec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFECu;
        // 0x2ffff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffec) {
            ctx->pc = 0x30000Cu;
            goto label_30000c;
        }
    }
    ctx->pc = 0x2FFFF4u;
    // 0x2ffff4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFFF4u;
    SET_GPR_U32(ctx, 31, 0x2FFFFCu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFFF4u, 0x2FFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFFCu;
label_2ffffc:
    // 0x2ffffc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x300000: 0x2463f598  addiu       $v1, $v1, -0xA68
    ctx->pc = 0x300000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964632));
    // 0x300004: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x300004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x300008: 0xfa0002b0  sqc2        $vf0, 0x2B0($s0)
    ctx->pc = 0x300008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), _mm_castps_si128(ctx->vu0_vf[0]));
label_30000c:
    // 0x30000c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300018: 0x3e00008  jr          $ra
    ctx->pc = 0x300018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300018u;
        // 0x30001c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300020u;
}
