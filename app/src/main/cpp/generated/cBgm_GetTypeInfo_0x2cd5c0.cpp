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

// Function: cBgm_GetTypeInfo
// Address: 0x2cd5c0 - 0x2cd638
void cBgm_GetTypeInfo_0x2cd5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgm_GetTypeInfo_0x2cd5c0");
#endif

    switch (ctx->pc) {
        case 0x2cd5e4u: goto label_2cd5e4;
        case 0x2cd5fcu: goto label_2cd5fc;
        default: break;
    }

    ctx->pc = 0x2cd5c0u;

    // 0x2cd5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd5c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2cd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2cd5c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd5cc: 0x8c626398  lw          $v0, 0x6398($v1)
    ctx->pc = 0x2cd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786398u));
    // 0x2cd5d0: 0x24706398  addiu       $s0, $v1, 0x6398
    ctx->pc = 0x2cd5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25496));
    // 0x2cd5d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD5D4u;
    {
        const bool branch_taken_0x2cd5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5D4u;
        // 0x2cd5d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5d4) {
            ctx->pc = 0x2CD5FCu;
            goto label_2cd5fc;
        }
    }
    ctx->pc = 0x2CD5DCu;
    // 0x2cd5dc: 0xc0eebfe  jal         func_3BAFF8
    ctx->pc = 0x2CD5DCu;
    SET_GPR_U32(ctx, 31, 0x2CD5E4u);
    ctx->pc = 0x3BAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAFF8u, 0x2CD5DCu, 0x2CD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5E4u;
label_2cd5e4:
    // 0x2cd5e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cd5e8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2cd5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2cd5ec: 0x24a5cf00  addiu       $a1, $a1, -0x3100
    ctx->pc = 0x2cd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954752));
    // 0x2cd5f0: 0x24c60d70  addiu       $a2, $a2, 0xD70
    ctx->pc = 0x2cd5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3440));
    // 0x2cd5f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2CD5F4u;
    SET_GPR_U32(ctx, 31, 0x2CD5FCu);
    ctx->pc = 0x2CD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5F4u;
    // 0x2cd5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2CD5F4u, 0x2CD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5FCu;
label_2cd5fc:
    // 0x2cd5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd608: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD608u;
        // 0x2cd60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD610u;
    // 0x2cd610: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cd614: 0x0  nop
    ctx->pc = 0x2cd614u;
    // NOP
    // 0x2cd618: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cd618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cd61c: 0x0  nop
    ctx->pc = 0x2cd61cu;
    // NOP
    // 0x2cd620: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2cd620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x2cd624: 0x0  nop
    ctx->pc = 0x2cd624u;
    // NOP
    // 0x2cd628: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2cd628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2cd62c: 0x0  nop
    ctx->pc = 0x2cd62cu;
    // NOP
    // 0x2cd630: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x2cd630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2cd634: 0x0  nop
    ctx->pc = 0x2cd634u;
    // NOP
    ctx->pc = 0x2cd638u;
}
