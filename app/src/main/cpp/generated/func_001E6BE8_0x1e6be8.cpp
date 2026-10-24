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

// Function: func_001E6BE8
// Address: 0x1e6be8 - 0x1e6c80
void func_001E6BE8_0x1e6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6BE8_0x1e6be8");
#endif

    switch (ctx->pc) {
        case 0x1e6c40u: goto label_1e6c40;
        case 0x1e6c4cu: goto label_1e6c4c;
        case 0x1e6c60u: goto label_1e6c60;
        case 0x1e6c6cu: goto label_1e6c6c;
        default: break;
    }

    ctx->pc = 0x1e6be8u;

    // 0x1e6be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6bec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bf8: 0x960303e0  lhu         $v1, 0x3E0($s0)
    ctx->pc = 0x1e6bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 992)));
    // 0x1e6bfc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e6bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e6c00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6C00u;
    {
        const bool branch_taken_0x1e6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C00u;
        // 0x1e6c04: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c00) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C08u;
    // 0x1e6c08: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e6c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e6c0c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e6c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e6c10: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E6C10u;
    {
        const bool branch_taken_0x1e6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C10u;
        // 0x1e6c14: 0xa60303e0  sh          $v1, 0x3E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c10) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C18u;
    // 0x1e6c18: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e6c18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e6c1c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6c20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6c24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6c28: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e6c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6c2c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6C2Cu;
    {
        const bool branch_taken_0x1e6c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C2Cu;
        // 0x1e6c30: 0xa60203e0  sh          $v0, 0x3E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c2c) {
            ctx->pc = 0x1E6C54u;
            goto label_1e6c54;
        }
    }
    ctx->pc = 0x1E6C34u;
    // 0x1e6c34: 0x8e0403c8  lw          $a0, 0x3C8($s0)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x1e6c38: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6C38u;
    SET_GPR_U32(ctx, 31, 0x1E6C40u);
    ctx->pc = 0x1E6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C38u;
    // 0x1e6c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6C38u, 0x1E6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C40u;
label_1e6c40:
    // 0x1e6c40: 0x8e0403cc  lw          $a0, 0x3CC($s0)
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x1e6c44: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6C44u;
    SET_GPR_U32(ctx, 31, 0x1E6C4Cu);
    ctx->pc = 0x1E6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C44u;
    // 0x1e6c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6C44u, 0x1E6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C4Cu;
label_1e6c4c:
    // 0x1e6c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C4Cu;
    {
        const bool branch_taken_0x1e6c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C4Cu;
        // 0x1e6c50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c4c) {
            ctx->pc = 0x1E6C70u;
            goto label_1e6c70;
        }
    }
    ctx->pc = 0x1E6C54u;
label_1e6c54:
    // 0x1e6c54: 0x8e0403c8  lw          $a0, 0x3C8($s0)
    ctx->pc = 0x1e6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x1e6c58: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6C58u;
    SET_GPR_U32(ctx, 31, 0x1E6C60u);
    ctx->pc = 0x1E6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C58u;
    // 0x1e6c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6C58u, 0x1E6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C60u;
label_1e6c60:
    // 0x1e6c60: 0x8e0403cc  lw          $a0, 0x3CC($s0)
    ctx->pc = 0x1e6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x1e6c64: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6C64u;
    SET_GPR_U32(ctx, 31, 0x1E6C6Cu);
    ctx->pc = 0x1E6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C64u;
    // 0x1e6c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6C64u, 0x1E6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6c70:
    // 0x1e6c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C74u;
        // 0x1e6c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6C7Cu;
    // 0x1e6c7c: 0x0  nop
    ctx->pc = 0x1e6c7cu;
    // NOP
    ctx->pc = 0x1e6c80u;
}
