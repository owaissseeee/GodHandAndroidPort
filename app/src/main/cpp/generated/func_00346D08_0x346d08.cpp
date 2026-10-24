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

// Function: func_00346D08
// Address: 0x346d08 - 0x346d80
void func_00346D08_0x346d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346D08_0x346d08");
#endif

    switch (ctx->pc) {
        case 0x346d34u: goto label_346d34;
        case 0x346d60u: goto label_346d60;
        default: break;
    }

    ctx->pc = 0x346d08u;

    // 0x346d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346d0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x346d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346d1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346d20: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x346d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x346d24: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x346D24u;
    {
        const bool branch_taken_0x346d24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x346d24) {
            ctx->pc = 0x346D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346D24u;
            // 0x346d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346D58u;
            goto label_346d58;
        }
    }
    ctx->pc = 0x346D2Cu;
    // 0x346d2c: 0xc0d1b88  jal         func_346E20
    ctx->pc = 0x346D2Cu;
    SET_GPR_U32(ctx, 31, 0x346D34u);
    ctx->pc = 0x346D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D2Cu;
    // 0x346d30: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346E20u, 0x346D2Cu, 0x346D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D34u;
label_346d34:
    // 0x346d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x346d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x346d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x346d3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346D3Cu;
    {
        const bool branch_taken_0x346d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x346D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D3Cu;
        // 0x346d40: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d3c) {
            ctx->pc = 0x346D50u;
            goto label_346d50;
        }
    }
    ctx->pc = 0x346D44u;
    // 0x346d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346D44u;
    {
        const bool branch_taken_0x346d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D44u;
        // 0x346d48: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d44) {
            ctx->pc = 0x346D54u;
            goto label_346d54;
        }
    }
    ctx->pc = 0x346D4Cu;
    // 0x346d4c: 0x0  nop
    ctx->pc = 0x346d4cu;
    // NOP
label_346d50:
    // 0x346d50: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x346d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_346d54:
    // 0x346d54: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x346d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_346d58:
    // 0x346d58: 0xc0d1b12  jal         func_346C48
    ctx->pc = 0x346D58u;
    SET_GPR_U32(ctx, 31, 0x346D60u);
    ctx->pc = 0x346D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D58u;
    // 0x346d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C48u, 0x346D58u, 0x346D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D60u;
label_346d60:
    // 0x346d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346d68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346d74: 0x80d7f16  j           func_35FC58
    ctx->pc = 0x346D74u;
    ctx->pc = 0x346D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D74u;
    // 0x346d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC58u, 0x346D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346D7Cu;
    // 0x346d7c: 0x0  nop
    ctx->pc = 0x346d7cu;
    // NOP
    ctx->pc = 0x346d80u;
}
