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

// Function: cSeData_ResolveBank
// Address: 0x2cf8e8 - 0x2cf9a8
void cSeData_ResolveBank_0x2cf8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_ResolveBank_0x2cf8e8");
#endif

    switch (ctx->pc) {
        case 0x2cf924u: goto label_2cf924;
        case 0x2cf964u: goto label_2cf964;
        case 0x2cf980u: goto label_2cf980;
        case 0x2cf990u: goto label_2cf990;
        default: break;
    }

    ctx->pc = 0x2cf8e8u;

    // 0x2cf8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf8ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cf8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cf8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf8fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2cf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf900: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CF900u;
    {
        const bool branch_taken_0x2cf900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF900u;
        // 0x2cf904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf900) {
            ctx->pc = 0x2CF994u;
            goto label_2cf994;
        }
    }
    ctx->pc = 0x2CF908u;
    // 0x2cf908: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf90c: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2cf910: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CF910u;
    {
        const bool branch_taken_0x2cf910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF910u;
        // 0x2cf914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf910) {
            ctx->pc = 0x2CF988u;
            goto label_2cf988;
        }
    }
    ctx->pc = 0x2CF918u;
    // 0x2cf918: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2cf918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cf91c: 0xc0b3f8a  jal         func_2CFE28
    ctx->pc = 0x2CF91Cu;
    SET_GPR_U32(ctx, 31, 0x2CF924u);
    ctx->pc = 0x2CF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF91Cu;
    // 0x2cf920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE28u, 0x2CF91Cu, 0x2CF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF924u;
label_2cf924:
    // 0x2cf924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF924u;
    {
        const bool branch_taken_0x2cf924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF924u;
        // 0x2cf928: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf924) {
            ctx->pc = 0x2CF934u;
            goto label_2cf934;
        }
    }
    ctx->pc = 0x2CF92Cu;
    // 0x2cf92c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CF92Cu;
    {
        const bool branch_taken_0x2cf92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF92Cu;
        // 0x2cf930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf92c) {
            ctx->pc = 0x2CF994u;
            goto label_2cf994;
        }
    }
    ctx->pc = 0x2CF934u;
label_2cf934:
    // 0x2cf934: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2cf934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2cf938: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2cf938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf93c: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x2cf93cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x2cf940: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cf940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cf944: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF944u;
    {
        const bool branch_taken_0x2cf944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF944u;
        // 0x2cf948: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf944) {
            ctx->pc = 0x2CF964u;
            goto label_2cf964;
        }
    }
    ctx->pc = 0x2CF94Cu;
    // 0x2cf94c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf950: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2cf954: 0x2484cf78  addiu       $a0, $a0, -0x3088
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954872));
    // 0x2cf958: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cf95c: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x2CF95Cu;
    SET_GPR_U32(ctx, 31, 0x2CF964u);
    ctx->pc = 0x2CF960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF95Cu;
    // 0x2cf960: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x2CF95Cu, 0x2CF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF964u;
label_2cf964:
    // 0x2cf964: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf968: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cf968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cf96c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cf970: 0x24843a40  addiu       $a0, $a0, 0x3A40
    ctx->pc = 0x2cf970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14912));
    // 0x2cf974: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x2cf974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cf978: 0xc0b4c38  jal         func_2D30E0
    ctx->pc = 0x2CF978u;
    SET_GPR_U32(ctx, 31, 0x2CF980u);
    ctx->pc = 0x2CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF978u;
    // 0x2cf97c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D30E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30E0u, 0x2CF978u, 0x2CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF980u;
label_2cf980:
    // 0x2cf980: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2cf980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2cf984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf988:
    // 0x2cf988: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CF988u;
    SET_GPR_U32(ctx, 31, 0x2CF990u);
    ctx->pc = 0x2CF98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF988u;
    // 0x2cf98c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CF988u, 0x2CF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF990u;
label_2cf990:
    // 0x2cf990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf994:
    // 0x2cf994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cf994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9A0u;
        // 0x2cf9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF9A8u;
}
