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

// Function: func_00160E78
// Address: 0x160e78 - 0x160f38
void func_00160E78_0x160e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00160E78_0x160e78");
#endif

    switch (ctx->pc) {
        case 0x160ee4u: goto label_160ee4;
        default: break;
    }

    ctx->pc = 0x160e78u;

    // 0x160e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160e7c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x160e80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160e84: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x160e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160e8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x160e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x160e90: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x160e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x160e94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160E94u;
    {
        const bool branch_taken_0x160e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E94u;
        // 0x160e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e94) {
            ctx->pc = 0x160EB4u;
            goto label_160eb4;
        }
    }
    ctx->pc = 0x160E9Cu;
    // 0x160e9c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x160e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160ea0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160EA0u;
    {
        const bool branch_taken_0x160ea0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x160EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EA0u;
        // 0x160ea4: 0x211ba  dsrl        $v0, $v0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ea0) {
            ctx->pc = 0x160EB4u;
            goto label_160eb4;
        }
    }
    ctx->pc = 0x160EA8u;
    // 0x160ea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160eac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160EACu;
    {
        const bool branch_taken_0x160eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160eac) {
            ctx->pc = 0x160EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160EACu;
            // 0x160eb0: 0x86030052  lh          $v1, 0x52($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160EBCu;
            goto label_160ebc;
        }
    }
    ctx->pc = 0x160EB4u;
label_160eb4:
    // 0x160eb4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x160EB4u;
    {
        const bool branch_taken_0x160eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EB4u;
        // 0x160eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160eb4) {
            ctx->pc = 0x160F24u;
            goto label_160f24;
        }
    }
    ctx->pc = 0x160EBCu;
label_160ebc:
    // 0x160ebc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160EBCu;
    {
        const bool branch_taken_0x160ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ebc) {
            ctx->pc = 0x160ED4u;
            goto label_160ed4;
        }
    }
    ctx->pc = 0x160EC4u;
    // 0x160ec4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160EC4u;
    {
        const bool branch_taken_0x160ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EC4u;
        // 0x160ec8: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ec4) {
            ctx->pc = 0x160EF0u;
            goto label_160ef0;
        }
    }
    ctx->pc = 0x160ECCu;
    // 0x160ecc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x160ECCu;
    {
        const bool branch_taken_0x160ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ECCu;
        // 0x160ed0: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ecc) {
            ctx->pc = 0x160F10u;
            goto label_160f10;
        }
    }
    ctx->pc = 0x160ED4u;
label_160ed4:
    // 0x160ed4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x160ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160edc: 0xc0afc68  jal         func_2BF1A0
    ctx->pc = 0x160EDCu;
    SET_GPR_U32(ctx, 31, 0x160EE4u);
    ctx->pc = 0x160EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EDCu;
    // 0x160ee0: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF1A0u, 0x160EDCu, 0x160EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EE4u;
label_160ee4:
    // 0x160ee4: 0x96030052  lhu         $v1, 0x52($s0)
    ctx->pc = 0x160ee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x160ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160eec: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x160eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
label_160ef0:
    // 0x160ef0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x160ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x160ef4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x160ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x160ef8: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x160efc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160f00: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F00u;
        // 0x160f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F24u;
            goto label_160f24;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x160f0c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_160f10:
    // 0x160f10: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x160f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31268)));
    // 0x160f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160f1c: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x160f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 3));
    // 0x160f20: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x160f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
label_160f24:
    // 0x160f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x160F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F2Cu;
        // 0x160f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160F34u;
    // 0x160f34: 0x0  nop
    ctx->pc = 0x160f34u;
    // NOP
    ctx->pc = 0x160f38u;
}
