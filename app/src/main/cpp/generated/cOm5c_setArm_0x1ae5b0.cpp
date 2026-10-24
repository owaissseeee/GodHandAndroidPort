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

// Function: cOm5c_setArm
// Address: 0x1ae5b0 - 0x1ae630
void cOm5c_setArm_0x1ae5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5c_setArm_0x1ae5b0");
#endif

    switch (ctx->pc) {
        case 0x1ae60cu: goto label_1ae60c;
        default: break;
    }

    ctx->pc = 0x1ae5b0u;

    // 0x1ae5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae5b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ae5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ae5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ae5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ae5bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ae5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ae5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ae5c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae5cc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE5CCu;
    {
        const bool branch_taken_0x1ae5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5CCu;
        // 0x1ae5d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5cc) {
            ctx->pc = 0x1AE618u;
            goto label_1ae618;
        }
    }
    ctx->pc = 0x1AE5D4u;
    // 0x1ae5d4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1ae5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae5d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5D8u;
        // 0x1ae5dc: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE618u;
            goto label_1ae618;
        }
    }
    ctx->pc = 0x1AE5E0u;
    // 0x1ae5e0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ae5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ae5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ae5f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae5f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ae5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ae5f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ae5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ae5fc: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1ae5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1ae600: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ae600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1ae604: 0xc06ab62  jal         func_1AAD88
    ctx->pc = 0x1AE604u;
    SET_GPR_U32(ctx, 31, 0x1AE60Cu);
    ctx->pc = 0x1AE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE604u;
    // 0x1ae608: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAD88u, 0x1AE604u, 0x1AE60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE60Cu;
label_1ae60c:
    // 0x1ae60c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ae60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ae610: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ae614: 0xac500604  sw          $s0, 0x604($v0)
    ctx->pc = 0x1ae614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1540), GPR_U32(ctx, 16));
label_1ae618:
    // 0x1ae618: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae61c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ae61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae620: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ae620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae628: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE628u;
        // 0x1ae62c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE630u;
}
