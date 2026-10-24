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

// Function: func_001ABCA8
// Address: 0x1abca8 - 0x1abd40
void func_001ABCA8_0x1abca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABCA8_0x1abca8");
#endif

    switch (ctx->pc) {
        case 0x1abcccu: goto label_1abccc;
        case 0x1abce4u: goto label_1abce4;
        default: break;
    }

    ctx->pc = 0x1abca8u;

    // 0x1abca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abcac: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1abcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1abcb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1abcb4: 0x8c626008  lw          $v0, 0x6008($v1)
    ctx->pc = 0x1abcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786008u));
    // 0x1abcb8: 0x24706008  addiu       $s0, $v1, 0x6008
    ctx->pc = 0x1abcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24584));
    // 0x1abcbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABCBCu;
    {
        const bool branch_taken_0x1abcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCBCu;
        // 0x1abcc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcbc) {
            ctx->pc = 0x1ABCE4u;
            goto label_1abce4;
        }
    }
    ctx->pc = 0x1ABCC4u;
    // 0x1abcc4: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1ABCC4u;
    SET_GPR_U32(ctx, 31, 0x1ABCCCu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1ABCC4u, 0x1ABCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCCCu;
label_1abccc:
    // 0x1abccc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1abcccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1abcd0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1abcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1abcd4: 0x24a57da0  addiu       $a1, $a1, 0x7DA0
    ctx->pc = 0x1abcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32160));
    // 0x1abcd8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1abcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1abcdc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1ABCDCu;
    SET_GPR_U32(ctx, 31, 0x1ABCE4u);
    ctx->pc = 0x1ABCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCDCu;
    // 0x1abce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1ABCDCu, 0x1ABCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCE4u;
label_1abce4:
    // 0x1abce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abcec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCF0u;
        // 0x1abcf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABCF8u;
    // 0x1abcf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1abcf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abcfc: 0x0  nop
    ctx->pc = 0x1abcfcu;
    // NOP
    // 0x1abd00: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1abd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1abd04: 0x0  nop
    ctx->pc = 0x1abd04u;
    // NOP
    // 0x1abd08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1abd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abd0c: 0x0  nop
    ctx->pc = 0x1abd0cu;
    // NOP
    // 0x1abd10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1abd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd14: 0x0  nop
    ctx->pc = 0x1abd14u;
    // NOP
    // 0x1abd18: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1abd18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abd1c: 0x0  nop
    ctx->pc = 0x1abd1cu;
    // NOP
    // 0x1abd20: 0x0  nop
    ctx->pc = 0x1abd20u;
    // NOP
    // 0x1abd24: 0x0  nop
    ctx->pc = 0x1abd24u;
    // NOP
    // 0x1abd28: 0x0  nop
    ctx->pc = 0x1abd28u;
    // NOP
    // 0x1abd2c: 0x0  nop
    ctx->pc = 0x1abd2cu;
    // NOP
    // 0x1abd30: 0xac8509ec  sw          $a1, 0x9EC($a0)
    ctx->pc = 0x1abd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2540), GPR_U32(ctx, 5));
    // 0x1abd34: 0x0  nop
    ctx->pc = 0x1abd34u;
    // NOP
    // 0x1abd38: 0xac8509f4  sw          $a1, 0x9F4($a0)
    ctx->pc = 0x1abd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2548), GPR_U32(ctx, 5));
    // 0x1abd3c: 0x0  nop
    ctx->pc = 0x1abd3cu;
    // NOP
    ctx->pc = 0x1abd40u;
}
