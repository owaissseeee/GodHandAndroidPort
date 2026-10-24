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

// Function: cSaveLoad_openLoad
// Address: 0x2bf268 - 0x2bf2d0
void cSaveLoad_openLoad_0x2bf268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSaveLoad_openLoad_0x2bf268");
#endif

    switch (ctx->pc) {
        case 0x2bf27cu: goto label_2bf27c;
        case 0x2bf28cu: goto label_2bf28c;
        default: break;
    }

    ctx->pc = 0x2bf268u;

    // 0x2bf268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf26c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf274: 0xc0afdc0  jal         func_2BF700
    ctx->pc = 0x2BF274u;
    SET_GPR_U32(ctx, 31, 0x2BF27Cu);
    ctx->pc = 0x2BF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF274u;
    // 0x2bf278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF700u, 0x2BF274u, 0x2BF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF27Cu;
label_2bf27c:
    // 0x2bf27c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BF27Cu;
    {
        const bool branch_taken_0x2bf27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF27Cu;
        // 0x2bf280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf27c) {
            ctx->pc = 0x2BF2BCu;
            goto label_2bf2bc;
        }
    }
    ctx->pc = 0x2BF284u;
    // 0x2bf284: 0xc0afc5c  jal         func_2BF170
    ctx->pc = 0x2BF284u;
    SET_GPR_U32(ctx, 31, 0x2BF28Cu);
    ctx->pc = 0x2BF288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF284u;
    // 0x2bf288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF170u, 0x2BF284u, 0x2BF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF28Cu;
label_2bf28c:
    // 0x2bf28c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2bf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2bf290: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf294: 0x24847a84  addiu       $a0, $a0, 0x7A84
    ctx->pc = 0x2bf294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31364));
    // 0x2bf298: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2bf298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bf29c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x2bf2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf2a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bf2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bf2a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2bf2a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A88u, _value); } while (0);
    // 0x2bf2ac: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x2bf2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bf2b0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2bf2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf2b4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2bf2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf2b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2bf2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_2bf2bc:
    // 0x2bf2bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C4u;
        // 0x2bf2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF2CCu;
    // 0x2bf2cc: 0x0  nop
    ctx->pc = 0x2bf2ccu;
    // NOP
    ctx->pc = 0x2bf2d0u;
}
