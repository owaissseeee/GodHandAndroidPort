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

// Function: func_002B8990
// Address: 0x2b8990 - 0x2b8a30
void func_002B8990_0x2b8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8990_0x2b8990");
#endif

    switch (ctx->pc) {
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b89f8u: goto label_2b89f8;
        case 0x2b8a00u: goto label_2b8a00;
        default: break;
    }

    ctx->pc = 0x2b8990u;

    // 0x2b8990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b8994: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b8998: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b899c: 0x2442baf8  addiu       $v0, $v0, -0x4508
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949624));
    // 0x2b89a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b89a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b89a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b89ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b89acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b89b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b89b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b89b4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2b89b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b89b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b89bc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2b89bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b89c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b89c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b89c4: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x2b89c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2b89c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b89cc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2b89ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2b89d4: 0xa220000d  sb          $zero, 0xD($s1)
    ctx->pc = 0x2b89d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 0));
label_2b89d8:
    // 0x2b89d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89dc: 0xc0aeb22  jal         func_2BAC88
    ctx->pc = 0x2B89DCu;
    SET_GPR_U32(ctx, 31, 0x2B89E4u);
    ctx->pc = 0x2B89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89DCu;
    // 0x2b89e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC88u, 0x2B89DCu, 0x2B89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89E4u;
label_2b89e4:
    // 0x2b89e4: 0x0  nop
    ctx->pc = 0x2b89e4u;
    // NOP
    // 0x2b89e8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B89E8u;
    {
        const bool branch_taken_0x2b89e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89E8u;
        // 0x2b89ec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89e8) {
            ctx->pc = 0x2B89D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b89d8;
        }
    }
    ctx->pc = 0x2B89F0u;
    // 0x2b89f0: 0xc0aec10  jal         func_2BB040
    ctx->pc = 0x2B89F0u;
    SET_GPR_U32(ctx, 31, 0x2B89F8u);
    ctx->pc = 0x2B89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89F0u;
    // 0x2b89f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB040u, 0x2B89F0u, 0x2B89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89F8u;
label_2b89f8:
    // 0x2b89f8: 0xc0aec10  jal         func_2BB040
    ctx->pc = 0x2B89F8u;
    SET_GPR_U32(ctx, 31, 0x2B8A00u);
    ctx->pc = 0x2B89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89F8u;
    // 0x2b89fc: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB040u, 0x2B89F8u, 0x2B8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A00u;
label_2b8a00:
    // 0x2b8a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8a04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b8a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8a0c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2b8a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2b8a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b8a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8a14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b8a18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b8a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8a1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b8a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b8a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A28u;
        // 0x2b8a2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A30u;
}
