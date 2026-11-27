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

// Function: func_0027EE18
// Address: 0x27ee18 - 0x27ee68
void func_0027EE18_0x27ee18(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027EE18_0x27ee18");
#endif

    if (__builtin_expect(ctx->pc != 0x27ee18u, 0)) {
        switch (ctx->pc) {
            case 0x27ee3cu: goto label_27ee3c;
            case 0x27ee54u: goto label_27ee54;
            default: break;
        }
    }


    // 0x27ee18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ee1c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x27ee20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ee24: 0x8c626258  lw          $v0, 0x6258($v1)
    ctx->pc = 0x27ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786258u));
    // 0x27ee28: 0x24706258  addiu       $s0, $v1, 0x6258
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25176));
    // 0x27ee2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27EE2Cu;
    {
        const bool branch_taken_0x27ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE2Cu;
        // 0x27ee30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee2c) {
            ctx->pc = 0x27EE54u;
            goto label_27ee54;
        }
    }
    // 0x27ee34: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x27EE34u;
    SET_GPR_U32(ctx, 31, 0x27EE3Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0028FDD0_0x28fdd0, 0x28fdd0u, 0x27ee3cu)) {
        return;
    }
label_27ee3c:
    // 0x27ee3c: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27ee40: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x27ee44: 0x24a58498  addiu       $a1, $a1, -0x7B68
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935704));
    // 0x27ee48: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x27ee4c: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x27EE54u);
    ctx->pc = 0x27EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE4Cu;
    // 0x27ee50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x27ee54u)) {
        return;
    }
label_27ee54:
    // 0x27ee54: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ee5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE60u;
        // 0x27ee64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE68u;
}