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

// Function: cDamageManage_CreateDamageTake
// Address: 0x1fe218 - 0x1fe278
void cDamageManage_CreateDamageTake_0x1fe218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageManage_CreateDamageTake_0x1fe218");
#endif

    switch (ctx->pc) {
        case 0x1fe238u: goto label_1fe238;
        case 0x1fe250u: goto label_1fe250;
        default: break;
    }

    ctx->pc = 0x1fe218u;

    // 0x1fe218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe21c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe224: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe230: 0xc07f8c4  jal         func_1FE310
    ctx->pc = 0x1FE230u;
    SET_GPR_U32(ctx, 31, 0x1FE238u);
    ctx->pc = 0x1FE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE230u;
    // 0x1fe234: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE310u, 0x1FE230u, 0x1FE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE238u;
label_1fe238:
    // 0x1fe238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe23c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE23Cu;
    {
        const bool branch_taken_0x1fe23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE23Cu;
        // 0x1fe240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe23c) {
            ctx->pc = 0x1FE25Cu;
            goto label_1fe25c;
        }
    }
    ctx->pc = 0x1FE244u;
    // 0x1fe244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe248: 0xc07f54c  jal         func_1FD530
    ctx->pc = 0x1FE248u;
    SET_GPR_U32(ctx, 31, 0x1FE250u);
    ctx->pc = 0x1FE24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE248u;
    // 0x1fe24c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD530u, 0x1FE248u, 0x1FE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE250u;
label_1fe250:
    // 0x1fe250: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1fe250u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1fe254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE254u;
    {
        const bool branch_taken_0x1fe254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE254u;
        // 0x1fe258: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe254) {
            ctx->pc = 0x1FE260u;
            goto label_1fe260;
        }
    }
    ctx->pc = 0x1FE25Cu;
label_1fe25c:
    // 0x1fe25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe260:
    // 0x1fe260: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe264: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe268: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe270: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE270u;
        // 0x1fe274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE278u;
}
