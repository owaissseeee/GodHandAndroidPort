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

// Function: func_002EFAB8
// Address: 0x2efab8 - 0x2efb40
void func_002EFAB8_0x2efab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFAB8_0x2efab8");
#endif

    switch (ctx->pc) {
        case 0x2efaf8u: goto label_2efaf8;
        case 0x2efb10u: goto label_2efb10;
        case 0x2efb24u: goto label_2efb24;
        default: break;
    }

    ctx->pc = 0x2efab8u;

    // 0x2efab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2efab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2efabc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x2efabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x2efac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2efac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2efac4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2efac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2efac8: 0x24516458  addiu       $s1, $v0, 0x6458
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25688));
    // 0x2efacc: 0x8c436458  lw          $v1, 0x6458($v0)
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x786458u));
    // 0x2efad0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2efad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efad4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2efad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2efad8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EFAD8u;
    {
        const bool branch_taken_0x2efad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAD8u;
        // 0x2efadc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efad8) {
            ctx->pc = 0x2EFB24u;
            goto label_2efb24;
        }
    }
    ctx->pc = 0x2EFAE0u;
    // 0x2efae0: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2efae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2efae4: 0x8c6263f8  lw          $v0, 0x63F8($v1)
    ctx->pc = 0x2efae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7863F8u));
    // 0x2efae8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFAE8u;
    {
        const bool branch_taken_0x2efae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAE8u;
        // 0x2efaec: 0x247063f8  addiu       $s0, $v1, 0x63F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efae8) {
            ctx->pc = 0x2EFB10u;
            goto label_2efb10;
        }
    }
    ctx->pc = 0x2EFAF0u;
    // 0x2efaf0: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2EFAF0u;
    SET_GPR_U32(ctx, 31, 0x2EFAF8u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2EFAF0u, 0x2EFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAF8u;
label_2efaf8:
    // 0x2efaf8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2efaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2efafc: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2efafcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2efb00: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x2efb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
    // 0x2efb04: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2efb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2efb08: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2EFB08u;
    SET_GPR_U32(ctx, 31, 0x2EFB10u);
    ctx->pc = 0x2EFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB08u;
    // 0x2efb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2EFB08u, 0x2EFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB10u;
label_2efb10:
    // 0x2efb10: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2efb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2efb14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb18: 0x24a5ea08  addiu       $a1, $a1, -0x15F8
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961672));
    // 0x2efb1c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2EFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB24u);
    ctx->pc = 0x2EFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB1Cu;
    // 0x2efb20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2EFB1Cu, 0x2EFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB24u;
label_2efb24:
    // 0x2efb24: 0x26426458  addiu       $v0, $s2, 0x6458
    ctx->pc = 0x2efb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25688));
    // 0x2efb28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2efb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efb2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2efb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efb30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2efb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efb34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efb38: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB38u;
        // 0x2efb3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFB40u;
}
