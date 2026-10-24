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

// Function: func_00375050
// Address: 0x375050 - 0x3750e0
void func_00375050_0x375050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375050_0x375050");
#endif

    switch (ctx->pc) {
        case 0x375070u: goto label_375070;
        default: break;
    }

    ctx->pc = 0x375050u;

    // 0x375050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375054: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x375054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x375058: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x375058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x375060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375068: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x375068u;
    SET_GPR_U32(ctx, 31, 0x375070u);
    ctx->pc = 0x37506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375068u;
    // 0x37506c: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x375068u, 0x375070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375070u;
label_375070:
    // 0x375070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375074: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x375074u;
    {
        const bool branch_taken_0x375074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375074u;
        // 0x375078: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375074) {
            ctx->pc = 0x3750C4u;
            goto label_3750c4;
        }
    }
    ctx->pc = 0x37507Cu;
    // 0x37507c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375080: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x375080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375084: 0xa0a2000c  sb          $v0, 0xC($a1)
    ctx->pc = 0x375084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x375088: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x375088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x37508c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37508cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375090: 0xa0a3000d  sb          $v1, 0xD($a1)
    ctx->pc = 0x375090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x375094: 0xa4b10010  sh          $s1, 0x10($a1)
    ctx->pc = 0x375094u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x375098: 0xa4a40012  sh          $a0, 0x12($a1)
    ctx->pc = 0x375098u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x37509c: 0xa4a0001e  sh          $zero, 0x1E($a1)
    ctx->pc = 0x37509cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750a0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3750a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3750a4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3750a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3750a8: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x3750a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750ac: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x3750acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750b0: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x3750b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750b4: 0xa4a00018  sh          $zero, 0x18($a1)
    ctx->pc = 0x3750b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750b8: 0xa4a0001a  sh          $zero, 0x1A($a1)
    ctx->pc = 0x3750b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x3750bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3750BCu;
    {
        const bool branch_taken_0x3750bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3750C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750BCu;
        // 0x3750c0: 0xa4a0001c  sh          $zero, 0x1C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3750bc) {
            ctx->pc = 0x3750C8u;
            goto label_3750c8;
        }
    }
    ctx->pc = 0x3750C4u;
label_3750c4:
    // 0x3750c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3750c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3750c8:
    // 0x3750c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3750c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3750cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3750ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3750d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3750d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3750d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3750D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3750D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750D4u;
        // 0x3750d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3750D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3750DCu;
    // 0x3750dc: 0x0  nop
    ctx->pc = 0x3750dcu;
    // NOP
    ctx->pc = 0x3750e0u;
}
