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

// Function: func_003B9EB0
// Address: 0x3b9eb0 - 0x3b9f60
void func_003B9EB0_0x3b9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9EB0_0x3b9eb0");
#endif

    switch (ctx->pc) {
        case 0x3b9ef4u: goto label_3b9ef4;
        case 0x3b9f08u: goto label_3b9f08;
        case 0x3b9f24u: goto label_3b9f24;
        case 0x3b9f2cu: goto label_3b9f2c;
        default: break;
    }

    ctx->pc = 0x3b9eb0u;

    // 0x3b9eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b9eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b9eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b9ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b9ec0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b9ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b9ec8: 0x2a421800  slti        $v0, $s2, 0x1800
    ctx->pc = 0x3b9ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x3b9ecc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9ECCu;
    {
        const bool branch_taken_0x3b9ecc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9ECCu;
        // 0x3b9ed0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ecc) {
            ctx->pc = 0x3B9EE0u;
            goto label_3b9ee0;
        }
    }
    ctx->pc = 0x3B9ED4u;
    // 0x3b9ed4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3b9ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9ED8u;
    {
        const bool branch_taken_0x3b9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9ED8u;
        // 0x3b9edc: 0x24840888  addiu       $a0, $a0, 0x888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ed8) {
            ctx->pc = 0x3B9EECu;
            goto label_3b9eec;
        }
    }
    ctx->pc = 0x3B9EE0u;
label_3b9ee0:
    // 0x3b9ee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9EE0u;
    {
        const bool branch_taken_0x3b9ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EE0u;
        // 0x3b9ee4: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ee0) {
            ctx->pc = 0x3B9F00u;
            goto label_3b9f00;
        }
    }
    ctx->pc = 0x3B9EE8u;
    // 0x3b9ee8: 0x248408b0  addiu       $a0, $a0, 0x8B0
    ctx->pc = 0x3b9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2224));
label_3b9eec:
    // 0x3b9eec: 0xc0ee778  jal         func_3B9DE0
    ctx->pc = 0x3B9EECu;
    SET_GPR_U32(ctx, 31, 0x3B9EF4u);
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3B9EECu, 0x3B9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9EF4u;
label_3b9ef4:
    // 0x3b9ef4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B9EF4u;
    {
        const bool branch_taken_0x3b9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EF4u;
        // 0x3b9ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ef4) {
            ctx->pc = 0x3B9F48u;
            goto label_3b9f48;
        }
    }
    ctx->pc = 0x3B9EFCu;
    // 0x3b9efc: 0x0  nop
    ctx->pc = 0x3b9efcu;
    // NOP
label_3b9f00:
    // 0x3b9f00: 0xc0ee7d8  jal         func_3B9F60
    ctx->pc = 0x3B9F00u;
    SET_GPR_U32(ctx, 31, 0x3B9F08u);
    ctx->pc = 0x3B9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9F60u, 0x3B9F00u, 0x3B9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F08u;
label_3b9f08:
    // 0x3b9f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9f10: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3b9f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b9f14: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B9F14u;
    {
        const bool branch_taken_0x3b9f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F14u;
        // 0x3b9f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f14) {
            ctx->pc = 0x3B9F44u;
            goto label_3b9f44;
        }
    }
    ctx->pc = 0x3B9F1Cu;
    // 0x3b9f1c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B9F1Cu;
    SET_GPR_U32(ctx, 31, 0x3B9F24u);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B9F1Cu, 0x3B9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F24u;
label_3b9f24:
    // 0x3b9f24: 0xc0ee7ee  jal         func_3B9FB8
    ctx->pc = 0x3B9F24u;
    SET_GPR_U32(ctx, 31, 0x3B9F2Cu);
    ctx->pc = 0x3B9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F24u;
    // 0x3b9f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9FB8u, 0x3B9F24u, 0x3B9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F2Cu;
label_3b9f2c:
    // 0x3b9f2c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3b9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x3b9f30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9f38: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3b9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x3b9f3c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3b9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3b9f40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b9f44:
    // 0x3b9f44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b9f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9f48:
    // 0x3b9f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b9f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9f50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b9f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9f54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b9f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F58u;
        // 0x3b9f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9F60u;
}
