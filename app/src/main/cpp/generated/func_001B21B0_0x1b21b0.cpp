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

// Function: func_001B21B0
// Address: 0x1b21b0 - 0x1b2220
void func_001B21B0_0x1b21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B21B0_0x1b21b0");
#endif

    switch (ctx->pc) {
        case 0x1b21d4u: goto label_1b21d4;
        case 0x1b21ecu: goto label_1b21ec;
        default: break;
    }

    ctx->pc = 0x1b21b0u;

    // 0x1b21b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b21b4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b21b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b21bc: 0x8c626078  lw          $v0, 0x6078($v1)
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786078u));
    // 0x1b21c0: 0x24706078  addiu       $s0, $v1, 0x6078
    ctx->pc = 0x1b21c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24696));
    // 0x1b21c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B21C4u;
    {
        const bool branch_taken_0x1b21c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21C4u;
        // 0x1b21c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21c4) {
            ctx->pc = 0x1B21ECu;
            goto label_1b21ec;
        }
    }
    ctx->pc = 0x1B21CCu;
    // 0x1b21cc: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B21CCu;
    SET_GPR_U32(ctx, 31, 0x1B21D4u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B21CCu, 0x1B21D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21D4u;
label_1b21d4:
    // 0x1b21d4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b21d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b21d8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b21d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b21dc: 0x24a58488  addiu       $a1, $a1, -0x7B78
    ctx->pc = 0x1b21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935688));
    // 0x1b21e0: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b21e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b21e4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B21E4u;
    SET_GPR_U32(ctx, 31, 0x1B21ECu);
    ctx->pc = 0x1B21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21E4u;
    // 0x1b21e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B21E4u, 0x1B21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21ECu;
label_1b21ec:
    // 0x1b21ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b21ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b21f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b21f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b21f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b21f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B21F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21F8u;
        // 0x1b21fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2200u;
    // 0x1b2200: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1b2200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x1b2204: 0x0  nop
    ctx->pc = 0x1b2204u;
    // NOP
    // 0x1b2208: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b220c: 0x0  nop
    ctx->pc = 0x1b220cu;
    // NOP
    // 0x1b2210: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x1b2210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
    // 0x1b2214: 0x0  nop
    ctx->pc = 0x1b2214u;
    // NOP
    // 0x1b2218: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1b2218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b221c: 0x0  nop
    ctx->pc = 0x1b221cu;
    // NOP
    ctx->pc = 0x1b2220u;
}
