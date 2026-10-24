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

// Function: cScenario_setMess
// Address: 0x2c42e0 - 0x2c4350
void cScenario_setMess_0x2c42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_setMess_0x2c42e0");
#endif

    switch (ctx->pc) {
        case 0x2c4310u: goto label_2c4310;
        case 0x2c432cu: goto label_2c432c;
        default: break;
    }

    ctx->pc = 0x2c42e0u;

    // 0x2c42e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c42e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c42e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c42e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c42ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c42ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c42f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c42f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c42f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c42f8: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x2c42f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c42fc: 0x96020112  lhu         $v0, 0x112($s0)
    ctx->pc = 0x2c42fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x2c4300: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4300u;
    {
        const bool branch_taken_0x2c4300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4300u;
        // 0x2c4304: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4300) {
            ctx->pc = 0x2C4310u;
            goto label_2c4310;
        }
    }
    ctx->pc = 0x2C4308u;
    // 0x2c4308: 0xc0b10e4  jal         func_2C4390
    ctx->pc = 0x2C4308u;
    SET_GPR_U32(ctx, 31, 0x2C4310u);
    ctx->pc = 0x2C4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4390u, 0x2C4308u, 0x2C4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4310u;
label_2c4310:
    // 0x2c4310: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4318: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2c431c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c431cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4324: 0xc0abada  jal         func_2AEB68
    ctx->pc = 0x2C4324u;
    SET_GPR_U32(ctx, 31, 0x2C432Cu);
    ctx->pc = 0x2C4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4324u;
    // 0x2c4328: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB68u, 0x2C4324u, 0x2C432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C432Cu;
label_2c432c:
    // 0x2c432c: 0x54520001  bnel        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C432Cu;
    {
        const bool branch_taken_0x2c432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c432c) {
            ctx->pc = 0x2C4330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C432Cu;
            // 0x2c4330: 0xa6110112  sh          $s1, 0x112($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4334u;
            goto label_2c4334;
        }
    }
    ctx->pc = 0x2C4334u;
label_2c4334:
    // 0x2c4334: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c433c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c433cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4344: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4344u;
        // 0x2c4348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C434Cu;
    // 0x2c434c: 0x0  nop
    ctx->pc = 0x2c434cu;
    // NOP
    ctx->pc = 0x2c4350u;
}
