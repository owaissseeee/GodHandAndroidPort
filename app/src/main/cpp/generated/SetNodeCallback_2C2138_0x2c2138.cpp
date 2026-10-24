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

// Function: SetNodeCallback_2C2138
// Address: 0x2c2138 - 0x2c21a0
void SetNodeCallback_2C2138_0x2c2138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNodeCallback_2C2138_0x2c2138");
#endif

    switch (ctx->pc) {
        case 0x2c216cu: goto label_2c216c;
        default: break;
    }

    ctx->pc = 0x2c2138u;

    // 0x2c2138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c213c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c213cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2144: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c2144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c2148: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c2148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c214c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c214cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2150: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2c2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c2154: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2154u;
    {
        const bool branch_taken_0x2c2154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2154u;
        // 0x2c2158: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2154) {
            ctx->pc = 0x2C2184u;
            goto label_2c2184;
        }
    }
    ctx->pc = 0x2C215Cu;
    // 0x2c215c: 0x80470044  lb          $a3, 0x44($v0)
    ctx->pc = 0x2c215cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c2160: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x2c2160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x2c2164: 0xc0b0e36  jal         func_2C38D8
    ctx->pc = 0x2C2164u;
    SET_GPR_U32(ctx, 31, 0x2C216Cu);
    ctx->pc = 0x2C2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2164u;
    // 0x2c2168: 0x8c460040  lw          $a2, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C38D8u, 0x2C2164u, 0x2C216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C216Cu;
label_2c216c:
    // 0x2c216c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x2c216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x2c2170: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2c2170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c2174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c2178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c217c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C217Cu;
    {
        const bool branch_taken_0x2c217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C217Cu;
        // 0x2c2180: 0xac710058  sw          $s1, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c217c) {
            ctx->pc = 0x2C2188u;
            goto label_2c2188;
        }
    }
    ctx->pc = 0x2C2184u;
label_2c2184:
    // 0x2c2184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2188:
    // 0x2c2188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c2188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c218c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c218cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2194: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2194u;
        // 0x2c2198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C219Cu;
    // 0x2c219c: 0x0  nop
    ctx->pc = 0x2c219cu;
    // NOP
    ctx->pc = 0x2c21a0u;
}
