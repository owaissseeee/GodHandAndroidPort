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

// Function: SetBlendField348_1DDBB8
// Address: 0x1ddbb8 - 0x1ddc60
void SetBlendField348_1DDBB8_0x1ddbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField348_1DDBB8_0x1ddbb8");
#endif

    switch (ctx->pc) {
        case 0x1ddc40u: goto label_1ddc40;
        case 0x1ddc50u: goto label_1ddc50;
        default: break;
    }

    ctx->pc = 0x1ddbb8u;

    // 0x1ddbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddbbc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ddbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbc0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDBC0u;
    {
        const bool branch_taken_0x1ddbc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBC0u;
        // 0x1ddbc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbc0) {
            ctx->pc = 0x1DDC48u;
            goto label_1ddc48;
        }
    }
    ctx->pc = 0x1DDBC8u;
    // 0x1ddbc8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ddbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ddbcc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ddbd0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ddbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ddbd4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ddbd8: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1ddbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ddbdc: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1ddbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1ddbe0: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1ddbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1ddbe4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ddbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ddbe8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddbec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ddbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ddbf0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddbf4: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1ddbf8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ddbfc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ddbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ddc00: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1ddc04: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ddc08: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ddc08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ddc0c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddc10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ddc14: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1ddc18: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ddc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1ddc1c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddc20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddc24: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddc28: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddc2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddc30: 0x24e40348  addiu       $a0, $a3, 0x348
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 840));
    // 0x1ddc34: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddc34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddc38: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DDC38u;
    SET_GPR_U32(ctx, 31, 0x1DDC40u);
    ctx->pc = 0x1DDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC38u;
    // 0x1ddc3c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DDC38u, 0x1DDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC40u;
label_1ddc40:
    // 0x1ddc40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDC40u;
    {
        const bool branch_taken_0x1ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC40u;
        // 0x1ddc44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc40) {
            ctx->pc = 0x1DDC54u;
            goto label_1ddc54;
        }
    }
    ctx->pc = 0x1DDC48u;
label_1ddc48:
    // 0x1ddc48: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DDC48u;
    SET_GPR_U32(ctx, 31, 0x1DDC50u);
    ctx->pc = 0x1DDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC48u;
    // 0x1ddc4c: 0x24e40348  addiu       $a0, $a3, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DDC48u, 0x1DDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC50u;
label_1ddc50:
    // 0x1ddc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddc54:
    // 0x1ddc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC54u;
        // 0x1ddc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC5Cu;
    // 0x1ddc5c: 0x0  nop
    ctx->pc = 0x1ddc5cu;
    // NOP
    ctx->pc = 0x1ddc60u;
}
