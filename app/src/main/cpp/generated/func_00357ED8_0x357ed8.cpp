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

// Function: func_00357ED8
// Address: 0x357ed8 - 0x357f58
void func_00357ED8_0x357ed8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357ED8_0x357ed8");
#endif

    if (__builtin_expect(ctx->pc != 0x357ed8u, 0)) {
        switch (ctx->pc) {
            case 0x357eecu: goto label_357eec;
            case 0x357efcu: goto label_357efc;
            case 0x357f0cu: goto label_357f0c;
            case 0x357f1cu: goto label_357f1c;
            default: break;
        }
    }


    // 0x357ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357ee4: 0xc0d5fd6  jal         func_357F58
    SET_GPR_U32(ctx, 31, 0x357EECu);
    ctx->pc = 0x357EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EE4u;
    // 0x357ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00357F58_0x357f58, 0x357f58u, 0x357eecu)) {
        return;
    }
label_357eec:
    // 0x357eec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x357EECu;
    {
        const bool branch_taken_0x357eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EECu;
        // 0x357ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357eec) {
            ctx->pc = 0x357F30u;
            goto label_357f30;
        }
    }
    // 0x357ef4: 0xc0d5ff2  jal         func_357FC8
    ctx->pc = 0x357EF4u;
    SET_GPR_U32(ctx, 31, 0x357EFCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00357FC8_0x357fc8, 0x357fc8u, 0x357efcu)) {
        return;
    }
label_357efc:
    // 0x357efc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x357EFCu;
    {
        const bool branch_taken_0x357efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EFCu;
        // 0x357f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357efc) {
            ctx->pc = 0x357F30u;
            goto label_357f30;
        }
    }
    // 0x357f04: 0xc0d6024  jal         func_358090
    ctx->pc = 0x357F04u;
    SET_GPR_U32(ctx, 31, 0x357F0Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00358090_0x358090, 0x358090u, 0x357f0cu)) {
        return;
    }
label_357f0c:
    // 0x357f0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357F0Cu;
    {
        const bool branch_taken_0x357f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F0Cu;
        // 0x357f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f0c) {
            ctx->pc = 0x357F30u;
            goto label_357f30;
        }
    }
    // 0x357f14: 0xc0d603a  jal         func_3580E8
    ctx->pc = 0x357F14u;
    SET_GPR_U32(ctx, 31, 0x357F1Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003580E8_0x3580e8, 0x3580e8u, 0x357f1cu)) {
        return;
    }
label_357f1c:
    // 0x357f1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357F1Cu;
    {
        const bool branch_taken_0x357f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F1Cu;
        // 0x357f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f1c) {
            ctx->pc = 0x357F34u;
            goto label_357f34;
        }
    }
    // 0x357f24: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x357f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x357f28: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x357F28u;
    {
        const bool branch_taken_0x357f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357f28) {
            ctx->pc = 0x357F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357F28u;
            // 0x357f2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357F48u;
            goto label_357f48;
        }
    }
label_357f30:
    // 0x357f30: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357f34:
    // 0x357f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357f3c: 0x80d6078  j           func_3581E0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F3Cu;
    // 0x357f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3581E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3581E0u, 0x357F3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x357f44: 0x0  nop
    // NOP
label_357f48:
    // 0x357f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x357F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F4Cu;
        // 0x357f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x357f54: 0x0  nop
    // NOP
    ctx->pc = 0x357f58u;
}