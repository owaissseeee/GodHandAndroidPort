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

// Function: func_0013E260
// Address: 0x13e260 - 0x13e2f8
void func_0013E260_0x13e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E260_0x13e260");
#endif

    switch (ctx->pc) {
        case 0x13e298u: goto label_13e298;
        case 0x13e2b0u: goto label_13e2b0;
        default: break;
    }

    ctx->pc = 0x13e260u;

    // 0x13e260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13e264: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13e268: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13e26c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13e274: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e278: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x13e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x13e27c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x13e27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e280: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x13e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x13e284: 0x2654033c  addiu       $s4, $s2, 0x33C
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 828));
    // 0x13e288: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13e28c: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13e290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e294: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_13e298:
    // 0x13e298: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e29c: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E29Cu;
    {
        const bool branch_taken_0x13e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x13E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E29Cu;
        // 0x13e2a0: 0x2352018  mult        $a0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e29c) {
            ctx->pc = 0x13E2C0u;
            goto label_13e2c0;
        }
    }
    ctx->pc = 0x13E2A4u;
    // 0x13e2a4: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x13e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x13e2a8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13E2A8u;
    SET_GPR_U32(ctx, 31, 0x13E2B0u);
    ctx->pc = 0x13E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E2A8u;
    // 0x13e2ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13E2A8u, 0x13E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2B0u;
label_13e2b0:
    // 0x13e2b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x13e2b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e2b4: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x13e2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x13e2b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E2B8u;
    {
        const bool branch_taken_0x13e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2b8) {
            ctx->pc = 0x13E2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E2B8u;
            // 0x13e2bc: 0xa2130000  sb          $s3, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E2C0u;
            goto label_13e2c0;
        }
    }
    ctx->pc = 0x13E2C0u;
label_13e2c0:
    // 0x13e2c0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13e2c4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x13e2c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e2c8: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x13e2c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e2cc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x13E2CCu;
    {
        const bool branch_taken_0x13e2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2CCu;
        // 0x13e2d0: 0x2918021  addu        $s0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2cc) {
            ctx->pc = 0x13E298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e298;
        }
    }
    ctx->pc = 0x13E2D4u;
    // 0x13e2d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13e2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e2d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13e2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e2dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13e2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13e2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e2e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x13e2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e2e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x13e2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2F0u;
        // 0x13e2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E2F8u;
}
