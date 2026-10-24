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

// Function: func_002FFB38
// Address: 0x2ffb38 - 0x2ffb80
void func_002FFB38_0x2ffb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFB38_0x2ffb38");
#endif

    switch (ctx->pc) {
        case 0x2ffb54u: goto label_2ffb54;
        default: break;
    }

    ctx->pc = 0x2ffb38u;

    // 0x2ffb38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffb3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb44: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFB44u;
    {
        const bool branch_taken_0x2ffb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB44u;
        // 0x2ffb48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb44) {
            ctx->pc = 0x2FFB68u;
            goto label_2ffb68;
        }
    }
    ctx->pc = 0x2FFB4Cu;
    // 0x2ffb4c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB54u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFB4Cu, 0x2FFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB54u;
label_2ffb54:
    // 0x2ffb54: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffb58: 0x2463e538  addiu       $v1, $v1, -0x1AC8
    ctx->pc = 0x2ffb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960440));
    // 0x2ffb5c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2ffb60: 0xfa0002c0  sqc2        $vf0, 0x2C0($s0)
    ctx->pc = 0x2ffb60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffb64: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2ffb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_2ffb68:
    // 0x2ffb68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffb70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffb74: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB74u;
        // 0x2ffb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFB7Cu;
    // 0x2ffb7c: 0x0  nop
    ctx->pc = 0x2ffb7cu;
    // NOP
    ctx->pc = 0x2ffb80u;
}
