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

// Function: func_0017EC98
// Address: 0x17ec98 - 0x17ed00
void func_0017EC98_0x17ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EC98_0x17ec98");
#endif

    switch (ctx->pc) {
        case 0x17ecacu: goto label_17ecac;
        case 0x17ecc8u: goto label_17ecc8;
        case 0x17ece8u: goto label_17ece8;
        default: break;
    }

    ctx->pc = 0x17ec98u;

    // 0x17ec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ec9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17eca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eca4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17ECA4u;
    SET_GPR_U32(ctx, 31, 0x17ECACu);
    ctx->pc = 0x17ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECA4u;
    // 0x17eca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17ECA4u, 0x17ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECACu;
label_17ecac:
    // 0x17ecac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x17ecb0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x17ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x17ecb4: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x17ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x17ecb8: 0x2405027d  addiu       $a1, $zero, 0x27D
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    // 0x17ecbc: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17ecc0: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x17ECC0u;
    SET_GPR_U32(ctx, 31, 0x17ECC8u);
    ctx->pc = 0x17ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECC0u;
    // 0x17ecc4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x17ECC0u, 0x17ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECC8u;
label_17ecc8:
    // 0x17ecc8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x17eccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17ecccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecd0: 0x2404027d  addiu       $a0, $zero, 0x27D
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    // 0x17ecd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ecd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17ecd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17ecdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ece0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x17ECE0u;
    SET_GPR_U32(ctx, 31, 0x17ECE8u);
    ctx->pc = 0x17ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECE0u;
    // 0x17ece4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x17ECE0u, 0x17ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECE8u;
label_17ece8:
    // 0x17ece8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ece8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ecec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ecf4: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECF4u;
        // 0x17ecf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ECFCu;
    // 0x17ecfc: 0x0  nop
    ctx->pc = 0x17ecfcu;
    // NOP
    ctx->pc = 0x17ed00u;
}
