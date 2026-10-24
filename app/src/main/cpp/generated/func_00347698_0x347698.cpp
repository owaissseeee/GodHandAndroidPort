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

// Function: func_00347698
// Address: 0x347698 - 0x347700
void func_00347698_0x347698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347698_0x347698");
#endif

    switch (ctx->pc) {
        case 0x3476acu: goto label_3476ac;
        case 0x3476dcu: goto label_3476dc;
        default: break;
    }

    ctx->pc = 0x347698u;

    // 0x347698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34769c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3476a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3476a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3476a4: 0xc0d1cb6  jal         func_3472D8
    ctx->pc = 0x3476A4u;
    SET_GPR_U32(ctx, 31, 0x3476ACu);
    ctx->pc = 0x3476A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476A4u;
    // 0x3476a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472D8u, 0x3476A4u, 0x3476ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476ACu;
label_3476ac:
    // 0x3476ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3476acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3476b0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3476B0u;
    {
        const bool branch_taken_0x3476b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3476b0) {
            ctx->pc = 0x3476B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3476B0u;
            // 0x3476b4: 0x8e03017c  lw          $v1, 0x17C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3476C0u;
            goto label_3476c0;
        }
    }
    ctx->pc = 0x3476B8u;
    // 0x3476b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3476B8u;
    {
        const bool branch_taken_0x3476b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3476BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476B8u;
        // 0x3476bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476b8) {
            ctx->pc = 0x3476E8u;
            goto label_3476e8;
        }
    }
    ctx->pc = 0x3476C0u;
label_3476c0:
    // 0x3476c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3476C0u;
    {
        const bool branch_taken_0x3476c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3476C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476C0u;
        // 0x3476c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476c0) {
            ctx->pc = 0x3476E8u;
            goto label_3476e8;
        }
    }
    ctx->pc = 0x3476C8u;
    // 0x3476c8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3476c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3476cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3476ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3476d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3476d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476d4: 0xc0d7398  jal         func_35CE60
    ctx->pc = 0x3476D4u;
    SET_GPR_U32(ctx, 31, 0x3476DCu);
    ctx->pc = 0x3476D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476D4u;
    // 0x3476d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE60u, 0x3476D4u, 0x3476DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476DCu;
label_3476dc:
    // 0x3476dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3476e0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3476e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3476e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3476e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3476e8:
    // 0x3476e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3476e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3476ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3476ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3476f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3476F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476F0u;
        // 0x3476f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3476F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3476F8u;
    // 0x3476f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3476f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3476fc: 0x0  nop
    ctx->pc = 0x3476fcu;
    // NOP
    ctx->pc = 0x347700u;
}
