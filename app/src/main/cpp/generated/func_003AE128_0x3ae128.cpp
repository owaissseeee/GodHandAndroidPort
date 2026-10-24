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

// Function: func_003AE128
// Address: 0x3ae128 - 0x3ae188
void func_003AE128_0x3ae128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE128_0x3ae128");
#endif

    switch (ctx->pc) {
        case 0x3ae154u: goto label_3ae154;
        default: break;
    }

    ctx->pc = 0x3ae128u;

    // 0x3ae128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae12c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ae138: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ae138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae13c: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3ae13cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3ae140: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ae140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae148: 0xae20db88  sw          $zero, -0x2478($s1)
    ctx->pc = 0x3ae148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77DB88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77DB88u, _value); } while (0);
    // 0x3ae14c: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3AE14Cu;
    SET_GPR_U32(ctx, 31, 0x3AE154u);
    ctx->pc = 0x3AE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE14Cu;
    // 0x3ae150: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3AE14Cu, 0x3AE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE154u;
label_3ae154:
    // 0x3ae154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae15c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE15Cu;
    {
        const bool branch_taken_0x3ae15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae15c) {
            ctx->pc = 0x3AE160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE15Cu;
            // 0x3ae160: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE174u;
            goto label_3ae174;
        }
    }
    ctx->pc = 0x3AE164u;
    // 0x3ae164: 0x8e22db88  lw          $v0, -0x2478($s1)
    ctx->pc = 0x3ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957960)));
    // 0x3ae168: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE168u;
    {
        const bool branch_taken_0x3ae168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae168) {
            ctx->pc = 0x3AE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE168u;
            // 0x3ae16c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE170u;
            goto label_3ae170;
        }
    }
    ctx->pc = 0x3AE170u;
label_3ae170:
    // 0x3ae170: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae174:
    // 0x3ae174: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ae174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae180: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE180u;
        // 0x3ae184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE188u;
}
