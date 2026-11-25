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

// Function: func_00161B60
// Address: 0x161b60 - 0x161bb0
void func_00161B60_0x161b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161B60_0x161b60");
#endif

    if (__builtin_expect(ctx->pc != 0x161b60u, 0)) {
        switch (ctx->pc) {
            case 0x161b84u: goto label_161b84;
            case 0x161b9cu: goto label_161b9c;
            default: break;
        }
    }


    // 0x161b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161b64: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x161b68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161b6c: 0x8c6256f8  lw          $v0, 0x56F8($v1)
    ctx->pc = 0x161b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7856F8u));
    // 0x161b70: 0x247056f8  addiu       $s0, $v1, 0x56F8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22264));
    // 0x161b74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161B74u;
    {
        const bool branch_taken_0x161b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B74u;
        // 0x161b78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b74) {
            ctx->pc = 0x161B9Cu;
            goto label_161b9c;
        }
    }
    // 0x161b7c: 0xc05858a  jal         func_161628
    ctx->pc = 0x161B7Cu;
    SET_GPR_U32(ctx, 31, 0x161B84u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInit_00460D38_161628_0x161628, 0x161628u, 0x161b84u)) {
        return;
    }
    ctx->pc = 0x161B84u;
label_161b84:
    // 0x161b84: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x161b88: 0x3c060046  lui         $a2, 0x46
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x161b8c: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
    // 0x161b90: 0x24c60d38  addiu       $a2, $a2, 0xD38
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x161b94: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x161B9Cu);
    ctx->pc = 0x161B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B94u;
    // 0x161b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x161b9cu)) {
        return;
    }
    ctx->pc = 0x161B9Cu;
label_161b9c:
    // 0x161b9c: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x161BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BA8u;
        // 0x161bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161BB0u;
}