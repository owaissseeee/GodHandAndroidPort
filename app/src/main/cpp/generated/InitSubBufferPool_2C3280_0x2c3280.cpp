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

// Function: InitSubBufferPool_2C3280
// Address: 0x2c3280 - 0x2c32c0
void InitSubBufferPool_2C3280_0x2c3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSubBufferPool_2C3280_0x2c3280");
#endif

    switch (ctx->pc) {
        case 0x2c32a4u: goto label_2c32a4;
        case 0x2c32acu: goto label_2c32ac;
        default: break;
    }

    ctx->pc = 0x2c3280u;

    // 0x2c3280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3284: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c3284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c328c: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x2c328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x2c3290: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x2c3290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2c3294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c329c: 0xc0b543a  jal         func_2D50E8
    ctx->pc = 0x2C329Cu;
    SET_GPR_U32(ctx, 31, 0x2C32A4u);
    ctx->pc = 0x2C32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C329Cu;
    // 0x2c32a0: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D50E8u, 0x2C329Cu, 0x2C32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32A4u;
label_2c32a4:
    // 0x2c32a4: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x2C32A4u;
    SET_GPR_U32(ctx, 31, 0x2C32ACu);
    ctx->pc = 0x2C32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32A4u;
    // 0x2c32a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D51F0u, 0x2C32A4u, 0x2C32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32ACu;
label_2c32ac:
    // 0x2c32ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c32acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c32b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c32b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c32b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C32B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32B4u;
        // 0x2c32b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C32B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C32BCu;
    // 0x2c32bc: 0x0  nop
    ctx->pc = 0x2c32bcu;
    // NOP
    ctx->pc = 0x2c32c0u;
}
