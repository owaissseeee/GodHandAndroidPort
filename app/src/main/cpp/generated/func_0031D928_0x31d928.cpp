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

// Function: func_0031D928
// Address: 0x31d928 - 0x31d9f0
void func_0031D928_0x31d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D928_0x31d928");
#endif

    switch (ctx->pc) {
        case 0x31d948u: goto label_31d948;
        case 0x31d990u: goto label_31d990;
        default: break;
    }

    ctx->pc = 0x31d928u;

    // 0x31d928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31d92c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31d930: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31d934: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d93c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31d940: 0xc0c75de  jal         func_31D778
    ctx->pc = 0x31D940u;
    SET_GPR_U32(ctx, 31, 0x31D948u);
    ctx->pc = 0x31D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D940u;
    // 0x31d944: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D778u, 0x31D940u, 0x31D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D948u;
label_31d948:
    // 0x31d948: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31d948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d94c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d954: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31D954u;
    {
        const bool branch_taken_0x31d954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D954u;
        // 0x31d958: 0x26020007  addiu       $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d954) {
            ctx->pc = 0x31D9B0u;
            goto label_31d9b0;
        }
    }
    ctx->pc = 0x31D95Cu;
    // 0x31d95c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x31d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x31d960: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x31d960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x31d964: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x31d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x31d968: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d96c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x31d970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31d970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31d974: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31d974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d97c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31d980: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x31d980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x31d984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d988: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D988u;
    {
        const bool branch_taken_0x31d988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D988u;
        // 0x31d98c: 0xb03021  addu        $a2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d988) {
            ctx->pc = 0x31D9ACu;
            goto label_31d9ac;
        }
    }
    ctx->pc = 0x31D990u;
label_31d990:
    // 0x31d990: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x31d990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x31d994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d998: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31d998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d99c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d9a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d9a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D9A4u;
    {
        const bool branch_taken_0x31d9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9A4u;
        // 0x31d9a8: 0xb03021  addu        $a2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9a4) {
            ctx->pc = 0x31D990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d990;
        }
    }
    ctx->pc = 0x31D9ACu;
label_31d9ac:
    // 0x31d9ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x31d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_31d9b0:
    // 0x31d9b0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x31d9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x31D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9BCu;
        // 0x31d9c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D9C4u;
    // 0x31d9c4: 0x0  nop
    ctx->pc = 0x31d9c4u;
    // NOP
    // 0x31d9c8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x31d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x31d9cc: 0x0  nop
    ctx->pc = 0x31d9ccu;
    // NOP
    // 0x31d9d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x31d9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d9d4: 0x0  nop
    ctx->pc = 0x31d9d4u;
    // NOP
    // 0x31d9d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31d9dc: 0x0  nop
    ctx->pc = 0x31d9dcu;
    // NOP
    // 0x31d9e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31d9e4: 0x0  nop
    ctx->pc = 0x31d9e4u;
    // NOP
    // 0x31d9e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31d9ec: 0x0  nop
    ctx->pc = 0x31d9ecu;
    // NOP
    ctx->pc = 0x31d9f0u;
}
