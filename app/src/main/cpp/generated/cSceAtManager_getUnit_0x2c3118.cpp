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

// Function: cSceAtManager_getUnit
// Address: 0x2c3118 - 0x2c3190
void cSceAtManager_getUnit_0x2c3118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_getUnit_0x2c3118");
#endif

    switch (ctx->pc) {
        case 0x2c314cu: goto label_2c314c;
        case 0x2c3158u: goto label_2c3158;
        case 0x2c3168u: goto label_2c3168;
        default: break;
    }

    ctx->pc = 0x2c3118u;

    // 0x2c3118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c311c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2c311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2c3120: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c3124: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c312c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c312cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3134: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3134u;
    {
        const bool branch_taken_0x2c3134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3134u;
        // 0x2c3138: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3134) {
            ctx->pc = 0x2C3144u;
            goto label_2c3144;
        }
    }
    ctx->pc = 0x2C313Cu;
    // 0x2c313c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C313Cu;
    {
        const bool branch_taken_0x2c313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C313Cu;
        // 0x2c3140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c313c) {
            ctx->pc = 0x2C3178u;
            goto label_2c3178;
        }
    }
    ctx->pc = 0x2C3144u;
label_2c3144:
    // 0x2c3144: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C3144u;
    SET_GPR_U32(ctx, 31, 0x2C314Cu);
    ctx->pc = 0x2C3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3144u;
    // 0x2c3148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C3144u, 0x2C314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C314Cu;
label_2c314c:
    // 0x2c314c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C314Cu;
    {
        const bool branch_taken_0x2c314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C314Cu;
        // 0x2c3150: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c314c) {
            ctx->pc = 0x2C3160u;
            goto label_2c3160;
        }
    }
    ctx->pc = 0x2C3154u;
    // 0x2c3154: 0x0  nop
    ctx->pc = 0x2c3154u;
    // NOP
label_2c3158:
    // 0x2c3158: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3158u;
    {
        const bool branch_taken_0x2c3158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3158u;
        // 0x2c315c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3158) {
            ctx->pc = 0x2C3178u;
            goto label_2c3178;
        }
    }
    ctx->pc = 0x2C3160u;
label_2c3160:
    // 0x2c3160: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C3160u;
    SET_GPR_U32(ctx, 31, 0x2C3168u);
    ctx->pc = 0x2C3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3160u;
    // 0x2c3164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C3160u, 0x2C3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3168u;
label_2c3168:
    // 0x2c3168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c316c: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C316Cu;
    {
        const bool branch_taken_0x2c316c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c316c) {
            ctx->pc = 0x2C3170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C316Cu;
            // 0x2c3170: 0x94a20036  lhu         $v0, 0x36($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3158;
        }
    }
    ctx->pc = 0x2C3174u;
    // 0x2c3174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3178:
    // 0x2c3178: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c3178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c317c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c317cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3184: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3184u;
        // 0x2c3188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C318Cu;
    // 0x2c318c: 0x0  nop
    ctx->pc = 0x2c318cu;
    // NOP
    ctx->pc = 0x2c3190u;
}
