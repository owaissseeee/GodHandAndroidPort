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

// Function: isNeedDevName
// Address: 0x330ec0 - 0x330f10
void isNeedDevName_0x330ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isNeedDevName_0x330ec0");
#endif

    switch (ctx->pc) {
        case 0x330ec0u: goto label_330ec0;
        case 0x330ec4u: goto label_330ec4;
        case 0x330ec8u: goto label_330ec8;
        case 0x330eccu: goto label_330ecc;
        case 0x330ed0u: goto label_330ed0;
        case 0x330ed4u: goto label_330ed4;
        case 0x330ed8u: goto label_330ed8;
        case 0x330edcu: goto label_330edc;
        case 0x330ee0u: goto label_330ee0;
        case 0x330ee4u: goto label_330ee4;
        case 0x330ee8u: goto label_330ee8;
        case 0x330eecu: goto label_330eec;
        case 0x330ef0u: goto label_330ef0;
        case 0x330ef4u: goto label_330ef4;
        case 0x330ef8u: goto label_330ef8;
        case 0x330efcu: goto label_330efc;
        case 0x330f00u: goto label_330f00;
        case 0x330f04u: goto label_330f04;
        case 0x330f08u: goto label_330f08;
        case 0x330f0cu: goto label_330f0c;
        default: break;
    }

    ctx->pc = 0x330ec0u;

label_330ec0:
    // 0x330ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330ec4:
    // 0x330ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_330ec8:
    // 0x330ec8: 0xc0cc120  jal         func_330480
label_330ecc:
    if (ctx->pc == 0x330ECCu) {
        ctx->pc = 0x330ED0u;
        goto label_330ed0;
    }
    ctx->pc = 0x330EC8u;
    SET_GPR_U32(ctx, 31, 0x330ED0u);
    ctx->pc = 0x330480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330480u, 0x330EC8u, 0x330ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330ED0u;
label_330ed0:
    // 0x330ed0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x330ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330ed4:
    // 0x330ed4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_330ed8:
    if (ctx->pc == 0x330ED8u) {
        ctx->pc = 0x330ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ED4u;
        // 0x330ed8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330EDCu;
        goto label_330edc;
    }
    ctx->pc = 0x330ED4u;
    {
        const bool branch_taken_0x330ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ED4u;
        // 0x330ed8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ed4) {
            ctx->pc = 0x330F08u;
            goto label_330f08;
        }
    }
    ctx->pc = 0x330EDCu;
label_330edc:
    // 0x330edc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x330edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_330ee0:
    // 0x330ee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_330ee4:
    if (ctx->pc == 0x330EE4u) {
        ctx->pc = 0x330EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EE0u;
        // 0x330ee4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330EE8u;
        goto label_330ee8;
    }
    ctx->pc = 0x330EE0u;
    {
        const bool branch_taken_0x330ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EE0u;
        // 0x330ee4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ee0) {
            ctx->pc = 0x330F00u;
            goto label_330f00;
        }
    }
    ctx->pc = 0x330EE8u;
label_330ee8:
    // 0x330ee8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x330ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_330eec:
    // 0x330eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330ef0:
    // 0x330ef0: 0x40f809  jalr        $v0
label_330ef4:
    if (ctx->pc == 0x330EF4u) {
        ctx->pc = 0x330EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EF0u;
        // 0x330ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330EF8u;
        goto label_330ef8;
    }
    ctx->pc = 0x330EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330EF8u);
        ctx->pc = 0x330EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EF0u;
        // 0x330ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330EF0u, 0x330EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330EF8u;
label_330ef8:
    // 0x330ef8: 0x10000003  b           . + 4 + (0x3 << 2)
label_330efc:
    if (ctx->pc == 0x330EFCu) {
        ctx->pc = 0x330EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EF8u;
        // 0x330efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330F00u;
        goto label_330f00;
    }
    ctx->pc = 0x330EF8u;
    {
        const bool branch_taken_0x330ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EF8u;
        // 0x330efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ef8) {
            ctx->pc = 0x330F08u;
            goto label_330f08;
        }
    }
    ctx->pc = 0x330F00u;
label_330f00:
    // 0x330f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330f04:
    // 0x330f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330f08:
    // 0x330f08: 0x3e00008  jr          $ra
label_330f0c:
    if (ctx->pc == 0x330F0Cu) {
        ctx->pc = 0x330F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F08u;
        // 0x330f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330F10u;
        goto label_fallthrough_0x330f08;
    }
    ctx->pc = 0x330F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F08u;
        // 0x330f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330f08:
    ctx->pc = 0x330F10u;
}
