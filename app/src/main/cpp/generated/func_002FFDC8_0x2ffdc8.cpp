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

// Function: func_002FFDC8
// Address: 0x2ffdc8 - 0x2ffe10
void func_002FFDC8_0x2ffdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFDC8_0x2ffdc8");
#endif

    switch (ctx->pc) {
        case 0x2ffde4u: goto label_2ffde4;
        default: break;
    }

    ctx->pc = 0x2ffdc8u;

    // 0x2ffdc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffdcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffdd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFDD4u;
    {
        const bool branch_taken_0x2ffdd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD4u;
        // 0x2ffdd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd4) {
            ctx->pc = 0x2FFDF8u;
            goto label_2ffdf8;
        }
    }
    ctx->pc = 0x2FFDDCu;
    // 0x2ffddc: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFDDCu;
    SET_GPR_U32(ctx, 31, 0x2FFDE4u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFDDCu, 0x2FFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDE4u;
label_2ffde4:
    // 0x2ffde4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffde8: 0x2463ef08  addiu       $v1, $v1, -0x10F8
    ctx->pc = 0x2ffde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962952));
    // 0x2ffdec: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2ffdf0: 0xfa0002c0  sqc2        $vf0, 0x2C0($s0)
    ctx->pc = 0x2ffdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffdf4: 0xfa0002e0  sqc2        $vf0, 0x2E0($s0)
    ctx->pc = 0x2ffdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), _mm_castps_si128(ctx->vu0_vf[0]));
label_2ffdf8:
    // 0x2ffdf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffe00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffe00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffe04: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE04u;
        // 0x2ffe08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFE0Cu;
    // 0x2ffe0c: 0x0  nop
    ctx->pc = 0x2ffe0cu;
    // NOP
    ctx->pc = 0x2ffe10u;
}
